/************************************************************************/
/*      ansi_curses.c   A minimal implementation of the UNIX curses     */
/*                      library that works only on ANSI compliant       */
/*                      80x24 devices.  This exists to be small so that */
/*                      it can fit on RAM disks, etc.                   */
/*                                                                      */
/*                      See ANSI spec for details on dis_ routines.     */
/************************************************************************/
#include <ansi_curses.h>

#ifdef __DECC
#include <ioctl.h>
#endif

WINDOW *curwin, *diswin;

/************************************************************************/
/*	Return true if first time var is after second one.		*/
/************************************************************************/
int is_after( struct timeval *t0, struct timeval *t1 )
    {
    if( t0->tv_sec > t1->tv_sec ) return 1;
    if( t0->tv_sec < t1->tv_sec ) return 0;
    return ( t0->tv_usec > t1->tv_usec );
    }

/************************************************************************/
/*	Select for systems that select only works on sockets.		*/
/************************************************************************/
#define IS_SOCKET(fd)	( fd == fileno(stdin) )
int so_select( int nfds, fd_set *rfds, fd_set *wfds, fd_set *efds, struct timeval *tmp )
    {
    int select_return = select( nfds, rfds, wfds, efds, tmp );
#ifndef __DECC
    return select_return;
#else
    if( !rfds || select_return>=0 || errno!=ENOTSOCK ) return select_return;

    struct timeval poll_time = { 0, 100000 };
    struct timeval done_after, now;
    fd_set new_rfds;
    int num_in_buf;

    if( tmp )
        {
	gettimeofday( &done_after, (struct timeval *)NULL );
	done_after.tv_sec += tmp->tv_sec;
	done_after.tv_usec += tmp->tv_usec;
	done_after.tv_sec += (tmp->tv_sec / 1000000);
	done_after.tv_usec %= 1000000;
	}
    while( !tmp
    	|| gettimeofday( &now, (struct timeval *)NULL )
	|| is_after(&done_after,&now) )
	{
	FD_ZERO( &new_rfds );
	for( int fd=0; fd<nfds; fd++ )
	    {
	    if( FD_ISSET(fd,rfds) )
		{
		if( ! IS_SOCKET(fd) )
		    { FD_SET(fd,&new_rfds); }
		else if( ioctl(fd,FIONREAD,&num_in_buf)==0 && num_in_buf>0 )
		    {
		    FD_ZERO( rfds );
		    if( wfds ) FD_ZERO(wfds);
		    if( efds ) FD_ZERO(efds);
		    FD_SET(fd,&new_rfds);
		    return 1;
		    }
		}
	    }
	if( (select_return = select(nfds,&new_rfds,wfds,efds,&poll_time)) < 0 )
	    perror("select returned:");
	else if( select_return > 0 )
	    {
	    memcpy( (void*)rfds, (void*)&new_rfds, sizeof(new_rfds) );
	    return select_return;
	    }
	}
    return 0;
#endif
    }

/************************************************************************/
/*      Print error message (substituting current error message for %e) */
/*      If ex is 1, treat like a usage error.                           */
/*      If ex is not zero, use as exit status.                          */
/************************************************************************/
void print_error(int ex, const char *fmt, ...)
    {
    const char *cp1 = fmt;
    char buf[BUFSIZE];
    char *cp2 = buf;
    va_list ap;
    va_start(ap, fmt);

    while (*cp1)
    if (cp1[0] == '\r')
    {
    cp1++;
    }
    else if (cp1[0] == '\n')
    {
    *cp2++ = '\r';
    *cp2++ = *cp1++;
    }
    else if (cp1[0] != '%' || cp1[1] != 'e')
    {
    *cp2++ = *cp1++;
    }
    else
    {
    strcpy(cp2, STRERROR(errno));
    cp2 += strlen(STRERROR(errno));
    cp1 += 2;
    }
    *cp2 = 0;

    vfprintf(stderr, buf, ap);
    va_end(ap);
    if (ex)
    exit(ex);
    }

/************************************************************************/
/*      Send character sequence to clear an ANSI compliant terminal.    */
/************************************************************************/
void dis_clear()
    {
    printf("\033[H\033[J");
    }

