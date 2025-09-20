/*  -- translated by f2c (version 20160102).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* Common Block Declarations */

struct {
    integer iclwhi, icldbl, iclred, icllbl, iclpur, iclgre, iclyel, iclbla;
} col_;

#define col_1 col_

/* Table of constant values */

static integer c__1 = 1;
static integer c__3 = 3;
static integer c__60 = 60;
static logical c_true = TRUE_;
static logical c_false = FALSE_;
static integer c__2 = 2;
static integer c__58 = 58;
static integer c__4 = 4;
static integer c__22 = 22;
static integer c__24 = 24;
static integer c__63 = 63;
static integer c__61 = 61;
static integer c__23 = 23;
static integer c__31 = 31;
static integer c__26 = 26;
static integer c_n1 = -1;
static integer c__500 = 500;
static integer c__12 = 12;
static integer c__88 = 88;
static integer c__79 = 79;
static integer c__8 = 8;
static integer c__10 = 10;

/* 	@HDR@	$Id$ */
/* 	@HDR@		Copyright 1982-2025 by */
/* 	@HDR@		Christopher Caldwell/Brightsands */
/* 	@HDR@		P.O. Box 401, Bailey Island, ME 04003 */
/* 	@HDR@		All Rights Reserved */
/* 	@HDR@ */
/* 	@HDR@	This software comprises unpublished confidential information */
/* 	@HDR@	of Brightsands and may not be used, copied or made available */
/* 	@HDR@	to anyone, except in accordance with the license under which */
/* 	@HDR@	it is furnished. */
/* 	*** CUBIC.FOR *** */
/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static integer wr[304]	/* was [76][4] */ = { 111,211,311,411,111,121,
	    131,141,111,411,112,212,312,412,112,122,132,142,112,412,113,213,
	    313,413,113,123,133,143,113,413,114,214,314,414,114,124,134,144,
	    114,414,111,121,131,141,211,221,231,241,311,321,331,341,411,421,
	    431,441,111,114,211,214,311,314,411,414,111,114,121,124,131,134,
	    141,144,111,411,141,114,121,221,321,421,211,221,231,241,221,321,
	    122,222,322,422,212,222,232,242,222,322,123,223,323,423,213,223,
	    233,243,223,323,124,224,324,424,214,224,234,244,224,324,112,122,
	    132,142,212,222,232,242,312,322,332,342,412,422,432,442,122,123,
	    222,223,322,323,422,423,212,213,222,223,232,233,242,243,222,322,
	    232,223,131,231,331,431,311,321,331,341,331,231,132,232,332,432,
	    312,322,332,342,332,232,133,233,333,433,313,323,333,343,333,233,
	    134,234,334,434,314,324,334,344,334,234,113,123,133,143,213,223,
	    233,243,313,323,333,343,413,423,433,443,133,132,233,232,333,332,
	    433,432,313,312,323,322,333,332,343,342,333,233,323,332,141,241,
	    341,441,411,421,431,441,441,141,142,242,342,442,412,422,432,442,
	    442,142,143,243,343,443,413,423,433,443,443,143,144,244,344,444,
	    414,424,434,444,444,144,114,124,134,144,214,224,234,244,314,324,
	    334,344,414,424,434,444,144,141,244,241,344,341,444,441,414,411,
	    424,421,434,431,444,441,444,144,414,441 };

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, j, x, y, z__, com[60], par[20], ipl, ilen;
    extern /* Subroutine */ int eval_();
    static integer ival, move[64]	/* was [4][4][4] */, turn;
    extern /* Subroutine */ int pback_();
    static integer ichar;
    extern /* Subroutine */ int close_();
    static logical coord;
    static integer comov[2];
    static logical privd;
    static integer moves[192]	/* was [64][3] */;
    extern /* Subroutine */ int pstop_(), allcap_(), grafof_();
    extern integer iserch_();
    static integer filesp[13];
    extern /* Subroutine */ int number_(), chrwat_();
    static integer player;
    extern /* Subroutine */ int pcolor_(), updscr_(), getmov_();
    extern integer isxbit_();
    extern /* Subroutine */ int chrout_(), string_(), getstr_(), cursor_(), 
	    settty_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer wr(76,4), move(4,4,4), com(60), par(20) >*/
/*< 	integer comov( 2 ), moves( 64, 3 ), turn, ipl, player >*/
/*< 	logical coord, errflg, privd >*/
/*< 	integer filesp(13) >*/
/*< 	commo >*/
/*< 	data  >*/
/*< 	if( iclwhi .ne. 0 ) goto 3 >*/
    if (col_1.iclwhi != 0) {
	goto L3;
    }
/*< 	iclwhi = 1 >*/
    col_1.iclwhi = 1;
