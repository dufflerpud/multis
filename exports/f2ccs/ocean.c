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
    logical newang;
} nhcom_;

#define nhcom_1 nhcom_

struct {
    integer iclwhi, icldbl, iclred, icllbl, iclpur, iclgre, iclyel, iclbla;
} col_;

#define col_1 col_

/* Table of constant values */

static integer c__6 = 6;
static integer c__0 = 0;
static integer c__87 = 87;
static integer c__3 = 3;
static integer c__1 = 1;
static integer c__88 = 88;
static integer c__4 = 4;
static integer c__89 = 89;
static integer c__93 = 93;
static integer c__2 = 2;
static integer c__94 = 94;
static integer c__95 = 95;
static integer c__5 = 5;
static integer c__105 = 105;
static integer c__106 = 106;
static integer c__107 = 107;
static integer c__108 = 108;
static integer c__121 = 121;
static integer c__141 = 141;
static integer c__7 = 7;
static integer c__143 = 143;
static integer c__32 = 32;
static integer c__180 = 180;
static integer c__184 = 184;
static integer c__55 = 55;
static integer c__24 = 24;
static integer c__268 = 268;
static integer c__36 = 36;
static integer c__120 = 120;
static integer c__282 = 282;
static integer c__26 = 26;
static integer c__10 = 10;
static integer c__292 = 292;
static integer c__295 = 295;
static integer c__50 = 50;
static integer c__306 = 306;
static integer c__18 = 18;
static integer c__314 = 314;
static integer c__63 = 63;
static integer c__322 = 322;
static integer c__20 = 20;
static integer c__323 = 323;
static integer c__324 = 324;
static integer c__325 = 325;
static integer c__23 = 23;
static integer c__339 = 339;
static integer c__22 = 22;
static integer c__35 = 35;
static integer c__368 = 368;
static integer c__369 = 369;
static integer c__370 = 370;
static integer c__371 = 371;
static integer c__377 = 377;
static integer c__378 = 378;
static integer c__382 = 382;
static integer c__383 = 383;
static integer c__386 = 386;
static integer c__21 = 21;
static integer c__12 = 12;
static integer c__9 = 9;
static integer c__8 = 8;
static integer c__430 = 430;
static integer c__431 = 431;
static integer c__100 = 100;
static integer c__434 = 434;
static integer c__437 = 437;
static integer c__442 = 442;
static integer c__443 = 443;
static integer c__444 = 444;
static integer c_n1 = -1;
static integer c__17 = 17;
static integer c__445 = 445;
static integer c__446 = 446;
static integer c__447 = 447;
static integer c__448 = 448;
static integer c__449 = 449;
static integer c__450 = 450;
static integer c__454 = 454;
static integer c__455 = 455;
static integer c__458 = 458;
static integer c__461 = 461;
static integer c__466 = 466;
static integer c__467 = 467;
static integer c__468 = 468;
static integer c__469 = 469;
static integer c__470 = 470;
static integer c__471 = 471;
static integer c__472 = 472;
static integer c__473 = 473;
static integer c__474 = 474;
static integer c__40 = 40;
static integer c__44 = 44;
static integer c__496 = 496;
static integer c__501 = 501;
static integer c__513 = 513;
static integer c__514 = 514;
static integer c__533 = 533;
static integer c__534 = 534;
static integer c__535 = 535;
static integer c__539 = 539;
static integer c__540 = 540;
static integer c__541 = 541;
static integer c__43 = 43;
static integer c__45 = 45;
static integer c__19 = 19;
static integer c__611 = 611;
static integer c__124 = 124;
static integer c__635 = 635;
static integer c__667 = 667;
static integer c__668 = 668;
static integer c_n3 = -3;
static integer c__692 = 692;
static integer c__693 = 693;
static integer c__1026 = 1026;
static integer c__64 = 64;
static integer c__62 = 62;
static integer c__795 = 795;
static integer c__796 = 796;
static integer c__11 = 11;
static integer c__799 = 799;
static integer c__802 = 802;
static integer c__806 = 806;
static integer c__807 = 807;
static integer c__810 = 810;
static integer c__813 = 813;
static integer c__16 = 16;
static integer c__15 = 15;
static integer c__14 = 14;
static integer c__13 = 13;
static integer c__500 = 500;
static integer c__960 = 960;
static integer c__961 = 961;
static integer c__962 = 962;
static integer c__963 = 963;
static integer c__964 = 964;
static integer c__966 = 966;
static integer c__967 = 967;
static integer c_n4 = -4;
static integer c__970 = 970;
static integer c__1031 = 1031;
static integer c__1041 = 1041;
static integer c__1025 = 1025;
static integer c__1027 = 1027;
static integer c__1028 = 1028;
static integer c__1029 = 1029;
static integer c__1030 = 1030;
static integer c__1047 = 1047;
static integer c__1048 = 1048;
static integer c__1049 = 1049;
static integer c__1050 = 1050;
static integer c__25 = 25;
static integer c__1090 = 1090;
static integer c__1094 = 1094;
static integer c__1095 = 1095;
static integer c__1097 = 1097;
static integer c__536 = 536;
static integer c__1175 = 1175;
static integer c__1178 = 1178;
static integer c__1195 = 1195;
static integer c__1196 = 1196;
static integer c__1203 = 1203;
static integer c__1204 = 1204;
static integer c__1209 = 1209;
static integer c__1211 = 1211;
static integer c__1216 = 1216;
static integer c__1217 = 1217;
static integer c__1222 = 1222;
static integer c__1224 = 1224;
static integer c__1264 = 1264;
static integer c__1266 = 1266;
static integer c__1267 = 1267;
static integer c__1286 = 1286;
static integer c__1290 = 1290;
static integer c__1291 = 1291;
static integer c__1292 = 1292;
static integer c__1293 = 1293;
static integer c__1294 = 1294;
static integer c__1295 = 1295;
static integer c__1296 = 1296;
static integer c__1303 = 1303;
static integer c__1304 = 1304;
static integer c__1305 = 1305;
static integer c__1306 = 1306;
static integer c__1315 = 1315;
static integer c__1325 = 1325;
static integer c__1326 = 1326;
static integer c__1327 = 1327;
static integer c__1328 = 1328;
static integer c__1329 = 1329;
static integer c__360 = 360;
static integer c__1045 = 1045;
static integer c__1032 = 1032;
static integer c__1369 = 1369;
static integer c__1376 = 1376;
static integer c__1385 = 1385;
static integer c__1389 = 1389;
static integer c__1391 = 1391;
static integer c__1393 = 1393;
static integer c__1415 = 1415;
static integer c__1417 = 1417;
static integer c__1431 = 1431;
static integer c__1432 = 1432;
static integer c__1433 = 1433;
static integer c__1434 = 1434;
static integer c__1454 = 1454;
static integer c__1479 = 1479;
static integer c__1529 = 1529;
static integer c__1531 = 1531;
static integer c__1532 = 1532;
static integer c__1541 = 1541;
static integer c__1545 = 1545;
static integer c__1565 = 1565;
static integer c__1580 = 1580;
static integer c__1581 = 1581;
static integer c__1591 = 1591;
static integer c__1595 = 1595;
static integer c__1597 = 1597;
static integer c__1598 = 1598;
static integer c__1599 = 1599;
static integer c__1600 = 1600;
static integer c__1601 = 1601;
static integer c__1611 = 1611;
static integer c__1625 = 1625;
static integer c__1662 = 1662;
static integer c__1665 = 1665;
static integer c_n6 = -6;
static integer c__1667 = 1667;
static integer c__1670 = 1670;
static integer c__1673 = 1673;
static integer c__70 = 70;
static integer c_n2 = -2;
static integer c__58 = 58;
static integer c__72 = 72;
static integer c__76 = 76;
static integer c__74 = 74;
static integer c__71 = 71;
static integer c__75 = 75;
static integer c__73 = 73;
static integer c__77 = 77;
static integer c__1834 = 1834;
static integer c__1836 = 1836;
static integer c__1837 = 1837;
static integer c__1838 = 1838;
static integer c__1842 = 1842;
static integer c__1847 = 1847;
static integer c__69 = 69;
static integer c__1886 = 1886;
static integer c__79 = 79;
static integer c__1897 = 1897;
static integer c__1902 = 1902;
static integer c__1904 = 1904;
static integer c__1913 = 1913;
static integer c__1924 = 1924;
static integer c__1929 = 1929;
static integer c__1931 = 1931;
static integer c__1942 = 1942;
static integer c__1952 = 1952;
static integer c__1953 = 1953;
static integer c__1954 = 1954;
static integer c__1955 = 1955;
static integer c__80 = 80;
static integer c__2004 = 2004;
static integer c__2043 = 2043;
static integer c__2044 = 2044;
static real c_b1992 = (float)1.;
static integer c__2139 = 2139;
static integer c__2146 = 2146;
static integer c__2148 = 2148;
static integer c__47 = 47;
static integer c__2152 = 2152;
static integer c__66 = 66;
static integer c__83 = 83;
static integer c__68 = 68;
static integer c__2159 = 2159;
static integer c__2162 = 2162;
static integer c__59 = 59;
static integer c__2165 = 2165;
static integer c__1035 = 1035;
static integer c__2208 = 2208;
static integer c__2211 = 2211;
static integer c__2220 = 2220;
static integer c__2221 = 2221;
static integer c__2224 = 2224;
static integer c__2251 = 2251;
static integer c__2254 = 2254;
static integer c__1000 = 1000;
static integer c__2258 = 2258;
static integer c__2259 = 2259;
static integer c__2260 = 2260;
static integer c__60 = 60;
static integer c__2261 = 2261;
static integer c__2264 = 2264;
static integer c__2369 = 2369;
static integer c__2373 = 2373;
static integer c__2382 = 2382;
static integer c__2383 = 2383;
static integer c__2385 = 2385;
static integer c__2386 = 2386;
static integer c__2404 = 2404;
static integer c__2406 = 2406;
static integer c__2407 = 2407;
static integer c__2414 = 2414;
static integer c__2416 = 2416;
static integer c__2417 = 2417;
static integer c__2427 = 2427;
static integer c__2429 = 2429;
static integer c__2430 = 2430;
static integer c__2467 = 2467;
static integer c__2469 = 2469;
static integer c__2494 = 2494;
static integer c__2523 = 2523;
static integer c__2531 = 2531;
static integer c__2535 = 2535;
static integer c__2536 = 2536;
static integer c__2538 = 2538;
static integer c__2553 = 2553;
static integer c__2555 = 2555;
static integer c__2557 = 2557;

/* 	@HDR@	$Id$ */
/* 	@HDR@		Copyright 1979-2024 by */
/* 	@HDR@		Christopher Caldwell/Brightsands */
/* 	@HDR@		P.O. Box 401, Bailey Island, ME 04003 */
/* 	@HDR@		All Rights Reserved */
/* 	@HDR@ */
/* 	@HDR@	This software comprises unpublished confidential information */
/* 	@HDR@	of Brightsands and may not be used, copied or made available */
/* 	@HDR@	to anyone, except in accordance with the license under which */
/* 	@HDR@	it is furnished. */



/* 	CREATED DECEMBER 29, 1979 */

/* 		** OCEAN ** */

/* 		BY CHRIS CALDWELL */
/* 		  AT THE UNIVERSITY OF NEW HAMPSHIRE */



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

/*< 	subro >*/
/* Subroutine */ int displa_(shipx, shipy, idepth, degree, ichar, damage, 
	kind, iport)
