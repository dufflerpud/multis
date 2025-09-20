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

/* Table of constant values */

static integer c__91 = 91;
static integer c__4 = 4;
static integer c__1 = 1;
static integer c__3 = 3;
static real c_b34 = (float)123.45;
static integer c__456 = 456;
static integer c_b42 = 123456;
static real c_b45 = (float)123456.7;
static integer c__0 = 0;
static real c_b57 = (float)-2.;
static real c_b58 = (float)-3.;
static integer c__2 = 2;
static real c_b63 = (float)3.;
static real c_b67 = (float)2.;
static integer c__5 = 5;
static integer c__70 = 70;
static integer c__6 = 6;
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
/*< 	subroutine rplay( r, rtdec ) >*/
/* Subroutine */ int rplay_(r__, rtdec)
real *r__;
integer *rtdec;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer len, base;
    extern /* Subroutine */ int number_(), lnumbr_(), chrout_(), string_();

/*< 	integer len, base, rtdec >*/
/*< 	real r >*/
/*< 	base = 10 >*/
    base = 10;
/*< 	len = 10 >*/
    len = 10;
/*< 	call chrout(91) >*/
    chrout_(&c__91);
/*< 	call number(4, r, len, base, rtdec ) >*/
    number_(&c__4, r__, &len, &base, rtdec);
/*< 	call string(1,'][^E') >*/
    string_(&c__1, "][^E", (ftnlen)4);
/*< 	call number(4, r, -len, base, rtdec ) >*/
    i__1 = -len;
    number_(&c__4, r__, &i__1, &base, rtdec);
/*< 	call string(1,'][^E') >*/
    string_(&c__1, "][^E", (ftnlen)4);
/*< 	call lnumbr(4, r, len, base, rtdec ) >*/
    lnumbr_(&c__4, r__, &len, &base, rtdec);
/*< 	call string(1,'][^E') >*/
    string_(&c__1, "][^E", (ftnlen)4);
/*< 	call lnumbr(4, r, -len, base, rtdec ) >*/
    i__1 = -len;
    lnumbr_(&c__4, r__, &i__1, &base, rtdec);
/*< 	call string(1,']^M^J^E') >*/
    string_(&c__1, "]^M^J^E", (ftnlen)7);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* rplay_ */

/*< 	subroutine iplay( i ) >*/
/* Subroutine */ int iplay_(i__)
integer *i__;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer len, base;
    extern /* Subroutine */ int number_(), lnumbr_(), chrout_(), string_();

/*< 	integer i, len, base >*/
/*< 	base = 10 >*/
    base = 10;
/*< 	len = 10 >*/
    len = 10;
/*< 	call chrout(91) >*/
    chrout_(&c__91);
/*< 	call number(3, i, len, base ) >*/
    number_(&c__3, i__, &len, &base);
/*< 	call string(1,'][^E') >*/
    string_(&c__1, "][^E", (ftnlen)4);
/*< 	call number(3, i, -len, base ) >*/
    i__1 = -len;
    number_(&c__3, i__, &i__1, &base);
/*< 	call string(1,'][^E') >*/
    string_(&c__1, "][^E", (ftnlen)4);
/*< 	call lnumbr(3, i, len, base ) >*/
    lnumbr_(&c__3, i__, &len, &base);
/*< 	call string(1,'][^E') >*/
    string_(&c__1, "][^E", (ftnlen)4);
/*< 	call lnumbr(3, i, -len, base ) >*/
    i__1 = -len;
    lnumbr_(&c__3, i__, &i__1, &base);
/*< 	call string(1,']^M^J^E') >*/
    string_(&c__1, "]^M^J^E", (ftnlen)7);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* iplay_ */

/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* System generated locals */
    integer i__1;
    real r__1;

    /* Builtin functions */
    integer pow_ii();
    double pow_ri(), r_lg10(), r_sign();

    /* Local variables */
    static integer i__, j;
    static logical l0;
    static integer n0, n1, n2, n3;
    static real r0, r1;
    extern integer job_();
    static integer inara[80];
    extern /* Subroutine */ int iplay_(), rplay_(), clrscr_(), number_(), 
	    chrwat_(), getnum_(), string_(), getstr_(), hprintf_();

/*< 	integer n0, n1, n2 >*/
/*< 	real r0, r1, r2 >*/
/*< 	logical l0 >*/
/*< 	integer inara(80) >*/
/*< 	call clrscr >*/
    clrscr_();
/*< 	call string(1,'Welcome to the regression test.^M^J^J^E') >*/
    string_(&c__1, "Welcome to the regression test.^M^J^J^E", (ftnlen)39);
/*< 	call hprintf('Should be [   123.450][456       ]\n^E') >*/
    hprintf_("Should be [   123.450][456       ]\n^E", (ftnlen)37);
/*< 	call hprintf('          [%10.3f][%-10d]\n^E',123.45,456) >*/
    hprintf_("          [%10.3f][%-10d]\n^E", &c_b34, &c__456, (ftnlen)28);
/*< 	l0 = .false. >*/
    l0 = FALSE_;
/*< 	call string(1,'Should be  0:      ^E') >*/
    string_(&c__1, "Should be  0:      ^E", (ftnlen)21);
/*< 	call iplay( l0 ) >*/
    iplay_(&l0);
/*< 	l0 = .true. >*/
    l0 = TRUE_;
/*< 	call string(1,'Should be -1:      ^E') >*/
    string_(&c__1, "Should be -1:      ^E", (ftnlen)21);
/*< 	call iplay( l0 ) >*/
    iplay_(&l0);
/*< 	call string(1,'Should be 123456:  ^E') >*/
    string_(&c__1, "Should be 123456:  ^E", (ftnlen)21);