/*< 	icldbl = 2 >*/
    col_1.icldbl = 2;
/*< 	iclred = 3 >*/
    col_1.iclred = 3;
/*< 	icllbl = 4 >*/
    col_1.icllbl = 4;
/*< 	iclpur = 5 >*/
    col_1.iclpur = 5;
/*< 	iclgre = 6 >*/
    col_1.iclgre = 6;
/*< 	iclyel = 7 >*/
    col_1.iclyel = 7;
/*< 	iclbla = 8 >*/
    col_1.iclbla = 8;
/*< 3	call pback( iclbla ) >*/
L3:
    pback_(&col_1.iclbla);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call settty( com, par, ilen, privd, filesp ) >*/
    settty_(com, par, &ilen, &privd, filesp);
/*< 	if( i >*/
    i__1 = isxbit_("DEBUG~", (ftnlen)6);
    if (ilen > 0 && iserch_(par, &i__1, &ilen) != 0 && privd) {
	goto L1000;
    }
/*< 100	call string(1,'Do you want the computer to go first? ^B') >*/
L100:
    string_(&c__1, "Do you want the computer to go first? ^B", (ftnlen)40);
/*< 	call getstr(3, com, 60, ilen ) >*/
    getstr_(&c__3, com, &c__60, &ilen);
/*< 	if( ilen .eq. 0 ) goto 100 >*/
    if (ilen == 0) {
	goto L100;
    }
/*< 	call allcap( com, ilen ) >*/
    allcap_(com, &ilen);
/*< 	if( com(1) .ne. 89 .and. com(1) .ne. 78 ) goto 100 >*/
    if (com[0] != 89 && com[0] != 78) {
	goto L100;
    }
/*< 	comov(1) = com(1) >*/
    comov[0] = com[0];
/*< 200	call string(1,'Do you want the computer to go second? ^B') >*/
L200:
    string_(&c__1, "Do you want the computer to go second? ^B", (ftnlen)41);
/*< 	call getstr(3, com, 60, ilen ) >*/
    getstr_(&c__3, com, &c__60, &ilen);
/*< 	if( ilen .eq. 0 ) goto 200 >*/
    if (ilen == 0) {
	goto L200;
    }
/*< 	call allcap( com, ilen ) >*/
    allcap_(com, &ilen);
/*< 	if( com(1) .ne. 89 .and. com(1) .ne. 78 ) goto 200 >*/
    if (com[0] != 89 && com[0] != 78) {
	goto L200;
    }
/*< 	comov(2) = com(1) >*/
    comov[1] = com[0];
/*< 250	call string(1,'Do you want the coordinates printed? ^B') >*/
L250:
    string_(&c__1, "Do you want the coordinates printed? ^B", (ftnlen)39);
/*< 	call getstr(3, com, 60, ilen ) >*/
    getstr_(&c__3, com, &c__60, &ilen);
/*< 	if( ilen .eq. 0 ) goto 250 >*/
    if (ilen == 0) {
	goto L250;
    }
/*< 	call allcap( com, ilen ) >*/
    allcap_(com, &ilen);
/*< 	if( com(1) .ne. 89 .and. com(1) .ne. 78 ) goto 250 >*/
    if (com[0] != 89 && com[0] != 78) {
	goto L250;
    }
/*< 	coord = .true. >*/
    coord = TRUE_;
/*< 	if( com(1) .eq. 78 ) coord = .false. >*/
    if (com[0] == 78) {
	coord = FALSE_;
    }
/*< 	call updscr( moves, move, .true., coord ) >*/
    updscr_(moves, move, &c_true, &coord);
/*< 	player = 1 >*/
    player = 1;
/*< 300	call getmov(com,move,wr,player,comov(player),coord,moves,turn) >*/
L300:
    getmov_(com, move, wr, &player, &comov[player - 1], &coord, moves, &turn);
/*< 	call eval( wr, move, ipl ) >*/
    eval_(wr, move, &ipl);
/*< 	call updscr( moves, move, .false., coord ) >*/
    updscr_(moves, move, &c_false, &coord);
/*< 	player = 3-player >*/
    player = 3 - player;
/*< 	if( ipl .lt. 0 ) goto 300 >*/
    if (ipl < 0) {
	goto L300;
    }
/*< 400	call cursor( 1, 2 ) >*/
/* L400: */
    cursor_(&c__1, &c__2);
/*< 	if( i >*/
    if (ipl == 0) {
	string_(&c__1, "Stalemate.                             ^M^J^E", (
		ftnlen)45);
    }
/*< 	if( i >*/
    if (ipl == 1) {
	string_(&c__1, "X wins.                                ^M^J^E", (
		ftnlen)45);
    }
/*< 	if( i >*/
    if (ipl == 2) {
	string_(&c__1, "O wins.                                ^M^J^E", (
		ftnlen)45);
    }