/************************************************************************/
/*      Send character sequence to move cursor on an ANSI compliant     */
/*      terminal to specified row and column.                           */
/************************************************************************/
void dis_move(int r, int c)
    {
    printf("\033[%03d;%03dH", r + 1, c + 1);
    }

/************************************************************************/
/*      Send characters ANSI compliant terminal (with or without        */
/*      A_STANDOUT attribute, usually reverse-video).                   */
/************************************************************************/
void dis_output(int ch, int attr)
    {
    static int lastattr = 0;
    if ((attr & A_STANDOUT) != (lastattr & A_STANDOUT))
	{
	if (attr & A_STANDOUT)
	    printf("\033[7m\033[1m");
	else
	    printf("\033[27m\033[22m");
	lastattr ^= A_STANDOUT;
	}
    printf("%c", ch);
    }

/************************************************************************/
/*      Set where the next characters will be placed in the window 'w'  */
/*      to the specified row and column.                                */
/************************************************************************/
void wmove( WINDOW *w, int r, int c )
    {
    w->ss_row = r;
    w->ss_col = c;
    }

/************************************************************************/
/*      Add character to the specified window at the current location.  */
/*      Handle new-line.                                                */
/************************************************************************/
void waddch( WINDOW *w, int ch )
    {
    int r, c;
    switch (ch)
	{
	case '\n':    /* Clear the rest of the row and move down one */
	    r = w->ss_row;
	    for (c = w->ss_col; c < COLS; c++)
		{
		w->ss_data[r][c].chr = ' ';
		w->ss_data[r][c].att = w->ss_att;
		}
	    w->ss_col = 0;
	    w->ss_row = (r + 1) % LINES;
	    break;

	case '\r':    /* Set the line position back to beginning of the line */
	    w->ss_col = 0;
	    break;

	default:      /* Otherwise its a real char - put in screen and bump pos */
	    r = w->ss_row;
	    c = w->ss_col;
	    w->ss_data[r][c].chr = ch;
	    w->ss_data[r][c].att = w->ss_att;
	    if (!(w->ss_col = (w->ss_col + 1) % COLS))
		w->ss_row = (r + 1) % LINES;
	    break;
	}
    }

/************************************************************************/
/*      Output the minimal characters to update the display to be the   */
/*      same as the specified window.  That is, compare the current     */
/*      window 'w' with the displayed window and only update spots      */
/*      on the displayed window that are different from 'w'.            */
/************************************************************************/
void wrefresh( WINDOW *w )
    {
    int r, c;
    for (r = 0; r < LINES; r++)
    for (c = 0; c < COLS; c++)
    if (w->ss_data[r][c].chr != diswin->ss_data[r][c].chr ||
	w->ss_data[r][c].att != diswin->ss_data[r][c].att)
	{
	if (r != diswin->ss_row || c != diswin->ss_col)
	dis_move(diswin->ss_row = r, diswin->ss_col = c);
	dis_output(diswin->ss_data[r][c].chr = w->ss_data[r][c].chr,
	diswin->ss_data[r][c].att = w->ss_data[r][c].att);
	if (++(diswin->ss_col) > COLS)
	    {
	    diswin->ss_col = 0;
	    diswin->ss_row = (diswin->ss_row + 1) % LINES;
	    }
	}
    dis_move(diswin->ss_row = w->ss_row, diswin->ss_col = w->ss_col);
    fflush(stdout);
    }

/************************************************************************/
/*      Clear the specified window.                                     */
/************************************************************************/
void werase( WINDOW *w )
    {
    int r, c;
    for (r = 0; r < LINES; r++)
	for (c = 0; c < COLS; c++)
	    {
	    w->ss_data[r][c].chr = ' ';
	    w->ss_data[r][c].att = 0;
	    }
    w->ss_row = 0;
    w->ss_col = 0;
    w->ss_att = 0;
    }

/************************************************************************/
/*      Redraw the specified screen after a corruption (something else  */
/*      sent characters to the screen other than this program).         */
/*      Usually called by code after the user has sent a form feed.     */
/************************************************************************/
void redrawwin( WINDOW *w )
    {
    werase(diswin);
    dis_clear();
    wrefresh(w);
    }