/*< 	call iplay( 123456 ) >*/
    iplay_(&c_b42);
/*< 	call string(1,'Should be 123456.7:^E') >*/
    string_(&c__1, "Should be 123456.7:^E", (ftnlen)21);
/*< 	call rplay( 123456.7, 1 ) >*/
    rplay_(&c_b45, &c__1);
/*< 	n0 = 2 >*/
    n0 = 2;
/*< 	n1 = 3 >*/
    n1 = 3;
/*< 	n3 = n0**n1 >*/
    n3 = pow_ii(&n0, &n1);
/*< 	call string(1,'Should be 8:       ^E') >*/
    string_(&c__1, "Should be 8:       ^E", (ftnlen)21);
/*< 	call iplay( n3 ) >*/
    iplay_(&n3);
/*< 	r0 = 2.0 >*/
    r0 = (float)2.;
/*< 	n0 = 3 >*/
    n0 = 3;
/*< 	r1 = r0 ** n0 >*/
    r1 = pow_ri(&r0, &n0);
/*< 	call string(1,'Should be 8:       ^E') >*/
    string_(&c__1, "Should be 8:       ^E", (ftnlen)21);
/*< 	call rplay( r1, 0 ) >*/
    rplay_(&r1, &c__0);
/*< 	r0 = 2050.0 >*/
    r0 = (float)2050.;
/*< 	r1 = alog10(r0) >*/
    r1 = r_lg10(&r0);
/*< 	call string(1,'Should be 3.3:     ^E') >*/
    string_(&c__1, "Should be 3.3:     ^E", (ftnlen)21);
/*< 	call rplay( r1, 1 ) >*/
    rplay_(&r1, &c__1);
/*< 	call string(1,'Should be -2.00:   ^E') >*/
    string_(&c__1, "Should be -2.00:   ^E", (ftnlen)21);
/*< 	call rplay( sign(-2.0,-3.0), 2 ) >*/
    r__1 = r_sign(&c_b57, &c_b58);
    rplay_(&r__1, &c__2);
/*< 	call string(1,'Should be 2.000:   ^E') >*/
    string_(&c__1, "Should be 2.000:   ^E", (ftnlen)21);
/*< 	call rplay( sign(-2.0,3.0), 3 ) >*/
    r__1 = r_sign(&c_b57, &c_b63);
    rplay_(&r__1, &c__3);
/*< 	call string(1,'Should be -2.0000: ^E') >*/
    string_(&c__1, "Should be -2.0000: ^E", (ftnlen)21);
/*< 	call rplay( sign(2.0,-3.0), 4 ) >*/
    r__1 = r_sign(&c_b67, &c_b58);
    rplay_(&r__1, &c__4);
/*< 	call string(1,'Should be 2.00000: ^E') >*/
    string_(&c__1, "Should be 2.00000: ^E", (ftnlen)21);
/*< 	call rplay( sign(2.0,3.0), 5 ) >*/
    r__1 = r_sign(&c_b67, &c_b63);
    rplay_(&r__1, &c__5);
/*< 	do 1000 i=2,20 >*/
    for (i__ = 2; i__ <= 20; ++i__) {
/*< 	    do 900 j=1,20 >*/
	for (j = 1; j <= 20; ++j) {
/*< 	        call hprintf(' %,*d\0',i,j) >*/
	    hprintf_(" %,*d\000", &i__, &j, (ftnlen)6);
/*< 900	    continue >*/
/* L900: */
	}
/*< 	    call hprintf('\n\0') >*/
	hprintf_("\n\000", (ftnlen)2);
/*< 1000	continue >*/
/* L1000: */
    }
/*< 	call string(1,'^M^J^JEnter a string of characters:  ^E') >*/
    string_(&c__1, "^M^J^JEnter a string of characters:  ^E", (ftnlen)39);
/*< 	call getstr(3, inara, 70, n0 ) >*/
    getstr_(&c__3, inara, &c__70, &n0);
/*< 	call string(1,'You typed:  [^E') >*/
    string_(&c__1, "You typed:  [^E", (ftnlen)15);
/*< 	call string(3, inara, 1, n0 ) >*/
    string_(&c__3, inara, &c__1, &n0);
/*< 	call string(1,']  This had N1=^E') >*/
    string_(&c__1, "]  This had N1=^E", (ftnlen)17);
/*< 	call getnum(6, inara, n0, n1, 10, n2, 10 ) >*/
    getnum_(&c__6, inara, &n0, &n1, &c__10, &n2, &c__10);
/*< 	call number(1, n1 ) >*/
    number_(&c__1, &n1);
/*< 	call string(1,' and ^E') >*/
    string_(&c__1, " and ^E", (ftnlen)7);
/*< 	call number(1, n2 ) >*/
    number_(&c__1, &n2);
/*< 	n0 = 70 >*/
    n0 = 70;
/*< 	call string(1,', N0=^E') >*/
    string_(&c__1, ", N0=^E", (ftnlen)7);
/*< 	call number(1, n0 ) >*/
    number_(&c__1, &n0);
/*< 	call string(1,' (should be 70).  Job=^E') >*/
    string_(&c__1, " (should be 70).  Job=^E", (ftnlen)24);
/*< 	call number(1, job(0) ) >*/
    i__1 = job_(&c__0);
    number_(&c__1, &i__1);
/*< 	call string(1,'.^E') >*/
    string_(&c__1, ".^E", (ftnlen)3);
/*< 	call string(1,'^M^J^JType any character to exit:  ^E') >*/
    string_(&c__1, "^M^J^JType any character to exit:  ^E", (ftnlen)37);
/*< 	call chrwat( n0 ) >*/
    chrwat_(&n0);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* fmain_ */