/*< 500	call string(1,'Do you want to play again?  ^B') >*/
L500:
    string_(&c__1, "Do you want to play again?  ^B", (ftnlen)30);
/*< 	call getstr(3, com, 60, ilen ) >*/
    getstr_(&c__3, com, &c__60, &ilen);
/*< 	if( ilen .eq. 0 ) goto 500 >*/
    if (ilen == 0) {
	goto L500;
    }
/*< 	call allcap( com, ilen ) >*/
    allcap_(com, &ilen);
/*< 	if( com(1) .ne. 89 .and. com(1) .ne. 78 ) goto 500 >*/
    if (com[0] != 89 && com[0] != 78) {
	goto L500;
    }
/*< 	if( com(1) .eq. 78 ) goto 1300 >*/
    if (com[0] == 78) {
	goto L1300;
    }
/*< 	do 600 x = 1, 4 >*/
    for (x = 1; x <= 4; ++x) {
/*< 	    do 600 y = 1, 4 >*/
	for (y = 1; y <= 4; ++y) {
/*< 		do 600 z = 1, 4 >*/
	    for (z__ = 1; z__ <= 4; ++z__) {
/*< 		    move( x, y, z ) = 0 >*/
		move[x + (y + (z__ << 2) << 2) - 21] = 0;
/*< 600	continue >*/
/* L600: */
	    }
	}
    }
/*< 	do 650 i = 1, turn >*/
    i__1 = turn;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    moves( i, 1 ) = 0 >*/
	moves[i__ - 1] = 0;
/*< 650	continue >*/
/* L650: */
    }
/*< 	turn = 0 >*/
    turn = 0;
/*< 	goto 100 >*/
    goto L100;
/*< 1000	call updscr( moves, move, .true., .true. ) >*/
L1000:
    updscr_(moves, move, &c_true, &c_true);
/*< 	do 1200 i = 1, 76 >*/
    for (i__ = 1; i__ <= 76; ++i__) {
/*< 	    call cursor( 1, 2 ) >*/
	cursor_(&c__1, &c__2);
/*< 	    call number(2, i+0, 2 ) >*/
	i__1 = i__;
	number_(&c__2, &i__1, &c__2);
/*< 	    call chrout(58) >*/
	chrout_(&c__58);
/*< 	    do 1150 j = 1, 4 >*/
	for (j = 1; j <= 4; ++j) {
/*< 		ival = wr( i, j ) >*/
	    ival = wr[i__ + j * 76 - 77];
/*< 		call number(2, ival, 4 ) >*/
	    number_(&c__2, &ival, &c__4);
/*< 		x = ival/100 >*/
	    x = ival / 100;
/*< 		y = ival/10 - 10*x >*/
	    y = ival / 10 - x * 10;
/*< 		z = mod( ival, 10 ) >*/
	    z__ = ival % 10;
/*< 		move( x, y, z ) = 3 >*/
	    move[x + (y + (z__ << 2) << 2) - 21] = 3;
/*< 1150	    continue >*/
/* L1150: */
	}
/*< 	    call updscr( moves, move, .false., .true. ) >*/
	updscr_(moves, move, &c_false, &c_true);
/*< 	    call cursor( 22, 2 ) >*/
	cursor_(&c__22, &c__2);
/*< 	    call string(1,'Go: ^B') >*/
	string_(&c__1, "Go: ^B", (ftnlen)6);
/*< 	    call chrwat( ichar ) >*/
	chrwat_(&ichar);
/*< 	    do 1170 j = 1, 4 >*/
	for (j = 1; j <= 4; ++j) {
/*< 		x = wr( i, j )/100 >*/
	    x = wr[i__ + j * 76 - 77] / 100;
/*< 		y = wr( i, j )/10 - 10*x >*/
	    y = wr[i__ + j * 76 - 77] / 10 - x * 10;
/*< 		z = mod( wr( i, j ), 10 ) >*/
	    z__ = wr[i__ + j * 76 - 77] % 10;
/*< 		move( x, y, z ) = 0 >*/
	    move[x + (y + (z__ << 2) << 2) - 21] = 0;
/*< 1170	    continue >*/
/* L1170: */
	}
/*< 1200	continue >*/
/* L1200: */
    }
/*< 1300	call close( 1 ) >*/
L1300:
    close_(&c__1);
/*< 	call grafof >*/
    grafof_();
/*< 	call pstop >*/
    pstop_();
/*< 	end >*/
} /* fmain_ */