integer *shipx, *shipy, *idepth, *degree, *ichar, *damage, *kind, *iport;
{
    /* System generated locals */
    integer i__1, i__2, i__3, i__4;
    real r__1, r__2, r__3, r__4;

    /* Builtin functions */
    double sqrt();

    /* Local variables */
    static integer i__, id, ix, iy, iz, id1, ied, ief, iex, iey, ip1c, ip2c, 
	    ip1x, ip1y, ip2x, ip2y, idep, icol, ival, ibot, ipcr, dist, itop;
    static logical next;
    static integer iorz, ip1cs, ip2cs;
    extern /* Subroutine */ int pback_();
    extern integer ileft_();
    static integer itemp;
    extern doublereal smcos_(), smsin_();
    static integer iposx, iposy, abvara[361]	/* was [19][19] */, sidara[
	    380]	/* was [10][19][2] */, ipchar, iochar, odegre;
    extern /* Subroutine */ int getval_();
    extern integer iright_();
    extern /* Subroutine */ int colcur_();
    static integer ipcolr;
    extern /* Subroutine */ int number_(), pcolor_();
    static integer ishipx, ishipy, ixtemp, iytemp;
    extern /* Subroutine */ int chrout_();
    static integer iztemp;
    extern /* Subroutine */ int convrt_(), irepeat_();


/* ***	SUBROUTINE UPDATES RADAR AND SONAR */

/*< 	implicit integer( a-z ) >*/
/*< 	integer abvara(19,19), sidara(10,19,2), damage(8,2) >*/
/*< 	logical next >*/
/*< 	real smcos, smsin >*/
/*< 	commo >*/

/*< 	ibot = 9 >*/
    /* Parameter adjustments */
    damage -= 9;

    /* Function Body */
    ibot = 9;
/*< 	if( kind .eq. 2 ) ibot = 1 >*/
    if (*kind == 2) {
	ibot = 1;
    }
/*< 	if( kind .eq. 5 ) ibot = 17 >*/
    if (*kind == 5) {
	ibot = 17;
    }
/*< 	itop = 27 >*/
    itop = 27;
/*< 	if( kind .eq. 2 ) itop = 19 >*/
    if (*kind == 2) {
	itop = 19;
    }
/*< 	if( kind .eq. 5 ) itop = 35 >*/
    if (*kind == 5) {
	itop = 35;
    }

/* ***	GET INFORMATION ABOUT PORTS */

/*< 	if( ip1c .ne. 0 ) goto 100 >*/
    if (ip1c != 0) {
	goto L100;
    }
/*< 	call getval(6, 0,87,  3, 1, 3, ip1x ) >*/
    getval_(&c__6, &c__0, &c__87, &c__3, &c__1, &c__3, &ip1x);
/*< 	call getval(6, 0,88,  3, 1, 4, ip1y ) >*/
    getval_(&c__6, &c__0, &c__88, &c__3, &c__1, &c__4, &ip1y);
/*< 	call getval(6, 0,89,  3, 1, 1, ip1cs ) >*/
    getval_(&c__6, &c__0, &c__89, &c__3, &c__1, &c__1, &ip1cs);
/*< 	call convrt( ip1cs, 1, 6, ip1c, 0 ) >*/
    convrt_(&ip1cs, &c__1, &c__6, &ip1c, &c__0);
/* 	IP1C = SHIFT( IP1C, -30 ) */
/* 	IP1C = IP1C + 32 */
/*< 	call getval(6, 0,93,  3, 2, 3, ip2x ) >*/
    getval_(&c__6, &c__0, &c__93, &c__3, &c__2, &c__3, &ip2x);
/*< 	call getval(6, 0,94,  3, 2, 4, ip2y ) >*/
    getval_(&c__6, &c__0, &c__94, &c__3, &c__2, &c__4, &ip2y);
/*< 	call getval(6, 0,95,  3, 2, 1, ip2cs ) >*/
    getval_(&c__6, &c__0, &c__95, &c__3, &c__2, &c__1, &ip2cs);
/*< 	call convrt( ip2cs, 1, 6, ip2c, 0 ) >*/
    convrt_(&ip2cs, &c__1, &c__6, &ip2c, &c__0);
/* 	IP2C = SHIFT( IP2C, -30 ) */
/* 	IP2C = IP2C + 32 */

/* ***	PRINT OUT RADAR */

/*< 100	iposy = 20 >*/
L100:
    iposy = 20;
/*< 	ishipx = shipx + 0.5 >*/
    ishipx = *shipx + (float).5;
/*< 	ishipy = shipy + 0.5 >*/
    ishipy = *shipy + (float).5;
/*< 	call getval(5, 0,105,  5, 1, iex ) >*/
    getval_(&c__5, &c__0, &c__105, &c__5, &c__1, &iex);
/*< 	call getval(5, 0,106,  5, 2, iey ) >*/
    getval_(&c__5, &c__0, &c__106, &c__5, &c__2, &iey);
/*< 	call getval(5, 0,107,  5, 3, ied ) >*/
    getval_(&c__5, &c__0, &c__107, &c__5, &c__3, &ied);
/*< 	call getval(5, 0,108,  5, 4, ief ) >*/
    getval_(&c__5, &c__0, &c__108, &c__5, &c__4, &ief);
/*< 	do 400 iytemp = ishipy+9, ishipy-9, -1 >*/
    i__1 = ishipy - 9;
    for (iytemp = ishipy + 9; iytemp >= i__1; --iytemp) {
/*< 	    next = .false. >*/
	next = FALSE_;
/*< 	    iy = iytemp >*/
	iy = iytemp;
/*< 	    iposy = iposy - 1 >*/
	--iposy;
/*< 	    iposx = 0 >*/
	iposx = 0;
/*< 	    do 400 ixtemp = ishipx-9, ishipx+9 >*/
	i__2 = ishipx + 9;
	for (ixtemp = ishipx - 9; ixtemp <= i__2; ++ixtemp) {
/*< 		ix = ixtemp >*/
	    ix = ixtemp;
/*< 		iposx = iposx + 1 >*/
	    ++iposx;
/*< 		if(sqrt((iposx-10+0.)**2+(iposy-10+0.)**2).gt.9.5)goto 400 >*/
	    r__2 = (real) (iposx - 10);
/* Computing 2nd power */
	    r__1 = r__2 + (float)0.;
	    r__4 = (real) (iposy - 10);
/* Computing 2nd power */
	    r__3 = r__4 + (float)0.;
	    if (sqrt(r__1 * r__1 + r__3 * r__3) > (float)9.5) {
		goto L400;
	    }
/*< 		if( ichar .eq. 78 )  abvara(iposx,iposy)=32 >*/
	    if (*ichar == 78) {
		abvara[iposx + iposy * 19 - 20] = 32;
	    }
/*< 		if(  >*/
	    if (ix < 1 || ix > 120 || iy < 1 || iy > 120) {
		goto L200;
	    }
/*< 		call getval(6, 0,121,  1, ix, iy, idep ) >*/
	    getval_(&c__6, &c__0, &c__121, &c__1, &ix, &iy, &idep);
/*< 		if( iright(idep) .ge. idepth ) goto 150 >*/
	    if (iright_(&idep) >= *idepth) {
		goto L150;
	    }
/*< 		ipchar = 32 >*/
	    ipchar = 32;
/*< 		ipcolr = iclbla >*/
	    ipcolr = col_1.iclbla;
/*< 		goto 160 >*/
	    goto L160;
/*< 150		if( iright(idep) .ge. 18 ) goto 155 >*/
L150:
	    if (iright_(&idep) >= 18) {
		goto L155;
	    }
/*< 		ipchar = 45 >*/
	    ipchar = 45;
/*< 		ipcolr = icldbl >*/
	    ipcolr = col_1.icldbl;
/*< 		goto 160 >*/
	    goto L160;
/*< 155		ipchar = 35 >*/
L155:
	    ipchar = 35;
/*< 		ipcolr = iclgre >*/
	    ipcolr = col_1.iclgre;
/*< 160		dist = sqrt((iex-ix+0.)**2+(iey-iy+0.)**2+(ied-idepth+0.)**2) >*/
L160:
/* Computing 2nd power */
	    r__2 = iex - ix + (float)0.;
/* Computing 2nd power */
	    r__3 = iey - iy + (float)0.;
	    r__1 = r__2 * r__2 + r__3 * r__3;
/* Computing 2nd power */
	    r__4 = ied - *idepth + (float)0.;
	    dist = sqrt(r__1 + r__4 * r__4);
/*< 		if( dist .gt. ief .or. ief .eq. 0 ) goto 165 >*/
	    if (dist > ief || ief == 0) {
		goto L165;
	    }
/*< 		ipchar = 34+dist >*/
	    ipchar = dist + 34;
/*< 		ipcolr = iclyel >*/
	    ipcolr = col_1.iclyel;
/*< 165		if( ix .eq. ip1x .and. iy .eq. ip1y )  ipchar = ip1c >*/
L165:
	    if (ix == ip1x && iy == ip1y) {
		ipchar = ip1c;
	    }
/*< 		if( ix .eq. ip2x .and. iy .eq. ip2y )  ipchar = ip2c >*/
	    if (ix == ip2x && iy == ip2y) {
		ipchar = ip2c;
	    }
/*< 		if( ileft(idep) .eq. 0 ) goto 300 >*/
	    if (ileft_(&idep) == 0) {
		goto L300;
	    }
/*< 		if( ileft(idep) .eq. 26+iport ) ipchar = 43 >*/
	    if (ileft_(&idep) == *iport + 26) {
		ipchar = 43;
	    }
/*< 		if( ileft(idep) .gt. 26 ) goto 300 >*/
	    if (ileft_(&idep) > 26) {
		goto L300;
	    }
/*< 		call getval(6, 0,141,  2, ileft(idep), 7, ival ) >*/
	    i__3 = ileft_(&idep);
	    getval_(&c__6, &c__0, &c__141, &c__2, &i__3, &c__7, &ival);
/*< 		if( ival .gt. 5100 ) ipchar = 46 >*/
	    if (ival > 5100) {
		ipchar = 46;
	    }
/*< 		call getval(6, 0,143,  2, ileft( idep ), 4, ival ) >*/
	    i__3 = ileft_(&idep);
	    getval_(&c__6, &c__0, &c__143, &c__2, &i__3, &c__4, &ival);
/*< 		if( ival .lt. idepth .and. ival .lt. 18 ) goto 300 >*/
	    if (ival < *idepth && ival < 18) {
		goto L300;
	    }
/*< 		ipchar = 64 + ileft( idep ) >*/
	    ipchar = ileft_(&idep) + 64;
/*< 		goto 300 >*/
	    goto L300;

/*< 200		ipchar = 35 >*/
L200:
	    ipchar = 35;
/*< 		ipcolr = iclgre >*/
	    ipcolr = col_1.iclgre;

/*< 300		if( damage( 3, 1 ) .eq. 0 ) goto 320 >*/
L300:
	    if (damage[11] == 0) {
		goto L320;
	    }
/*< 		ipchar = 37 >*/
	    ipchar = 37;
/*< 		ipcolr = iclpur >*/
	    ipcolr = col_1.iclpur;
/*< 320		if( abvara( iposx, iposy ) .ne. ipchar ) goto 350 >*/
L320:
	    if (abvara[iposx + iposy * 19 - 20] != ipchar) {
		goto L350;
	    }
/*< 		next = .false. >*/
	    next = FALSE_;
/*< 		goto 400 >*/
	    goto L400;
/*< 350		if( .not. next )call colcur( iposx*2, 4+iposy ) >*/
L350:
	    if (! next) {
		i__3 = iposx << 1;
		i__4 = iposy + 4;
		colcur_(&i__3, &i__4);
	    }
/*< 		call pback( ipcolr ) >*/
	    pback_(&ipcolr);
/*< 		if(  >*/
	    if (ipchar == 32 || ipchar == 45 || ipchar == 35) {
		goto L355;
	    }
/*< 		call pcolor( iclwhi ) >*/
	    pcolor_(&col_1.iclwhi);
/*< 		goto 360 >*/
	    goto L360;
/*< 355		call pcolor( ipcolr ) >*/
L355:
	    pcolor_(&ipcolr);
/*< 360		call chrout( ipchar ) >*/
L360:
	    chrout_(&ipchar);
/*< 		call chrout(32) >*/
	    chrout_(&c__32);
/*< 		abvara( iposx, iposy ) = ipchar >*/
	    abvara[iposx + iposy * 19 - 20] = ipchar;
/*< 		next = .true. >*/
	    next = TRUE_;
/*< 400	continue >*/
L400:
	    ;
	}
    }

/* ***	LOAD SONAR ARRAY */

/*< 	do 500 itemp = 1, 10 >*/
    for (itemp = 1; itemp <= 10; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    ix = shipx + smcos( float(degree) )*float(i-1)+.5 >*/
	r__2 = (real) (*degree);
	r__1 = *shipx + smcos_(&r__2) * (real) (i__ - 1);
	ix = r__1 + (float).5;
/*< 	    iy = shipy + smsin( float(degree) )*float(i-1)+.5 >*/
	r__2 = (real) (*degree);
	r__1 = *shipy + smsin_(&r__2) * (real) (i__ - 1);
	iy = r__1 + (float).5;
/*< 	    ival = 21 >*/
	ival = 21;
/*< 	    i >*/
	if (ix > 1 && ix <= 120 && iy > 1 && iy <= 120) {
	    getval_(&c__6, &c__0, &c__180, &c__1, &ix, &iy, &ival);
	}
/*< 	    id = ileft( ival ) >*/
	id = ileft_(&ival);
/*< 	    id1 = 0 >*/
	id1 = 0;
/*< 	    if( id .gt. 26 )goto 480 >*/
	if (id > 26) {
	    goto L480;
	}
/*< 	    if( id .ne. 0 )  call getval(6, 0,184,  2, id, 4, id1 ) >*/
	if (id != 0) {
	    getval_(&c__6, &c__0, &c__184, &c__2, &id, &c__4, &id1);
	}
/*< 	    ival = iright( ival ) >*/
	ival = iright_(&ival);
/*< 	    goto 490 >*/
	goto L490;

/*< 480	    if( 26+iport .ne. id ) ival = iright( ival ) >*/
L480:
	if (*iport + 26 != id) {
	    ival = iright_(&ival);
	}
/*< 	    if( 26+iport .ne. id ) goto 490 >*/
	if (*iport + 26 != id) {
	    goto L490;
	}
/*< 	    id = -21 >*/
	id = -21;
/*< 	    id1 = 18 >*/
	id1 = 18;
/*< 	    ival = iright( ival ) >*/
	ival = iright_(&ival);

/*< 490	    do 500 iztemp = ibot, itop >*/
L490:
	i__2 = itop;
	for (iztemp = ibot; iztemp <= i__2; ++iztemp) {
/*< 		iz = iztemp >*/
	    iz = iztemp;
/*< 		iorz = iz - 8 >*/
	    iorz = iz - 8;
/*< 		if( kind .eq. 2 ) iorz = iz >*/
	    if (*kind == 2) {
		iorz = iz;
	    }
/*< 		if( kind .eq. 5 ) iorz = iz - 16 >*/
	    if (*kind == 5) {
		iorz = iz - 16;
	    }
/*< 		icol = icllbl >*/
	    icol = col_1.icllbl;
/*< 		if( iz .le. 18 ) icol = icldbl >*/
	    if (iz <= 18) {
		icol = col_1.icldbl;
	    }
/*< 		if( ichar .eq. 78 ) sidara( i, iorz, 2 ) = 32 >*/
	    if (*ichar == 78) {
		sidara[i__ + (iorz + 38) * 10 - 201] = 32;
	    }
/*< 		ipchar = 32 >*/
	    ipchar = 32;
/*< 		dist = sqrt((iex-ix+0.)**2+(iey-iy+0.)**2+(ied-iz+0.)**2) >*/
/* Computing 2nd power */
	    r__2 = iex - ix + (float)0.;
/* Computing 2nd power */
	    r__3 = iey - iy + (float)0.;
	    r__1 = r__2 * r__2 + r__3 * r__3;
/* Computing 2nd power */
	    r__4 = ied - iz + (float)0.;
	    dist = sqrt(r__1 + r__4 * r__4);
/*< 		if( dist .gt. ief .or. ief .eq. 0 ) goto 495 >*/
	    if (dist > ief || ief == 0) {
		goto L495;
	    }
/*< 		ipchar = 34+dist >*/
	    ipchar = dist + 34;
/*< 		icol = iclyel >*/
	    icol = col_1.iclyel;
/*< 495		if( ival .ge. iz )  ipchar = 35 >*/
L495:
	    if (ival >= iz) {
		ipchar = 35;
	    }
/*< 		if( id1 .eq. iz )  ipchar = id+64 >*/
	    if (id1 == iz) {
		ipchar = id + 64;
	    }
/*< 		if( ipchar .eq. 32 .and. iz .eq. 18 )  ipchar = 44 >*/
	    if (ipchar == 32 && iz == 18) {
		ipchar = 44;
	    }
/*< 		ipchar = ipchar + 256 * icol >*/
	    ipchar += icol << 8;
/*< 		if(  >*/
	    if (damage[12] != 0 || *ichar == 78) {
		ipchar = (col_1.iclbla << 8) + 32;
	    }
/*< 		sidara( i, iorz, 1 ) = ipchar >*/
	    sidara[i__ + (iorz + 19) * 10 - 201] = ipchar;
/*< 500	continue >*/
/* L500: */
	}
    }

/* ***	PRINT OUT SONAR */

/*< 	do 510 iorz = 19, 1, -1 >*/
    for (iorz = 19; iorz >= 1; --iorz) {
/*< 	    next = .false. >*/
	next = FALSE_;
/*< 	    do 510 i = 1, 10 >*/
	for (i__ = 1; i__ <= 10; ++i__) {
/*< 		ipchar = sidara( i, iorz, 1 ) >*/
	    ipchar = sidara[i__ + (iorz + 19) * 10 - 201];
/*< 		if( ipchar .ne. sidara( i, iorz, 2 ) ) goto 505 >*/
	    if (ipchar != sidara[i__ + (iorz + 38) * 10 - 201]) {
		goto L505;
	    }
/*< 		next = .false. >*/
	    next = FALSE_;
/*< 		goto 510 >*/
	    goto L510;
/*< 505		if( .not. next ) call colcur( 39+2*i, 4+iorz ) >*/
L505:
	    if (! next) {
		i__2 = (i__ << 1) + 39;
		i__1 = iorz + 4;
		colcur_(&i__2, &i__1);
	    }
/*< 		icol = ipchar / 256 >*/
	    icol = ipchar / 256;
/*< 		ipcr = mod( ipchar, 256 ) >*/
	    ipcr = ipchar % 256;
/*< 		if( ipcr .eq. 35 ) icol = iclbla >*/
	    if (ipcr == 35) {
		icol = col_1.iclbla;
	    }
/*< 		call pback( icol ) >*/
	    pback_(&icol);
/*< 		if( ipcr.ne.35 .and. ipcr .ne. 32 ) goto 508 >*/
	    if (ipcr != 35 && ipcr != 32) {
		goto L508;
	    }
/*< 		call pcolor( icol ) >*/
	    pcolor_(&icol);
/*< 		call irepeat( ipcr, 2 ) >*/
	    irepeat_(&ipcr, &c__2);
/*< 		goto 509 >*/
	    goto L509;
/*< 508		call chrout(32) >*/
L508:
	    chrout_(&c__32);
/*< 		call pcolor( iclwhi ) >*/
	    pcolor_(&col_1.iclwhi);
/*< 		call chrout( ipcr ) >*/
	    chrout_(&ipcr);
/*< 		ipcr = 32 >*/
	    ipcr = 32;
/*< 509		if( i .eq. 10 ) call chrout(ipcr) >*/
L509:
	    if (i__ == 10) {
		chrout_(&ipcr);
	    }
/*< 		iochar = ipchar >*/
	    iochar = ipchar;
/*< 		sidara( i, iorz, 2 ) = ipchar >*/
	    sidara[i__ + (iorz + 38) * 10 - 201] = ipchar;
/*< 		next = .true. >*/
	    next = TRUE_;
/*< 510	continue >*/
L510:
	    ;
	}
    }

/* ***	PRINT OUT SONAR SCAN DIRECTION */

/*< 	if( degree .eq. odegre .and. ichar .ne. 78 )  return >*/
    if (*degree == odegre && *ichar != 78) {
	return 0;
    }
/*< 	call colcur( 55, 24 ) >*/
    colcur_(&c__55, &c__24);
/*< 	call number(2, degree, 3 ) >*/
    number_(&c__2, degree, &c__3);
/*< 	odegre = degree >*/
    odegre = *degree;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* displa_ */


/*< 	subroutine initdb( debug, wannam ) >*/
/* Subroutine */ int initdb_(debug, wannam)
logical *debug, *wannam;
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, x, y, x0y0, x1y0, x0y1, x1y1;
    extern integer icon_(), iran_();
    static integer ival;
    extern /* Subroutine */ int init_();
    static integer xrel, yrel, xpos, ypos, depth, array[12], itemp, xtemp, 
	    ytemp, xfpos, yfpos, tempx, ichar1, ichar2, sname1[2], sname2[2], 
	    depth1, depth2, idepth;
    extern /* Subroutine */ int getval_(), colcur_(), clrscr_(), number_(), 
	    unlock_(), chrout_(), string_(), getstr_(), putval_(), convrt_();


/* ***	SET UP DATA BASE */

/*< 	implicit integer( a-z ) >*/

/*< 	integer sname1( 2 ), sname2( 2 ), array( 12 ), comara( 60 ) >*/
/*< 	logical debug, wannam >*/

/*< 	if( debug )call clrscr >*/
    if (*debug) {
	clrscr_();
    }

/* ***	MASTER ARRAY CONSISISTING OF DEPTHS IN RIGHT OF WORDS */
/* ***	AND ZEROS OR SHIP NUMBERS IN LEFT OF WORDS */
/*< 	call init(6, 0,268,  1, 36, 120, 120 ) >*/
    init_(&c__6, &c__0, &c__268, &c__1, &c__36, &c__120, &c__120);

/* ***	ARRAY CONTAINING SHIP INFORMATION */
/* ***	WORD		CONTAINING */
/* ***	1		JOB NUMBER */
/* ***	2		X COORDINATE */
/* ***	3		Y COORDINATE */
/* ***	4		DEPTH */
/* ***	5		FIRST 6 CHARACTERS OF SHIP'S NAME */
/* ***	6		LAST 6 CHARACTERS OF SHIP'S NAME */
/* ***	7		SOUND GENERATED BY SHIP */
/* ***	8		PROJECTILE HIT FLAG */
/* ***	9		SHIP'S  AFFILIATION */
/* ***	10		SHIP TYPE */
/*< 	call init(6, 0,282,  2, 36, 26, 10 ) >*/
    init_(&c__6, &c__0, &c__282, &c__2, &c__36, &c__26, &c__10);

/* ***	ARRAY CONTAINING PORT INFORMATION */
/* ***	WORD		CONTAINING */
/* ***	1		FIRST 6 LETTERS OF PORT */
/* ***	2		LAST 6 LETTERS OF PORT */
/* ***	3		X COORDINATE OF PORT */
/* ***	4		Y COORDINATE OF PORT */
/* ***	5		NUMBER OF SHIPS PLAYING FOR THAT PORT */
/* ***	6		NUMBER OF HITS ON PORT */
/*< 	call init(6, 0,292,  3, 36, 2, 6 ) >*/
    init_(&c__6, &c__0, &c__292, &c__3, &c__36, &c__2, &c__6);

/* ***	ARRAY CONSISTING OF PPNS OF PEOPLE WHO HAVE BEEN KILLED */
/*< 	call init(5, 0,295,  4, 36, 50 ) >*/
    init_(&c__5, &c__0, &c__295, &c__4, &c__36, &c__50);

/* ***	ARRAY CONSISTING OF EXPLOSION INFORMATION */
/* ***	AND GENERAL NON-ARRAY TYPE INFORMATION */
/* ***	WORD		CONTAINING */
/* ***	1		X COORDINATE OF EXPLOSION */
/* ***	2		Y COORDINATE OF EXPLOSION */
/* ***	3		DEPTH OF EXPLOSION */
/* ***	4		FORCE OF EXPLOSION */
/* ***	5		FLAG INDICATING THAT PORT #1 HAD A PLAYER */
/* ***	6		FLAG INDICATING THAT PORT #2 HAD A PLAYER */
/*< 	call init(5, 0,306,  5, 18, 6 ) >*/
    init_(&c__5, &c__0, &c__306, &c__5, &c__18, &c__6);

/* ***	ARRAY CONSISTING OF MESSAGE INFO */
/* ***	WORD		CONTAINING */
/* ***	1		WHO TO */
/* ***	2		LENGTH */
/* ***	3		WHO FROM */
/* ***	4-63		MESSAGE */
/*< 	call init(5, 0,314,  6, 36, 63 ) >*/
    init_(&c__5, &c__0, &c__314, &c__6, &c__36, &c__63);

/* ***	MAKE SURE ALL BORDERS ARE LAND */

/*< 	if( debug )call colcur( 1, 24 ) >*/
    if (*debug) {
	colcur_(&c__1, &c__24);
    }
/*< 	if( debug )call string(1,'[Initializing borders]^M^J^E') >*/
    if (*debug) {
	string_(&c__1, "[Initializing borders]^M^J^E", (ftnlen)28);
    }
/*< 	do 100 itemp = 1, 120 >*/
    for (itemp = 1; itemp <= 120; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call putval(6, 0,322,  1, i, 1, 20 ) >*/
	putval_(&c__6, &c__0, &c__322, &c__1, &i__, &c__1, &c__20);
/*< 	    call putval(6, 0,323,  1, i, 120, 20 ) >*/
	putval_(&c__6, &c__0, &c__323, &c__1, &i__, &c__120, &c__20);
/*< 	    call putval(6, 0,324,  1, 1, i, 20 ) >*/
	putval_(&c__6, &c__0, &c__324, &c__1, &c__1, &i__, &c__20);
/*< 	    call putval(6, 0,325,  1, 120, i, 20 ) >*/
	putval_(&c__6, &c__0, &c__325, &c__1, &c__120, &i__, &c__20);
/*< 100	continue >*/
/* L100: */
    }

/* ***	NOW GENERATE RANDOM DEPTHS EVERY 10 X 10 UNITS */

/*< 	if( debug )call colcur( 1, 23 ) >*/
    if (*debug) {
	colcur_(&c__1, &c__23);
    }
/*< 	if( debug )call string(1,'[Random sequence]^M^J^E') >*/
    if (*debug) {
	string_(&c__1, "[Random sequence]^M^J^E", (ftnlen)23);
    }
/*< 	do 200 xtemp = 10, 110, 10 >*/
    for (xtemp = 10; xtemp <= 110; xtemp += 10) {
/*< 	    x = xtemp >*/
	x = xtemp;
/*< 	    do 200 ytemp = 10, 110, 10 >*/
	for (ytemp = 10; ytemp <= 110; ytemp += 10) {
/*< 		y = ytemp >*/
	    y = ytemp;
/*< 		if( debug )call colcur( x/2+1, y/10+9 ) >*/
	    if (*debug) {
		i__1 = x / 2 + 1;
		i__2 = y / 10 + 9;
		colcur_(&i__1, &i__2);
	    }
/*< 		idepth = iran( 20 ) >*/
	    idepth = iran_(&c__20);
/*< 		if( debug )call number(2, idepth, 2 ) >*/
	    if (*debug) {
		number_(&c__2, &idepth, &c__2);
	    }
/*< 		call putval(6, 0,339,  1, x, y, idepth ) >*/
	    putval_(&c__6, &c__0, &c__339, &c__1, &x, &y, &idepth);
/*< 200	continue >*/
/* L200: */
	}
    }

/* ***	NOW INTERPOLATE BETWEEN ALL THOSE POINTS */

/*< 	if( debug )call colcur( 1, 22 ) >*/
    if (*debug) {
	colcur_(&c__1, &c__22);
    }
/*< 	if( debug )call string(1,'[Generalization sequence]^M^J^E') >*/
    if (*debug) {
	string_(&c__1, "[Generalization sequence]^M^J^E", (ftnlen)31);
    }
/*< 	do 700 xtemp = 2, 119 >*/
    for (xtemp = 2; xtemp <= 119; ++xtemp) {
/*< 	    x = xtemp >*/
	x = xtemp;
/*< 	    xrel = mod( x, 10 ) >*/
	xrel = x % 10;
/*< 	    xpos = (x/10)*10 >*/
	xpos = x / 10 * 10;
/*< 	    xfpos = xpos >*/
	xfpos = xpos;
/*< 	    if( xfpos .eq. 0 )  xfpos = 1 >*/
	if (xfpos == 0) {
	    xfpos = 1;
	}
/*< 	    do 700 ytemp = 2, 119 >*/
	for (ytemp = 2; ytemp <= 119; ++ytemp) {
/*< 		y = ytemp >*/
	    y = ytemp;
/*< 		yrel = mod( y, 10 ) >*/
	    yrel = y % 10;

/*< 		if( xrel .ne. 0 .or. yrel .ne. 0 ) goto 300 >*/
	    if (xrel != 0 || yrel != 0) {
		goto L300;
	    }
/*< 		if( debug )call colcur( x/2+3, y/10+9 ) >*/
	    if (*debug) {
		i__1 = x / 2 + 3;
		i__2 = y / 10 + 9;
		colcur_(&i__1, &i__2);
	    }
/*< 		if( debug )call chrout(35) >*/
	    if (*debug) {
		chrout_(&c__35);
	    }

/*< 300		ypos = (y/10)*10 >*/
L300:
	    ypos = y / 10 * 10;
/*< 		yfpos = ypos >*/
	    yfpos = ypos;
/*< 		if( yfpos .eq. 0 )  yfpos = 1 >*/
	    if (yfpos == 0) {
		yfpos = 1;
	    }

/*< 		if( xrel .eq. 0 .and. yrel .ne. 0 ) goto 400 >*/
	    if (xrel == 0 && yrel != 0) {
		goto L400;
	    }
/*< 		if( yrel .eq. 0 .and. xrel .ne. 0 ) goto 500 >*/
	    if (yrel == 0 && xrel != 0) {
		goto L500;
	    }
/*< 		if( xrel .eq. 0 .and. yrel .eq. 0 ) goto 700 >*/
	    if (xrel == 0 && yrel == 0) {
		goto L700;
	    }

/*< 		call getval(6, 0,368,  1, xfpos, yfpos, x0y0 ) >*/
	    getval_(&c__6, &c__0, &c__368, &c__1, &xfpos, &yfpos, &x0y0);
/*< 		call getval(6, 0,369,  1, xpos+10, yfpos, x1y0 ) >*/
	    i__1 = xpos + 10;
	    getval_(&c__6, &c__0, &c__369, &c__1, &i__1, &yfpos, &x1y0);
/*< 		call getval(6, 0,370,  1, xfpos, ypos+10, x0y1 ) >*/
	    i__1 = ypos + 10;
	    getval_(&c__6, &c__0, &c__370, &c__1, &xfpos, &i__1, &x0y1);
/*< 		call getval(6, 0,371,  1, xpos+10, ypos+10, x1y1 ) >*/
	    i__1 = xpos + 10;
	    i__2 = ypos + 10;
	    getval_(&c__6, &c__0, &c__371, &c__1, &i__1, &i__2, &x1y1);
/*< 		depth1 = x0y0 + xrel*(x1y0-x0y0)/10 >*/
	    depth1 = x0y0 + xrel * (x1y0 - x0y0) / 10;
/*< 		depth2 = x0y1 + xrel*(x1y1-x0y1)/10 >*/
	    depth2 = x0y1 + xrel * (x1y1 - x0y1) / 10;
/*< 		depth = depth1 + yrel*(depth2-depth1)/10 >*/
	    depth = depth1 + yrel * (depth2 - depth1) / 10;
/*< 		goto 600 >*/
	    goto L600;

/*< 400		call getval(6, 0,377,  1, xfpos, yfpos, x0y0 ) >*/
L400:
	    getval_(&c__6, &c__0, &c__377, &c__1, &xfpos, &yfpos, &x0y0);
/*< 		call getval(6, 0,378,  1, xfpos, ypos+10, x0y1 ) >*/
	    i__1 = ypos + 10;
	    getval_(&c__6, &c__0, &c__378, &c__1, &xfpos, &i__1, &x0y1);
/*< 		depth = x0y0 + yrel*(x0y1-x0y0)/10 >*/
	    depth = x0y0 + yrel * (x0y1 - x0y0) / 10;
/*< 		goto 600 >*/
	    goto L600;

/*< 500		call getval(6, 0,382,  1, xfpos, yfpos, x0y0 ) >*/
L500:
	    getval_(&c__6, &c__0, &c__382, &c__1, &xfpos, &yfpos, &x0y0);
/*< 		call getval(6, 0,383,  1, xpos+10, yfpos, x1y0 ) >*/
	    i__1 = xpos + 10;
	    getval_(&c__6, &c__0, &c__383, &c__1, &i__1, &yfpos, &x1y0);
/*< 		depth = x0y0 + xrel*(x1y0-x0y0)/10 >*/
	    depth = x0y0 + xrel * (x1y0 - x0y0) / 10;

/*< 600		call putval(6, 0,386,  1, x, y, depth ) >*/
L600:
	    putval_(&c__6, &c__0, &c__386, &c__1, &x, &y, &depth);
/*< 700	continue >*/
L700:
	    ;
	}
    }

/* ***	SET UP PORTS */

/*< 	if( debug )call colcur( 1, 21 ) >*/
    if (*debug) {
	colcur_(&c__1, &c__21);
    }
/*< 	if( debug )call string(1,'[Initializing ports]^M^J^E') >*/
    if (*debug) {
	string_(&c__1, "[Initializing ports]^M^J^E", (ftnlen)26);
    }

/*< 	if( wannam ) goto 770 >*/
    if (*wannam) {
	goto L770;
    }

/* ***	USER DOESN'T WANT TO SETUP THE NAMES, PUT IN DEFAULTS */

/*< 	call convrt('Ichthyopolis', 12, 5, sname1, 6 ) >*/
    convrt_("Ichthyopolis", &c__12, &c__5, sname1, &c__6);
/*< 	call convrt('Oceanus     ', 12, 5, sname2, 6 ) >*/
    convrt_("Oceanus     ", &c__12, &c__5, sname2, &c__6, (ftnlen)12);
/*< 	goto 1000 >*/
    goto L1000;

/* ***	USER IS PRIV'D.  ALLOW HIM TO SET UP PORT NAMES */

/*< 770	if( .not. debug )call clrscr >*/
L770:
    if (! (*debug)) {
	clrscr_();
    }
/*< 800	call colcur( 1, 9 ) >*/
L800:
    colcur_(&c__1, &c__9);
/*< 	call string(1,'Enter name of port #1:                       ^E') >*/
    string_(&c__1, "Enter name of port #1:                       ^E", (ftnlen)
	    47);
/*< 	call colcur( 24, 9 ) >*/
    colcur_(&c__24, &c__9);
/*< 	call getstr(3, array, 12, i ) >*/
    getstr_(&c__3, array, &c__12, &i__);
/*< 	call colcur( 1, 7 ) >*/
    colcur_(&c__1, &c__7);
/*< 	call string(1,'                                      ^E') >*/
    string_(&c__1, "                                      ^E", (ftnlen)40);
/*< 	ichar1 = icon( array(1) ) - 64 >*/
    ichar1 = icon_(array) - 64;
/*< 	if( ichar1 .lt. 1 .or. ichar1 .gt. 26 ) goto 900 >*/
    if (ichar1 < 1 || ichar1 > 26) {
	goto L900;
    }
/*< 	call convrt( array, 12, 1, sname1, 6 ) >*/
    convrt_(array, &c__12, &c__1, sname1, &c__6);
/*< 	call colcur( 1, 8 ) >*/
    colcur_(&c__1, &c__8);
/*< 	call string(1,'Enter name of port #2:                       ^E') >*/
    string_(&c__1, "Enter name of port #2:                       ^E", (ftnlen)
	    47);
/*< 	call colcur( 24, 8 ) >*/
    colcur_(&c__24, &c__8);
/*< 	call getstr(3, array, 12, i ) >*/
    getstr_(&c__3, array, &c__12, &i__);
/*< 	ichar2 = icon( array(1) ) - 64 >*/
    ichar2 = icon_(array) - 64;
/*< 	if( i >*/
    if (ichar1 == ichar2 || ichar2 < 1 || ichar2 > 26) {
	goto L900;
    }
/*< 	call convrt( array, 12, 1, sname2, 6 ) >*/
    convrt_(array, &c__12, &c__1, sname2, &c__6);
/*< 	goto 1000 >*/
    goto L1000;

/*< 900	call colcur( 1, 7 ) >*/
L900:
    colcur_(&c__1, &c__7);
/*< 	call string(1,'Port names must be unique.^E') >*/
    string_(&c__1, "Port names must be unique.^E", (ftnlen)28);
/*< 	goto 800 >*/
    goto L800;

/* ***	PUT FIRST PORT IN BASE (MAKE UP ITS COORDINATES) */

/*< 1000	call putval(6, 0,430,  3, 1, 1, sname1( 1 ) ) >*/
L1000:
    putval_(&c__6, &c__0, &c__430, &c__3, &c__1, &c__1, sname1);
/*< 	call putval(6, 0,431,  3, 1, 2, sname1( 2 ) ) >*/
    putval_(&c__6, &c__0, &c__431, &c__3, &c__1, &c__2, &sname1[1]);

/*< 1100	y = iran( 100 ) + 10 >*/
L1100:
    y = iran_(&c__100) + 10;
/*< 	call putval(6, 0,434,  3, 1, 4, y ) >*/
    putval_(&c__6, &c__0, &c__434, &c__3, &c__1, &c__4, &y);
/*< 	do 1200 tempx = 2, 120 >*/
    for (tempx = 2; tempx <= 120; ++tempx) {
/*< 	    x = tempx >*/
	x = tempx;
/*< 	    call getval(6, 0,437,  1, x, y, ival ) >*/
	getval_(&c__6, &c__0, &c__437, &c__1, &x, &y, &ival);
/*< 	    if( ival .lt. 18 .and. x .eq. 2 ) goto 1100 >*/
	if (ival < 18 && x == 2) {
	    goto L1100;
	}
/*< 	    if( ival .le. 17 ) goto 1300 >*/
	if (ival <= 17) {
	    goto L1300;
	}
/*< 1200	continue >*/
/* L1200: */
    }
/*< 1300	x = x - 1 >*/
L1300:
    --x;
/*< 	call putval(6, 0,442,  3, 1, 3, x ) >*/
    putval_(&c__6, &c__0, &c__442, &c__3, &c__1, &c__3, &x);
/*< 	call getval(6, 0,443,  1, x, y-1, ival ) >*/
    i__1 = y - 1;
    getval_(&c__6, &c__0, &c__443, &c__1, &x, &i__1, &ival);
/*< 	if( ival .ge. 18 )  call putval(4, 0,444,  -1, 17 ) >*/
    if (ival >= 18) {
	putval_(&c__4, &c__0, &c__444, &c_n1, &c__17);
    }
/*< 	call getval(6, 0,445,  1, x+1, y-1, ival ) >*/
    i__1 = x + 1;
    i__2 = y - 1;
    getval_(&c__6, &c__0, &c__445, &c__1, &i__1, &i__2, &ival);
/*< 	if( ival .ge. 18 )  call putval(4, 0,446,  -1, 17 ) >*/
    if (ival >= 18) {
	putval_(&c__4, &c__0, &c__446, &c_n1, &c__17);
    }
/*< 	call getval(6, 0,447,  1, x, y+1, ival ) >*/
    i__1 = y + 1;
    getval_(&c__6, &c__0, &c__447, &c__1, &x, &i__1, &ival);
/*< 	if( ival .ge. 18 )  call putval(4, 0,448,  -1, 17 ) >*/
    if (ival >= 18) {
	putval_(&c__4, &c__0, &c__448, &c_n1, &c__17);
    }
/*< 	call getval(6, 0,449,  1, x+1, y+1, ival ) >*/
    i__1 = x + 1;
    i__2 = y + 1;
    getval_(&c__6, &c__0, &c__449, &c__1, &i__1, &i__2, &ival);
/*< 	if( ival .ge. 18 )  call putval(4, 0,450,  -1, 17 ) >*/
    if (ival >= 18) {
	putval_(&c__4, &c__0, &c__450, &c_n1, &c__17);
    }

/* ***	PUT SECOND PORT IN DATA BASE (MAKE UP ITS COORDINATES) */

/*< 	call putval(6, 0,454,  3, 2, 1, sname2( 1 ) ) >*/
    putval_(&c__6, &c__0, &c__454, &c__3, &c__2, &c__1, sname2);
/*< 	call putval(6, 0,455,  3, 2, 2, sname2( 2 ) ) >*/
    putval_(&c__6, &c__0, &c__455, &c__3, &c__2, &c__2, &sname2[1]);

/*< 1400	y = iran( 100 ) + 10 >*/
L1400:
    y = iran_(&c__100) + 10;
/*< 	call putval(6, 0,458,  3, 2, 4, y ) >*/
    putval_(&c__6, &c__0, &c__458, &c__3, &c__2, &c__4, &y);
/*< 	do 1500 tempx = 119, 1, -1 >*/
    for (tempx = 119; tempx >= 1; --tempx) {
/*< 	    x = tempx >*/
	x = tempx;
/*< 	    call getval(6, 0,461,  1, x, y, ival ) >*/
	getval_(&c__6, &c__0, &c__461, &c__1, &x, &y, &ival);
/*< 	    if( ival .lt. 18 .and. x .eq. 119 ) goto 1400 >*/
	if (ival < 18 && x == 119) {
	    goto L1400;
	}
/*< 	    if( ival .le. 17 ) goto 1600 >*/
	if (ival <= 17) {
	    goto L1600;
	}
/*< 1500	continue >*/
/* L1500: */
    }
/*< 1600	x = x + 1 >*/
L1600:
    ++x;
/*< 	call putval(6, 0,466,  3, 2, 3, x ) >*/
    putval_(&c__6, &c__0, &c__466, &c__3, &c__2, &c__3, &x);
/*< 	call getval(6, 0,467,  1, x, y-1, ival ) >*/
    i__1 = y - 1;
    getval_(&c__6, &c__0, &c__467, &c__1, &x, &i__1, &ival);
/*< 	if( ival .ge. 18 )  call putval(4, 0,468,  -1, 17 ) >*/
    if (ival >= 18) {
	putval_(&c__4, &c__0, &c__468, &c_n1, &c__17);
    }
/*< 	call getval(6, 0,469,  1, x-1, y-1, ival ) >*/
    i__1 = x - 1;
    i__2 = y - 1;
    getval_(&c__6, &c__0, &c__469, &c__1, &i__1, &i__2, &ival);
/*< 	if( ival .ge. 18 )  call putval(4, 0,470,  -1, 17 ) >*/
    if (ival >= 18) {
	putval_(&c__4, &c__0, &c__470, &c_n1, &c__17);
    }
/*< 	call getval(6, 0,471,  1, x, y+1, ival ) >*/
    i__1 = y + 1;
    getval_(&c__6, &c__0, &c__471, &c__1, &x, &i__1, &ival);
/*< 	if( ival .ge. 18 )  call putval(4, 0,472,  -1, 17 ) >*/
    if (ival >= 18) {
	putval_(&c__4, &c__0, &c__472, &c_n1, &c__17);
    }
/*< 	call getval(6, 0,473,  1, x-1, y+1, ival ) >*/
    i__1 = x - 1;
    i__2 = y + 1;
    getval_(&c__6, &c__0, &c__473, &c__1, &i__1, &i__2, &ival);
/*< 	if( ival .ge. 18 )  call putval(4, 0,474,  -1, 17 ) >*/
    if (ival >= 18) {
	putval_(&c__4, &c__0, &c__474, &c_n1, &c__17);
    }

/* ***	UNLOCK DATA BASE SO OTHERS MAY PLAY AND RETURN */

/*< 	if( debug )call colcur( 1, 6 ) >*/
    if (*debug) {
	colcur_(&c__1, &c__6);
    }
/*< 	if( debug )call string(1,'[Initialization completed]^M^J^E') >*/
    if (*debug) {
	string_(&c__1, "[Initialization completed]^M^J^E", (ftnlen)32);
    }
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* initdb_ */


/*< 	subroutine edit( comara, length ) >*/
/* Subroutine */ int edit_(comara, length)
integer *comara, *length;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i1, i2, i3, i4, ival;
    extern integer ileft_();
    extern /* Subroutine */ int getval_();
    extern integer iright_();
    extern /* Subroutine */ int number_(), getnum_(), chrout_(), string_(), 
	    putval_();

/*< 	implicit integer (a-z) >*/
/*< 	integer comara( 60 ) >*/
/*< 	call string(1,'Array #^E') >*/
    /* Parameter adjustments */
    --comara;

    /* Function Body */
    string_(&c__1, "Array #^E", (ftnlen)9);
/*< 	if( length .eq. 0 ) goto 100 >*/
    if (*length == 0) {
	goto L100;
    }
/*< 	call getnum(10, comara, length, i1, 10, i2, 10, i3, 10, i4, 10 ) >*/
    getnum_(&c__10, &comara[1], length, &i1, &c__10, &i2, &c__10, &i3, &c__10,
	     &i4, &c__10);
/*< 100	if( i1 .gt. 3 ) goto 200 >*/
L100:
    if (i1 > 3) {
	goto L200;
    }
/*< 	call number(1, i1 ) >*/
    number_(&c__1, &i1);
/*< 	call chrout(40) >*/
    chrout_(&c__40);
/*< 	call number(1, i2 ) >*/
    number_(&c__1, &i2);
/*< 	call chrout(44) >*/
    chrout_(&c__44);
/*< 	call number(1, i3 ) >*/
    number_(&c__1, &i3);
/*< 	call getval(6, 0,496,  i1, i2, i3, ival ) >*/
    getval_(&c__6, &c__0, &c__496, &i1, &i2, &i3, &ival);
/*< 	goto 300 >*/
    goto L300;
/*< 200	call number(1, i1 ) >*/
L200:
    number_(&c__1, &i1);
/*< 	call chrout(40) >*/
    chrout_(&c__40);
/*< 	call number(1, i2 ) >*/
    number_(&c__1, &i2);
/*< 	call getval(5, 0,501,  i1, i2, ival ) >*/
    getval_(&c__5, &c__0, &c__501, &i1, &i2, &ival);
/*< 300	call string(1,') = ^E') >*/
L300:
    string_(&c__1, ") = ^E", (ftnlen)6);
/*< 	call number(1, ileft( ival ) ) >*/
    i__1 = ileft_(&ival);
    number_(&c__1, &i__1);
/*< 	call string(1,',,^E') >*/
    string_(&c__1, ",,^E", (ftnlen)4);
/*< 	call number(1, iright( ival ) ) >*/
    i__1 = iright_(&ival);
    number_(&c__1, &i__1);
/*< 	call string(1,'  Octal: ^E') >*/
    string_(&c__1, "  Octal: ^E", (ftnlen)11);
/*< 	call number(3, ileft( ival ), 0, 8 ) >*/
    i__1 = ileft_(&ival);
    number_(&c__3, &i__1, &c__0, &c__8);
/*< 	call string(1,',,^E') >*/
    string_(&c__1, ",,^E", (ftnlen)4);
/*< 	call number(3, iright( ival ), 0, 8 ) >*/
    i__1 = iright_(&ival);
    number_(&c__3, &i__1, &c__0, &c__8);
/*< 	call string(1,'  Sixbit: ^E') >*/
    string_(&c__1, "  Sixbit: ^E", (ftnlen)12);
/*< 	call string(3, ival, 6, 6 ) >*/
    string_(&c__3, &ival, &c__6, &c__6);
/*< 	if( comara(1) .ne. 67 ) return >*/
    if (comara[1] != 67) {
	return 0;
    }
/*< 	if( i1 .le. 3 ) call putval(4, 0,513,  -i1, i4 ) >*/
    if (i1 <= 3) {
	i__1 = -i1;
	putval_(&c__4, &c__0, &c__513, &i__1, &i4);
    }
/*< 	if( i1 .gt. 3 ) call putval(4, 0,514,  -i1, i3 ) >*/
    if (i1 > 3) {
	i__1 = -i1;
	putval_(&c__4, &c__0, &c__514, &i__1, &i3);
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* edit_ */


/*< 	subroutine map >*/
/* Subroutine */ int map_()
{
    /* Initialized data */

    static integer scale1[20] = { 64,35,42,38,61,43,45,44,46,64,35,42,38,61,
	    43,45,46,32,32,32 };
    static integer scale2[20] = { 37,37,37,37,64,64,64,64,64,32,32,32,32,32,
	    32,32,32,32,32,32 };

    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, j, p, x, y, pn;
    extern integer job_();
    extern /* Subroutine */ int ppn_();
    static integer ip1c, ip2c, ip1x, ip1y, ip2x, ip2y;
    extern /* Subroutine */ int crlf_();
    extern integer itty_();
    static integer ip1cs, ip2cs;
    extern /* Subroutine */ int ofile_();
    static integer depth;
    extern /* Subroutine */ int close_(), wfile_();
    static integer itemp, xtemp, ytemp;
    extern /* Subroutine */ int select_();
    static integer filesp[13];
    extern /* Subroutine */ int getval_(), nodlin_();
    extern integer iright_();
    static integer stname[2];
    extern /* Subroutine */ int number_();
    extern integer isxbit_();
    extern /* Subroutine */ int outbuf_();
    extern logical lerror_();
    extern /* Subroutine */ int string_(), chrout_(), convrt_(), outspc_();


/* ***	PRINT OUT A GREY-TONE MAP ON THE LINE PRINTER */

/*< 	implicit integer ( a - z ) >*/

/*< 	integer scale1( 20 ), scale2( 20 ), filesp( 13 ), stname(2) >*/
/*< 	logical lerror >*/

/*< 	data  >*/
/*< 	data  >*/

/* ***	FIND OUT WHERE PORTS ARE */

/*< 	call getval(6, 0,533,  3, 1, 3, ip1x ) >*/
    getval_(&c__6, &c__0, &c__533, &c__3, &c__1, &c__3, &ip1x);
/*< 	call getval(6, 0,534,  3, 1, 4, ip1y ) >*/
    getval_(&c__6, &c__0, &c__534, &c__3, &c__1, &c__4, &ip1y);
/*< 	call getval(6, 0,535,  3, 1, 1, ip1cs ) >*/
    getval_(&c__6, &c__0, &c__535, &c__3, &c__1, &c__1, &ip1cs);
/*< 	call convrt( ip1cs, 1, 6, ip1c, 0 ) >*/
    convrt_(&ip1cs, &c__1, &c__6, &ip1c, &c__0);
/* 	IP1C = SHIFT( IP1C, -30 ) */
/* 	IP1C = IP1C + 32 */
/*< 	call getval(6, 0,539,  3, 2, 3, ip2x ) >*/
    getval_(&c__6, &c__0, &c__539, &c__3, &c__2, &c__3, &ip2x);
/*< 	call getval(6, 0,540,  3, 2, 4, ip2y ) >*/
    getval_(&c__6, &c__0, &c__540, &c__3, &c__2, &c__4, &ip2y);
/*< 	call getval(6, 0,541,  3, 2, 1, ip2cs ) >*/
    getval_(&c__6, &c__0, &c__541, &c__3, &c__2, &c__1, &ip2cs);
/*< 	call convrt( ip2cs, 1, 6, ip2c, 0 ) >*/
    convrt_(&ip2cs, &c__1, &c__6, &ip2c, &c__0);
/* 	IP2C = SHIFT( IP2C, -30 ) */
/* 	IP2C = IP2C + 32 */

/* ***	FIND OUT WHICH LINE PRINTER THE USER IS CLOSEST TO AND OPEN IT */

/*< 	call nodlin( itty( job(0) ), i, j ) >*/
    i__2 = job_(&c__0);
    i__1 = itty_(&i__2);
    nodlin_(&i__1, &i__, &j);
/*< 	if( i .lt. 24 )  i = 30 >*/
    if (i__ < 24) {
	i__ = 30;
    }
/*< 	filesp( 3 )=isxbit('LPT00~') >*/
    filesp[2] = isxbit_("LPT00~", (ftnlen)6);
/*< 	filesp( 3 ) = filesp( 3 ) + 4096*(i/8) >*/
    filesp[2] += i__ / 8 << 12;
/*< 	filesp( 3 ) = filesp( 3 ) + 64*mod( i, 8 ) >*/
    filesp[2] += i__ % 8 << 6;
/*< 	filesp( 4 ) = isxbit('OCEAN~') >*/
    filesp[3] = isxbit_("OCEAN~", (ftnlen)6);
/*< 	filesp( 5 ) = isxbit('MAP~') >*/
    filesp[4] = isxbit_("MAP~", (ftnlen)4);
/*< 	filesp( 6 ) = 63 >*/
    filesp[5] = 63;
/*< 	call ppn( p, pn ) >*/
    ppn_(&p, &pn);
/*< 	filesp( 7 ) = p >*/
    filesp[6] = p;
/*< 	filesp( 8 ) = pn >*/
    filesp[7] = pn;
/*< 	call ofile( 2, filesp, 0 ) >*/
    ofile_(&c__2, filesp, &c__0);
/*< 	if( .not. lerror(0) ) goto 200 >*/
    if (! lerror_(&c__0)) {
	goto L200;
    }
/*< 100	call string(1,'Cannot open ^E') >*/
L100:
    string_(&c__1, "Cannot open ^E", (ftnlen)14);
/*< 	call outspc( filesp ) >*/
    outspc_(filesp);
/*< 	call crlf >*/
    crlf_();
/*< 	return >*/
    return 0;

/*< 200	call wfile( 2, filesp ) >*/
L200:
    wfile_(&c__2, filesp);
/*< 	if( lerror(0) ) goto 100 >*/
    if (lerror_(&c__0)) {
	goto L100;
    }
/*< 	call string(1,'Generating map on ^E') >*/
    string_(&c__1, "Generating map on ^E", (ftnlen)20);
/*< 	call outspc( filesp ) >*/
    outspc_(filesp);
/*< 	call crlf >*/
    crlf_();
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	call select( 2 ) >*/
    select_(&c__2);

/* ***	PRINT OUT A HEADING ON THE MAP */

/*< 	do 300 i = 1, 55 >*/
    for (i__ = 1; i__ <= 55; ++i__) {
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 300	continue >*/
/* L300: */
    }
/*< 	call string(1,'***  O c e a n  ***^M^J^J^S     ^E') >*/
    string_(&c__1, "***  O c e a n  ***^M^J^J^S     ^E", (ftnlen)34);

/* ***	NOW PRINT OUT THE MAP */

/*< 	do 400 itemp = 10, 110, 10 >*/
    for (itemp = 10; itemp <= 110; itemp += 10) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call number(2, i, 10 ) >*/
	number_(&c__2, &i__, &c__10);
/*< 400	continue >*/
/* L400: */
    }
/*< 	call string(1,'^M^S    ^E') >*/
    string_(&c__1, "^M^S    ^E", (ftnlen)10);

/*< 	do 500 itemp = 1, 122 >*/
    for (itemp = 1; itemp <= 122; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    if( mod( i-1, 10 ) .eq. 0 )  call chrout(43) >*/
	if ((i__ - 1) % 10 == 0) {
	    chrout_(&c__43);
	}
/*< 	    if( mod( i-1, 10 ) .ne. 0 )  call chrout(45) >*/
	if ((i__ - 1) % 10 != 0) {
	    chrout_(&c__45);
	}
/*< 500	continue >*/
/* L500: */
    }
/*< 	call string(1,'^M^E') >*/
    string_(&c__1, "^M^E", (ftnlen)4);

/*< 	do 1600 ytemp = 120, 1, -1 >*/
    for (ytemp = 120; ytemp >= 1; --ytemp) {
/*< 	    y = ytemp >*/
	y = ytemp;
/*< 	    if( mod( y, 10 ) .eq. 0 ) goto 600 >*/
	if (y % 10 == 0) {
	    goto L600;
	}
/*< 	    call string(1,'^S    |^E') >*/
	string_(&c__1, "^S    |^E", (ftnlen)9);
/*< 	    goto 700 >*/
	goto L700;
/*< 600	    call chrout( 19 ) >*/
L600:
	chrout_(&c__19);
/*< 	    call number(2, y, 3 ) >*/
	number_(&c__2, &y, &c__3);
/*< 	    call string(1,' +^E') >*/
	string_(&c__1, " +^E", (ftnlen)4);

/* ***	FIRST SCALE */

/*< 700	    do 1000 xtemp = 1, 120 >*/
L700:
	for (xtemp = 1; xtemp <= 120; ++xtemp) {
/*< 		x = xtemp >*/
	    x = xtemp;
/*< 		if( x .eq. ip1x .and. y .eq. ip1y ) goto 800 >*/
	    if (x == ip1x && y == ip1y) {
		goto L800;
	    }
/*< 		if( x .eq. ip2x .and. y .eq. ip2y ) goto 900 >*/
	    if (x == ip2x && y == ip2y) {
		goto L900;
	    }
/*< 		call getval(6, 0,611,  1, x, y, depth ) >*/
	    getval_(&c__6, &c__0, &c__611, &c__1, &x, &y, &depth);
/*< 		call chrout( scale1( iright( depth ) ) ) >*/
	    chrout_(&scale1[iright_(&depth) - 1]);
/*< 		goto 1000 >*/
	    goto L1000;

/*< 800		call chrout( ip1c ) >*/
L800:
	    chrout_(&ip1c);
/*< 		goto 1000 >*/
	    goto L1000;

/*< 900		call chrout( ip2c ) >*/
L900:
	    chrout_(&ip2c);
/*< 1000	    continue >*/
L1000:
	    ;
	}
/*< 	    if( mod( y, 10 ) .ne. 0 ) goto 1100 >*/
	if (y % 10 != 0) {
	    goto L1100;
	}
/*< 	    call string(1,'+ ^E') >*/
	string_(&c__1, "+ ^E", (ftnlen)4);
/*< 	    call number(1, y ) >*/
	number_(&c__1, &y);
/*< 	    goto 1200 >*/
	goto L1200;

/*< 1100	    call chrout(124) >*/
L1100:
	chrout_(&c__124);

/*< 1200	    call string(1,'^M     ^E') >*/
L1200:
	string_(&c__1, "^M     ^E", (ftnlen)9);

/* ***	SECOND SCALE */

/*< 	    do 1500 xtemp = 1, 120 >*/
	for (xtemp = 1; xtemp <= 120; ++xtemp) {
/*< 		x = xtemp >*/
	    x = xtemp;
/*< 		if( x .eq. ip1x .and. y .eq. ip1y ) goto 1300 >*/
	    if (x == ip1x && y == ip1y) {
		goto L1300;
	    }
/*< 		if( x .eq. ip2x .and. y .eq. ip2y ) goto 1400 >*/
	    if (x == ip2x && y == ip2y) {
		goto L1400;
	    }
/*< 		call getval(6, 0,635,  1, x, y, depth ) >*/
	    getval_(&c__6, &c__0, &c__635, &c__1, &x, &y, &depth);
/*< 		call chrout( scale2( iright( depth ) )) >*/
	    chrout_(&scale2[iright_(&depth) - 1]);
/*< 		goto 1500 >*/
	    goto L1500;

/*< 1300		call chrout(ip1c) >*/
L1300:
	    chrout_(&ip1c);
/*< 		goto 1500 >*/
	    goto L1500;

/*< 1400		call chrout(ip2c) >*/
L1400:
	    chrout_(&ip2c);
/*< 1500	    continue >*/
L1500:
	    ;
	}
/*< 1600	continue >*/
/* L1600: */
    }
/*< 	call string(1,'^S    ^E') >*/
    string_(&c__1, "^S    ^E", (ftnlen)8);

/*< 	do 1700 itemp = 1, 122 >*/
    for (itemp = 1; itemp <= 122; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    if( mod( i-1, 10 ) .eq. 0 )  call chrout(43) >*/
	if ((i__ - 1) % 10 == 0) {
	    chrout_(&c__43);
	}
/*< 	    if( mod( i-1, 10 ) .ne. 0 )  call chrout(45) >*/
	if ((i__ - 1) % 10 != 0) {
	    chrout_(&c__45);
	}
/*< 1700	continue >*/
/* L1700: */
    }
/*< 	call string(1,'^M^S     ^E') >*/
    string_(&c__1, "^M^S     ^E", (ftnlen)11);

/*< 	do 1800 itemp = 10, 120, 10 >*/
    for (itemp = 10; itemp <= 120; itemp += 10) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call number(2, i, 10 ) >*/
	number_(&c__2, &i__, &c__10);
/*< 1800	continue >*/
/* L1800: */
    }

/* ***	PRINT OUT KEY INFORMATION */

/*< 	call  >*/
    string_(&c__1, "^M^S^S                                                  \
       ^E", (ftnlen)65);
/*< 	call string(1,'76543210987654321012^M^S    ^E') >*/
    string_(&c__1, "76543210987654321012^M^S    ^E", (ftnlen)30);

/* ***	PRINT OUT NAME OR PORT # 1 AND ITS COORDINATE */

/*< 	call getval(6, 0,667,  3, 1, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__667, &c__3, &c__1, &c__1, stname);
/*< 	call getval(6, 0,668,  3, 1, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__668, &c__3, &c__1, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call string(1,'  ^E') >*/
    string_(&c__1, "  ^E", (ftnlen)4);
/*< 	call number(2, ip1x, -3 ) >*/
    number_(&c__2, &ip1x, &c_n3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(2, ip1y, -3 ) >*/
    number_(&c__2, &ip1y, &c_n3);

/* ***	PRINT OUT KEY */

/*< 	call string(1,'                           Key: ^E') >*/
    string_(&c__1, "                           Key: ^E", (ftnlen)34);
/*< 	do 1900 itemp = 1, 20 >*/
    for (itemp = 1; itemp <= 20; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call chrout( scale1(i) ) >*/
	chrout_(&scale1[i__ - 1]);
/*< 1900	continue >*/
/* L1900: */
    }
/*< 	call  >*/
    string_(&c__1, "^M                                                      \
   ^E", (ftnlen)61);
/*< 	do 2000 itemp = 1, 20 >*/
    for (itemp = 1; itemp <= 20; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call chrout( scale2(i) ) >*/
	chrout_(&scale2[i__ - 1]);
/*< 2000	continue >*/
/* L2000: */
    }

/* ***	PRINT OUT NAME OF SECOND PORT AND ITS COORDINATES */

/*< 	call string(1,'                            ^E') >*/
    string_(&c__1, "                            ^E", (ftnlen)30);
/*< 	call getval(6, 0,692,  3, 2, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__692, &c__3, &c__2, &c__1, stname);
/*< 	call getval(6, 0,693,  3, 2, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__693, &c__3, &c__2, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call string(1,'  ^E') >*/
    string_(&c__1, "  ^E", (ftnlen)4);
/*< 	call number(2, ip2x, -3 ) >*/
    number_(&c__2, &ip2x, &c_n3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(2, ip2y, -3 ) >*/
    number_(&c__2, &ip2y, &c_n3);

/* ***	CLOSE FILE AND RETURN */

/*< 	call close( 2 ) >*/
    close_(&c__2);
/*< 	call select( 1 ) >*/
    select_(&c__1);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* map_ */


/*< 	subroutine print( kind ) >*/
/* Subroutine */ int print_(kind)
integer *kind;
{
    /* System generated locals */
    integer i__1;
    real r__1, r__2;

    /* Builtin functions */
    double sqrt();

    /* Local variables */
    static integer i__, ix, iy, ix1;
    extern /* Subroutine */ int pback_(), defcol_(), getval_();
    static integer stname[2];
    extern /* Subroutine */ int clrscr_(), colcur_(), number_(), pcolor_(), 
	    chrout_(), string_(), cursor_(), usrset_(), irepeat_();

/*< 	integer stname(2) >*/
/*< 	commo >*/

/* ***	PRINT OUT ALL INITIAL INFORMATION FOR USER */

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
/*< 3	call clrscr >*/
L3:
    clrscr_();

/*< 	call usrset( 1026, 1 ) >*/
    usrset_(&c__1026, &c__1);

/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call irepeat(45,44) >*/
    irepeat_(&c__45, &c__44);
/*< 	call defcol >*/
    defcol_();
/*< 	call string(1,' Azimuth:     ^E') >*/
    string_(&c__1, " Azimuth:     ^E", (ftnlen)16);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call string(1,'----^E') >*/
    string_(&c__1, "----^E", (ftnlen)6);
/*< 	do 100 iy = 1, 19 >*/
    for (iy = 1; iy <= 19; ++iy) {
/*< 	    call cursor( 1, 24-iy ) >*/
	i__1 = 24 - iy;
	cursor_(&c__1, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 	    ix = 20 - 2 * ifix( sqrt(100.-(iy-10+0.)**2) + 0.5 ) >*/
	r__2 = (real) (iy - 10);
/* Computing 2nd power */
	r__1 = r__2 + (float)0.;
	ix = 20 - ((integer) (sqrt((float)100. - r__1 * r__1) + (float).5) << 
		1);
/*< 	    if( ix .eq. 0 ) goto 51 >*/
	if (ix == 0) {
	    goto L51;
	}
/*< 	    do 50 i = 1, ix >*/
	i__1 = ix;
	for (i__ = 1; i__ <= i__1; ++i__) {
/*< 		call chrout(64) >*/
	    chrout_(&c__64);
/*< 50	    continue >*/
/* L50: */
	}
/*< 51	    continue >*/
L51:
/*< 	    ix1 = 19 + 2 * ifix( sqrt(100.-(iy-10+0.)**2) + 0.5 ) >*/
	r__2 = (real) (iy - 10);
/* Computing 2nd power */
	r__1 = r__2 + (float)0.;
	ix1 = ((integer) (sqrt((float)100. - r__1 * r__1) + (float).5) << 1) 
		+ 19;
/*< 	    if( ix1 .ge. 38 ) ix1 = 39 >*/
	if (ix1 >= 38) {
	    ix1 = 39;
	}
/*< 	    if( ix .ge. ix1-1 ) goto 59 >*/
	if (ix >= ix1 - 1) {
	    goto L59;
	}
/*< 	    call pback( iclbla ) >*/
	pback_(&col_1.iclbla);
/*< 	    do 58 i = ix, ix1-3 >*/
	i__1 = ix1 - 3;
	for (i__ = ix; i__ <= i__1; ++i__) {
/*< 		call chrout( 32 ) >*/
	    chrout_(&c__32);
/*< 58	    continue >*/
/* L58: */
	}
/*< 	    call pback( iclwhi ) >*/
	pback_(&col_1.iclwhi);
/*< 59	    if( ix1 .eq. 39 ) goto 61 >*/
L59:
	if (ix1 == 39) {
	    goto L61;
	}
/*< 	    do 60 i = ix1, 38 >*/
	for (i__ = ix1; i__ <= 38; ++i__) {
/*< 		call chrout(64) >*/
	    chrout_(&c__64);
/*< 60	    continue >*/
/* L60: */
	}
/*< 61	    continue >*/
L61:
/*< 	    call string(1,'||^E') >*/
	string_(&c__1, "||^E", (ftnlen)4);
/*< 	    call pback( iclbla ) >*/
	pback_(&col_1.iclbla);
/*< 	    call string(1,'                     ^E') >*/
	string_(&c__1, "                     ^E", (ftnlen)23);
/*< 	    call pback( iclwhi ) >*/
	pback_(&col_1.iclwhi);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 100	continue >*/
/* L100: */
    }
/*< 	call cursor( 1, 4 ) >*/
    cursor_(&c__1, &c__4);
/*< 	call irepeat( 45, 62 ) >*/
    irepeat_(&c__45, &c__62);
/*< 	call colcur( 1, 3 ) >*/
    colcur_(&c__1, &c__3);
/*< 	if( k >*/
    if (*kind == 5) {
	string_(&c__1, "Eng:            Rdr:    Gtr:                    Msl:\
                    Sfg:^E", (ftnlen)78);
    }
/*< 	if( kind .eq. 5 ) goto 105 >*/
    if (*kind == 5) {
	goto L105;
    }
/*< 	call string(1,'Eng:    Hlm:    Rdr:    Snr:    ^E') >*/
    string_(&c__1, "Eng:    Hlm:    Rdr:    Snr:    ^E", (ftnlen)34);
/*< 	if( k >*/
    if (*kind == 1) {
	string_(&c__1, "Com:            Msl:    Dep:            Sfg:^E", (
		ftnlen)46);
    }
/*< 	if( k >*/
    if (*kind == 2) {
	string_(&c__1, "Tp1:    Tp2:    Msl:    Dcl:    Bal:    Lsp:^E", (
		ftnlen)46);
    }
/*< 	if( k >*/
    if (*kind == 3) {
	string_(&c__1, "                Msl:    Dep:    Min:    Sfg:^E", (
		ftnlen)46);
    }
/*< 	if( k >*/
    if (*kind == 4) {
	string_(&c__1, "Tp1:    Tp2:                            Sfg:^E", (
		ftnlen)46);
    }

/*< 105	call colcur( 64, 24 ) >*/
L105:
    colcur_(&c__64, &c__24);
/*< 	call string(1,'Time:^E') >*/
    string_(&c__1, "Time:^E", (ftnlen)7);
/*< 	call colcur( 64, 23 ) >*/
    colcur_(&c__64, &c__23);
/*< 	call string(1,'Sector:    -^E') >*/
    string_(&c__1, "Sector:    -^E", (ftnlen)14);
/*< 	call colcur( 64, 21 ) >*/
    colcur_(&c__64, &c__21);
/*< 	call string(1,'Speed:    (   )^E') >*/
    string_(&c__1, "Speed:    (   )^E", (ftnlen)17);
/*< 	call colcur( 64, 20 ) >*/
    colcur_(&c__64, &c__20);
/*< 	call string(1,'Azimuth:    (   )^E') >*/
    string_(&c__1, "Azimuth:    (   )^E", (ftnlen)19);
/*< 	call colcur( 64, 17 ) >*/
    colcur_(&c__64, &c__17);
/*< 	call string(1,'Vol:       (   )^E') >*/
    string_(&c__1, "Vol:       (   )^E", (ftnlen)18);

/* ***	PRINT OUT INFORMATION ON PORTS */

/*< 	call colcur( 64, 12 ) >*/
    colcur_(&c__64, &c__12);
/*< 	call getval(6, 0,795,  3, 1, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__795, &c__3, &c__1, &c__1, stname);
/*< 	call getval(6, 0,796,  3, 1, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__796, &c__3, &c__1, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call colcur( 64, 11 ) >*/
    colcur_(&c__64, &c__11);
/*< 	call getval(6, 0,799,  3, 1, 3, ix ) >*/
    getval_(&c__6, &c__0, &c__799, &c__3, &c__1, &c__3, &ix);
/*< 	call number(2, ix, -3 ) >*/
    number_(&c__2, &ix, &c_n3);
/*< 	call chrout( 45 ) >*/
    chrout_(&c__45);
/*< 	call getval(6, 0,802,  3, 1, 4, iy ) >*/
    getval_(&c__6, &c__0, &c__802, &c__3, &c__1, &c__4, &iy);
/*< 	call number(2, iy, -3 ) >*/
    number_(&c__2, &iy, &c_n3);
/*< 	call string(1,' State:^E') >*/
    string_(&c__1, " State:^E", (ftnlen)9);
/*< 	call colcur( 64, 9 ) >*/
    colcur_(&c__64, &c__9);
/*< 	call getval(6, 0,806,  3, 2, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__806, &c__3, &c__2, &c__1, stname);
/*< 	call getval(6, 0,807,  3, 2, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__807, &c__3, &c__2, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call colcur( 64, 8 ) >*/
    colcur_(&c__64, &c__8);
/*< 	call getval(6, 0,810,  3, 2, 3, ix ) >*/
    getval_(&c__6, &c__0, &c__810, &c__3, &c__2, &c__3, &ix);
/*< 	call number(2, ix, -3 ) >*/
    number_(&c__2, &ix, &c_n3);
/*< 	call chrout( 45 ) >*/
    chrout_(&c__45);
/*< 	call getval(6, 0,813,  3, 2, 4, iy ) >*/
    getval_(&c__6, &c__0, &c__813, &c__3, &c__2, &c__4, &iy);
/*< 	call number(2, iy, -3 ) >*/
    number_(&c__2, &iy, &c_n3);
/*< 	call string(1,' State:^E') >*/
    string_(&c__1, " State:^E", (ftnlen)9);

/*< 	call colcur( 1, 1 ) >*/
    colcur_(&c__1, &c__1);
/*< 	call string(1,'Command:^E') >*/
    string_(&c__1, "Command:^E", (ftnlen)10);

/*< 200	if( kind .ne. 1 ) goto 250 >*/
/* L200: */
    if (*kind != 1) {
	goto L250;
    }
/*< 	call colcur( 64, 18 ) >*/
    colcur_(&c__64, &c__18);
/*< 	call string(1,'Charges:^E') >*/
    string_(&c__1, "Charges:^E", (ftnlen)10);
/*< 	call colcur( 64, 16 ) >*/
    colcur_(&c__64, &c__16);
/*< 	call string(1,'Missiles:^E') >*/
    string_(&c__1, "Missiles:^E", (ftnlen)11);
/*< 	call colcur( 64, 15 ) >*/
    colcur_(&c__64, &c__15);
/*< 	call string(1,'Auto fire:^E') >*/
    string_(&c__1, "Auto fire:^E", (ftnlen)12);
/*< 	goto 999 >*/
    goto L999;

/*< 250	if( kind .ne. 2 ) goto 300 >*/
L250:
    if (*kind != 2) {
	goto L300;
    }
/*< 	call colcur( 64, 22 ) >*/
    colcur_(&c__64, &c__22);
/*< 	call string(1,'Depth:^E') >*/
    string_(&c__1, "Depth:^E", (ftnlen)8);
/*< 	call colcur( 64, 19 ) >*/
    colcur_(&c__64, &c__19);
/*< 	call string(1,'Pitch:     (   )^E') >*/
    string_(&c__1, "Pitch:     (   )^E", (ftnlen)18);
/*< 	call colcur( 64, 18 ) >*/
    colcur_(&c__64, &c__18);
/*< 	call string(1,'Ballast:    %^E') >*/
    string_(&c__1, "Ballast:    %^E", (ftnlen)15);
/*< 	call colcur( 64, 16 ) >*/
    colcur_(&c__64, &c__16);
/*< 	call string(1,'Missiles:^E') >*/
    string_(&c__1, "Missiles:^E", (ftnlen)11);
/*< 	call colcur( 64, 15 ) >*/
    colcur_(&c__64, &c__15);
/*< 	call string(1,'Torpedos:^E') >*/
    string_(&c__1, "Torpedos:^E", (ftnlen)11);
/*< 	call colcur( 64, 14 ) >*/
    colcur_(&c__64, &c__14);
/*< 	call string(1,'Hull:    %^E') >*/
    string_(&c__1, "Hull:    %^E", (ftnlen)12);
/*< 	call colcur( 64, 13 ) >*/
    colcur_(&c__64, &c__13);
/*< 	call string(1,'Water:    %^E') >*/
    string_(&c__1, "Water:    %^E", (ftnlen)13);
/*< 	call colcur( 64, 5 ) >*/
    colcur_(&c__64, &c__5);
/*< 	call string(1,'Torp. 1:^E') >*/
    string_(&c__1, "Torp. 1:^E", (ftnlen)10);
/*< 	call colcur( 64, 4 ) >*/
    colcur_(&c__64, &c__4);
/*< 	call string(1,'Torp. 2:^E') >*/
    string_(&c__1, "Torp. 2:^E", (ftnlen)10);
/*< 	goto 999 >*/
    goto L999;

/*< 300	if( kind .ne. 3 ) goto 400 >*/
L300:
    if (*kind != 3) {
	goto L400;
    }
/*< 	call colcur( 64, 19 ) >*/
    colcur_(&c__64, &c__19);
/*< 	call string(1,'Mines:^E') >*/
    string_(&c__1, "Mines:^E", (ftnlen)8);
/*< 	call colcur( 64, 18 ) >*/
    colcur_(&c__64, &c__18);
/*< 	call string(1,'Charges:^E') >*/
    string_(&c__1, "Charges:^E", (ftnlen)10);
/*< 	call colcur( 64, 16 ) >*/
    colcur_(&c__64, &c__16);
/*< 	call string(1,'Missiles:^E') >*/
    string_(&c__1, "Missiles:^E", (ftnlen)11);
/*< 	goto 999 >*/
    goto L999;

/*< 400	if( kind .ne. 4 ) goto 500 >*/
L400:
    if (*kind != 4) {
	goto L500;
    }
/*< 	call colcur( 64, 15 ) >*/
    colcur_(&c__64, &c__15);
/*< 	call string(1,'Torpedos:^E') >*/
    string_(&c__1, "Torpedos:^E", (ftnlen)11);
/*< 	call colcur( 64, 5 ) >*/
    colcur_(&c__64, &c__5);
/*< 	call string(1,'Torp. 1:^E') >*/
    string_(&c__1, "Torp. 1:^E", (ftnlen)10);
/*< 	call colcur( 64, 4 ) >*/
    colcur_(&c__64, &c__4);
/*< 	call string(1,'Torp. 2:^E') >*/
    string_(&c__1, "Torp. 2:^E", (ftnlen)10);
/*< 	goto 999 >*/
    goto L999;

/*< 500	if( kind .ne. 5 ) goto 999 >*/
L500:
    if (*kind != 5) {
	goto L999;
    }
/*< 	call colcur( 64, 22 ) >*/
    colcur_(&c__64, &c__22);
/*< 	call string(1,'Altitude:^E') >*/
    string_(&c__1, "Altitude:^E", (ftnlen)11);
/*< 	call colcur( 64, 19 ) >*/
    colcur_(&c__64, &c__19);
/*< 	call string(1,'Pitch:     (   )^E') >*/
    string_(&c__1, "Pitch:     (   )^E", (ftnlen)18);
/*< 	call colcur( 64, 16 ) >*/
    colcur_(&c__64, &c__16);
/*< 	call string(1,'Missiles:^E') >*/
    string_(&c__1, "Missiles:^E", (ftnlen)11);
/*< 999	return >*/
L999:
    return 0;
/*< 	end >*/
} /* print_ */


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
    extern /* Subroutine */ int allcap_(), chrbuf_(), colcur_();
    static integer indstr;
    extern /* Subroutine */ int chrout_(), outbuf_(), string_();


/*  --	ROUTINE GET COMMAND FROM USER IF ONE PRESENT. */

/*< 	integer comara(61), index, arrind, ichar >*/
/*< 	data index/0/ >*/
    /* Parameter adjustments */
    --comara;

    /* Function Body */

/*  --	IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR */
/*  --	0.5 SECONDS OR UNTIL ONE IS. */

/*< 10	call nap( 500, 12 ) >*/
L10:
    nap_(&c__500, &c__12);
/*< 	call chrbuf( ichar ) >*/
    chrbuf_(ichar);
/*< 	if( ichar .eq. -1 ) return >*/
    if (*ichar == -1) {
	return 0;
    }
/*< 	if( ichar .eq. 8 .or. ichar .eq. 127 ) goto 20 >*/
    if (*ichar == 8 || *ichar == 127) {
	goto L20;
    }
/*< 	if( ichar .eq. 21 ) goto 40 >*/
    if (*ichar == 21) {
	goto L40;
    }
/*< 	if( ichar .eq. 13 ) goto 45 >*/
    if (*ichar == 13) {
	goto L45;
    }
/*< 	if( ichar .eq. 27 .and. index .eq. 0 ) goto 15 >*/
    if (*ichar == 27 && index == 0) {
	goto L15;
    }
/*< 	if( ichar .lt. 32 ) goto 10 >*/
    if (*ichar < 32) {
	goto L10;
    }
/*< 	if( index .ge. 60 ) goto 50 >*/
    if (index >= 60) {
	goto L50;
    }

/*  --	NOT SPECIAL CHARACTER, PUT IN ARRAY */

/*< 	index = index + 1 >*/
    ++index;
/*< 	call colcur( 9 + index, 1 ) >*/
    i__1 = index + 9;
    colcur_(&i__1, &c__1);
/*< 	call chrout( ichar ) >*/
    chrout_(ichar);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	comara(index) = icon( ichar ) >*/
    comara[index] = icon_(ichar);
/*< 	goto 10 >*/
    goto L10;

/*  --	ESCAPE:  REPEAT LAST COMMAND */

/*< 15	if( comara(1) .eq. 82 ) indstr = 0 >*/
L15:
    if (comara[1] == 82) {
	indstr = 0;
    }
/*< 	index = indstr >*/
    index = indstr;
/*< 	call colcur( 10, 1 ) >*/
    colcur_(&c__10, &c__1);
/*< 	if( index .ne. 0 )call string(3, comara, 1, index ) >*/
    if (index != 0) {
	string_(&c__3, &comara[1], &c__1, &index);
    }
/*< 	goto 45 >*/
    goto L45;

/*  --	DELETE CHARACTER */

/*< 20	call colcur( 9 + index, 1 ) >*/
L20:
    i__1 = index + 9;
    colcur_(&i__1, &c__1);
/*< 	call chrout( 32 ) >*/
    chrout_(&c__32);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	index = index - 1 >*/
    --index;
/*< 	if( index .lt. 0 ) index = 0 >*/
    if (index < 0) {
	index = 0;
    }
/*< 	goto 10 >*/
    goto L10;

/*  --	DELETE LINE */

/*< 40	call colcur( 10, 1 ) >*/
L40:
    colcur_(&c__10, &c__1);
/*< 	do 43 i = 1, index >*/
    i__1 = index;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 43	continue >*/
/* L43: */
    }
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	index = 0 >*/
    index = 0;
/*< 	goto 10 >*/
    goto L10;

/*  --	CARRIAGE RETURN TYPED */

/*< 45	if( index .ne. 0 ) goto 50 >*/
L45:
    if (index != 0) {
	goto L50;
    }
/*< 	ichar = -1 >*/
    *ichar = -1;
/*< 	goto 70 >*/
    goto L70;
/*< 50	comara(index + 1) = 0 >*/
L50:
    comara[index + 1] = 0;
/*< 	call colcur( 10, 1 ) >*/
    colcur_(&c__10, &c__1);
/*< 	do 60 i = 1, index >*/
    i__1 = index;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	call chrout(32) >*/
	chrout_(&c__32);
/*< 60	continue >*/
/* L60: */
    }
/*< 	call allcap( comara, 2 ) >*/
    allcap_(&comara[1], &c__2);
/*< 	ichar = comara(1) >*/
    *ichar = comara[1];
/*< 70	arrind = index >*/
L70:
    *arrind = index;
/*< 	indstr = index >*/
    indstr = index;
/*< 	index = 0 >*/
    index = 0;
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	call nap( 500, 4 ) >*/
    nap_(&c__500, &c__4);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* comand_ */


/*< 	subroutine cease( ix, iy, iplayr ) >*/
/* Subroutine */ int cease_(ix, iy, iplayr)
integer *ix, *iy, *iplayr;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, ipn;
    extern /* Subroutine */ int ppn_(), lock_();
    static integer ival;
    extern /* Subroutine */ int close_(), addval_(), getval_(), colcur_(), 
	    unlock_(), explod_(), exprog_(), putval_(), usrset_();


/* ***	DELETE USER FROM THE DATA BASE */

/*< 	call unlock >*/
    unlock_();
/*< 	call lock >*/
    lock_();
/*< 	call explod( ix, iy, 18, 0, ival ) >*/
    explod_(ix, iy, &c__18, &c__0, &ival);
/*< 	call addval(6, 0,960,  1, ix, iy, -262144*iplayr ) >*/
    i__1 = *iplayr * -262144;
    addval_(&c__6, &c__0, &c__960, &c__1, ix, iy, &i__1);
/*< 	call putval(6, 0,961,  2, iplayr, 1, 0 ) >*/
    putval_(&c__6, &c__0, &c__961, &c__2, iplayr, &c__1, &c__0);
/*< 	call getval(6, 0,962,  2, iplayr, 9, ival ) >*/
    getval_(&c__6, &c__0, &c__962, &c__2, iplayr, &c__9, &ival);
/*< 	call addval(6, 0,963,  3, ival, 5, -1 ) >*/
    addval_(&c__6, &c__0, &c__963, &c__3, &ival, &c__5, &c_n1);
/*< 	call getval(6, 0,964,  2, iplayr, 10, ival ) >*/
    getval_(&c__6, &c__0, &c__964, &c__2, iplayr, &c__10, &ival);
/*< 	if( ival .eq. 5 ) goto 10 >*/
    if (ival == 5) {
	goto L10;
    }
/*< 	call getval(5, 0,966,  4, 1, ival ) >*/
    getval_(&c__5, &c__0, &c__966, &c__4, &c__1, &ival);
/*< 	call addval(4, 0,967,  -4, 1 ) >*/
    addval_(&c__4, &c__0, &c__967, &c_n4, &c__1);
/*< 	call ppn( i, ipn ) >*/
    ppn_(&i__, &ipn);
/*< 	ival = ival + 1 >*/
    ++ival;
/*< 	call putval(5, 0,970,  4, ival+1, ipn ) >*/
    i__1 = ival + 1;
    putval_(&c__5, &c__0, &c__970, &c__4, &i__1, &ipn);
/*< 10	call usrset( 1031, 0 ) >*/
L10:
    usrset_(&c__1031, &c__0);
/*< 	call usrset( 1026, 0 ) >*/
    usrset_(&c__1026, &c__0);
/*< 	call usrset( 1041, 1 ) >*/
    usrset_(&c__1041, &c__1);
/*< 	call colcur( 1, 1 ) >*/
    colcur_(&c__1, &c__1);
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call unlock >*/
    unlock_();
/*< 	call exprog >*/
    exprog_();
/*< 	end >*/
} /* cease_ */


/*< 	subroutine clrlin >*/
/* Subroutine */ int clrlin_()
{
    static integer i__;
    extern /* Subroutine */ int colcur_(), chrout_();


/* ***	CLEAR THE INFORMATION LINE AND PREPARE TO PRINT ON IT */

/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 	do 100 i = 1, 79 >*/
    for (i__ = 1; i__ <= 79; ++i__) {
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 100	continue >*/
/* L100: */
    }
/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* clrlin_ */


/*< 	subroutine hurt( kind, ihfac, imuch, damage ) >*/
/* Subroutine */ int hurt_(kind, ihfac, imuch, damage)
integer *kind, *ihfac, *imuch, *damage;
{
    /* Initialized data */

    static integer odds[50] = { 1,1,2,5,5,5,3,4,0,5,1,1,2,4,3,5,3,2,2,1,1,1,2,
	    5,0,0,3,3,3,5,1,1,2,5,5,5,0,0,0,6,2,0,2,5,0,0,3,0,0,5 };

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__;
    extern integer iran_();
    static integer itemp, ithru;


/* ***	DAMAGE THE USER ACCORDING TO IMUCH */

/*< 	integer damage( 10, 2 ), odds( 50 ) >*/
/*< 	data  >*/
    /* Parameter adjustments */
    damage -= 11;

    /* Function Body */

/*< 	imuch = iabs( imuch ) >*/
    *imuch = abs(*imuch);
/*< 	do 200 itemp = 1, imuch >*/
    i__1 = *imuch;
    for (itemp = 1; itemp <= i__1; ++itemp) {
/*< 	    ithru = 0 >*/
	ithru = 0;
/*< 100	    i = iran( 10 ) >*/
L100:
	i__ = iran_(&c__10);
/*< 	    if( iran( 8 ) .gt. odds( 10*(kind-1)+i ) ) goto 100 >*/
	if (iran_(&c__8) > odds[(*kind - 1) * 10 + i__ - 1]) {
	    goto L100;
	}
/*< 	    ithru = ithru + 1 >*/
	++ithru;
/*< 	    if( damage( i, 1 ) .eq. -1 .and. ithru .lt. 10 ) goto 100 >*/
	if (damage[i__ + 10] == -1 && ithru < 10) {
	    goto L100;
	}
/*< 	    if( damage( i, 1 ) .eq. -1 ) goto 200 >*/
	if (damage[i__ + 10] == -1) {
	    goto L200;
	}
/*< 	    damage( i, 1 ) = damage( i, 1 ) + 1 >*/
	++damage[i__ + 10];
/*< 	    if( damage(i,1) .gt. 9 )  damage( i, 1 ) = -1 >*/
	if (damage[i__ + 10] > 9) {
	    damage[i__ + 10] = -1;
	}
/*< 200	continue >*/
L200:
	;
    }
/*< 	ihfac = ihfac - imuch >*/
    *ihfac -= *imuch;
/*< 	if( ihfac .lt. 0 )  ihfac = 0 >*/
    if (*ihfac < 0) {
	*ihfac = 0;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* hurt_ */


/*< 	subroutine endhim( victim ) >*/
/* Subroutine */ int endhim_(victim)
integer *victim;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer isx, isy;
    extern /* Subroutine */ int lock_();
    static integer ival, iport;
    extern /* Subroutine */ int addval_(), getval_(), addusr_(), clrlin_();
    extern integer iright_();
    extern /* Subroutine */ int number_(), unlock_(), chrout_(), colstr_(), 
	    string_(), putval_();


/* ***	ROUTINE REMOVES DETACHED JOB FROM DATABASE */

/*< 	integer victim >*/
/*< 	commo >*/
/*< 	call lock >*/
    lock_();
/*< 	call getval(6, 0,1025,  2, victim, 2, isx ) >*/
    getval_(&c__6, &c__0, &c__1025, &c__2, victim, &c__2, &isx);
/*< 	call getval(6, 0,1026,  2, victim, 3, isy ) >*/
    getval_(&c__6, &c__0, &c__1026, &c__2, victim, &c__3, &isy);
/*< 	call getval(6, 0,1027,  1, isx, isy, ival ) >*/
    getval_(&c__6, &c__0, &c__1027, &c__1, &isx, &isy, &ival);
/*< 	call putval(4, 0,1028,  -1, iright( ival ) ) >*/
    i__1 = iright_(&ival);
    putval_(&c__4, &c__0, &c__1028, &c_n1, &i__1);
/*< 	call getval(6, 0,1029,  2, victim, 9, iport ) >*/
    getval_(&c__6, &c__0, &c__1029, &c__2, victim, &c__9, &iport);
/*< 	call addval(6, 0,1030,  3, iport, 5, -1 ) >*/
    addval_(&c__6, &c__0, &c__1030, &c__3, &iport, &c__5, &c_n1);
/*< 	call putval(6, 0,1031,  2, victim, 1, 0 ) >*/
    putval_(&c__6, &c__0, &c__1031, &c__2, victim, &c__1, &c__0);
/*< 	call addusr( -1 ) >*/
    addusr_(&c_n1);
/*< 	call unlock >*/
    unlock_();
/*< 	call clrlin >*/
    clrlin_();
/*< 	call colstr(iclyel,'*** Job ^E') >*/
    colstr_(&col_1.iclyel, "*** Job ^E", (ftnlen)10);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	call chrout(40) >*/
    chrout_(&c__40);
/*< 	call chrout( ival + 64 ) >*/
    i__1 = ival + 64;
    chrout_(&i__1);
/*< 	call string(1,') removed from data base ***^E') >*/
    string_(&c__1, ") removed from data base ***^E", (ftnlen)30);
/*< 	victim = 0 >*/
    *victim = 0;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* endhim_ */


/*< 	subroutine explod( ix, iy, iz, iforce, iflag ) >*/
/* Subroutine */ int explod_(ix, iy, iz, iforce, iflag)
integer *ix, *iy, *iz, *iforce, *iflag;
{
    extern /* Subroutine */ int putval_();


/* ***	SET UP AN EXPLOSION */

/*< 	call putval(5, 0,1047,  5, 1, ix ) >*/
    putval_(&c__5, &c__0, &c__1047, &c__5, &c__1, ix);
/*< 	call putval(5, 0,1048,  5, 2, iy ) >*/
    putval_(&c__5, &c__0, &c__1048, &c__5, &c__2, iy);
/*< 	call putval(5, 0,1049,  5, 3, iz ) >*/
    putval_(&c__5, &c__0, &c__1049, &c__5, &c__3, iz);
/*< 	call putval(5, 0,1050,  5, 4, iforce ) >*/
    putval_(&c__5, &c__0, &c__1050, &c__5, &c__4, iforce);
/*< 	iflag = 3 >*/
    *iflag = 3;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* explod_ */

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
/* 	CALL STRING(1,' line ^E') */
/* 	CALL NUMBER(3, IL, 0, 8 ) */
/* 	CALL CHROUT(' ') */
/* 	CALL STRING(3, JSTAT( IJOB ), 6, 2 ) */
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* syswho_ */


/*< 	subroutine who( icchar ) >*/
/* Subroutine */ int who_(icchar)
integer *icchar;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer ijob;
    extern /* Subroutine */ int crlf_();
    static integer ival, uname[2];
    extern /* Subroutine */ int pkind_(), getval_(), chrout_(), string_(), 
	    syswho_();


/* ***	SUBROUTINE PRINTS OUT STATISTICS ON USER */

/*< 	integer uname(2) >*/
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call chrout( icchar+64 ) >*/
    i__1 = *icchar + 64;
    chrout_(&i__1);
/*< 	call string(1,': ^E') >*/
    string_(&c__1, ": ^E", (ftnlen)4);
/*< 	call getval(6, 0,1090,  2, icchar, 10, ival ) >*/
    getval_(&c__6, &c__0, &c__1090, &c__2, icchar, &c__10, &ival);
/*< 	call pkind( ival ) >*/
    pkind_(&ival);
/*< 	if( ival .gt. 1 .and. ival .lt. 5 ) call chrout(32) >*/
    if (ival > 1 && ival < 5) {
	chrout_(&c__32);
    }
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call getval(6, 0,1094,  2, icchar, 5, uname(1) ) >*/
    getval_(&c__6, &c__0, &c__1094, &c__2, icchar, &c__5, uname);
/*< 	call getval(6, 0,1095,  2, icchar, 6, uname(2) ) >*/
    getval_(&c__6, &c__0, &c__1095, &c__2, icchar, &c__6, &uname[1]);
/*< 	call string(3, uname, 6, 12 ) >*/
    string_(&c__3, uname, &c__6, &c__12);
/*< 	call getval(6, 0,1097,  2, icchar, 1, ijob ) >*/
    getval_(&c__6, &c__0, &c__1097, &c__2, icchar, &c__1, &ijob);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call syswho( ijob ) >*/
    syswho_(&ijob);
/*< 	call crlf >*/
    crlf_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* who_ */


/*< 	subroutine pkind( kind ) >*/
/* Subroutine */ int pkind_(kind)
integer *kind;
{
    extern /* Subroutine */ int string_();


/* ***	PRINTS OUT KIND OF SHIP */

/*< 	if( kind .eq. 1 ) call string(1,'Battleship^E') >*/
    if (*kind == 1) {
	string_(&c__1, "Battleship^E", (ftnlen)12);
    }
/*< 	if( kind .eq. 2 ) call string(1,'Submarine^E') >*/
    if (*kind == 2) {
	string_(&c__1, "Submarine^E", (ftnlen)11);
    }
/*< 	if( kind .eq. 3 ) call string(1,'Destroyer^E') >*/
    if (*kind == 3) {
	string_(&c__1, "Destroyer^E", (ftnlen)11);
    }
/*< 	if( kind .eq. 4 ) call string(1,'P.T. boat^E') >*/
    if (*kind == 4) {
	string_(&c__1, "P.T. boat^E", (ftnlen)11);
    }
/*< 	if( kind .eq. 5 ) call string(1,'Helicopter^E') >*/
    if (*kind == 5) {
	string_(&c__1, "Helicopter^E", (ftnlen)12);
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* pkind_ */


/*< 	subroutine nowait >*/
/* Subroutine */ int nowait_()
{
    extern /* Subroutine */ int tstop_(), addusr_();

/*< 	call addusr( -1 ) >*/
    addusr_(&c_n1);
/*< 10	call tstop >*/
L10:
    tstop_();
/*< 	goto 10 >*/
    goto L10;
/*< 	end >*/
} /* nowait_ */


/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static integer itorp = 20;
    static integer ichar = 78;
    static integer iradr = -1;
    static integer ihfac = 100;
    static integer idc = 20;
    static integer imine = 10;
    static integer imissl = 5;

    /* System generated locals */
    integer i__1, i__2, i__3, i__4;
    real r__1, r__2, r__3, r__4, r__5;

    /* Builtin functions */
    double sqrt();
    integer pow_ii();
    double atan(), r_sign(), cos();

    /* Local variables */
    static real a;
    static integer i__;
    static real v;
    static integer id;
    static real gx, gy;
    static integer ix, iy, ip1, ip2, ied, ief, inc;
    extern integer job_();
    extern /* Subroutine */ int map_(), nap_();
    static integer isd, iaz, iex, ipn;
    static logical eot;
    static integer iey, itp;
    extern /* Subroutine */ int ppn_(), who_();
    static integer isx, isy, ipk1, ipk2, iop1, iop2, ibal, ideg, iodc, irec, 
	    isec, kind;
    extern /* Subroutine */ int crlf_();
    static integer ijob;
    extern /* Subroutine */ int lock_();
    static integer icpn;
    extern integer iran_();
    static integer ival, imin;
    extern integer icon_();
    extern /* Subroutine */ int edit_();
    static integer ivic, ioaz;
    static real dist;
    static integer iter, itaz;
    static real xvel, yvel, zvel;
    extern /* Subroutine */ int hurt_();
    static integer ifac1, ifac2, ifac3, ifac4;
    extern integer itty_();
    static integer name1, name2, ival1;
    static real elev1, elev2;
    static integer iopk1, iopk2, idfac;
    extern /* Subroutine */ int check_(), cease_();
    static logical debug;
    extern integer igtab_();
    static logical idock;
    static integer iobal, iodeg;
    extern integer icomb_();
    extern /* Subroutine */ int ofile_();
    static integer iodep;
    extern integer ileft_();
    static logical ofire;
    extern /* Subroutine */ int pkind_();
    static real depth;
    static integer nkind, itdep;
    extern /* Subroutine */ int close_();
    static integer index, idist, itemp, itspd;
    extern doublereal smcos_();
    extern integer jstat_();
    static integer ihour, iotaz;
    static real sound;
    extern doublereal smsin_();
    static integer islvl;
    static real shipx, shipy;
    static integer iport;
    extern /* Subroutine */ int print_();
    static real torpd;
    static integer iturn;
    extern /* Subroutine */ int pstop_();
    static real torpx, torpy, atarg1, atarg2;
    static integer damage[20]	/* was [10][2] */, i1torp, i2torp, io1trp, 
	    io2trp, iodfac;
    extern /* Subroutine */ int enable_();
    static integer iprtx1, iprty1;
    extern /* Subroutine */ int addval_();
    static integer iprtx2, iprty2, idfect, icchar, iradnc, comara[60];
    extern doublereal cosdeg_();
    static integer parara[20];
    static real dfactr;
    static logical iniflg;
    extern /* Subroutine */ int initdb_();
    static integer ispeed;
    extern doublereal sindeg_();
    extern logical logdin_();
    extern integer iserch_();
    static integer idepth, filspc[13];
    static logical wannam, wanmap, atofir;
    static integer length, stname[2];
    extern /* Subroutine */ int getval_(), select_(), chrwat_(), number_(), 
	    clrscr_(), colcur_(), clrlin_();
    static logical lprivd;
    extern integer isxbit_();
    static integer iplayr;
    extern /* Subroutine */ int outbuf_();
    extern logical lerror_();
    extern /* Subroutine */ int string_();
    static integer ishipx;
    extern /* Subroutine */ int getstr_();
    static logical selprt;
    static integer ishipy;
    static logical notfrs;
    extern /* Subroutine */ int convrt_(), putval_(), colstr_();
    static real oshipx, oshipy, odepth;
    static integer ipitch;
    extern integer iright_();
    extern /* Subroutine */ int explod_(), usrset_();
    static integer iexflg;
    static real ttyspd;
    static integer itptch;
    extern /* Subroutine */ int chrout_(), unlock_(), datime_(), settty_();
    static integer ioshpx, ioshpy, iradto;
    extern /* Subroutine */ int displa_();
    static integer iosped, iotspd, ioptch, iotpch, iomine, iomssl, iotorp;
    static real highst;
    static integer ioslvl, iohfac, lastjb;
    extern /* Subroutine */ int endhim_(), pcolor_(), comand_(), getnum_(), 
	    allcap_();
    static integer itorpx, itorpy, itorpd, iterat;
    static real degree, radicl, xmissl, ymissl, dmissl;
    static integer misslx, missly, missld;


/*< 	logical iniflg, selprt, eot, wanmap, debug, wannam, atofir, ofire >*/
/*< 	logical notfrs, lprivd, lerror, idock >*/
/*< 	integer comara(60), stname(2), damage(10,2) >*/
/*< 	integer parara(20), filspc(13) >*/
/*< 	logical logdin, newang >*/
/*< 	real smsin, smcos >*/
/*< 	common/nhcom/newang >*/
/*< 	commo >*/
/*< 	data itorp/20/, ichar/78/, iradr/-1/, ihfac/100/ >*/
/*< 	data idc/20/, imine/10/, imissl/5/ >*/

/* ***	CHECK USER TO SEE IF HE'S WELCOME, SET UP SWITCHES, */
/* ***	INITIALIZE DATABASE AND OPEN TTY */

/*< 	call ppn( i, ipn ) >*/
    ppn_(&i__, &ipn);
/*< 	call usrset( 536, ttyspd ) >*/
    usrset_(&c__536, &ttyspd);
/*< 	call settty( comara, parara, length, lprivd, filspc ) >*/
    settty_(comara, parara, &length, &lprivd, filspc);
/*< 	newang = .true. >*/
    nhcom_1.newang = TRUE_;
/*< 	if( length .eq. 0 ) goto 100 >*/
    if (length == 0) {
	goto L100;
    }
/*< 	if(iserch(parara,isxbit('MAP~'),length).ne.0) wanmap = .true. >*/
    i__1 = isxbit_("MAP~", (ftnlen)4);
    if (iserch_(parara, &i__1, &length) != 0) {
	wanmap = TRUE_;
    }
/*< 	if(iserch(parara,isxbit('OLDANG~'),length).ne.0) newang = .false. >*/
    i__1 = isxbit_("OLDANG~", (ftnlen)7);
    if (iserch_(parara, &i__1, &length) != 0) {
	nhcom_1.newang = FALSE_;
    }
/*< 	if(is >*/
    i__1 = isxbit_("DEBUG~", (ftnlen)6);
    if (iserch_(parara, &i__1, &length) != 0 && lprivd) {
	debug = TRUE_;
    }
/*< 	if(is >*/
    i__1 = isxbit_("NAME~", (ftnlen)5);
    if (iserch_(parara, &i__1, &length) != 0 && lprivd) {
	debug = TRUE_;
    }
/* ***	DEFINED KINDS OF CRAFT AND THEIR POWERS ARE: */

/* ***	KIND	MAXSPEED	TYPE		WEAPONS */
/* ***	1	10		BATTLESHIP (2*GS, 20TRP, 20DC, 10MIS) */
/* ***	2	20		SUBMARINE  (20TRP, 5MIS) */
/* ***	3	30		DESTROYER  (1G, 20DC, 5MIS, 5MIN) */
/* ***	4	40		P.T. BOAT  (1G, 4TRP) */
/* ***	5	50		HELICOPTER (1G, 15MIS) */

/*< 	if(iserch(parara,isxbit('BATTLE~'),length).ne.0) kind = 1 >*/
    i__1 = isxbit_("BATTLE~", (ftnlen)7);
    if (iserch_(parara, &i__1, &length) != 0) {
	kind = 1;
    }
/*< 	if(iserch(parara,isxbit('SUBMAR~'),length).ne.0) kind = 2 >*/
    i__1 = isxbit_("SUBMAR~", (ftnlen)7);
    if (iserch_(parara, &i__1, &length) != 0) {
	kind = 2;
    }
/*< 	if(iserch(parara,isxbit('DESTRO~'),length).ne.0) kind = 3 >*/
    i__1 = isxbit_("DESTRO~", (ftnlen)7);
    if (iserch_(parara, &i__1, &length) != 0) {
	kind = 3;
    }
/*< 	if(iserch(parara,isxbit('PT~'),length).ne.0) kind = 4 >*/
    i__1 = isxbit_("PT~", (ftnlen)3);
    if (iserch_(parara, &i__1, &length) != 0) {
	kind = 4;
    }
/*< 	if(iserch(parara,isxbit('HELICO~'),length).ne.0) kind = 5 >*/
    i__1 = isxbit_("HELICO~", (ftnlen)7);
    if (iserch_(parara, &i__1, &length) != 0) {
	kind = 5;
    }
/*< 	if(iserch(parara,isxbit('PORT~'),length).ne.0)selprt = .true. >*/
    i__1 = isxbit_("PORT~", (ftnlen)5);
    if (iserch_(parara, &i__1, &length) != 0) {
	selprt = TRUE_;
    }
/*< 100	continue ! call ctrap >*/
L100:
/* 	call nowait */
/*< 	call check( iniflg ) >*/
    check_(&iniflg);
/*< 	if( .not. iniflg ) goto 150 >*/
    if (! iniflg) {
	goto L150;
    }
/*< 	continue ! call ctrap >*/
/* 	call string(1,'^M^JPlease wait for initialization^M^J^E') */
/*< 	call initdb( debug, wannam ) >*/
    initdb_(&debug, &wannam);

/*< 150	notfrs = .false. >*/
L150:
    notfrs = FALSE_;
/*< 	call getval(5, 0,1175,  4, 1, ival ) >*/
    getval_(&c__5, &c__0, &c__1175, &c__4, &c__1, &ival);
/*< 	if(ival.eq.0 .or. ipn.eq.7963 ) goto 201 >*/
    if (ival == 0 || ipn == 7963) {
	goto L201;
    }
/*< 	do 200 i = 1, ival >*/
    i__1 = ival;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call getval(5, 0,1178,  4, i+1, icpn ) >*/
	i__2 = i__ + 1;
	getval_(&c__5, &c__0, &c__1178, &c__4, &i__2, &icpn);
/*< 	    if( icpn .eq. ipn ) notfrs = .true. >*/
	if (icpn == ipn) {
	    notfrs = TRUE_;
	}
/*< 200	continue >*/
/* L200: */
    }
/*< 201	continue >*/
L201:

/*< 	call ofile( 1, isxbit('TTY~'), 8 ) >*/
    i__1 = isxbit_("TTY~", (ftnlen)4);
    ofile_(&c__1, &i__1, &c__8);
/*< 	if( lerror(0) )  return >*/
    if (lerror_(&c__0)) {
	return 0;
    }
/*< 	call select( 1 ) >*/
    select_(&c__1);

/* ***	IF THE USER WANTS A MAP, GIVE IT TO HIM */

/*< 	call enable >*/
    enable_();
/*< 	if( wanmap ) call map >*/
    if (wanmap) {
	map_();
    }

/* ***	SET UP USER'S PORT OR ASK HIM WHO'S SIDE HE'S ON */

/*< 	if( selprt ) goto 210 >*/
    if (selprt) {
	goto L210;
    }
/*< 	call getval(6, 0,1195,  3, 1, 5, ip1 ) >*/
    getval_(&c__6, &c__0, &c__1195, &c__3, &c__1, &c__5, &ip1);
/*< 	call getval(6, 0,1196,  3, 2, 5, ip2 ) >*/
    getval_(&c__6, &c__0, &c__1196, &c__3, &c__2, &c__5, &ip2);
/*< 	if( ip1 .lt. ip2 )  iport = 1 >*/
    if (ip1 < ip2) {
	iport = 1;
    }
/*< 	if( ip2 .lt. ip1 )  iport = 2 >*/
    if (ip2 < ip1) {
	iport = 2;
    }
/*< 	if( ip1 .eq. ip2 )  iport = iran( 2 ) >*/
    if (ip1 == ip2) {
	iport = iran_(&c__2);
    }
/*< 	goto 290 >*/
    goto L290;

/*< 210	call string(1,'1: ^E') >*/
L210:
    string_(&c__1, "1: ^E", (ftnlen)5);
/*< 	call getval(6, 0,1203,  3, 1, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__1203, &c__3, &c__1, &c__1, stname);
/*< 	call getval(6, 0,1204,  3, 1, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__1204, &c__3, &c__1, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call crlf >*/
    crlf_();
/*< 	do 220 itemp = 1, 26 >*/
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,1209,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1209, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 220 >*/
	if (ival == 0) {
	    goto L220;
	}
/*< 	    call getval(6, 0,1211,  2, i, 9, ival ) >*/
	getval_(&c__6, &c__0, &c__1211, &c__2, &i__, &c__9, &ival);
/*< 	    if( ival .eq. 1 ) call who(i) >*/
	if (ival == 1) {
	    who_(&i__);
	}
/*< 220	continue >*/
L220:
	;
    }

/*< 	call string(1,'2: ^E') >*/
    string_(&c__1, "2: ^E", (ftnlen)5);
/*< 	call getval(6, 0,1216,  3, 2, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__1216, &c__3, &c__2, &c__1, stname);
/*< 	call getval(6, 0,1217,  3, 2, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__1217, &c__3, &c__2, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call crlf >*/
    crlf_();
/*< 	do 230 itemp = 1, 26 >*/
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,1222,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1222, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 230 >*/
	if (ival == 0) {
	    goto L230;
	}
/*< 	    call getval(6, 0,1224,  2, i, 9, ival ) >*/
	getval_(&c__6, &c__0, &c__1224, &c__2, &i__, &c__9, &ival);
/*< 	    if( ival .eq. 2 ) call who(i) >*/
	if (ival == 2) {
	    who_(&i__);
	}
/*< 230	continue >*/
L230:
	;
    }

/*< 240	call string(1,'^MPort (1 or 2):        ^MPort (1 or 2): ^E') >*/
L240:
    string_(&c__1, "^MPort (1 or 2):        ^MPort (1 or 2): ^E", (ftnlen)43);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	call chrwat( iport ) >*/
    chrwat_(&iport);
/*< 	iport = iport - 48 >*/
    iport += -48;
/*< 	if( iport .ne. 1 .and. iport .ne. 2 ) goto 240 >*/
    if (iport != 1 && iport != 2) {
	goto L240;
    }
/*< 	call crlf >*/
    crlf_();

/* ***	IF USER HASN'T CHOSEN HIS TYPE OF SHIP, ASK HIM */

/*< 290	if( notfrs ) kind = 5 >*/
L290:
    if (notfrs) {
	kind = 5;
    }
/*< 	if( kind .ne. 0 ) goto 400 >*/
    if (kind != 0) {
	goto L400;
    }
/*< 	do 300 itemp = 1, 5 >*/
    for (itemp = 1; itemp <= 5; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call number(1, i ) >*/
	number_(&c__1, &i__);
/*< 	    call string(1,': ^E') >*/
	string_(&c__1, ": ^E", (ftnlen)4);
/*< 	    call pkind( i ) >*/
	pkind_(&i__);
/*< 	    call crlf >*/
	crlf_();
/*< 300	continue >*/
/* L300: */
    }
/*< 301	continue >*/
L301:
/*< 	call  >*/
    string_(&c__1, "^MEnter ship type ( 1, 2, 3, 4 or 5 ):        ^MEnter sh\
ip type ( 1, 2, 3, 4 or 5 ): ^E", (ftnlen)87);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	call chrwat( kind ) >*/
    chrwat_(&kind);
/*< 	kind = kind - 48 >*/
    kind += -48;
/*< 	if( kind .gt. 5 .or. kind .lt. 1 ) goto 301 >*/
    if (kind > 5 || kind < 1) {
	goto L301;
    }
/*< 	call crlf >*/
    crlf_();

/* ***	GET SHIP'S NAME */

/*< 400	call pkind( kind ) >*/
L400:
    pkind_(&kind);
/*< 	call string(1,'''s name: ^E') >*/
    string_(&c__1, "'s name: ^E", (ftnlen)11);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	call getstr(3, comara, 12, length ) >*/
    getstr_(&c__3, comara, &c__12, &length);
/*< 	call convrt( comara, 12, 1, stname, 6 ) >*/
    convrt_(comara, &c__12, &c__1, stname, &c__6);
/*< 	do 500 itemp = 1, 26 >*/
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,1264,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1264, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 500 >*/
	if (ival == 0) {
	    goto L500;
	}
/*< 	    call getval(6, 0,1266,  2, i, 5, name1 ) >*/
	getval_(&c__6, &c__0, &c__1266, &c__2, &i__, &c__5, &name1);
/*< 	    call getval(6, 0,1267,  2, i, 6, name2 ) >*/
	getval_(&c__6, &c__0, &c__1267, &c__2, &i__, &c__6, &name2);
/*< 	    if(stname(1).ne.name1 .or. stname(2).ne.name2) goto 500 >*/
	if (stname[0] != name1 || stname[1] != name2) {
	    goto L500;
	}
/*< 	    call string(1,'Craft name is already in use.  ^E') >*/
	string_(&c__1, "Craft name is already in use.  ^E", (ftnlen)33);
/*< 	    goto 400 >*/
	goto L400;
/*< 500	continue >*/
L500:
	;
    }

/* ***	GET SHIP'S SCAN CHARACTER */

/*< 600	call string(1,'^MInput character to represent the "^E') >*/
L600:
    string_(&c__1, "^MInput character to represent the \"^E", (ftnlen)38);
/*< 	if( length .gt. 0 )call string(3, comara, 1, length ) >*/
    if (length > 0) {
	string_(&c__3, comara, &c__1, &length);
    }
/*< 	call string(1,'" in scan:    ^E') >*/
    string_(&c__1, "\" in scan:    ^E", (ftnlen)16);
/*< 	call string(1,'^MInput character to represent the "^E') >*/
    string_(&c__1, "^MInput character to represent the \"^E", (ftnlen)38);
/*< 	if( length .gt. 0 ) call string(3, comara, 1, length ) >*/
    if (length > 0) {
	string_(&c__3, comara, &c__1, &length);
    }
/*< 	call string(1,'" in scan: ^E') >*/
    string_(&c__1, "\" in scan: ^E", (ftnlen)13);
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	call chrwat( iplayr ) >*/
    chrwat_(&iplayr);
/*< 	if( iplayr .gt. 91 ) iplayr = iplayr - 32 >*/
    if (iplayr > 91) {
	iplayr += -32;
    }
/*< 	iplayr = iplayr - 64 >*/
    iplayr += -64;
/*< 	if( iplayr .lt. 1 .or. iplayr .gt. 26 ) goto 600 >*/
    if (iplayr < 1 || iplayr > 26) {
	goto L600;
    }
/*< 	call getval(6, 0,1286,  2, iplayr, 1, i ) >*/
    getval_(&c__6, &c__0, &c__1286, &c__2, &iplayr, &c__1, &i__);
/*< 	if( i .ne. 0 ) goto 600 >*/
    if (i__ != 0) {
	goto L600;
    }
/*< 	call crlf >*/
    crlf_();

/*< 	call putval(6, 0,1290,  2, iplayr, 5, stname(1) ) >*/
    putval_(&c__6, &c__0, &c__1290, &c__2, &iplayr, &c__5, stname);
/*< 	call putval(6, 0,1291,  2, iplayr, 6, stname(2) ) >*/
    putval_(&c__6, &c__0, &c__1291, &c__2, &iplayr, &c__6, &stname[1]);
/*< 	call putval(6, 0,1292,  2, iplayr, 1, job(0) ) >*/
    i__1 = job_(&c__0);
    putval_(&c__6, &c__0, &c__1292, &c__2, &iplayr, &c__1, &i__1);
/*< 	call addval(6, 0,1293,  3, iport, 5, 1 ) >*/
    addval_(&c__6, &c__0, &c__1293, &c__3, &iport, &c__5, &c__1);
/*< 	call putval(6, 0,1294,  2, iplayr, 9, iport ) >*/
    putval_(&c__6, &c__0, &c__1294, &c__2, &iplayr, &c__9, &iport);
/*< 	if( kind .lt. 4 ) call putval(5, 0,1295,  5, 4+iport, 1 ) >*/
    if (kind < 4) {
	i__1 = iport + 4;
	putval_(&c__5, &c__0, &c__1295, &c__5, &i__1, &c__1);
    }
/*< 	call putval(6, 0,1296,  2, iplayr, 10, kind ) >*/
    putval_(&c__6, &c__0, &c__1296, &c__2, &iplayr, &c__10, &kind);
/*< 	if( kind .eq. 1 ) imissl = 12 >*/
    if (kind == 1) {
	imissl = 12;
    }
/*< 	if( kind .eq. 4 ) itorp = 4 >*/
    if (kind == 4) {
	itorp = 4;
    }
/*< 	if( kind .eq. 5 ) imissl = 15 >*/
    if (kind == 5) {
	imissl = 15;
    }

/* ***	FIND OUT WHERE THE PORTS ARE */

/*< 	call getval(6, 0,1303,  3, 1, 3, iprtx1 ) >*/
    getval_(&c__6, &c__0, &c__1303, &c__3, &c__1, &c__3, &iprtx1);
/*< 	call getval(6, 0,1304,  3, 1, 4, iprty1 ) >*/
    getval_(&c__6, &c__0, &c__1304, &c__3, &c__1, &c__4, &iprty1);
/*< 	call getval(6, 0,1305,  3, 2, 3, iprtx2 ) >*/
    getval_(&c__6, &c__0, &c__1305, &c__3, &c__2, &c__3, &iprtx2);
/*< 	call getval(6, 0,1306,  3, 2, 4, iprty2 ) >*/
    getval_(&c__6, &c__0, &c__1306, &c__3, &c__2, &c__4, &iprty2);

/* ***	MAKE UP SHIP COORDINATES */

/*< 1000	ishipx = iran( 120 ) >*/
L1000:
    ishipx = iran_(&c__120);
/*< 	ishipy = iran( 120 ) >*/
    ishipy = iran_(&c__120);
/*< 	idepth = 18 >*/
    idepth = 18;
/*< 	if( kind .eq. 2 ) idepth = iran( 17 ) + 1 >*/
    if (kind == 2) {
	idepth = iran_(&c__17) + 1;
    }
/*< 	if( kind .eq. 5 ) idepth = iran( 16 ) + 18 >*/
    if (kind == 5) {
	idepth = iran_(&c__16) + 18;
    }
/*< 	call getval(6, 0,1315,  1, ishipx, ishipy, ival ) >*/
    getval_(&c__6, &c__0, &c__1315, &c__1, &ishipx, &ishipy, &ival);
/*< 	if( ival .ge. idepth ) goto 1000 >*/
    if (ival >= idepth) {
	goto L1000;
    }
/*< 	if((  >*/
/* Computing 2nd power */
    r__1 = ishipx - iprtx2 + (float)0.;
/* Computing 2nd power */
    r__2 = ishipy - iprty2 + (float)0.;
/* Computing 2nd power */
    r__3 = ishipx - iprtx1 + (float)0.;
/* Computing 2nd power */
    r__4 = ishipy - iprty1 + (float)0.;
    if (iport == 1 && sqrt(r__1 * r__1 + r__2 * r__2) <= (float)25. || iport 
	    == 2 && sqrt(r__3 * r__3 + r__4 * r__4) <= (float)25.) {
	goto L1000;
    }
/*< 	shipx = ishipx >*/
    shipx = (real) ishipx;
/*< 	shipy = ishipy >*/
    shipy = (real) ishipy;
/*< 	depth = idepth >*/
    depth = (real) idepth;
/*< 	call addval(4, 0,1325,  -1, iplayr*262144 ) >*/
    i__1 = iplayr << 18;
    addval_(&c__4, &c__0, &c__1325, &c_n1, &i__1);
/*< 	call putval(6, 0,1326,  2, iplayr, 2, ishipx ) >*/
    putval_(&c__6, &c__0, &c__1326, &c__2, &iplayr, &c__2, &ishipx);
/*< 	call putval(6, 0,1327,  2, iplayr, 3, ishipy ) >*/
    putval_(&c__6, &c__0, &c__1327, &c__2, &iplayr, &c__3, &ishipy);
/*< 	call putval(6, 0,1328,  2, iplayr, 4, idepth ) >*/
    putval_(&c__6, &c__0, &c__1328, &c__2, &iplayr, &c__4, &idepth);
/*< 	call putval(6, 0,1329,  2, iplayr, 8, 0 ) >*/
    putval_(&c__6, &c__0, &c__1329, &c__2, &iplayr, &c__8, &c__0);
/*< 	iaz = iran( 360 ) >*/
    iaz = iran_(&c__360);
/*< 	itaz = iaz >*/
    itaz = iaz;

/* ***	SET UP TERMINAL CHARACTERISTICS */

/*< 	call usrset( 1030, 1 ) >*/
    usrset_(&c__1030, &c__1);
/*< 	call usrset( 1045, 0 ) >*/
    usrset_(&c__1045, &c__0);
/*< 	call usrset( 1031, 1 ) >*/
    usrset_(&c__1031, &c__1);
/*< 	call usrset( 1032, 1 ) >*/
    usrset_(&c__1032, &c__1);
/*< 	call usrset( 1041, 0 ) >*/
    usrset_(&c__1041, &c__0);

/* ***	AND SET IT UP SO THE USER CAN ^C OUT IF HE WANTS */

/*< 	continue ! call ctrap >*/
/* 	call cease( ishipx, ishipy, iplayr ) */

/* ************************************* */
/* ***	BEGINNING OF GAME LOOP    **** */
/* ************************************* */

/*< 1100	i >*/
L1100:
    if (igtab_(&c__44, &c__9) * 100 / igtab_(&c__40, &c__9) <= 85 || ipn == 
	    7963) {
	goto L1101;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call colcur( 20, 1 ) >*/
    colcur_(&c__20, &c__1);
/*< 	call string(1,'^I^I** EMERGENCY **^M^J^JCRITICAL:^M^J^J^E') >*/
    string_(&c__1, "^I^I** EMERGENCY **^M^J^JCRITICAL:^M^J^J^E", (ftnlen)42);
/*< 	call  >*/
    string_(&c__1, "As you stare out to sea, you notice a^M^J^Jlarge dotted \
white line labeled \"S T Y X L I N E\".  When^M^J^Jyour vessel crosses it, y\
ou exit to the monitor.^M^J^J^E", (ftnlen)161);
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);

/*< 1101	call usrset( 1048, ttyspd ) >*/
L1101:
    usrset_(&c__1048, &ttyspd);
/*< 	call usrset( 1049, ttyspd ) >*/
    usrset_(&c__1049, &ttyspd);
/*< 	if( ichar .eq. 78 )  call print( kind ) >*/
    if (ichar == 78) {
	print_(&kind);
    }
/*< 	if(damage(5,1).eq.0.and.damage(10,1).eq.0)goto 1103 >*/
    if (damage[4] == 0 && damage[9] == 0) {
	goto L1103;
    }
/*< 	if( .not. atofir .or. kind .ne. 1 ) goto 1103 >*/
    if (! atofir || kind != 1) {
	goto L1103;
    }
/*< 	atofir = .false. >*/
    atofir = FALSE_;

/* ***	CHECK TO SEE IF THE GAME HAS ENDED (A PORT HAS BEEN DESTROYED) */

/*< 1103	call getval(6, 0,1369,  3, iport, 6, ival ) >*/
L1103:
    getval_(&c__6, &c__0, &c__1369, &c__3, &iport, &c__6, &ival);
/*< 	if( ival .lt. 7 ) goto 1200 >*/
    if (ival < 7) {
	goto L1200;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call  >*/
    colstr_(&col_1.iclred, "***** Your port has been destroyed *****^G^E", (
	    ftnlen)44);
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);

/*< 1200	call getval(6, 0,1376,  3, 3-iport, 6, ival ) >*/
L1200:
    i__1 = 3 - iport;
    getval_(&c__6, &c__0, &c__1376, &c__3, &i__1, &c__6, &ival);
/*< 	if( ival .lt. 7 ) goto 1300 >*/
    if (ival < 7) {
	goto L1300;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call  >*/
    colstr_(&col_1.icllbl, "***** The enemy port has been destroyed *****^G^E"
	    , (ftnlen)49);
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);

/* ***	CHECK TO SEE IF ALL THE OPPONENTS ARE GONE */

/*< 1300	call getval(5, 0,1385,  5, 7-iport, ival ) >*/
L1300:
    i__1 = 7 - iport;
    getval_(&c__5, &c__0, &c__1385, &c__5, &i__1, &ival);
/*< 	if( ival .eq. 0 ) goto 1350 >*/
    if (ival == 0) {
	goto L1350;
    }
/*< 	do 1330 itemp = 1, 26 >*/
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,1389,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1389, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 1330 >*/
	if (ival == 0) {
	    goto L1330;
	}
/*< 	    call getval(6, 0,1391,  2, i, 9, ival ) >*/
	getval_(&c__6, &c__0, &c__1391, &c__2, &i__, &c__9, &ival);
/*< 	    if( ival .eq. iport ) goto 1330 >*/
	if (ival == iport) {
	    goto L1330;
	}
/*< 	    call getval(6, 0,1393,  2, i, 10, ival ) >*/
	getval_(&c__6, &c__0, &c__1393, &c__2, &i__, &c__10, &ival);
/*< 	    if( ival .ne. 0 .and. ival .lt. 5 ) goto 1350 >*/
	if (ival != 0 && ival < 5) {
	    goto L1350;
	}
/*< 1330	continue >*/
L1330:
	;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call  >*/
    colstr_(&col_1.icllbl, "*** There are no more major opponents. ***^G^E", (
	    ftnlen)46);
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);

/* ***	IF USER IS DAMAGED BEYOND REPAIR (OR HOPES OF GETTING TO */
/* ***	PORT) DESTROY HIM */

/*< 1350	if( damage(1,1) .eq. -1 .or. damage(2,1) .eq. -1 ) goto 1360 >*/
L1350:
    if (damage[0] == -1 || damage[1] == -1) {
	goto L1360;
    }
/*< 	if( kind .eq. 5 .and. damage(1,1) .ne. 0 ) goto 1360 >*/
    if (kind == 5 && damage[0] != 0) {
	goto L1360;
    }
/*< 	if( k >*/
    if (kind != 2 || damage[9] != -1 && (damage[7] != -1 || damage[8] != -1 ||
	     idepth == 18)) {
	goto L1400;
    }
/*< 1360	call clrlin >*/
L1360:
    clrlin_();
/*< 	call colstr(iclred,'*** Fatal damage to ship.  You lose ***^E') >*/
    colstr_(&col_1.iclred, "*** Fatal damage to ship.  You lose ***^E", (
	    ftnlen)41);
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);

/* ***	CHECK TO SEE IF SHIP WAS HIT BY SOMETHING */

/*< 1400	call getval(6, 0,1415,  2, iplayr, 8, ival ) >*/
L1400:
    getval_(&c__6, &c__0, &c__1415, &c__2, &iplayr, &c__8, &ival);
/*< 	if( ival .eq. 0 ) goto 1500 >*/
    if (ival == 0) {
	goto L1500;
    }
/*< 	call putval(4, 0,1417,  -1, 0 ) >*/
    putval_(&c__4, &c__0, &c__1417, &c_n1, &c__0);
/*< 	call clrlin >*/
    clrlin_();
/*< 	call colstr(iclred,'*** ^E') >*/
    colstr_(&col_1.iclred, "*** ^E", (ftnlen)6);
/*< 	call pkind( kind ) >*/
    pkind_(&kind);
/*< 	call string(1,' struck by a ^E') >*/
    string_(&c__1, " struck by a ^E", (ftnlen)15);
/*< 	if( ival .eq. 5 ) call string(1,'ATS missile^E') >*/
    if (ival == 5) {
	string_(&c__1, "ATS missile^E", (ftnlen)13);
    }
/*< 	if( ival .eq. 10 )  call string(1,'torpedo ***^E') >*/
    if (ival == 10) {
	string_(&c__1, "torpedo ***^E", (ftnlen)13);
    }
/*< 	if( ival .eq. 11 ) call string(1,'shell ***^E') >*/
    if (ival == 11) {
	string_(&c__1, "shell ***^E", (ftnlen)11);
    }
/*< 	if( ival .eq. 15 ) call string(1,'battleship shell ***^E') >*/
    if (ival == 15) {
	string_(&c__1, "battleship shell ***^E", (ftnlen)22);
    }
/*< 	if( ival .eq. 20 )  call string(1,'STP missile ***^E') >*/
    if (ival == 20) {
	string_(&c__1, "STP missile ***^E", (ftnlen)17);
    }
/*< 	call hurt( kind, ihfac, ival, damage ) >*/
    hurt_(&kind, &ihfac, &ival, damage);

/* ***	CHECK TO SEE IF THERE WAS AN EXPLOSION AROUND */

/*< 1500	call getval(5, 0,1431,  5, 1, iex ) >*/
L1500:
    getval_(&c__5, &c__0, &c__1431, &c__5, &c__1, &iex);
/*< 	call getval(5, 0,1432,  5, 2, iey ) >*/
    getval_(&c__5, &c__0, &c__1432, &c__5, &c__2, &iey);
/*< 	call getval(5, 0,1433,  5, 3, ied ) >*/
    getval_(&c__5, &c__0, &c__1433, &c__5, &c__3, &ied);
/*< 	call getval(5, 0,1434,  5, 4, ief ) >*/
    getval_(&c__5, &c__0, &c__1434, &c__5, &c__4, &ief);
/*< 	dist=sqrt((iex-ishipx+0.)**2+(iey-ishipy+0.)**2+(ied-idepth+0.)**2) >*/
/* Computing 2nd power */
    r__2 = iex - ishipx + (float)0.;
/* Computing 2nd power */
    r__3 = iey - ishipy + (float)0.;
    r__1 = r__2 * r__2 + r__3 * r__3;
/* Computing 2nd power */
    r__4 = ied - idepth + (float)0.;
    dist = sqrt(r__1 + r__4 * r__4);
/*< 	if( dist .gt. ief .or. ief .eq. 0 ) goto 1600 >*/
    if (dist > (real) ief || ief == 0) {
	goto L1600;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call colstr(iclred,'*** ^E') >*/
    colstr_(&col_1.iclred, "*** ^E", (ftnlen)6);
/*< 	call pkind( kind ) >*/
    pkind_(&kind);
/*< 	call string(1,' experiences explosive turbulance ***^E') >*/
    string_(&c__1, " experiences explosive turbulance ***^E", (ftnlen)39);
/*< 	call hurt( kind, ihfac, ifix( ief*4./(dist+1.) ), damage ) >*/
    i__1 = (integer) (ief * (float)4. / (dist + (float)1.));
    hurt_(&kind, &ihfac, &i__1, damage);

/* ***	CHECK TO SEE IF THE HULL HAS CRACKED */

/*< 1600	if( ihfac .ge. idfac ) goto 1700 >*/
L1600:
    if (ihfac >= idfac) {
	goto L1700;
    }
/*< 	if( iran( 100*idfac/ihfac ) .lt. 97 ) goto 1700 >*/
    i__1 = idfac * 100 / ihfac;
    if (iran_(&i__1) < 97) {
	goto L1700;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call  >*/
    colstr_(&col_1.iclred, "*** Water pressure has cracked the hull ***^E", (
	    ftnlen)45);
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);

/* ***	MOVE THE SHIP USING HOME MADE TRIGONOMETRY */

/*< 1700	call addval(6, 0,1454,  1, ishipx, ishipy, -iplayr*262144 ) >*/
L1700:
    i__1 = -iplayr << 18;
    addval_(&c__6, &c__0, &c__1454, &c__1, &ishipx, &ishipy, &i__1);
/*< 	oshipx = shipx >*/
    oshipx = shipx;
/*< 	oshipy = shipy >*/
    oshipy = shipy;
/*< 	odepth = depth >*/
    odepth = depth;
/*< 1750	s >*/
L1750:
    r__2 = (real) iaz;
    r__3 = (real) ipitch;
    r__1 = smcos_(&r__2) * cosdeg_(&r__3);
    shipx += r__1 * (real) ispeed / (float)30.;
/*< 	if( shipx .lt. 0.5 .or. shipx .gt. 120.5 ) shipx = oshipx >*/
    if (shipx < (float).5 || shipx > (float)120.5) {
	shipx = oshipx;
    }
/*< 	ishipx = shipx + 0.5 >*/
    ishipx = shipx + (float).5;
/*< 	shipy >*/
    r__2 = (real) iaz;
    r__3 = (real) ipitch;
    r__1 = smsin_(&r__2) * cosdeg_(&r__3);
    shipy += r__1 * (real) ispeed / (float)30.;
/*< 	if( shipy .lt. 0.5 .or. shipy .gt. 120.5 ) shipy = oshipy >*/
    if (shipy < (float).5 || shipy > (float)120.5) {
	shipy = oshipy;
    }
/*< 	ishipy = shipy + 0.5 >*/
    ishipy = shipy + (float).5;
/*< 	depth = depth + sindeg(float(ipitch))*float(ispeed)/30.0 >*/
    r__1 = (real) ipitch;
    depth += sindeg_(&r__1) * (real) ispeed / (float)30.;
/*< 	dfactr = (18.0-16.0*float(ibal)/100.0-depth)*0.014 >*/
    dfactr = ((float)18. - (real) ibal * (float)16. / (float)100. - depth) * (
	    float).014;
/*< 	depth = depth + dfactr >*/
    depth += dfactr;
/*< 	if( kind .eq. 2 .and. depth .gt. 18 ) depth = 18 >*/
    if (kind == 2 && depth > (float)18.) {
	depth = (float)18.;
    }
/*< 	if( kind .eq. 5 .and. depth .gt. 35.5 ) depth = 35.0 >*/
    if (kind == 5 && depth > (float)35.5) {
	depth = (float)35.;
    }
/*< 	if( kind .ne. 2 .and. kind .ne. 5 ) depth = 18 >*/
    if (kind != 2 && kind != 5) {
	depth = (float)18.;
    }
/*< 	idepth = depth + 0.5 >*/
    idepth = depth + (float).5;
/*< 	if( d >*/
    if (damage[8] != 0 || kind != 2) {
	ibal = (depth - (float)18.) * (float)-100. / (float)16.;
    }
/*< 	if( ibal .lt. 0 .and. kind .ne. 5 ) ibal = 0 >*/
    if (ibal < 0 && kind != 5) {
	ibal = 0;
    }

/* ***	CHECK TO SEE IF SHIP HIT SOMETHING */

/*< 	call getval(6, 0,1479,  1, ishipx, ishipy, ival ) >*/
    getval_(&c__6, &c__0, &c__1479, &c__1, &ishipx, &ishipy, &ival);
/*< 	if( k >*/
    if (kind != 5 || idepth > 18 || iright_(&ival) == 18) {
	goto L1760;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call  >*/
    colstr_(&col_1.iclred, "*** Helicopter has hit water and sunk ***^E", (
	    ftnlen)43);
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);

/*< 1760	i >*/
L1760:
    if (ileft_(&ival) != 0 && iright_(&ival) < idepth) {
	goto L2100;
    }
/*< 	if( iright(ival) .lt. idepth ) goto 2200 >*/
    if (iright_(&ival) < idepth) {
	goto L2200;
    }

/* ***	HE EITHER HIT A ROCK OR HE IS DOCKING */

/*< 	idock >*/
    idock = ispeed > 0 && ispeed < 6 && (ishipx == iprtx1 && ishipy == iprty1 
	    || ishipx == iprtx2 && ishipy == iprty2);
/*< 	if( .not. idock ) goto 1762 >*/
    if (! idock) {
	goto L1762;
    }
/*< 	iaz = iaz + 180 >*/
    iaz += 180;
/*< 	if( iaz .gt. 359 ) iaz = iaz - 360 >*/
    if (iaz > 359) {
	iaz += -360;
    }
/*< 	itaz = iaz >*/
    itaz = iaz;
/*< 1762	i >*/
L1762:
    if (! idock) {
	i__1 = abs(ispeed) - (integer) (dfactr * (float)200.);
	hurt_(&kind, &ihfac, &i__1, damage);
    }
/*< 	shipx = oshipx >*/
    shipx = oshipx;
/*< 	ishipx = shipx + .5 >*/
    ishipx = shipx + (float).5;
/*< 	shipy = oshipy >*/
    shipy = oshipy;
/*< 	ishipy = shipy + .5 >*/
    ishipy = shipy + (float).5;
/*< 	if( kind .eq. 5 .and. odepth .lt. 18.9 ) odepth = 19. >*/
    if (kind == 5 && odepth < (float)18.9) {
	odepth = (float)19.;
    }
/*< 	depth = odepth >*/
    depth = odepth;
/*< 	idepth = depth + 0.5 >*/
    idepth = depth + (float).5;
/*< 	ibal = -100.*(depth-18.)/16. >*/
    ibal = (depth - (float)18.) * (float)-100. / (float)16.;
/*< 	ispeed = 0 >*/
    ispeed = 0;
/*< 	itspd = 0 >*/
    itspd = 0;
/*< 	call clrlin >*/
    clrlin_();
/*< 	if( idock ) goto 1800 >*/
    if (idock) {
	goto L1800;
    }
/*< 	call colstr(iclred,'*** ^E') >*/
    colstr_(&col_1.iclred, "*** ^E", (ftnlen)6);
/*< 	call pkind( kind ) >*/
    pkind_(&kind);
/*< 	call string(1,' hits a rock ***^E') >*/
    string_(&c__1, " hits a rock ***^E", (ftnlen)18);
/*< 	goto 2200 >*/
    goto L2200;

/* ***	IF USER IS IN OPPONENTS PORT, DEFECT HIM */

/*< 1800	i >*/
L1800:
    if (iport == 1 && (i__1 = ishipx - iprtx1, abs(i__1)) < 2 && (i__2 = 
	    ishipy - iprty1, abs(i__2)) < 2 || iport == 2 && (i__3 = ishipx - 
	    iprtx2, abs(i__3)) < 2 && (i__4 = ishipy - iprty2, abs(i__4)) < 2)
	     {
	goto L1900;
    }
/*< 	idfect = idfect + 1 >*/
    ++idfect;
/*< 	if( idfect .gt. 1 ) goto 9100 >*/
    if (idfect > 1) {
	goto L9100;
    }
/*< 	call colstr(iclred,'*** You have defected ^E') >*/
    colstr_(&col_1.iclred, "*** You have defected ^E", (ftnlen)24);
/*< 	call addval(6, 0,1529,  3, iport, 5, -1 ) >*/
    addval_(&c__6, &c__0, &c__1529, &c__3, &iport, &c__5, &c_n1);
/*< 	iport =3-iport >*/
    iport = 3 - iport;
/*< 	call addval(6, 0,1531,  3, iport, 5, 1 ) >*/
    addval_(&c__6, &c__0, &c__1531, &c__3, &iport, &c__5, &c__1);
/*< 	call putval(6, 0,1532,  2, iplayr, 9, iport ) >*/
    putval_(&c__6, &c__0, &c__1532, &c__2, &iplayr, &c__9, &iport);

/* ***	IF CRAFT IS IN PORT, REPAIR AND RESUPPLY SHIP */

/*< 1900	if( nkind .eq. 0 ) goto 1902 >*/
L1900:
    if (nkind == 0) {
	goto L1902;
    }
/*< 	kind = nkind >*/
    kind = nkind;
/*< 	call print( kind ) >*/
    print_(&kind);
/*< 	ichar = 78 >*/
    ichar = 78;
/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 1902	call putval(6, 0,1541,  2, iplayr, 10, kind ) >*/
L1902:
    putval_(&c__6, &c__0, &c__1541, &c__2, &iplayr, &c__10, &kind);
/*< 	call colstr(icllbl,'*** ^E') >*/
    colstr_(&col_1.icllbl, "*** ^E", (ftnlen)6);
/*< 	call pkind( kind ) >*/
    pkind_(&kind);
/*< 	call string(1,' is in port ***^E') >*/
    string_(&c__1, " is in port ***^E", (ftnlen)17);
/*< 	call getval(6, 0,1545,  3, iport, 6, ival ) >*/
    getval_(&c__6, &c__0, &c__1545, &c__3, &iport, &c__6, &ival);
/*< 	if( ival .ge. 2 ) goto 2200 >*/
    if (ival >= 2) {
	goto L2200;
    }
/*< 	call string(1,' Supplies boarding ***^E') >*/
    string_(&c__1, " Supplies boarding ***^E", (ftnlen)24);
/*< 	itorp = 20 >*/
    itorp = 20;
/*< 	if( kind .eq. 4 ) itorp = 4 >*/
    if (kind == 4) {
	itorp = 4;
    }
/*< 	imissl = 5 >*/
    imissl = 5;
/*< 	if( kind .eq. 1 ) imissl = 12 >*/
    if (kind == 1) {
	imissl = 12;
    }
/*< 	if( kind .eq. 5 ) imissl = 15 >*/
    if (kind == 5) {
	imissl = 15;
    }
/*< 	idc = 20 >*/
    idc = 20;
/*< 	imine = 10 >*/
    imine = 10;
/*< 	do 2000 i = 1, 10 >*/
    for (i__ = 1; i__ <= 10; ++i__) {
/*< 	    damage( i, 1 ) = 0 >*/
	damage[i__ - 1] = 0;
/*< 2000	continue >*/
/* L2000: */
    }
/*< 	ihfac = 100 >*/
    ihfac = 100;
/*< 	goto 2200 >*/
    goto L2200;

/* ***	****** KLUGE ****** SHIP CANNOT BE AT SAME X-Y AS ANOTHER */
/* ***	SHIP.  ( UNFORTUNATE RESULT OF 2-DIMENSIONAL ARRAYS ) */

/*< 2100	if( ileft( ival ) .gt. 26 ) goto 2150 >*/
L2100:
    if (ileft_(&ival) > 26) {
	goto L2150;
    }
/*< 	call getval(6, 0,1565,  2, ileft( ival ), 4, itdep ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__1565, &c__2, &i__1, &c__4, &itdep);
/*< 	if( itdep .ne. idepth ) goto 1750 >*/
    if (itdep != idepth) {
	goto L1750;
    }

/*< 	call hurt( kind,ihfac,iabs(ispeed)-ifix(dfactr*200.),damage ) >*/
    i__1 = abs(ispeed) - (integer) (dfactr * (float)200.);
    hurt_(&kind, &ihfac, &i__1, damage);
/*< 	shipx = oshipx >*/
    shipx = oshipx;
/*< 	ishipx = shipx + .5 >*/
    ishipx = shipx + (float).5;
/*< 	shipy = oshipy >*/
    shipy = oshipy;
/*< 	ishipy = shipy + .5 >*/
    ishipy = shipy + (float).5;
/*< 	depth = odepth >*/
    depth = odepth;
/*< 	idepth = depth + 0.5 >*/
    idepth = depth + (float).5;
/*< 	ibal = -100.*(depth-18.)/16. >*/
    ibal = (depth - (float)18.) * (float)-100. / (float)16.;
/*< 	ispeed = 0 >*/
    ispeed = 0;
/*< 	itspd = 0 >*/
    itspd = 0;
/*< 	call clrlin >*/
    clrlin_();
/*< 	call string(1,'Collision with the ^E') >*/
    string_(&c__1, "Collision with the ^E", (ftnlen)21);
/*< 	call getval(6, 0,1580,  2, ileft( ival ), 5, stname(1) ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__1580, &c__2, &i__1, &c__5, stname);
/*< 	call getval(6, 0,1581,  2, ileft( ival ), 6, stname(2) ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__1581, &c__2, &i__1, &c__6, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	goto 1750 >*/
    goto L1750;

/*< 2150	if( idepth .gt. 18 ) goto 1750 >*/
L2150:
    if (idepth > 18) {
	goto L1750;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call colstr(iclred,'*** ^E') >*/
    colstr_(&col_1.iclred, "*** ^E", (ftnlen)6);
/*< 	call pkind( kind ) >*/
    pkind_(&kind);
/*< 	call string(1,' has hit a mine ***^E') >*/
    string_(&c__1, " has hit a mine ***^E", (ftnlen)21);
/*< 	call explod( ishipx, ishipy, 18, 5, iexflg ) >*/
    explod_(&ishipx, &ishipy, &c__18, &c__5, &iexflg);
/*< 	call putval(6, 0,1591,  1, ishipx, ishipy, iright( ival ) ) >*/
    i__1 = iright_(&ival);
    putval_(&c__6, &c__0, &c__1591, &c__1, &ishipx, &ishipy, &i__1);

/* ***	PLACE SHIP IN HISEGMENT */

/*< 2200	call addval(6, 0,1595,  1, ishipx, ishipy, iplayr*262144 ) >*/
L2200:
    i__1 = iplayr << 18;
    addval_(&c__6, &c__0, &c__1595, &c__1, &ishipx, &ishipy, &i__1);
/*< 	if( k >*/
    if (kind < 5) {
	i__1 = abs(ispeed) * 5000 / kind + 100;
	putval_(&c__6, &c__0, &c__1597, &c__2, &iplayr, &c__7, &i__1);
    }
/*< 	if(kind.eq.5)call putval(6, 0,1598, 2,iplayr,7,iabs(ispeed)/10+1) >*/
    if (kind == 5) {
	i__1 = abs(ispeed) / 10 + 1;
	putval_(&c__6, &c__0, &c__1598, &c__2, &iplayr, &c__7, &i__1);
    }
/*< 	call putval(6, 0,1599,  2, iplayr, 2, ishipx ) >*/
    putval_(&c__6, &c__0, &c__1599, &c__2, &iplayr, &c__2, &ishipx);
/*< 	call putval(6, 0,1600,  2, iplayr, 3, ishipy ) >*/
    putval_(&c__6, &c__0, &c__1600, &c__2, &iplayr, &c__3, &ishipy);
/*< 	call putval(6, 0,1601,  2, iplayr, 4, idepth ) >*/
    putval_(&c__6, &c__0, &c__1601, &c__2, &iplayr, &c__4, &idepth);

/* ***	CHECK TO SEE IF SHIP WAS HIT BY A PORT-TO-SHIP MISSILE */

/*< 	if( i >*/
    if (iport == 1) {
/* Computing 2nd power */
	r__1 = ishipx - iprtx2 + (float)0.;
/* Computing 2nd power */
	r__2 = ishipy - iprty2 + (float)0.;
	idist = sqrt(r__1 * r__1 + r__2 * r__2);
    }
/*< 	if( i >*/
    if (iport == 2) {
/* Computing 2nd power */
	r__1 = ishipx - iprtx1 + (float)0.;
/* Computing 2nd power */
	r__2 = ishipy - iprty1 + (float)0.;
	idist = sqrt(r__1 * r__1 + r__2 * r__2);
    }
/*< 	if( idist .ge. 25 ) goto 2300 >*/
    if (idist >= 25) {
	goto L2300;
    }
/*< 	if( idepth .lt. 18 ) idist = idist ** ( 19-idepth ) >*/
    if (idepth < 18) {
	i__1 = 19 - idepth;
	idist = pow_ii(&idist, &i__1);
    }
/*< 	call getval(6, 0,1611,  3, 3-iport, 6, ival ) >*/
    i__1 = 3 - iport;
    getval_(&c__6, &c__0, &c__1611, &c__3, &i__1, &c__6, &ival);
/*< 	if( ival .ge. 5 .or. iran(idist*3) .ne. 1 ) goto 2300 >*/
    i__1 = idist * 3;
    if (ival >= 5 || iran_(&i__1) != 1) {
	goto L2300;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call colstr(iclred,'*** Ship hit by PTS missile ***^E') >*/
    colstr_(&col_1.iclred, "*** Ship hit by PTS missile ***^E", (ftnlen)33);
/*< 	call hurt( kind, ihfac, 15, damage ) >*/
    hurt_(&kind, &ihfac, &c__15, damage);

/* ***	INCREMENT TORPEDO & TIME COUNTERS */

/*< 2300	i >*/
L2300:
    if (i1torp > 0 && damage[4] == 0) {
	--i1torp;
    }
/*< 	if( i >*/
    if (i2torp > 0 && damage[5] == 0) {
	--i2torp;
    }
/*< 	iturn = iturn + 1 >*/
    ++iturn;
/*< 	iexflg = iexflg - 1 >*/
    --iexflg;
/*< 	if( iexflg .eq. 0 ) call putval(5, 0,1625,  5, 4, 0 ) >*/
    if (iexflg == 0) {
	putval_(&c__5, &c__0, &c__1625, &c__5, &c__4, &c__0);
    }
/*< 2400	if( iturn .ne. 15 ) goto 2501 >*/
/* L2400: */
    if (iturn != 15) {
	goto L2501;
    }
/*< 	iturn = 0 >*/
    iturn = 0;
/*< 	eot = .not. ( eot ) >*/
    eot = ! eot;

/* ***	IF THE SECOND HAND IS ON THE ZERO, DECREMENT DAMAGE */
/* ***	(INCIDENTLY, THERE ARE 15 SECONDS TO A MINUTE AROUND HERE) */

/*< 	do 2500 i = 1, 10 >*/
    for (i__ = 1; i__ <= 10; ++i__) {
/*< 	    i >*/
	if (damage[i__ - 1] > 0) {
	    --damage[i__ - 1];
	}
/*< 2500	continue >*/
/* L2500: */
    }
/*< 2501	continue >*/
L2501:

/* ***	UPDATE SPEED, AZIMUTH & PITCH INCREMENTS */

/*< 	if( ispeed .gt. itspd )  ispeed = ispeed - kind >*/
    if (ispeed > itspd) {
	ispeed -= kind;
    }
/*< 	if( ispeed .lt. itspd )  ispeed = ispeed + kind >*/
    if (ispeed < itspd) {
	ispeed += kind;
    }
/*< 	if( iabs(ispeed-itspd) .lt. kind ) ispeed = itspd >*/
    if ((i__1 = ispeed - itspd, abs(i__1)) < kind) {
	ispeed = itspd;
    }
/*< 	inc = 2**kind >*/
    inc = pow_ii(&c__2, &kind);
/*< 	if( ispeed .eq. 0 .and. kind .ne. 5 ) inc = 0 >*/
    if (ispeed == 0 && kind != 5) {
	inc = 0;
    }
/*< 	if( . >*/
    if (! (itaz - iaz > 0 && itaz - iaz < 180 || itaz - iaz > -360 && itaz - 
	    iaz < -180)) {
	inc = -inc;
    }
/*< 	iaz = iaz + inc >*/
    iaz += inc;
/*< 	iaz = mod( iaz, 360 ) >*/
    iaz %= 360;
/*< 	if( iaz .lt. 0 )  iaz = iaz + 360 >*/
    if (iaz < 0) {
	iaz += 360;
    }
/*< 	if(ia >*/
    if ((i__1 = iaz - itaz, abs(i__1)) < abs(inc) + 1 || (i__2 = iaz - 360 - 
	    itaz, abs(i__2)) < abs(inc) + 1) {
	iaz = itaz;
    }
/*< 	inc = 0 >*/
    inc = 0;
/*< 	if( kind .eq. 2 .and. ispeed .ne. 0 ) inc = 10 >*/
    if (kind == 2 && ispeed != 0) {
	inc = 10;
    }
/*< 	if( kind .eq. 5 ) inc = 20 >*/
    if (kind == 5) {
	inc = 20;
    }
/*< 	if( ipitch .lt. itptch ) ipitch = ipitch + inc >*/
    if (ipitch < itptch) {
	ipitch += inc;
    }
/*< 	if( ipitch .gt. itptch ) ipitch = ipitch - inc >*/
    if (ipitch > itptch) {
	ipitch -= inc;
    }
/*< 	if( iabs(ipitch-itptch) .lt. inc ) ipitch = itptch >*/
    if ((i__1 = ipitch - itptch, abs(i__1)) < inc) {
	ipitch = itptch;
    }

/* ***	GET ANY MESSAGES FOR THE SHIP */

/*< 	call getval(5, 0,1662,  6, 1, ival ) >*/
    getval_(&c__5, &c__0, &c__1662, &c__6, &c__1, &ival);
/*< 	if( ival .ne. iplayr ) goto 2700 >*/
    if (ival != iplayr) {
	goto L2700;
    }
/*< 	call lock >*/
    lock_();
/*< 	call putval(4, 0,1665,  -6, 0 ) >*/
    putval_(&c__4, &c__0, &c__1665, &c_n6, &c__0);
/*< 	call clrlin >*/
    clrlin_();
/*< 	call getval(5, 0,1667,  6, 3, ival ) >*/
    getval_(&c__5, &c__0, &c__1667, &c__6, &c__3, &ival);
/*< 	call chrout( ival+64 ) >*/
    i__1 = ival + 64;
    chrout_(&i__1);
/*< 	call string(1,': - ^G^E') >*/
    string_(&c__1, ": - ^G^E", (ftnlen)8);
/*< 	call getval(5, 0,1670,  6, 2, ival ) >*/
    getval_(&c__5, &c__0, &c__1670, &c__6, &c__2, &ival);
/*< 	if( ival .eq. 0 ) goto 2601 >*/
    if (ival == 0) {
	goto L2601;
    }
/*< 	do 2600 i = 1, ival >*/
    i__1 = ival;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call getval(5, 0,1673,  6, i+3, icchar ) >*/
	i__2 = i__ + 3;
	getval_(&c__5, &c__0, &c__1673, &c__6, &i__2, &icchar);
/*< 	    call chrout( icchar ) >*/
	chrout_(&icchar);
/*< 2600	continue >*/
/* L2600: */
    }
/*< 2601	continue >*/
L2601:
/*< 	call unlock >*/
    unlock_();

/* ***	DECREMENT HULL-STRESS FACTOR IF DEEP (SUBMARINE) */

/*< 2700	i >*/
L2700:
    if (idepth < 5 && ihfac != 100) {
	ihfac = ihfac - 5 + idepth;
    }
/*< 	if( ihfac .lt. 0 )  ihfac = 0 >*/
    if (ihfac < 0) {
	ihfac = 0;
    }
/*< 	idfac = (18.0-depth) * 5.0 >*/
    idfac = ((float)18. - depth) * (float)5.;
/*< 	if( idfac .lt. 0 )  idfac = 0 >*/
    if (idfac < 0) {
	idfac = 0;
    }

/* ******************************************************** */
/* ***	UPDATE ALL SENSORS AND SCREEN INFORMATION    **** */
/* ******************************************************** */

/* ***	UPDATE TIME OF DAY */

/*< 	call datime( i, i, i, ihour, imin, isec, i ) >*/
    datime_(&i__, &i__, &i__, &ihour, &imin, &isec, &i__);
/*< 	call colcur( 70, 24 ) >*/
    colcur_(&c__70, &c__24);
/*< 	call number(2, ihour, -2 ) >*/
    number_(&c__2, &ihour, &c_n2);
/*< 	call chrout(58) >*/
    chrout_(&c__58);
/*< 	call number(2, imin, -2 ) >*/
    number_(&c__2, &imin, &c_n2);
/*< 	call chrout(58) >*/
    chrout_(&c__58);
/*< 	call number(2, isec, -2 ) >*/
    number_(&c__2, &isec, &c_n2);

/* ***	UPDATE SECTOR (X) */

/*< 	if( ishipx .eq. ioshpx .and. ichar .ne. 78 ) goto 2800 >*/
    if (ishipx == ioshpx && ichar != 78) {
	goto L2800;
    }
/*< 	call colcur( 72, 23 ) >*/
    colcur_(&c__72, &c__23);
/*< 	call number(2, ishipx, -3 ) >*/
    number_(&c__2, &ishipx, &c_n3);
/*< 	ioshpx = ishipx >*/
    ioshpx = ishipx;

/* ***	UPDATE SECTOR (Y) */

/*< 2800	if( ishipy .eq. ioshpy .and. ichar .ne. 78 ) goto 2900 >*/
L2800:
    if (ishipy == ioshpy && ichar != 78) {
	goto L2900;
    }
/*< 	call colcur( 76, 23 ) >*/
    colcur_(&c__76, &c__23);
/*< 	call number(2, ishipy, -3 ) >*/
    number_(&c__2, &ishipy, &c_n3);
/*< 	ioshpy = ishipy >*/
    ioshpy = ishipy;

/* ***	UPDATE DEPTH (SUBMARINE,HELICOPTER) */

/*< 2900	i >*/
L2900:
    if (idepth == iodep && ichar != 78 || kind != 2 && kind != 5) {
	goto L3000;
    }
/*< 	if( kind .eq. 2 ) call colcur( 70, 22 ) >*/
    if (kind == 2) {
	colcur_(&c__70, &c__22);
    }
/*< 	if( kind .eq. 5 ) call colcur( 74, 22 ) >*/
    if (kind == 5) {
	colcur_(&c__74, &c__22);
    }
/*< 	if( kind .eq. 2 ) call number(2, 18-idepth, 4 ) >*/
    if (kind == 2) {
	i__1 = 18 - idepth;
	number_(&c__2, &i__1, &c__4);
    }
/*< 	if( kind .eq. 5 ) call number(2, idepth-18, 4 ) >*/
    if (kind == 5) {
	i__1 = idepth - 18;
	number_(&c__2, &i__1, &c__4);
    }
/*< 	iodep = idepth >*/
    iodep = idepth;

/* ***	UPDATE RADAR AND SONAR */

/*< 3000	if( iradr .lt. 0 ) goto 3005 >*/
L3000:
    if (iradr < 0) {
	goto L3005;
    }
/*< 	iradr = iradr + iradnc >*/
    iradr += iradnc;
/*< 	if( iradr .lt. 0 ) iradr = iradr + 360 >*/
    if (iradr < 0) {
	iradr += 360;
    }
/*< 	if( iradr .gt. 360 ) iradr = iradr - 360 >*/
    if (iradr > 360) {
	iradr += -360;
    }
/*< 	if( iradto .lt. 0 .or. iradnc .eq. 0 ) goto 3002 >*/
    if (iradto < 0 || iradnc == 0) {
	goto L3002;
    }
/*< 	if( iabs( iradr-iradto ) .lt. iabs(iradnc) ) iradr = iradto >*/
    if ((i__1 = iradr - iradto, abs(i__1)) < abs(iradnc)) {
	iradr = iradto;
    }
/*< 	if( iabs( iradr-iradto ) .gt. 360-iabs(iradnc) ) iradr = iradto >*/
    if ((i__1 = iradr - iradto, abs(i__1)) > 360 - abs(iradnc)) {
	iradr = iradto;
    }
/*< 	if( iradr .eq. iradto ) iradnc = 0 >*/
    if (iradr == iradto) {
	iradnc = 0;
    }
/*< 3002	call displa(ishipx,ishipy,idepth,iradr,ichar,damage,kind,iport) >*/
L3002:
    displa_(&ishipx, &ishipy, &idepth, &iradr, &ichar, damage, &kind, &iport);
/*< 	goto 3006 >*/
    goto L3006;
/*< 3005	call displa(ishipx,ishipy,idepth,iaz,ichar,damage,kind,iport) >*/
L3005:
    displa_(&ishipx, &ishipy, &idepth, &iaz, &ichar, damage, &kind, &iport);

/* ***	UPDATE SPEED */

/*< 3006	if( ispeed .eq. iosped .and. ichar .ne. 78 ) goto 3100 >*/
L3006:
    if (ispeed == iosped && ichar != 78) {
	goto L3100;
    }
/*< 	call colcur( 71, 21 ) >*/
    colcur_(&c__71, &c__21);
/*< 	call number(2, ispeed, 3 ) >*/
    number_(&c__2, &ispeed, &c__3);
/*< 	iosped = ispeed >*/
    iosped = ispeed;

/* ***	UPDATE DESIRED SPEED */

/*< 3100	if( itspd .eq. iotspd .and. ichar .ne. 78 ) goto 3200 >*/
L3100:
    if (itspd == iotspd && ichar != 78) {
	goto L3200;
    }
/*< 	call colcur( 75, 21 ) >*/
    colcur_(&c__75, &c__21);
/*< 	call number(2, itspd, 3 ) >*/
    number_(&c__2, &itspd, &c__3);
/*< 	iotspd = itspd >*/
    iotspd = itspd;

/* ***	UPDATE AZIMUTH */

/*< 3200	if( iaz .eq. ioaz .and. ichar .ne. 78 ) goto 3300 >*/
L3200:
    if (iaz == ioaz && ichar != 78) {
	goto L3300;
    }
/*< 	call colcur( 73, 20 ) >*/
    colcur_(&c__73, &c__20);
/*< 	call number(2, iaz, 3 ) >*/
    number_(&c__2, &iaz, &c__3);
/*< 	ioaz = iaz >*/
    ioaz = iaz;

/* ***	UPDATE DESIRED AZIMUTH */

/*< 3300	if( itaz .eq. iotaz .and. ichar .ne. 78 ) goto 3400 >*/
L3300:
    if (itaz == iotaz && ichar != 78) {
	goto L3400;
    }
/*< 	call colcur( 77, 20 ) >*/
    colcur_(&c__77, &c__20);
/*< 	call number(2, itaz, 3 ) >*/
    number_(&c__2, &itaz, &c__3);
/*< 	iotaz = itaz >*/
    iotaz = itaz;

/* ***	UPDATE PITCH (SUBMARINE,HELICOPTER) */

/*< 3400	i >*/
L3400:
    if (ipitch == ioptch && ichar != 78 || kind != 2 && kind != 5) {
	goto L3450;
    }
/*< 	call colcur( 71, 19 ) >*/
    colcur_(&c__71, &c__19);
/*< 	call number(2, ipitch, 3 ) >*/
    number_(&c__2, &ipitch, &c__3);
/*< 	ioptch = ipitch >*/
    ioptch = ipitch;

/* ***	UPDATE DESIRED PITCH (SUBMARINE,HELICOPTER) */

/*< 3450	i >*/
L3450:
    if (itptch == iotpch && ichar != 78 || kind != 2 && kind != 5) {
	goto L3500;
    }
/*< 	call colcur( 76, 19 ) >*/
    colcur_(&c__76, &c__19);
/*< 	call number(2, itptch, 3 ) >*/
    number_(&c__2, &itptch, &c__3);
/*< 	iotpch = itptch >*/
    iotpch = itptch;

/* ***	UPDATE MINES (DESTROYER) */

/*< 3500	if((imine.eq.iomine.and.ichar.ne.78).or.kind.ne.3)goto 3550 >*/
L3500:
    if (imine == iomine && ichar != 78 || kind != 3) {
	goto L3550;
    }
/*< 	call colcur( 71, 19 ) >*/
    colcur_(&c__71, &c__19);
/*< 	call number(2, imine, 2 ) >*/
    number_(&c__2, &imine, &c__2);
/*< 	iomine = imine >*/
    iomine = imine;

/* ***	UPDATE BALLAST (SUBMARINE) */

/*< 3550	if((ibal.eq.iobal.and.ichar.ne.78).or.kind.ne.2)goto 3600 >*/
L3550:
    if (ibal == iobal && ichar != 78 || kind != 2) {
	goto L3600;
    }
/*< 	call colcur( 73, 18 ) >*/
    colcur_(&c__73, &c__18);
/*< 	call number(2, ibal, 3 ) >*/
    number_(&c__2, &ibal, &c__3);
/*< 	iobal = ibal >*/
    iobal = ibal;

/* ***	UPDATE DEPTH CHARGES (DESTROYER,BATTLESHIP) */

/*< 3600	i >*/
L3600:
    if (idc == iodc && ichar != 78 || kind != 1 && kind != 3) {
	goto L3650;
    }
/*< 	call colcur( 73, 18 ) >*/
    colcur_(&c__73, &c__18);
/*< 	call number(2, idc, 2 ) >*/
    number_(&c__2, &idc, &c__2);
/*< 	iodc = idc >*/
    iodc = idc;

/* ***	UPDATE MISSILE COUNT (ALL EXCEPT P.T. BOAT) */

/*< 3650	if((imissl.eq.iomssl.and.ichar.ne.78).or.kind.eq.4)goto 3700 >*/
L3650:
    if (imissl == iomssl && ichar != 78 || kind == 4) {
	goto L3700;
    }
/*< 	call colcur( 74, 16 ) >*/
    colcur_(&c__74, &c__16);
/*< 	call number(2, imissl, 2 ) >*/
    number_(&c__2, &imissl, &c__2);
/*< 	iomssl = imissl >*/
    iomssl = imissl;

/* ***	UPDATE TORPEDO COUNT (SUBMARINE,P.T. BOAT) */

/*< 3700	i >*/
L3700:
    if (itorp == iotorp && ichar != 78 || kind != 2 && kind != 4) {
	goto L3750;
    }
/*< 	call colcur( 73, 15 ) >*/
    colcur_(&c__73, &c__15);
/*< 	call number(2, itorp, 3 ) >*/
    number_(&c__2, &itorp, &c__3);
/*< 	iotorp = itorp >*/
    iotorp = itorp;

/* ***	UPDATE AUTO FIRE SURFACE FLAG */

/*< 3750	if((atofir.eq.ofire.and.ichar.ne.78).or.kind.ne.1) goto 3800 >*/
L3750:
    if (atofir == ofire && ichar != 78 || kind != 1) {
	goto L3800;
    }
/*< 	call colcur( 75, 15 ) >*/
    colcur_(&c__75, &c__15);
/*< 	if( atofir ) call string(1,'On ^E') >*/
    if (atofir) {
	string_(&c__1, "On ^E", (ftnlen)5);
    }
/*< 	if( .not. atofir ) call string(1,'Off^E') >*/
    if (! atofir) {
	string_(&c__1, "Off^E", (ftnlen)5);
    }
/*< 	ofire = atofir >*/
    ofire = atofir;

/* ***	UPDATE SOUND LEVEL */

/*< 3800	islvl = 0 >*/
L3800:
    islvl = 0;
/*< 	highst = 0 >*/
    highst = (float)0.;
/*< 	do 3900 itemp = 1, 26 >*/
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,1834,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1834, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 3900 >*/
	if (ival == 0) {
	    goto L3900;
	}
/*< 	    call getval(6, 0,1836,  2, i, 2, isx ) >*/
	getval_(&c__6, &c__0, &c__1836, &c__2, &i__, &c__2, &isx);
/*< 	    call getval(6, 0,1837,  2, i, 3, isy ) >*/
	getval_(&c__6, &c__0, &c__1837, &c__2, &i__, &c__3, &isy);
/*< 	    call getval(6, 0,1838,  2, i, 4, isd ) >*/
	getval_(&c__6, &c__0, &c__1838, &c__2, &i__, &c__4, &isd);
/*< 	    d >*/
/* Computing 2nd power */
	r__2 = ishipx - isx + (float)0.;
/* Computing 2nd power */
	r__3 = ishipy - isy + (float)0.;
	r__1 = r__2 * r__2 + r__3 * r__3;
/* Computing 2nd power */
	r__4 = idepth - isd + (float)0.;
	dist = sqrt(r__1 + r__4 * r__4);
/*< 	    call getval(6, 0,1842,  2, i, 7, ival ) >*/
	getval_(&c__6, &c__0, &c__1842, &c__2, &i__, &c__7, &ival);
/*< 	    sound = float(ival)/((dist+1.)**2) >*/
/* Computing 2nd power */
	r__1 = dist + (float)1.;
	sound = (real) ival / (r__1 * r__1);
/*< 	    islvl = islvl + sound >*/
	islvl += sound;
/*< 	    if( dist .eq. 0 ) goto 3900 >*/
	if (dist == (float)0.) {
	    goto L3900;
	}
/*< 	    i >*/
	if (dist <= (float)5. && atofir && isd >= 18) {
	    putval_(&c__6, &c__0, &c__1847, &c__2, &i__, &c__8, &c__11);
	}
/*< 	    if( sound .le. highst ) goto 3900 >*/
	if (sound <= highst) {
	    goto L3900;
	}
/*< 	    ideg = 90 >*/
	ideg = 90;
/*< 	    if( ishipx .eq. isx .and. isy .lt. ishipy ) ideg = 270 >*/
	if (ishipx == isx && isy < ishipy) {
	    ideg = 270;
	}
/*< 	    i >*/
	if (ishipx != isx) {
	    ideg = atan((ishipy - isy) * (float)1. / ((ishipx - isx) * (float)
		    1.)) * (float)180. / (float)3.14159;
	}
/*< 	    if( ishipx .gt. isx ) ideg = ideg + 180 >*/
	if (ishipx > isx) {
	    ideg += 180;
	}
/*< 	    ideg = mod( ideg, 360 ) >*/
	ideg %= 360;
/*< 	    if( ideg .lt. 0 ) ideg = ideg + 360 >*/
	if (ideg < 0) {
	    ideg += 360;
	}
/*< 	    highst = sound >*/
	highst = sound;
/*< 3900	continue >*/
L3900:
	;
    }
/*< 	if( iabs(ispeed)*2 .ge. ifix(highst)) ideg = 100000 >*/
    if (abs(ispeed) << 1 >= (integer) highst) {
	ideg = 100000;
    }

/*< 	if( islvl .eq. ioslvl .and. ichar .ne. 78 ) goto 3950 >*/
    if (islvl == ioslvl && ichar != 78) {
	goto L3950;
    }
/*< 	call colcur( 69, 17 ) >*/
    colcur_(&c__69, &c__17);
/*< 	call number(2, islvl, 5 ) >*/
    number_(&c__2, &islvl, &c__5);
/*< 	ioslvl = islvl >*/
    ioslvl = islvl;

/*< 3950	if( ideg .eq. iodeg .and. ichar .ne. 78 ) goto 4000 >*/
L3950:
    if (ideg == iodeg && ichar != 78) {
	goto L4000;
    }
/*< 	call colcur( 76, 17 ) >*/
    colcur_(&c__76, &c__17);
/*< 	call number(2, ideg, 3 ) >*/
    number_(&c__2, &ideg, &c__3);
/*< 	iodeg = ideg >*/
    iodeg = ideg;

/* ***	UPDATE HULL-STRESS FACTOR (SUBMARINE) */

/*< 4000	if((ihfac.eq.iohfac.and.ichar.ne.78).or.kind.ne.2)goto 4100 >*/
L4000:
    if (ihfac == iohfac && ichar != 78 || kind != 2) {
	goto L4100;
    }
/*< 	call colcur( 70, 14 ) >*/
    colcur_(&c__70, &c__14);
/*< 	call number(2, ihfac, 3 ) >*/
    number_(&c__2, &ihfac, &c__3);
/*< 	iohfac = ihfac >*/
    iohfac = ihfac;

/* ***	UPDATE STRESS WATER IS EXERTING (SUBMARINE) */

/*< 4100	if((idfac.eq.iodfac.and.ichar.ne.78).or.kind.ne.2)goto 4200 >*/
L4100:
    if (idfac == iodfac && ichar != 78 || kind != 2) {
	goto L4200;
    }
/*< 	call colcur( 71, 13 ) >*/
    colcur_(&c__71, &c__13);
/*< 	call number(2, idfac, 3 ) >*/
    number_(&c__2, &idfac, &c__3);
/*< 	iodfac = idfac >*/
    iodfac = idfac;

/* ***	UPDATE NUMBER OF HITS ON PORT # 1 */

/*< 4200	call getval(6, 0,1886,  3, 1, 6, ipk1 ) >*/
L4200:
    getval_(&c__6, &c__0, &c__1886, &c__3, &c__1, &c__6, &ipk1);
/*< 	if( ipk1 .eq. iopk1 .and. ichar .ne. 78 ) goto 4300 >*/
    if (ipk1 == iopk1 && ichar != 78) {
	goto L4300;
    }
/*< 	call colcur( 79, 11 ) >*/
    colcur_(&c__79, &c__11);
/*< 	call number(2, ipk1, 1 ) >*/
    number_(&c__2, &ipk1, &c__1);
/*< 	if( iport .ne. 1 .or. ipk1 .le. iopk1 ) goto 4250 >*/
    if (iport != 1 || ipk1 <= iopk1) {
	goto L4250;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call colstr(iclred,'*** EMERGENCY:  Port has been hit ***^E') >*/
    colstr_(&col_1.iclred, "*** EMERGENCY:  Port has been hit ***^E", (ftnlen)
	    39);
/*< 4250	iopk1 = ipk1 >*/
L4250:
    iopk1 = ipk1;

/* ***	UPDATE SHIPS BELONGING TO PORT # 1 */

/*< 4300	call getval(6, 0,1897,  3, 1, 5, ip1 ) >*/
L4300:
    getval_(&c__6, &c__0, &c__1897, &c__3, &c__1, &c__5, &ip1);
/*< 	if( ip1 .eq. iop1 .and. ichar .ne. 78 ) goto 4500 >*/
    if (ip1 == iop1 && ichar != 78) {
	goto L4500;
    }
/*< 	call colcur( 64, 10 ) >*/
    colcur_(&c__64, &c__10);
/*< 	do 4400 itemp = 1, 26 >*/
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,1902,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1902, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 4400 >*/
	if (ival == 0) {
	    goto L4400;
	}
/*< 	    call getval(6, 0,1904,  2, i, 9, ival ) >*/
	getval_(&c__6, &c__0, &c__1904, &c__2, &i__, &c__9, &ival);
/*< 	    if( ival .ne. 1 ) goto 4400 >*/
	if (ival != 1) {
	    goto L4400;
	}
/*< 	    call chrout( i+64 ) >*/
	i__1 = i__ + 64;
	chrout_(&i__1);
/*< 4400	continue >*/
L4400:
	;
    }
/*< 	if( ip1 .lt. iop1 )  call string(1,'  ^E') >*/
    if (ip1 < iop1) {
	string_(&c__1, "  ^E", (ftnlen)4);
    }
/*< 	iop1 = ip1 >*/
    iop1 = ip1;

/* ***	UPDATE NUMBER OF HITS ON PORT # 2 */

/*< 4500	call getval(6, 0,1913,  3, 2, 6, ipk2 ) >*/
L4500:
    getval_(&c__6, &c__0, &c__1913, &c__3, &c__2, &c__6, &ipk2);
/*< 	if( ipk2 .eq. iopk2 .and. ichar .ne. 78 ) goto 4600 >*/
    if (ipk2 == iopk2 && ichar != 78) {
	goto L4600;
    }
/*< 	call colcur( 79, 8 ) >*/
    colcur_(&c__79, &c__8);
/*< 	call number(2, ipk2, 1 ) >*/
    number_(&c__2, &ipk2, &c__1);
/*< 	if( iport .ne. 2 .or. ipk1 .le. iopk1 ) goto 4550 >*/
    if (iport != 2 || ipk1 <= iopk1) {
	goto L4550;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call colstr(iclred,'*** EMERGENCY:  Port has been hit ***^E') >*/
    colstr_(&col_1.iclred, "*** EMERGENCY:  Port has been hit ***^E", (ftnlen)
	    39);
/*< 4550	iopk2 = ipk2 >*/
L4550:
    iopk2 = ipk2;

/* ***	UPDATE SHIPS BELONGING TO PORT # 2 */

/*< 4600	call getval(6, 0,1924,  3, 2, 5, ip2 ) >*/
L4600:
    getval_(&c__6, &c__0, &c__1924, &c__3, &c__2, &c__5, &ip2);
/*< 	if( ip2 .eq. iop2 .and. ichar .ne. 78 ) goto 4800 >*/
    if (ip2 == iop2 && ichar != 78) {
	goto L4800;
    }
/*< 	call colcur( 64, 7 ) >*/
    colcur_(&c__64, &c__7);
/*< 	do 4700 itemp = 1, 26 >*/
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,1929,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1929, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 4700 >*/
	if (ival == 0) {
	    goto L4700;
	}
/*< 	    call getval(6, 0,1931,  2, i, 9, ival ) >*/
	getval_(&c__6, &c__0, &c__1931, &c__2, &i__, &c__9, &ival);
/*< 	    if( ival .ne. 2 ) goto 4700 >*/
	if (ival != 2) {
	    goto L4700;
	}
/*< 	    call chrout( i+64 ) >*/
	i__1 = i__ + 64;
	chrout_(&i__1);
/*< 4700	continue >*/
L4700:
	;
    }
/*< 	if( ip2 .lt. iop2 )  call string(1,'  ^E') >*/
    if (ip2 < iop2) {
	string_(&c__1, "  ^E", (ftnlen)4);
    }
/*< 	iop2 = ip2 >*/
    iop2 = ip2;

/* ***	DECREMENT PORT REPAIR STATES IF THIS IS THE LAST JOB PLAYING */

/*< 4800	do 4900 itemp = 1, 26 >*/
L4800:
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,1942,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1942, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 4900 >*/
	if (ival == 0) {
	    goto L4900;
	}
/*< 	    lastjb = i >*/
	lastjb = i__;
/*< 	    if( .not. logdin(ival) ) goto 4850 >*/
	if (! logdin_(&ival)) {
	    goto L4850;
	}
/*< 	    if( job(-1) .eq. 0 ) goto 4900 >*/
	if (job_(&c_n1) == 0) {
	    goto L4900;
	}
/*< 	    if( jstat( ival ) .eq. isxbit('^C~') ) goto 4850 >*/
	if (jstat_(&ival) == isxbit_("^C~", (ftnlen)3)) {
	    goto L4850;
	}
/*< 	    if(	itty( ival ) .ge. 0 ) goto 4900 >*/
	if (itty_(&ival) >= 0) {
	    goto L4900;
	}
/*< 4850	    call endhim( i ) >*/
L4850:
	endhim_(&i__);
/*< 4900	continue >*/
L4900:
	;
    }
/*< 	if( iturn .ne. 0 .or. lastjb .ne. iplayr .or. eot ) goto 5000 >*/
    if (iturn != 0 || lastjb != iplayr || eot) {
	goto L5000;
    }
/*< 	call getval(6, 0,1952,  3, 1, 6, ival ) >*/
    getval_(&c__6, &c__0, &c__1952, &c__3, &c__1, &c__6, &ival);
/*< 	if( ival .ne. 0 )  call addval(4, 0,1953,  -3, -1 ) >*/
    if (ival != 0) {
	addval_(&c__4, &c__0, &c__1953, &c_n3, &c_n1);
    }
/*< 	call getval(6, 0,1954,  3, 2, 6, ival ) >*/
    getval_(&c__6, &c__0, &c__1954, &c__3, &c__2, &c__6, &ival);
/*< 	if( ival .ne. 0 )  call addval(4, 0,1955,  -3, -1 ) >*/
    if (ival != 0) {
	addval_(&c__4, &c__0, &c__1955, &c_n3, &c_n1);
    }

/* ***	UPDATE DAMAGE */

/*< 5000	do 5100 i = 1, 10 >*/
L5000:
    for (i__ = 1; i__ <= 10; ++i__) {
/*< 	    if( kind .eq. 1 .and. (i .eq. 6 .or. i .eq. 9 )) goto 5100 >*/
	if (kind == 1 && (i__ == 6 || i__ == 9)) {
	    goto L5100;
	}
/*< 	    if( kind .eq. 3 .and. (i .eq. 5 .or. i .eq. 6 ) ) goto 5100 >*/
	if (kind == 3 && (i__ == 5 || i__ == 6)) {
	    goto L5100;
	}
/*< 	    if( kind .eq. 4 .and. i .gt. 6 .and. i .lt. 10 ) goto 5100 >*/
	if (kind == 4 && i__ > 6 && i__ < 10) {
	    goto L5100;
	}
/*< 	    i >*/
	if (kind == 5 && i__ != 1 && i__ != 3 && i__ != 4 && i__ != 7 && i__ 
		!= 10) {
	    goto L5100;
	}
/*< 	    if(damage(i,1).eq.damage(i,2) .and. ichar.ne.78)goto 5100 >*/
	if (damage[i__ - 1] == damage[i__ + 9] && ichar != 78) {
	    goto L5100;
	}
/*< 	    call colcur( -2+i*8, 3 ) >*/
	i__1 = (i__ << 3) - 2;
	colcur_(&i__1, &c__3);
/*< 	    if( damage( i, 1 ) .ne. 0 ) goto 5050 >*/
	if (damage[i__ - 1] != 0) {
	    goto L5050;
	}
/*< 	    call pcolor( iclgre ) >*/
	pcolor_(&col_1.iclgre);
/*< 	    call chrout(79) >*/
	chrout_(&c__79);
/*< 	    goto 5090 >*/
	goto L5090;
/*< 5050	    if( damage( i, 1 ) .ne. -1 ) goto 5060 >*/
L5050:
	if (damage[i__ - 1] != -1) {
	    goto L5060;
	}
/*< 	    call pcolor( iclpur ) >*/
	pcolor_(&col_1.iclpur);
/*< 	    call chrout(80) >*/
	chrout_(&c__80);
/*< 	    goto 5090 >*/
	goto L5090;
/*< 5060	    if( damage( i, 1 ) .gt. 1 ) call pcolor( iclred ) >*/
L5060:
	if (damage[i__ - 1] > 1) {
	    pcolor_(&col_1.iclred);
	}
/*< 	    if( damage( i, 1 ) .eq. 1 ) call pcolor( iclyel ) >*/
	if (damage[i__ - 1] == 1) {
	    pcolor_(&col_1.iclyel);
	}
/*< 	    call number(2, damage( i, 1 ), 1 ) >*/
	number_(&c__2, &damage[i__ - 1], &c__1);
/*< 	    goto 5090 >*/
	goto L5090;
/*< 5090	    damage( i, 2 ) = damage( i, 1 ) >*/
L5090:
	damage[i__ + 9] = damage[i__ - 1];
/*< 5100	continue >*/
L5100:
	;
    }

/* ***	UPDATE NUMBER OF SECONDS UNTIL TORPEDOS ARE READY */
/* ***	(SUBMARINE,P.T. BOAT) */

/*< 	if((i >*/
    if (i1torp == io1trp && ichar != 78 || kind != 2 && kind != 4) {
	goto L5200;
    }
/*< 	call colcur( 73, 5 ) >*/
    colcur_(&c__73, &c__5);
/*< 	if( i1torp .gt. 0 )  call number(2, i1torp, 3 ) >*/
    if (i1torp > 0) {
	number_(&c__2, &i1torp, &c__3);
    }
/*< 	if( i1torp .gt. 0 )  call string(1,'  ^E') >*/
    if (i1torp > 0) {
	string_(&c__1, "  ^E", (ftnlen)4);
    }
/*< 	if( i1torp .eq. 0 )  call string(1,'Ready^E') >*/
    if (i1torp == 0) {
	string_(&c__1, "Ready^E", (ftnlen)7);
    }
/*< 	io1trp = i1torp >*/
    io1trp = i1torp;

/*< 5200	i >*/
L5200:
    if (i2torp == io2trp && ichar != 78 || kind != 2 && kind != 4) {
	goto L5300;
    }
/*< 	call colcur( 73, 4 ) >*/
    colcur_(&c__73, &c__4);
/*< 	if( i2torp .gt. 0 )  call number(2, i2torp, 3 ) >*/
    if (i2torp > 0) {
	number_(&c__2, &i2torp, &c__3);
    }
/*< 	if( i2torp .gt. 0 )  call string(1,'  ^E') >*/
    if (i2torp > 0) {
	string_(&c__1, "  ^E", (ftnlen)4);
    }
/*< 	if( i2torp .eq. 0 )  call string(1,'Ready^E') >*/
    if (i2torp == 0) {
	string_(&c__1, "Ready^E", (ftnlen)7);
    }
/*< 	io2trp = i2torp >*/
    io2trp = i2torp;

/* ***	CHECK TO SEE IF THIS JOB IS STILL IN THE DATA BASE */
/* ***	IF IT ISN'T, THEN SOMETHING IS VERY WRONG ... EXIT */

/*< 5300	call getval(6, 0,2004,  2, iplayr, 1, ijob ) >*/
L5300:
    getval_(&c__6, &c__0, &c__2004, &c__2, &iplayr, &c__1, &ijob);
/*< 	if( ijob .eq. job(0) ) goto 5400 >*/
    if (ijob == job_(&c__0)) {
	goto L5400;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call  >*/
    string_(&c__1, "Your job has been removed from the database.^M^J^E", (
	    ftnlen)50);
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call pstop >*/
    pstop_();


/* ********************************* */
/* ***	GET USER'S COMMAND    **** */
/* ********************************* */

/*< 5400	call outbuf( 1 ) >*/
L5400:
    outbuf_(&c__1);
/*< 	call comand( ichar, comara, index ) >*/
    comand_(&ichar, comara, &index);

/*< 	if( ichar .eq. -1 ) goto 1100 >*/
    if (ichar == -1) {
	goto L1100;
    }

/*< 	call clrlin >*/
    clrlin_();

/* ***	GET ANY NUMBERS THERE MAY BE IN IT */

/*< 	call  >*/
    getnum_(&c__10, comara, &index, &ifac1, &c__10, &ifac2, &c__10, &ifac3, &
	    c__10, &ifac4, &c__10);

/* ***	EXIT (USEFULL) */

/*< 	if( ichar .ne. 69 .or. comara(2) .ne. 88 ) goto 5500 >*/
    if (ichar != 69 || comara[1] != 88) {
	goto L5500;
    }
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);

/* ***	NEW SCREEN (NO-OP) */

/*< 5500	if( ichar .eq. 78 .and. index .le. 1 ) goto 1100 >*/
L5500:
    if (ichar == 78 && index <= 1) {
	goto L1100;
    }

/* ***	ALLOW USER TO CHANGE SHIP NAME */

/*< 	if( ichar .ne. 78 ) goto 5550 >*/
    if (ichar != 78) {
	goto L5550;
    }
/*< 	stname(1) = 0 >*/
    stname[0] = 0;
/*< 	stname(2) = 0 >*/
    stname[1] = 0;
/*< 	call convrt( comara(2), index-1, 1, stname, 6 ) >*/
    i__1 = index - 1;
    convrt_(&comara[1], &i__1, &c__1, stname, &c__6);
/*< 	call putval(6, 0,2043,  2, iplayr, 5, stname(1) ) >*/
    putval_(&c__6, &c__0, &c__2043, &c__2, &iplayr, &c__5, stname);
/*< 	call putval(6, 0,2044,  2, iplayr, 6, stname(2) ) >*/
    putval_(&c__6, &c__0, &c__2044, &c__2, &iplayr, &c__6, &stname[1]);
/*< 	ichar = 0 >*/
    ichar = 0;
/*< 	goto 1100 >*/
    goto L1100;

/* ***	ALLOW USER TO SET KIND IF HE ENTERS A PORT. */

/*< 5550	if(ichar.ne.75.or.notfrs.or.ifac1.lt.1.or.ifac1.gt.5)goto 5600 >*/
L5550:
    if (ichar != 75 || notfrs || ifac1 < 1 || ifac1 > 5) {
	goto L5600;
    }
/*< 	if( kind .eq. ifac1 ) goto 1100 >*/
    if (kind == ifac1) {
	goto L1100;
    }
/*< 	if( kind .eq. 5 .or. ifac1 .eq. 5 ) goto 5551 >*/
    if (kind == 5 || ifac1 == 5) {
	goto L5551;
    }
/*< 	nkind = ifac1 >*/
    nkind = ifac1;
/*< 	goto 1100 >*/
    goto L1100;

/*< 5551	call clrlin >*/
L5551:
    clrlin_();
/*< 	call string(1,'*** ^E') >*/
    string_(&c__1, "*** ^E", (ftnlen)6);
/*< 	call pkind( kind ) >*/
    pkind_(&kind);
/*< 	call string(1,' may not become a ^E') >*/
    string_(&c__1, " may not become a ^E", (ftnlen)20);
/*< 	call pkind( ifac1 ) >*/
    pkind_(&ifac1);
/*< 	call string(1,' ***^E') >*/
    string_(&c__1, " ***^E", (ftnlen)6);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	SONAR CONTROL */

/*< 5600	if( ichar .ne. 83 .or. comara(2) .ne. 67 ) goto 5650 >*/
L5600:
    if (ichar != 83 || comara[1] != 67) {
	goto L5650;
    }
/*< 	iradr = mod( mod( ifac1, 360 )+360, 360 ) >*/
    iradr = (ifac1 % 360 + 360) % 360;
/*< 	if( index .eq. 2 ) iradr = -1 >*/
    if (index == 2) {
	iradr = -1;
    }
/*< 	iradnc = 0 >*/
    iradnc = 0;
/*< 	goto 1100 >*/
    goto L1100;

/*< 5650	if( ichar .ne. 83 .or. comara(2) .ne. 87 ) goto 5700 >*/
L5650:
    if (ichar != 83 || comara[1] != 87) {
	goto L5700;
    }
/*< 	iradto = mod( mod( ifac1, 360 )+360, 360 ) >*/
    iradto = (ifac1 % 360 + 360) % 360;
/*< 	if( iradr .lt. 0 ) iradr = iaz >*/
    if (iradr < 0) {
	iradr = iaz;
    }
/*< 	call allcap( comara, 3 ) >*/
    allcap_(comara, &c__3);
/*< 	if( comara(3) .eq. 67 ) iradnc = ifac1 >*/
    if (comara[2] == 67) {
	iradnc = ifac1;
    }
/*< 	if( comara(3) .ne. 67 ) iradnc = ifac2 >*/
    if (comara[2] != 67) {
	iradnc = ifac2;
    }
/*< 	if( iradnc .eq. 0 ) iradnc = 3 >*/
    if (iradnc == 0) {
	iradnc = 3;
    }
/*< 	if( iabs( iradnc ) .gt. 359 ) iradnc = mod( iradnc, 360 ) >*/
    if (abs(iradnc) > 359) {
	iradnc %= 360;
    }
/*< 	if( comara(3) .eq. 67 ) iradto = -1 >*/
    if (comara[2] == 67) {
	iradto = -1;
    }
/*< 	goto 1100 >*/
    goto L1100;

/* ***	HELM CONTROL */

/*< 5700	if( ichar .ne. 65 ) goto 5900 >*/
L5700:
    if (ichar != 65) {
	goto L5900;
    }
/*< 	if( damage( 2, 1 ) .ne. 0 ) goto 5800 >*/
    if (damage[1] != 0) {
	goto L5800;
    }
/*< 	itaz = mod( ifac1, 360 ) >*/
    itaz = ifac1 % 360;
/*< 	if( itaz .lt. 0 )  itaz = itaz + 360 >*/
    if (itaz < 0) {
	itaz += 360;
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 5800	call colstr(iclyel,'*** Helm does not respond ***^E') >*/
L5800:
    colstr_(&col_1.iclyel, "*** Helm does not respond ***^E", (ftnlen)31);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	PITCH CONTROL (SUBMARINE, HELICOPTER) */

/*< 5900	if( ichar .ne. 80 .or. (kind.ne.2.and.kind.ne.5)) goto 6100 >*/
L5900:
    if (ichar != 80 || kind != 2 && kind != 5) {
	goto L6100;
    }
/*< 	if( damage( 8, 1 ) .ne. 0 ) goto 6000 >*/
    if (damage[7] != 0) {
	goto L6000;
    }
/*< 	itptch = ifac1 >*/
    itptch = ifac1;
/*< 	if( iabs(itptch) .gt. 90 ) itptch = sign(1.,itptch*1.)*90. >*/
    if (abs(itptch) > 90) {
	r__1 = itptch * (float)1.;
	itptch = r_sign(&c_b1992, &r__1) * (float)90.;
    }
/*< 	if( i >*/
    if (abs(itptch) > 45 && kind != 5) {
	r__1 = itptch * (float)1.;
	itptch = r_sign(&c_b1992, &r__1) * (float)45.;
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 6000	call colstr(iclyel,'*** Pitch control does not respond ***^E') >*/
L6000:
    colstr_(&col_1.iclyel, "*** Pitch control does not respond ***^E", (
	    ftnlen)40);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	BALLAST CONTROL (SUBMARINE) */

/*< 6100	if( ichar .ne. 66 .or. kind .ne. 2 ) goto 6300 >*/
L6100:
    if (ichar != 66 || kind != 2) {
	goto L6300;
    }
/*< 	if( damage( 9, 1 ) .ne. 0 ) goto 6200 >*/
    if (damage[8] != 0) {
	goto L6200;
    }
/*< 	ibal = ifac1 >*/
    ibal = ifac1;
/*< 	if( index .eq. 1 )  ibal = -100.*(depth-18.)/16. >*/
    if (index == 1) {
	ibal = (depth - (float)18.) * (float)-100. / (float)16.;
    }
/*< 	if( ibal .lt. 0 )  ibal = 0 >*/
    if (ibal < 0) {
	ibal = 0;
    }
/*< 	if( ibal .gt. 100 )  ibal = 100 >*/
    if (ibal > 100) {
	ibal = 100;
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 6200	c >*/
L6200:
    colstr_(&col_1.iclyel, "*** Ballast control does not respond ***^E", (
	    ftnlen)42);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	SPEED CONTROL */

/*< 6300	if( ichar .ne. 83 ) goto 6500 >*/
L6300:
    if (ichar != 83) {
	goto L6500;
    }
/*< 	if( damage( 1, 1 ) .ne. 0 ) goto 6400 >*/
    if (damage[0] != 0) {
	goto L6400;
    }
/*< 	itspd = ifac1 >*/
    itspd = ifac1;
/*< 	if( itspd .gt. 10*kind ) itspd = 10*kind >*/
    if (itspd > kind * 10) {
	itspd = kind * 10;
    }
/*< 	if( itspd .lt. -5*kind )  itspd = -5*kind >*/
    if (itspd < kind * -5) {
	itspd = kind * -5;
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 6400	call colstr(iclyel,'*** Engines do not respond ***^E') >*/
L6400:
    colstr_(&col_1.iclyel, "*** Engines do not respond ***^E", (ftnlen)32);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	GET INFORMATION ABOUT OTHER USERS */

/*< 6500	if( ichar .ne. 87 ) goto 6700 >*/
L6500:
    if (ichar != 87) {
	goto L6700;
    }
/*< 	if( index .eq. 1 ) goto 6550 >*/
    if (index == 1) {
	goto L6550;
    }
/*< 	icchar = icon( comara(2) ) - 64 >*/
    icchar = icon_(&comara[1]) - 64;
/*< 	if( icchar .lt. 1 .or. icchar .gt. 26 ) goto 6600 >*/
    if (icchar < 1 || icchar > 26) {
	goto L6600;
    }
/*< 	call getval(6, 0,2139,  2, icchar, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__2139, &c__2, &icchar, &c__1, &ival);
/*< 	if( ival .eq. 0 ) goto 6600 >*/
    if (ival == 0) {
	goto L6600;
    }
/*< 	call who( icchar ) >*/
    who_(&icchar);
/*< 	goto 1100 >*/
    goto L1100;

/*< 6550	do 6560 itemp = 1, 26 >*/
L6550:
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(6, 0,2146,  2, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__2146, &c__2, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 6560 >*/
	if (ival == 0) {
	    goto L6560;
	}
/*< 	    call getval(6, 0,2148,  2, i, 9, ival ) >*/
	getval_(&c__6, &c__0, &c__2148, &c__2, &i__, &c__9, &ival);
/*< 	    if( ival .ne. iport ) goto 6560 >*/
	if (ival != iport) {
	    goto L6560;
	}
/*< 	    call chrout( i+64 ) >*/
	i__1 = i__ + 64;
	chrout_(&i__1);
/*< 	    call chrout(47) >*/
	chrout_(&c__47);
/*< 	    call getval(6, 0,2152,  2, i, 10, ival ) >*/
	getval_(&c__6, &c__0, &c__2152, &c__2, &i__, &c__10, &ival);
/*< 	    if( ival .eq. 1 ) call chrout(66) >*/
	if (ival == 1) {
	    chrout_(&c__66);
	}
/*< 	    if( ival .eq. 2 ) call chrout(83) >*/
	if (ival == 2) {
	    chrout_(&c__83);
	}
/*< 	    if( ival .eq. 3 ) call chrout(68) >*/
	if (ival == 3) {
	    chrout_(&c__68);
	}
/*< 	    if( ival .eq. 4 ) call chrout(80) >*/
	if (ival == 4) {
	    chrout_(&c__80);
	}
/*< 	    if( ival .eq. 5 ) call chrout(72) >*/
	if (ival == 5) {
	    chrout_(&c__72);
	}
/*< 	    call chrout(58) >*/
	chrout_(&c__58);
/*< 	    call getval(6, 0,2159,  2, i, 2, ix ) >*/
	getval_(&c__6, &c__0, &c__2159, &c__2, &i__, &c__2, &ix);
/*< 	    call number(2, ix, -3 ) >*/
	number_(&c__2, &ix, &c_n3);
/*< 	    call chrout(45) >*/
	chrout_(&c__45);
/*< 	    call getval(6, 0,2162,  2, i, 3, iy ) >*/
	getval_(&c__6, &c__0, &c__2162, &c__2, &i__, &c__3, &iy);
/*< 	    call number(2, iy, -3 ) >*/
	number_(&c__2, &iy, &c_n3);
/*< 	    call chrout(59) >*/
	chrout_(&c__59);
/*< 	    call getval(6, 0,2165,  2, i, 4, id ) >*/
	getval_(&c__6, &c__0, &c__2165, &c__2, &i__, &c__4, &id);
/*< 	    call number(1, id-18 ) >*/
	i__1 = id - 18;
	number_(&c__1, &i__1);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 6560	continue >*/
L6560:
	;
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 6600	call colstr(iclyel,'Ship does not exist.^E') >*/
L6600:
    colstr_(&col_1.iclyel, "Ship does not exist.^E", (ftnlen)22);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	GAG USER */

/*< 6700	if( ichar .ne. 71 ) goto 6800 >*/
L6700:
    if (ichar != 71) {
	goto L6800;
    }
/*< 	call usrset( 1035, 0 ) >*/
    usrset_(&c__1035, &c__0);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	TORPEDO CONTROL */

/*< 6800	if( ichar.ne.84 .or. ( kind.ne.2 .and. kind.ne.4 )) goto 7500 >*/
L6800:
    if (ichar != 84 || kind != 2 && kind != 4) {
	goto L7500;
    }
/*< 	if( itorp .eq. 0 ) goto 7300 >*/
    if (itorp == 0) {
	goto L7300;
    }
/*< 	inc = 1 >*/
    inc = 1;
/*< 	if( damage( 5, 1 ) .ne. 0 .or. i1torp .ne. 0 ) inc = -1 >*/
    if (damage[4] != 0 || i1torp != 0) {
	inc = -1;
    }
/*< 	if( damage( 6, 1 ) .ne. 0 .and. inc .eq. -1 ) goto 7200 >*/
    if (damage[5] != 0 && inc == -1) {
	goto L7200;
    }
/*< 	if( inc .lt. 0 .and. i2torp .ne. 0 ) goto 7100 >*/
    if (inc < 0 && i2torp != 0) {
	goto L7100;
    }
/*< 	if( inc .lt. 0 )  i2torp = 10 >*/
    if (inc < 0) {
	i2torp = 10;
    }
/*< 	if( inc .gt. 0 )  i1torp = 10 >*/
    if (inc > 0) {
	i1torp = 10;
    }
/*< 	itorp = itorp - 1 >*/
    --itorp;
/*< 	torpx = shipx >*/
    torpx = shipx;
/*< 	torpy = shipy >*/
    torpy = shipy;
/*< 	torpd = depth >*/
    torpd = depth;
/*< 	itp = ipitch >*/
    itp = ipitch;
/*< 	iter = 0 >*/
    iter = 0;
/*< 6900	iter = iter + 1 >*/
L6900:
    ++iter;
/*< 	if( iter .gt. 25 ) goto 7450 >*/
    if (iter > 25) {
	goto L7450;
    }
/*< 	torpx = torpx + smcos(float(iaz))*cosdeg(float(itp)) >*/
    r__1 = (real) iaz;
    r__2 = (real) itp;
    torpx += smcos_(&r__1) * cosdeg_(&r__2);
/*< 	itorpx = torpx + 0.5 >*/
    itorpx = torpx + (float).5;
/*< 	torpy = torpy + smsin(float(iaz))*cosdeg(float(itp)) >*/
    r__1 = (real) iaz;
    r__2 = (real) itp;
    torpy += smsin_(&r__1) * cosdeg_(&r__2);
/*< 	itorpy = torpy + 0.5 >*/
    itorpy = torpy + (float).5;
/*< 	torpd = torpd + sindeg(float(itp)) >*/
    r__1 = (real) itp;
    torpd += sindeg_(&r__1);
/*< 	if( torpd .gt. 18 )  itp = 0 >*/
    if (torpd > (float)18.) {
	itp = 0;
    }
/*< 	if( torpd .gt. 18 )  torpd = 18 >*/
    if (torpd > (float)18.) {
	torpd = (float)18.;
    }
/*< 	itorpd = torpd + 0.5 >*/
    itorpd = torpd + (float).5;
/*< 	if( kind .eq. 2 ) itp = itp - inc >*/
    if (kind == 2) {
	itp -= inc;
    }
/*< 	if( itorpx .eq. ishipx .and. itorpy .eq. ishipy ) goto 6900 >*/
    if (itorpx == ishipx && itorpy == ishipy) {
	goto L6900;
    }
/*< 	call getval(6, 0,2208,  1, itorpx, itorpy, ival ) >*/
    getval_(&c__6, &c__0, &c__2208, &c__1, &itorpx, &itorpy, &ival);
/*< 	if( iright( ival ) .ge. itorpd ) goto 7400 >*/
    if (iright_(&ival) >= itorpd) {
	goto L7400;
    }
/*< 	if( ileft( ival ) .eq. 0 .or. ileft( ival ) .gt. 26 ) goto 6900 >*/
    if (ileft_(&ival) == 0 || ileft_(&ival) > 26) {
	goto L6900;
    }
/*< 	call getval(6, 0,2211,  2, ileft( ival ), 4, ival1 ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__2211, &c__2, &i__1, &c__4, &ival1);
/*< 	if( itorpd .ne. ival1 ) goto 6900 >*/
    if (itorpd != ival1) {
	goto L6900;
    }
/*< 	call string(1,'Torpedo at ^E') >*/
    string_(&c__1, "Torpedo at ^E", (ftnlen)13);
/*< 	call number(2, itorpx, -3 ) >*/
    number_(&c__2, &itorpx, &c_n3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(2, itorpy, -3 ) >*/
    number_(&c__2, &itorpy, &c_n3);
/*< 	call string(1,' at depth ^E') >*/
    string_(&c__1, " at depth ^E", (ftnlen)12);
/*< 	call number(1, 18-itorpd ) >*/
    i__1 = 18 - itorpd;
    number_(&c__1, &i__1);
/*< 	call string(1,' strikes the ^E') >*/
    string_(&c__1, " strikes the ^E", (ftnlen)15);
/*< 	call getval(6, 0,2220,  2, ileft( ival ), 5, stname(1) ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__2220, &c__2, &i__1, &c__5, stname);
/*< 	call getval(6, 0,2221,  2, ileft( ival ), 6, stname(2) ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__2221, &c__2, &i__1, &c__6, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call explod( itorpx, itorpy, itorpd, 3, iexflg ) >*/
    explod_(&itorpx, &itorpy, &itorpd, &c__3, &iexflg);
/*< 	call putval(6, 0,2224,  2, ileft( ival ), 8, 10 ) >*/
    i__1 = ileft_(&ival);
    putval_(&c__6, &c__0, &c__2224, &c__2, &i__1, &c__8, &c__10);
/*< 	goto 1100 >*/
    goto L1100;

/*< 7100	call colstr(iclyel,'*** Torpedo is not ready for firing ***^E') >*/
L7100:
    colstr_(&col_1.iclyel, "*** Torpedo is not ready for firing ***^E", (
	    ftnlen)41);
/*< 	goto 1100 >*/
    goto L1100;

/*< 7200	call colstr(iclyel,'*** Torpedo tube does not respond ***^E') >*/
L7200:
    colstr_(&col_1.iclyel, "*** Torpedo tube does not respond ***^E", (ftnlen)
	    39);
/*< 	goto 1100 >*/
    goto L1100;

/*< 7300	call colstr(iclyel,'*** All torpedos are expended. ***^E') >*/
L7300:
    colstr_(&col_1.iclyel, "*** All torpedos are expended. ***^E", (ftnlen)36)
	    ;
/*< 	goto 1100 >*/
    goto L1100;

/*< 7400	call colstr(icllbl,'Torpedo at ^E') >*/
L7400:
    colstr_(&col_1.icllbl, "Torpedo at ^E", (ftnlen)13);
/*< 	call number(2, itorpx, -3 ) >*/
    number_(&c__2, &itorpx, &c_n3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(2, itorpy, -3 ) >*/
    number_(&c__2, &itorpy, &c_n3);
/*< 	call string(1,' at depth ^E') >*/
    string_(&c__1, " at depth ^E", (ftnlen)12);
/*< 	call number(1, 18-itorpd ) >*/
    i__1 = 18 - itorpd;
    number_(&c__1, &i__1);
/*< 	call string(1,' strikes rock^E') >*/
    string_(&c__1, " strikes rock^E", (ftnlen)15);
/*< 7450	call explod( itorpx, itorpy, itorpd, 3, iexflg ) >*/
L7450:
    explod_(&itorpx, &itorpy, &itorpd, &c__3, &iexflg);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	COMMUNICATIONS CONTROL */

/*< 7500	if( ichar .ne. 82 ) goto 7850 >*/
L7500:
    if (ichar != 82) {
	goto L7850;
    }
/*< 	irec = icon( comara(2) ) - 64 >*/
    irec = icon_(&comara[1]) - 64;
/*< 	if( irec .lt. 1 .or. irec .gt. 26 ) goto 7800 >*/
    if (irec < 1 || irec > 26) {
	goto L7800;
    }
/*< 	call getval(6, 0,2251,  2, irec, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__2251, &c__2, &irec, &c__1, &ival);
/*< 	if( ival .eq. 0 ) goto 7800 >*/
    if (ival == 0) {
	goto L7800;
    }
/*< 	iterat = 0 >*/
    iterat = 0;
/*< 7600	call getval(5, 0,2254,  6, 1, ival ) >*/
/* L7600: */
    getval_(&c__5, &c__0, &c__2254, &c__6, &c__1, &ival);
/*< 	if( ival .ne. 0 ) call nap( 1000, 4 ) >*/
    if (ival != 0) {
	nap_(&c__1000, &c__4);
    }
/*< 	call unlock >*/
    unlock_();
/*< 	call lock >*/
    lock_();
/*< 	call putval(4, 0,2258,  -6, irec ) >*/
    putval_(&c__4, &c__0, &c__2258, &c_n6, &irec);
/*< 	call putval(5, 0,2259,  6, 2, index-2 ) >*/
    i__1 = index - 2;
    putval_(&c__5, &c__0, &c__2259, &c__6, &c__2, &i__1);
/*< 	if( index .gt. 60 )  call putval(5, 0,2260,  6, 2, 60 ) >*/
    if (index > 60) {
	putval_(&c__5, &c__0, &c__2260, &c__6, &c__2, &c__60);
    }
/*< 	call putval(5, 0,2261,  6, 3, iplayr ) >*/
    putval_(&c__5, &c__0, &c__2261, &c__6, &c__3, &iplayr);
/*< 	if( index .lt. 3 ) goto 7701 >*/
    if (index < 3) {
	goto L7701;
    }
/*< 	do 7700 i = 1, index-2 >*/
    i__1 = index - 2;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    if( i .le. 60 )  call putval(5, 0,2264,  6, 3+i, comara(i+2) ) >*/
	if (i__ <= 60) {
	    i__2 = i__ + 3;
	    putval_(&c__5, &c__0, &c__2264, &c__6, &i__2, &comara[i__ + 1]);
	}
/*< 7700	continue >*/
/* L7700: */
    }
/*< 7701	continue >*/
L7701:
/*< 	call unlock >*/
    unlock_();
/*< 	goto 1100 >*/
    goto L1100;

/*< 7800	c >*/
L7800:
    colstr_(&col_1.iclyel, "*** Frequency is not known for that ship ***^E", (
	    ftnlen)46);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	COMPUTER CONTROL (BATTLESHIPS) */

/*< 7850	if( ichar .ne. 67 .or. kind .ne. 1 ) goto 7900 >*/
L7850:
    if (ichar != 67 || kind != 1) {
	goto L7900;
    }
/*< 	if( damage( 5, 1 ) .ne. 0 ) goto 7890 >*/
    if (damage[4] != 0) {
	goto L7890;
    }
/*< 	call string(1,'Computer:  ^E') >*/
    string_(&c__1, "Computer:  ^E", (ftnlen)13);
/*< 	if( comara(2) .ne. 71 ) goto 7860 >*/
    if (comara[1] != 71) {
	goto L7860;
    }
/*< 	if( damage( 10, 1 ) .ne. 0 ) goto 7855 >*/
    if (damage[9] != 0) {
	goto L7855;
    }
/*< 	atofir = (.not. atofir) >*/
    atofir = ! atofir;
/*< 	if( atofir ) call string(1,'Automatic fire initiated^E') >*/
    if (atofir) {
	string_(&c__1, "Automatic fire initiated^E", (ftnlen)26);
    }
/*< 	if( .not. atofir ) call string(1,'Automatic fire halted^E') >*/
    if (! atofir) {
	string_(&c__1, "Automatic fire halted^E", (ftnlen)23);
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 7855	call colstr(iclyel,'*** Surface guns do not respond ***^E') >*/
L7855:
    colstr_(&col_1.iclyel, "*** Surface guns do not respond ***^E", (ftnlen)
	    37);
/*< 	goto 1100 >*/
    goto L1100;

/*< 7860	call number(2, ifac1, -3 ) >*/
L7860:
    number_(&c__2, &ifac1, &c_n3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(2, ifac2, -3 ) >*/
    number_(&c__2, &ifac2, &c_n3);
/*< 	call string(1,' Alt: ^E') >*/
    string_(&c__1, " Alt: ^E", (ftnlen)8);
/*< 	call number(1, ifac3 ) >*/
    number_(&c__1, &ifac3);
/*< 	ifac3 = ifac3 + 18 >*/
    ifac3 += 18;
/*< 	degree = 90. >*/
    degree = (float)90.;
/*< 	if( ishipx .eq. ifac1 .and. ishipy .gt. ifac2 ) degree = 270. >*/
    if (ishipx == ifac1 && ishipy > ifac2) {
	degree = (float)270.;
    }
/*< 	if( i >*/
    if (ishipx != ifac1) {
	degree = atan((ishipy - ifac2) * (float)1. / ((ishipx - ifac1) * (
		float)1.)) * (float)180. / (float)3.14159;
    }
/*< 	if( ishipx .gt. ifac1 ) degree = degree + 180. >*/
    if (ishipx > ifac1) {
	degree += (float)180.;
    }
/*< 	if( newang ) degree = 90 - degree >*/
    if (nhcom_1.newang) {
	degree = 90 - degree;
    }
/*< 7862	if( degree.lt.360 .and. degree.ge. 0 ) goto 7865 >*/
L7862:
    if (degree < (float)360. && degree >= (float)0.) {
	goto L7865;
    }
/*< 	if( degree .ge. 360 ) degree = degree - 360. >*/
    if (degree >= (float)360.) {
	degree += (float)-360.;
    }
/*< 	if( degree .lt.   0 ) degree = degree + 360. >*/
    if (degree < (float)0.) {
	degree += (float)360.;
    }
/*< 	goto 7862 >*/
    goto L7862;
/*< 7865	call string(1,'  Azim: ^E') >*/
L7865:
    string_(&c__1, "  Azim: ^E", (ftnlen)10);
/*< 	call number(4, degree, 3, 10, 0 ) >*/
    number_(&c__4, &degree, &c__3, &c__10, &c__0);
/*< 	call string(1,'  Elev: ^E') >*/
    string_(&c__1, "  Elev: ^E", (ftnlen)10);
/*< 	if( ishipx .eq. ifac1 .and. ishipy .eq. ifac2 ) goto 7870 >*/
    if (ishipx == ifac1 && ishipy == ifac2) {
	goto L7870;
    }
/*< 	dist = sqrt((ishipx-ifac1+0.)**2 + (ishipy-ifac2+0.)**2) >*/
/* Computing 2nd power */
    r__1 = ishipx - ifac1 + (float)0.;
/* Computing 2nd power */
    r__2 = ishipy - ifac2 + (float)0.;
    dist = sqrt(r__1 * r__1 + r__2 * r__2);
/*< 	a = -0.05 >*/
    a = (float)-.05;
/*< 	v = 1. >*/
    v = (float)1.;
/*< 	radic >*/
    r__2 = a * (float).5;
/* Computing 2nd power */
    r__3 = v;
    r__1 = r__2 * dist / (r__3 * r__3) * (float)4.;
    r__4 = a * (float).5;
/* Computing 2nd power */
    r__5 = v;
    radicl = 1 - r__1 * (r__4 * dist / (r__5 * r__5) - (idepth - ifac3) / 
	    dist);
/*< 	if( radicl .lt. 0 ) goto 7880 >*/
    if (radicl < (float)0.) {
	goto L7880;
    }
/*< 	atarg1 = ( -1. + sqrt(radicl))/(a*dist/(v**2)) >*/
/* Computing 2nd power */
    r__1 = v;
    atarg1 = (sqrt(radicl) - (float)1.) / (a * dist / (r__1 * r__1));
/*< 	atarg2 = ( -1. - sqrt(radicl))/(a*dist/(v**2)) >*/
/* Computing 2nd power */
    r__1 = v;
    atarg2 = ((float)-1. - sqrt(radicl)) / (a * dist / (r__1 * r__1));
/*< 	elev1 = 180.*atan( atarg1 )/3.14159 + .5 >*/
    elev1 = atan(atarg1) * (float)180. / (float)3.14159 + (float).5;
/*< 	elev2 = 180.*atan( atarg2 )/3.14159 + .5 >*/
    elev2 = atan(atarg2) * (float)180. / (float)3.14159 + (float).5;
/*< 	call number(4, elev1, 4, 10, 1 ) >*/
    number_(&c__4, &elev1, &c__4, &c__10, &c__1);
/*< 	if( ifix(elev1) .eq. ifix(elev2) ) goto 7885 >*/
    if ((integer) elev1 == (integer) elev2) {
	goto L7885;
    }
/*< 	call string(1,' or ^E') >*/
    string_(&c__1, " or ^E", (ftnlen)6);
/*< 	call number(4, elev2, 4, 10, 1 ) >*/
    number_(&c__4, &elev2, &c__4, &c__10, &c__1);
/*< 	goto 7885 >*/
    goto L7885;

/*< 7870	call string(1,'90.00^E') >*/
L7870:
    string_(&c__1, "90.00^E", (ftnlen)7);
/*< 	goto 7885 >*/
    goto L7885;

/*< 7880	call string(1,'Unknown^E') >*/
L7880:
    string_(&c__1, "Unknown^E", (ftnlen)9);

/*< 7885	call string(1,'  Dist: ^E') >*/
L7885:
    string_(&c__1, "  Dist: ^E", (ftnlen)10);
/*< 	dist  >*/
/* Computing 2nd power */
    r__2 = ishipx - ifac1 + (float)0.;
/* Computing 2nd power */
    r__3 = ishipy - ifac2 + (float)0.;
    r__1 = r__2 * r__2 + r__3 * r__3;
/* Computing 2nd power */
    r__4 = idepth - ifac3 + (float)0.;
    dist = sqrt(r__1 + r__4 * r__4);
/*< 	call number(4, dist, 6, 10, 1 ) >*/
    number_(&c__4, &dist, &c__6, &c__10, &c__1);
/*< 	goto 1100 >*/
    goto L1100;

/*< 7890	call colstr(iclred,'%Battle computer being reloaded^E') >*/
L7890:
    colstr_(&col_1.iclred, "%Battle computer being reloaded^E", (ftnlen)33);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	MISSILE CONTROL (ALL EXCEPT P.T. BOAT) */

/*< 7900	if( ichar .ne. 77 .or. kind .eq. 4 ) goto 8910 >*/
L7900:
    if (ichar != 77 || kind == 4) {
	goto L8910;
    }
/*< 	if( imissl .eq. 0 ) goto 8600 >*/
    if (imissl == 0) {
	goto L8600;
    }
/*< 	if( damage( 7, 1 ) .lt. 0 ) goto 8900 >*/
    if (damage[6] < 0) {
	goto L8900;
    }
/*< 	if( damage( 7, 1 ) .gt. 0 ) goto 8700 >*/
    if (damage[6] > 0) {
	goto L8700;
    }
/*< 	if(kind.ne.5.and.(ifac2.lt.1.or.ifac2.gt.89))goto 8800 >*/
    if (kind != 5 && (ifac2 < 1 || ifac2 > 89)) {
	goto L8800;
    }
/*< 	if( ifac2 .gt. 89 .or. ifac2 .lt. -89 ) goto 8800 >*/
    if (ifac2 > 89 || ifac2 < -89) {
	goto L8800;
    }
/*< 	if( index .eq. 1 ) ifac1 = iaz >*/
    if (index == 1) {
	ifac1 = iaz;
    }
/*< 	if( index .eq. 1 ) ifac2 = -89 >*/
    if (index == 1) {
	ifac2 = -89;
    }
/*< 	imissl = imissl - 1 >*/
    --imissl;
/*< 	damage( 7, 1 ) = 1 >*/
    damage[6] = 1;
/*< 	xmissl = shipx >*/
    xmissl = shipx;
/*< 	ymissl = shipy >*/
    ymissl = shipy;
/*< 	dmissl = depth >*/
    dmissl = depth;
/*< 	xvel = smcos(float(ifac1))*cos(0.017453293 * ifac2) >*/
    r__1 = (real) ifac1;
    xvel = smcos_(&r__1) * cos(ifac2 * (float).017453293);
/*< 	yvel = smsin(float(ifac1))*cos(0.017453293 * ifac2) >*/
    r__1 = (real) ifac1;
    yvel = smsin_(&r__1) * cos(ifac2 * (float).017453293);
/*< 	zvel = sindeg(float(ifac2)) >*/
    r__1 = (real) ifac2;
    zvel = sindeg_(&r__1);

/*< 8000	xmissl = xmissl + xvel >*/
L8000:
    xmissl += xvel;
/*< 	misslx = xmissl + 0.5 >*/
    misslx = xmissl + (float).5;
/*< 	ymissl = ymissl + yvel >*/
    ymissl += yvel;
/*< 	missly = ymissl + 0.5 >*/
    missly = ymissl + (float).5;
/*< 	dmissl = dmissl + zvel >*/
    dmissl += zvel;
/*< 	missld = dmissl + 0.5 >*/
    missld = dmissl + (float).5;
/*< 	zvel = zvel - 0.05 >*/
    zvel += (float)-.05;

/*< 	if(mi >*/
    if (misslx < 1 || misslx > 120 || missly < 1 || missly > 120) {
	goto L8500;
    }
/*< 	call getval(6, 0,2369,  1, misslx, missly, ival ) >*/
    getval_(&c__6, &c__0, &c__2369, &c__1, &misslx, &missly, &ival);
/*< 	if( iright( ival ) .ge. missld ) goto 8100 >*/
    if (iright_(&ival) >= missld) {
	goto L8100;
    }
/*< 	if( i >*/
    if (ileft_(&ival) == 0 || ileft_(&ival) == iplayr || ileft_(&ival) > 26) {
	goto L8000;
    }
/*< 	call getval(6, 0,2373,  2, ileft( ival ), 4, ival1 ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__2373, &c__2, &i__1, &c__4, &ival1);
/*< 	if( missld .ne. ival1 ) goto 8000 >*/
    if (missld != ival1) {
	goto L8000;
    }
/*< 	call string(1,'Missile at ^E') >*/
    string_(&c__1, "Missile at ^E", (ftnlen)13);
/*< 	call number(2, misslx, -3 ) >*/
    number_(&c__2, &misslx, &c_n3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(2, missly, -3 ) >*/
    number_(&c__2, &missly, &c_n3);
/*< 	call string(1,' at altitude ^E') >*/
    string_(&c__1, " at altitude ^E", (ftnlen)15);
/*< 	call number(1, missld-18 ) >*/
    i__1 = missld - 18;
    number_(&c__1, &i__1);
/*< 	call colstr(icllbl,' strikes the ^E') >*/
    colstr_(&col_1.icllbl, " strikes the ^E", (ftnlen)15);
/*< 	call getval(6, 0,2382,  2, ileft( ival ), 5, stname(1) ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__2382, &c__2, &i__1, &c__5, stname);
/*< 	call getval(6, 0,2383,  2, ileft( ival ), 6, stname(2) ) >*/
    i__1 = ileft_(&ival);
    getval_(&c__6, &c__0, &c__2383, &c__2, &i__1, &c__6, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	if(kind.ne.5)call putval(6, 0,2385,  2, ileft( ival ), 8, 20 ) >*/
    if (kind != 5) {
	i__1 = ileft_(&ival);
	putval_(&c__6, &c__0, &c__2385, &c__2, &i__1, &c__8, &c__20);
    }
/*< 	if(kind.eq.5)call putval(6, 0,2386,  2, ileft( ival ), 8, 5 ) >*/
    if (kind == 5) {
	i__1 = ileft_(&ival);
	putval_(&c__6, &c__0, &c__2386, &c__2, &i__1, &c__8, &c__5);
    }
/*< 	if(kind.ne.5)call explod( misslx, missly, missld, 6, iexflg ) >*/
    if (kind != 5) {
	explod_(&misslx, &missly, &missld, &c__6, &iexflg);
    }
/*< 	if(kind.eq.5)call explod( misslx, missly, missld, 2, iexflg ) >*/
    if (kind == 5) {
	explod_(&misslx, &missly, &missld, &c__2, &iexflg);
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 8100	call string(1,'Missile at ^E') >*/
L8100:
    string_(&c__1, "Missile at ^E", (ftnlen)13);
/*< 	call number(2, misslx, -3 ) >*/
    number_(&c__2, &misslx, &c_n3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(2, missly, -3 ) >*/
    number_(&c__2, &missly, &c_n3);
/*< 	call string(1,' at altitude ^E') >*/
    string_(&c__1, " at altitude ^E", (ftnlen)15);
/*< 	call number(1, missld-18 ) >*/
    i__1 = missld - 18;
    number_(&c__1, &i__1);
/*< 	if( misslx .eq. iprtx1 .and. missly .eq. iprty1 ) goto 8200 >*/
    if (misslx == iprtx1 && missly == iprty1) {
	goto L8200;
    }
/*< 	if( misslx .eq. iprtx2 .and. missly .eq. iprty2 ) goto 8300 >*/
    if (misslx == iprtx2 && missly == iprty2) {
	goto L8300;
    }
/*< 	call colstr(iclyel,' pulverizes a rock^E') >*/
    colstr_(&col_1.iclyel, " pulverizes a rock^E", (ftnlen)20);
/*< 	if(kind.ne.5)call explod( misslx, missly, missld, 6, iexflg ) >*/
    if (kind != 5) {
	explod_(&misslx, &missly, &missld, &c__6, &iexflg);
    }
/*< 	if(kind.eq.5)call explod( misslx, missly, missld, 2, iexflg ) >*/
    if (kind == 5) {
	explod_(&misslx, &missly, &missld, &c__2, &iexflg);
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 8200	if(kind.ne.5)call addval(6, 0,2404,  3, 1, 6, 1 ) >*/
L8200:
    if (kind != 5) {
	addval_(&c__6, &c__0, &c__2404, &c__3, &c__1, &c__6, &c__1);
    }
/*< 	call colstr(icllbl,' strikes the port of ^E') >*/
    colstr_(&col_1.icllbl, " strikes the port of ^E", (ftnlen)23);
/*< 	call getval(6, 0,2406,  3, 1, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__2406, &c__3, &c__1, &c__1, stname);
/*< 	call getval(6, 0,2407,  3, 1, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__2407, &c__3, &c__1, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	if(kind.ne.5)call explod( misslx, missly, missld, 6, iexflg ) >*/
    if (kind != 5) {
	explod_(&misslx, &missly, &missld, &c__6, &iexflg);
    }
/*< 	if(kind.eq.5)call explod( misslx, missly, missld, 2, iexflg ) >*/
    if (kind == 5) {
	explod_(&misslx, &missly, &missld, &c__2, &iexflg);
    }
/*< 	if( iport .eq. 1 ) goto 8400 >*/
    if (iport == 1) {
	goto L8400;
    }
/*< 	goto 1100 >*/
    goto L1100;

/*< 8300	if(kind.ne.5)call addval(6, 0,2414,  3, 2, 6, 1 ) >*/
L8300:
    if (kind != 5) {
	addval_(&c__6, &c__0, &c__2414, &c__3, &c__2, &c__6, &c__1);
    }
/*< 	call colstr(iclred,' strikes the port of ^E') >*/
    colstr_(&col_1.iclred, " strikes the port of ^E", (ftnlen)23);
/*< 	call getval(6, 0,2416,  3, 2, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__2416, &c__3, &c__2, &c__1, stname);
/*< 	call getval(6, 0,2417,  3, 2, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__2417, &c__3, &c__2, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	if(kind.ne.5)call explod( misslx, missly, missld, 6, iexflg ) >*/
    if (kind != 5) {
	explod_(&misslx, &missly, &missld, &c__6, &iexflg);
    }
/*< 	if(kind.eq.5)call explod( misslx, missly, missld, 2, iexflg ) >*/
    if (kind == 5) {
	explod_(&misslx, &missly, &missld, &c__2, &iexflg);
    }
/*< 	if( iport .ne. 2 ) goto 1100 >*/
    if (iport != 2) {
	goto L1100;
    }

/*< 8400	idfect = idfect + 1 >*/
L8400:
    ++idfect;
/*< 	if( idfect .gt. 1 ) goto 9100 >*/
    if (idfect > 1) {
	goto L9100;
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	call colstr(icllbl,'**** You have defected ****^E') >*/
    colstr_(&col_1.icllbl, "**** You have defected ****^E", (ftnlen)29);
/*< 	call addval(6, 0,2427,  3, iport, 5, -1 ) >*/
    addval_(&c__6, &c__0, &c__2427, &c__3, &iport, &c__5, &c_n1);
/*< 	iport =3-iport >*/
    iport = 3 - iport;
/*< 	call addval(6, 0,2429,  3, iport, 5, 1 ) >*/
    addval_(&c__6, &c__0, &c__2429, &c__3, &iport, &c__5, &c__1);
/*< 	call putval(6, 0,2430,  2, iplayr, 9, iport ) >*/
    putval_(&c__6, &c__0, &c__2430, &c__2, &iplayr, &c__9, &iport);
/*< 	goto 1100 >*/
    goto L1100;

/*< 8500	call string(1,'Missile at ^E') >*/
L8500:
    string_(&c__1, "Missile at ^E", (ftnlen)13);
/*< 	call number(2, misslx, -3 ) >*/
    number_(&c__2, &misslx, &c_n3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(2, missly, -3 ) >*/
    number_(&c__2, &missly, &c_n3);
/*< 	call string(1,' at altitude ^E') >*/
    string_(&c__1, " at altitude ^E", (ftnlen)15);
/*< 	call number(1, missld-18 ) >*/
    i__1 = missld - 18;
    number_(&c__1, &i__1);
/*< 	call string(1,' leaves radar range^E') >*/
    string_(&c__1, " leaves radar range^E", (ftnlen)21);
/*< 	goto 1100 >*/
    goto L1100;

/*< 8600	call colstr(iclyel,'*** All missiles are expended ***^E') >*/
L8600:
    colstr_(&col_1.iclyel, "*** All missiles are expended ***^E", (ftnlen)35);
/*< 	goto 1100 >*/
    goto L1100;

/*< 8700	call colstr(iclyel,'*** Missile station not armed ***^E') >*/
L8700:
    colstr_(&col_1.iclyel, "*** Missile station not armed ***^E", (ftnlen)35);
/*< 	goto 1100 >*/
    goto L1100;

/*< 8800	c >*/
L8800:
    colstr_(&col_1.iclyel, "*** Cannot launch missile on extreme elevation *\
**^E", (ftnlen)52);
/*< 	goto 1100 >*/
    goto L1100;

/*< 8900	c >*/
L8900:
    colstr_(&col_1.iclyel, "*** Missile launcher does not respond ***^E", (
	    ftnlen)43);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	MINE CONTROL (DESTROYER) */

/*< 8910	if( ichar .ne. 76 .or. kind .ne. 3 ) goto 9000 >*/
L8910:
    if (ichar != 76 || kind != 3) {
	goto L9000;
    }
/*< 	if( imine .eq. 0 ) goto 8980 >*/
    if (imine == 0) {
	goto L8980;
    }
/*< 	if( damage( 9, 1 ) .ne. 0 ) goto 8970 >*/
    if (damage[8] != 0) {
	goto L8970;
    }
/*< 	imine = imine - 1 >*/
    --imine;
/*< 	ix = shipx - smcos( float(iaz) ) + 0.5 >*/
    r__1 = (real) iaz;
    ix = shipx - smcos_(&r__1) + (float).5;
/*< 	iy = shipy - smsin( float(iaz) ) + 0.5 >*/
    r__1 = (real) iaz;
    iy = shipy - smsin_(&r__1) + (float).5;
/*< 	if >*/
/*<   >*/
    if (ix < 1 || ix > 120 || iy < 1 || iy > 120) {
	goto L8960;
    }
/*< 	call getval(6, 0,2467,  1, ix, iy, ival ) >*/
    getval_(&c__6, &c__0, &c__2467, &c__1, &ix, &iy, &ival);
/*< 	if( ival .gt. 17 ) goto 8960 >*/
    if (ival > 17) {
	goto L8960;
    }
/*< 	call putval(6, 0,2469,  1, ix, iy, icomb( 26+iport, ival ) ) >*/
    i__2 = iport + 26;
    i__1 = icomb_(&i__2, &ival);
    putval_(&c__6, &c__0, &c__2469, &c__1, &ix, &iy, &i__1);
/*< 	goto 1100 >*/
    goto L1100;

/*< 8960	call explod( ix, iy, 18, 3, iexflg ) >*/
L8960:
    explod_(&ix, &iy, &c__18, &c__3, &iexflg);
/*< 	goto 1100 >*/
    goto L1100;

/*< 8970	call colstr(iclyel,'*** Mine control does not respond ***^E') >*/
L8970:
    colstr_(&col_1.iclyel, "*** Mine control does not respond ***^E", (ftnlen)
	    39);
/*< 	goto 1100 >*/
    goto L1100;

/*< 8980	call colstr(iclyel,'*** All mines are expended. ***^E') >*/
L8980:
    colstr_(&col_1.iclyel, "*** All mines are expended. ***^E", (ftnlen)33);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	DEPTH CHARGE CONTROL (DESTROYER,BATTLESHIP) */

/*< 9000	i >*/
L9000:
    if (ichar != 68 || kind != 1 && kind != 3) {
	goto L9050;
    }
/*< 	if( idc .eq. 0 ) goto 9040 >*/
    if (idc == 0) {
	goto L9040;
    }
/*< 	if( damage( 8, 1 ) .ne. 0 ) goto 9030 >*/
    if (damage[7] != 0) {
	goto L9030;
    }
/*< 	inc = 3 >*/
    inc = 3;
/*< 	if( comara( 2 ) .eq. 83 ) inc = -3 >*/
    if (comara[1] == 83) {
	inc = -3;
    }
/*< 	idc = idc - 1 >*/
    --idc;
/*< 	ifac1 = 18 - ifac1 >*/
    ifac1 = 18 - ifac1;
/*< 	if( ifac1 .ge. 18 .or. ifac1 .lt. 1 ) ifac1 = 1 >*/
    if (ifac1 >= 18 || ifac1 < 1) {
	ifac1 = 1;
    }
/*< 	ix = shipx + smcos( float(iaz) )*inc + 0.5 >*/
    r__2 = (real) iaz;
    r__1 = shipx + smcos_(&r__2) * inc;
    ix = r__1 + (float).5;
/*< 	iy = shipy + smsin( float(iaz) )*inc + 0.5 >*/
    r__2 = (real) iaz;
    r__1 = shipy + smsin_(&r__2) * inc;
    iy = r__1 + (float).5;
/*< 	call getval(6, 0,2494,  1, ix, iy, ival ) >*/
    getval_(&c__6, &c__0, &c__2494, &c__1, &ix, &iy, &ival);
/*< 	if( iright( ival ) .ge. ifac1 ) ifac1 = iright( ival ) >*/
    if (iright_(&ival) >= ifac1) {
	ifac1 = iright_(&ival);
    }
/*< 	call explod( ix, iy, ifac1, 4, iexflg ) >*/
    explod_(&ix, &iy, &ifac1, &c__4, &iexflg);
/*< 	goto 1100 >*/
    goto L1100;

/*< 9030	c >*/
L9030:
    colstr_(&col_1.iclyel, "*** Depth charge control does not respond ***^E", 
	    (ftnlen)47);
/*< 	goto 1100 >*/
    goto L1100;

/*< 9040	c >*/
L9040:
    colstr_(&col_1.iclyel, "*** All depth charges are expended. ***^E", (
	    ftnlen)41);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	GUN CONTROL (BATTLESHIP,DESTROYER,P.T. BOAT,HELICOPTER) */

/*< 9050	if(ichar.ne.70 .or. kind .eq. 2 ) goto 9090 >*/
L9050:
    if (ichar != 70 || kind == 2) {
	goto L9090;
    }
/*< 	if( damage( 10, 1 ) .ne. 0 ) goto 9080 >*/
    if (damage[9] != 0) {
	goto L9080;
    }

/*< 	gx = smcos( float(ifac1) ) >*/
    r__1 = (real) ifac1;
    gx = smcos_(&r__1);
/*< 	gy = smsin( float(ifac1) ) >*/
    r__1 = (real) ifac1;
    gy = smsin_(&r__1);

/*< 	itemp = 5 >*/
    itemp = 5;
/*< 	if( kind .eq. 1 ) itemp = 7 >*/
    if (kind == 1) {
	itemp = 7;
    }
/*< 	if( kind .eq. 5 ) itemp = 3 >*/
    if (kind == 5) {
	itemp = 3;
    }
/*< 9060	do 9070 i = 1, itemp >*/
/* L9060: */
    i__1 = itemp;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    ix = float(ishipx) + gx*i + 0.5 >*/
	r__1 = (real) ishipx + gx * i__;
	ix = r__1 + (float).5;
/*< 	    iy = float(ishipy) + gy*i + 0.5 >*/
	r__1 = (real) ishipy + gy * i__;
	iy = r__1 + (float).5;
/*< 	    i >*/
	if (ix < 1 || ix > 120 || iy < 1 || iy > 120) {
	    goto L9070;
	}
/*< 	    call getval(6, 0,2523,  1, ix, iy, ival ) >*/
	getval_(&c__6, &c__0, &c__2523, &c__1, &ix, &iy, &ival);
/*< 	    ival = ileft( ival ) >*/
	ival = ileft_(&ival);
/*< 	    i >*/
	if (ival != 0 && ival != iplayr && ival <= 26) {
	    goto L9075;
	}
/*< 9070	continue >*/
L9070:
	;
    }
/*< 	call string(1,'*** Shells fall harmlessly ***^E') >*/
    string_(&c__1, "*** Shells fall harmlessly ***^E", (ftnlen)32);
/*< 	goto 1100 >*/
    goto L1100;

/*< 9075	call getval(6, 0,2531,  2, ival, 4, ifac2 ) >*/
L9075:
    getval_(&c__6, &c__0, &c__2531, &c__2, &ival, &c__4, &ifac2);
/*< 	if( ifac2 .lt. 18 ) goto 9070 >*/
    if (ifac2 < 18) {
	goto L9070;
    }
/*< 	if( kind .eq. 5 .and. iabs( ifac2-idepth ) .gt. 1 ) goto 9070 >*/
    if (kind == 5 && (i__1 = ifac2 - idepth, abs(i__1)) > 1) {
	goto L9070;
    }
/*< 	call string(1,'Shells strike the ^E') >*/
    string_(&c__1, "Shells strike the ^E", (ftnlen)20);
/*< 	call getval(6, 0,2535,  2, ival, 5, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__2535, &c__2, &ival, &c__5, stname);
/*< 	call getval(6, 0,2536,  2, ival, 6, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__2536, &c__2, &ival, &c__6, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call putval(6, 0,2538,  2, ival, 8, itemp*2+1 ) >*/
    i__1 = (itemp << 1) + 1;
    putval_(&c__6, &c__0, &c__2538, &c__2, &ival, &c__8, &i__1);
/*< 	goto 1100 >*/
    goto L1100;

/*< 9080	call colstr(iclyel,'*** Surface guns do not respond ***^E') >*/
L9080:
    colstr_(&col_1.iclyel, "*** Surface guns do not respond ***^E", (ftnlen)
	    37);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	DEBUGGING FEATURES (EXPLODE, EDIT) */

/*< 9090	if( ichar .ne. 69 .or. .not. debug ) goto 9095 >*/
L9090:
    if (ichar != 69 || ! debug) {
	goto L9095;
    }
/*< 	if( comara(2) .eq. 68 ) call edit( comara(3), index-2 ) >*/
    if (comara[1] == 68) {
	i__1 = index - 2;
	edit_(&comara[2], &i__1);
    }
/*< 	if( comara(2) .eq. 68 ) goto 1100 >*/
    if (comara[1] == 68) {
	goto L1100;
    }
/*< 	ifac3 = ifac3 + 18 >*/
    ifac3 += 18;
/*< 	call allcap( comara, 3 ) >*/
    allcap_(comara, &c__3);
/*< 	ivic = icon( comara(3) ) - 64 >*/
    ivic = icon_(&comara[2]) - 64;
/*< 	if( ivic .lt. 1 .or. ivic .gt. 26 ) goto 9094 >*/
    if (ivic < 1 || ivic > 26) {
	goto L9094;
    }
/*< 	call getval(6, 0,2553,  2, ivic, 2, inc ) >*/
    getval_(&c__6, &c__0, &c__2553, &c__2, &ivic, &c__2, &inc);
/*< 	ifac1 = ifac1 + inc >*/
    ifac1 += inc;
/*< 	call getval(6, 0,2555,  2, ivic, 3, inc ) >*/
    getval_(&c__6, &c__0, &c__2555, &c__2, &ivic, &c__3, &inc);
/*< 	ifac2 = ifac2 + inc >*/
    ifac2 += inc;
/*< 	call getval(6, 0,2557,  2, ivic, 4, inc ) >*/
    getval_(&c__6, &c__0, &c__2557, &c__2, &ivic, &c__4, &inc);
/*< 	ifac3 = ifac3 + inc - 18 >*/
    ifac3 = ifac3 + inc - 18;
/*< 9094	call explod( ifac1, ifac2, ifac3, ifac4, iexflg ) >*/
L9094:
    explod_(&ifac1, &ifac2, &ifac3, &ifac4, &iexflg);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	IF NONE OF THE ABOVE, COMMAND IS ILLEGAL */

/*< 9095	call colcur( 1, 2 ) >*/
L9095:
    colcur_(&c__1, &c__2);
/*< 	call colstr(iclyel,'*** Illegal command "^E') >*/
    colstr_(&col_1.iclyel, "*** Illegal command \"^E", (ftnlen)23);
/*< 	call chrout( ichar ) >*/
    chrout_(&ichar);
/*< 	call string(1,'" ***^E') >*/
    string_(&c__1, "\" ***^E", (ftnlen)7);
/*< 	goto 1100 >*/
    goto L1100;

/* ***	USER HAS DEFECTED TWICE.  KILL HIM */

/*< 9100	call clrlin >*/
L9100:
    clrlin_();
/*< 	call  >*/
    colstr_(&col_1.iclred, "*** You have been exterminated by your past alli\
es for defecting ***^E", (ftnlen)70);
/*< 	call cease( ishipx, ishipy, iplayr ) >*/
    cease_(&ishipx, &ishipy, &iplayr);
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