/************************************************************************/
/*      Store the current serial settings so we can restore on exit.    */
/*      Setup the current window and the actually displayed window.     */
/************************************************************************/
WINDOW *initscr()
    {
    tcgetattr(fileno(stdin), &initial_termios);
    werase(curwin = (WINDOW*) malloc(sizeof (struct screenstruct)));
    werase(diswin = (WINDOW*) malloc(sizeof (struct screenstruct)));
    diswin->ss_row = diswin->ss_col = -1;
    dis_clear();
    return curwin;
    }

/************************************************************************/
/*      Free up the memory associated with the screens and reset the    */
/*      terminal characteristics to those at the time initscr called.   */
/************************************************************************/
void endwin()
    {
    free(curwin);
    free(diswin);
    dis_clear();
    tcsetattr(fileno(stdin), TCSADRAIN, &initial_termios);
    }

/************************************************************************/
/*      Set the specified attribute bit for future things written to    */
/*      to the current window.                                          */
/************************************************************************/
void attron(int att)
    {
    curwin->ss_att |= att;
    }

/************************************************************************/
/*      Clear the specified attribute bit for future things written to  */
/*      to the current window.                                          */
/************************************************************************/
void attroff(int att)
    {
    curwin->ss_att &= ~att;
    }

/************************************************************************/
/*      Add a string of characters into the specified window.           */
/************************************************************************/
void waddstr( WINDOW *w, const char *str )
    {
    while (*str) waddch(w, *str++);
    }

/************************************************************************/
/*      Put a character in the specified window row and colum.          */
/************************************************************************/
void wmvaddch( WINDOW *w, int row, int col, int ch )
    {
    wmove(w, row, col);
    waddch(w, ch);
    }

/************************************************************************/
/*      Put a string in the specified window row and colum.             */
/************************************************************************/
void wmvaddstr( WINDOW *w, int row, int col, const char *str )
    {
    wmove(w, row, col);
    waddstr(w, str);
    }

/************************************************************************/
/*      Put a sprintf formatted string in the specified window at the   */
/*      current row and column.                                         */
/************************************************************************/
void wprintw( WINDOW *w, const char *fmt, ... )
    {
    va_list ap;
    va_start(ap, fmt);
    char buf[BUFSIZE];
    vsprintf(buf, fmt, ap);
    waddstr(w, buf);
    }

/************************************************************************/
/*      Wrefresh the current window.                                    */
/************************************************************************/
void refresh()
    {
    wrefresh(curwin);
    }

/************************************************************************/
/*      Redrawwin the current window.                                   */
/************************************************************************/
void redraw()
    {
    redrawwin(curwin);
    }

/************************************************************************/
/*      Move to the specified row and column in the current window.     */
/************************************************************************/
void move( int r, int c )
    {
    wmove(curwin, r, c);
    }

/************************************************************************/
/*      Erase the current window.                                       */
/************************************************************************/
void erase()
    {
    werase(curwin);
    }

/************************************************************************/
/*      Add a character to the current window at the current location.  */
/************************************************************************/
void addch( int ch )
    {
    waddch(curwin, ch);
    }

/************************************************************************/
/*      Add a string to the current window at the current location.     */
/************************************************************************/
void addstr( const char *str )
    {
    waddstr(curwin, str);
    }

/************************************************************************/
/*      Add a character to the current window at the specified location.*/
/************************************************************************/
void mvaddch( int r, int c, int ch )
    {
    wmvaddch(curwin, r, c, ch);
    }

/************************************************************************/
/*      Add a string to the current window at the specified location.   */
/************************************************************************/
void mvaddstr( int r, int c, const char *str )
    {
    wmvaddstr(curwin, r, c, str);
    }

/************************************************************************/
/*      Add a sprintf formatted string to the current window.           */
/************************************************************************/
void printw( const char *fmt, ... )
    {
    char buf[BUFSIZE];
    va_list ap;
    va_start(ap, fmt);
    vsprintf(buf, fmt, ap);
    waddstr(curwin, buf);
    }

/************************************************************************/
/*      Clear the current window and update the screen.                 */
/************************************************************************/
void clear()
    {
    werase(curwin);
    wrefresh(curwin);
    }

/************************************************************************/
/*      Send a beep to the screen.                                      */
/************************************************************************/
void beep()
    {
    printf("\007");
    fflush(stdout);
    }