/*< 	subroutine updscr( moves, move, newscr, coord ) >*/
/* Subroutine */ int updscr_(moves, move, newscr, coord)
integer *moves, *move;
logical *newscr, *coord;
{
    /* Initialized data */

    static integer pieces[5] = { 46,88,79,43,64 };

    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, x, y, z__, iv;
    extern integer job_();
    extern /* Subroutine */ int nap_();
    static logical used[64];
    extern /* Subroutine */ int update_(), clrscr_(), number_(), pcolor_();
    static integer oldmov[64]	/* was [4][4][4] */, colors[5];
    extern /* Subroutine */ int chrout_(), string_(), cursor_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer move( 4, 4, 4 ), oldmov( 4, 4, 4 ), moves( 64, 3 ) >*/
/*< 	logical newscr, coord, used(64) >*/
/*< 	integer pieces(5), colors(5) >*/
/*< 	commo >*/
/*< 	data pieces/46,88,79,43,64/ >*/
    /* Parameter adjustments */
    move -= 21;
    moves -= 65;

    /* Function Body */
/*< 	if( colors(1) .ne. 0 ) goto 3 >*/
    if (colors[0] != 0) {
	goto L3;
    }
/*< 	colors(1) = iclwhi >*/
    colors[0] = col_1.iclwhi;
/*< 	colors(2) = iclyel >*/
    colors[1] = col_1.iclyel;
/*< 	colors(3) = icllbl >*/
    colors[2] = col_1.icllbl;
/*< 	colors(4) = iclred >*/
    colors[3] = col_1.iclred;
/*< 	colors(5) = iclpur >*/
    colors[4] = col_1.iclpur;
/*< 3	if( .not. newscr ) goto 50 >*/
L3:
    if (! (*newscr)) {
	goto L50;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 3, 24 ) >*/
    cursor_(&c__3, &c__24);
/*< 	call string(1,'X moves^M^J-------------^E') >*/
    string_(&c__1, "X moves^M^J-------------^E", (ftnlen)26);
/*< 	call cursor( 63, 24 ) >*/
    cursor_(&c__63, &c__24);
/*< 	call string(1,'O moves^E') >*/
    string_(&c__1, "O moves^E", (ftnlen)9);
/*< 	call cursor( 61, 23 ) >*/
    cursor_(&c__61, &c__23);
/*< 	call string(1,'-------------^E') >*/
    string_(&c__1, "-------------^E", (ftnlen)15);
/*< 	if( .not. coord ) goto 50 >*/
    if (! (*coord)) {
	goto L50;
    }
/*< 	do 10 y = 1, 4 >*/
    for (y = 1; y <= 4; ++y) {
/*< 	    do 10 z = 1, 4 >*/
	for (z__ = 1; z__ <= 4; ++z__) {
/*< 		call cursor( 28-y, 5*z+y-2 ) >*/
	    i__1 = 28 - y;
	    i__2 = z__ * 5 + y - 2;
	    cursor_(&i__1, &i__2);
/*< 		call number(1, y*10+z ) >*/
	    i__1 = y * 10 + z__;
	    number_(&c__1, &i__1);
/*< 		call cursor( 51-y, 5*z+y-2 ) >*/
	    i__1 = 51 - y;
	    i__2 = z__ * 5 + y - 2;
	    cursor_(&i__1, &i__2);
/*< 		call number(1, y*10+z ) >*/
	    i__1 = y * 10 + z__;
	    number_(&c__1, &i__1);
/*< 10	continue >*/
/* L10: */
	}
    }
/*< 	call cursor( 31, 3 ) >*/
    cursor_(&c__31, &c__3);
/*< 	do 20 x = 1, 4 >*/
    for (x = 1; x <= 4; ++x) {
/*< 	    call number(2, x+0, 4 ) >*/
	i__1 = x;
	number_(&c__2, &i__1, &c__4);
/*< 20	continue >*/
/* L20: */
    }
/*< 	call cursor( 26, 23 ) >*/
    cursor_(&c__26, &c__23);
/*< 	do 30 x = 1, 4 >*/
    for (x = 1; x <= 4; ++x) {
/*< 	    call number(2, x+0, 4 ) >*/
	i__1 = x;
	number_(&c__2, &i__1, &c__4);
/*< 30	continue >*/
/* L30: */
    }
/*< 50	do 100 x = 1, 4 >*/
L50:
    for (x = 1; x <= 4; ++x) {
/*< 	    do 100 y = 1, 4 >*/
	for (y = 1; y <= 4; ++y) {
/*< 		do 100 z = 1, 4 >*/
	    for (z__ = 1; z__ <= 4; ++z__) {
/*< 		     >*/
		if (! (*newscr) && move[x + (y + (z__ << 2) << 2)] == oldmov[
			x + (y + (z__ << 2) << 2) - 21]) {
		    goto L100;
		}
/*< 			oldmov(x,y,z) = move(x,y,z) >*/
		oldmov[x + (y + (z__ << 2) << 2) - 21] = move[x + (y + (z__ <<
			 2) << 2)];
/*< 			call cursor( 30+4*x-y, 5*z+y-2 ) >*/
		i__1 = (x << 2) + 30 - y;
		i__2 = z__ * 5 + y - 2;
		cursor_(&i__1, &i__2);
/*< 			call pcolor( colors(move(x,y,z)+1) ) >*/
		pcolor_(&colors[move[x + (y + (z__ << 2) << 2)]]);
/*< 			call chrout( pieces(move(x,y,z)+1) ) >*/
		chrout_(&pieces[move[x + (y + (z__ << 2) << 2)]]);
/*< 100	continue >*/
L100:
		;
	    }
	}
    }
/*< 	do 200 i = 1, 64 >*/
    for (i__ = 1; i__ <= 64; ++i__) {
/*< 	    if( newscr ) used(i) = .false. >*/
	if (*newscr) {
	    used[i__ - 1] = FALSE_;
	}
/*< 	    if( (moves(i,1) .ne. 0 ) .eq. used(i) ) goto 200 >*/
	if (moves[i__ + 64] != 0 == used[i__ - 1]) {
	    goto L200;
	}
/*< 	    used(i) = (moves(i,1).ne.0) >*/
	used[i__ - 1] = moves[i__ + 64] != 0;
/*< 	    iv = (i+1)/2 >*/
	iv = (i__ + 1) / 2;
/*< 	    call cursor(mod(i+1,2)*60+(iv/17)*8+1,22-mod(iv-1,16)) >*/
	i__1 = (i__ + 1) % 2 * 60 + (iv / 17 << 3) + 1;
	i__2 = 22 - (iv - 1) % 16;
	cursor_(&i__1, &i__2);
/*< 	    if( moves(i,1).eq.0) call string(1,'     ^E') >*/
	if (moves[i__ + 64] == 0) {
	    string_(&c__1, "     ^E", (ftnlen)7);
	}
/*< 	    if( moves(i,1).eq.0) goto 200 >*/
	if (moves[i__ + 64] == 0) {
	    goto L200;
	}
/*< 	    call number(1, moves( i, 1 ) ) >*/
	number_(&c__1, &moves[i__ + 64]);
/*< 	    call number(1, -moves( i, 2 ) ) >*/
	i__1 = -moves[i__ + 128];
	number_(&c__1, &i__1);
/*< 	    call number(1, -moves( i, 3 ) ) >*/
	i__1 = -moves[i__ + 192];
	number_(&c__1, &i__1);
/*< 200	continue >*/
L200:
	;
    }
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	if( job(-1) .ne. 0 ) return >*/
    if (job_(&c_n1) != 0) {
	return 0;
    }
/*< 	call update >*/
    update_();
/*< 	call nap( 500, 12 ) >*/
    nap_(&c__500, &c__12);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* updscr_ */


/*< 	subroutine getmov(com,move,wr,ipl,ichar,coord,moves,turn) >*/
/* Subroutine */ int getmov_(com, move, wr, ipl, ichar, coord, moves, turn)
integer *com, *move, *wr, *ipl, *ichar;
logical *coord;
integer *moves, *turn;
{
    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer x, y, z__, mx, my, mz, ich, ilen, ibest;
    extern /* Subroutine */ int tstop_(), allcap_(), grafof_(), grafon_();
    extern integer ivalue_();
    extern /* Subroutine */ int curbuf_(), getnum_(), updscr_(), chrout_(), 
	    string_(), getstr_(), cursor_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer move( 4, 4, 4 ), wr( 76, 4 ), com( 60 ), moves( 64, 3 ) >*/
/*< 	integer turn, ipl >*/
/*< 	logical coord, errflg >*/
/*< 	call cursor( 1, 1 ) >*/
    /* Parameter adjustments */
    moves -= 65;
    wr -= 77;
    move -= 21;
    --com;

    /* Function Body */
    cursor_(&c__1, &c__1);
/*< 	call string(1,'                  ^E') >*/
    string_(&c__1, "                  ^E", (ftnlen)20);
/*< 100	call cursor( 1, 2 ) >*/
L100:
    cursor_(&c__1, &c__2);
/*< 	if( ipl .eq. 1 ) call chrout(88) >*/
    if (*ipl == 1) {
	chrout_(&c__88);
    }
/*< 	if( ipl .eq. 2 ) call chrout(79) >*/
    if (*ipl == 2) {
	chrout_(&c__79);
    }
/*< 	call string(1,'''s move:                           ^E') >*/
    string_(&c__1, "'s move:                           ^E", (ftnlen)37);
/*< 	if( ichar .eq. 89 ) goto 400 >*/
    if (*ichar == 89) {
	goto L400;
    }
/*< 	call cursor( 12, 2 ) >*/
    cursor_(&c__12, &c__2);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call getstr(3, com, 60, ilen ) >*/
    getstr_(&c__3, &com[1], &c__60, &ilen);
/*< 	if( ilen .eq. 0 ) goto 100 >*/
    if (ilen == 0) {
	goto L100;
    }
/*< 	call allcap( com, ilen ) >*/
    allcap_(&com[1], &ilen);
/*< 	if( com(1) .eq. 71 ) ichar = 89 >*/
    if (com[1] == 71) {
	*ichar = 89;
    }
/*< 	if( com(1) .eq. 71 .or. com(1) .eq. 77 ) goto 400 >*/
    if (com[1] == 71 || com[1] == 77) {
	goto L400;
    }
/*< 	if( com(1) .eq. 85 ) goto 1100 >*/
    if (com[1] == 85) {
	goto L1100;
    }
/*< 	if( com(1) .ne. 69 ) goto 105 >*/
    if (com[1] != 69) {
	goto L105;
    }
/*< 	call grafof >*/
    grafof_();
/*< 	call tstop >*/
    tstop_();
/*< 	call grafon >*/
    grafon_();
/*< 105	if >*/
L105:
    if (com[1] == 69 || com[1] == 78) {
	updscr_(&moves[65], &move[21], &c_true, coord);
    }
/*< 	if( com(1) .eq. 69 .or. com(1) .eq. 78 ) goto 100 >*/
    if (com[1] == 69 || com[1] == 78) {
	goto L100;
    }
/*< 	call getnum(8, com, ilen, x, 10, y, 10, z, 10 ) >*/
    getnum_(&c__8, &com[1], &ilen, &x, &c__10, &y, &c__10, &z__, &c__10);
/*< 	y = iabs( y ) >*/
    y = abs(y);
/*< 	z = iabs( z ) >*/
    z__ = abs(z__);
/*< 	if( x.lt.111 .or. x.gt.444 .or. y.ne.0 .or. z.ne.0 ) goto 125 >*/
    if (x < 111 || x > 444 || y != 0 || z__ != 0) {
	goto L125;
    }
/*< 	z = mod( x, 10 ) >*/
    z__ = x % 10;
/*< 	y = x/10 - 10*(x/100) >*/
    y = x / 10 - x / 100 * 10;
/*< 	x = x/100 >*/
    x /= 100;
/*< 125	if >*/
L125:
    if (x >= 1 && x <= 4 && y >= 1 && y <= 4 && z__ >= 1 && z__ <= 4) {
	goto L150;
    }
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call string(1,'^GIllegal move.     ^E') >*/
    string_(&c__1, "^GIllegal move.     ^E", (ftnlen)22);
/*< 	goto 100 >*/
    goto L100;
/*< 150	if( move(x,y,z) .eq. 0 ) goto 1000 >*/
L150:
    if (move[x + (y + (z__ << 2) << 2)] == 0) {
	goto L1000;
    }
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call string(1,'^GAlready occupied. ^E') >*/
    string_(&c__1, "^GAlready occupied. ^E", (ftnlen)22);
/*< 	goto 100 >*/
    goto L100;
/*< 400	ibest = -99999999 >*/
L400:
    ibest = -99999999;
/*< 	call cursor( 12, 2 ) >*/
    cursor_(&c__12, &c__2);
/*< 	call string(1,' * Working *^B') >*/
    string_(&c__1, " * Working *^B", (ftnlen)14);
/*< 	do 500 mx = 1, 4 >*/
    for (mx = 1; mx <= 4; ++mx) {
/*< 	    do 500 my = 1, 4 >*/
	for (my = 1; my <= 4; ++my) {
/*< 		do 500 mz = 1, 4 >*/
	    for (mz = 1; mz <= 4; ++mz) {
/*< 		    ich = ivalue( mx+0, my+0, mz+0, move, wr, ipl ) >*/
		i__1 = mx;
		i__2 = my;
		i__3 = mz;
		ich = ivalue_(&i__1, &i__2, &i__3, &move[21], &wr[77], ipl);
/*< 		    if( ich .le. ibest ) goto 500 >*/
		if (ich <= ibest) {
		    goto L500;
		}
/*< 		    ibest = ich >*/
		ibest = ich;
/*< 		    x = mx >*/
		x = mx;
/*< 		    y = my >*/
		y = my;
/*< 		    z = mz >*/
		z__ = mz;
/*< 500	continue >*/
L500:
		;
	    }
	}
    }
/*< 1000	turn = turn + 1 >*/
L1000:
    ++(*turn);
/*< 	moves( turn, 1 ) = x >*/
    moves[*turn + 64] = x;
/*< 	moves( turn, 2 ) = y >*/
    moves[*turn + 128] = y;
/*< 	moves( turn, 3 ) = z >*/
    moves[*turn + 192] = z__;
/*< 	move( x, y, z ) = ipl >*/
    move[x + (y + (z__ << 2) << 2)] = *ipl;
/*< 	return >*/
    return 0;
/*< 1100	if( turn .eq. 0 ) goto 1200 >*/
L1100:
    if (*turn == 0) {
	goto L1200;
    }
/*< 	move( moves(turn,1), moves(turn,2), moves(turn,3) ) = 0 >*/
    move[moves[*turn + 64] + (moves[*turn + 128] + (moves[*turn + 192] << 2) 
	    << 2)] = 0;
/*< 	moves( turn, 1 ) = 0 >*/
    moves[*turn + 64] = 0;
/*< 	turn = turn - 1 >*/
    --(*turn);
/*< 	ipl = 3-ipl >*/
    *ipl = 3 - *ipl;
/*< 	call updscr( moves, move, .false., coord ) >*/
    updscr_(&moves[65], &move[21], &c_false, coord);
/*< 	goto 100 >*/
    goto L100;
/*< 1200	call cursor( 1, 1 ) >*/
L1200:
    cursor_(&c__1, &c__1);
/*< 	call string(1,'^GNo previous moves.^E') >*/
    string_(&c__1, "^GNo previous moves.^E", (ftnlen)22);
/*< 	goto 100 >*/
    goto L100;
/*< 	end >*/
} /* getmov_ */


/*< 	subroutine eval( wr, move, rowtyp ) >*/
/* Subroutine */ int eval_(wr, move, rowtyp)
integer *wr, *move, *rowtyp;
{
    static integer i__, j, win[12]	/* was [4][3] */, ival;
    static logical nostal;
    static integer rowval;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer wr( 76, 4 ), move( 4, 4, 4 ), win(4,3) >*/
/*< 	logical nostal >*/
/*< 	nostal = .false. >*/
    /* Parameter adjustments */
    move -= 21;
    wr -= 77;

    /* Function Body */
    nostal = FALSE_;
/*< 	do 100 i = 1, 76 >*/
    for (i__ = 1; i__ <= 76; ++i__) {
/*< 	    rowtyp = 0 >*/
	*rowtyp = 0;
/*< 	    rowval = 0 >*/
	rowval = 0;
/*< 	    do 50 j = 1, 4 >*/
	for (j = 1; j <= 4; ++j) {
/*< 		ival = wr( i, j ) >*/
	    ival = wr[i__ + j * 76];
/*< 		win(j,1) = ival/100 >*/
	    win[j - 1] = ival / 100;
/*< 		win(j,2) = ival/10 - 10*win(j,1) >*/
	    win[j + 3] = ival / 10 - win[j - 1] * 10;
/*< 		win(j,3) = mod( ival, 10 ) >*/
	    win[j + 7] = ival % 10;
/*< 		ival = move( win(j,1), win(j,2), win(j,3) ) >*/
	    ival = move[win[j - 1] + (win[j + 3] + (win[j + 7] << 2) << 2)];
/*< 		if( ival .eq. 3-rowtyp ) goto 100 >*/
	    if (ival == 3 - *rowtyp) {
		goto L100;
	    }
/*< 		if( ival .gt. 0 ) rowtyp = ival >*/
	    if (ival > 0) {
		*rowtyp = ival;
	    }
/*< 		if( ival .gt. 0 ) rowval = rowval + 1 >*/
	    if (ival > 0) {
		++rowval;
	    }
/*< 50	    continue >*/
/* L50: */
	}
/*< 	    if( rowval .ge. 4 ) goto 200 >*/
	if (rowval >= 4) {
	    goto L200;
	}
/*< 	    nostal = .true. >*/
	nostal = TRUE_;
/*< 100	continue >*/
L100:
	;
    }
/*< 	rowtyp = 0 >*/
    *rowtyp = 0;
/*< 	if( nostal ) rowtyp = -1 >*/
    if (nostal) {
	*rowtyp = -1;
    }
/*< 	return >*/
    return 0;
/*< 200	do 300 i = 1, 4 >*/
L200:
    for (i__ = 1; i__ <= 4; ++i__) {
/*< 	    move( win(i,1), win(i,2), win(i,3) ) = rowtyp + 2 >*/
	move[win[i__ - 1] + (win[i__ + 3] + (win[i__ + 7] << 2) << 2)] = *
		rowtyp + 2;
/*< 300	continue >*/
/* L300: */
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* eval_ */


/*< 	integer function ivalue( x, y, z, move, wr, ipl ) >*/
integer ivalue_(x, y, z__, move, wr, ipl)
integer *x, *y, *z__, *move, *wr, *ipl;
{
    /* System generated locals */
    integer ret_val, i__1;

    /* Local variables */
    static integer i__, j, j1, mx, my, mz;
    static logical win;
    static integer xyz, ival;
    static logical danger;
    static integer hscont, mycont;
    static logical toinro;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer x, y, z, wr( 76, 4 ), move( 4, 4, 4 ), rowtyp >*/
/*< 	logical danger, win, toinro >*/
/*< 	danger = .false. >*/
    /* Parameter adjustments */
    wr -= 77;
    move -= 21;

    /* Function Body */
    danger = FALSE_;
/*< 	win = .false. >*/
    win = FALSE_;
/*< 	ivalue = -99999999 >*/
    ret_val = -99999999;
/*< 	if( move( x, y, z ) .ne. 0 ) return >*/
    if (move[*x + (*y + (*z__ << 2) << 2)] != 0) {
	return ret_val;
    }
/*< 	ivalue = 0 >*/
    ret_val = 0;
/*< 	xyz = x*100+y*10+z >*/
    xyz = *x * 100 + *y * 10 + *z__;
/*< 	do 1000 i = 1, 76 >*/
    for (i__ = 1; i__ <= 76; ++i__) {
/*< 	    toinro = .false. >*/
	toinro = FALSE_;
/*< 	    do 100 j = 1, 4 >*/
	for (j = 1; j <= 4; ++j) {
/*< 		if( wr( i, j ) .eq. xyz ) goto 200 >*/
	    if (wr[i__ + j * 76] == xyz) {
		goto L200;
	    }
/*< 100	    continue >*/
/* L100: */
	}
/*< 	    goto 1000 >*/
	goto L1000;
/*< 200	    mycont = 0 >*/
L200:
	mycont = 0;
/*< 	    hscont = 0 >*/
	hscont = 0;
/*< 	    do 300 j1 = 1, 4 >*/
	for (j1 = 1; j1 <= 4; ++j1) {
/*< 		ival = wr( i, j1 ) >*/
	    ival = wr[i__ + j1 * 76];
/*< 		mx = ival/100 >*/
	    mx = ival / 100;
/*< 		my = ival/10 - 10*mx >*/
	    my = ival / 10 - mx * 10;
/*< 		mz = mod( ival, 10 ) >*/
	    mz = ival % 10;
/*< 		ival = move( mx, my, mz ) >*/
	    ival = move[mx + (my + (mz << 2) << 2)];
/*< 		if( ival .eq. ipl ) mycont = mycont + 1 >*/
	    if (ival == *ipl) {
		++mycont;
	    }
/*< 		if( ival .eq. 3-ipl ) hscont = hscont + 1 >*/
	    if (ival == 3 - *ipl) {
		++hscont;
	    }
/*< 		if( mycont*hscont .ne. 0 ) goto 1000 >*/
	    if (mycont * hscont != 0) {
		goto L1000;
	    }
/*< 300	    continue >*/
/* L300: */
	}
/*< 	    if( mycont .eq. 3 ) ivalue = 999999999 >*/
	if (mycont == 3) {
	    ret_val = 999999999;
	}
/*< 	    if( hscont .eq. 3 ) ivalue = ivalue + 9999999 >*/
	if (hscont == 3) {
	    ret_val += 9999999;
	}
/*< 	    if( hscont .eq. 0 .and. mycont .eq. 2 ) toinro = .true. >*/
	if (hscont == 0 && mycont == 2) {
	    toinro = TRUE_;
	}
/*< 	    if( win .and. toinro ) ivalue = ivalue + 10000 >*/
	if (win && toinro) {
	    ret_val += 10000;
	}
/*< 	    if( toinro ) win = .true. >*/
	if (toinro) {
	    win = TRUE_;
	}
/*< 	    if( mycont .eq. 0 ) ivalue = ivalue + (hscont*10)**3 >*/
	if (mycont == 0) {
/* Computing 3rd power */
	    i__1 = hscont * 10;
	    ret_val += i__1 * (i__1 * i__1);
	}
/*< 	    if( hscont .eq. 0 ) ivalue = ivalue  + (mycont*10)**3 >*/
	if (hscont == 0) {
/* Computing 3rd power */
	    i__1 = mycont * 10;
	    ret_val += i__1 * (i__1 * i__1);
	}
/*< 	    if( danger .and. mycont .eq. 0 ) ivalue = ivalue + 10000 >*/
	if (danger && mycont == 0) {
	    ret_val += 10000;
	}
/*< 	    if( mycont .eq. 0 .and. hscont .ge. 2 ) danger = .true. >*/
	if (mycont == 0 && hscont >= 2) {
	    danger = TRUE_;
	}
/*< 1000	continue >*/
L1000:
	;
    }
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* ivalue_ */

