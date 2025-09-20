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
static integer c__10 = 10;
static integer c__79 = 79;
static integer c__80 = 80;
static integer c__23 = 23;
static integer c__9 = 9;
static integer c__100 = 100;
static integer c__4 = 4;
static integer c__32 = 32;
static integer c__42 = 42;

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
/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static integer xdir[9] = { -1,0,1,-1,0,1,-1,0,1 };
    static integer ydir[9] = { -1,-1,-1,0,0,0,1,1,1 };
    static integer ddir1[9] = { 4,1,2,7,0,3,8,9,6 };
    static integer ddir2[9] = { 2,3,6,1,0,9,4,7,8 };

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__;
    extern /* Subroutine */ int nap_();
    static integer par[20], ilen, idir;
    extern integer iran_();
    static integer ndir, xpos[40], ypos[40];
    extern /* Subroutine */ int pback_();
    static integer ichar;
    extern /* Subroutine */ int close_();
    static integer isize;
    static logical privd;
    extern /* Subroutine */ int pstop_();
    static integer comara[80];
    extern /* Subroutine */ int grafof_(), chrbuf_();
    static integer filspc[13];
    extern /* Subroutine */ int curbuf_(), clrscr_(), pcolor_(), getnum_(), 
	    chrout_(), string_(), cursor_(), settty_(), irepeat_();

/*< 	implicit integer (a-z) >*/
/*< 	integer comara( 80 ), par( 20 ), ilen, filspc( 13 ) >*/
/*< 	integer xpos( 40 ), ypos( 40 ), xdir( 9 ), ydir( 9 ) >*/
/*< 	integer ddir1( 9 ), ddir2( 9 ) >*/
/*< 	logical privd >*/
/*< 	commo >*/
/*< 	data xdir/-1,0,1,-1,0,1,-1,0,1/, ydir/-1,-1,-1,0,0,0,1,1,1/ >*/
/*< 	data ddir1/4,1,2,7,0,3,8,9,6/ >*/
/*< 	data ddir2/2,3,6,1,0,9,4,7,8/ >*/
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
/*< 3	call settty( comara, par, ilen, privd, filspc ) >*/
L3:
    settty_(comara, par, &ilen, &privd, filspc);
/*< 100	call pback( iclbla ) >*/
L100:
    pback_(&col_1.iclbla);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call string(1,'Input snake size (1-40): ^B') >*/
    string_(&c__1, "Input snake size (1-40): ^B", (ftnlen)27);
/*< 	call getnum(3, 10, isize, 10 ) >*/
    getnum_(&c__3, &c__10, &isize, &c__10);
/*< 	if( isize .le. 0 .or. isize .gt. 40 ) goto 100 >*/
    if (isize <= 0 || isize > 40) {
	goto L100;
    }
/*< 	do 150 i = 1, 40 >*/
    for (i__ = 1; i__ <= 40; ++i__) {
/*< 	    xpos(i) = 0 >*/
	xpos[i__ - 1] = 0;
/*< 150	continue >*/
/* L150: */
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call pback( icllbl ) >*/
    pback_(&col_1.icllbl);
/*< 	do 200 i = 1, 23 >*/
    for (i__ = 1; i__ <= 23; ++i__) {
/*< 	    call cursor( 1, i+1 ) >*/
	i__1 = i__ + 1;
	cursor_(&c__1, &i__1);
/*< 	    call irepeat(79,80) >*/
	irepeat_(&c__79, &c__80);
/*< 200	continue >*/
/* L200: */
    }
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	xpos(1) = iran( 80 ) >*/
    xpos[0] = iran_(&c__80);
/*< 	ypos(1) = iran( 23 ) + 1 >*/
    ypos[0] = iran_(&c__23) + 1;
/*< 300	idir = iran( 9 ) >*/
L300:
    idir = iran_(&c__9);
/*< 	if( idir .eq. 5 ) goto 300 >*/
    if (idir == 5) {
	goto L300;
    }
/*< 400	continue >*/
L400:
/*< 	call nap( 100, 4 ) >*/
    nap_(&c__100, &c__4);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call chrbuf( ichar ) >*/
    chrbuf_(&ichar);
/*< 	if( ichar .ne. -1 ) goto 1000 >*/
    if (ichar != -1) {
	goto L1000;
    }
/*< 	if( xpos(isize) .eq. 0 ) goto 410 >*/
    if (xpos[isize - 1] == 0) {
	goto L410;
    }
/*< 	if( isize .eq. 1 ) goto 406 >*/
    if (isize == 1) {
	goto L406;
    }
/*< 	do 405 i = 1, isize-1 >*/
    i__1 = isize - 1;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    if(xpos(i) .ne. xpos(isize)) goto 405 >*/
	if (xpos[i__ - 1] != xpos[isize - 1]) {
	    goto L405;
	}
/*< 	    if(ypos(i) .eq. ypos(isize)) goto 410 >*/
	if (ypos[i__ - 1] == ypos[isize - 1]) {
	    goto L410;
	}
/*< 405	continue >*/
L405:
	;
    }