/************************************************************************/
/*      Send a flash to the screen.                                     */
/************************************************************************/
void flash()
    {
    fflush(stdout);
    }

/************************************************************************/
/*      Send a flash to the screen.                                     */
/************************************************************************/
int intrflush( WINDOW *w, bool bf )
    {
    fflush(stdout);
    return 0;
    }

/************************************************************************/
/*	Set how terminal handles carriage returns.			*/
/************************************************************************/
void nonl()
    {
    }

/************************************************************************/
/*	Set how terminal handles carriage returns.			*/
/************************************************************************/
void timeout(int delay)
    {
    }

/************************************************************************/
/*      Read a character from the keyboard.  Wait for a sequence of     */
/*      characters in the event of a function key.                      */
/************************************************************************/
int getch_wait = 0;
int getch()
    {
    char getch_buf[1000];
    int num_in_getch_buf;
    fd_set readfds;
    struct timeval tv;
    struct timeval *timeoutp;
    tv.tv_sec = getch_wait / 1000000;
    tv.tv_usec = getch_wait % 1000000;
    timeoutp = (getch_wait ? &tv : NULL);
    FD_ZERO(&readfds);
    FD_SET(fileno(stdin), &readfds);
    for (num_in_getch_buf = 0; num_in_getch_buf < 1000;)
	{
	if (fe_select(1, &readfds, NULL, NULL, timeoutp) < 0)
	    print_error(2, "Select failed:  %e");
	if (!FD_ISSET(fileno(stdin), &readfds))
	    break;
	if (read(fileno(stdin), &getch_buf[num_in_getch_buf], 1) < 1)
	    break;
	getch_buf[++num_in_getch_buf] = 0;
	if (getch_buf[0] != '\033')
	    break;
	tv.tv_sec = 0;
	tv.tv_usec = 100000;
	timeoutp = &tv;
	}
    if (num_in_getch_buf <= 0)
	return ERR;
    if (num_in_getch_buf == 1 || getch_buf[0] != '\033')
	return getch_buf[0];
    if (getch_buf[1] != '[')
	return ERR;
    switch (getch_buf[2])
	{
	case 'A': return KEY_UP;
	case 'B': return KEY_DOWN;
	case 'C': return KEY_RIGHT;
	case 'D': return KEY_LEFT;
	case 'F': return KEY_END;
	case '3': return KEY_DC;
	case '4': return KEY_END;
	}
    return ERR;
    }

/************************************************************************/
/*      Turn echo off on the current serial line.                       */
/************************************************************************/
void noecho()
    {
    struct termios tblock;

    tcgetattr(fileno(stdin), &tblock);
    tblock.c_lflag &= ~(ECHO);
    tcsetattr(fileno(stdin), TCSADRAIN, &tblock);
    getch_wait = 0;
    }

/************************************************************************/
/*      Turn echo on on the current serial line.                        */
/************************************************************************/
void echo()
    {
    struct termios tblock;

    tcgetattr(fileno(stdin), &tblock);
    tblock.c_lflag |= (ECHO);
    tcsetattr(fileno(stdin), TCSADRAIN, &tblock);
    getch_wait = 0;
    }

/************************************************************************/
/*      Turn off cbreak mode on the current serial line.                */
/************************************************************************/
void nocbreak()
    {
    struct termios tblock;

    tcgetattr(fileno(stdin), &tblock);
    tblock.c_lflag |= (ICANON | ISIG);
    tcsetattr(fileno(stdin), TCSADRAIN, &tblock);
    }

/************************************************************************/
/*      Turn on cbreak mode on the current serial line.                 */
/************************************************************************/
void cbreak()
    {
    struct termios tblock;

    tcgetattr(fileno(stdin), &tblock);
    tblock.c_lflag &= ~(ICANON | ISIG);
    tcsetattr(fileno(stdin), TCSADRAIN, &tblock);
    getch_wait = 0;
    }

/************************************************************************/
/************************************************************************/
int keypad( WINDOW *w, bool bf )
    {
    return 0;
    }

/************************************************************************/
/*      Specify tenths of a seconds to wait for characters.             */
/************************************************************************/
void halfdelay(int tenths)
    {
    cbreak();
    getch_wait = tenths * 100000;
    }
