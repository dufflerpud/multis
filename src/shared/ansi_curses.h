/************************************************************************/
/*      ansi_curses.c   A minimal implementation of the UNIX curses     */
/*                      library that works only on ANSI compliant       */
/*                      80x24 devices.  This exists to be small so that */
/*                      it can fit on RAM disks, etc.                   */
/*                                                                      */
/*                      See ANSI spec for details on dis_ routines.     */
/************************************************************************/
#ifndef _ANSI_CURSES_HEADER
#define _ANSI_CURSES_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <time.h>

/************************************************************************/
/*      Defines for the small curses library.                           */
/************************************************************************/

/* The screen dimensions */
#define LINES           24
#define COLS            80

/* The only screen attribute we support (reverse video) */
#define A_STANDOUT      1
#define A_CHARTEXT	0x7f

/* getch() returns ERR when timing out (waited longer than halfdelay). */
#define ERR             -1

/* Function key values returned */
#define KEY_BACKSPACE   0407
#define KEY_DC          0512
#define KEY_DOWN        0402
#define KEY_UP          0403
#define KEY_LEFT        0404
#define KEY_RIGHT       0405
#define KEY_END         0550

/* Function extern prototypes */
typedef unsigned chtype;

#ifdef notdef
typedef unsigned bool;
#endif

#ifdef __DECC
#define tcgetattr(fd,termioblock)
#define tcsetattr(fd,action,termioblock)
#else
#ifdef notdef
     extern int tcgetattr(int fd, void *termios_p);
     extern int tcsetattr(int fd, int optional_actions, void *termios_p);
     extern int fileno( FILE *fp );
#endif
#endif

#define BUFSIZE         10240

extern void print_error(int, const char *, ...);

struct termios initial_termios;

struct charpos          /* For every position on the screen we have a */
{
  char chr;             /* the character being displayed */
  char att;             /* and a flag variable (only one flag A_STANDOUT) */
};

struct screenstruct     /* Each screen has */
{
  struct charpos ss_data[LINES][COLS]; /* Data for each position on scren */
  int ss_row, ss_col;   /* the row and column where next output goes */
  int ss_att;           /* the attribute for next chars put in screen */
};

#define getyx(w,y,x)	{ y=(w)->ss_row; x=(w)->ss_col; }
#define mvwinch(w,y,x)	((w)->ss_data[y][x].chr)
#define winch(w)	mvwinch(w,(w)->ss_row,(w)->ss_col)
#define inch()		winch(curwin,curwin->ss_row,curwin->ss_col)
#define mvinch(y,x)	mvwinch(curwin,y,x)

typedef struct screenstruct WINDOW;

#if defined linux || defined __sun || defined __HAIKU__ || __DECC
#define HAVE_STRERROR
#endif

#ifdef HAVE_STRERROR                     /* For STRERROR */
#include <errno.h>
#define STRERROR(x) strerror(x)
#ifndef __DECC
extern char *strerror(int);
#endif
#else
#if ! defined __CYGWIN__ && ! defined USE_NATIVE_WINDOWS
extern const char * const sys_errlist[];
#endif  
#define STRERROR(x) sys_errlist[x]
#endif
extern int errno;

extern void timeout(int delay);
extern void cbreak(void);
extern int intrflush(WINDOW *win, bool cf);
extern int keypad(WINDOW *win, bool bf);
extern int wattron(WINDOW *win,int attrs);
extern void wbkgdset(WINDOW *win, chtype ch);
extern int wbkgd(WINDOW *win, chtype ch);
extern void redrawwin(WINDOW *win);
extern void endwin();
extern WINDOW *initscr();
extern void refresh();
extern void wrefresh(WINDOW *win);
extern void waddch(WINDOW *win,int ch);
extern void addch(int ch);
extern void addstr(const char *);
extern void printw(const char *, ...);
extern void erase();
extern void werase(WINDOW *win);
extern void clear();
extern void wclear(WINDOW *win);
extern void nocbreak();
extern void echo();
extern void noecho();
extern void halfdelay(int);
extern void move(int, int);
extern void wmove(WINDOW *win,int row,int col);
extern void beep();
extern void attron(int);
extern void attroff(int);
extern int getch();
extern void flash(void);

extern void nonl();

#ifndef __DECC
#define fe_select(nfds,rfds,wfds,efds,tmp) select(nfds,rfds,wfds,efds,tmp)
#else
#define fe_select(nfds,rfds,wfds,efds,tmp) so_select(nfds,rfds,wfds,efds,tmp)
extern int so_select( int nfds, fd_set *rfds, fd_set *wfds, fd_set *efds,
			struct timeval *tmp );
#endif

#endif
