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

struct {
    logical newang;
} nhcom_;

#define nhcom_1 nhcom_

struct {
    real x0, y0, z0, xofxp, yofxp, zofxp, xofyp, yofyp, zofyp, a, b, c__, 
	    pdist, xc, yc, zc, pcos, psin;
} prscom_;

#define prscom_1 prscom_

/* Table of constant values */

static integer c__7 = 7;
static integer c__0 = 0;
static integer c__53 = 53;
static integer c__1 = 1;
static integer c__100 = 100;
static integer c__30 = 30;
static integer c__6 = 6;
static integer c__54 = 54;
static integer c__2 = 2;
static integer c__400 = 400;
static integer c__5 = 5;
static integer c__55 = 55;
static integer c__3 = 3;
static integer c__36 = 36;
static integer c__56 = 56;
static integer c__4 = 4;
static integer c__26 = 26;
static integer c__62 = 62;
static integer c__48 = 48;
static integer c__52 = 52;
static integer c__75 = 75;
static integer c__76 = 76;
static integer c__80 = 80;
static integer c__81 = 81;
static integer c__88 = 88;
static integer c__50 = 50;
static integer c__94 = 94;
static integer c__1800 = 1800;
static integer c__95 = 95;
static integer c_n1 = -1;
static integer c__1026 = 1026;
static integer c__24 = 24;
static integer c__124 = 124;
static integer c__39 = 39;
static integer c__45 = 45;
static integer c__23 = 23;
static integer c__22 = 22;
static integer c__32 = 32;
static integer c__46 = 46;
static integer c__64 = 64;
static integer c__42 = 42;
static integer c__43 = 43;
static integer c__37 = 37;
static integer c__153 = 153;
static integer c__20 = 20;
static integer c__160 = 160;
static integer c__51 = 51;
static integer c__58 = 58;
static integer c_n2 = -2;
static integer c__44 = 44;
static integer c__28 = 28;
static real c_b194 = (float)45.;
static real c_b195 = (float)18.9999;
static real c_b198 = (float)1.;
static real c_b199 = (float)5.;
static real c_b202 = (float)100.;
static real c_b207 = (float)48.;
static real c_b209 = (float)52.;
static real c_b216 = (float)76.;
static integer c__231 = 231;
static integer c__234 = 234;
static integer c__236 = 236;
static integer c__238 = 238;
static integer c__242 = 242;
static integer c__500 = 500;
static integer c__12 = 12;
static integer c__10 = 10;
static integer c__79 = 79;
static integer c__387 = 387;
static integer c__388 = 388;
static integer c__389 = 389;
static integer c__390 = 390;
static integer c__1031 = 1031;
static integer c__1041 = 1041;
static integer c__403 = 403;
static integer c__404 = 404;
static integer c__408 = 408;
static integer c__413 = 413;
static integer c__415 = 415;
static integer c__416 = 416;
static integer c__417 = 417;
static integer c__418 = 418;
static integer c__419 = 419;
static integer c__420 = 420;
static integer c__425 = 425;
static integer c__426 = 426;
static integer c__427 = 427;
static integer c__428 = 428;
static integer c__429 = 429;
static integer c__430 = 430;
static integer c__431 = 431;
static integer c_n3 = -3;
static integer c__438 = 438;
static integer c__442 = 442;
static integer c__444 = 444;
static integer c__446 = 446;
static integer c__448 = 448;
static integer c__477 = 477;
static integer c__480 = 480;
static integer c__499 = 499;
static integer c__508 = 508;
static integer c__509 = 509;
static integer c__510 = 510;
static integer c__511 = 511;
static integer c__516 = 516;
static integer c__518 = 518;
static integer c__93 = 93;
static integer c__536 = 536;
static integer c__25 = 25;
static integer c__8 = 8;
static integer c__40 = 40;
static integer c__765 = 765;
static integer c__822 = 822;
static integer c__824 = 824;
static integer c_n4 = -4;
static integer c__825 = 825;
static integer c__838 = 838;
static integer c__842 = 842;
static integer c__1030 = 1030;
static integer c__1045 = 1045;
static integer c__1032 = 1032;
static integer c__1048 = 1048;
static integer c__1049 = 1049;
static integer c__862 = 862;
static integer c__867 = 867;
static integer c__14 = 14;
static integer c__982 = 982;
static integer c__988 = 988;
static integer c__992 = 992;
static integer c__19 = 19;
static integer c__60 = 60;
static integer c__21 = 21;
static integer c__92 = 92;
static integer c__47 = 47;
static integer c__41 = 41;
static integer c__1063 = 1063;
static integer c__1069 = 1069;
static integer c__1072 = 1072;
static integer c__1091 = 1091;
static integer c__1092 = 1092;
static integer c__1093 = 1093;
static integer c__1094 = 1094;
static integer c__16 = 16;
static integer c__1134 = 1134;
static integer c__1138 = 1138;
static integer c__59 = 59;
static integer c__1146 = 1146;
static integer c__1153 = 1153;
static integer c__1168 = 1168;
static integer c__1171 = 1171;
static integer c__1175 = 1175;
static integer c__1178 = 1178;
static integer c__1193 = 1193;
static integer c__1195 = 1195;
static integer c__1205 = 1205;
static integer c__1206 = 1206;
static integer c__1207 = 1207;
static integer c__1208 = 1208;
static integer c__1211 = 1211;
static integer c__1213 = 1213;
static integer c__1214 = 1214;

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
/*< 	subroutine defcol >*/
/* Subroutine */ int defcol_()
{
    extern /* Subroutine */ int pback_(), pcolor_();

/*< 	commo >*/
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* defcol_ */

/*< 	real function cosdeg( deg ) >*/
doublereal cosdeg_(deg)
real *deg;
{
    /* System generated locals */
    real ret_val;

    /* Builtin functions */
    double cos();

/*< 	cosdeg = cos( deg * 3.141592654/180.0 ) >*/
    ret_val = cos(*deg * (float)3.141592654 / (float)180.);
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* cosdeg_ */

/*< 	real function sindeg( deg ) >*/
doublereal sindeg_(deg)
real *deg;
{
    /* System generated locals */
    real ret_val;

    /* Builtin functions */
    double sin();

/*< 	sindeg = sin( deg * 3.141592654/180.0 ) >*/
    ret_val = sin(*deg * (float)3.141592654 / (float)180.);
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* sindeg_ */

/*< 	real function smcos( deg ) >*/
doublereal smcos_(deg)
real *deg;
{
    /* System generated locals */
    real ret_val;

    /* Local variables */
    static real d__;
    extern doublereal cosdeg_();

/*< 	logical newang >*/
/*< 	common/nhcom/newang >*/
/*< 	d = deg >*/
    d__ = *deg;
/*< 	if( newang ) d = 90.0 - d >*/
    if (nhcom_1.newang) {
	d__ = (float)90. - d__;
    }
/*< 	smcos = cosdeg( d ) >*/
    ret_val = cosdeg_(&d__);
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* smcos_ */

/*< 	real function smsin( deg ) >*/
doublereal smsin_(deg)
real *deg;
{
    /* System generated locals */
    real ret_val;

    /* Local variables */
    static real d__;
    extern doublereal sindeg_();

/*< 	logical newang >*/
/*< 	common/nhcom/newang >*/
/*< 	d = deg >*/
    d__ = *deg;
/*< 	if( newang ) d = 90.0 - d >*/
    if (nhcom_1.newang) {
	d__ = (float)90. - d__;
    }
/*< 	smsin = sindeg( d ) >*/
    ret_val = sindeg_(&d__);
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* smsin_ */

/*< 	subroutine initdb >*/
/* Subroutine */ int initdb_()
{
    static integer ix, iy, iz, ixt, iyt, izt;
    extern /* Subroutine */ int init_(), enable_(), makobj_(), unlock_(), 
	    putval_();


/*< 	call enable >*/
    enable_();
/*< 	call init(7, 0,53,  1, 1, 100, 100, 30 ) >*/
    init_(&c__7, &c__0, &c__53, &c__1, &c__1, &c__100, &c__100, &c__30);
/*< 	call init(6, 0,54,  2, 7, 400, 5 ) >*/
    init_(&c__6, &c__0, &c__54, &c__2, &c__7, &c__400, &c__5);
/*< 	call init(5, 0,55,  3, 36, 5 ) >*/
    init_(&c__5, &c__0, &c__55, &c__3, &c__36, &c__5);
/*< 	call init(6, 0,56,  4, 7, 26, 2 ) >*/
    init_(&c__6, &c__0, &c__56, &c__4, &c__7, &c__26, &c__2);

/*< 	do 100 ixt = 1, 100 >*/
    for (ixt = 1; ixt <= 100; ++ixt) {
/*< 	    ix = ixt >*/
	ix = ixt;
/*< 	    do 100 iyt = 1, 100 >*/
	for (iyt = 1; iyt <= 100; ++iyt) {
/*< 		iy = iyt >*/
	    iy = iyt;
/*< 		call putval(7, 0,62,  1, ix, iy, 5, 1 ) >*/
	    putval_(&c__7, &c__0, &c__62, &c__1, &ix, &iy, &c__5, &c__1);
/*< 		if( mod( ix-5,10 ).ne.0.or.mod( iy,10 ).ne.0 ) goto 100 >*/
	    if ((ix - 5) % 10 != 0 || iy % 10 != 0) {
		goto L100;
	    }
/*< 		call makobj( ix, iy, 6, 4 ) >*/
	    makobj_(&ix, &iy, &c__6, &c__4);
/*< 100	continue >*/
L100:
	    ;
	}
    }

/*< 	do 400 iyt = 1, 76 >*/
    for (iyt = 1; iyt <= 76; ++iyt) {
/*< 	    iy = iyt >*/
	iy = iyt;
/*< 	    do 300 izt = 1, 4 >*/
	for (izt = 1; izt <= 4; ++izt) {
/*< 		iz = izt >*/
	    iz = izt;
/*< 		if( iz .ne. 2 .or. mod(iy-1,5) .ne. 0 ) goto 200 >*/
	    if (iz != 2 || (iy - 1) % 5 != 0) {
		goto L200;
	    }
/*< 		call makobj( 48, iy, iz, 3 ) >*/
	    makobj_(&c__48, &iy, &iz, &c__3);
/*< 		call makobj( 52, iy, iz, 3 ) >*/
	    makobj_(&c__52, &iy, &iz, &c__3);
/*< 		goto 300 >*/
	    goto L300;
/*< 200		call putval(7, 0,75,  1, 48, iy, iz, 1 ) >*/
L200:
	    putval_(&c__7, &c__0, &c__75, &c__1, &c__48, &iy, &iz, &c__1);
/*< 		call putval(7, 0,76,  1, 52, iy, iz, 1 ) >*/
	    putval_(&c__7, &c__0, &c__76, &c__1, &c__52, &iy, &iz, &c__1);
/*< 300	    continue >*/
L300:
	    ;
	}
/*< 	    do 400 ixt = 49, 51 >*/
	for (ixt = 49; ixt <= 51; ++ixt) {
/*< 		ix = ixt >*/
	    ix = ixt;
/*< 		call putval(7, 0,80,  1, ix, iy, 5, 0 ) >*/
	    putval_(&c__7, &c__0, &c__80, &c__1, &ix, &iy, &c__5, &c__0);
/*< 		call putval(7, 0,81,  1, ix, iy, 1, 1 ) >*/
	    putval_(&c__7, &c__0, &c__81, &c__1, &ix, &iy, &c__1, &c__1);
/*< 400	continue >*/
/* L400: */
	}
    }

/*< 	do 500 ixt = 48, 52 >*/
    for (ixt = 48; ixt <= 52; ++ixt) {
/*< 	    ix = ixt >*/
	ix = ixt;
/*< 	    do 500 izt = 1, 4 >*/
	for (izt = 1; izt <= 4; ++izt) {
/*< 		iz = izt >*/
	    iz = izt;
/*< 		call putval(7, 0,88,  1, ix, 76, iz, 1 ) >*/
	    putval_(&c__7, &c__0, &c__88, &c__1, &ix, &c__76, &iz, &c__1);
/*< 500	continue >*/
/* L500: */
	}
    }

/*< 	call makobj( 50, 76, 3, 2 ) >*/
    makobj_(&c__50, &c__76, &c__3, &c__2);
/*< 	call makobj( 50, 76, 6, 4 ) >*/
    makobj_(&c__50, &c__76, &c__6, &c__4);

/*< 	call putval(5, 0,94,  3, 4, 60*30 ) >*/
    putval_(&c__5, &c__0, &c__94, &c__3, &c__4, &c__1800);
/*< 	call putval(5, 0,95,  3, 5, -1 ) >*/
    putval_(&c__5, &c__0, &c__95, &c__3, &c__5, &c_n1);
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* initdb_ */


/*< 	subroutine print >*/
/* Subroutine */ int print_()
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer iy;
    extern /* Subroutine */ int pback_(), colcur_(), clrscr_(), chrout_(), 
	    string_(), cursor_(), usrset_();


/*< 	commo >*/

/*< 	call usrset( 1026, 1 ) >*/
    usrset_(&c__1026, &c__1);
/*< 	call clrscr >*/
    clrscr_();
/*< 	call colcur( 1, 24 ) >*/
    colcur_(&c__1, &c__24);
/*< 	call string(1,'+(   ,   ,   ) Azi:    Elv:    Rol:   +^E') >*/
    string_(&c__1, "+(   ,   ,   ) Azi:    Elv:    Rol:   +^E", (ftnlen)41);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	do 100 iy = 1, 19 >*/
    for (iy = 1; iy <= 19; ++iy) {
/*< 	    call cursor( 1, 24-iy ) >*/
	i__1 = 24 - iy;
	cursor_(&c__1, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 	    call cursor( 39, 24-iy ) >*/
	i__1 = 24 - iy;
	cursor_(&c__39, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 100	continue >*/
/* L100: */
    }
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	call colcur( 1, 4 ) >*/
    colcur_(&c__1, &c__4);
/*< 	call string(1,'+Vel:    D-Deg:    D-Spd:    Rol/s:   +^E') >*/
    string_(&c__1, "+Vel:    D-Deg:    D-Spd:    Rol/s:   +^E", (ftnlen)41);
/*< 	call cursor( 45, 24 ) >*/
    cursor_(&c__45, &c__24);
/*< 	call string(1,'Time:^E') >*/
    string_(&c__1, "Time:^E", (ftnlen)7);
/*< 	call cursor( 45, 23 ) >*/
    cursor_(&c__45, &c__23);
/*< 	call string(1,'Rebel ships:^E') >*/
    string_(&c__1, "Rebel ships:^E", (ftnlen)14);
/*< 	call cursor( 45, 22 ) >*/
    cursor_(&c__45, &c__22);
/*< 	call string(1,'Empire ships:^E') >*/
    string_(&c__1, "Empire ships:^E", (ftnlen)15);
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call string(1,'Command:^E') >*/
    string_(&c__1, "Command:^E", (ftnlen)10);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* print_ */

/*< 	function ichcod( ich, ifg, ibg ) >*/
integer ichcod_(ich, ifg, ibg)
integer *ich, *ifg, *ibg;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    extern integer icon_();

/*< 	if( ich .lt. 0 .or. ich .gt. 256 ) ich = icon( ich ) >*/
    if (*ich < 0 || *ich > 256) {
	*ich = icon_(ich);
    }
/*< 	ichcod = 256*256*ifg + 256*ibg + ich >*/
    ret_val = (*ifg << 16) + (*ibg << 8) + *ich;
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* ichcod_ */


/*< 	subroutine updscr( x, y, z, d, e, pit, ichar, iplayr ) >*/
/* Subroutine */ int updscr_(x, y, z__, d__, e, pit, ichar, iplayr)
integer *x, *y, *z__;
real *d__, *e, *pit;
integer *ichar, *iplayr;
{
    /* System generated locals */
    integer i__1, i__2;
    real r__1, r__2, r__3, r__4;

    /* Builtin functions */
    double sqrt();

    /* Local variables */
    static integer i__, x1, y1, z1, od, oe, it, ox;
    static real xp, yp, xr, yr, zr;
    static integer oy, oz, xt1, yt1, zt1, ibg, ich, ifg, iobj;
    static logical good;
    static integer ival, iscr, itim, dist, oscr[361]	/* was [19][19] */, 
	    opit;
    static logical next;
    extern /* Subroutine */ int pback_();
    extern integer ichcod_();
    static integer screen[361]	/* was [19][19] */;
    extern /* Subroutine */ int getval_(), colcur_(), number_();
    static integer objnum;
    extern /* Subroutine */ int prspec_(), pcolor_(), chrout_(), colstr_(), 
	    string_();
    static integer prilst[7];
    extern /* Subroutine */ int setvew_(), cursor_();


/*< 	implicit integer ( a - z ) >*/
/*< 	integer screen( 19, 19 ), oscr( 19, 19 ), prilst( 7 ) >*/
/*< 	real xp, yp, xr, yr, zr, d, e, pit >*/
/*< 	logical next, good >*/
/*< 	commo >*/
/*< 	if( prilst(1) .ne. 0 ) goto 3 >*/
    if (prilst[0] != 0) {
	goto L3;
    }
/*< 	prilst(1) = ichcod( 32, iclwhi, iclbla )	! space or wall >*/
    prilst[0] = ichcod_(&c__32, &col_1.iclwhi, &col_1.iclbla);
/*< 	prilst(2) = ichcod( 46, icllbl, iclbla )	! edge/corner/end >*/
    prilst[1] = ichcod_(&c__46, &col_1.icllbl, &col_1.iclbla);
/*< 	prilst(3) = ichcod( 64, iclred, iclyel )	! the port >*/
    prilst[2] = ichcod_(&c__64, &col_1.iclred, &col_1.iclyel);
/*< 	prilst(4) = ichcod( 42, iclpur, iclbla )	! trench gun >*/
    prilst[3] = ichcod_(&c__42, &col_1.iclpur, &col_1.iclbla);
/*< 	prilst(5) = ichcod( 94, iclpur, iclred )	! surface gun >*/
    prilst[4] = ichcod_(&c__94, &col_1.iclpur, &col_1.iclred);
/*< 	prilst(6) = ichcod( 43, iclwhi, iclbla ) >*/
    prilst[5] = ichcod_(&c__43, &col_1.iclwhi, &col_1.iclbla);
/*< 	prilst(7) = ichcod( 37, iclred, iclyel )	! explosion particle >*/
    prilst[6] = ichcod_(&c__37, &col_1.iclred, &col_1.iclyel);

/*< 3	call getval(5, 0,153,  3, 5, itim ) >*/
L3:
    getval_(&c__5, &c__0, &c__153, &c__3, &c__5, &itim);
/*< 	if( itim .lt. 0 ) goto 5 >*/
    if (itim < 0) {
	goto L5;
    }
/*< 	call colcur( 45, 20 ) >*/
    colcur_(&c__45, &c__20);
/*< 	call colstr(iclred,'Death star explodes in ^E') >*/
    colstr_(&col_1.iclred, "Death star explodes in ^E", (ftnlen)25);
/*< 	call number(1, itim ) >*/
    number_(&c__1, &itim);
/*< 	call string(1,' seconds. ^G^E') >*/
    string_(&c__1, " seconds. ^G^E", (ftnlen)14);
/*< 5	call getval(5, 0,160,  3, 4, itim ) >*/
L5:
    getval_(&c__5, &c__0, &c__160, &c__3, &c__4, &itim);
/*< 	call colcur( 51, 24 ) >*/
    colcur_(&c__51, &c__24);
/*< 	call number(2, itim/60, 2 ) >*/
    i__1 = itim / 60;
    number_(&c__2, &i__1, &c__2);
/*< 	call chrout(58) >*/
    chrout_(&c__58);
/*< 	call number(2, itim-60*(itim/60), -2 ) >*/
    i__1 = itim - itim / 60 * 60;
    number_(&c__2, &i__1, &c_n2);
/*< 	if( x.eq.ox.and.y.eq.oy.and.z.eq.oz.and.ichar.ne.78 ) goto 100 >*/
    if (*x == ox && *y == oy && *z__ == oz && *ichar != 78) {
	goto L100;
    }
/*< 	call colcur( 3, 24 ) >*/
    colcur_(&c__3, &c__24);
/*< 	call number(2, x-50, 3 ) >*/
    i__1 = *x - 50;
    number_(&c__2, &i__1, &c__3);
/*< 	ox = x >*/
    ox = *x;
/*< 	call chrout(44) >*/
    chrout_(&c__44);
/*< 	call number(2, y-76, 3 ) >*/
    i__1 = *y - 76;
    number_(&c__2, &i__1, &c__3);
/*< 	oy = y >*/
    oy = *y;
/*< 	call chrout(44) >*/
    chrout_(&c__44);
/*< 	call number(2, z-5, 3 ) >*/
    i__1 = *z__ - 5;
    number_(&c__2, &i__1, &c__3);
/*< 	oz = z >*/
    oz = *z__;
/*< 100	if( ifix(d).eq. od .and. ichar .ne. 78 ) goto 200 >*/
L100:
    if ((integer) (*d__) == od && *ichar != 78) {
	goto L200;
    }
/*< 	call colcur( 20, 24 ) >*/
    colcur_(&c__20, &c__24);
/*< 	call number(2, ifix(d), 3 ) >*/
    i__1 = (integer) (*d__);
    number_(&c__2, &i__1, &c__3);
/*< 	od = d >*/
    od = *d__;
/*< 200	if(ifix(e).eq. oe .and. ichar .ne. 78 ) goto 300 >*/
L200:
    if ((integer) (*e) == oe && *ichar != 78) {
	goto L300;
    }
/*< 	call colcur( 28, 24 ) >*/
    colcur_(&c__28, &c__24);
/*< 	call number(2, ifix(e), 3 ) >*/
    i__1 = (integer) (*e);
    number_(&c__2, &i__1, &c__3);
/*< 	oe = e >*/
    oe = *e;
/*< 300	if( ifix(pit) .eq. opit .and. ichar .ne. 78 ) goto 400 >*/
L300:
    if ((integer) (*pit) == opit && *ichar != 78) {
	goto L400;
    }
/*< 	call colcur( 36, 24 ) >*/
    colcur_(&c__36, &c__24);
/*< 	call number(2, ifix(pit), 3 ) >*/
    i__1 = (integer) (*pit);
    number_(&c__2, &i__1, &c__3);
/*< 	opit = pit >*/
    opit = *pit;
/*< 400	call setvew(float(x),float(y),float(z),d,e,45.,18.9999,pit) >*/
L400:
    r__1 = (real) (*x);
    r__2 = (real) (*y);
    r__3 = (real) (*z__);
    setvew_(&r__1, &r__2, &r__3, d__, e, &c_b194, &c_b195, pit);

/*< 	if( z .lt. 5 ) goto 501 >*/
    if (*z__ < 5) {
	goto L501;
    }
/*< 	do 500 it = 1, 100 >*/
    for (it = 1; it <= 100; ++it) {
/*< 	    i = it >*/
	i__ = it;
/*< 	    call prspec( float(i), 1., 5., xp, yp, good ) >*/
	r__1 = (real) i__;
	prspec_(&r__1, &c_b198, &c_b199, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 	    call prspec( 1., float(i), 5., xp, yp, good ) >*/
	r__1 = (real) i__;
	prspec_(&c_b198, &r__1, &c_b199, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 	    call prspec( float(i), 100., 5., xp, yp, good ) >*/
	r__1 = (real) i__;
	prspec_(&r__1, &c_b202, &c_b199, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 	    call prspec( 100., float(i), 5., xp, yp, good ) >*/
	r__1 = (real) i__;
	prspec_(&c_b202, &r__1, &c_b199, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 500	continue >*/
/* L500: */
    }
/*< 501	continue >*/
L501:

/*< 	do 600 yt1 = 1, 75 >*/
    for (yt1 = 1; yt1 <= 75; ++yt1) {
/*< 	    y1 = yt1 >*/
	y1 = yt1;
/*< 	    call prspec( 48., float(y1), 1., xp, yp, good ) >*/
	r__1 = (real) y1;
	prspec_(&c_b207, &r__1, &c_b198, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 	    call prspec( 52., float(y1), 1., xp, yp, good ) >*/
	r__1 = (real) y1;
	prspec_(&c_b209, &r__1, &c_b198, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 	    call prspec( 48., float(y1), 5., xp, yp, good ) >*/
	r__1 = (real) y1;
	prspec_(&c_b207, &r__1, &c_b199, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 	    call prspec( 52., float(y1), 5., xp, yp, good ) >*/
	r__1 = (real) y1;
	prspec_(&c_b209, &r__1, &c_b199, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 600	continue >*/
/* L600: */
    }

/*< 	do 700 xt1 = 48, 52 >*/
    for (xt1 = 48; xt1 <= 52; ++xt1) {
/*< 	    x1 = xt1 >*/
	x1 = xt1;
/*< 	    call prspec( float(x1), 76., 1., xp, yp, good ) >*/
	r__1 = (real) x1;
	prspec_(&r__1, &c_b216, &c_b198, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 	    call prspec( float(x1), 76., 5., xp, yp, good ) >*/
	r__1 = (real) x1;
	prspec_(&r__1, &c_b216, &c_b199, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 700	continue >*/
/* L700: */
    }

/*< 	do 800 zt1 = 2, 4 >*/
    for (zt1 = 2; zt1 <= 4; ++zt1) {
/*< 	    z1 = zt1 >*/
	z1 = zt1;
/*< 	    call prspec( 48., 76., float(z1), xp, yp, good ) >*/
	r__1 = (real) z1;
	prspec_(&c_b207, &c_b216, &r__1, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 	    call prspec( 52., 76., float(z1), xp, yp, good ) >*/
	r__1 = (real) z1;
	prspec_(&c_b209, &c_b216, &r__1, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1 >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = 1;
	}
/*< 800	continue >*/
/* L800: */
    }

/*< 	call getval(5, 0,231,  3, 1, objnum ) >*/
    getval_(&c__5, &c__0, &c__231, &c__3, &c__1, &objnum);
/*< 	do 900 i = 1, objnum >*/
    i__1 = objnum;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    iobj = i >*/
	iobj = i__;
/*< 	    call getval(6, 0,234,  2, iobj, 1, x1 ) >*/
	getval_(&c__6, &c__0, &c__234, &c__2, &iobj, &c__1, &x1);
/*< 	    xr = x1 >*/
	xr = (real) x1;
/*< 	    call getval(6, 0,236,  2, iobj, 2, y1 ) >*/
	getval_(&c__6, &c__0, &c__236, &c__2, &iobj, &c__2, &y1);
/*< 	    yr = y1 >*/
	yr = (real) y1;
/*< 	    call getval(6, 0,238,  2, iobj, 3, z1 ) >*/
	getval_(&c__6, &c__0, &c__238, &c__2, &iobj, &c__3, &z1);
/*< 	    zr = z1 >*/
	zr = (real) z1;
/*< 	    dist =sqrt((xr-x+0.0)**2+(yr-y+0.0)**2+(zr-z+0.0)**2) >*/
/* Computing 2nd power */
	r__2 = xr - *x + (float)0.;
/* Computing 2nd power */
	r__3 = yr - *y + (float)0.;
	r__1 = r__2 * r__2 + r__3 * r__3;
/* Computing 2nd power */
	r__4 = zr - *z__ + (float)0.;
	dist = sqrt(r__1 + r__4 * r__4);
/*< 	    if( dist .eq. 0 .or. dist .gt. 20 ) goto 900 >*/
	if (dist == 0 || dist > 20) {
	    goto L900;
	}
/*< 	    call getval(6, 0,242,  2, iobj, 4, ival ) >*/
	getval_(&c__6, &c__0, &c__242, &c__2, &iobj, &c__4, &ival);
/*< 	    if( ival .eq. 0 ) goto 900 >*/
	if (ival == 0) {
	    goto L900;
	}
/*< 	    call prspec( xr, yr, zr, xp, yp, good ) >*/
	prspec_(&xr, &yr, &zr, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 	    if( dist .gt. 5 ) goto 900 >*/
	if (dist > 5) {
	    goto L900;
	}
/*< 	    call prspec( xr-.5, yr-.5, zr-.5, xp, yp, good ) >*/
	r__1 = xr - (float).5;
	r__2 = yr - (float).5;
	r__3 = zr - (float).5;
	prspec_(&r__1, &r__2, &r__3, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 	    call prspec( xr+.5, yr-.5, zr-.5, xp, yp, good ) >*/
	r__1 = xr + (float).5;
	r__2 = yr - (float).5;
	r__3 = zr - (float).5;
	prspec_(&r__1, &r__2, &r__3, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 	    call prspec( xr-.5, yr+.5, zr-.5, xp, yp, good ) >*/
	r__1 = xr - (float).5;
	r__2 = yr + (float).5;
	r__3 = zr - (float).5;
	prspec_(&r__1, &r__2, &r__3, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 	    call prspec( xr+.5, yr+.5, zr-.5, xp, yp, good ) >*/
	r__1 = xr + (float).5;
	r__2 = yr + (float).5;
	r__3 = zr - (float).5;
	prspec_(&r__1, &r__2, &r__3, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 	    call prspec( xr-.5, yr-.5, zr+.5, xp, yp, good ) >*/
	r__1 = xr - (float).5;
	r__2 = yr - (float).5;
	r__3 = zr + (float).5;
	prspec_(&r__1, &r__2, &r__3, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 	    call prspec( xr+.5, yr-.5, zr+.5, xp, yp, good ) >*/
	r__1 = xr + (float).5;
	r__2 = yr - (float).5;
	r__3 = zr + (float).5;
	prspec_(&r__1, &r__2, &r__3, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 	    call prspec( xr-.5, yr+.5, zr+.5, xp, yp, good ) >*/
	r__1 = xr - (float).5;
	r__2 = yr + (float).5;
	r__3 = zr + (float).5;
	prspec_(&r__1, &r__2, &r__3, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 	    call prspec( xr+.5, yr+.5, zr+.5, xp, yp, good ) >*/
	r__1 = xr + (float).5;
	r__2 = yr + (float).5;
	r__3 = zr + (float).5;
	prspec_(&r__1, &r__2, &r__3, &xp, &yp, &good);
/*< 	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival >*/
	if (good) {
	    screen[(integer) (xp + (float)1.) + (integer) (yp + (float)1.) * 
		    19 - 20] = ival;
	}
/*< 900	continue >*/
L900:
	;
    }

/*< 	do 1100 y1 = 1, 19 >*/
    for (y1 = 1; y1 <= 19; ++y1) {
/*< 	    next = .false. >*/
	next = FALSE_;
/*< 	    do 1100 x1 = 1, 19 >*/
	for (x1 = 1; x1 <= 19; ++x1) {
/*< 		if( ichar .eq. 78 )  oscr(x1,y1) = 0 >*/
	    if (*ichar == 78) {
		oscr[x1 + y1 * 19 - 20] = 0;
	    }
/*< 		iscr = screen(x1,y1) >*/
	    iscr = screen[x1 + y1 * 19 - 20];
/*< 		if( iscr .eq. oscr(x1,y1) ) goto 1000 >*/
	    if (iscr == oscr[x1 + y1 * 19 - 20]) {
		goto L1000;
	    }
/*< 		if( next )  call chrout(32) >*/
	    if (next) {
		chrout_(&c__32);
	    }
/*< 		if( .not. next )  call cursor( x1*2, y1+4 ) >*/
	    if (! next) {
		i__1 = x1 << 1;
		i__2 = y1 + 4;
		cursor_(&i__1, &i__2);
	    }
/*< 		if( iscr .ge. 7 ) goto 950 >*/
	    if (iscr >= 7) {
		goto L950;
	    }
/*< 		ich = prilst(iscr+1) >*/
	    ich = prilst[iscr];
/*< 		ifg = ich / 256 / 256 >*/
	    ifg = ich / 256 / 256;
/*< 		ibg = mod( ich / 256, 256 ) >*/
	    ibg = ich / 256 % 256;
/*< 		ich = mod( ich, 256 ) >*/
	    ich %= 256;
/*< 		goto 970 >*/
	    goto L970;
/*< 950		ich = iscr - 6 >*/
L950:
	    ich = iscr - 6;
/*< 		if( (ich.le.13) .eq. (iplayr.le.13) ) goto 960 >*/
	    if (ich <= 13 == *iplayr <= 13) {
		goto L960;
	    }
/*< 		ibg = iclred >*/
	    ibg = col_1.iclred;
/*< 		ifg = iclpur >*/
	    ifg = col_1.iclpur;
/*< 		ich = ich + 64 >*/
	    ich += 64;
/*< 		goto 970 >*/
	    goto L970;
/*< 960		ibg = icldbl >*/
L960:
	    ibg = col_1.icldbl;
/*< 		ifg = icllbl >*/
	    ifg = col_1.icllbl;
/*< 		ich = ich + 64 >*/
	    ich += 64;
/*< 970		call pback( ibg ) >*/
L970:
	    pback_(&ibg);
/*< 		call pcolor( ifg ) >*/
	    pcolor_(&ifg);
/*< 		call chrout( ich ) >*/
	    chrout_(&ich);
/*< 		oscr( x1, y1 ) = iscr >*/
	    oscr[x1 + y1 * 19 - 20] = iscr;
/*< 		screen(x1,y1) = 0 >*/
	    screen[x1 + y1 * 19 - 20] = 0;
/*< 		next = .true. >*/
	    next = TRUE_;
/*< 		goto 1100 >*/
	    goto L1100;
/*< 1000		screen(x1,y1) = 0 >*/
L1000:
	    screen[x1 + y1 * 19 - 20] = 0;
/*< 		next = .false. >*/
	    next = FALSE_;
/*< 1100	continue >*/
L1100:
	    ;
	}
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* updscr_ */


/*< 	subroutine comand( ichar, comara, arrind ) >*/
/* Subroutine */ int comand_(ichar, comara, arrind)
integer *ichar, *comara, *arrind;
{
    /* Initialized data */

    static integer index = 0;

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__;
    extern /* Subroutine */ int nap_();
    extern integer icon_();
    extern /* Subroutine */ int chrbuf_(), colcur_(), chrout_(), outbuf_();


/*  --   ROUTINE GET COMMAND FROM USER IF ONE PRESENT. */

/*< 	integer comara(61), index, arrind, ichar >*/
/*< 	data index/0/ >*/
    /* Parameter adjustments */
    --comara;

    /* Function Body */

/*  --   IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR */
/*  --   0.5 SECONDS OR UNTIL ONE IS. */

/*< 100	call nap( 500, 12 ) >*/
L100:
    nap_(&c__500, &c__12);
/*< 	call chrbuf( ichar ) >*/
    chrbuf_(ichar);
/*< 	if( ichar .eq. -1 )  return >*/
    if (*ichar == -1) {
	return 0;
    }
/*< 	if( ichar .eq. 8 .or. ichar .eq. 127 ) goto 200 >*/
    if (*ichar == 8 || *ichar == 127) {
	goto L200;
    }
/*< 	if( ichar .eq. 21 ) goto 300 >*/
    if (*ichar == 21) {
	goto L300;
    }
/*< 	if( ichar .lt. 32 ) goto 500 >*/
    if (*ichar < 32) {
	goto L500;
    }
/*< 	if( index .ge. 60 ) goto 600 >*/
    if (index >= 60) {
	goto L600;
    }

/*  --   NOT SPECIAL CHARACTER, PUT IN ARRAY */

/*< 	index = index + 1 >*/
    ++index;
/*< 	call colcur( 9 + index, 1 ) >*/
    i__1 = index + 9;
    colcur_(&i__1, &c__1);
/*< 	if( ichar .ge. 97 )  ichar = ichar - 32 >*/
    if (*ichar >= 97) {
	*ichar += -32;
    }
/*< 	call chrout( ichar ) >*/
    chrout_(ichar);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	comara(index) = icon( ichar ) >*/
    comara[index] = icon_(ichar);
/*< 	if( index .ne. 1 ) goto 100 >*/
    if (index != 1) {
	goto L100;
    }
/*< 	if( ichar .lt. 65 .or. ichar .gt. 90 ) goto 500 >*/
    if (*ichar < 65 || *ichar > 90) {
	goto L500;
    }
/*< 	ichar = icon( ichar ) >*/
    *ichar = icon_(ichar);
/*< 	if( ichar.eq.65 .or. ichar.eq.68 .or. ichar.eq.84 ) goto 500 >*/
    if (*ichar == 65 || *ichar == 68 || *ichar == 84) {
	goto L500;
    }
/*< 	goto 100 >*/
    goto L100;

/*  --   DELETE CHARACTER */

/*< 200	call colcur( 9 + index, 1 ) >*/
L200:
    i__1 = index + 9;
    colcur_(&i__1, &c__1);
/*< 	call chrout( 32 ) >*/
    chrout_(&c__32);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	index = index - 1 >*/
    --index;
/*< 	if( index .lt. 0 )  index = 0 >*/
    if (index < 0) {
	index = 0;
    }
/*< 	goto 100 >*/
    goto L100;

/*  --   DELETE LINE */

/*< 300	call colcur( 10, 1 ) >*/
L300:
    colcur_(&c__10, &c__1);
/*< 	do 400 i = 1, index >*/
    i__1 = index;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 400	continue >*/
/* L400: */
    }
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	index = 0 >*/
    index = 0;
/*< 	goto 100 >*/
    goto L100;

/*  --   CARRIAGE RETURN TYPED */

/*< 500	if( index .eq. 0 ) goto 100 >*/
L500:
    if (index == 0) {
	goto L100;
    }
/*< 600	comara(index + 1) = 0 >*/
L600:
    comara[index + 1] = 0;
/*< 	call colcur( 10, 1 ) >*/
    colcur_(&c__10, &c__1);
/*< 	do 700 i = 1, index >*/
    i__1 = index;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	call chrout(32) >*/
	chrout_(&c__32);
/*< 700	continue >*/
/* L700: */
    }
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	call nap( 500, 4 ) >*/
    nap_(&c__500, &c__4);
/*< 	ichar = comara(1) >*/
    *ichar = comara[1];
/*< 	arrind = index >*/
    *arrind = index;
/*< 	index = 0 >*/
    index = 0;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* comand_ */


/*< 	subroutine messag( icol, msgara ) >*/
/* Subroutine */ int messag_(icol, msgara, msgara_len)
integer *icol;
char *msgara;
ftnlen msgara_len;
{
    extern /* Subroutine */ int colcur_(), colstr_(), cursor_(), irepeat_();


/* 	The following gets replaced with character msgara(80) before being */
/* 	handed to GNU g77. */
/*< 	character msgara( 80 ) >*/

/*< 	call colcur( 1, 2 ) >*/
    /* Parameter adjustments */
    --msgara;

    /* Function Body */
    colcur_(&c__1, &c__2);
/*< 	call irepeat(32,79) >*/
    irepeat_(&c__32, &c__79);
/*< 	call cursor( 1, 2 ) >*/
    cursor_(&c__1, &c__2);
/*< 	call colstr( icol, msgara ) >*/
    colstr_(icol, msgara + 1, (ftnlen)1);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* messag_ */


/*< 	subroutine cease( iship, icol, msgara ) >*/
/* Subroutine */ int cease_(iship, icol, msgara, msgara_len)
integer *iship, *icol;
char *msgara;
ftnlen msgara_len;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer ival;
    extern /* Subroutine */ int close_(), addval_(), delobj_(), messag_(), 
	    getval_(), unlock_(), exprog_(), putval_(), usrset_();


/* 	The following gets replaced with character msgara(80) before being */
/* 	handed to GNU g77. */
/*< 	character msgara( 80 ) >*/
/*< 	call messag( icol, msgara ) >*/
    /* Parameter adjustments */
    --msgara;

    /* Function Body */
    messag_(icol, msgara + 1, (ftnlen)1);
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call unlock >*/
    unlock_();
/*< 	call getval(6, 0,387,  2, iship, 4, ival ) >*/
    getval_(&c__6, &c__0, &c__387, &c__2, iship, &c__4, &ival);
/*< 	call putval(6, 0,388,  4, ival-6, 1, 0 ) >*/
    i__1 = ival - 6;
    putval_(&c__6, &c__0, &c__388, &c__4, &i__1, &c__1, &c__0);
/*< 	call putval(6, 0,389,  4, ival-6, 2, 0 ) >*/
    i__1 = ival - 6;
    putval_(&c__6, &c__0, &c__389, &c__4, &i__1, &c__2, &c__0);
/*< 	call addval(5, 0,390,  3, 3, -1 ) >*/
    addval_(&c__5, &c__0, &c__390, &c__3, &c__3, &c_n1);
/*< 	call delobj( iship ) >*/
    delobj_(iship);
/*< 	call usrset( 1031, 0 ) >*/
    usrset_(&c__1031, &c__0);
/*< 	call usrset( 1026, 0 ) >*/
    usrset_(&c__1026, &c__0);
/*< 	call usrset( 1041, 1 ) >*/
    usrset_(&c__1041, &c__1);

/*< 	call exprog >*/
    exprog_();

/*< 	end >*/
} /* cease_ */


/*< 	subroutine makobj( x, y, z, val ) >*/
/* Subroutine */ int makobj_(x, y, z__, val)
integer *x, *y, *z__, *val;
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer iobj, ival;
    extern /* Subroutine */ int getval_();
    static integer lastob, lastpt;
    extern /* Subroutine */ int putval_();


/*< 	implicit integer ( a - z ) >*/

/*< 	call getval(5, 0,403,  3, 1, lastob ) >*/
    getval_(&c__5, &c__0, &c__403, &c__3, &c__1, &lastob);
/*< 	call getval(5, 0,404,  3, 2, lastpt ) >*/
    getval_(&c__5, &c__0, &c__404, &c__3, &c__2, &lastpt);
/*< 	lastpt = lastpt + 1 >*/
    ++lastpt;
/*< 	if( lastpt .ge. lastob ) goto 101 >*/
    if (lastpt >= lastob) {
	goto L101;
    }
/*< 	do 100 iobj = lastpt, lastob >*/
    i__1 = lastob;
    for (iobj = lastpt; iobj <= i__1; ++iobj) {
/*< 	    call getval(6, 0,408,  2, iobj+0, 4, ival ) >*/
	i__2 = iobj;
	getval_(&c__6, &c__0, &c__408, &c__2, &i__2, &c__4, &ival);
/*< 	    if( ival .eq. 0 ) goto 200 >*/
	if (ival == 0) {
	    goto L200;
	}
/*< 100	continue >*/
/* L100: */
    }
/*< 101	continue >*/
L101:
/*< 	iobj = lastob + 1 >*/
    iobj = lastob + 1;
/*< 	call putval(5, 0,413,  3, 1, iobj ) >*/
    putval_(&c__5, &c__0, &c__413, &c__3, &c__1, &iobj);

/*< 200	call putval(5, 0,415,  3, 2, iobj ) >*/
L200:
    putval_(&c__5, &c__0, &c__415, &c__3, &c__2, &iobj);
/*< 	call putval(6, 0,416,  2, iobj, 1, x ) >*/
    putval_(&c__6, &c__0, &c__416, &c__2, &iobj, &c__1, x);
/*< 	call putval(6, 0,417,  2, iobj, 2, y ) >*/
    putval_(&c__6, &c__0, &c__417, &c__2, &iobj, &c__2, y);
/*< 	call putval(6, 0,418,  2, iobj, 3, z ) >*/
    putval_(&c__6, &c__0, &c__418, &c__2, &iobj, &c__3, z__);
/*< 	call putval(6, 0,419,  2, iobj, 4, val ) >*/
    putval_(&c__6, &c__0, &c__419, &c__2, &iobj, &c__4, val);
/*< 	call putval(7, 0,420,  1, x, y, z, 1 ) >*/
    putval_(&c__7, &c__0, &c__420, &c__1, x, y, z__, &c__1);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* makobj_ */


/*< 	subroutine delobj( iobj ) >*/
/* Subroutine */ int delobj_(iobj)
integer *iobj;
{
    static integer ix, iy, iz, ival;
    extern /* Subroutine */ int getval_(), putval_();


/*< 	call getval(6, 0,425,  2, iobj, 1, ix ) >*/
    getval_(&c__6, &c__0, &c__425, &c__2, iobj, &c__1, &ix);
/*< 	call getval(6, 0,426,  2, iobj, 2, iy ) >*/
    getval_(&c__6, &c__0, &c__426, &c__2, iobj, &c__2, &iy);
/*< 	call getval(6, 0,427,  2, iobj, 3, iz ) >*/
    getval_(&c__6, &c__0, &c__427, &c__2, iobj, &c__3, &iz);
/*< 	call putval(7, 0,428,  1, ix, iy, iz, 0 ) >*/
    putval_(&c__7, &c__0, &c__428, &c__1, &ix, &iy, &iz, &c__0);
/*< 	call putval(6, 0,429,  2, iobj, 4, 0 ) >*/
    putval_(&c__6, &c__0, &c__429, &c__2, iobj, &c__4, &c__0);
/*< 	call getval(5, 0,430,  3, 2, ival ) >*/
    getval_(&c__5, &c__0, &c__430, &c__3, &c__2, &ival);
/*< 	if( ival .gt. iobj )  call putval(4, 0,431,  -3, iobj ) >*/
    if (ival > *iobj) {
	putval_(&c__4, &c__0, &c__431, &c_n3, iobj);
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* delobj_ */


/*< 	integer function numobj( x, y, z ) >*/
integer numobj_(x, y, z__)
integer *x, *y, *z__;
{
    /* System generated locals */
    integer ret_val, i__1;

    /* Local variables */
    static integer iobj, ival;
    extern /* Subroutine */ int getval_();


/*< 	implicit integer ( a - z ) >*/

/*< 	call getval(5, 0,438,  3, 1, numobj ) >*/
    getval_(&c__5, &c__0, &c__438, &c__3, &c__1, &ret_val);

/*< 	do 100 iobj = 1, numobj >*/
    i__1 = ret_val;
    for (iobj = 1; iobj <= i__1; ++iobj) {
/*< 	    numobj = iobj >*/
	ret_val = iobj;
/*< 	    call getval(6, 0,442,  2, numobj, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__442, &c__2, &ret_val, &c__1, &ival);
/*< 	    if( ival .ne. x ) goto 100 >*/
	if (ival != *x) {
	    goto L100;
	}
/*< 	    call getval(6, 0,444,  2, numobj, 2, ival ) >*/
	getval_(&c__6, &c__0, &c__444, &c__2, &ret_val, &c__2, &ival);
/*< 	    if( ival .ne. y ) goto 100 >*/
	if (ival != *y) {
	    goto L100;
	}
/*< 	    call getval(6, 0,446,  2, numobj, 3, ival ) >*/
	getval_(&c__6, &c__0, &c__446, &c__2, &ret_val, &c__3, &ival);
/*< 	    if( ival .ne. z ) goto 100 >*/
	if (ival != *z__) {
	    goto L100;
	}
/*< 	    call getval(6, 0,448,  2, numobj, 4, ival ) >*/
	getval_(&c__6, &c__0, &c__448, &c__2, &ret_val, &c__4, &ival);
/*< 	    if( ival .ne. 0 )  return >*/
	if (ival != 0) {
	    return ret_val;
	}
/*< 100	continue >*/
L100:
	;
    }
/*< 	numobj = 0 >*/
    ret_val = 0;
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* numobj_ */


/*< 	subroutine inrang( deg ) >*/
/* Subroutine */ int inrang_(deg)
real *deg;
{

/*< 100	if( deg .ge. 0 ) goto 200 >*/
L100:
    if (*deg >= (float)0.) {
	goto L200;
    }
/*< 	deg = deg + 360 >*/
    *deg += 360;
/*< 	goto 100 >*/
    goto L100;
/*< 200	if( deg .lt. 360 )  return >*/
L200:
    if (*deg < (float)360.) {
	return 0;
    }
/*< 	deg = deg - 360 >*/
    *deg += -360;
/*< 	goto 200 >*/
    goto L200;
/*< 	end >*/
} /* inrang_ */


/*< 	subroutine explod( x, y, z, f ) >*/
/* Subroutine */ int explod_(x, y, z__, f)
integer *x, *y, *z__, *f;
{
    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer i__, j, nx, ny, nz;
    extern integer iran_();
    static integer ival, xdir, ydir, zdir;
    extern /* Subroutine */ int makobj_(), getval_();
    extern integer numobj_();
    extern /* Subroutine */ int putval_();


/*< 	implicit integer ( a - z ) >*/

/*< 	do 200 i = 1, f*8 >*/
    i__1 = *f << 3;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    xdir = iran(3)-2 >*/
	xdir = iran_(&c__3) - 2;
/*< 	    ydir = iran(3)-2 >*/
	ydir = iran_(&c__3) - 2;
/*< 	    zdir = iran(3)-2 >*/
	zdir = iran_(&c__3) - 2;
/*< 	    do 100 j = 1, f >*/
	i__2 = *f;
	for (j = 1; j <= i__2; ++j) {
/*< 		nx = x + xdir*j >*/
	    nx = *x + xdir * j;
/*< 		ny = y + ydir*j >*/
	    ny = *y + ydir * j;
/*< 		nz = z + zdir*j >*/
	    nz = *z__ + zdir * j;
/*< 		if(  >*/
	    if (nx < 1 || nx > 100 || ny < 1 || ny > 100 || nz < 1 || nz > 30)
		     {
		goto L200;
	    }
/*< 		call getval(7, 0,477,  1, nx, ny, nz, ival ) >*/
	    getval_(&c__7, &c__0, &c__477, &c__1, &nx, &ny, &nz, &ival);
/*< 		if( ival .ne. 0 ) goto 200 >*/
	    if (ival != 0) {
		goto L200;
	    }
/*< 		call makobj( nx, ny, nz, 6 ) >*/
	    makobj_(&nx, &ny, &nz, &c__6);
/*< 		call putval(6, 0,480,  2, numobj( nx, ny, nz ), 5, 10 ) >*/
	    i__3 = numobj_(&nx, &ny, &nz);
	    putval_(&c__6, &c__0, &c__480, &c__2, &i__3, &c__5, &c__10);
/*< 100	    continue >*/
/* L100: */
	}
/*< 200	continue >*/
L200:
	;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* explod_ */


/*< 	subroutine dump >*/
/* Subroutine */ int dump_()
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, x, y, z__, val, val1, iobj;
    extern /* Subroutine */ int crlf_();
    static integer nobj, iext;
    extern /* Subroutine */ int ofile_(), close_(), wfile_(), coord_();
    static integer iclblu;
    extern /* Subroutine */ int select_(), messag_();
    static integer filesp[13];
    extern /* Subroutine */ int getval_(), number_();
    extern integer isxbit_();
    extern /* Subroutine */ int chrout_(), string_();
    static integer nmthru;


/*< 	implicit integer ( a - z ) >*/

/*< 	integer filesp( 13 ) >*/

/*< 	filesp( 3 ) = isxbit('DSK~') >*/
    filesp[2] = isxbit_("DSK~", (ftnlen)4);
/*< 	filesp( 4 ) = isxbit('WAR~') >*/
    filesp[3] = isxbit_("WAR~", (ftnlen)4);
/*< 	filesp( 5 ) = isxbit('DMA~') >*/
    filesp[4] = isxbit_("DMA~", (ftnlen)4);
/*< 	filesp( 5 ) = filesp( 5 ) + nmthru*262144 >*/
    filesp[4] += nmthru << 18;
/*< 	call ofile( 2, filesp, 0 ) >*/
    ofile_(&c__2, filesp, &c__0);
/*< 	call wfile( 2, filesp ) >*/
    wfile_(&c__2, filesp);
/*< 	nmthru = nmthru + 1 >*/
    ++nmthru;
/*< 	call select( 2 ) >*/
    select_(&c__2);
/*< 	call getval(5, 0,499,  3, 1, nobj ) >*/
    getval_(&c__5, &c__0, &c__499, &c__3, &c__1, &nobj);
/*< 	call getval(5, 0,500,  3, 2, val ) >*/
    getval_(&c__5, &c__0, &c__500, &c__3, &c__2, &val);
/*< 	call string(1,'Maximum object: ^E') >*/
    string_(&c__1, "Maximum object: ^E", (ftnlen)18);
/*< 	call number(1, nobj ) >*/
    number_(&c__1, &nobj);
/*< 	call string(1,'.   Known to be filled in list: ^E') >*/
    string_(&c__1, ".   Known to be filled in list: ^E", (ftnlen)34);
/*< 	call number(1, val ) >*/
    number_(&c__1, &val);
/*< 	call string(1,'.^M^J^E') >*/
    string_(&c__1, ".^M^J^E", (ftnlen)7);
/*< 	do 100 i = 1, nobj >*/
    i__1 = nobj;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    iobj = i >*/
	iobj = i__;
/*< 	    call getval(6, 0,508,  2, iobj, 1, x ) >*/
	getval_(&c__6, &c__0, &c__508, &c__2, &iobj, &c__1, &x);
/*< 	    call getval(6, 0,509,  2, iobj, 2, y ) >*/
	getval_(&c__6, &c__0, &c__509, &c__2, &iobj, &c__2, &y);
/*< 	    call getval(6, 0,510,  2, iobj, 3, z ) >*/
	getval_(&c__6, &c__0, &c__510, &c__2, &iobj, &c__3, &z__);
/*< 	    call getval(6, 0,511,  2, iobj, 4, val ) >*/
	getval_(&c__6, &c__0, &c__511, &c__2, &iobj, &c__4, &val);
/*< 	    call number(1, iobj ) >*/
	number_(&c__1, &iobj);
/*< 	    call coord( x, y, z ) >*/
	coord_(&x, &y, &z__);
/*< 	    call number(1, val ) >*/
	number_(&c__1, &val);
/*< 	    call chrout(58) >*/
	chrout_(&c__58);
/*< 	    call getval(6, 0,516,  2, iobj, 5, val1 ) >*/
	getval_(&c__6, &c__0, &c__516, &c__2, &iobj, &c__5, &val1);
/*< 	    call number(1, val1 ) >*/
	number_(&c__1, &val1);
/*< 	    call getval(7, 0,518,  1, x, y, z, val1 ) >*/
	getval_(&c__7, &c__0, &c__518, &c__1, &x, &y, &z__, &val1);
/*< 	    call number(2, val1, 2 ) >*/
	number_(&c__2, &val1, &c__2);
/*< 	    if( (val.eq.0).ne.(val1.eq.0) ) call string(1,'   *^E') >*/
	if (val == 0 != (val1 == 0)) {
	    string_(&c__1, "   *^E", (ftnlen)6);
	}
/*< 	    call crlf >*/
	crlf_();
/*< 100	    continue >*/
/* L100: */
    }
/*< 	call close( 2 ) >*/
    close_(&c__2);
/*< 	call select( 1 ) >*/
    select_(&c__1);
/*< 	call messag(iclblu,'[Data base #^E') >*/
    messag_(&iclblu, "[Data base #^E", (ftnlen)14);
/*< 	call number(1, nmthru ) >*/
    number_(&c__1, &nmthru);
/*< 	call string(1,' dumped on war.^E') >*/
    string_(&c__1, " dumped on war.^E", (ftnlen)17);
/*< 	call string(3, iext, 6, 3 ) >*/
    string_(&c__3, &iext, &c__6, &c__3);
/*< 	call chrout(93) >*/
    chrout_(&c__93);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* dump_ */


/*< 	subroutine probj( iobj ) >*/
/* Subroutine */ int probj_(iobj)
integer *iobj;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer ival;
    extern /* Subroutine */ int getval_(), chrout_(), string_();


/*< 	if( iobj .eq. 0 )  call string(1,'The death star^E') >*/
    if (*iobj == 0) {
	string_(&c__1, "The death star^E", (ftnlen)16);
    }
/*< 	if( iobj .eq. 0 )  return >*/
    if (*iobj == 0) {
	return 0;
    }
/*< 	call getval(6, 0,536,  2, iobj, 4, ival ) >*/
    getval_(&c__6, &c__0, &c__536, &c__2, iobj, &c__4, &ival);
/*< 	if( ival .eq. 1 )  call string(1,'The death star^E') >*/
    if (ival == 1) {
	string_(&c__1, "The death star^E", (ftnlen)16);
    }
/*< 	if( ival .eq. 2 )  call string(1,'An exhaust port^E') >*/
    if (ival == 2) {
	string_(&c__1, "An exhaust port^E", (ftnlen)17);
    }
/*< 	if( ival .eq. 3 )  call string(1,'A light laser tower^E') >*/
    if (ival == 3) {
	string_(&c__1, "A light laser tower^E", (ftnlen)21);
    }
/*< 	if( ival .eq. 4 )  call string(1,'A heavy laser tower^E') >*/
    if (ival == 4) {
	string_(&c__1, "A heavy laser tower^E", (ftnlen)21);
    }
/*< 	if( ival .eq. 5 )  call string(1,'A torpedo^E') >*/
    if (ival == 5) {
	string_(&c__1, "A torpedo^E", (ftnlen)11);
    }
/*< 	if( ival .eq. 6 )  call string(1,'An explosion particle^E') >*/
    if (ival == 6) {
	string_(&c__1, "An explosion particle^E", (ftnlen)23);
    }
/*< 	if( ival .le. 6 )  return >*/
    if (ival <= 6) {
	return 0;
    }
/*< 	if( ival .le. 19 )  call string(1,'The rebel-^E') >*/
    if (ival <= 19) {
	string_(&c__1, "The rebel-^E", (ftnlen)12);
    }
/*< 	if( ival .gt. 19 )  call string(1,'The empire-^E') >*/
    if (ival > 19) {
	string_(&c__1, "The empire-^E", (ftnlen)13);
    }
/*< 	call chrout( 58+ival ) >*/
    i__1 = ival + 58;
    chrout_(&i__1);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* probj_ */


/*< 	subroutine coord( ix, iy, iz ) >*/
/* Subroutine */ int coord_(ix, iy, iz)
integer *ix, *iy, *iz;
{
    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    extern /* Subroutine */ int string_(), outnum_();

/*< 	call string(1,'( ^E') >*/
    string_(&c__1, "( ^E", (ftnlen)4);
/*< 	call outnum(3, ix-50, iy-76, iz-5 ) >*/
    i__1 = *ix - 50;
    i__2 = *iy - 76;
    i__3 = *iz - 5;
    outnum_(&c__3, &i__1, &i__2, &i__3);
/*< 	call string(1,' )^E') >*/
    string_(&c__1, " )^E", (ftnlen)4);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* coord_ */


/*< 	subroutine setvew( xo, yo, zo, deg, elv, vspan, width, rotat ) >*/
/* Subroutine */ int setvew_(xo, yo, zo, deg, elv, vspan, width, rotat)
real *xo, *yo, *zo, *deg, *elv, *vspan, *width, *rotat;
{
    /* System generated locals */
    real r__1, r__2;

    /* Builtin functions */
    double sqrt();

    /* Local variables */
    static real dist, dfact, cdist;
    extern doublereal smcos_(), smsin_(), cosdeg_(), sindeg_();



/* 	THIS SUBROUTINE SETS UP ALL THE NECESSARY VARIABLES */
/* 	TO DETERMINE THE POSITION (IN PERSPECTIVE) ON A PLANE */
/* 	OF A POINT IN 3 DIMENSIONS.  TO FIND THAT POINT, CALL */
/* 	PRSPEC. */

/* 	XO, YO, ZO	-	THE VIEW POINT IN SPACE */
/* 	DEG, ELV	-	THE AZIMUTH AND ELEVATION OF THE */
/* 				VIEW PROJECTION */
/* 	VSPAN		-	THE MAXIMUM VIEW ANGLE */
/* 	WIDTH		-	WIDTH OF VIEWING PLANE */
/* 	ROTAT		-	HOW EYE IS ORIENTED TO THE SYSTEM */



/* 			VIEWING PLANE (PERSPECTIVE) */

/* 		     +(X1,Y1,Z1) */
/* 		     ! */
/* 		     ! */
/* 		     ! */
/* 	------------------------------------------------- */
/* 	:	     .		^			: */
/* 	:	     .		+(XOFYP,YOFYP,ZOFYP)	: */
/* 	:	     .		!			: */
/* 	:	     +(X,Y,Z)	!			: */
/* 	:	     !		!			: */
/* 	:	     !		!   (XOFXP,YOFXP,ZOFXP) : */
/* 	:	     !		+------<-PDIST->------+>: */
/* 	:	     !	    (XC,YC,ZC)			: */
/* 	:	     !	      /				: */
/* 	:	     !	   DIST				: */
/* 	:	     !	    /				: */
/* 	:	     !	   / ->				: */
/* 	:	     !	  /  N = (A,B,C)		: */
/* 	-------------!---/------------------------------: */
/* 		     !	/ */
/* 		     ! / */
/* 		     !/ */
/* 		     +(X0,Y0,Z0) */

/*< 	real smsin, smcos, cosdeg, sindeg >*/
/*< 	logical newang >*/
/*< 	common/nhcom/newang >*/
/*< 	commo >*/


/* 	COPY VIEW POINT FOR COMMON */
/*< 	x0 = xo >*/
    prscom_1.x0 = *xo;
/*< 	y0 = yo >*/
    prscom_1.y0 = *yo;
/*< 	z0 = zo >*/
    prscom_1.z0 = *zo;
/* 	CALCULATE HALF PLANE, 3RD SIDE AND NORMAL DISTANCES */
/*< 	pdist = width/2.0 >*/
    prscom_1.pdist = *width / (float)2.;
/*< 	cdist = pdist / sindeg(vspan) >*/
    cdist = prscom_1.pdist / sindeg_(vspan);
/*< 	dist = sqrt( cdist**2 - pdist**2 ) >*/
/* Computing 2nd power */
    r__1 = cdist;
/* Computing 2nd power */
    r__2 = prscom_1.pdist;
    dist = sqrt(r__1 * r__1 - r__2 * r__2);

/* 	THE VIEW PROJECTION IS THE NORMAL TO THE PLANE SO */
/* 	VECTOR N = (A,B,C) AND THE PLANE'S EQUATION IS */
/* 	A*X + B*Y + C*Z = D.  GO FIND A, B AND C */
/*< 	a = smcos(deg)*cosdeg(elv)*dist >*/
    r__1 = smcos_(deg) * cosdeg_(elv);
    prscom_1.a = r__1 * dist;
/*< 	b = smsin(deg)*cosdeg(elv)*dist >*/
    r__1 = smsin_(deg) * cosdeg_(elv);
    prscom_1.b = r__1 * dist;
/*< 	c = sindeg(elv)*dist >*/
    prscom_1.c__ = sindeg_(elv) * dist;

/* 	DETERMINE THE ORIGIN OF THE PLANE */
/*< 	xc = x0 + a >*/
    prscom_1.xc = prscom_1.x0 + prscom_1.a;
/*< 	yc = y0 + b >*/
    prscom_1.yc = prscom_1.y0 + prscom_1.b;
/*< 	zc = z0 + c >*/
    prscom_1.zc = prscom_1.z0 + prscom_1.c__;

/* 	NOW DETERMINE THE UNIT VECTORS FOR THE PLANE. */
/* 	FOR VECTOR YP: */
/*< 	xofyp = (x0 + smcos(deg)*cosdeg(elv+vspan)*cdist - xc )/pdist >*/
    r__2 = *elv + *vspan;
    r__1 = smcos_(deg) * cosdeg_(&r__2);
    prscom_1.xofyp = (prscom_1.x0 + r__1 * cdist - prscom_1.xc) / 
	    prscom_1.pdist;
/*< 	yofyp = (y0 + smsin(deg)*cosdeg(elv+vspan)*cdist - yc )/pdist >*/
    r__2 = *elv + *vspan;
    r__1 = smsin_(deg) * cosdeg_(&r__2);
    prscom_1.yofyp = (prscom_1.y0 + r__1 * cdist - prscom_1.yc) / 
	    prscom_1.pdist;
/*< 	zofyp = (z0 + sindeg(elv+vspan)*cdist - zc )/pdist >*/
    r__1 = *elv + *vspan;
    prscom_1.zofyp = (prscom_1.z0 + sindeg_(&r__1) * cdist - prscom_1.zc) / 
	    prscom_1.pdist;

/* 	FOR VECTOR XP: */
/*< 	xofxp = b*zofyp - c*yofyp >*/
    prscom_1.xofxp = prscom_1.b * prscom_1.zofyp - prscom_1.c__ * 
	    prscom_1.yofyp;
/*< 	yofxp = c*xofyp - a*zofyp >*/
    prscom_1.yofxp = prscom_1.c__ * prscom_1.xofyp - prscom_1.a * 
	    prscom_1.zofyp;
/* 	ZOFXP = A*YOFYP - B*XOFYP */
/*< 	zofxp = 0 >*/
    prscom_1.zofxp = (float)0.;

/* 	NOW CONVERT XP TO A UNIT VECTOR */
/*< 	dfact = sqrt( xofxp**2 + yofxp**2 ) >*/
/* Computing 2nd power */
    r__1 = prscom_1.xofxp;
/* Computing 2nd power */
    r__2 = prscom_1.yofxp;
    dfact = sqrt(r__1 * r__1 + r__2 * r__2);
/*< 	xofxp = xofxp / dfact >*/
    prscom_1.xofxp /= dfact;
/*< 	yofxp = yofxp / dfact >*/
    prscom_1.yofxp /= dfact;

/* 	NOW FIND THE FACTORS TO DETERMINE ROLL */
/*< 	if( newang ) goto 1000 >*/
    if (nhcom_1.newang) {
	goto L1000;
    }
/*< 	pcos = cosdeg( rotat ) >*/
    prscom_1.pcos = cosdeg_(rotat);
/*< 	psin = sindeg( rotat ) >*/
    prscom_1.psin = sindeg_(rotat);
/*< 	goto 2000 >*/
    goto L2000;
/*< 1000	pcos = cosdeg( -rotat ) >*/
L1000:
    r__1 = -(*rotat);
    prscom_1.pcos = cosdeg_(&r__1);
/*< 	psin = sindeg( -rotat ) >*/
    r__1 = -(*rotat);
    prscom_1.psin = sindeg_(&r__1);
/*< 2000	return >*/
L2000:
    return 0;
/*< 	end >*/
} /* setvew_ */


/*< 	subroutine prspec( x1, y1, z1, fxp, fyp, done ) >*/
/* Subroutine */ int prspec_(x1, y1, z1, fxp, fyp, done)
real *x1, *y1, *z1, *fxp, *fyp;
logical *done;
{
    /* System generated locals */
    real r__1, r__2, r__3, r__4, r__5;

    /* Local variables */
    static real r__, x, y, z__, xd, yd, zd, xp, yp, denom;


/* 	X1, Y1, Z1  -	POINT TO TRANSFORM */
/* 	FXP, FYP    -	RESULTING POINT */
/* 	DONE	    -	LOGICAL TRUE IF NO ERROR */

/*< 	commo >*/

/*< 	logical done >*/

/*< 	done = .false. >*/
    *done = FALSE_;
/*< 	xp = 0 >*/
    xp = (float)0.;
/*< 	yp = 0 >*/
    yp = (float)0.;

/* 	(X,Y,Z) WILL BE THE POINT WHERE THE PROJECTION MEETS THE PLANE. */
/* 	DETERMINE THE DIRECTION VECTOR (XD,YD,ZD). */
/*< 	xd = x1 - x0 >*/
    xd = *x1 - prscom_1.x0;
/*< 	yd = y1 - y0 >*/
    yd = *y1 - prscom_1.y0;
/*< 	zd = z1 - z0 >*/
    zd = *z1 - prscom_1.z0;

/* 		NOW WE KNOW THAT */
/* 	D = A*( X0 + A )  +  B*( Y0 + B )  +  C*( Z0 + C ) */
/* 		AND */
/* 	D = A*( X0 + R*XD )  +  B*( Y + R*YD )  +  C*( Z0 + R*ZD ) */
/* 		SO */
/*< 	r = ( a**2 + b**2 + c**2 ) / ( a*xd + b*yd + c*zd ) >*/
/* Computing 2nd power */
    r__2 = prscom_1.a;
/* Computing 2nd power */
    r__3 = prscom_1.b;
    r__1 = r__2 * r__2 + r__3 * r__3;
/* Computing 2nd power */
    r__4 = prscom_1.c__;
    r__5 = prscom_1.a * xd + prscom_1.b * yd;
    r__ = (r__1 + r__4 * r__4) / (r__5 + prscom_1.c__ * zd);

/* 	IF R < 0 THEN OBJECT BEHIND VIEW POINT */
/*< 	if( r .lt. 0 ) return >*/
    if (r__ < (float)0.) {
	return 0;
    }

/* 	NOW, CALCULATE THE POINT WHERE THE LINES MEETS THE PLANE */
/*< 	x = x0 + r*xd >*/
    x = prscom_1.x0 + r__ * xd;
/*< 	y = y0 + r*yd >*/
    y = prscom_1.y0 + r__ * yd;
/*< 	z = z0 + r*zd >*/
    z__ = prscom_1.z0 + r__ * zd;

/* 	SINCE (X,Y,Z) = XP*(XOFXP,YOFXP,ZOFXP) + YP*(XOFYP,YOFYP,ZOFYP) */
/* 	THEN */
/* 	X-XC = XP*XOFXP + YP*XOFYP */
/* 	Y-YC = XP*YOFXP + YP*YOFYP */
/* 	Z-ZC = XP*ZOFXP + YP*ZOFYP */

/* 	3 EQUATIONS, 2 UNKNOWNS (XP AND YP).  BY SUBSTITUTION: */
/*< 	denom = xofxp*yofyp - yofxp*xofyp >*/
    denom = prscom_1.xofxp * prscom_1.yofyp - prscom_1.yofxp * prscom_1.xofyp;
/*< 	if( abs( denom ) .lt. 0.001 ) goto 10 >*/
    if (dabs(denom) < (float).001) {
	goto L10;
    }
/*< 	yp = ((y-yc)*xofxp - (x-xc)*yofxp) / denom >*/
    yp = ((y - prscom_1.yc) * prscom_1.xofxp - (x - prscom_1.xc) * 
	    prscom_1.yofxp) / denom;
/*< 	goto 100 >*/
    goto L100;
/*< 10	denom = xofxp*zofyp - zofxp*xofyp >*/
L10:
    denom = prscom_1.xofxp * prscom_1.zofyp - prscom_1.zofxp * prscom_1.xofyp;
/*< 	if( abs( denom ) .lt. 0.001 ) goto 20 >*/
    if (dabs(denom) < (float).001) {
	goto L20;
    }
/*< 	yp = ((z-zc)*xofxp - (x-xc)*zofxp) / denom >*/
    yp = ((z__ - prscom_1.zc) * prscom_1.xofxp - (x - prscom_1.xc) * 
	    prscom_1.zofxp) / denom;
/*< 	goto 100 >*/
    goto L100;
/*< 20	denom = yofxp*zofyp - zofxp*yofyp >*/
L20:
    denom = prscom_1.yofxp * prscom_1.zofyp - prscom_1.zofxp * prscom_1.yofyp;
/*< 	if( abs( denom ) .lt. 0.001 ) return >*/
    if (dabs(denom) < (float).001) {
	return 0;
    }
/*< 	yp = ((z-zc)*yofxp - (y-yc)*zofxp) / denom >*/
    yp = ((z__ - prscom_1.zc) * prscom_1.yofxp - (y - prscom_1.yc) * 
	    prscom_1.zofxp) / denom;
/*< 100	if( abs( xofxp ) .lt. 0.001 ) goto 110 >*/
L100:
    if (dabs(prscom_1.xofxp) < (float).001) {
	goto L110;
    }
/*< 	xp = ((x-xc) - yp*xofyp)/xofxp >*/
    xp = (x - prscom_1.xc - yp * prscom_1.xofyp) / prscom_1.xofxp;
/*< 	goto 200 >*/
    goto L200;
/*< 110	if( abs( yofxp ) .lt. 0.001 ) goto 120 >*/
L110:
    if (dabs(prscom_1.yofxp) < (float).001) {
	goto L120;
    }
/*< 	xp = ((y-yc) - yp*yofyp)/yofxp >*/
    xp = (y - prscom_1.yc - yp * prscom_1.yofyp) / prscom_1.yofxp;
/*< 	goto 200 >*/
    goto L200;
/*< 120	if( abs( zofxp ) .lt. 0.001 ) return >*/
L120:
    if (dabs(prscom_1.zofxp) < (float).001) {
	return 0;
    }
/*< 	xp = ((z-zc) - yp*zofyp)/zofxp >*/
    xp = (z__ - prscom_1.zc - yp * prscom_1.zofyp) / prscom_1.zofxp;
/*< 200	continue >*/
L200:
/*< 	fxp = pcos*xp + psin*yp  >*/
    *fxp = prscom_1.pcos * xp + prscom_1.psin * yp;
/*< 	fyp = pcos*yp - psin*xp >*/
    *fyp = prscom_1.pcos * yp - prscom_1.psin * xp;
/* 	NAN TESTS (NOT REQUIRED UNDER TOPS10) */
/*< 	if( .not. ((fxp .lt. 0.0) .or. (fxp .ge. 0.0) ) ) return >*/
    if (! (*fxp < (float)0. || *fxp >= (float)0.)) {
	return 0;
    }
/*< 	if( .not. ((fyp .lt. 0.0) .or. (fyp .ge. 0.0) ) ) return >*/
    if (! (*fyp < (float)0. || *fyp >= (float)0.)) {
	return 0;
    }
/*< 	if( abs(fxp).gt.pdist .or. abs(fyp).gt.pdist ) return >*/
    if (dabs(*fxp) > prscom_1.pdist || dabs(*fyp) > prscom_1.pdist) {
	return 0;
    }
/*< 	fxp = fxp + pdist >*/
    *fxp += prscom_1.pdist;
/*< 	fyp = fyp + pdist >*/
    *fyp += prscom_1.pdist;
/*< 	done = .true. >*/
    *done = TRUE_;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* prspec_ */

/*< 	subroutine syswho( ijob ) >*/
/* Subroutine */ int syswho_(ijob)
integer *ijob;
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer il, in;
    extern integer job_(), node_(), itty_(), igtab_(), ileft_();
    static integer uname[2];
    extern integer jstat_();
    extern /* Subroutine */ int nodlin_();
    extern integer iright_();
    extern /* Subroutine */ int number_(), chrout_(), string_();

/*< 	integer uname(2) >*/
/*< 	if( job(ijob) .eq. 0 ) return >*/
    if (job_(ijob) == 0) {
	return 0;
    }
/*< 	call string(1,'Job ^E') >*/
    string_(&c__1, "Job ^E", (ftnlen)6);
/*< 	call number(1, ijob ) >*/
    number_(&c__1, ijob);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	uname(1) = igtab( ijob, 25 ) >*/
    uname[0] = igtab_(ijob, &c__25);
/*< 	uname(2) = igtab( ijob, 26 ) >*/
    uname[1] = igtab_(ijob, &c__26);
/*< 	call string(3, uname, 6, 12 ) >*/
    string_(&c__3, uname, &c__6, &c__12);
/*< 	call string(1,' [^E') >*/
    string_(&c__1, " [^E", (ftnlen)4);
/*< 	call number(3, ileft( igtab( ijob, 2 ) ), 0, 8 ) >*/
    i__2 = igtab_(ijob, &c__2);
    i__1 = ileft_(&i__2);
    number_(&c__3, &i__1, &c__0, &c__8);
/*< 	call chrout(44) >*/
    chrout_(&c__44);
/*< 	call number(3, iright( igtab( ijob, 2 ) ), 0, 8 ) >*/
    i__2 = igtab_(ijob, &c__2);
    i__1 = iright_(&i__2);
    number_(&c__3, &i__1, &c__0, &c__8);
/*< 	call string(1,'] ^E') >*/
    string_(&c__1, "] ^E", (ftnlen)4);
/*< 	call string(1,' TTY^E') >*/
    string_(&c__1, " TTY^E", (ftnlen)6);
/*< 	call number(3, itty( ijob ), 0, 8 ) >*/
    i__1 = itty_(ijob);
    number_(&c__3, &i__1, &c__0, &c__8);
/*< 	call string(1,' at ^E') >*/
    string_(&c__1, " at ^E", (ftnlen)6);
/*< 	call nodlin( itty(ijob), in, il ) >*/
    i__1 = itty_(ijob);
    nodlin_(&i__1, &in, &il);
/*< 	call string(3, node( in ), 6, 6 ) >*/
    i__1 = node_(&in);
    string_(&c__3, &i__1, &c__6, &c__6);
/*< 	call chrout(40) >*/
    chrout_(&c__40);
/*< 	call number(3, in, 0, 8 ) >*/
    number_(&c__3, &in, &c__0, &c__8);
/*< 	call string(1,')^E') >*/
    string_(&c__1, ")^E", (ftnlen)3);
/*< 	call string(1,' line ^E') >*/
    string_(&c__1, " line ^E", (ftnlen)8);
/*< 	call number(3, il, 0, 8 ) >*/
    number_(&c__3, &il, &c__0, &c__8);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call string(3, jstat( ijob ), 6, 2 ) >*/
    i__1 = jstat_(ijob);
    string_(&c__3, &i__1, &c__6, &c__2);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* syswho_ */

/*< 	subroutine who( iletr ) >*/
/* Subroutine */ int who_(iletr)
integer *iletr;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer ijob;
    extern /* Subroutine */ int crlf_();
    static integer icllbl;
    extern /* Subroutine */ int messag_();
    static integer iclyel;
    extern /* Subroutine */ int getval_(), chrout_(), string_(), syswho_();


/* ***    SUBROUTINE PRINTS OUT STATISTICS ON USER */

/*< 	ijob = 0 >*/
    ijob = 0;
/*< 	if(iletr.gt.0.and.iletr.le.27)call getval(6, 0,765, 4,iletr,1,ijob) >*/
    if (*iletr > 0 && *iletr <= 27) {
	getval_(&c__6, &c__0, &c__765, &c__4, iletr, &c__1, &ijob);
    }
/*< 	if( ijob .eq. 0 )  call messag(iclyel,'No one^E') >*/
    if (ijob == 0) {
	messag_(&iclyel, "No one^E", (ftnlen)8);
    }
/*< 	if( ijob .eq. 0 )  return >*/
    if (ijob == 0) {
	return 0;
    }
/*< 	if( iletr .le. 13 ) call messag(icllbl,'Rebel-^E') >*/
    if (*iletr <= 13) {
	messag_(&icllbl, "Rebel-^E", (ftnlen)8);
    }
/*< 	if( iletr .gt. 13 ) call messag(icllbl,'Empire-^E') >*/
    if (*iletr > 13) {
	messag_(&icllbl, "Empire-^E", (ftnlen)9);
    }
/*< 	call chrout( iletr+64 ) >*/
    i__1 = *iletr + 64;
    chrout_(&i__1);
/*< 	call string(1,': ^E') >*/
    string_(&c__1, ": ^E", (ftnlen)4);
/*< 	call syswho( ijob ) >*/
    syswho_(&ijob);
/*< 	call crlf >*/
    crlf_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* who_ */


/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static integer ichar = 78;
    static integer ntorp = 4;

    /* System generated locals */
    integer i__1, i__2, i__3, i__4;
    real r__1, r__2;

    /* Builtin functions */
    double atan(), sqrt();

    /* Local variables */
    static integer b;
    static real d__, e;
    static integer i__, x, y, z__, x0, x1, y0, y1;
    static real ax, ay, az;
    static integer ix, iy, iz, iff;
    extern integer job_();
    static integer iax, par[20], iay, iaz, ipn;
    extern /* Subroutine */ int ppn_(), who_();
    static integer yaw;
    static real dvec;
    static integer iobj, ilen;
    extern integer icon_(), iran_();
    static integer ival, dist;
    extern /* Subroutine */ int dump_();
    static integer roll;
    static logical miss;
    static integer ival1;
    extern /* Subroutine */ int check_(), cease_(), ofile_();
    static integer speed, odvec, ielev;
    extern /* Subroutine */ int coord_();
    static integer index, pitch;
    extern /* Subroutine */ int probj_();
    static integer iroll;
    extern doublereal smcos_();
    static integer oroll, iuser;
    extern doublereal smsin_();
    extern /* Subroutine */ int print_();
    static integer ouser;
    extern /* Subroutine */ int addval_(), defcol_();
    static integer idegre;
    extern /* Subroutine */ int delobj_();
    static integer comara[61];
    extern doublereal cosdeg_();
    extern /* Subroutine */ int makobj_(), comand_();
    static logical iniflg;
    extern doublereal sindeg_();
    extern /* Subroutine */ int initdb_();
    static integer dspeed;
    extern /* Subroutine */ int inrang_();
    static integer filspc[13];
    extern /* Subroutine */ int getval_(), select_();
    static real rollam;
    extern /* Subroutine */ int messag_(), chrwat_(), colcur_();
    extern integer numobj_();
    extern /* Subroutine */ int explod_();
    static integer ospeed;
    extern /* Subroutine */ int number_();
    static integer shipnm;
    static logical lprivd;
    static integer iplayr;
    extern integer isxbit_();
    extern /* Subroutine */ int getnum_(), outbuf_();
    static integer phasrx;
    extern /* Subroutine */ int string_();
    static integer phasry, phasrz;
    extern /* Subroutine */ int chrout_(), updscr_(), putval_();
    static integer odspee, laston, objnum;
    extern /* Subroutine */ int usrset_();
    static integer ttyspd;
    extern /* Subroutine */ int settty_();


/*< 	implicit integer ( b - z ) >*/

/*< 	integer screen( 19, 19 ), oscr( 19, 19 ), comara( 61 ), par(20) >*/
/*< 	integer filspc( 13 ) >*/
/*< 	real ax, ay, az, e, d, rollam, dvec, smcos, smsin >*/
/*< 	real cosdeg, sindeg >*/
/*< 	logical miss, iniflg, lprivd, newang >*/
/*< 	common/nhcom/newang >*/

/*< 	commo >*/
/*< 	data ichar/78/, ntorp/4/ >*/

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
/*< 	call ppn( i, ipn ) >*/
    ppn_(&i__, &ipn);
/*< 	call settty( comara, par, ilen, lprivd, filspc ) >*/
    settty_(comara, par, &ilen, &lprivd, filspc);
/*< 	newang = .true. >*/
    nhcom_1.newang = TRUE_;
/*< 	do 10 i=1, ilen >*/
    i__1 = ilen;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    if( par(i) .eq. isxbit('OLDANG~') ) newang = .false. >*/
	if (par[i__ - 1] == isxbit_("OLDANG~", (ftnlen)7)) {
	    nhcom_1.newang = FALSE_;
	}
/*< 10	continue >*/
/* L10: */
    }
/*< 100	call check( iniflg ) >*/
/* L100: */
    check_(&iniflg);
/*< 	if( iniflg )  call initdb >*/
    if (iniflg) {
	initdb_();
    }
/*< 	continue ! call ctrap >*/
/* 	call exprog */

/*< 200	call defcol >*/
L200:
    defcol_();
/*< 	call string(1,'^MInput character to represent ship:       ^M^E') >*/
    string_(&c__1, "^MInput character to represent ship:       ^M^E", (ftnlen)
	    47);
/*< 	call string(1,'Input character to represent ship: ^B') >*/
    string_(&c__1, "Input character to represent ship: ^B", (ftnlen)37);
/*< 	call chrwat( iplayr ) >*/
    chrwat_(&iplayr);
/*< 	if( iplayr .gt. 96 ) iplayr = iplayr - 32 >*/
    if (iplayr > 96) {
	iplayr += -32;
    }
/*< 	iplayr = iplayr - 64 >*/
    iplayr += -64;
/*< 	if( iplayr .lt. 1 .or. iplayr .gt. 26 ) goto 200 >*/
    if (iplayr < 1 || iplayr > 26) {
	goto L200;
    }
/*< 	call getval(6, 0,822,  4, iplayr, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__822, &c__4, &iplayr, &c__1, &ival);
/*< 	if( ival .ne. 0 ) goto 200 >*/
    if (ival != 0) {
	goto L200;
    }
/*< 	call putval(4, 0,824,  -4, job(0) ) >*/
    i__1 = job_(&c__0);
    putval_(&c__4, &c__0, &c__824, &c_n4, &i__1);
/*< 	call putval(6, 0,825,  4, iplayr, 2, 0 ) >*/
    putval_(&c__6, &c__0, &c__825, &c__4, &iplayr, &c__2, &c__0);
/*< 	ax = 1. >*/
    ax = (float)1.;
/*< 	if( iplayr .gt. 13 )  ax = 100. >*/
    if (iplayr > 13) {
	ax = (float)100.;
    }
/*< 	x = ax >*/
    x = ax;
/*< 	az = 20. >*/
    az = (float)20.;
/*< 	z = az >*/
    z__ = az;
/*< 300	ay = iran(100) >*/
L300:
    ay = (real) iran_(&c__100);
/*< 	y = ay >*/
    y = ay;
/*< 	d = 0 >*/
    d__ = (float)0.;
/*< 	if( iplayr .gt. 13 )  d = 180 >*/
    if (iplayr > 13) {
	d__ = (float)180.;
    }
/*< 	if( .not. newang ) goto 305 >*/
    if (! nhcom_1.newang) {
	goto L305;
    }
/*< 	d = 90 - d >*/
    d__ = 90 - d__;
/*< 	if( d .lt. 0 ) d = d + 360 >*/
    if (d__ < (float)0.) {
	d__ += 360;
    }
/*< 305	call getval(7, 0,838,  1, x, y, z, ival ) >*/
L305:
    getval_(&c__7, &c__0, &c__838, &c__1, &x, &y, &z__, &ival);
/*< 	if( ival .ne. 0 ) goto 300 >*/
    if (ival != 0) {
	goto L300;
    }
/*< 	call makobj( ifix(ax+.5), ifix(ay+.5), ifix(az+.5), iplayr+6 ) >*/
    i__1 = (integer) (ax + (float).5);
    i__2 = (integer) (ay + (float).5);
    i__3 = (integer) (az + (float).5);
    i__4 = iplayr + 6;
    makobj_(&i__1, &i__2, &i__3, &i__4);
/*< 	shipnm = numobj( x, y, z ) >*/
    shipnm = numobj_(&x, &y, &z__);
/*< 	call addval(5, 0,842,  3, 3, 1 ) >*/
    addval_(&c__5, &c__0, &c__842, &c__3, &c__3, &c__1);
/*< 	continue ! call ctrap >*/
/* 	call cease( shipnm, icllbl, 'Stopping on user request.^E') */

/*< 	call ofile( 1, isxbit('TTY~'), 8 ) >*/
    i__1 = isxbit_("TTY~", (ftnlen)4);
    ofile_(&c__1, &i__1, &c__8);
/*< 	call select( 1 ) >*/
    select_(&c__1);
/*< 	call usrset(1030,1) >*/
    usrset_(&c__1030, &c__1);
/*< 	call usrset(1045,0) >*/
    usrset_(&c__1045, &c__0);
/*< 	call usrset(1031,1) >*/
    usrset_(&c__1031, &c__1);
/*< 	call usrset(1032,1) >*/
    usrset_(&c__1032, &c__1);
/*< 	call usrset(1041,0) >*/
    usrset_(&c__1041, &c__0);
/*< 	call usrset(536,ttyspd) >*/
    usrset_(&c__536, &ttyspd);
/*< 	goto 500 >*/
    goto L500;

/* *********************** */
/* ***    GAME LOOP    *** */
/* *********************** */

/*< 400	call usrset(1048,ttyspd) >*/
L400:
    usrset_(&c__1048, &ttyspd);
/*< 	call usrset(1049,ttyspd) >*/
    usrset_(&c__1049, &ttyspd);
/*< 	call getval(5, 0,862,  3, 4, ival ) >*/
    getval_(&c__5, &c__0, &c__862, &c__3, &c__4, &ival);
/*< 	if( ival .gt. 0 ) goto 405 >*/
    if (ival > 0) {
	goto L405;
    }
/*< 	call  >*/
    cease_(&shipnm, &col_1.iclred, "The rebel base has been destroyed.^E", (
	    ftnlen)36);
/*< 405	call getval(5, 0,867,  3, 5, ival ) >*/
L405:
    getval_(&c__5, &c__0, &c__867, &c__3, &c__5, &ival);
/*< 	if( ival .ne. 0 ) goto 410 >*/
    if (ival != 0) {
	goto L410;
    }
/*< 	call  >*/
    cease_(&shipnm, &col_1.iclred, "The death star has been destroyed.^E", (
	    ftnlen)36);
/*< 410	call comand( ichar, comara, index ) >*/
L410:
    comand_(&ichar, comara, &index);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	if( ichar .eq. -1 ) goto 3100 >*/
    if (ichar == -1) {
	goto L3100;
    }

/*< 	if( ichar .ne. 78 ) goto 600 >*/
    if (ichar != 78) {
	goto L600;
    }
/*< 500	call print >*/
L500:
    print_();
/*< 	goto 3100 >*/
    goto L3100;

/*< 600	if( ichar .ne. 69 ) goto 700 >*/
L600:
    if (ichar != 69) {
	goto L700;
    }
/*< 	call cease( shipnm, icllbl, 'Stopping on user request.^E') >*/
    cease_(&shipnm, &col_1.icllbl, "Stopping on user request.^E", (ftnlen)27);

/*< 700	if( ichar .ne. 65 ) goto 800 >*/
L700:
    if (ichar != 65) {
	goto L800;
    }
/*< 	if( iplayr .gt. 13 .and. speed .ge. 10 ) goto 3100 >*/
    if (iplayr > 13 && speed >= 10) {
	goto L3100;
    }
/*< 	if( speed .ge. 15 ) goto 800 >*/
    if (speed >= 15) {
	goto L800;
    }
/*< 	speed = speed + 1 >*/
    ++speed;
/*< 	goto 3100 >*/
    goto L3100;

/*< 800	if( ichar .ne. 68 ) goto 900 >*/
L800:
    if (ichar != 68) {
	goto L900;
    }
/*< 	speed = speed - 1 >*/
    --speed;
/*< 	if( speed .le. -5 ) goto 3100 >*/
    if (speed <= -5) {
	goto L3100;
    }
/*< 	goto 3100 >*/
    goto L3100;

/*< 900	if( ichar .ne. 80 ) goto 1000 >*/
L900:
    if (ichar != 80) {
	goto L1000;
    }
/*< 	if( .not. lprivd ) goto 1000 >*/
    if (! lprivd) {
	goto L1000;
    }
/* 	CHANGED TO INTEGER GETNUM SINCE NO WAY FOR MODERN GETNUM TO KNOW IF */
/* 	ARGS ARE REAL OR INTEGERS */
/*< 	call  >*/
    getnum_(&c__14, comara, &index, &iax, &c__10, &iay, &c__10, &iaz, &c__10, 
	    &idegre, &c__10, &ielev, &c__10, &iroll, &c__10);
/*< 	yaw = 0 >*/
    yaw = 0;
/*< 	pitch = 0 >*/
    pitch = 0;
/*< 	roll = 0 >*/
    roll = 0;
/*< 	speed = 0 >*/
    speed = 0;
/*< 	ax = iax + 50. >*/
    ax = iax + (float)50.;
/*< 	ay = iay + 75. >*/
    ay = iay + (float)75.;
/*< 	az = iaz + 5. >*/
    az = iaz + (float)5.;
/*< 	d = idegre >*/
    d__ = (real) idegre;
/*< 	e = ielev >*/
    e = (real) ielev;
/*< 	rollam = iroll >*/
    rollam = (real) iroll;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1000	if( ichar .ne. 49 ) goto 1100 >*/
L1000:
    if (ichar != 49) {
	goto L1100;
    }
/*< 	yaw = yaw + 1 >*/
    ++yaw;
/*< 	pitch = pitch - 1 >*/
    --pitch;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1100	if( ichar .ne. 50 ) goto 1200 >*/
L1100:
    if (ichar != 50) {
	goto L1200;
    }
/*< 	pitch = pitch - 1 >*/
    --pitch;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1200	if( ichar .ne. 51 ) goto 1300 >*/
L1200:
    if (ichar != 51) {
	goto L1300;
    }
/*< 	yaw = yaw - 1 >*/
    --yaw;
/*< 	pitch = pitch - 1 >*/
    --pitch;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1300	if( ichar .ne. 52 ) goto 1400 >*/
L1300:
    if (ichar != 52) {
	goto L1400;
    }
/*< 	yaw = yaw + 1 >*/
    ++yaw;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1400	if( ichar .ne. 53 ) goto 1500 >*/
L1400:
    if (ichar != 53) {
	goto L1500;
    }
/*< 	yaw = 0 >*/
    yaw = 0;
/*< 	pitch = 0 >*/
    pitch = 0;
/*< 	roll = 0 >*/
    roll = 0;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1500	if( ichar .ne. 54 ) goto 1600 >*/
L1500:
    if (ichar != 54) {
	goto L1600;
    }
/*< 	yaw = yaw - 1 >*/
    --yaw;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1600	if( ichar .ne. 55 ) goto 1700 >*/
L1600:
    if (ichar != 55) {
	goto L1700;
    }
/*< 	yaw = yaw + 1 >*/
    ++yaw;
/*< 	pitch = pitch + 1 >*/
    ++pitch;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1700	if( ichar .ne. 56 ) goto 1800 >*/
L1700:
    if (ichar != 56) {
	goto L1800;
    }
/*< 	pitch = pitch + 1 >*/
    ++pitch;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1800	if( ichar .ne. 57 ) goto 1900 >*/
L1800:
    if (ichar != 57) {
	goto L1900;
    }
/*< 	yaw = yaw - 1 >*/
    --yaw;
/*< 	pitch = pitch + 1 >*/
    ++pitch;
/*< 	goto 3100 >*/
    goto L3100;

/*< 1900	if( ichar .ne. 60 .and. ichar .ne. 44 ) goto 2000 >*/
L1900:
    if (ichar != 60 && ichar != 44) {
	goto L2000;
    }
/*< 	roll = roll + 1 >*/
    ++roll;
/*< 	goto 3100 >*/
    goto L3100;

/*< 2000	if( ichar .ne. 62 .and. ichar .ne. 46 ) goto 2100 >*/
L2000:
    if (ichar != 62 && ichar != 46) {
	goto L2100;
    }
/*< 	roll = roll - 1 >*/
    --roll;
/*< 	goto 3100 >*/
    goto L3100;

/*< 2100	if( ichar .ne. 66 ) goto 2200 >*/
L2100:
    if (ichar != 66) {
	goto L2200;
    }
/*< 	call getnum(10, comara, index, ix, 10, iy, 10, iz, 10, b, 10 ) >*/
    getnum_(&c__10, comara, &index, &ix, &c__10, &iy, &c__10, &iz, &c__10, &b,
	     &c__10);
/*< 	call explod( ix, iy, iz, b ) >*/
    explod_(&ix, &iy, &iz, &b);
/*< 	goto 3100 >*/
    goto L3100;

/*< 2200	if( ichar .ne. 48 .and. ichar .ne. 84 ) goto 2800 >*/
L2200:
    if (ichar != 48 && ichar != 84) {
	goto L2800;
    }
/*< 	if( iplayr .gt. 13 .and. ichar .eq. 84 ) goto 2800 >*/
    if (iplayr > 13 && ichar == 84) {
	goto L2800;
    }
/*< 	if( ichar .ne. 84 ) goto 2205 >*/
    if (ichar != 84) {
	goto L2205;
    }
/*< 	if( ntorp .gt. 0 ) goto 2204 >*/
    if (ntorp > 0) {
	goto L2204;
    }
/*< 	call messag(iclyel,'All torpedos are expended.^E') >*/
    messag_(&col_1.iclyel, "All torpedos are expended.^E", (ftnlen)28);
/*< 	goto 3100 >*/
    goto L3100;
/*< 2204	ntorp = ntorp - 1 >*/
L2204:
    --ntorp;
/*< 2205	miss = .true. >*/
L2205:
    miss = TRUE_;
/*< 	do 2300 dist = 1, 20 >*/
    for (dist = 1; dist <= 20; ++dist) {
/*< 	    phasrx = ax + smcos(d)*cosdeg(e)*dist + .5 >*/
	r__2 = smcos_(&d__) * cosdeg_(&e);
	r__1 = ax + r__2 * dist;
	phasrx = r__1 + (float).5;
/*< 	    if( phasrx .lt. 1 .or. phasrx .gt. 100 ) goto 2400 >*/
	if (phasrx < 1 || phasrx > 100) {
	    goto L2400;
	}
/*< 	    phasry = ay + smsin(d)*cosdeg(e)*dist + .5 >*/
	r__2 = smsin_(&d__) * cosdeg_(&e);
	r__1 = ay + r__2 * dist;
	phasry = r__1 + (float).5;
/*< 	    if( phasry .lt. 1 .or. phasry .gt. 100 ) goto 2400 >*/
	if (phasry < 1 || phasry > 100) {
	    goto L2400;
	}
/*< 	    phasrz = az + sindeg(e)*dist + .5 >*/
	r__1 = az + sindeg_(&e) * dist;
	phasrz = r__1 + (float).5;
/*< 	    if( phasrz .lt. 1 .or. phasrz .gt. 30 ) goto 2400 >*/
	if (phasrz < 1 || phasrz > 30) {
	    goto L2400;
	}
/*< 	    call getval(7, 0,982,  1, phasrx, phasry, phasrz, ival ) >*/
	getval_(&c__7, &c__0, &c__982, &c__1, &phasrx, &phasry, &phasrz, &
		ival);
/*< 	    if( ival .eq. 0 ) goto 2300 >*/
	if (ival == 0) {
	    goto L2300;
	}
/*< 	    i >*/
	if (phasrx == x && phasry == y && phasrz == z__) {
	    goto L2300;
	}
/*< 	    ival = numobj( phasrx, phasry, phasrz ) >*/
	ival = numobj_(&phasrx, &phasry, &phasrz);
/*< 	    ival1 = 0 >*/
	ival1 = 0;
/*< 	    if( ival .gt. 0 ) call getval(6, 0,988,  2, ival, 4, ival1 ) >*/
	if (ival > 0) {
	    getval_(&c__6, &c__0, &c__988, &c__2, &ival, &c__4, &ival1);
	}
/*< 	    if( ival1 .eq. 6 ) goto 2300 >*/
	if (ival1 == 6) {
	    goto L2300;
	}
/*< 	    miss = .false. >*/
	miss = FALSE_;
/*< 	    if(ival1.lt.6)  call explod(phasrx,phasry,phasrz,ival1+1) >*/
	if (ival1 < 6) {
	    i__1 = ival1 + 1;
	    explod_(&phasrx, &phasry, &phasrz, &i__1);
	}
/*< 	    if(ival1.gt.6)  call putval(6, 0,992, 4,ival1-6,2,1) >*/
	if (ival1 > 6) {
	    i__1 = ival1 - 6;
	    putval_(&c__6, &c__0, &c__992, &c__4, &i__1, &c__2, &c__1);
	}
/*< 	    goto 2400 >*/
	goto L2400;
/*< 2300	continue >*/
L2300:
	;
    }
/*< 2400	if( ichar .eq. 48 ) goto 2450 >*/
L2400:
    if (ichar == 48) {
	goto L2450;
    }
/*< 	if( miss ) goto 3100 >*/
    if (miss) {
	goto L3100;
    }
/*< 	call colcur( 19, 14 ) >*/
    colcur_(&c__19, &c__14);
/*< 	call chrout(60) >*/
    chrout_(&c__60);
/*< 	call colcur( 21, 14 ) >*/
    colcur_(&c__21, &c__14);
/*< 	call chrout(62) >*/
    chrout_(&c__62);
/*< 	goto 2701 >*/
    goto L2701;
/*< 2450	do 2700 i = 1, 12 >*/
L2450:
    for (i__ = 1; i__ <= 12; ++i__) {
/*< 	    if( i .gt. 9 ) goto 2600 >*/
	if (i__ > 9) {
	    goto L2600;
	}
/*< 	    call colcur( 39-2*i, i+4 ) >*/
	i__1 = 39 - (i__ << 1);
	i__2 = i__ + 4;
	colcur_(&i__1, &i__2);
/*< 	    call chrout(92) >*/
	chrout_(&c__92);
/*< 	    call colcur( i*2+1, i+4 ) >*/
	i__1 = (i__ << 1) + 1;
	i__2 = i__ + 4;
	colcur_(&i__1, &i__2);
/*< 	    call chrout(47) >*/
	chrout_(&c__47);
/*< 	    if( iplayr .gt. 13 ) goto 2500 >*/
	if (iplayr > 13) {
	    goto L2500;
	}
/*< 	    call colcur( i*2+1, 24-i ) >*/
	i__1 = (i__ << 1) + 1;
	i__2 = 24 - i__;
	colcur_(&i__1, &i__2);
/*< 	    call chrout(92) >*/
	chrout_(&c__92);
/*< 	    call colcur( 39-2*i, 24-i ) >*/
	i__1 = 39 - (i__ << 1);
	i__2 = 24 - i__;
	colcur_(&i__1, &i__2);
/*< 	    call chrout(47) >*/
	chrout_(&c__47);
/*< 2500	    if( i .ne. 9 .or. miss ) goto 2600 >*/
L2500:
	if (i__ != 9 || miss) {
	    goto L2600;
	}
/*< 	    call colcur( 19, 14 ) >*/
	colcur_(&c__19, &c__14);
/*< 	    call chrout(40) >*/
	chrout_(&c__40);
/*< 	    call colcur( 21, 14 ) >*/
	colcur_(&c__21, &c__14);
/*< 	    call chrout(41) >*/
	chrout_(&c__41);
/*< 2600	    if( i .le. 3 ) goto 2700 >*/
L2600:
	if (i__ <= 3) {
	    goto L2700;
	}
/*< 	    call colcur( 45-2*i, i+1 ) >*/
	i__1 = 45 - (i__ << 1);
	i__2 = i__ + 1;
	colcur_(&i__1, &i__2);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call colcur( 2*i-5, i+1 ) >*/
	i__1 = (i__ << 1) - 5;
	i__2 = i__ + 1;
	colcur_(&i__1, &i__2);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    if( iplayr .gt. 13 ) goto 2700 >*/
	if (iplayr > 13) {
	    goto L2700;
	}
/*< 	    call colcur( 2*i-5, 27-i ) >*/
	i__1 = (i__ << 1) - 5;
	i__2 = 27 - i__;
	colcur_(&i__1, &i__2);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call colcur( 45-2*i, 27-i ) >*/
	i__1 = 45 - (i__ << 1);
	i__2 = 27 - i__;
	colcur_(&i__1, &i__2);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 2700	continue >*/
L2700:
	;
    }
/*< 2701	continue >*/
L2701:
/*< 	if( miss ) goto 3100 >*/
    if (miss) {
	goto L3100;
    }
/*< 	call colcur( 19, 14 ) >*/
    colcur_(&c__19, &c__14);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call colcur( 21, 14 ) >*/
    colcur_(&c__21, &c__14);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	if( ichar .eq. 48 ) call messag(icllbl,'Laser strikes ^E') >*/
    if (ichar == 48) {
	messag_(&col_1.icllbl, "Laser strikes ^E", (ftnlen)16);
    }
/*< 	if( i >*/
    if (ichar == 84) {
	messag_(&col_1.icllbl, "Proton torpedo strikes ^E", (ftnlen)25);
    }
/*< 	call probj( ival ) >*/
    probj_(&ival);
/*< 	call string(1,' at ^E') >*/
    string_(&c__1, " at ^E", (ftnlen)6);
/*< 	call coord( phasrx, phasry, phasrz ) >*/
    coord_(&phasrx, &phasry, &phasrz);
/*< 	call chrout(46) >*/
    chrout_(&c__46);
/*< 	if(ival1.gt.2.and.ival1.lt.7)call delobj( ival ) >*/
    if (ival1 > 2 && ival1 < 7) {
	delobj_(&ival);
    }
/*< 	if( ival1.ne.2 .or. ichar.ne.84 ) goto 3100 >*/
    if (ival1 != 2 || ichar != 84) {
	goto L3100;
    }
/*< 	if( iran( iabs(z-2) ) .gt. 1 ) goto 3100 >*/
    i__2 = (i__1 = z__ - 2, abs(i__1));
    if (iran_(&i__2) > 1) {
	goto L3100;
    }
/*< 	call putval(5, 0,1045,  3, 5, 30 ) >*/
    putval_(&c__5, &c__0, &c__1045, &c__3, &c__5, &c__30);
/*< 	goto 3100 >*/
    goto L3100;

/*< 2800	if( ichar .ne. 87 ) goto 2900 >*/
L2800:
    if (ichar != 87) {
	goto L2900;
    }
/*< 	call who( icon( comara(2) ) - 64 ) >*/
    i__1 = icon_(&comara[1]) - 64;
    who_(&i__1);
/*< 	goto 3100 >*/
    goto L3100;

/*< 2900	if( ichar .ne. 77 ) goto 3000 >*/
L2900:
    if (ichar != 77) {
	goto L3000;
    }
/*< 	call dump >*/
    dump_();
/*< 	goto 3100 >*/
    goto L3100;

/*< 3000	call messag(iclyel,'Illegal command.^E') >*/
L3000:
    messag_(&col_1.iclyel, "Illegal command.^E", (ftnlen)18);

/*< 3100	ax = ax + smcos(d)*cosdeg(e)*speed/10. >*/
L3100:
    r__1 = smcos_(&d__) * cosdeg_(&e);
    ax += r__1 * speed / (float)10.;
/*< 	ay = ay + smsin(d)*cosdeg(e)*speed/10. >*/
    r__1 = smsin_(&d__) * cosdeg_(&e);
    ay += r__1 * speed / (float)10.;
/*< 	az = az + sindeg(e)*speed/10. >*/
    az += sindeg_(&e) * speed / (float)10.;
/*< 	if(if >*/
    if ((integer) (ax + (float).5) == x && (integer) (ay + (float).5) == y && 
	    (integer) (az + (float).5) == z__) {
	goto L3300;
    }
/*< 	call putval(7, 0,1063,  1, x, y, z, 0 ) >*/
    putval_(&c__7, &c__0, &c__1063, &c__1, &x, &y, &z__, &c__0);
/*< 	x = ax + 0.5 >*/
    x = ax + (float).5;
/*< 	y = ay + 0.5 >*/
    y = ay + (float).5;
/*< 	z = az + 0.5 >*/
    z__ = az + (float).5;
/*< 	if(x. >*/
    if (x < 1 || x > 100 || y < 1 || y > 100 || z__ > 30) {
	goto L4600;
    }
/*< 	call getval(7, 0,1069,  1, x, y, z, ival ) >*/
    getval_(&c__7, &c__0, &c__1069, &c__1, &x, &y, &z__, &ival);
/*< 	if( ival .eq. 0 ) goto 3200 >*/
    if (ival == 0) {
	goto L3200;
    }
/*< 	ival = numobj( x, y, z ) >*/
    ival = numobj_(&x, &y, &z__);
/*< 	if( ival .ne. 0 )  call getval(6, 0,1072,  2, ival, 4, ival ) >*/
    if (ival != 0) {
	getval_(&c__6, &c__0, &c__1072, &c__2, &ival, &c__4, &ival);
    }
/*< 	if( ival .lt. 6 )  call explod( x, y, z, (ival+1)*2 ) >*/
    if (ival < 6) {
	i__1 = ival + 1 << 1;
	explod_(&x, &y, &z__, &i__1);
    }
/*< 	if( i >*/
    if (ival > 6) {
	cease_(&shipnm, &col_1.iclred, "*** Collision with a ship ***^G^E", (
		ftnlen)33);
    }
/*< 	if( i >*/
    if (ival <= 1) {
	cease_(&shipnm, &col_1.iclred, "*** Collision with the death star **\
*^G^E", (ftnlen)41);
    }
/*< 	if( i >*/
    if (ival == 2) {
	cease_(&shipnm, &col_1.iclred, "*** Collision with an exhaust port *\
**^G^E", (ftnlen)42);
    }
/*< 	if( i >*/
    if (ival == 3) {
	cease_(&shipnm, &col_1.iclred, "*** Collision with a light laser tow\
er ***^G^E", (ftnlen)46);
    }
/*< 	if( i >*/
    if (ival == 4) {
	cease_(&shipnm, &col_1.iclred, "*** Collision with a heavy laser tow\
er ***^G^E", (ftnlen)46);
    }
/*< 	if( i >*/
    if (ival == 5) {
	cease_(&shipnm, &col_1.iclred, "*** Collision with a torpedo ***^G^E",
		 (ftnlen)36);
    }
/*< 	call messag(iclyel,'*** Ship buffetted in explosion ***^E') >*/
    messag_(&col_1.iclyel, "*** Ship buffetted in explosion ***^E", (ftnlen)
	    37);
/*< 	iff = iabs( 17-speed ) / 3 >*/
    iff = (i__1 = 17 - speed, abs(i__1)) / 3;
/*< 	yaw = yaw + iran( iff*2+1 ) - iff-1 >*/
    i__1 = (iff << 1) + 1;
    yaw = yaw + iran_(&i__1) - iff - 1;
/*< 	pitch = pitch + iran( iff*2+1 ) - iff-1 >*/
    i__1 = (iff << 1) + 1;
    pitch = pitch + iran_(&i__1) - iff - 1;
/*< 	roll = roll + iran( iff*2+1 ) - iff-1 >*/
    i__1 = (iff << 1) + 1;
    roll = roll + iran_(&i__1) - iff - 1;
/*< 3200	call putval(6, 0,1091,  2, shipnm, 1, x ) >*/
L3200:
    putval_(&c__6, &c__0, &c__1091, &c__2, &shipnm, &c__1, &x);
/*< 	call putval(6, 0,1092,  2, shipnm, 2, y ) >*/
    putval_(&c__6, &c__0, &c__1092, &c__2, &shipnm, &c__2, &y);
/*< 	call putval(6, 0,1093,  2, shipnm, 3, z ) >*/
    putval_(&c__6, &c__0, &c__1093, &c__2, &shipnm, &c__3, &z__);
/*< 	call putval(7, 0,1094,  1, x, y, z, 1 ) >*/
    putval_(&c__7, &c__0, &c__1094, &c__1, &x, &y, &z__, &c__1);
/*< 3300	dvec = 90 >*/
L3300:
    dvec = (float)90.;
/*< 	if( pitch .lt. 0 )  dvec = 270 >*/
    if (pitch < 0) {
	dvec = (float)270.;
    }

/* 	NEWANG WORK NOT COMPLETED */

/*< 	if(yaw.ne.0)dvec=atan(-float(pitch)/float(yaw))*180./3.14159 >*/
    if (yaw != 0) {
	dvec = atan(-((real) pitch) / (real) yaw) * (float)180. / (float)
		3.14159;
    }
/*< 	if( yaw .gt. 0 )  dvec = dvec + 180 >*/
    if (yaw > 0) {
	dvec += 180;
    }
/*< 	dspeed = sqrt( (yaw+0.0)**2 + (pitch+0.)**2 ) >*/
/* Computing 2nd power */
    r__1 = yaw + (float)0.;
/* Computing 2nd power */
    r__2 = pitch + (float)0.;
    dspeed = sqrt(r__1 * r__1 + r__2 * r__2);
/* 	IF( NEWANG ) DVEC = 360.0 - DVEC */
/*< 	call inrang( dvec ) >*/
    inrang_(&dvec);
/*< 	if( dspeed .eq. 0 )  dvec = 10000 >*/
    if (dspeed == 0) {
	dvec = (float)1e4;
    }
/*< 	e = e + sindeg( dvec+rollam ) * dspeed >*/
    r__1 = dvec + rollam;
    e += sindeg_(&r__1) * dspeed;
/*< 	if( newang ) d = d + cosdeg( dvec+rollam ) * dspeed >*/
    if (nhcom_1.newang) {
	r__1 = dvec + rollam;
	d__ += cosdeg_(&r__1) * dspeed;
    }
/*< 	if( .not. newang ) d = d - cosdeg( dvec+rollam ) * dspeed >*/
    if (! nhcom_1.newang) {
	r__1 = dvec + rollam;
	d__ -= cosdeg_(&r__1) * dspeed;
    }
/*< 	if( abs(e) .gt. 90 )  rollam = rollam + 180 >*/
    if (dabs(e) > (float)90.) {
	rollam += 180;
    }
/*< 	if( abs(e) .gt. 90 )  d = d + 180 >*/
    if (dabs(e) > (float)90.) {
	d__ += 180;
    }
/*< 	if( e .gt. 90 )  e = 180-e >*/
    if (e > (float)90.) {
	e = 180 - e;
    }
/*< 	if( e .lt. -90 )  e = -180-e >*/
    if (e < (float)-90.) {
	e = -180 - e;
    }
/* 	END NEWANG WORK */
/*< 	rollam = rollam + roll >*/
    rollam += roll;
/*< 	call inrang( d ) >*/
    inrang_(&d__);
/*< 	call inrang( rollam ) >*/
    inrang_(&rollam);
/*< 	call updscr( x, y, z, d, e, rollam, ichar, iplayr ) >*/
    updscr_(&x, &y, &z__, &d__, &e, &rollam, &ichar, &iplayr);
/*< 	if( ospeed .eq. speed .and. ichar .ne. 78 ) goto 3400 >*/
    if (ospeed == speed && ichar != 78) {
	goto L3400;
    }
/*< 	call colcur( 6, 4 ) >*/
    colcur_(&c__6, &c__4);
/*< 	call number(2, speed, 3 ) >*/
    number_(&c__2, &speed, &c__3);
/*< 	ospeed = speed >*/
    ospeed = speed;
/*< 3400	if( odvec .eq. ifix(dvec) .and. ichar .ne. 78 ) goto 3500 >*/
L3400:
    if (odvec == (integer) dvec && ichar != 78) {
	goto L3500;
    }
/*< 	call colcur( 16, 4 ) >*/
    colcur_(&c__16, &c__4);
/*< 	call number(2, ifix(dvec), 3 ) >*/
    i__1 = (integer) dvec;
    number_(&c__2, &i__1, &c__3);
/*< 	odvec = dvec >*/
    odvec = dvec;
/*< 3500	if( odspee .eq. dspeed .and. ichar .ne. 78 ) goto 3600 >*/
L3500:
    if (odspee == dspeed && ichar != 78) {
	goto L3600;
    }
/*< 	call colcur( 26, 4 ) >*/
    colcur_(&c__26, &c__4);
/*< 	call number(2, dspeed, 3 ) >*/
    number_(&c__2, &dspeed, &c__3);
/*< 	odspee = dspeed >*/
    odspee = dspeed;
/*< 3600	if( oroll .eq. roll .and. ichar .ne. 78 ) goto 3700 >*/
L3600:
    if (oroll == roll && ichar != 78) {
	goto L3700;
    }
/*< 	call colcur( 36, 4 ) >*/
    colcur_(&c__36, &c__4);
/*< 	call number(2, roll, 3 ) >*/
    number_(&c__2, &roll, &c__3);
/*< 	oroll = roll >*/
    oroll = roll;
/*< 3700	call getval(5, 0,1134,  3, 3, iuser ) >*/
L3700:
    getval_(&c__5, &c__0, &c__1134, &c__3, &c__3, &iuser);
/*< 	if( iuser .eq. ouser .and. ichar .ne. 78 ) goto 4000 >*/
    if (iuser == ouser && ichar != 78) {
	goto L4000;
    }
/*< 	call colcur( 58, 23 ) >*/
    colcur_(&c__58, &c__23);
/*< 	do 3800 i = 1, 13 >*/
    for (i__ = 1; i__ <= 13; ++i__) {
/*< 	    call getval(6, 0,1138,  4, i+0, 1, ival ) >*/
	i__1 = i__;
	getval_(&c__6, &c__0, &c__1138, &c__4, &i__1, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 3800 >*/
	if (ival == 0) {
	    goto L3800;
	}
/*< 	    laston = i >*/
	laston = i__;
/*< 	    call chrout( laston+64 ) >*/
	i__1 = laston + 64;
	chrout_(&i__1);
/*< 3800	continue >*/
L3800:
	;
    }
/*< 	call string(1,'   ^E') >*/
    string_(&c__1, "   ^E", (ftnlen)5);
/*< 	call colcur( 59, 22 ) >*/
    colcur_(&c__59, &c__22);
/*< 	do 3900 i = 14, 26 >*/
    for (i__ = 14; i__ <= 26; ++i__) {
/*< 	    call getval(6, 0,1146,  4, i+0, 1, ival ) >*/
	i__1 = i__;
	getval_(&c__6, &c__0, &c__1146, &c__4, &i__1, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 3900 >*/
	if (ival == 0) {
	    goto L3900;
	}
/*< 	    laston = i >*/
	laston = i__;
/*< 	    call chrout( laston+64 ) >*/
	i__1 = laston + 64;
	chrout_(&i__1);
/*< 3900	continue >*/
L3900:
	;
    }
/*< 	call string(1,'   ^E') >*/
    string_(&c__1, "   ^E", (ftnlen)5);
/*< 	ouser = iuser >*/
    ouser = iuser;
/*< 4000	call getval(6, 0,1153,  4, iplayr, 2, ival ) >*/
L4000:
    getval_(&c__6, &c__0, &c__1153, &c__4, &iplayr, &c__2, &ival);
/*< 	if( ival .ne. 0 )  call explod( x, y, z, 5 ) >*/
    if (ival != 0) {
	explod_(&x, &y, &z__, &c__5);
    }
/*< 	if( i >*/
    if (ival != 0) {
	cease_(&shipnm, &col_1.iclred, "******** Ship has been hit *** Ship \
destroyed ********^G^E", (ftnlen)58);
    }
/*< 	if(iplayr.gt.13.or.z.gt.10.or.iran(10).le.1)goto 4400 >*/
    if (iplayr > 13 || z__ > 10 || iran_(&c__10) <= 1) {
	goto L4400;
    }
/*< 	if( z .lt. 5 ) goto 4350 >*/
    if (z__ < 5) {
	goto L4350;
    }
/*< 	x0 = ifix((x-5)/10.)*10 + 5 >*/
    x0 = (integer) ((x - 5) / (float)10.) * 10 + 5;
/*< 	x1 = ifix((x+5)/10.)*10 + 5 >*/
    x1 = (integer) ((x + 5) / (float)10.) * 10 + 5;
/*< 	if( mod( x, 10 ) .eq. 5 ) x1 = 101 >*/
    if (x % 10 == 5) {
	x1 = 101;
    }
/*< 	y0 = ifix((x-5)/10.)*10 + 5 >*/
    y0 = (integer) ((x - 5) / (float)10.) * 10 + 5;
/*< 	y1 = ifix((x+5)/10.)*10 + 5 >*/
    y1 = (integer) ((x + 5) / (float)10.) * 10 + 5;
/*< 	if( mod( y, 10 ) .eq. 5 ) y1 = 101 >*/
    if (y % 10 == 5) {
	y1 = 101;
    }
/*< 	ival1 = 0 >*/
    ival1 = 0;
/*< 	if( x0 .lt. 1 ) goto 4200 >*/
    if (x0 < 1) {
	goto L4200;
    }
/*< 	if( y0 .lt. 1 ) goto 4100 >*/
    if (y0 < 1) {
	goto L4100;
    }
/*< 	call getval(7, 0,1168,  1, x0, y0, 6, ival ) >*/
    getval_(&c__7, &c__0, &c__1168, &c__1, &x0, &y0, &c__6, &ival);
/*< 	ival1 = ival1 + ival >*/
    ival1 += ival;
/*< 4100	if( y1 .gt. 100 ) goto 4200 >*/
L4100:
    if (y1 > 100) {
	goto L4200;
    }
/*< 	call getval(7, 0,1171,  1, x0, y1, 6, ival ) >*/
    getval_(&c__7, &c__0, &c__1171, &c__1, &x0, &y1, &c__6, &ival);
/*< 	ival1 = ival1 + ival >*/
    ival1 += ival;
/*< 4200	if( x1 .gt. 100 ) goto 4325 >*/
L4200:
    if (x1 > 100) {
	goto L4325;
    }
/*< 	if( y0 .lt. 1 ) goto 4300 >*/
    if (y0 < 1) {
	goto L4300;
    }
/*< 	call getval(7, 0,1175,  1, x1, y0, 6, ival ) >*/
    getval_(&c__7, &c__0, &c__1175, &c__1, &x1, &y0, &c__6, &ival);
/*< 	ival1 = ival1 + ival >*/
    ival1 += ival;
/*< 4300	if( y1 .gt. 100 ) goto 4325 >*/
L4300:
    if (y1 > 100) {
	goto L4325;
    }
/*< 	call getval(7, 0,1178,  1, x1, y1, 6, ival ) >*/
    getval_(&c__7, &c__0, &c__1178, &c__1, &x1, &y1, &c__6, &ival);
/*< 	ival1 = ival1 + ival >*/
    ival1 += ival;
/*< 4325	if( ival1 .eq. 0 ) goto 4350 >*/
L4325:
    if (ival1 == 0) {
	goto L4350;
    }
/*< 	do 4330 i = 1, ival1 >*/
    i__1 = ival1;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    if( iran( z-5 + iabs(speed) ) .le. 1 ) goto 4330 >*/
	i__2 = z__ - 5 + abs(speed);
	if (iran_(&i__2) <= 1) {
	    goto L4330;
	}
/*< 	    call explod( x, y, z, 5 ) >*/
	explod_(&x, &y, &z__, &c__5);
/*< 	    c >*/
	cease_(&shipnm, &col_1.iclred, "*** Ship hit by heavy laser beam ***\
^G^E", (ftnlen)40);
/*< 4330	call explod( x+iran(5)-3, y+iran(5)-3, z+iran(3)-1, 1 ) >*/
L4330:
	i__2 = x + iran_(&c__5) - 3;
	i__3 = y + iran_(&c__5) - 3;
	i__4 = z__ + iran_(&c__3) - 1;
	explod_(&i__2, &i__3, &i__4, &c__1);
    }
/*< 	goto 4400 >*/
    goto L4400;
/*< 4350	i >*/
L4350:
    if (x < 49 || x > 51 || y > 75 || z__ > 5 || iran_(&c__5) <= 1) {
	goto L4400;
    }
/*< 	y0 = (y-1)/5*5+1 >*/
    y0 = (y - 1) / 5 * 5 + 1;
/*< 	ival1 = 0 >*/
    ival1 = 0;
/*< 	call getval(7, 0,1193,  1, 48, y0, 2, ival ) >*/
    getval_(&c__7, &c__0, &c__1193, &c__1, &c__48, &y0, &c__2, &ival);
/*< 	ival1 = ival1 + ival >*/
    ival1 += ival;
/*< 	call getval(7, 0,1195,  1, 52, y0, 2, ival ) >*/
    getval_(&c__7, &c__0, &c__1195, &c__1, &c__52, &y0, &c__2, &ival);
/*< 	ival1 = ival1 + ival >*/
    ival1 += ival;
/*< 	if( ival1 .eq. 0 ) goto 4400 >*/
    if (ival1 == 0) {
	goto L4400;
    }
/*< 	do 4355 i = 1, ival1 >*/
    i__2 = ival1;
    for (i__ = 1; i__ <= i__2; ++i__) {
/*< 	    if( iran(iabs(speed)*10) .gt. 1 ) goto 4355 >*/
	i__3 = abs(speed) * 10;
	if (iran_(&i__3) > 1) {
	    goto L4355;
	}
/*< 	    call explod( x, y, z, 5 ) >*/
	explod_(&x, &y, &z__, &c__5);
/*< 	    c >*/
	cease_(&shipnm, &col_1.iclred, "*** Ship hit by light laser beam ***\
^G^E", (ftnlen)40);
/*< 4355	call explod( 48+iran(3), y+iran(3)-2, z+iran(3)-2, 1 ) >*/
L4355:
	i__3 = iran_(&c__3) + 48;
	i__4 = y + iran_(&c__3) - 2;
	i__1 = z__ + iran_(&c__3) - 2;
	explod_(&i__3, &i__4, &i__1, &c__1);
    }
/*< 4400	if( laston .ne. iplayr ) goto 400 >*/
L4400:
    if (laston != iplayr) {
	goto L400;
    }
/*< 	call addval(5, 0,1205,  3, 4, -1 ) >*/
    addval_(&c__5, &c__0, &c__1205, &c__3, &c__4, &c_n1);
/*< 	call getval(5, 0,1206,  3, 5, ival ) >*/
    getval_(&c__5, &c__0, &c__1206, &c__3, &c__5, &ival);
/*< 	if( ival .gt. 0 ) call addval(5, 0,1207,  3, 5, -1 ) >*/
    if (ival > 0) {
	addval_(&c__5, &c__0, &c__1207, &c__3, &c__5, &c_n1);
    }
/*< 	call getval(5, 0,1208,  3, 1, objnum ) >*/
    getval_(&c__5, &c__0, &c__1208, &c__3, &c__1, &objnum);
/*< 	do 4500 i = 1, objnum >*/
    i__3 = objnum;
    for (i__ = 1; i__ <= i__3; ++i__) {
/*< 	    iobj = i >*/
	iobj = i__;
/*< 	    call getval(6, 0,1211,  2, iobj, 4, ival ) >*/
	getval_(&c__6, &c__0, &c__1211, &c__2, &iobj, &c__4, &ival);
/*< 	    if( ival .ne. 6 ) goto 4500 >*/
	if (ival != 6) {
	    goto L4500;
	}
/*< 	    call addval(6, 0,1213,  2, iobj, 5, -1 ) >*/
	addval_(&c__6, &c__0, &c__1213, &c__2, &iobj, &c__5, &c_n1);
/*< 	    call getval(4, 0,1214,  -2, ival ) >*/
	getval_(&c__4, &c__0, &c__1214, &c_n2, &ival);
/*< 	    if( ival .le. 0 )  call delobj( iobj ) >*/
	if (ival <= 0) {
	    delobj_(&iobj);
	}
/*< 4500	continue >*/
L4500:
	;
    }
/*< 	goto 400 >*/
    goto L400;

/*< 4600	call cease( shipnm, icllbl, 'You have flown out of range.^E') >*/
L4600:
    cease_(&shipnm, &col_1.icllbl, "You have flown out of range.^E", (ftnlen)
	    30);
/*< 	end >*/
} /* fmain_ */

/*< 	subroutine colcur( ix, iy ) >*/
/* Subroutine */ int colcur_(ix, iy)
integer *ix, *iy;
{
    extern /* Subroutine */ int defcol_(), cursor_();

/*< 	call defcol >*/
    defcol_();
/*< 	call cursor( ix, iy ) >*/
    cursor_(ix, iy);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* colcur_ */

/*<     	subroutine colstr( icol, msgara ) >*/
/* Subroutine */ int colstr_(icol, msgara, msgara_len)
integer *icol;
char *msgara;
ftnlen msgara_len;
{
    extern /* Subroutine */ int pcolor_(), string_();

/*< 	character msgara( 80 ) >*/
/*< 	call pcolor( icol ) >*/
    /* Parameter adjustments */
    --msgara;

    /* Function Body */
    pcolor_(icol);
/*< 	call string(1, msgara ) >*/
    string_(&c__1, msgara + 1, (ftnlen)1);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* colstr_ */