/*< 406	continue >*/
L406:
/*< 	call cursor( xpos(isize), ypos(isize) ) >*/
    cursor_(&xpos[isize - 1], &ypos[isize - 1]);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 410	if( isize .eq. 1 ) goto 451 >*/
L410:
    if (isize == 1) {
	goto L451;
    }
/*< 	do 450 i = isize, 2, -1 >*/
    for (i__ = isize; i__ >= 2; --i__) {
/*< 	    xpos(i) = xpos(i-1) >*/
	xpos[i__ - 1] = xpos[i__ - 2];
/*< 	    ypos(i) = ypos(i-1) >*/
	ypos[i__ - 1] = ypos[i__ - 2];
/*< 450	continue >*/
/* L450: */
    }
/*< 451	continue >*/
L451:
/*< 	i = iran(3) >*/
    i__ = iran_(&c__3);
/*< 	if( i .ne. 1 ) goto 500 >*/
    if (i__ != 1) {
	goto L500;
    }
/*< 475	ndir = ddir1( idir ) >*/
L475:
    ndir = ddir1[idir - 1];
/*< 	if( iran(10) .gt. 5 ) ndir = ddir2( idir ) >*/
    if (iran_(&c__10) > 5) {
	ndir = ddir2[idir - 1];
    }
/*< 	idir = ndir >*/
    idir = ndir;
/*< 500	if(xpos(1)+xdir(idir).lt.1.or.xpos(1)+xdir(idir).gt.80)goto 475 >*/
L500:
    if (xpos[0] + xdir[idir - 1] < 1 || xpos[0] + xdir[idir - 1] > 80) {
	goto L475;
    }
/*< 	if(ypos(1)+ydir(idir).lt.2.or.ypos(1)+ydir(idir).gt.24)goto 475 >*/
    if (ypos[0] + ydir[idir - 1] < 2 || ypos[0] + ydir[idir - 1] > 24) {
	goto L475;
    }
/*< 	xpos(1) = xpos(1) + xdir(idir) >*/
    xpos[0] += xdir[idir - 1];
/*< 	ypos(1) = ypos(1) + ydir(idir) >*/
    ypos[0] += ydir[idir - 1];
/*< 	call cursor( xpos(1), ypos(1) ) >*/
    cursor_(xpos, ypos);
/*< 	if(idir.eq.1) ichar = 43 >*/
    if (idir == 1) {
	ichar = 43;
    }
/*< 	if(idir.eq.2) ichar = 94 >*/
    if (idir == 2) {
	ichar = 94;
    }
/*< 	if(idir.eq.3) ichar = 43 >*/
    if (idir == 3) {
	ichar = 43;
    }
/*< 	if(idir.eq.4) ichar = 62 >*/
    if (idir == 4) {
	ichar = 62;
    }
/*< 	if(idir.eq.6) ichar = 60 >*/
    if (idir == 6) {
	ichar = 60;
    }
/*< 	if(idir.eq.7) ichar = 43 >*/
    if (idir == 7) {
	ichar = 43;
    }
/*< 	if(idir.eq.8) ichar = 118 >*/
    if (idir == 8) {
	ichar = 118;
    }
/*< 	if(idir.eq.9) ichar = 43 >*/
    if (idir == 9) {
	ichar = 43;
    }
/*< 	call chrout( ichar ) >*/
    chrout_(&ichar);
/*< 	if( xpos(2) .eq. 0 ) goto 400 >*/
    if (xpos[1] == 0) {
	goto L400;
    }
/*< 	call cursor( xpos(2), ypos(2) ) >*/
    cursor_(&xpos[1], &ypos[1]);
/*< 	call chrout(42) >*/
    chrout_(&c__42);
/*< 	goto 400 >*/
    goto L400;
/*< 1000	call clrscr >*/
L1000:
    clrscr_();
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call grafof >*/
    grafof_();
/*< 	call pstop >*/
    pstop_();
/*< 	end >*/
} /* fmain_ */

