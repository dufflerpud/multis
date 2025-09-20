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

/* Table of constant values */

static integer c__48 = 48;
static integer c__16 = 16;
static integer c__2 = 2;
static integer c__8 = 8;
static integer c__36 = 36;
static integer c__20 = 20;
static integer c__47 = 47;
static integer c__42 = 42;
static integer c__34 = 34;
static integer c__21 = 21;
static integer c__12 = 12;
static integer c__45 = 45;
static integer c__124 = 124;
static integer c__39 = 39;
static integer c__24 = 24;
static integer c__95 = 95;
static integer c__6 = 6;
static integer c__0 = 0;
static integer c__153 = 153;
static integer c__1 = 1;
static integer c__32 = 32;
static integer c__5 = 5;
static integer c__187 = 187;
static integer c__7 = 7;
static integer c__40 = 40;
static integer c__1026 = 1026;
static integer c__26 = 26;
static integer c__23 = 23;
static integer c__22 = 22;
static integer c__19 = 19;
static integer c__18 = 18;
static integer c__17 = 17;
static integer c__15 = 15;
static integer c__14 = 14;
static integer c__13 = 13;
static integer c__50 = 50;
static integer c__11 = 11;
static integer c__500 = 500;
static integer c__10 = 10;
static integer c__3 = 3;
static integer c__4 = 4;
static integer c__425 = 425;
static integer c__427 = 427;
static integer c__435 = 435;
static integer c__452 = 452;
static integer c__458 = 458;
static integer c__71 = 71;
static integer c__473 = 473;
static integer c_b239 = 4999999;
static integer c__482 = 482;
static integer c__484 = 484;
static integer c_n2 = -2;
static integer c__487 = 487;
static integer c__489 = 489;
static integer c_n1 = -1;
static integer c__512 = 512;
static integer c__515 = 515;
static integer c__518 = 518;
static real c_b283 = (float)-.6;
static integer c__521 = 521;
static integer c__522 = 522;
static integer c__541 = 541;
static integer c__544 = 544;
static integer c__547 = 547;
static integer c__584 = 584;
static integer c__585 = 585;
static integer c__586 = 586;
static integer c__587 = 587;
static integer c__588 = 588;
static integer c_n1000 = -1000;
static integer c__589 = 589;
static integer c__1031 = 1031;
static integer c__1041 = 1041;
static integer c__611 = 611;
static integer c__618 = 618;
static integer c_n4 = -4;
static integer c__619 = 619;
static integer c__620 = 620;
static integer c__621 = 621;
static integer c__9 = 9;
static integer c__622 = 622;
static integer c__623 = 623;
static integer c__624 = 624;
static integer c__625 = 625;
static integer c__626 = 626;
static integer c__631 = 631;
static integer c__43 = 43;
static integer c__62 = 62;
static integer c__641 = 641;
static integer c__643 = 643;
static integer c__659 = 659;
static integer c__661 = 661;
static integer c_n3 = -3;
static integer c__667 = 667;
static integer c__669 = 669;
static integer c__670 = 670;
static integer c__671 = 671;
static integer c__673 = 673;
static integer c__675 = 675;
static integer c__60 = 60;
static integer c__684 = 684;
static integer c__29 = 29;
static integer c__28 = 28;
static integer c__692 = 692;
static integer c__697 = 697;
static integer c__698 = 698;
static integer c__699 = 699;
static integer c__100 = 100;
static integer c__705 = 705;
static integer c__707 = 707;
static integer c__65 = 65;
static integer c__708 = 708;
static integer c__1000 = 1000;
static integer c__712 = 712;
static integer c__713 = 713;
static integer c__714 = 714;
static integer c__715 = 715;
static integer c__716 = 716;
static integer c__719 = 719;
static integer c__721 = 721;
static integer c__722 = 722;
static integer c__724 = 724;
static integer c__727 = 727;
static integer c__728 = 728;
static integer c__729 = 729;
static integer c__730 = 730;
static integer c__741 = 741;
static integer c__745 = 745;
static integer c_n20 = -20;
static integer c__746 = 746;
static integer c__750 = 750;
static integer c__751 = 751;
static integer c__360 = 360;
static integer c__769 = 769;
static integer c__771 = 771;
static integer c__778 = 778;
static integer c__779 = 779;
static integer c__780 = 780;
static integer c__783 = 783;
static integer c__786 = 786;
static integer c__787 = 787;
static integer c__788 = 788;
static integer c__789 = 789;
static integer c__790 = 790;
static integer c__791 = 791;
static integer c__792 = 792;
static integer c__793 = 793;
static integer c__796 = 796;
static integer c__798 = 798;
static integer c__799 = 799;
static integer c__801 = 801;
static integer c__802 = 802;
static integer c__803 = 803;
static integer c__804 = 804;
static integer c__805 = 805;
static integer c__809 = 809;
static integer c__813 = 813;
static integer c__822 = 822;
static integer c__823 = 823;
static integer c__824 = 824;
static integer c__827 = 827;
static integer c__25 = 25;
static integer c__44 = 44;
static integer c__942 = 942;
static integer c__955 = 955;
static integer c__956 = 956;
static integer c__957 = 957;
static integer c__958 = 958;
static integer c__959 = 959;
static integer c__960 = 960;
static integer c__961 = 961;
static integer c__977 = 977;
static integer c__982 = 982;
static integer c__984 = 984;
static integer c__1030 = 1030;
static integer c__1045 = 1045;
static integer c__1032 = 1032;
static integer c__536 = 536;
static integer c__80 = 80;
static integer c__1048 = 1048;
static integer c__1049 = 1049;
static integer c__35 = 35;
static integer c__54 = 54;
static integer c__79 = 79;
static integer c__46 = 46;
static integer c__1146 = 1146;
static integer c__1165 = 1165;
static integer c__1171 = 1171;
static integer c__1179 = 1179;
static integer c__1180 = 1180;
static integer c__1183 = 1183;
static integer c__1185 = 1185;
static integer c__1035 = 1035;
static integer c__1315 = 1315;
static integer c__1317 = 1317;
static integer c__1318 = 1318;
static integer c__1319 = 1319;
static integer c__1320 = 1320;
static integer c__1321 = 1321;
static integer c__1336 = 1336;
static integer c__1338 = 1338;
static integer c__1341 = 1341;
static integer c__1342 = 1342;
static integer c__1434 = 1434;
static integer c__1436 = 1436;
static integer c__1445 = 1445;
static integer c__1446 = 1446;
static integer c__1448 = 1448;
static integer c__1455 = 1455;
static integer c__1457 = 1457;
static integer c__1459 = 1459;
static integer c__1474 = 1474;
static integer c__1475 = 1475;
static integer c__1476 = 1476;
static integer c__1477 = 1477;
static integer c__1478 = 1478;
static integer c__1479 = 1479;
static integer c__1538 = 1538;
static integer c__1551 = 1551;
static integer c__1604 = 1604;
static integer c__1610 = 1610;
static integer c__1612 = 1612;
static integer c__1614 = 1614;
static integer c__1615 = 1615;
static integer c__1618 = 1618;
static integer c__1619 = 1619;
static integer c__1620 = 1620;
static integer c__1638 = 1638;
static integer c__1639 = 1639;
static integer c__1640 = 1640;
static integer c__1655 = 1655;
static integer c__1656 = 1656;
static integer c__1658 = 1658;
static integer c__1664 = 1664;
static integer c__1665 = 1665;
static integer c__1666 = 1666;
static integer c__1667 = 1667;
static integer c__1668 = 1668;
static integer c__1669 = 1669;
static integer c__52 = 52;
static integer c__1681 = 1681;
static integer c__37 = 37;
static integer c__1719 = 1719;
static integer c__1736 = 1736;
static integer c__1822 = 1822;
static integer c__1823 = 1823;
static integer c__1824 = 1824;
static integer c__1833 = 1833;
static integer c__1835 = 1835;
static integer c__1841 = 1841;
static integer c__1845 = 1845;
static integer c__1854 = 1854;
static integer c__1856 = 1856;
static integer c__1857 = 1857;
static integer c_n10 = -10;
static integer c__1861 = 1861;
static integer c__1863 = 1863;
static integer c__1866 = 1866;
static integer c__1868 = 1868;
static integer c__1871 = 1871;
static integer c__1872 = 1872;
static integer c__1881 = 1881;
static integer c__1882 = 1882;
static integer c__1893 = 1893;
static integer c__1900 = 1900;
static integer c__78 = 78;
static integer c__1905 = 1905;
static integer c__1908 = 1908;
static integer c__1910 = 1910;
static integer c__1913 = 1913;
static integer c__1916 = 1916;
static integer c__1964 = 1964;
static integer c__1977 = 1977;
static integer c__58 = 58;
static integer c__1996 = 1996;
static integer c__2019 = 2019;
static integer c__2023 = 2023;
static integer c__2025 = 2025;

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

/* 		** STAR ** */

/* 		BY CHRIS CALDWELL */
/* 		  AT THE UNIVERSITY OF NEW HAMPSHIRE */



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

/*< 	real function smcos( deg ) >*/
doublereal smcos_(deg)
real *deg;
{
    /* System generated locals */
    real ret_val;

    /* Builtin functions */
    double cos();

    /* Local variables */
    static real d__;

/*< 	logical newang >*/
/*< 	common/nhcom/newang >*/
/*< 	d = deg >*/
    d__ = *deg;
/*< 	if( newang ) d = 90.0 - d >*/
    if (nhcom_1.newang) {
	d__ = (float)90. - d__;
    }
/*< 	smcos = cos( d * 3.141592654/180.0 ) >*/
    ret_val = cos(d__ * (float)3.141592654 / (float)180.);
/*< 	end >*/
    return ret_val;
} /* smcos_ */

/*< 	real function smsin( deg ) >*/
doublereal smsin_(deg)
real *deg;
{
    /* System generated locals */
    real ret_val;

    /* Builtin functions */
    double sin();

    /* Local variables */
    static real d__;

/*< 	logical newang >*/
/*< 	common/nhcom/newang >*/
/*< 	d = deg >*/
    d__ = *deg;
/*< 	if( newang ) d = 90.0 - d >*/
    if (nhcom_1.newang) {
	d__ = (float)90. - d__;
    }
/*< 	smsin = sin( d * 3.141592654/180.0 ) >*/
    ret_val = sin(d__ * (float)3.141592654 / (float)180.);
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* smsin_ */

/*< 	subro >*/
/* Subroutine */ int updscr_(iqx, iqy, isx, isy, ichar, damage, iplayr, hyper)
integer *iqx, *iqy, *isx, *isy, *ichar, *damage, *iplayr;
logical *hyper;
{
    /* Initialized data */

    static integer iolist[6] = { 0,42,43,32,45,46 };

    /* System generated locals */
    integer i__1, i__2;
    real r__1;

    /* Local variables */
    static integer i__, ix, iy, ifg, iox, ioy, ixq, iyq, isx1, isy1, quad[9]	
	    /* was [3][3] */, ival, iosx, iosy, iback;
    extern /* Subroutine */ int pback_();
    static integer ifore;
    static real rtemp;
    static integer ifgcol[6];
    extern /* Subroutine */ int getval_(), colcur_(), number_();
    static integer iqxinc, iqyinc, sector[121]	/* was [11][11] */;
    extern /* Subroutine */ int pcolor_(), chrout_(), string_(), cursor_();
    extern doublereal sqwrap_();


/*  --	ROUTINE UPDATE SENSORS */

/*< 	integer quad(3,3), sector(11,11), iolist(6), damage(7,2) >*/
/*< 	integer xbord(11,2), ybord(11,2), iqx, iqy, isx, isy, i >*/
/*< 	integer iox, ioy, iosx, iosy, ival, ixq, iyq, iqxinc, iqyinc >*/
/*< 	integer ichar, iplayr, isx1, isy1, ix, iy >*/
/*< 	real rtemp >*/
/*< 	logical hyper >*/
/*< 	integer ifgcol(6) >*/
/*< 	commo >*/
/*< 	data iolist/0,42,43,32,45,46/ >*/
    /* Parameter adjustments */
    damage -= 8;

    /* Function Body */
/*< 	ifgcol(1) = iclbla >*/
    ifgcol[0] = col_1.iclbla;
/*< 	ifgcol(2) = iclyel >*/
    ifgcol[1] = col_1.iclyel;
/*< 	ifgcol(3) = icllbl >*/
    ifgcol[2] = col_1.icllbl;
/*< 	ifgcol(4) = iclbla >*/
    ifgcol[3] = col_1.iclbla;
/*< 	ifgcol(5) = iclwhi >*/
    ifgcol[4] = col_1.iclwhi;
/*< 	ifgcol(6) = iclred >*/
    ifgcol[5] = col_1.iclred;

/*  --	UPDATE QUADRANT POSITION */

/*< 	if( (iqx .eq. iox) .and. (ichar .ne. 78) )goto 15 >*/
    if (*iqx == iox && *ichar != 78) {
	goto L15;
    }
/*< 	call colcur( 48, 16 ) >*/
    colcur_(&c__48, &c__16);
/*< 	do 10 i= -1, 1 >*/
    for (i__ = -1; i__ <= 1; ++i__) {
/*< 	    call number(2, mod( iqx + i + 9, 10 ) + 1, 8 ) >*/
	i__1 = (*iqx + i__ + 9) % 10 + 1;
	number_(&c__2, &i__1, &c__8);
/*< 10	continue >*/
/* L10: */
    }
/*< 	call colcur( 36, 20 ) >*/
    colcur_(&c__36, &c__20);
/*< 	call number(2, iqx, 2 ) >*/
    number_(&c__2, iqx, &c__2);

/*< 15	if( (iqy .eq. ioy) .and. (ichar .ne. 78) ) goto 30 >*/
L15:
    if (*iqy == ioy && *ichar != 78) {
	goto L30;
    }
/*< 	do 20 i= -1, 1 >*/
    for (i__ = -1; i__ <= 1; ++i__) {
/*< 	    call colcur( 47, 20 + i*2 ) >*/
	i__1 = (i__ << 1) + 20;
	colcur_(&c__47, &i__1);
/*< 	    call number(2, mod( iqy + i + 9, 10 ) + 1, 2 ) >*/
	i__1 = (*iqy + i__ + 9) % 10 + 1;
	number_(&c__2, &i__1, &c__2);
/*< 20	continue >*/
/* L20: */
    }
/*< 	call colcur( 42, 20 ) >*/
    colcur_(&c__42, &c__20);
/*< 	call number(2, iqy, 2 ) >*/
    number_(&c__2, iqy, &c__2);
/*< 30	iox = iqx >*/
L30:
    iox = *iqx;
/*< 	ioy = iqy >*/
    ioy = *iqy;

/*  --	UPDATE SECTOR POSITION */

/*< 	if( isx .eq. iosx .and. ichar .ne. 78 ) goto 40 >*/
    if (*isx == iosx && *ichar != 78) {
	goto L40;
    }
/*< 	call colcur( 34, 21 ) >*/
    colcur_(&c__34, &c__21);
/*< 	call number(2, isx, 2 ) >*/
    number_(&c__2, isx, &c__2);
/*< 	if( 6-iosx .lt. 1 ) goto 35 >*/
    if (6 - iosx < 1) {
	goto L35;
    }
/*< 	call cursor( (6-iosx)*2 + 1, 12 ) >*/
    i__1 = (6 - iosx << 1) + 1;
    cursor_(&i__1, &c__12);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 35	if( 16-iosx .gt. 11 ) goto 37 >*/
L35:
    if (16 - iosx > 11) {
	goto L37;
    }
/*< 	call cursor( (16-iosx)*2 + 1, 12 ) >*/
    i__1 = (16 - iosx << 1) + 1;
    cursor_(&i__1, &c__12);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 37	if( 6-isx .lt. 1 ) goto 39 >*/
L37:
    if (6 - *isx < 1) {
	goto L39;
    }
/*< 	call cursor( (6-isx)*2 + 1, 12 ) >*/
    i__1 = (6 - *isx << 1) + 1;
    cursor_(&i__1, &c__12);
/*< 	call pcolor( icldbl ) >*/
    pcolor_(&col_1.icldbl);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call chrout(124) >*/
    chrout_(&c__124);
/*< 39	if( 16-isx .gt. 11 ) goto 40 >*/
L39:
    if (16 - *isx > 11) {
	goto L40;
    }
/*< 	call cursor( (16-isx)*2 + 1, 12 ) >*/
    i__1 = (16 - *isx << 1) + 1;
    cursor_(&i__1, &c__12);
/*< 	call pcolor( icldbl ) >*/
    pcolor_(&col_1.icldbl);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call chrout(124) >*/
    chrout_(&c__124);
/*< 40	iosx = isx >*/
L40:
    iosx = *isx;

/*< 	if( isy .eq. iosy .and. ichar .ne. 78 ) goto 49 >*/
    if (*isy == iosy && *ichar != 78) {
	goto L49;
    }
/*< 	call colcur( 39, 21 ) >*/
    colcur_(&c__39, &c__21);
/*< 	call number(2, isy, 2 ) >*/
    number_(&c__2, isy, &c__2);
/*< 43	if( 6-iosy .lt. 1 ) goto 45 >*/
/* L43: */
    if (6 - iosy < 1) {
	goto L45;
    }
/*< 	call cursor( 24, (6-iosy) + 12 ) >*/
    i__1 = 6 - iosy + 12;
    cursor_(&c__24, &i__1);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call chrout(124) >*/
    chrout_(&c__124);
/*< 45	if( 16-iosy .gt. 11 ) goto 47 >*/
L45:
    if (16 - iosy > 11) {
	goto L47;
    }
/*< 	call cursor( 24, (16-iosy) + 12 ) >*/
    i__1 = 16 - iosy + 12;
    cursor_(&c__24, &i__1);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call chrout(124) >*/
    chrout_(&c__124);
/*< 47	if( 6-isy .lt. 1 ) goto 48 >*/
L47:
    if (6 - *isy < 1) {
	goto L48;
    }
/*< 	call cursor( 24, (6-isy) + 12 ) >*/
    i__1 = 6 - *isy + 12;
    cursor_(&c__24, &i__1);
/*< 	call pcolor( icldbl ) >*/
    pcolor_(&col_1.icldbl);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call chrout(95) >*/
    chrout_(&c__95);
/*< 48	if( 16-isy .gt. 11 ) goto 49 >*/
L48:
    if (16 - *isy > 11) {
	goto L49;
    }
/*< 	call cursor( 24, (16-isy) + 12 ) >*/
    i__1 = 16 - *isy + 12;
    cursor_(&c__24, &i__1);
/*< 	call pcolor( icldbl ) >*/
    pcolor_(&col_1.icldbl);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call chrout(95) >*/
    chrout_(&c__95);
/*< 49	iosy = isy >*/
L49:
    iosy = *isy;

/*  --	UPDATE L.R. SENSOR */

/*< 	do 50 iqxinc = -1, 1 >*/
    for (iqxinc = -1; iqxinc <= 1; ++iqxinc) {
/*< 	    do 50 iqyinc = -1, 1 >*/
	for (iqyinc = -1; iqyinc <= 1; ++iqyinc) {
/*< 		ixq = mod( iqx + iqxinc + 9, 10 ) + 1 >*/
	    ixq = (*iqx + iqxinc + 9) % 10 + 1;
/*< 		iyq = mod( iqy + iqyinc + 9, 10 ) + 1 >*/
	    iyq = (*iqy + iqyinc + 9) % 10 + 1;
/*< 		call getval(6, 0,153,  2, ixq, iyq, ival ) >*/
	    getval_(&c__6, &c__0, &c__153, &c__2, &ixq, &iyq, &ival);
/*< 		if( iqxinc.eq.0 .and. iqyinc.eq.0 ) ival=ival-1000 >*/
	    if (iqxinc == 0 && iqyinc == 0) {
		ival += -1000;
	    }
/*< 		if( damage(3,1) .ne. 0 ) ival = 100000 >*/
	    if (damage[10] != 0) {
		ival = 100000;
	    }
/*< 		if(  >*/
	    if (quad[iqxinc + 2 + (iqyinc + 2) * 3 - 4] == ival && *ichar != 
		    78) {
		goto L50;
	    }
/*< 		quad( iqxinc+2, iqyinc+2 ) = ival >*/
	    quad[iqxinc + 2 + (iqyinc + 2) * 3 - 4] = ival;
/*< 		call colcur( iqxinc*8 + 59, iqyinc*2 + 20 ) >*/
	    i__1 = (iqxinc << 3) + 59;
	    i__2 = (iqyinc << 1) + 20;
	    colcur_(&i__1, &i__2);
/*< 		if( ival .le. 9999 ) goto 41 >*/
	    if (ival <= 9999) {
		goto L41;
	    }
/*< 		call pback( iclwhi ) >*/
	    pback_(&col_1.iclwhi);
/*< 		call pcolor( iclbla ) >*/
	    pcolor_(&col_1.iclbla);
/*< 		call string(1,' -----  ^E') >*/
	    string_(&c__1, " -----  ^E", (ftnlen)10);
/*< 		goto 50 >*/
	    goto L50;
/*< 41		ifg = iclwhi >*/
L41:
	    ifg = col_1.iclwhi;
/*< 		if( ival .gt.    0 ) ifg = iclyel >*/
	    if (ival > 0) {
		ifg = col_1.iclyel;
	    }
/*< 		if( ival .ge.   10 ) ifg = icllbl >*/
	    if (ival >= 10) {
		ifg = col_1.icllbl;
	    }
/*< 		if( ival .ge.  100 ) ifg = iclpur >*/
	    if (ival >= 100) {
		ifg = col_1.iclpur;
	    }
/*< 		if( ival .ge. 1000 ) ifg = iclred >*/
	    if (ival >= 1000) {
		ifg = col_1.iclred;
	    }
/*< 		call pback( iclbla ) >*/
	    pback_(&col_1.iclbla);
/*< 		call pcolor( ifg ) >*/
	    pcolor_(&ifg);
/*< 		call chrout(32) >*/
	    chrout_(&c__32);
/*< 		call number(2, ival, 5 ) >*/
	    number_(&c__2, &ival, &c__5);
/*< 		call chrout(32) >*/
	    chrout_(&c__32);
/*< 50	continue >*/
L50:
	    ;
	}
    }

/*  --	UPDATE S.R. SENSOR */

/*< 	do 60 ix = -5, 5 >*/
    for (ix = -5; ix <= 5; ++ix) {
/*< 	    iqxinc = iqx >*/
	iqxinc = *iqx;
/*< 	    rtemp = sqwrap( iqxinc, isx1, float(ix+isx) ) >*/
	r__1 = (real) (ix + *isx);
	rtemp = sqwrap_(&iqxinc, &isx1, &r__1);
/*< 	    do 60 iy = -5, 5 >*/
	for (iy = -5; iy <= 5; ++iy) {
/*< 		if( ix .eq. 0 .and. iy .eq. 0 ) goto 60 >*/
	    if (ix == 0 && iy == 0) {
		goto L60;
	    }
/*< 		iqyinc = iqy >*/
	    iqyinc = *iqy;
/*< 		rtemp = sqwrap( iqyinc, isy1, float(iy+isy) ) >*/
	    r__1 = (real) (iy + *isy);
	    rtemp = sqwrap_(&iqyinc, &isy1, &r__1);
/*< 		call getval(8, 0,187,  1, iqxinc, iqyinc, isx1, isy1, ival ) >*/
	    getval_(&c__8, &c__0, &c__187, &c__1, &iqxinc, &iqyinc, &isx1, &
		    isy1, &ival);
/*< 		if( damage( 2,1 ) .ne. 0 .or. hyper ) ival = 0 >*/
	    if (damage[9] != 0 || *hyper) {
		ival = 0;
	    }
/*< 		iback = iclwhi >*/
	    iback = col_1.iclwhi;
/*< 		ifore = iclred >*/
	    ifore = col_1.iclred;
/*< 		if( ival .ge. 6 ) goto 56 >*/
	    if (ival >= 6) {
		goto L56;
	    }
/*< 		if( ival .lt. 0 ) ival = 5 >*/
	    if (ival < 0) {
		ival = 5;
	    }
/*< 		iback = iclbla >*/
	    iback = col_1.iclbla;
/*< 		ifore= ifgcol( ival + 1 ) >*/
	    ifore = ifgcol[ival];
/*< 		ival = iolist( ival + 1 ) >*/
	    ival = iolist[ival];
/*< 56		continue >*/
L56:
/*< 		if(( >*/
	    if (*ichar != 78 && ival == sector[ix + 6 + (iy + 6) * 11 - 12] ||
		     *ichar == 78 && ival == 0) {
		goto L60;
	    }
/*< 		call cursor( 13+2*ix, 18+iy ) >*/
	    i__1 = (ix << 1) + 13;
	    i__2 = iy + 18;
	    cursor_(&i__1, &i__2);
/*< 		call pback( iback ) >*/
	    pback_(&iback);
/*< 		call pcolor( ifore ) >*/
	    pcolor_(&ifore);
/*< 		if( ival .eq. 0 ) call chrout( 32 ) >*/
	    if (ival == 0) {
		chrout_(&c__32);
	    }
/*< 		if( ival .ne. 0 ) call chrout( ival ) >*/
	    if (ival != 0) {
		chrout_(&ival);
	    }
/*< 		sector( 6+ix, 6+iy ) = ival >*/
	    sector[ix + 6 + (iy + 6) * 11 - 12] = ival;
/*< 60	continue >*/
L60:
	    ;
	}
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* updscr_ */


/*< 	real function rbound ( rnum ) >*/
doublereal rbound_(rnum)
real *rnum;
{
    /* System generated locals */
    real ret_val;


/*  --	ROUTINE LIMITS RNUM WITHIN 360.0 */

/*< 	real rnum >*/

/*< 	rbound = rnum >*/
    ret_val = *rnum;

/*< 10	if( rbound .ge. 0.0 ) goto 20 >*/
L10:
    if (ret_val >= (float)0.) {
	goto L20;
    }
/*< 	rbound = rbound + 360.0 >*/
    ret_val += (float)360.;
/*< 	goto 10 >*/
    goto L10;

/*< 20	if( rbound .lt. 360.0 ) return >*/
L20:
    if (ret_val < (float)360.) {
	return ret_val;
    }
/*< 	rbound = rbound - 360.0 >*/
    ret_val += (float)-360.;
/*< 	goto 20 >*/
    goto L20;
/*< 	end >*/
} /* rbound_ */


/*< 	subroutine damagm( damage, much, isheld ) >*/
/* Subroutine */ int damagm_(damage, much, isheld)
integer *damage, *much, *isheld;
{
    /* Initialized data */

    static integer iprio[7] = { 3,4,5,2,1,6,7 };

    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer i__, j, j1;
    extern integer iran_();
    static integer left;


/*  --	ROUTINE DOES AS MUCH DAMAGE AS IS SUITABLE FOR MUCH */

/*< 	integer damage( 7, 2 ), much, isheld, iprio( 7 ), left >*/
/*< 	integer i, j, j1 >*/
/*< 	data iprio/3,4,5,2,1,6,7/ >*/
    /* Parameter adjustments */
    damage -= 8;

    /* Function Body */

/*< 	if( much .gt. isheld ) goto 5 >*/
    if (*much > *isheld) {
	goto L5;
    }
/*< 	isheld = isheld - much >*/
    *isheld -= *much;
/*< 	return >*/
    return 0;

/*< 5	left = much - isheld >*/
L5:
    left = *much - *isheld;
/*< 	isheld = 0 >*/
    *isheld = 0;
/*< 	i = iran( 7 ) >*/
    i__ = iran_(&c__7);
/*< 	do 10 j = 1, i >*/
    i__1 = i__;
    for (j = 1; j <= i__1; ++j) {
/*< 7	    j1 = iran( 7 ) >*/
L7:
	j1 = iran_(&c__7);
/*< 	    if( iprio(j1) .lt. iran( 7 ) ) goto 7 >*/
	if (iprio[j1 - 1] < iran_(&c__7)) {
	    goto L7;
	}
/*< 	    damage(j1,1) = damage(j1,1) + 1231*left/iran(i) >*/
	damage[j1 + 7] += left * 1231 / iran_(&i__);
/*< 	    damage(j1,2) = max0( 0, damage(j1,2) - iran(40)*left/i ) >*/
/* Computing MAX */
	i__2 = 0, i__3 = damage[j1 + 14] - iran_(&c__40) * left / i__;
	damage[j1 + 14] = max(i__2,i__3);
/*< 10	continue >*/
/* L10: */
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* damagm_ */


/*< 	subroutine print >*/
/* Subroutine */ int print_()
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, j;
    extern /* Subroutine */ int pback_(), colcur_(), clrscr_(), pcolor_(), 
	    chrout_(), string_(), cursor_(), usrset_();


/*  --	OUTPUTS SCREEN CHARACTERS THAT ARE NOT UPDATED */

/*< 	integer i >*/
/*< 	commo >*/

/*< 	call usrset(1026,1) >*/
    usrset_(&c__1026, &c__1);

/*  --	DRAW S.R. SENSOR GRID */

/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call  >*/
    string_(&c__1, "+----------------------+^M^J^E", (ftnlen)30);
/*< 	do 5 i = 1, 11 >*/
    for (i__ = 1; i__ <= 11; ++i__) {
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 	    call pback( iclbla ) >*/
	pback_(&col_1.iclbla);
/*< 	    call string(1,'                      ^E') >*/
	string_(&c__1, "                      ^E", (ftnlen)24);
/*< 	    call pback( iclwhi ) >*/
	pback_(&col_1.iclwhi);
/*< 	    call string(1,'|^M^J^E') >*/
	string_(&c__1, "|^M^J^E", (ftnlen)7);
/*< 5	continue >*/
/* L5: */
    }
/*< 	call string(1,'+----------------------+^E') >*/
    string_(&c__1, "+----------------------+^E", (ftnlen)26);

/*  --	PUT USEFUL INFORMATION BESIDE IT */

/*< 	call colcur( 26, 23 ) >*/
    colcur_(&c__26, &c__23);
/*< 	call string(1,'Stardate:^E') >*/
    string_(&c__1, "Stardate:^E", (ftnlen)11);
/*< 	call colcur( 26, 22 ) >*/
    colcur_(&c__26, &c__22);
/*< 	call string(1,'Energy:    %^E') >*/
    string_(&c__1, "Energy:    %^E", (ftnlen)14);
/*< 	call colcur( 26, 21 ) >*/
    colcur_(&c__26, &c__21);
/*< 	call string(1,'Sector:    -^E') >*/
    string_(&c__1, "Sector:    -^E", (ftnlen)14);
/*< 	call colcur( 26, 20 ) >*/
    colcur_(&c__26, &c__20);
/*< 	call string(1,'Quadrant:    -^E') >*/
    string_(&c__1, "Quadrant:    -^E", (ftnlen)16);
/*< 	call colcur( 26, 19 ) >*/
    colcur_(&c__26, &c__19);
/*< 	call string(1,'Torpedos:^E') >*/
    string_(&c__1, "Torpedos:^E", (ftnlen)11);
/*< 	call colcur( 26, 18 ) >*/
    colcur_(&c__26, &c__18);
/*< 	call string(1,'Shields:    %^E') >*/
    string_(&c__1, "Shields:    %^E", (ftnlen)15);
/*< 	call colcur( 26, 17 ) >*/
    colcur_(&c__26, &c__17);
/*< 	call string(1,'Degrees:^E') >*/
    string_(&c__1, "Degrees:^E", (ftnlen)10);
/*< 	call colcur( 26, 16 ) >*/
    colcur_(&c__26, &c__16);
/*< 	call string(1,'Bearing:^E') >*/
    string_(&c__1, "Bearing:^E", (ftnlen)10);
/*< 	call colcur( 26, 15 ) >*/
    colcur_(&c__26, &c__15);
/*< 	call string(1,'Warp:^E') >*/
    string_(&c__1, "Warp:^E", (ftnlen)7);
/*< 	call colcur( 26, 14 ) >*/
    colcur_(&c__26, &c__14);
/*< 	call string(1,'To warp:^E') >*/
    string_(&c__1, "To warp:^E", (ftnlen)10);
/*< 	call colcur( 26, 13 ) >*/
    colcur_(&c__26, &c__13);
/*< 	call string(1,'Banks:^E') >*/
    string_(&c__1, "Banks:^E", (ftnlen)8);

/*  --	DRAW L.R. SENSOR GRID */

/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	do 10 i= 0, 2 >*/
    for (i__ = 0; i__ <= 2; ++i__) {
/*< 	    call cursor( 50, 17 + i*2 ) >*/
	i__1 = (i__ << 1) + 17;
	cursor_(&c__50, &i__1);
/*< 	    call pback( iclwhi ) >*/
	pback_(&col_1.iclwhi);
/*< 	    call string(1,'+-------+-------+-------+^E') >*/
	string_(&c__1, "+-------+-------+-------+^E", (ftnlen)27);
/*< 	    call cursor( 50, 18 + i*2 ) >*/
	i__1 = (i__ << 1) + 18;
	cursor_(&c__50, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 	    do 9 j = 1, 3 >*/
	for (j = 1; j <= 3; ++j) {
/*< 	        call pback( iclbla ) >*/
	    pback_(&col_1.iclbla);
/*< 	        call string(1,'       ^E') >*/
	    string_(&c__1, "       ^E", (ftnlen)9);
/*< 		call pback( iclwhi ) >*/
	    pback_(&col_1.iclwhi);
/*< 		call chrout(124) >*/
	    chrout_(&c__124);
/*< 9	    continue >*/
/* L9: */
	}
/*< 10	continue >*/
/* L10: */
    }
/*< 	call cursor( 50, 23 ) >*/
    cursor_(&c__50, &c__23);
/*< 	call string(1,'+-------+-------+-------+^E') >*/
    string_(&c__1, "+-------+-------+-------+^E", (ftnlen)27);

/*  --	MAKE DAMAGE REPORT */

/*< 	call colcur( 1,11 ) >*/
    colcur_(&c__1, &c__11);
/*< 	call  >*/
    string_(&c__1, "Device        Repair state (Time)   Crew^M^J------      \
  -------------------   ----^M^JWarp engines^M^JS.R. sensors^M^JL.R. sensors\
^M^JTorpedos^M^JPhasers^M^JShields^M^JLife support^M^J^JCommand:^E", (ftnlen)
	    198);
/*< 	return >*/
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
    extern /* Subroutine */ int allcap_(), chrbuf_(), curbuf_(), colcur_();
    static integer indstr;
    extern /* Subroutine */ int chrout_(), string_();


/*  --	ROUTINE GET COMMAND FROM USER IF ONE PRESENT. */

/*< 	integer comara(81), index, arrind, ichar >*/
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
/*< 	if( ichar .eq. 27 .and. index .eq. 0 ) goto 15 >*/
    if (*ichar == 27 && index == 0) {
	goto L15;
    }
/*< 	if( ichar .lt. 32 ) goto 45 >*/
    if (*ichar < 32) {
	goto L45;
    }
/*< 	if( index .ge. 80 ) goto 50 >*/
    if (index >= 80) {
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
/*< 	call curbuf >*/
    curbuf_();
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
/*< 	call curbuf >*/
    curbuf_();
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
/*< 	call curbuf >*/
    curbuf_();
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
/*< 	call allcap( comara, 2 )	! rest of cmd is numbers or message >*/
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
/*< 	call curbuf >*/
    curbuf_();
/*< 	call nap( 500, 4 ) >*/
    nap_(&c__500, &c__4);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* comand_ */


/*< 	subroutine initdb >*/
/* Subroutine */ int initdb_()
{
    /* Initialized data */

    static integer inmlst[3] = { 200,5,4 };

    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Builtin functions */
    integer pow_ii();

    /* Local variables */
    static integer i__, j, i1, iqx, iqy, isx, isy;
    extern integer iran_();
    static integer ival;
    extern /* Subroutine */ int init_(), nova_(), addval_(), getval_(), 
	    unlock_(), putval_();


/*  -	INITIALIZE HISEGMENT */

/*< 	integer inmlst(3), iqx, iqy, isx, isy, ival, i, i1, j >*/
/*< 	data inmlst/ 200, 5, 4 / >*/

/*  --	CREATE NEEDED CORE */

/* 	ARRAY #1 CONTAINS EVERYTHING IN THE GALAXY */
/*< 	call init(8, 0,425, 1,36,10,10,10,10) >*/
    init_(&c__8, &c__0, &c__425, &c__1, &c__36, &c__10, &c__10, &c__10, &
	    c__10);
/* 	ARRAY #2 CONTAINS L.R. INFORMATION FOR THE ENIRE GALAXY */
/*< 	call init(6, 0,427, 2,36,10,10) >*/
    init_(&c__6, &c__0, &c__427, &c__2, &c__36, &c__10, &c__10);
/* 	ARRAY #3 CONTAINS GENERAL INFORMATION */
/* 	ITEM	CONTAINS */
/* 	1	# OF PLAYERS */
/* 	2	CURRENT DATE */
/* 	3	DESTINATION OF LAST SEND */
/* 	4	VICTIM OF AXIS */
/* 	5	CURRENT ENERGY OF AXIS */
/*< 	call init(5, 0,435, 3,36,10) >*/
    init_(&c__5, &c__0, &c__435, &c__3, &c__36, &c__10);
/* 	ARRAY #4 CONTAINS INFORMATION ABOUT EACH PLAYER */
/* 	ITEM	CONTAINS */
/* 	1	JOB (OR IF AXIS, CONTAINS NEGATIVE OF CONTROLLER) */
/* 	2-3	PLAYER'S NAME */
/* 	4	PHOTON TORPEDO AND PHASER FLAGS */
/* 	5	HOW FAST SHIP MOVES */
/* 	6	IF HIT, WHO HIT ME */
/* 	7	IF HIT, HOW FAST HE WAS MOVING */
/* 	8	DEGREE HEADING OF SHIP */
/* 	9,10	QUADRANT LOCATION OF SHIP */
/* 	11,12	SECTOR LOCATION OF SHIP */
/* 	13	DOCKING ENERGY */
/* 	14	DOCKING TORPEDOS */
/* 	15	DOCKING CREW */
/* 	16	#KILLS FOR PLAYER */
/* 	17	WHO SHOT AT ME */
/*< 	call init(6, 0,452, 4,36,26,17) >*/
    init_(&c__6, &c__0, &c__452, &c__4, &c__36, &c__26, &c__17);
/* 	ARRAY #5 CONTAINS INFORMATION FOR COMMUNICATION */
/* 	ITEM	CONTAINS */
/* 	1	LENGTH OF MESSAGE */
/* 	2	SOURCE OF MESSAGE */
/* 	3-71	MESSAGE */
/*< 	call init(5, 0,458, 5,7,71) >*/
    init_(&c__5, &c__0, &c__458, &c__5, &c__7, &c__71);

/*  --	CREATE A FEW STORMS */

/*< 	ival = iran(8) >*/
    ival = iran_(&c__8);
/*< 	do 10 i=1, ival >*/
    i__1 = ival;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    iqx = iran(10) >*/
	iqx = iran_(&c__10);
/*< 	    iqy = iran(10) >*/
	iqy = iran_(&c__10);
/*< 	    isx = iran(10) >*/
	isx = iran_(&c__10);
/*< 	    isy = iran(10) >*/
	isy = iran_(&c__10);
/*< 	    call nova( iqx, iqy, isx, isy ) >*/
	nova_(&iqx, &iqy, &isx, &isy);
/*< 10	continue >*/
/* L10: */
    }

/*  --	CREATE A RANDOM STARDATE */

/*< 	call putval(5, 0,473,  3, 2, iran(4999999)+1000000 ) >*/
    i__1 = iran_(&c_b239) + 1000000;
    putval_(&c__5, &c__0, &c__473, &c__3, &c__2, &i__1);

/*  --	CREATE STARS, STARBASES AND BLACK HOLES */

/*< 	do 40 i1 = 1, 3 >*/
    for (i1 = 1; i1 <= 3; ++i1) {
/*< 	    i=i1 >*/
	i__ = i1;
/*< 	    do 40 j=1, inmlst(i) >*/
	i__1 = inmlst[i__ - 1];
	for (j = 1; j <= i__1; ++j) {
/*< 20		iqx = iran( 10 ) >*/
L20:
	    iqx = iran_(&c__10);
/*< 		iqy = iran( 10 ) >*/
	    iqy = iran_(&c__10);
/*< 		call getval(6, 0,482,  2, iqx, iqy, ival ) >*/
	    getval_(&c__6, &c__0, &c__482, &c__2, &iqx, &iqy, &ival);
/*< 		if( ival .ge. 9 ) goto 20 >*/
	    if (ival >= 9) {
		goto L20;
	    }
/*< 		call addval(4, 0,484,  -2, 10**(i-1) ) >*/
	    i__3 = i__ - 1;
	    i__2 = pow_ii(&c__10, &i__3);
	    addval_(&c__4, &c__0, &c__484, &c_n2, &i__2);
/*< 30		isx = iran( 10 ) >*/
L30:
	    isx = iran_(&c__10);
/*< 		isy = iran( 10 ) >*/
	    isy = iran_(&c__10);
/*< 		call getval(8, 0,487,  1, iqx, iqy, isx, isy, ival ) >*/
	    getval_(&c__8, &c__0, &c__487, &c__1, &iqx, &iqy, &isx, &isy, &
		    ival);
/*< 		if( ival .ne. 0 ) goto 30 >*/
	    if (ival != 0) {
		goto L30;
	    }
/*< 		call putval(4, 0,489,  -1, i ) >*/
	    putval_(&c__4, &c__0, &c__489, &c_n1, &i__);
/*< 		if( i1 .eq. 3 ) call nova( iqx, iqy, isx, isy ) >*/
	    if (i1 == 3) {
		nova_(&iqx, &iqy, &isx, &isy);
	    }
/*< 40	continue >*/
/* L40: */
	}
    }
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* initdb_ */


/*< 	subroutine nova( iqx, iqy, isx, isy ) >*/
/* Subroutine */ int nova_(iqx, iqy, isx, isy)
integer *iqx, *iqy, *isx, *isy;
{
    /* Initialized data */

    static integer inox[21] = { -1,0,1,-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2,-1,
	    0,1 };
    static integer inoy[21] = { -2,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,0,1,1,1,1,1,2,
	    2,2 };

    /* System generated locals */
    integer i__1;
    real r__1;

    /* Local variables */
    static integer i__;
    static real sx, sy;
    static integer iqx1, iqy1, isx1, isy1;
    extern integer iran_();
    static integer ival;
    extern /* Subroutine */ int addval_(), getval_(), secnov_(), putval_();
    extern doublereal sqwrap_();


/*  --	ROUTINE CREATES NOVAE FOR ANY NUMBER OF REASONS */

/*< 	integer i, iqx, iqy, iqx1, iqy1, isx, isy, isx1, isy1 >*/
/*< 	integer ival, inox(21), inoy(21) >*/
/*< 	real sx, sy >*/
/*< 	data  >*/
/*< 	data  >*/

/*< 	do 10 i = 1, 21 >*/
    for (i__ = 1; i__ <= 21; ++i__) {
/*< 	    iqx1 = iqx >*/
	iqx1 = *iqx;
/*< 	    iqy1 = iqy >*/
	iqy1 = *iqy;
/*< 	    sx = sqwrap( iqx1, isx1, float( isx+inox(i) ) ) >*/
	r__1 = (real) (*isx + inox[i__ - 1]);
	sx = sqwrap_(&iqx1, &isx1, &r__1);
/*< 	    sy = sqwrap( iqy1, isy1, float( isy+inoy(i) ) ) >*/
	r__1 = (real) (*isy + inoy[i__ - 1]);
	sy = sqwrap_(&iqy1, &isy1, &r__1);
/*< 	    call getval(8, 0,512,  1, iqx1, iqy1, isx1, isy1, ival ) >*/
	getval_(&c__8, &c__0, &c__512, &c__1, &iqx1, &iqy1, &isx1, &isy1, &
		ival);
/*< 	    if( ival .ne. 0 ) goto 5 >*/
	if (ival != 0) {
	    goto L5;
	}
/*< 	    if( iran(10) .lt. 4 ) goto 10 >*/
	if (iran_(&c__10) < 4) {
	    goto L10;
	}
/*< 	    call putval(4, 0,515,  -1, 4 ) >*/
	putval_(&c__4, &c__0, &c__515, &c_n1, &c__4);
/*< 	    goto 10 >*/
	goto L10;
/*< 5	    if( ival .lt. 7 ) goto 8 >*/
L5:
	if (ival < 7) {
	    goto L8;
	}
/*< 	    call putval(6, 0,518,  4, ival-64, 7, -0.6 ) >*/
	i__1 = ival - 64;
	putval_(&c__6, &c__0, &c__518, &c__4, &i__1, &c__7, &c_b283);
/*< 	    goto 10 >*/
	goto L10;
/*< 8	    if( ival .ne. 1 ) goto 10 >*/
L8:
	if (ival != 1) {
	    goto L10;
	}
/*< 	    call putval(4, 0,521,  -1, 0 ) >*/
	putval_(&c__4, &c__0, &c__521, &c_n1, &c__0);
/*< 	    call addval(6, 0,522,  2, iqx1, iqy1, -1 ) >*/
	addval_(&c__6, &c__0, &c__522, &c__2, &iqx1, &iqy1, &c_n1);
/*< 	    call secnov( iqx1, iqy1, isx1, isy1, inox, inoy ) >*/
	secnov_(&iqx1, &iqy1, &isx1, &isy1, inox, inoy);
/*< 10	continue >*/
L10:
	;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* nova_ */



/*< 	subroutine secnov( iqx, iqy, isx, isy, inox, inoy ) >*/
/* Subroutine */ int secnov_(iqx, iqy, isx, isy, inox, inoy)
integer *iqx, *iqy, *isx, *isy, *inox, *inoy;
{
    /* System generated locals */
    integer i__1;
    real r__1;

    /* Local variables */
    static integer i__;
    static real sx, sy;
    static integer iqx1, iqy1, isx1, isy1;
    extern integer iran_();
    static integer ival;
    extern /* Subroutine */ int getval_(), putval_();
    extern doublereal sqwrap_();


/*  --	ROUTINE PERFORMS A SECONDARY NOVA */

/*< 	integer i, iqx, iqy, iqx1, iqy1, isx, isy, isx1, isy1 >*/
/*< 	integer ival, inox(21), inoy(21) >*/
/*< 	real sx, sy >*/

/*< 	do 10 i = 1, 21 >*/
    /* Parameter adjustments */
    --inoy;
    --inox;

    /* Function Body */
    for (i__ = 1; i__ <= 21; ++i__) {
/*< 	    iqx1 = iqx >*/
	iqx1 = *iqx;
/*< 	    iqy1 = iqy >*/
	iqy1 = *iqy;
/*< 	    sx = sqwrap( iqx1, isx1, float( isx+inox(i) ) ) >*/
	r__1 = (real) (*isx + inox[i__]);
	sx = sqwrap_(&iqx1, &isx1, &r__1);
/*< 	    sy = sqwrap( iqy1, isy1, float( isy+inoy(i) ) ) >*/
	r__1 = (real) (*isy + inoy[i__]);
	sy = sqwrap_(&iqy1, &isy1, &r__1);
/*< 	    call getval(8, 0,541,  1, iqx1, iqy1, isx1, isy1, ival ) >*/
	getval_(&c__8, &c__0, &c__541, &c__1, &iqx1, &iqy1, &isx1, &isy1, &
		ival);
/*< 	    if( ival .ne. 0 ) goto 5 >*/
	if (ival != 0) {
	    goto L5;
	}
/*< 	    if( iran(10) .lt. 4 ) goto 10 >*/
	if (iran_(&c__10) < 4) {
	    goto L10;
	}
/*< 	    call putval(4, 0,544,  -1, 4 ) >*/
	putval_(&c__4, &c__0, &c__544, &c_n1, &c__4);
/*< 	    goto 10 >*/
	goto L10;
/*< 5	    if( ival .le. 6 ) goto 10 >*/
L5:
	if (ival <= 6) {
	    goto L10;
	}
/*< 	    call putval(6, 0,547,  4, ival-64, 7, -0.6 ) >*/
	i__1 = ival - 64;
	putval_(&c__6, &c__0, &c__547, &c__4, &i__1, &c__7, &c_b283);
/*< 10	continue >*/
L10:
	;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* secnov_ */


/*< 	real function sqwrap( iq, is, s ) >*/
doublereal sqwrap_(iq, is, s)
integer *iq, *is;
real *s;
{
    /* System generated locals */
    real ret_val;


/*  --	CONTROLS WRAP AROUND AND QS LOCATION */

/*< 	integer iq, is >*/
/*< 	real s >*/

/*< 	sqwrap = s >*/
    ret_val = *s;

/*< 10	if( sqwrap .ge. 0.5 )goto 20 >*/
L10:
    if (ret_val >= (float).5) {
	goto L20;
    }
/*< 	sqwrap = sqwrap + 10.0 >*/
    ret_val += (float)10.;
/*< 	iq = iq - 1 >*/
    --(*iq);
/*< 	goto 10 >*/
    goto L10;

/*< 20	if( sqwrap .lt. 10.5 )goto 30 >*/
L20:
    if (ret_val < (float)10.5) {
	goto L30;
    }
/*< 	sqwrap = sqwrap - 10.0 >*/
    ret_val += (float)-10.;
/*< 	iq = iq + 1 >*/
    ++(*iq);
/*< 	goto 20 >*/
    goto L20;

/*< 30	iq = mod( iq + 9, 10 ) + 1 >*/
L30:
    *iq = (*iq + 9) % 10 + 1;
/*< 	is = sqwrap + 0.5 >*/
    *is = ret_val + (float).5;
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* sqwrap_ */


/*< 	subroutine cease( iplayr, iqx, iqy, isx, isy, fault ) >*/
/* Subroutine */ int cease_(iplayr, iqx, iqy, isx, isy, fault)
integer *iplayr, *iqx, *iqy, *isx, *isy, *fault;
{
    static logical been;
    static integer ival;
    extern /* Subroutine */ int nova_(), close_(), addval_(), getval_(), 
	    colcur_(), unlock_(), exprog_(), putval_(), usrset_();


/*  --	ROUTINE GETS RID OF SHIP ON ^C OR EXIT COMMAND */

/*< 	integer iplayr, iqx, iqy, isx, isy, ival, fault >*/
/*< 	logical been >*/

/*< 	if( been ) return >*/
    if (been) {
	return 0;
    }
/*< 	been = .true. >*/
    been = TRUE_;
/*< 	call unlock >*/
    unlock_();
/*< 	if( fault .ne. 0 ) call addval(6, 0,584,  4, fault, 16, 1 ) >*/
    if (*fault != 0) {
	addval_(&c__6, &c__0, &c__584, &c__4, fault, &c__16, &c__1);
    }
/*< 	call addval(5, 0,585,  3, 1, -1 ) >*/
    addval_(&c__5, &c__0, &c__585, &c__3, &c__1, &c_n1);
/*< 	call getval(8, 0,586,  1, iqx, iqy, isx, isy, ival ) >*/
    getval_(&c__8, &c__0, &c__586, &c__1, iqx, iqy, isx, isy, &ival);
/*< 	if( ival .eq. iplayr+64 ) call putval(4, 0,587,  -1, 0 ) >*/
    if (ival == *iplayr + 64) {
	putval_(&c__4, &c__0, &c__587, &c_n1, &c__0);
    }
/*< 	call addval(6, 0,588,  2, iqx, iqy, -1000 ) >*/
    addval_(&c__6, &c__0, &c__588, &c__2, iqx, iqy, &c_n1000);
/*< 	call putval(6, 0,589,  4, iplayr, 1, 0 ) >*/
    putval_(&c__6, &c__0, &c__589, &c__4, iplayr, &c__1, &c__0);
/*< 	call nova( iqx, iqy, isx, isy ) >*/
    nova_(iqx, iqy, isx, isy);
/*< 	call usrset(1031,0) >*/
    usrset_(&c__1031, &c__0);
/*< 	call usrset(1026,0) >*/
    usrset_(&c__1026, &c__0);
/*< 	call usrset(1041,1) >*/
    usrset_(&c__1041, &c__1);
/*< 	call colcur(1,1) >*/
    colcur_(&c__1, &c__1);
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call exprog >*/
    exprog_();
/*< 	end >*/
} /* cease_ */


/*< 	subroutine upship( iplayr, ichar ) >*/
/* Subroutine */ int upship_(iplayr, ichar)
integer *iplayr, *ichar;
{
    /* System generated locals */
    integer i__1, i__2;
    real r__1, r__2;

    /* Builtin functions */
    double sqrt(), atan();

    /* Local variables */
    static integer i__, s[18], i1, ix, iy;
    static real sx, sy;
    extern integer job_();
    static integer ipn, iqx, iqy, isx, isy;
    static logical run;
    static integer ivx, ivy;
    static real degi;
    static integer idam;
    extern integer iran_();
    static integer ival, icnt, itim, ship[18];
    extern /* Subroutine */ int nova_();
    static logical orun;
    static integer ivqx, ivqy;
    extern integer itty_();
    static integer ivsx, ivsy, ival1, ibear;
    extern integer igtab_();
    static real adist;
    static integer ivjob, score, iocnt, iship, ijunk;
    extern doublereal smcos_();
    extern integer jstat_();
    extern doublereal smsin_();
    extern /* Subroutine */ int addval_();
    static real degree;
    extern logical logdin_();
    extern /* Subroutine */ int getval_();
    extern integer iright_();
    extern /* Subroutine */ int colcur_(), number_(), axisnd_();
    extern doublereal rbound_();
    static integer ivictm, inergy;
    extern integer isxbit_();
    extern /* Subroutine */ int chrout_(), string_(), putval_();
    extern doublereal sqwrap_();


/*  --	ROUTINE UPDATES SHIP ROSTER */

/*< 	integer ship(18), s(18), icnt, iocnt, i, i1, score >*/
/*< 	integer ival, iplayr, iship, ichar, iqx, iqy, isx, isy >*/
/*< 	logical run, orun, logdin >*/

/*< 	icnt = 0 >*/
    icnt = 0;
/*< 	do 20 i1=1,26 >*/
    for (i1 = 1; i1 <= 26; ++i1) {
/*< 	    i=i1 >*/
	i__ = i1;
/* 	    IMVAL = MOD( I, 7 ) + 1 */
/*< 	    call getval(6, 0,611,  4, i, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__611, &c__4, &i__, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 20 >*/
	if (ival == 0) {
	    goto L20;
	}
/*< 	    if( ival .lt. 0 ) goto 10 >*/
	if (ival < 0) {
	    goto L10;
	}
/*< 	    if( .not. logdin(ival) ) goto 8 >*/
	if (! logdin_(&ival)) {
	    goto L8;
	}
/*< 	    if( job(-1) .eq. 0 ) goto 10 >*/
	if (job_(&c_n1) == 0) {
	    goto L10;
	}
/*< 	    i >*/
	if (jstat_(&ival) != isxbit_("^C~", (ftnlen)3) && itty_(&ival) != -1) 
		{
	    goto L10;
	}
/*< 8	    call putval(4, 0,618,  -4, 0 ) >*/
L8:
	putval_(&c__4, &c__0, &c__618, &c_n4, &c__0);
/*< 	    call addval(5, 0,619,  3, 1, -1 ) >*/
	addval_(&c__5, &c__0, &c__619, &c__3, &c__1, &c_n1);
/*< 	    call putval(5, 0,620,  3, 3, 0 ) >*/
	putval_(&c__5, &c__0, &c__620, &c__3, &c__3, &c__0);
/*< 	    call getval(6, 0,621,  4, i, 9, iqx ) >*/
	getval_(&c__6, &c__0, &c__621, &c__4, &i__, &c__9, &iqx);
/*< 	    call getval(6, 0,622,  4, i, 10, iqy ) >*/
	getval_(&c__6, &c__0, &c__622, &c__4, &i__, &c__10, &iqy);
/*< 	    call addval(6, 0,623,  2, iqx, iqy, -1000 ) >*/
	addval_(&c__6, &c__0, &c__623, &c__2, &iqx, &iqy, &c_n1000);
/*< 	    call getval(6, 0,624,  4, i, 11, isx ) >*/
	getval_(&c__6, &c__0, &c__624, &c__4, &i__, &c__11, &isx);
/*< 	    call getval(6, 0,625,  4, i, 12, isy ) >*/
	getval_(&c__6, &c__0, &c__625, &c__4, &i__, &c__12, &isy);
/*< 	    call putval(8, 0,626,  1, iqx, iqy, isx, isy, 0 ) >*/
	putval_(&c__8, &c__0, &c__626, &c__1, &iqx, &iqy, &isx, &isy, &c__0);
/*< 	    goto 20 >*/
	goto L20;
/*< 10	    icnt = icnt + 1 >*/
L10:
	++icnt;
/*< 	    iship = i >*/
	iship = i__;
/*< 	    call getval(6, 0,631,  4, i, 16, score ) >*/
	getval_(&c__6, &c__0, &c__631, &c__4, &i__, &c__16, &score);
/*< 	    i >*/
	if (ship[icnt - 1] == i__ && *ichar != 78 && score == s[icnt - 1]) {
	    goto L19;
	}
/*< 	    if( icnt .le. 9 ) call colcur( 43, 12-icnt ) >*/
	if (icnt <= 9) {
	    i__1 = 12 - icnt;
	    colcur_(&c__43, &i__1);
	}
/*< 	    if( icnt .gt. 9 ) call colcur( 62, 21-icnt ) >*/
	if (icnt > 9) {
	    i__1 = 21 - icnt;
	    colcur_(&c__62, &i__1);
	}
/*< 	    call chrout( i+64 ) >*/
	i__1 = i__ + 64;
	chrout_(&i__1);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call number(1, score ) >*/
	number_(&c__1, &score);
/*< 	    call string(1,': ^E') >*/
	string_(&c__1, ": ^E", (ftnlen)4);
/*< 	    s(icnt) = score >*/
	s[icnt - 1] = score;
/*< 	    call getval(6, 0,641,  4, i, 2, ival ) >*/
	getval_(&c__6, &c__0, &c__641, &c__4, &i__, &c__2, &ival);
/*< 	    call string(3, ival, 6, 6 ) >*/
	string_(&c__3, &ival, &c__6, &c__6);
/*< 	    call getval(6, 0,643,  4, i, 3, ival ) >*/
	getval_(&c__6, &c__0, &c__643, &c__4, &i__, &c__3, &ival);
/*< 	    call string(3, ival, 6, 6 ) >*/
	string_(&c__3, &ival, &c__6, &c__6);
/*< 19	    ship(icnt) = i >*/
L19:
	ship[icnt - 1] = i__;
/*< 20	continue >*/
L20:
	;
    }

/*< 	if( icnt .ge. iocnt .or. ichar .eq. 78 ) goto 31 >*/
    if (icnt >= iocnt || *ichar == 78) {
	goto L31;
    }
/*< 	do 30 i= icnt+1, iocnt >*/
    i__1 = iocnt;
    for (i__ = icnt + 1; i__ <= i__1; ++i__) {
/*< 	    if( i .le. 9 ) call colcur( 43, 12-i ) >*/
	if (i__ <= 9) {
	    i__2 = 12 - i__;
	    colcur_(&c__43, &i__2);
	}
/*< 	    if( i .gt. 9 ) call colcur( 62, 21-i ) >*/
	if (i__ > 9) {
	    i__2 = 21 - i__;
	    colcur_(&c__62, &i__2);
	}
/*< 	    call string(1,'                  ^E') >*/
	string_(&c__1, "                  ^E", (ftnlen)20);
/*< 	    ship(i) = 0 >*/
	ship[i__ - 1] = 0;
/*< 30	continue >*/
/* L30: */
    }
/*< 31	continue >*/
L31:
/*< 	iocnt = icnt >*/
    iocnt = icnt;

/*< 	if( iplayr .ne. iship ) return >*/
    if (*iplayr != iship) {
	return 0;
    }
/*< 	call getval(5, 0,659,  3, 2, itim ) >*/
    getval_(&c__5, &c__0, &c__659, &c__3, &c__2, &itim);
/*< 	itim = itim + 1 >*/
    ++itim;
/*< 	call addval(4, 0,661,  -3, 1 ) >*/
    addval_(&c__4, &c__0, &c__661, &c_n3, &c__1);


/* ********************************************************** */
/* ***                 AXIS CONTROLLER                    *** */
/* ********************************************************** */

/*< 	call getval(5, 0,667,  3, 3, ival ) >*/
    getval_(&c__5, &c__0, &c__667, &c__3, &c__3, &ival);
/*< 	if( ival .ne. 1 ) goto 45 >*/
    if (ival != 1) {
	goto L45;
    }
/*< 	call getval(5, 0,669,  3, 4, ivictm ) >*/
    getval_(&c__5, &c__0, &c__669, &c__3, &c__4, &ivictm);
/*< 	call getval(5, 0,670,  5, 2, ival ) >*/
    getval_(&c__5, &c__0, &c__670, &c__5, &c__2, &ival);
/*< 	call getval(6, 0,671,  4, ival, 1, ivjob ) >*/
    getval_(&c__6, &c__0, &c__671, &c__4, &ival, &c__1, &ivjob);
/*< 	ipn = iright( igtab( ivjob, 2 ) ) >*/
    i__1 = igtab_(&ivjob, &c__2);
    ipn = iright_(&i__1);
/*< 	call getval(5, 0,673,  5, 3, ijunk ) >*/
    getval_(&c__5, &c__0, &c__673, &c__5, &c__3, &ijunk);
/*< 	if( ijunk .ne. 64 .or. ipn .ne. 7963 ) goto 41 >*/
    if (ijunk != 64 || ipn != 7963) {
	goto L41;
    }
/*< 	call getval(5, 0,675,  5, 4, ijunk ) >*/
    getval_(&c__5, &c__0, &c__675, &c__5, &c__4, &ijunk);
/*< 	if( ijunk .lt. 66 .or. ijunk .gt. 91 ) goto 41 >*/
    if (ijunk < 66 || ijunk > 91) {
	goto L41;
    }
/*< 	ival = ijunk - 64 >*/
    ival = ijunk - 64;
/*< 	call axisnd( ival, 13, 'You will die.' ) >*/
    axisnd_(&ival, &c__13, "You will die.", (ftnlen)13);
/*< 	goto 42 >*/
    goto L42;
/*< 41	if( ivictm .ne. 0 ) goto 43 >*/
L41:
    if (ivictm != 0) {
	goto L43;
    }
/*< 	call  >*/
    axisnd_(&ival, &c__60, "For your impertinence, you will be exterminated \
by the Axis.", (ftnlen)60);
/*< 42	call putval(5, 0,684,  3, 4, ival ) >*/
L42:
    putval_(&c__5, &c__0, &c__684, &c__3, &c__4, &ival);
/*< 	goto 45 >*/
    goto L45;
/*< 43	if( >*/
L43:
    if (ival != ivictm) {
	axisnd_(&ival, &c__29, "You will be eliminated later.", (ftnlen)29);
    }
/*< 	if( i >*/
    if (ival == ivictm) {
	axisnd_(&ival, &c__28, "Be silent before your death.", (ftnlen)28);
    }
/*< 45	call getval(6, 0,692,  4, 1, 1, ival ) >*/
L45:
    getval_(&c__6, &c__0, &c__692, &c__4, &c__1, &c__1, &ival);
/*< 	if( ival .ne. 0 ) goto 100 >*/
    if (ival != 0) {
	goto L100;
    }

/*  --	CREATE THE AXIS */

/*< 	call putval(6, 0,697,  4, 1, 2, isxbit('Axis~') ) >*/
    i__1 = isxbit_("Axis~", (ftnlen)5);
    putval_(&c__6, &c__0, &c__697, &c__4, &c__1, &c__2, &i__1);
/*< 	call putval(6, 0,698,  4, 1, 3, 0 ) >*/
    putval_(&c__6, &c__0, &c__698, &c__4, &c__1, &c__3, &c__0);
/*< 	call putval(5, 0,699,  3, 5, 100 ) >*/
    putval_(&c__5, &c__0, &c__699, &c__3, &c__5, &c__100);

/*< 50	iqx = iran( 10 ) >*/
L50:
    iqx = iran_(&c__10);
/*< 	iqy = iran( 10 ) >*/
    iqy = iran_(&c__10);
/*< 	isx = iran( 10 ) >*/
    isx = iran_(&c__10);
/*< 	isy = iran( 10 ) >*/
    isy = iran_(&c__10);
/*< 	call getval(8, 0,705,  1, iqx, iqy, isx, isy, ival1 ) >*/
    getval_(&c__8, &c__0, &c__705, &c__1, &iqx, &iqy, &isx, &isy, &ival1);
/*< 	if( ival1 .ne. 0 ) goto 50 >*/
    if (ival1 != 0) {
	goto L50;
    }
/*< 	call putval(4, 0,707,  -1, 65 ) >*/
    putval_(&c__4, &c__0, &c__707, &c_n1, &c__65);
/*< 	call addval(6, 0,708,  2, iqx, iqy, 1000 ) >*/
    addval_(&c__6, &c__0, &c__708, &c__2, &iqx, &iqy, &c__1000);
/*< 	goto 110 >*/
    goto L110;
/*< 100	if( ival .eq. -iplayr ) goto 120 >*/
L100:
    if (ival == -(*iplayr)) {
	goto L120;
    }
/*< 	call getval(6, 0,712,  4, 1, 9, iqx ) >*/
    getval_(&c__6, &c__0, &c__712, &c__4, &c__1, &c__9, &iqx);
/*< 	call getval(6, 0,713,  4, 1, 10, iqy ) >*/
    getval_(&c__6, &c__0, &c__713, &c__4, &c__1, &c__10, &iqy);
/*< 	call getval(6, 0,714,  4, 1, 11, isx ) >*/
    getval_(&c__6, &c__0, &c__714, &c__4, &c__1, &c__11, &isx);
/*< 	call getval(6, 0,715,  4, 1, 12, isy ) >*/
    getval_(&c__6, &c__0, &c__715, &c__4, &c__1, &c__12, &isy);
/*< 	call getval(8, 0,716,  1, iqx, iqy, isx, isy, ival1 ) >*/
    getval_(&c__8, &c__0, &c__716, &c__1, &iqx, &iqy, &isx, &isy, &ival1);
/*< 110	sx = isx + .5 >*/
L110:
    sx = isx + (float).5;
/*< 	sy = isy + .5 >*/
    sy = isy + (float).5;
/*< 	call putval(6, 0,719,  4, 1, 1, -iplayr ) >*/
    i__1 = -(*iplayr);
    putval_(&c__6, &c__0, &c__719, &c__4, &c__1, &c__1, &i__1);
/*< 120	call getval(5, 0,721,  3, 5, inergy ) >*/
L120:
    getval_(&c__5, &c__0, &c__721, &c__3, &c__5, &inergy);
/*< 	call getval(5, 0,722,  3, 4, ivictm ) >*/
    getval_(&c__5, &c__0, &c__722, &c__3, &c__4, &ivictm);
/*< 	if( ivictm .eq. 0 ) goto 147 >*/
    if (ivictm == 0) {
	goto L147;
    }
/*< 	call getval(6, 0,724,  4, ivictm, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__724, &c__4, &ivictm, &c__1, &ival);
/*< 	if( ival .eq. 0 ) goto 147 >*/
    if (ival == 0) {
	goto L147;
    }
/*< 	call getval(6, 0,727,  4, ivictm, 9, ivqx ) >*/
    getval_(&c__6, &c__0, &c__727, &c__4, &ivictm, &c__9, &ivqx);
/*< 	call getval(6, 0,728,  4, ivictm, 10, ivqy ) >*/
    getval_(&c__6, &c__0, &c__728, &c__4, &ivictm, &c__10, &ivqy);
/*< 	call getval(6, 0,729,  4, ivictm, 11, ivsx ) >*/
    getval_(&c__6, &c__0, &c__729, &c__4, &ivictm, &c__11, &ivsx);
/*< 	call getval(6, 0,730,  4, ivictm, 12, ivsy ) >*/
    getval_(&c__6, &c__0, &c__730, &c__4, &ivictm, &c__12, &ivsy);
/*< 	ix = iqx*10 + isx - 11 >*/
    ix = iqx * 10 + isx - 11;
/*< 	iy = iqy*10 + isy - 11 >*/
    iy = iqy * 10 + isy - 11;
/*< 	ivx = ivqx*10 + ivsx - 11 >*/
    ivx = ivqx * 10 + ivsx - 11;
/*< 	ivy = ivqy*10 + ivsy - 11 >*/
    ivy = ivqy * 10 + ivsy - 11;
/*< 	if( iabs( ivx-ix ) .gt. iabs( ivx+100-ix ) ) ivx = ivx + 100 >*/
    if ((i__1 = ivx - ix, abs(i__1)) > (i__2 = ivx + 100 - ix, abs(i__2))) {
	ivx += 100;
    }
/*< 	if( iabs( ivy-iy ) .gt. iabs( ivy+100-iy ) ) ivy = ivy + 100 >*/
    if ((i__1 = ivy - iy, abs(i__1)) > (i__2 = ivy + 100 - iy, abs(i__2))) {
	ivy += 100;
    }
/*< 	if( iabs( ivx-ix ) .gt. iabs( ivx-100-ix ) ) ivx = ivx - 100 >*/
    if ((i__1 = ivx - ix, abs(i__1)) > (i__2 = ivx - 100 - ix, abs(i__2))) {
	ivx += -100;
    }
/*< 	if( iabs( ivy-iy ) .gt. iabs( ivy-100-iy ) ) ivy = ivy - 100 >*/
    if ((i__1 = ivy - iy, abs(i__1)) > (i__2 = ivy - 100 - iy, abs(i__2))) {
	ivy += -100;
    }
/*< 	adist = sqrt((ivx-ix+0.0)**2+(ivy-iy+0.0)**2) >*/
/* Computing 2nd power */
    r__1 = ivx - ix + (float)0.;
/* Computing 2nd power */
    r__2 = ivy - iy + (float)0.;
    adist = sqrt(r__1 * r__1 + r__2 * r__2);
/*< 	if( adist .gt. 5 ) goto 135 >*/
    if (adist > (float)5.) {
	goto L135;
    }
/*< 	call getval(8, 0,741,  1, ivqx, ivqy, ivsx, ivsy, ival ) >*/
    getval_(&c__8, &c__0, &c__741, &c__1, &ivqx, &ivqy, &ivsx, &ivsy, &ival);
/*< 	if( ival .ne. ivictm+64 ) goto 135 >*/
    if (ival != ivictm + 64) {
	goto L135;
    }
/*< 	if( adist.gt.1.6 .or. inergy.lt.25 .or. iran(3).ne.1 ) goto 132 >*/
    if (adist > (float)1.6 || inergy < 25 || iran_(&c__3) != 1) {
	goto L132;
    }
/*< 	inergy = inergy - 10 >*/
    inergy += -10;
/*< 	call putval(6, 0,745,  4, ivictm, 4, -20 ) >*/
    putval_(&c__6, &c__0, &c__745, &c__4, &ivictm, &c__4, &c_n20);
/*< 	call putval(6, 0,746,  4, ivictm, 17, 1 ) >*/
    putval_(&c__6, &c__0, &c__746, &c__4, &ivictm, &c__17, &c__1);
/*< 	goto 135 >*/
    goto L135;
/*< 132	if( inergy .lt. 20 .or. iran(5) .ne. 1 ) goto 135 >*/
L132:
    if (inergy < 20 || iran_(&c__5) != 1) {
	goto L135;
    }
/*< 	inergy = inergy / 2 >*/
    inergy /= 2;
/*< 	call putval(6, 0,750,  4, ivictm, 4, ifix(inergy/sqrt(adist)) ) >*/
    i__1 = (integer) (inergy / sqrt(adist));
    putval_(&c__6, &c__0, &c__750, &c__4, &ivictm, &c__4, &i__1);
/*< 	call putval(6, 0,751,  4, ivictm, 17, 1 ) >*/
    putval_(&c__6, &c__0, &c__751, &c__4, &ivictm, &c__17, &c__1);
/*< 135	if( ix .ne. ivx ) goto 140 >*/
L135:
    if (ix != ivx) {
	goto L140;
    }
/*< 	ibear = 90 >*/
    ibear = 90;
/*< 	if( iy .gt. ivy ) ibear = 270 >*/
    if (iy > ivy) {
	ibear = 270;
    }
/*< 	goto 145 >*/
    goto L145;
/*< 140	ibear = ifix(atan( float(ix-ivx)/float(iy-ivy) ) * 180./3.14159) >*/
L140:
    ibear = (integer) (atan((real) (ix - ivx) / (real) (iy - ivy)) * (float)
	    180. / (float)3.14159);
/*< 	if( ix .gt. ivx ) ibear = ibear + 180 >*/
    if (ix > ivx) {
	ibear += 180;
    }
/*< 145	run = .false. >*/
L145:
    run = FALSE_;
/*< 	if( inergy .lt. 10 ) run = .true. >*/
    if (inergy < 10) {
	run = TRUE_;
    }
/*< 	if( run ) ibear = ibear - 180 >*/
    if (run) {
	ibear += -180;
    }
/*< 	if( r >*/
    if (run && ! orun) {
	axisnd_(&ivictm, &c__40, "I shall return to destroy your ship yet.", (
		ftnlen)40);
    }
/*< 	if( o >*/
    if (orun && ! run) {
	axisnd_(&ivictm, &c__15, "Prepare to die.", (ftnlen)15);
    }
/*< 	orun = run >*/
    orun = run;
/*< 	goto 150 >*/
    goto L150;

/*< 147	if( mod( itim, 20 ) .eq. 0 ) ibear = iran( 360 ) >*/
L147:
    if (itim % 20 == 0) {
	ibear = iran_(&c__360);
    }
/*< 	call putval(5, 0,769,  3, 4, 0 ) >*/
    putval_(&c__5, &c__0, &c__769, &c__3, &c__4, &c__0);

/*< 150	call getval(6, 0,771,  4, 1, 8, degree ) >*/
L150:
    getval_(&c__6, &c__0, &c__771, &c__4, &c__1, &c__8, &degree);
/*< 	degi = 12.34 >*/
    degi = (float)12.34;
/*< 	if( mod( ifix(ibear-degree)+720, 360 ) .gt. 180 ) degi = -degi >*/
    if (((integer) (ibear - degree) + 720) % 360 > 180) {
	degi = -degi;
    }
/*< 	degree = degree + degi >*/
    degree += degi;
/*< 	if(mo >*/
    if ((real) (((r__1 = ibear - degree, (integer) dabs(r__1)) + 720) % 360) <
	     dabs(degi)) {
	degree = (real) ibear;
    }
/*< 	degree = rbound( degree ) >*/
    degree = rbound_(&degree);
/*< 	call putval(6, 0,778,  4, 1, 8, rbound( degree ) ) >*/
    r__1 = rbound_(&degree);
    putval_(&c__6, &c__0, &c__778, &c__4, &c__1, &c__8, &r__1);
/*< 	call putval(8, 0,779,  1, iqx, iqy, isx, isy, 0 ) >*/
    putval_(&c__8, &c__0, &c__779, &c__1, &iqx, &iqy, &isx, &isy, &c__0);
/*< 	call addval(6, 0,780,  2, iqx, iqy, -1000 ) >*/
    addval_(&c__6, &c__0, &c__780, &c__2, &iqx, &iqy, &c_n1000);
/*< 160	sx = sqwrap( iqx, isx, sx+smcos(degree)/2. ) >*/
L160:
    r__1 = sx + smcos_(&degree) / (float)2.;
    sx = sqwrap_(&iqx, &isx, &r__1);
/*< 	sy = sqwrap( iqy, isy, sy+smsin(degree)/2. ) >*/
    r__1 = sy + smsin_(&degree) / (float)2.;
    sy = sqwrap_(&iqy, &isy, &r__1);
/*< 	call getval(8, 0,783,  1, iqx, iqy, isx, isy, ival ) >*/
    getval_(&c__8, &c__0, &c__783, &c__1, &iqx, &iqy, &isx, &isy, &ival);
/*< 	if( ival .gt. 0 ) goto 160 >*/
    if (ival > 0) {
	goto L160;
    }
/*< 	if( ival .lt. 0 ) inergy = inergy - 20 >*/
    if (ival < 0) {
	inergy += -20;
    }
/*< 	call putval(4, 0,786,  -1, 65 ) >*/
    putval_(&c__4, &c__0, &c__786, &c_n1, &c__65);
/*< 	call addval(6, 0,787,  2, iqx, iqy, 1000 ) >*/
    addval_(&c__6, &c__0, &c__787, &c__2, &iqx, &iqy, &c__1000);
/*< 	call putval(6, 0,788,  4, 1, 9, iqx ) >*/
    putval_(&c__6, &c__0, &c__788, &c__4, &c__1, &c__9, &iqx);
/*< 	call putval(6, 0,789,  4, 1, 10, iqy ) >*/
    putval_(&c__6, &c__0, &c__789, &c__4, &c__1, &c__10, &iqy);
/*< 	call putval(6, 0,790,  4, 1, 11, isx ) >*/
    putval_(&c__6, &c__0, &c__790, &c__4, &c__1, &c__11, &isx);
/*< 	call putval(6, 0,791,  4, 1, 12, isy ) >*/
    putval_(&c__6, &c__0, &c__791, &c__4, &c__1, &c__12, &isy);
/*< 	call getval(6, 0,792,  4, 1, 4, idam ) >*/
    getval_(&c__6, &c__0, &c__792, &c__4, &c__1, &c__4, &idam);
/*< 	call putval(4, 0,793,  -4, 0 ) >*/
    putval_(&c__4, &c__0, &c__793, &c_n4, &c__0);
/*< 	inergy = inergy - iabs( idam ) + 2 >*/
    inergy = inergy - abs(idam) + 2;
/*< 	if( inergy .gt. 100 ) inergy = 100 >*/
    if (inergy > 100) {
	inergy = 100;
    }
/*< 	call putval(5, 0,796,  3, 5, inergy ) >*/
    putval_(&c__5, &c__0, &c__796, &c__3, &c__5, &inergy);
/*< 	if( inergy .gt. 0 ) goto 200 >*/
    if (inergy > 0) {
	goto L200;
    }
/*< 	call putval(8, 0,798,  1, iqx, iqy, isx, isy, 0 ) >*/
    putval_(&c__8, &c__0, &c__798, &c__1, &iqx, &iqy, &isx, &isy, &c__0);
/*< 	call addval(6, 0,799,  2, iqx, iqy, -1000 ) >*/
    addval_(&c__6, &c__0, &c__799, &c__2, &iqx, &iqy, &c_n1000);
/*< 	call nova( iqx, iqy, isx, isy ) >*/
    nova_(&iqx, &iqy, &isx, &isy);
/*< 	call putval(6, 0,801,  4, 1, 16, 0 ) >*/
    putval_(&c__6, &c__0, &c__801, &c__4, &c__1, &c__16, &c__0);
/*< 	call getval(6, 0,802,  4, 1, 17, ival ) >*/
    getval_(&c__6, &c__0, &c__802, &c__4, &c__1, &c__17, &ival);
/*< 	call addval(6, 0,803,  4, ival, 16, 1 ) >*/
    addval_(&c__6, &c__0, &c__803, &c__4, &ival, &c__16, &c__1);
/*< 	call putval(6, 0,804,  4, 1, 1, 0 ) >*/
    putval_(&c__6, &c__0, &c__804, &c__4, &c__1, &c__1, &c__0);
/*< 	call putval(5, 0,805,  3, 4, 0 ) >*/
    putval_(&c__5, &c__0, &c__805, &c__3, &c__4, &c__0);
/*< 	return >*/
    return 0;
/*< 200	if( idam .eq. 0 ) return >*/
L200:
    if (idam == 0) {
	return 0;
    }
/*< 	call getval(6, 0,809,  4, 1, 17, ival ) >*/
    getval_(&c__6, &c__0, &c__809, &c__4, &c__1, &c__17, &ival);
/*< 	if( ival .eq. ivictm ) return >*/
    if (ival == ivictm) {
	return 0;
    }
/*< 	call  >*/
    axisnd_(&ival, &c__48, "Your attack on the axis will cost you your life.",
	     (ftnlen)48);
/*< 	call putval(5, 0,813,  3, 4, ival ) >*/
    putval_(&c__5, &c__0, &c__813, &c__3, &c__4, &ival);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* upship_ */


/*< 	subroutine axisnd( idest, length, messag ) >*/
/* Subroutine */ int axisnd_(idest, length, messag)
integer *idest, *length, *messag;
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, sara[80];
    extern /* Subroutine */ int putval_(), convrt_();


/*  --	SUBROUTINE SENDS A MESSAGE FROM THE AXIS SHIP */

/*< 	integer idest, messag( length ), length, sara( 80 ) >*/

/*< 	call putval(5, 0,822,  3, 3, idest ) >*/
    /* Parameter adjustments */
    --messag;

    /* Function Body */
    putval_(&c__5, &c__0, &c__822, &c__3, &c__3, idest);
/*< 	call putval(5, 0,823,  5, 1, length+2 ) >*/
    i__1 = *length + 2;
    putval_(&c__5, &c__0, &c__823, &c__5, &c__1, &i__1);
/*< 	call putval(5, 0,824,  5, 2, 1 ) >*/
    putval_(&c__5, &c__0, &c__824, &c__5, &c__2, &c__1);
/*< 	call convrt( messag, length, 5, sara, 0 ) >*/
    convrt_(&messag[1], length, &c__5, sara, &c__0);
/*< 	do 20 i = 1, length >*/
    i__1 = *length;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call putval(5, 0,827,  5, i+2, sara(i) ) >*/
	i__2 = i__ + 2;
	putval_(&c__5, &c__0, &c__827, &c__5, &i__2, &sara[i__ - 1]);
/*< 20	continue >*/
/* L20: */
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* axisnd_ */

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


/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static real degi = (float)6.17;
    static real spdi = (float).047;
    static integer crwnum = 70;
    static integer ntorp = 15;
    static integer nnergy = 100;
    static integer ncrew = 490;
    static integer itorp = 15;
    static integer inergy = 100;
    static integer ichar = 78;
    static integer objval[6] = { 32,42,43,64,45,46 };

    /* System generated locals */
    integer i__1, i__2;
    real r__1, r__2;

    /* Builtin functions */
    double sqrt();

    /* Local variables */
    static integer i__, j, i1, i2, ip, ix, iy;
    static real sx, sy;
    static integer ix1, iy1, ix2, iy2, odc;
    extern integer job_();
    extern /* Subroutine */ int nap_();
    static integer odn, odt, ipn;
    extern /* Subroutine */ int ppn_();
    static integer iqx, iqy, isx, itx[25], ity[25], isy;
    static real osx, osy;
    static integer dam1[14]	/* was [7][2] */;
    static real dinc;
    static integer idat;
    extern integer node_();
    extern /* Subroutine */ int crlf_(), lock_();
    extern integer iran_(), icon_();
    static integer ival;
    static real sinc;
    static integer idot;
    static real dist;
    extern /* Subroutine */ int nova_();
    static integer ioqx, ioqy, iosx, iosy, istx, isty;
    extern integer itty_();
    static integer ival1, istx1, isty1;
    extern /* Subroutine */ int check_(), pback_(), cease_();
    extern integer igtab_();
    static logical armed;
    static real opeed;
    extern /* Subroutine */ int iscan_(), ofile_();
    static integer inode, iodat;
    static real speed;
    static integer iline, sname[2], dcrew;
    extern /* Subroutine */ int wfile_();
    static integer index;
    extern integer ileft_();
    static integer icrew, ilmax, fault, iship;
    extern /* Subroutine */ int close_();
    static integer ocrew;
    static real pdist;
    static integer ilnum;
    extern doublereal smcos_();
    static logical hyper;
    static integer dtorp;
    extern doublereal smsin_();
    extern /* Subroutine */ int print_();
    static real unitx, unity, torpx[25], torpy[25];
    static logical erase1, erase2, erase3;
    static integer damage[14]	/* was [7][2] */;
    extern /* Subroutine */ int enable_(), damagm_();
    static real degree;
    extern /* Subroutine */ int defcol_();
    static real deciml;
    extern /* Subroutine */ int addval_();
    static real bearin, aspeed;
    static integer comara[81];
    static real odegre, obearn;
    static logical oarmed;
    static integer isheld;
    static logical iniflg;
    extern /* Subroutine */ int initdb_(), grafon_();
    static integer commar[61];
    static real ospeed;
    static integer filesp[13], ishold;
    extern /* Subroutine */ int getval_(), curbuf_(), comand_();
    static integer denrgy;
    extern /* Subroutine */ int clrscr_(), chrwat_(), unlock_(), number_();
    static integer itdist[25], iplayr;
    static real othspd;
    static logical lprivd;
    extern logical lerror_();
    static logical ohyper;
    static integer iongry;
    extern integer isxbit_();
    extern /* Subroutine */ int string_(), getstr_();
    static integer iotorp;
    extern /* Subroutine */ int convrt_(), putval_(), cursor_(), colstr_(), 
	    chrout_(), colcur_(), getnum_();
    extern integer iserch_();
    extern /* Subroutine */ int usrset_();
    extern doublereal rbound_();
    static real ttyspd, strtlp;
    extern /* Subroutine */ int pcolor_(), execut_(), exprog_(), settty_(), 
	    syswho_();
    extern doublereal sqwrap_();
    static real torpxs[25], torpys[25];
    extern /* Subroutine */ int upship_(), updscr_(), outspc_(), select_();
    extern integer iright_();
    extern /* Subroutine */ int nodlin_(), irepeat_();


/*< 	integer comara( 81 ), sname( 2 ), damage( 7,2 ), filesp( 13 ) >*/
/*< 	integer dam1( 7,2 ), commar( 61 ), objval( 6 ) >*/
/*< 	integer itx( 25 ), ity( 25 ), itdist( 25 ), maxval( 12 ) >*/
/*< 	integer ntorp, nnergy, itorp, inergy, i, j, i1, i2, iplayr >*/
/*< 	integer ichar, ival, iqx, iqy, isx, isy, index, fault >*/
/*< 	integer ix1, iy1, ix2, iy2, ioqx, ioqy, iosx, iosy, ix, iy >*/
/*< 	integer idat, iodat, iongry, iotorp, isheld, ishold, iship >*/
/*< 	integer denrgy, dtorp, dcrew, ocrew, ncrew, icrew >*/
/*< 	integer odn, odt, odc, crwnum, ilnum, ilmax >*/
/*< 	real degi, dinc, spdi, sinc, sx, sy, degree, bearin >*/
/*< 	real speed, aspeed, deciml, unitx, unity, dist, pdist >*/
/*< 	real osx, osy, odegre, obearn, ospeed, opeed, othspd >*/
/*< 	real torpx( 25 ), torpy( 25 ), torpxs( 25 ), torpys( 25 ) >*/
/*< 	real strtlp >*/
/*< 	logical erase1,erase2,erase3,hyper,ohyper,iniflg,oarmed,armed,lprivd >*/
/*< 	logical lerror, newang >*/
/*< 	common/nhcom/newang >*/
/*< 	commo >*/
/*< 	data degi/6.17/, spdi/0.047/,crwnum/70/ >*/
/*< 	data ntorp/15/,nnergy/100/,ncrew/490/,itorp/15/,inergy/100/ >*/
/*< 	data ichar/78/ >*/
/*< 	data objval/32,42,43,64,45,46/ >*/
/*< 	data maxval/18,18,18,18,18,12,7,3,0,0,0,0/ >*/

/*  --	SET UP TTY, GET SHIP'S NAME AND SCAN CHARACTER */

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
/*< 	newang = .true. >*/
    nhcom_1.newang = TRUE_;
/*< 	call settty( comara, commar, i2, lprivd, filesp ) >*/
    settty_(comara, commar, &i2, &lprivd, filesp);
/*< 	if( i2 .eq. 0 ) goto 7 >*/
    if (i2 == 0) {
	goto L7;
    }
/*< 	do 6 i=1,i2 >*/
    i__1 = i2;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    if( commar(i) .eq. isxbit('MAP~') .and. lprivd ) goto 800 >*/
	if (commar[i__ - 1] == isxbit_("MAP~", (ftnlen)4) && lprivd) {
	    goto L800;
	}
/*< 	    if( commar(i) .eq. isxbit('NAME~') ) erase1 = .true. >*/
	if (commar[i__ - 1] == isxbit_("NAME~", (ftnlen)5)) {
	    erase1 = TRUE_;
	}
/*< 	    if( commar(i) .eq. isxbit('OLDANG~') ) newang = .false. >*/
	if (commar[i__ - 1] == isxbit_("OLDANG~", (ftnlen)7)) {
	    nhcom_1.newang = FALSE_;
	}
/*< 6	continue >*/
/* L6: */
    }
/*< 7	continue >*/
L7:
/*< 	call enable >*/
    enable_();
/*< 	i1 = 12 >*/
    i1 = 12;
/*< 	sname(1) = igtab( job(0), 25 ) >*/
    i__1 = job_(&c__0);
    sname[0] = igtab_(&i__1, &c__25);
/*< 	sname(2) = igtab( job(0), 26 ) >*/
    i__1 = job_(&c__0);
    sname[1] = igtab_(&i__1, &c__26);
/*< 	call check( iniflg ) >*/
    check_(&iniflg);
/*< 	if( iniflg ) call initdb >*/
    if (iniflg) {
	initdb_();
    }
/*< 	continue ! call ctrap >*/
/* 	    call exprog */
/*< 	call grafon >*/
    grafon_();
/*< 	call defcol >*/
    defcol_();
/*< 	call clrscr >*/
    clrscr_();
/*< 	if( .not. erase1 ) goto 10 >*/
    if (! erase1) {
	goto L10;
    }
/*< 	call string(1,'Input ship''s name (12 characters): ^E') >*/
    string_(&c__1, "Input ship's name (12 characters): ^E", (ftnlen)37);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call getstr(3, comara, 12, i1 ) >*/
    getstr_(&c__3, comara, &c__12, &i1);
/*< 	if( i1 .eq. 0 ) goto 10 >*/
    if (i1 == 0) {
	goto L10;
    }
/*< 	call convrt( comara, 12, 1, sname, 6 ) >*/
    convrt_(comara, &c__12, &c__1, sname, &c__6);
/*< 	erase1 = .false. >*/
    erase1 = FALSE_;
/*< 10	call string(1,'Input character to represent the "^E') >*/
L10:
    string_(&c__1, "Input character to represent the \"^E", (ftnlen)36);
/*< 	if( i1 .eq. 0 ) i1 = 12 >*/
    if (i1 == 0) {
	i1 = 12;
    }
/*< 	call string(3, sname, 6, i1 ) >*/
    string_(&c__3, sname, &c__6, &i1);
/*< 	call string(1,'" in scan: ^E') >*/
    string_(&c__1, "\" in scan: ^E", (ftnlen)13);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call chrwat( iplayr ) >*/
    chrwat_(&iplayr);
/*< 	if( iplayr .gt. 91 ) iplayr = iplayr - 32 >*/
    if (iplayr > 91) {
	iplayr += -32;
    }
/*< 	iplayr = iplayr - 64 >*/
    iplayr += -64;

/*  --	CHECK IF IT IS LEGAL AND IF THERE IS ONE ALREADY PRESENT */

/*< 	if( iplayr .lt. 2 .or. iplayr .gt. 26 ) goto 15 >*/
    if (iplayr < 2 || iplayr > 26) {
	goto L15;
    }
/*< 	call getval(6, 0,942,  4, iplayr, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__942, &c__4, &iplayr, &c__1, &ival);
/*< 	if( ival .eq. 0 ) goto 20 >*/
    if (ival == 0) {
	goto L20;
    }
/*< 	call  >*/
    string_(&c__1, "^M^JSomebody is already using that symbol.^M^J^E", (
	    ftnlen)48);
/*< 	goto 10 >*/
    goto L10;
/*< 15	call string(1,'^M^JIllegal scan symbol.  Try again.^M^J^E') >*/
L15:
    string_(&c__1, "^M^JIllegal scan symbol.  Try again.^M^J^E", (ftnlen)42);
/*< 	goto 10 >*/
    goto L10;

/*  --	UPDATE SHIP ROSTER. */

/*< 20	continue >*/
L20:
/*< 	call enable >*/
    enable_();
/*< 	call lock >*/
    lock_();
/*< 	call putval(6, 0,955,  4, iplayr, 1, job(0) ) >*/
    i__1 = job_(&c__0);
    putval_(&c__6, &c__0, &c__955, &c__4, &iplayr, &c__1, &i__1);
/*< 	call putval(6, 0,956,  4, iplayr, 2, sname(1) ) >*/
    putval_(&c__6, &c__0, &c__956, &c__4, &iplayr, &c__2, sname);
/*< 	call putval(6, 0,957,  4, iplayr, 3, sname(2) ) >*/
    putval_(&c__6, &c__0, &c__957, &c__4, &iplayr, &c__3, &sname[1]);
/*< 	call putval(6, 0,958,  4, iplayr, 4, 0 ) >*/
    putval_(&c__6, &c__0, &c__958, &c__4, &iplayr, &c__4, &c__0);
/*< 	call putval(6, 0,959,  4, iplayr, 7, 0 ) >*/
    putval_(&c__6, &c__0, &c__959, &c__4, &iplayr, &c__7, &c__0);
/*< 	call putval(6, 0,960,  4, iplayr, 16, 0 ) >*/
    putval_(&c__6, &c__0, &c__960, &c__4, &iplayr, &c__16, &c__0);
/*< 	call addval(5, 0,961,  3, 1, 1 ) >*/
    addval_(&c__5, &c__0, &c__961, &c__3, &c__1, &c__1);
/*< 	do 59 j = 1, 7 >*/
    for (j = 1; j <= 7; ++j) {
/*< 	    damage( j, 2 ) = crwnum >*/
	damage[j + 6] = crwnum;
/*< 59	continue >*/
/* L59: */
    }
/*< 	degree = iran( 360 ) >*/
    degree = (real) iran_(&c__360);
/*< 	bearin = degree >*/
    bearin = degree;

/*  --	MAKE UP COORDINATES FOR SHIP */

/*< 60	continue >*/
L60:
/*< 	    isx = iran(10) >*/
    isx = iran_(&c__10);
/*< 	    sx=isx >*/
    sx = (real) isx;
/*< 	    isy = iran(10) >*/
    isy = iran_(&c__10);
/*< 	    sy=isy >*/
    sy = (real) isy;
/*< 	    iqx = iran(10) >*/
    iqx = iran_(&c__10);
/*< 	    iqy = iran(10) >*/
    iqy = iran_(&c__10);
/*< 	    call getval(8, 0,977,  1, iqx, iqy, isx, isy, ival ) >*/
    getval_(&c__8, &c__0, &c__977, &c__1, &iqx, &iqy, &isx, &isy, &ival);
/*< 	if( ival .ne. 0 )goto 60 >*/
    if (ival != 0) {
	goto L60;
    }

/*  --	PLACE FINAL RESULTS IN HISEGMENT */

/*< 	call putval(4, 0,982,  -1, iplayr+64 ) >*/
    i__1 = iplayr + 64;
    putval_(&c__4, &c__0, &c__982, &c_n1, &i__1);
/*< 	call unlock >*/
    unlock_();
/*< 	call addval(6, 0,984,  2, iqx, iqy, 1000 ) >*/
    addval_(&c__6, &c__0, &c__984, &c__2, &iqx, &iqy, &c__1000);
/*< 	continue ! call ctrap >*/
/* 	call cease( iplayr, iqx, iqy, isx, isy, fault ) */
/*< 	if( ichar .ne. 78 ) goto 65 >*/
    if (ichar != 78) {
	goto L65;
    }

/*  --	SET ALL THE TERMINAL CHARACTERISTICS NEEDED */

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
/*< 	goto 75 >*/
    goto L75;

/*  --	OOPS, HE HIT A BLACK HOLE !! */

/*< 65	call cursor( 26, 24 ) >*/
L65:
    cursor_(&c__26, &c__24);
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	call colstr(iclred,'*** --::-- Space-time wrinkle --::-- ***^E') >*/
    colstr_(&col_1.iclred, "*** --::-- Space-time wrinkle --::-- ***^E", (
	    ftnlen)42);
/*< 	erase1 = .true. >*/
    erase1 = TRUE_;
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	call cursor( 1, 2 ) >*/
    cursor_(&c__1, &c__2);
/*< 	call string(1,'*** --::-- Relocation to quadrant ^E') >*/
    string_(&c__1, "*** --::-- Relocation to quadrant ^E", (ftnlen)36);
/*< 	call number(1,iqx) >*/
    number_(&c__1, &iqx);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(1,iqy) >*/
    number_(&c__1, &iqy);
/*< 	call string(1,', sector ^E') >*/
    string_(&c__1, ", sector ^E", (ftnlen)11);
/*< 	call number(1, isx ) >*/
    number_(&c__1, &isx);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(1, isy ) >*/
    number_(&c__1, &isy);
/*< 	call string(1,'. --::-- ***^E') >*/
    string_(&c__1, ". --::-- ***^E", (ftnlen)14);
/*< 	erase3 = .true. >*/
    erase3 = TRUE_;
/*< 	degree = iran( 360 ) >*/
    degree = (real) iran_(&c__360);
/*< 	bearin = iran( 360 ) >*/
    bearin = (real) iran_(&c__360);
/*< 	speed = iran( 80 ) / 10.0 >*/
    speed = iran_(&c__80) / (float)10.;
/*< 	aspeed = iran( 80 ) / 10.0 >*/
    aspeed = iran_(&c__80) / (float)10.;

/* ******************************************************************* */

/*  --	GAME HAS ALREADY BEGUN, ALL PARAMETERS SET UP */

/*  --	CHECK FOR SPEED CHANGES AND GET USER'S COMMAND */

/*< 70	call usrset(1048,ttyspd) >*/
L70:
    usrset_(&c__1048, &ttyspd);
/*< 	call usrset(1049,ttyspd) >*/
    usrset_(&c__1049, &ttyspd);
/*< 	ilmax = igtab( 40, 9 ) >*/
    ilmax = igtab_(&c__40, &c__9);
/*< 	ilnum = igtab( 44, 9 ) >*/
    ilnum = igtab_(&c__44, &c__9);
/*< 	call ppn( ip, ipn ) >*/
    ppn_(&ip, &ipn);
/*< 	if( ilnum*100/ilmax .le. 86 .or. ipn .eq. 7963 ) goto 71 >*/
    if (ilnum * 100 / ilmax <= 86 || ipn == 7963) {
	goto L71;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 20, 1 ) >*/
    cursor_(&c__20, &c__1);
/*< 	call colstr(iclred,'^I^I^I***** EMERGENCY *****^M^J^J^E') >*/
    colstr_(&col_1.iclred, "^I^I^I***** EMERGENCY *****^M^J^J^E", (ftnlen)35);
/*< 	call  >*/
    colstr_(&col_1.iclwhi, "A large dotted white line appears in front of yo\
ur ship^M^J^Jlabeled \"S T Y X L I N E\".  As your ship passes over it^M^J^J\
you exit to the monitor.^M^J^J^E", (ftnlen)154);
/*< 	call cease( iplayr, iqx, iqy, isx, isy, fault ) >*/
    cease_(&iplayr, &iqx, &iqy, &isx, &isy, &fault);

/*< 71	if( damage(1,1) .gt. 0 ) aspeed = speed >*/
L71:
    if (damage[0] > 0) {
	aspeed = speed;
    }
/*< 	if( d >*/
    if (damage[0] <= 0 && inergy + isheld + denrgy < 100) {
	++inergy;
    }
/*< 	call curbuf >*/
    curbuf_();
/*< 	call comand( ichar, comara, index ) >*/
    comand_(&ichar, comara, &index);

/*  --	CLEAN UP ERASE1, ERASE2, AND ERASE3 FLAGS */

/*< 75	if( ichar .eq. -1 ) goto 440 >*/
L75:
    if (ichar == -1) {
	goto L440;
    }
/*< 	if( .not. erase2 ) goto 80 >*/
    if (! erase2) {
	goto L80;
    }
/*< 	call colcur( 26, 12 ) >*/
    colcur_(&c__26, &c__12);
/*< 	call irepeat(32,35) >*/
    irepeat_(&c__32, &c__35);
/*< 	erase2 = .false. >*/
    erase2 = FALSE_;

/*< 80	if( .not. erase1 ) goto 90 >*/
L80:
    if (! erase1) {
	goto L90;
    }
/*< 	call colcur( 26, 24 ) >*/
    colcur_(&c__26, &c__24);
/*< 	call irepeat(32,54) >*/
    irepeat_(&c__32, &c__54);
/*< 	erase1 = .false. >*/
    erase1 = FALSE_;

/*< 90	if( .not. erase3 ) goto 100 >*/
L90:
    if (! erase3) {
	goto L100;
    }
/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 	call irepeat(32,79) >*/
    irepeat_(&c__32, &c__79);
/*< 	erase3 = .false. >*/
    erase3 = FALSE_;

/*  --	GET NUMBERS OUT OF STRING */

/*< 100	call getnum(8, comara, index, i1, 10, i2, 10, j, 10 ) >*/
L100:
    getnum_(&c__8, comara, &index, &i1, &c__10, &i2, &c__10, &j, &c__10);
/*< 	deciml = i1 >*/
    deciml = (real) i1;
/*< 	idot = iserch( comara, 46, index ) >*/
    idot = iserch_(comara, &c__46, &index);
/*< 	if( idot .ge. 0 ) deciml = i1 + i2/10.0	! just so we can say warp 0.x >*/
    if (idot >= 0) {
	deciml = i1 + i2 / (float)10.;
    }
/*< 105	if( i2 .lt. 0 ) i2 = 0 >*/
/* L105: */
    if (i2 < 0) {
	i2 = 0;
    }

/*  --	WARP CONTROL */

/*< 	if( ichar .ne. 87 ) goto 120 >*/
    if (ichar != 87) {
	goto L120;
    }
/*< 	if( damage(1,1) .ne. 0 ) goto 110 >*/
    if (damage[0] != 0) {
	goto L110;
    }
/*< 	if( deciml .lt. 0 ) deciml = 0.0 >*/
    if (deciml < (float)0.) {
	deciml = (float)0.;
    }
/*< 	aspeed = deciml >*/
    aspeed = deciml;
/*< 	goto 440 >*/
    goto L440;

/*< 110	call cursor( 26, 12 ) >*/
L110:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'Warp drive inoperative.            ^E') >*/
    colstr_(&col_1.iclyel, "Warp drive inoperative.            ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*  --	DEGREE CONTROL */

/*< 120	if( ichar .ne. 68 ) goto 140 >*/
L120:
    if (ichar != 68) {
	goto L140;
    }
/*< 	if( inergy .lt. 8 ) goto 440 >*/
    if (inergy < 8) {
	goto L440;
    }
/*< 	bearin = rbound( deciml ) >*/
    bearin = rbound_(&deciml);
/*< 	inergy = inergy - 4 >*/
    inergy += -4;
/*< 	goto 440 >*/
    goto L440;

/*  --	IMPULSE ENGINES CONTROL */

/*< 140	if( ichar .ne. 73 ) goto 145 >*/
L140:
    if (ichar != 73) {
	goto L145;
    }
/*< 	if( inergy .lt. 1 .or. inergy+isheld .lt. 2 ) goto 143 >*/
    if (inergy < 1 || inergy + isheld < 2) {
	goto L143;
    }
/*< 	inergy = inergy - 1 >*/
    --inergy;
/*< 	if( speed .eq. 0.1 ) goto 142 >*/
    if (speed == (float).1) {
	goto L142;
    }
/*< 	if( abs(speed-0.1) .gt. 0.1 )goto 143 >*/
    if ((r__1 = speed - (float).1, dabs(r__1)) > (float).1) {
	goto L143;
    }
/*< 	speed = 0.1 >*/
    speed = (float).1;
/*< 	aspeed = 0.1 >*/
    aspeed = (float).1;
/*< 	goto 440 >*/
    goto L440;

/*< 142	speed = 0.0 >*/
L142:
    speed = (float)0.;
/*< 	aspeed = 0.0 >*/
    aspeed = (float)0.;
/*< 	goto 440 >*/
    goto L440;

/*< 143	call cursor( 26, 12 ) >*/
L143:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'Impulse engines not effective.     ^E') >*/
    colstr_(&col_1.iclyel, "Impulse engines not effective.     ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;
/*< 	if( speed .eq. 0.1 ) goto 142 >*/
    if (speed == (float).1) {
	goto L142;
    }

/*  --	HYPERSPACE CONTROL */

/*< 145	if( ichar .ne. 74 ) goto 160 >*/
L145:
    if (ichar != 74) {
	goto L160;
    }
/*< 	if( speed .lt. 1.0 ) goto 150 >*/
    if (speed < (float)1.) {
	goto L150;
    }
/*< 	hyper = (.not. hyper ) >*/
    hyper = ! hyper;
/*< 	goto 440 >*/
    goto L440;

/*< 150	call cursor( 1, 2 ) >*/
L150:
    cursor_(&c__1, &c__2);
/*< 	call  >*/
    string_(&c__2, &col_1.iclyel, "Warp factor less than 1.0.  Cannot make h\
yperspace jump.^E", (ftnlen)58);
/*< 	erase3 = .true. >*/
    erase3 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*  --	PRINT OUT NEW SCREEN */

/*< 160	if( ichar .ne. 78 ) goto 170 >*/
L160:
    if (ichar != 78) {
	goto L170;
    }
/*< 	call print >*/
    print_();
/*< 	call cursor( 13, 18 ) >*/
    cursor_(&c__13, &c__18);
/*< 	call pback( icldbl ) >*/
    pback_(&col_1.icldbl);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call chrout( iplayr+64 ) >*/
    i__1 = iplayr + 64;
    chrout_(&i__1);
/*< 	goto 440 >*/
    goto L440;

/*  --	PRINT OUT "WHO" */

/*< 170	if( ichar .ne. 70 ) goto 175 >*/
L170:
    if (ichar != 70) {
	goto L175;
    }
/*< 	i = icon( comara(2) ) - 64 >*/
    i__ = icon_(&comara[1]) - 64;
/*< 	if( i .lt. 1 .or. i .gt. 26 ) goto 174 >*/
    if (i__ < 1 || i__ > 26) {
	goto L174;
    }
/*< 	call getval(6, 0,1146,  4, i, 1, j ) >*/
    getval_(&c__6, &c__0, &c__1146, &c__4, &i__, &c__1, &j);
/*< 	if( j .eq. 0 ) goto 174 >*/
    if (j == 0) {
	goto L174;
    }
/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 	if( i .ne. 1 ) goto 171 >*/
    if (i__ != 1) {
	goto L171;
    }
/*< 	call string(1,'Computer controlled ship Axis^E') >*/
    string_(&c__1, "Computer controlled ship Axis^E", (ftnlen)31);
/*< 	erase3 = .true. >*/
    erase3 = TRUE_;
/*< 	goto 440 >*/
    goto L440;
/*< 171	call syswho(j) >*/
L171:
    syswho_(&j);
/*< 	erase3 = .true. >*/
    erase3 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 174	call cursor( 26, 12 ) >*/
L174:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'No such ship.                      ^E') >*/
    colstr_(&col_1.iclyel, "No such ship.                      ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*  --	RADIO CONTROL */

/*< 175	if( ichar .ne. 82 ) goto 220 >*/
L175:
    if (ichar != 82) {
	goto L220;
    }
/*< 	call getval(5, 0,1165,  3, 3, ival ) >*/
    getval_(&c__5, &c__0, &c__1165, &c__3, &c__3, &ival);
/*< 	if( ival .eq. 0 ) goto 180 >*/
    if (ival == 0) {
	goto L180;
    }
/*< 	call nap( 1000, 4 ) >*/
    nap_(&c__1000, &c__4);
/*< 	call unlock >*/
    unlock_();
/*< 180	j = icon( comara(2) ) - 64 >*/
L180:
    j = icon_(&comara[1]) - 64;
/*< 	if( j .lt. 1 .or. j .gt. 26 ) goto 220 >*/
    if (j < 1 || j > 26) {
	goto L220;
    }
/*< 	call getval(6, 0,1171,  4, j, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__1171, &c__4, &j, &c__1, &ival);
/*< 	if( ival .ne. 0 ) goto 200 >*/
    if (ival != 0) {
	goto L200;
    }
/*< 	call cursor( 26, 12 ) >*/
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'No frequency found for that ship.  ^E') >*/
    colstr_(&col_1.iclyel, "No frequency found for that ship.  ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 200	call lock >*/
L200:
    lock_();
/*< 	call putval(5, 0,1179,  3, 3, j ) >*/
    putval_(&c__5, &c__0, &c__1179, &c__3, &c__3, &j);
/*< 	call putval(5, 0,1180,  5, 1, index ) >*/
    putval_(&c__5, &c__0, &c__1180, &c__5, &c__1, &index);
/*< 	do 210 i1= 2, index >*/
    i__1 = index;
    for (i1 = 2; i1 <= i__1; ++i1) {
/*< 	    i = i1 >*/
	i__ = i1;
/*< 	    call putval(5, 0,1183,  5, i, icon(comara(i)) ) >*/
	i__2 = icon_(&comara[i__ - 1]);
	putval_(&c__5, &c__0, &c__1183, &c__5, &i__, &i__2);
/*< 210	continue >*/
/* L210: */
    }
/*< 	call putval(5, 0,1185,  5, 2, iplayr ) >*/
    putval_(&c__5, &c__0, &c__1185, &c__5, &c__2, &iplayr);
/*< 	call unlock >*/
    unlock_();
/*< 	goto 440 >*/
    goto L440;

/*  --	GAG TERMINAL */

/*< 220	if( ichar .ne. 71 ) goto 225 >*/
L220:
    if (ichar != 71) {
	goto L225;
    }
/*< 	call usrset(1035,0) >*/
    usrset_(&c__1035, &c__0);
/*< 	goto 440 >*/
    goto L440;

/*  --	UNSET GAG */

/*< 225	if( ichar .ne. 85 ) goto 227 >*/
L225:
    if (ichar != 85) {
	goto L227;
    }
/*< 	call usrset(1035,1) >*/
    usrset_(&c__1035, &c__1);
/*< 	goto 440 >*/
    goto L440;

/*  --	SET UP DOCKING BANKS */

/*< 227	if( ichar .ne. 66 ) goto 229 >*/
L227:
    if (ichar != 66) {
	goto L229;
    }
/*< 	i1 = iabs( i1 ) >*/
    i1 = abs(i1);
/*< 	i2 = iabs( i2 ) >*/
    i2 = abs(i2);
/*< 	j = iabs( j ) >*/
    j = abs(j);
/*< 	if(i1.gt.inergy.or.i2.gt.itorp.or.j.gt.damage(1,2)) goto 228 >*/
    if (i1 > inergy || i2 > itorp || j > damage[7]) {
	goto L228;
    }
/*< 	denrgy = denrgy + i1 >*/
    denrgy += i1;
/*< 	inergy = inergy - i1 >*/
    inergy -= i1;
/*< 	dtorp = dtorp + i2 >*/
    dtorp += i2;
/*< 	itorp = itorp - i2 >*/
    itorp -= i2;
/*< 	dcrew = dcrew + j >*/
    dcrew += j;
/*< 	damage( 1, 2 ) = damage( 1, 2 ) - j >*/
    damage[7] -= j;
/*< 	goto 440 >*/
    goto L440;

/*< 228	call cursor( 26, 12 ) >*/
L228:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'Not enough supplies for docking    ^E') >*/
    colstr_(&col_1.iclyel, "Not enough supplies for docking    ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*  --	ZERO DOCKING BANKS */

/*< 229	if( ichar .ne. 90 ) goto 230 >*/
L229:
    if (ichar != 90) {
	goto L230;
    }
/*< 	inergy = inergy + denrgy >*/
    inergy += denrgy;
/*< 	if( inergy+isheld .gt. 100 ) inergy = 100-isheld >*/
    if (inergy + isheld > 100) {
	inergy = 100 - isheld;
    }
/*< 	denrgy = 0 >*/
    denrgy = 0;
/*< 	itorp = itorp + dtorp >*/
    itorp += dtorp;
/*< 	dtorp = 0 >*/
    dtorp = 0;
/*< 	damage( 1, 2 ) = damage( 1, 2 ) + dcrew >*/
    damage[7] += dcrew;
/*< 	dcrew = 0 >*/
    dcrew = 0;
/*< 	goto 440 >*/
    goto L440;

/*  --	EXIT */

/*< 230	if( comara(1) .ne. 69 .or. comara(2) .ne. 88 ) goto 240 >*/
L230:
    if (comara[0] != 69 || comara[1] != 88) {
	goto L240;
    }
/*< 	call cease( iplayr, iqx, iqy, isx, isy, fault ) >*/
    cease_(&iplayr, &iqx, &iqy, &isx, &isy, &fault);

/*  --	TORPEDO CONTROL */

/*< 240	if( ichar .ne. 84 ) goto 300 >*/
L240:
    if (ichar != 84) {
	goto L300;
    }
/*< 	if( damage(4,1) .ne. 0 )goto 280 >*/
    if (damage[3] != 0) {
	goto L280;
    }
/*< 	if( comara(2) .ne. 65 ) goto 245 >*/
    if (comara[1] != 65) {
	goto L245;
    }
/*< 	if( armed ) goto 287 >*/
    if (armed) {
	goto L287;
    }
/*< 	if( itorp .eq. 0 ) goto 290 >*/
    if (itorp == 0) {
	goto L290;
    }
/*< 	if( inergy .le. 10 ) goto 282 >*/
    if (inergy <= 10) {
	goto L282;
    }
/*< 	inergy = inergy - 10 >*/
    inergy += -10;
/*< 	itorp = itorp - 1 >*/
    --itorp;
/*< 	armed = .true. >*/
    armed = TRUE_;
/*< 	goto 440 >*/
    goto L440;
/*< 245	if( .not. armed ) goto 285 >*/
L245:
    if (! armed) {
	goto L285;
    }
/*< 	armed = .false. >*/
    armed = FALSE_;
/*< 	if( hyper ) goto 270 >*/
    if (hyper) {
	goto L270;
    }
/*< 	do 250 i= 1, 25 >*/
    for (i__ = 1; i__ <= 25; ++i__) {
/*< 	    if( torpx(i) .eq. 0.0 ) goto 260 >*/
	if (torpx[i__ - 1] == (float)0.) {
	    goto L260;
	}
/*< 250	continue >*/
/* L250: */
    }

/*< 	call cursor( 26, 12 ) >*/
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'** Too many torpedos are active ** ^E') >*/
    colstr_(&col_1.iclyel, "** Too many torpedos are active ** ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 260	torpx(i) = sx >*/
L260:
    torpx[i__ - 1] = sx;
/*< 	torpy(i) = sy >*/
    torpy[i__ - 1] = sy;
/*< 	itx(i) = iqx >*/
    itx[i__ - 1] = iqx;
/*< 	ity(i) = iqy >*/
    ity[i__ - 1] = iqy;
/*< 	torpxs(i) = unitx*speed + smcos( deciml )/2. >*/
    torpxs[i__ - 1] = unitx * speed + smcos_(&deciml) / (float)2.;
/*< 	torpys(i) = unity*speed + smsin( deciml )/2. >*/
    torpys[i__ - 1] = unity * speed + smsin_(&deciml) / (float)2.;
/*< 	itdist(i) = 0 >*/
    itdist[i__ - 1] = 0;
/*< 	goto 440 >*/
    goto L440;

/*< 270	call cursor( 26, 12 ) >*/
L270:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'Cannot use torpedos in hyperspace. ^E')  >*/
    colstr_(&col_1.iclyel, "Cannot use torpedos in hyperspace. ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 280	call cursor( 26, 12 ) >*/
L280:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclred,'Photon torpedos inoperative.       ^E') >*/
    colstr_(&col_1.iclred, "Photon torpedos inoperative.       ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 282	call cursor( 26, 12 ) >*/
L282:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclred,'Not enough energy to arm torpedo.  ^E') >*/
    colstr_(&col_1.iclred, "Not enough energy to arm torpedo.  ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 285	call cursor( 26, 12 ) >*/
L285:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclred,'Torpedo is not armed.              ^E') >*/
    colstr_(&col_1.iclred, "Torpedo is not armed.              ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 287	call cursor( 26, 12 ) >*/
L287:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'Torpedo is already armed.          ^E') >*/
    colstr_(&col_1.iclyel, "Torpedo is already armed.          ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 290	call colstr( 26, 12 ) >*/
L290:
    colstr_(&c__26, &c__12);
/*< 	call colstr(iclyel,'All photon torpedos are expended.  ^E') >*/
    colstr_(&col_1.iclyel, "All photon torpedos are expended.  ^E", (ftnlen)
	    37);

/* 	This will never work anyplace other than Tops10. */
/*< 	call execut( isxbit('%,@   ~') ) >*/
    i__1 = isxbit_("%,@   ~", (ftnlen)7);
    execut_(&i__1);

/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*  --	PHASER CONTROL */

/*< 300	if( ichar .ne. 80 ) goto 400 >*/
L300:
    if (ichar != 80) {
	goto L400;
    }
/*< 	if( damage(5,1) .ne. 0 ) goto 380 >*/
    if (damage[4] != 0) {
	goto L380;
    }
/*< 	i1 = iabs( i1 ) >*/
    i1 = abs(i1);
/*< 	if( i1 .gt. inergy ) goto 390 >*/
    if (i1 > inergy) {
	goto L390;
    }
/*< 	if( hyper ) goto 360 >*/
    if (hyper) {
	goto L360;
    }
/*< 	i = icon( comara(2) ) - 64 >*/
    i__ = icon_(&comara[1]) - 64;
/*< 	if( i .lt. 1 .or. i .gt. 26 ) goto 370 >*/
    if (i__ < 1 || i__ > 26) {
	goto L370;
    }
/*< 	call getval(6, 0,1315,  4, i, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__1315, &c__4, &i__, &c__1, &ival);
/*< 	if( ival .eq. 0 .or. i .eq. iplayr ) goto 395 >*/
    if (ival == 0 || i__ == iplayr) {
	goto L395;
    }
/*< 	call getval(6, 0,1317,  4, i, 9, ix1 ) >*/
    getval_(&c__6, &c__0, &c__1317, &c__4, &i__, &c__9, &ix1);
/*< 	call getval(6, 0,1318,  4, i, 10, iy1 ) >*/
    getval_(&c__6, &c__0, &c__1318, &c__4, &i__, &c__10, &iy1);
/*< 	call getval(6, 0,1319,  4, i, 11, ix2 ) >*/
    getval_(&c__6, &c__0, &c__1319, &c__4, &i__, &c__11, &ix2);
/*< 	call getval(6, 0,1320,  4, i, 12, iy2 ) >*/
    getval_(&c__6, &c__0, &c__1320, &c__4, &i__, &c__12, &iy2);
/*< 	call getval(8, 0,1321,  1, ix1, iy1, ix2, iy2, ival ) >*/
    getval_(&c__8, &c__0, &c__1321, &c__1, &ix1, &iy1, &ix2, &iy2, &ival);
/*< 	if( ival .ne. i+64 ) goto 395 >*/
    if (ival != i__ + 64) {
	goto L395;
    }
/*< 	if( ix1-iqx .gt. 5 ) ix1 = ix1 - 10 >*/
    if (ix1 - iqx > 5) {
	ix1 += -10;
    }
/*< 	if( iqx-ix1 .gt. 5 ) ix1 = ix1 + 10 >*/
    if (iqx - ix1 > 5) {
	ix1 += 10;
    }
/*< 	if( iy1-iqy .gt. 5 ) iy1 = iy1 - 10 >*/
    if (iy1 - iqy > 5) {
	iy1 += -10;
    }
/*< 	if( iqy-iy1 .gt. 5 ) iy1 = iy1 + 10 >*/
    if (iqy - iy1 > 5) {
	iy1 += 10;
    }
/*< 	dist  >*/
/* Computing 2nd power */
    i__1 = iqx * 10 + isx - ix1 * 10 - ix2;
/* Computing 2nd power */
    i__2 = iqy * 10 + isy - iy1 * 10 - iy2;
    dist = sqrt((real) (i__1 * i__1 + i__2 * i__2));
/*< 	if( dist .gt. 7.0 ) goto 395 >*/
    if (dist > (float)7.) {
	goto L395;
    }
/*< 	inergy = inergy - i1 >*/
    inergy -= i1;
/* 	IVAL = I1 / (DIST^0.25) */
/*< 	ival = i1 / sqrt(sqrt(dist)) >*/
    ival = i1 / sqrt(sqrt(dist));
/*< 	call colcur( 26, 12 ) >*/
    colcur_(&c__26, &c__12);
/*< 	call number(2, ival, 3 ) >*/
    number_(&c__2, &ival, &c__3);
/*< 	call string(1,'% hit on the ^E') >*/
    string_(&c__1, "% hit on the ^E", (ftnlen)15);
/*< 	call getval(6, 0,1336,  4, i, 2, iship ) >*/
    getval_(&c__6, &c__0, &c__1336, &c__4, &i__, &c__2, &iship);
/*< 	call string(3, iship, 6, 6 ) >*/
    string_(&c__3, &iship, &c__6, &c__6);
/*< 	call getval(6, 0,1338,  4, i, 3, iship ) >*/
    getval_(&c__6, &c__0, &c__1338, &c__4, &i__, &c__3, &iship);
/*< 	call string(3, iship, 6, 6 ) >*/
    string_(&c__3, &iship, &c__6, &c__6);
/*< 	call string(1,'       ^E') >*/
    string_(&c__1, "       ^E", (ftnlen)9);
/*< 	call putval(6, 0,1341,  4, i, 4, ival ) >*/
    putval_(&c__6, &c__0, &c__1341, &c__4, &i__, &c__4, &ival);
/*< 	call putval(6, 0,1342,  4, i, 17, iplayr ) >*/
    putval_(&c__6, &c__0, &c__1342, &c__4, &i__, &c__17, &iplayr);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 360	call cursor( 26, 12 ) >*/
L360:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'Cannot use phasers in hyperspace.  ^E') >*/
    colstr_(&col_1.iclyel, "Cannot use phasers in hyperspace.  ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 370	call cursor( 26, 12 ) >*/
L370:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'No such ship.                      ^E') >*/
    colstr_(&col_1.iclyel, "No such ship.                      ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 380	call cursor( 26, 12 ) >*/
L380:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclred,'Phasers inoperative.               ^E') >*/
    colstr_(&col_1.iclred, "Phasers inoperative.               ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 390	call cursor( 26, 12 ) >*/
L390:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclred,'Not enough energy.                 ^E') >*/
    colstr_(&col_1.iclred, "Not enough energy.                 ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 395	call cursor( 26, 12 ) >*/
L395:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclred,'Cannot lock phasers on target      ^E') >*/
    colstr_(&col_1.iclred, "Cannot lock phasers on target      ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*  --	MOVE MEN */

/*< 400	if( ichar .ne. 77 ) goto 405 >*/
L400:
    if (ichar != 77) {
	goto L405;
    }
/*< 	if( i2 .lt. 1 .or. i2 .gt. 7 ) goto 403 >*/
    if (i2 < 1 || i2 > 7) {
	goto L403;
    }
/*< 	if( j .lt. 1 .or. j .gt. 7 ) goto 403 >*/
    if (j < 1 || j > 7) {
	goto L403;
    }
/*< 	i1 = iabs( i1 ) >*/
    i1 = abs(i1);
/*< 	if( i1 .gt. damage( i2, 2 ) ) goto 404 >*/
    if (i1 > damage[i2 + 6]) {
	goto L404;
    }
/*< 	damage( i2, 2 ) = damage( i2, 2 ) - i1 >*/
    damage[i2 + 6] -= i1;
/*< 	damage( j, 2 ) = damage( j, 2 ) + i1 >*/
    damage[j + 6] += i1;
/*< 	goto 440 >*/
    goto L440;
/*< 403	call cursor( 26, 12 ) >*/
L403:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'Non existant device                ^E') >*/
    colstr_(&col_1.iclyel, "Non existant device                ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;
/*< 404	call cursor( 26, 12 ) >*/
L404:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'Not enough men at that device      ^E') >*/
    colstr_(&col_1.iclyel, "Not enough men at that device      ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/* ***	SHIELD CONTROL */

/*< 405	if( ichar .ne. 83 ) goto 430 >*/
L405:
    if (ichar != 83) {
	goto L430;
    }
/*< 	if( damage(6,1) .ne. 0 ) goto 410 >*/
    if (damage[5] != 0) {
	goto L410;
    }
/*< 	if((i >*/
    if (i1 > 0 && inergy < i1 || i1 < 0 && isheld < -i1) {
	goto L420;
    }
/*< 	inergy = inergy - i1 >*/
    inergy -= i1;
/*< 	isheld = isheld + i1 >*/
    isheld += i1;
/*< 	goto 440 >*/
    goto L440;

/*< 410	call cursor( 26, 12 ) >*/
L410:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclred,'Shields inoperative.               ^E') >*/
    colstr_(&col_1.iclred, "Shields inoperative.               ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	goto 440 >*/
    goto L440;

/*< 420	call cursor( 26, 12 ) >*/
L420:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclred,'Insufficient energy.               ^E') >*/
    colstr_(&col_1.iclred, "Insufficient energy.               ^E", (ftnlen)
	    37);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	if( i1 .lt. 0 ) goto 425 >*/
    if (i1 < 0) {
	goto L425;
    }
/*< 	isheld = isheld + inergy >*/
    isheld += inergy;
/*< 	inergy = 0 >*/
    inergy = 0;
/*< 	goto 440 >*/
    goto L440;
/*< 425	inergy = inergy + isheld >*/
L425:
    inergy += isheld;
/*< 	isheld = 0 >*/
    isheld = 0;
/*< 	goto 440 >*/
    goto L440;

/*< 430	call cursor( 26, 12 ) >*/
L430:
    cursor_(&c__26, &c__12);
/*< 	call colstr(iclyel,'*** Illegal command: ^E') >*/
    colstr_(&col_1.iclyel, "*** Illegal command: ^E", (ftnlen)23);
/*< 	call chrout( ichar ) >*/
    chrout_(&ichar);
/*< 	call string(1,' ***         ^E') >*/
    string_(&c__1, " ***         ^E", (ftnlen)15);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */

/* 	DISCOVER IF WE HIT ANY SPACESHIPS FLOATING BY */

/*< 440	continue >*/
L440:
/*< 	if( inergy .ne. 0 .or. isheld .ne. 0 ) goto 450 >*/
    if (inergy != 0 || isheld != 0) {
	goto L450;
    }
/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 	call  >*/
    string_(&c__1, "Out of energy!!  You lost.                              \
                     ^E", (ftnlen)79);
/*< 	call cease( iplayr, iqx, iqy, isx, isy, fault ) >*/
    cease_(&iplayr, &iqx, &iqy, &isx, &isy, &fault);

/*< 450	call getval(6, 0,1434,  4, iplayr, 7, othspd ) >*/
L450:
    getval_(&c__6, &c__0, &c__1434, &c__4, &iplayr, &c__7, &othspd);
/*< 	if( othspd .eq. 0 ) goto 460 >*/
    if (othspd == (float)0.) {
	goto L460;
    }
/*< 	call putval(4, 0,1436,  -4, 0 ) >*/
    putval_(&c__4, &c__0, &c__1436, &c_n4, &c__0);
/*< 	call colcur( 26, 12 ) >*/
    colcur_(&c__26, &c__12);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	if( othspd .lt. 0 ) goto 455 >*/
    if (othspd < (float)0.) {
	goto L455;
    }
/*< 	othspd = othspd + speed >*/
    othspd += speed;
/*< 	if( o >*/
    if (othspd > (float).2) {
	colstr_(&col_1.iclred, "* Collision with the ^E", (ftnlen)23);
    }
/*< 	if( o >*/
    if (othspd <= (float).2) {
	colstr_(&col_1.icllbl, "* Docking with the ^E", (ftnlen)21);
    }
/*< 	call getval(6, 0,1445,  4, iplayr, 6, j ) >*/
    getval_(&c__6, &c__0, &c__1445, &c__4, &iplayr, &c__6, &j);
/*< 	call getval(6, 0,1446,  4, j, 2, iship ) >*/
    getval_(&c__6, &c__0, &c__1446, &c__4, &j, &c__2, &iship);
/*< 	call string(3, iship, 6, 6 ) >*/
    string_(&c__3, &iship, &c__6, &c__6);
/*< 	call getval(6, 0,1448,  4, j, 3, iship ) >*/
    getval_(&c__6, &c__0, &c__1448, &c__4, &j, &c__3, &iship);
/*< 	call string(3, iship, 6, 6 ) >*/
    string_(&c__3, &iship, &c__6, &c__6);
/*< 	if( othspd .gt. 0.2 ) call string(1,' *^E') >*/
    if (othspd > (float).2) {
	string_(&c__1, " *^E", (ftnlen)4);
    }
/*< 	if( othspd .le. 0.2 ) call string(1,' *  ^E') >*/
    if (othspd <= (float).2) {
	string_(&c__1, " *  ^E", (ftnlen)6);
    }
/*< 	speed = 0 >*/
    speed = (float)0.;
/*< 	if( othspd .gt. 0.2 ) fault = j >*/
    if (othspd > (float).2) {
	fault = j;
    }
/*< 	if( othspd .gt. 0.2 ) goto 456 >*/
    if (othspd > (float).2) {
	goto L456;
    }
/*< 	call putval(6, 0,1455,  4, j, 13, denrgy ) >*/
    putval_(&c__6, &c__0, &c__1455, &c__4, &j, &c__13, &denrgy);
/*< 	denrgy = 0 >*/
    denrgy = 0;
/*< 	call putval(6, 0,1457,  4, j, 14, dtorp ) >*/
    putval_(&c__6, &c__0, &c__1457, &c__4, &j, &c__14, &dtorp);
/*< 	dtorp = 0 >*/
    dtorp = 0;
/*< 	call putval(6, 0,1459,  4, j, 15, dcrew ) >*/
    putval_(&c__6, &c__0, &c__1459, &c__4, &j, &c__15, &dcrew);
/*< 	dcrew = 0 >*/
    dcrew = 0;
/*< 	inergy = inergy + isheld >*/
    inergy += isheld;
/*< 	isheld = 0 >*/
    isheld = 0;
/*< 	goto 460 >*/
    goto L460;

/*< 455	call colstr(iclred,'**** Explosive force ion storm ****^E') >*/
L455:
    colstr_(&col_1.iclred, "**** Explosive force ion storm ****^E", (ftnlen)
	    37);
/*< 	fault = 0 >*/
    fault = 0;
/*< 456	call damagm( damage, iabs( ifix( othspd*30.2 ) ), isheld ) >*/
L456:
    i__2 = (i__1 = (integer) (othspd * (float)30.2), abs(i__1));
    damagm_(damage, &i__2, &isheld);
/*< 	denrgy = 0 >*/
    denrgy = 0;
/*< 	dtorp = 0 >*/
    dtorp = 0;
/*< 	dcrew = 0 >*/
    dcrew = 0;

/*  --	UPDATE DOCKING INFORMATION */

/*< 460	call getval(6, 0,1474,  4, iplayr, 13, i1 ) >*/
L460:
    getval_(&c__6, &c__0, &c__1474, &c__4, &iplayr, &c__13, &i1);
/*< 	call putval(4, 0,1475,  -4, 0 ) >*/
    putval_(&c__4, &c__0, &c__1475, &c_n4, &c__0);
/*< 	call getval(6, 0,1476,  4, iplayr, 14, i2 ) >*/
    getval_(&c__6, &c__0, &c__1476, &c__4, &iplayr, &c__14, &i2);
/*< 	call putval(4, 0,1477,  -4, 0 ) >*/
    putval_(&c__4, &c__0, &c__1477, &c_n4, &c__0);
/*< 	call getval(6, 0,1478,  4, iplayr, 15, j ) >*/
    getval_(&c__6, &c__0, &c__1478, &c__4, &iplayr, &c__15, &j);
/*< 	call putval(4, 0,1479,  -4, 0 ) >*/
    putval_(&c__4, &c__0, &c__1479, &c_n4, &c__0);
/*< 	if( i1 + i2 + j .eq. 0 ) goto 466 >*/
    if (i1 + i2 + j == 0) {
	goto L466;
    }
/*< 	isheld = 0 >*/
    isheld = 0;
/*< 	denrgy = 0 >*/
    denrgy = 0;
/*< 	dtorp = 0 >*/
    dtorp = 0;
/*< 	dcrew = 0 >*/
    dcrew = 0;
/*< 	call cursor( 1, 2 ) >*/
    cursor_(&c__1, &c__2);
/*< 	call colstr(icllbl,'Taking ^E') >*/
    colstr_(&col_1.icllbl, "Taking ^E", (ftnlen)9);
/*< 	inergy = inergy + i1 >*/
    inergy += i1;
/*< 	if( inergy .gt. nnergy ) inergy = nnergy >*/
    if (inergy > nnergy) {
	inergy = nnergy;
    }
/*< 	call number(1, i1 ) >*/
    number_(&c__1, &i1);
/*< 	call string(1,'% energy, ^E') >*/
    string_(&c__1, "% energy, ^E", (ftnlen)12);
/*< 	itorp = itorp + i2 >*/
    itorp += i2;
/*< 	if( itorp .gt. ntorp ) itorp = ntorp >*/
    if (itorp > ntorp) {
	itorp = ntorp;
    }
/*< 	call number(1, i2 ) >*/
    number_(&c__1, &i2);
/*< 	call string(1,' torpedos and ^E') >*/
    string_(&c__1, " torpedos and ^E", (ftnlen)16);
/*< 	if( icrew+j .gt. ncrew ) j = ncrew-icrew >*/
    if (icrew + j > ncrew) {
	j = ncrew - icrew;
    }
/*< 	damage( 1, 2 ) = damage( 1, 2 ) + j >*/
    damage[7] += j;
/*< 	call number(1, j ) >*/
    number_(&c__1, &j);
/*< 	call string(1,' crew members on board.^E') >*/
    string_(&c__1, " crew members on board.^E", (ftnlen)25);
/*< 	erase3 = .true. >*/
    erase3 = TRUE_;

/*  --	UPDATE SHIP SPEED AND INC */

/*< 466	if( hyper .and. inergy .lt. 4 ) hyper = .false. >*/
L466:
    if (hyper && inergy < 4) {
	hyper = FALSE_;
    }
/*< 	if( hyper ) inergy = inergy - 4 >*/
    if (hyper) {
	inergy += -4;
    }
/*< 	if( speed .lt. aspeed ) sinc = spdi >*/
    if (speed < aspeed) {
	sinc = spdi;
    }
/*< 	if( speed .gt. aspeed ) sinc = -spdi >*/
    if (speed > aspeed) {
	sinc = -spdi;
    }
/*< 	if( inergy .lt. 9 ) sinc = 0 >*/
    if (inergy < 9) {
	sinc = (float)0.;
    }
/*< 	if( sinc .ne. 0 ) inergy = inergy - 2 >*/
    if (sinc != (float)0.) {
	inergy += -2;
    }
/*< 	if( abs(speed-aspeed) .lt. spdi ) speed = aspeed >*/
    if ((r__1 = speed - aspeed, dabs(r__1)) < spdi) {
	speed = aspeed;
    }
/*< 	if( speed .eq. aspeed ) sinc = 0.0 >*/
    if (speed == aspeed) {
	sinc = (float)0.;
    }
/*< 	speed = speed + sinc >*/
    speed += sinc;
/*< 	if( speed .lt. 1.0 ) hyper = .false. >*/
    if (speed < (float)1.) {
	hyper = FALSE_;
    }

/*  --	UPDATE SHIP DEGREE AND INC */

/*< 	dinc=-degi >*/
    dinc = -degi;
/*< 	if (  >*/
    if (bearin - degree > (float)0. && bearin - degree < (float)180. || 
	    bearin - degree > (float)-360. && bearin - degree < (float)-180.) 
	    {
	dinc = degi;
    }
/*< 	degree = rbound( degree + dinc ) >*/
    r__1 = degree + dinc;
    degree = rbound_(&r__1);
/*< 	if( a >*/
    if ((r__1 = bearin - degree, dabs(r__1)) < degi * (float)1.1 || (r__2 = 
	    bearin - degree + 360, dabs(r__2)) < degi * (float)1.1) {
	degree = bearin;
    }

/*  --	GET UNITS */

/*< 	unitx = smcos( degree ) / 2. >*/
    unitx = smcos_(&degree) / (float)2.;
/*< 	unity = smsin( degree ) / 2. >*/
    unity = smsin_(&degree) / (float)2.;
/*< 	ioqx = iqx >*/
    ioqx = iqx;
/*< 	ioqy = iqy >*/
    ioqy = iqy;
/*< 	iosx = isx >*/
    iosx = isx;
/*< 	iosy = isy >*/
    iosy = isy;
/*< 	osx = sx >*/
    osx = sx;
/*< 	osy = sy >*/
    osy = sy;
/*< 	pdist = 0.0 >*/
    pdist = (float)0.;
/*< 	dist = speed >*/
    dist = speed;

/*  --	LOOP THROUGH SHIP'S JOURNEY TO SEE IF IT HITS ANYTHING */

/*< 	call getval(6, 0,1538,  4, iplayr, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__1538, &c__4, &iplayr, &c__1, &ival);
/*< 	if( ival .eq. 0 ) call exprog >*/
    if (ival == 0) {
	exprog_();
    }
/*< 	call lock >*/
    lock_();

/* 	FIXED LOGIC TO RUN ON MODERN COMPILERS */
/*< 	strtlp = dist >*/
    strtlp = dist;
/*< 	if( int(speed) .gt. 0 ) strtlp = 1.0 >*/
    if ((integer) speed > 0) {
	strtlp = (float)1.;
    }
/*< 	do 480 dist = strtlp, speed >*/
    r__1 = speed;
    for (dist = strtlp; dist <= r__1; dist += (float)1.) {
/*< 470	    iqx = ioqx >*/
/* L470: */
	iqx = ioqx;
/*< 	    iqy = ioqy >*/
	iqy = ioqy;
/*< 	    sx = sqwrap( iqx, isx, osx + dist*unitx ) >*/
	r__2 = osx + dist * unitx;
	sx = sqwrap_(&iqx, &isx, &r__2);
/*< 	    sy = sqwrap( iqy, isy, osy + dist*unity ) >*/
	r__2 = osy + dist * unity;
	sy = sqwrap_(&iqy, &isy, &r__2);
/*< 	    if( hyper ) goto 480 >*/
	if (hyper) {
	    goto L480;
	}
/*< 	    call getval(8, 0,1551,  1, iqx, iqy, isx, isy, ival ) >*/
	getval_(&c__8, &c__0, &c__1551, &c__1, &iqx, &iqy, &isx, &isy, &ival);
/*< 	    i >*/
	if (ival == 0 || ival == iplayr + 64 || ival == -iplayr) {
	    goto L480;
	}
/*< 	    if( ival .ne. 4 ) goto 490 >*/
	if (ival != 4) {
	    goto L490;
	}
/*< 	    fault = 0 >*/
	fault = 0;
/*< 	    call damagm( damage, 5, isheld ) >*/
	damagm_(damage, &c__5, &isheld);
/*< 	    if( erase2 ) goto 480 >*/
	if (erase2) {
	    goto L480;
	}
/*< 	    call colcur( 26, 12 ) >*/
	colcur_(&c__26, &c__12);
/*< 	    call colstr(iclred,':: Undergoing ionic bombardment :: ^E') >*/
	colstr_(&col_1.iclred, ":: Undergoing ionic bombardment :: ^E", (
		ftnlen)37);
/*< 	    erase2 = .true. >*/
	erase2 = TRUE_;
/*< 480	pdist = dist >*/
L480:
	pdist = dist;
    }
/*< 	goto 560 >*/
    goto L560;

/*  --	SHIP JUST HIT SOMETHING */

/*< 490	call colcur( 26, 12 ) >*/
L490:
    colcur_(&c__26, &c__12);
/*< 	if( ival .gt. 5 ) goto 530 >*/
    if (ival > 5) {
	goto L530;
    }
/*< 	if( speed .gt. 0.1 .or. ival .ne. 2 ) goto 510 >*/
    if (speed > (float).1 || ival != 2) {
	goto L510;
    }
/*< 	call colstr(icllbl,'* Docking with starbase *          ^E') >*/
    colstr_(&col_1.icllbl, "* Docking with starbase *          ^E", (ftnlen)
	    37);
/*< 	itorp = ntorp >*/
    itorp = ntorp;
/*< 	do 491 i = 1, 7 >*/
    for (i__ = 1; i__ <= 7; ++i__) {
/*< 	    damage(i,2) = crwnum >*/
	damage[i__ + 6] = crwnum;
/*< 491	continue >*/
/* L491: */
    }
/*< 	armed = .false. >*/
    armed = FALSE_;
/*< 	degree = rbound( degree+180. ) >*/
    r__1 = degree + (float)180.;
    degree = rbound_(&r__1);
/*< 	bearin = degree >*/
    bearin = degree;
/*< 	inergy = inergy + isheld >*/
    inergy += isheld;
/*< 	isheld = 0 >*/
    isheld = 0;
/*< 	denrgy = 0 >*/
    denrgy = 0;
/*< 	dtorp = 0 >*/
    dtorp = 0;
/*< 	dcrew = 0 >*/
    dcrew = 0;
/*< 	pdist = -0.9 >*/
    pdist = (float)-.9;
/*< 	do 500 i=1,7 >*/
    for (i__ = 1; i__ <= 7; ++i__) {
/*< 	    damage(i,1) = 0 >*/
	damage[i__ - 1] = 0;
/*< 500	continue >*/
/* L500: */
    }
/*< 	goto 550 >*/
    goto L550;

/*< 510	call colstr(iclred,'Collision with ^E') >*/
L510:
    colstr_(&col_1.iclred, "Collision with ^E", (ftnlen)17);
/*< 	index = 0 >*/
    index = 0;
/*< 	if( ival .lt. 0 ) goto 520 >*/
    if (ival < 0) {
	goto L520;
    }
/*< 	if( ival .eq. 1 ) call string(1,'a star.             ^E') >*/
    if (ival == 1) {
	string_(&c__1, "a star.             ^E", (ftnlen)22);
    }
/*< 	if( ival .eq. 2 ) call string(1,'a starbase.         ^E') >*/
    if (ival == 2) {
	string_(&c__1, "a starbase.         ^E", (ftnlen)22);
    }
/*< 	if( ival .eq. 3 ) call string(1,'a black hole.       ^E') >*/
    if (ival == 3) {
	string_(&c__1, "a black hole.       ^E", (ftnlen)22);
    }
/*< 	if( ival .eq. 3 ) speed = iran( 80 ) / 10.0 >*/
    if (ival == 3) {
	speed = iran_(&c__80) / (float)10.;
    }
/*< 	fault = 0 >*/
    fault = 0;
/*< 	goto 540 >*/
    goto L540;
/*< 520	call string(1,'a photon torpedo.   ^E') >*/
L520:
    string_(&c__1, "a photon torpedo.   ^E", (ftnlen)22);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;
/*< 	fault = -ival >*/
    fault = -ival;
/*< 	call damagm( damage, 20, isheld ) >*/
    damagm_(damage, &c__20, &isheld);
/*< 	goto 480 >*/
    goto L480;

/*< 530	ival1 = ival - 64 >*/
L530:
    ival1 = ival - 64;
/*< 	call getval(6, 0,1604,  4, ival1, 5, othspd ) >*/
    getval_(&c__6, &c__0, &c__1604, &c__4, &ival1, &c__5, &othspd);
/*< 	othspd = othspd + speed >*/
    othspd += speed;
/*< 	if( o >*/
    if (othspd > (float).2) {
	colstr_(&col_1.iclred, "* Collision with the ^E", (ftnlen)23);
    }
/*< 	if( o >*/
    if (othspd <= (float).2) {
	colstr_(&col_1.icllbl, "* Docking with the ^E", (ftnlen)21);
    }
/*< 	call getval(6, 0,1610,  4, ival1, 2, iship ) >*/
    getval_(&c__6, &c__0, &c__1610, &c__4, &ival1, &c__2, &iship);
/*< 	call string(3, iship, 6, 6 ) >*/
    string_(&c__3, &iship, &c__6, &c__6);
/*< 	call getval(6, 0,1612,  4, ival1, 3, iship ) >*/
    getval_(&c__6, &c__0, &c__1612, &c__4, &ival1, &c__3, &iship);
/*< 	call string(3, iship, 6, 6 ) >*/
    string_(&c__3, &iship, &c__6, &c__6);
/*< 	call putval(6, 0,1614,  4, ival1, 6, iplayr ) >*/
    putval_(&c__6, &c__0, &c__1614, &c__4, &ival1, &c__6, &iplayr);
/*< 	call putval(6, 0,1615,  4, ival1, 7, speed ) >*/
    putval_(&c__6, &c__0, &c__1615, &c__4, &ival1, &c__7, &speed);
/*< 	if( othspd .gt. 0.3 ) goto 539 >*/
    if (othspd > (float).3) {
	goto L539;
    }
/*< 	call string(1,' *  ^E') >*/
    string_(&c__1, " *  ^E", (ftnlen)6);
/*< 	call putval(6, 0,1618,  4, ival1, 13, denrgy ) >*/
    putval_(&c__6, &c__0, &c__1618, &c__4, &ival1, &c__13, &denrgy);
/*< 	call putval(6, 0,1619,  4, ival1, 14, dtorp ) >*/
    putval_(&c__6, &c__0, &c__1619, &c__4, &ival1, &c__14, &dtorp);
/*< 	call putval(6, 0,1620,  4, ival1, 15, dcrew ) >*/
    putval_(&c__6, &c__0, &c__1620, &c__4, &ival1, &c__15, &dcrew);
/*< 	inergy = inergy + isheld >*/
    inergy += isheld;
/*< 	isheld = 0 >*/
    isheld = 0;
/*< 	pdist = -0.9 >*/
    pdist = (float)-.9;
/*< 	denrgy = 0 >*/
    denrgy = 0;
/*< 	dtorp = 0 >*/
    dtorp = 0;
/*< 	dcrew = 0 >*/
    dcrew = 0;
/*< 	goto 550 >*/
    goto L550;
/*< 539	call string(1,' *^E') >*/
L539:
    string_(&c__1, " *^E", (ftnlen)4);
/*< 	fault = ival1 >*/
    fault = ival1;
/*< 	speed = othspd >*/
    speed = othspd;
/*< 540	if( ohyper ) ival = 3 >*/
L540:
    if (ohyper) {
	ival = 3;
    }
/*< 	degree = iran(360) >*/
    degree = (real) iran_(&c__360);
/*< 	call damagm( damage, ifix(speed*30.2), isheld ) >*/
    i__1 = (integer) (speed * (float)30.2);
    damagm_(damage, &i__1, &isheld);

/*  --	IF HE HIT A BLACK HOLE, DISORIENT HIM. */

/*< 	if( ival .ne. 3 ) goto 550 >*/
    if (ival != 3) {
	goto L550;
    }
/*< 	call getval(8, 0,1638,  1, ioqx, ioqy, iosx, iosy, ival ) >*/
    getval_(&c__8, &c__0, &c__1638, &c__1, &ioqx, &ioqy, &iosx, &iosy, &ival);
/*< 	if( ival .eq. iplayr+64 ) call putval(4, 0,1639,  -1, 0 ) >*/
    if (ival == iplayr + 64) {
	putval_(&c__4, &c__0, &c__1639, &c_n1, &c__0);
    }
/*< 	call addval(6, 0,1640,  2, ioqx, ioqy, -1000 ) >*/
    addval_(&c__6, &c__0, &c__1640, &c__2, &ioqx, &ioqy, &c_n1000);
/*< 	goto 60 >*/
    goto L60;

/*  --	UPDATE CRASH POSITION */

/*< 550	erase2 = .true. >*/
L550:
    erase2 = TRUE_;
/*< 	iqx = ioqx >*/
    iqx = ioqx;
/*< 	iqy = ioqy >*/
    iqy = ioqy;
/*< 	sx = sqwrap( iqx, isx, osx + pdist*unitx ) >*/
    r__1 = osx + pdist * unitx;
    sx = sqwrap_(&iqx, &isx, &r__1);
/*< 	sy = sqwrap( iqy, isy, osy + pdist*unity ) >*/
    r__1 = osy + pdist * unity;
    sy = sqwrap_(&iqy, &isy, &r__1);
/*< 	aspeed = 0. >*/
    aspeed = (float)0.;
/*< 	speed = 0. >*/
    speed = (float)0.;

/*  --	PUT NEW POSITION IN HISEGMENT */

/*< 560	call getval(8, 0,1655,  1, ioqx, ioqy, iosx, iosy, ival ) >*/
L560:
    getval_(&c__8, &c__0, &c__1655, &c__1, &ioqx, &ioqy, &iosx, &iosy, &ival);
/*< 	if( ival .eq. iplayr+64 ) call putval(4, 0,1656,  -1, 0 ) >*/
    if (ival == iplayr + 64) {
	putval_(&c__4, &c__0, &c__1656, &c_n1, &c__0);
    }
/*< 	if( . >*/
    if (! hyper) {
	i__1 = iplayr + 64;
	putval_(&c__8, &c__0, &c__1658, &c__1, &iqx, &iqy, &isx, &isy, &i__1);
    }

/*  --	UPDATE SHIP'S ROSTER */

/*< 	call upship( iplayr, ichar ) >*/
    upship_(&iplayr, &ichar);
/*< 	call unlock >*/
    unlock_();
/*< 	call addval(6, 0,1664,  2, ioqx, ioqy, -1000 ) >*/
    addval_(&c__6, &c__0, &c__1664, &c__2, &ioqx, &ioqy, &c_n1000);
/*< 	call addval(6, 0,1665,  2, iqx, iqy, 1000 ) >*/
    addval_(&c__6, &c__0, &c__1665, &c__2, &iqx, &iqy, &c__1000);
/*< 	call putval(6, 0,1666,  4, iplayr, 9, iqx ) >*/
    putval_(&c__6, &c__0, &c__1666, &c__4, &iplayr, &c__9, &iqx);
/*< 	call putval(6, 0,1667,  4, iplayr, 10, iqy ) >*/
    putval_(&c__6, &c__0, &c__1667, &c__4, &iplayr, &c__10, &iqy);
/*< 	call putval(6, 0,1668,  4, iplayr, 11, isx ) >*/
    putval_(&c__6, &c__0, &c__1668, &c__4, &iplayr, &c__11, &isx);
/*< 	call putval(6, 0,1669,  4, iplayr, 12, isy ) >*/
    putval_(&c__6, &c__0, &c__1669, &c__4, &iplayr, &c__12, &isy);

/*  --	UPDATE HYPERSPACE FLAG */

/*< 	if( hyper .eq. ohyper .and. ichar .ne. 78 ) goto 570 >*/
    if (hyper == ohyper && ichar != 78) {
	goto L570;
    }
/*< 	call cursor( 52, 14 ) >*/
    cursor_(&c__52, &c__14);
/*< 	if( hyper ) call colstr(icllbl,'::: HYPERSPACE :::^E') >*/
    if (hyper) {
	colstr_(&col_1.icllbl, "::: HYPERSPACE :::^E", (ftnlen)20);
    }
/*< 	if( .not. hyper ) call colstr (icllbl,'                   ^E') >*/
    if (! hyper) {
	colstr_(&col_1.icllbl, "                   ^E", (ftnlen)21);
    }
/*< 	ohyper = hyper >*/
    ohyper = hyper;

/*  --	UPDATE DATE */

/*< 570	call getval(5, 0,1681,  3, 2, idat ) >*/
L570:
    getval_(&c__5, &c__0, &c__1681, &c__3, &c__2, &idat);
/*< 	if( idat .eq. iodat )goto 580 >*/
    if (idat == iodat) {
	goto L580;
    }
/*< 	iodat = idat >*/
    iodat = idat;
/*< 	call colcur( 37, 23 ) >*/
    colcur_(&c__37, &c__23);
/*< 	call number(4, idat/100.0, 8, 10, 2 ) >*/
    r__1 = idat / (float)100.;
    number_(&c__4, &r__1, &c__8, &c__10, &c__2);

/*  --	UPDATE ENERGY */

/*< 580	if( inergy .eq. iongry .and. ichar .ne. 78 ) goto 590 >*/
L580:
    if (inergy == iongry && ichar != 78) {
	goto L590;
    }
/*< 	iongry = inergy >*/
    iongry = inergy;
/*< 	call colcur( 34, 22 ) >*/
    colcur_(&c__34, &c__22);
/*< 	call number(2, inergy, 3 ) >*/
    number_(&c__2, &inergy, &c__3);

/*  --	UPDATE LONG AND SHORT RANGE SENSORS AND QS COORDINATES */

/*< 590	ca >*/
L590:
    updscr_(&iqx, &iqy, &isx, &isy, &ichar, damage, &iplayr, &hyper);

/*  --	UPDATE TORPEDOS */

/*< 	if(it >*/
    if (itorp == iotorp && armed == oarmed && ichar != 78) {
	goto L600;
    }
/*< 	iotorp = itorp >*/
    iotorp = itorp;
/*< 	oarmed = armed >*/
    oarmed = armed;
/*< 	call colcur( 37, 19 ) >*/
    colcur_(&c__37, &c__19);
/*< 	call number(2, itorp, 2 ) >*/
    number_(&c__2, &itorp, &c__2);
/*< 	if( armed ) call string(1,' + A^E') >*/
    if (armed) {
	string_(&c__1, " + A^E", (ftnlen)6);
    }
/*< 	if( .not. armed ) call string(1,'    ^E') >*/
    if (! armed) {
	string_(&c__1, "    ^E", (ftnlen)6);
    }

/*  --	UPDATE SHIELD */

/*< 600	if( isheld .eq. ishold .and. ichar .ne. 78 ) goto 610 >*/
L600:
    if (isheld == ishold && ichar != 78) {
	goto L610;
    }
/*< 	ishold = isheld >*/
    ishold = isheld;
/*< 	call colcur( 35, 18 ) >*/
    colcur_(&c__35, &c__18);
/*< 	call number(2, isheld, 3 ) >*/
    number_(&c__2, &isheld, &c__3);

/*  --	UPDATE DEGREE */

/*< 610	call putval(6, 0,1719,  4, iplayr, 8, degree ) >*/
L610:
    putval_(&c__6, &c__0, &c__1719, &c__4, &iplayr, &c__8, &degree);
/*< 	if( i >*/
    if ((integer) (degree * (float)100.) == (integer) (odegre * (float)100.) 
	    && ichar != 78) {
	goto L620;
    }
/*< 	odegre = degree >*/
    odegre = degree;
/*< 	call colcur( 36, 17 ) >*/
    colcur_(&c__36, &c__17);
/*< 	call number(2, ifix(degree), 3 ) >*/
    i__1 = (integer) degree;
    number_(&c__2, &i__1, &c__3);

/*  --	UPDATE BEARING */

/*< 620	if >*/
L620:
    if ((integer) (bearin * (float)100.) == (integer) (obearn * (float)100.) 
	    && ichar != 78) {
	goto L630;
    }
/*< 	obearn = bearin >*/
    obearn = bearin;
/*< 	call colcur( 36, 16 ) >*/
    colcur_(&c__36, &c__16);
/*< 	call number(2, ifix(bearin), 3 ) >*/
    i__1 = (integer) bearin;
    number_(&c__2, &i__1, &c__3);

/*  --	UPDATE SPEED */

/*< 630	call putval(6, 0,1736,  4, iplayr, 5, speed ) >*/
L630:
    putval_(&c__6, &c__0, &c__1736, &c__4, &iplayr, &c__5, &speed);
/*< 	if( i >*/
    if ((integer) (speed * (float)100.) == (integer) (ospeed * (float)100.) &&
	     ichar != 78) {
	goto L640;
    }
/*< 	ospeed = speed >*/
    ospeed = speed;
/*< 	call colcur( 32, 15 ) >*/
    colcur_(&c__32, &c__15);
/*< 	call number(4, speed, 4, 10, 1 ) >*/
    number_(&c__4, &speed, &c__4, &c__10, &c__1);

/*  --	UPDATE NEW SPEED */

/*< 640	if( aspeed .gt. 8.0 ) aspeed = 8.0 >*/
L640:
    if (aspeed > (float)8.) {
	aspeed = (float)8.;
    }
/*< 	if( speed .gt. 8.0 ) speed = 8.0 >*/
    if (speed > (float)8.) {
	speed = (float)8.;
    }
/*< 	if( i >*/
    if ((integer) (aspeed * (float)100.) == (integer) (opeed * (float)100.) &&
	     ichar != 78) {
	goto L641;
    }
/*< 	opeed = aspeed >*/
    opeed = aspeed;
/*< 	call colcur( 35, 14 ) >*/
    colcur_(&c__35, &c__14);
/*< 	call number(4, opeed, 4, 10, 1 ) >*/
    number_(&c__4, &opeed, &c__4, &c__10, &c__1);

/*  --	UPDATE DOCKING BANKS */

/*< 641	if >*/
L641:
    if (odn == denrgy && odt == dtorp && odc == dcrew && ichar != 78) {
	goto L650;
    }
/*< 	call colcur( 34, 13 ) >*/
    colcur_(&c__34, &c__13);
/*< 	call number(2, denrgy, 5 ) >*/
    number_(&c__2, &denrgy, &c__5);
/*< 	odn = denrgy >*/
    odn = denrgy;
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call number(2, dtorp, 2 ) >*/
    number_(&c__2, &dtorp, &c__2);
/*< 	odt = dtorp >*/
    odt = dtorp;
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call number(2, dcrew, 3 ) >*/
    number_(&c__2, &dcrew, &c__3);
/*< 	odc = dcrew >*/
    odc = dcrew;

/*  --	UPDATE DAMAGE REPORT */

/*< 650	icrew = 0 >*/
L650:
    icrew = 0;
/*< 	do 680 i=1,7 >*/
    for (i__ = 1; i__ <= 7; ++i__) {
/*< 	    if( damage(7,1) .gt. 0 ) damage(i,2)=max0(0,damage(i,2)-1) >*/
	if (damage[6] > 0) {
/* Computing MAX */
	    i__1 = 0, i__2 = damage[i__ + 6] - 1;
	    damage[i__ + 6] = max(i__1,i__2);
	}
/*< 	    if( damage(i,1) .gt. 0 )damage(i,1)=damage(i,1)-damage(i,2) >*/
	if (damage[i__ - 1] > 0) {
	    damage[i__ - 1] -= damage[i__ + 6];
	}
/*< 	    if( damage(i,1) .lt. 0 ) damage(i,1) = 0 >*/
	if (damage[i__ - 1] < 0) {
	    damage[i__ - 1] = 0;
	}
/*< 	    if( damage(i,2) .eq. 0 ) i1 = -1 >*/
	if (damage[i__ + 6] == 0) {
	    i1 = -1;
	}
/*< 	    if( damage(i,2) .ne. 0 ) i1 = damage(i,1)/damage(i,2) >*/
	if (damage[i__ + 6] != 0) {
	    i1 = damage[i__ - 1] / damage[i__ + 6];
	}
/*< 	    icrew = icrew + damage(i,2) >*/
	icrew += damage[i__ + 6];
/*< 	    if( i1 .eq. dam1(i,1) .and. ichar .ne. 78 ) goto 670 >*/
	if (i1 == dam1[i__ - 1] && ichar != 78) {
	    goto L670;
	}
/*< 	    dam1(i,1) = i1 >*/
	dam1[i__ - 1] = i1;
/*< 	    call colcur( 18, 10-i ) >*/
	i__1 = 10 - i__;
	colcur_(&c__18, &i__1);
/*< 	    if( i1 .ne. 0 ) goto 660 >*/
	if (i1 != 0) {
	    goto L660;
	}
/*< 	    if( i .ne. 7 ) call colstr(iclgre,' Operational^E') >*/
	if (i__ != 7) {
	    colstr_(&col_1.iclgre, " Operational^E", (ftnlen)14);
	}
/*< 	    if( i .eq. 7 ) call colstr(iclgre,'Green:   ^E') >*/
	if (i__ == 7) {
	    colstr_(&col_1.iclgre, "Green:   ^E", (ftnlen)11);
	}
/*< 	    goto 670 >*/
	goto L670;

/*< 660	    if( i .eq. 7 ) goto 665 >*/
L660:
	if (i__ == 7) {
	    goto L665;
	}
/*< 	    if( i1 .lt. 0 ) call colstr(iclpur,' * No crew *^E') >*/
	if (i1 < 0) {
	    colstr_(&col_1.iclpur, " * No crew *^E", (ftnlen)14);
	}
/*< 	    if( damage(i,1) .eq. 0 .and. i1 .lt. 0 ) damage(i,1)=1 >*/
	if (damage[i__ - 1] == 0 && i1 < 0) {
	    damage[i__ - 1] = 1;
	}
/*< 	    if( i1 .lt. 0 ) goto 670 >*/
	if (i1 < 0) {
	    goto L670;
	}
/*< 	    call pcolor(iclyel) >*/
	pcolor_(&col_1.iclyel);
/*< 	    call number(2, i1, 4 ) >*/
	number_(&c__2, &i1, &c__4);
/*< 	    call string(1,' minutes^E') >*/
	string_(&c__1, " minutes^E", (ftnlen)10);
/*< 	    goto 670 >*/
	goto L670;

/*< 665	   >*/
L665:
	if (i1 < 100 || damage[13] == 0) {
	    colstr_(&col_1.iclyel, "Yellow:  ^E", (ftnlen)11);
	}
/*< 	    i >*/
	if (i1 >= 100 && i1 < 200 && damage[13] != 0) {
	    colstr_(&col_1.iclred, "Red:     ^E", (ftnlen)11);
	}
/*< 	    i >*/
	if (i1 >= 200 && damage[13] != 0) {
	    colstr_(&col_1.iclred, "Critical:^E", (ftnlen)11);
	}

/*< 670	    if(i.ne.7.or.(ichar.ne.78.and.icrew.eq.ocrew)) goto 675 >*/
L670:
	if (i__ != 7 || ichar != 78 && icrew == ocrew) {
	    goto L675;
	}
/*< 	    call colcur( 28, 10-i ) >*/
	i__1 = 10 - i__;
	colcur_(&c__28, &i__1);
/*< 	    call number(2, icrew, 3 ) >*/
	number_(&c__2, &icrew, &c__3);
/*< 	    ocrew = icrew >*/
	ocrew = icrew;
/*< 675	   >*/
L675:
	if (damage[i__ + 6] == dam1[i__ + 6] && ichar != 78) {
	    goto L680;
	}
/*< 	    call colcur( 36, 10-i ) >*/
	i__1 = 10 - i__;
	colcur_(&c__36, &i__1);
/*< 	    call number(2, damage(i,2), 5 ) >*/
	number_(&c__2, &damage[i__ + 6], &c__5);
/*< 	    dam1(i,2)=damage(i,2) >*/
	dam1[i__ + 6] = damage[i__ + 6];
/*< 680	continue >*/
L680:
	;
    }
/*< 	if( icrew .gt. 0 ) goto 681 >*/
    if (icrew > 0) {
	goto L681;
    }
/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 	call colstr(iclred,'The entire crew has been killed.^E') >*/
    colstr_(&col_1.iclred, "The entire crew has been killed.^E", (ftnlen)34);
/*< 	call cease( iplayr, iqx, iqy, isx, isy, fault ) >*/
    cease_(&iplayr, &iqx, &iqy, &isx, &isy, &fault);

/*  --	REMOVE A FEW IONS FROM THE GALAXY */

/*< 681	do 682 i = 1, 10 >*/
L681:
    for (i__ = 1; i__ <= 10; ++i__) {
/*< 	    ix = iran( 10 ) >*/
	ix = iran_(&c__10);
/*< 	    iy = iran( 10 ) >*/
	iy = iran_(&c__10);
/*< 	    call getval(6, 0,1822,  2, ix, iy, ival1 ) >*/
	getval_(&c__6, &c__0, &c__1822, &c__2, &ix, &iy, &ival1);
/*< 	    call getval(8, 0,1823,  1, ix, iy, iran(10), iran(10), ival ) >*/
	i__1 = iran_(&c__10);
	i__2 = iran_(&c__10);
	getval_(&c__8, &c__0, &c__1823, &c__1, &ix, &iy, &i__1, &i__2, &ival);
/*< 	    if( ival .eq. 4 .and. ival1 .le. 99 ) call putval(4, 0,1824,  -1, 0 ) >*/
	if (ival == 4 && ival1 <= 99) {
	    putval_(&c__4, &c__0, &c__1824, &c_n1, &c__0);
	}
/*< 682	continue >*/
/* L682: */
    }

/*  --	UPDATE ANY TORPEDOS UNDER SHIPS CONTROL */

/*< 	call lock >*/
    lock_();
/*< 	do 750 i= 1,25 >*/
    for (i__ = 1; i__ <= 25; ++i__) {
/*< 	    if( torpx(i) .eq. 0.0 ) goto 750 >*/
	if (torpx[i__ - 1] == (float)0.) {
	    goto L750;
	}
/*< 	    c >*/
	i__1 = (integer) (torpx[i__ - 1] + (float).5);
	i__2 = (integer) (torpy[i__ - 1] + (float).5);
	getval_(&c__8, &c__0, &c__1833, &c__1, &itx[i__ - 1], &ity[i__ - 1], &
		i__1, &i__2, &ival);
/*< 	    if( ival .eq. -iplayr ) call putval(4, 0,1835,  -1, 0 ) >*/
	if (ival == -iplayr) {
	    putval_(&c__4, &c__0, &c__1835, &c_n1, &c__0);
	}
/*< 	    itdist(i) = itdist(i) + 1 >*/
	++itdist[i__ - 1];
/*< 	    i >*/
	if (ival > 0 && ival != iplayr + 64 || itdist[i__ - 1] > 40) {
	    goto L740;
	}
/*< 	    torpx(i) = sqwrap( itx(i), ix1, torpxs(i)+torpx(i) ) >*/
	r__1 = torpxs[i__ - 1] + torpx[i__ - 1];
	torpx[i__ - 1] = sqwrap_(&itx[i__ - 1], &ix1, &r__1);
/*< 	    torpy(i) = sqwrap( ity(i), iy1, torpys(i)+torpy(i) ) >*/
	r__1 = torpys[i__ - 1] + torpy[i__ - 1];
	torpy[i__ - 1] = sqwrap_(&ity[i__ - 1], &iy1, &r__1);
/*< 	    call getval(8, 0,1841,  1, itx(i), ity(i), ix1, iy1, ival ) >*/
	getval_(&c__8, &c__0, &c__1841, &c__1, &itx[i__ - 1], &ity[i__ - 1], &
		ix1, &iy1, &ival);

/*< 	    i >*/
	if (ival > 0 && ival != -iplayr && ival != 4) {
	    goto L690;
	}
/*< 	    call putval(4, 0,1845,  -1, -iplayr ) >*/
	i__1 = -iplayr;
	putval_(&c__4, &c__0, &c__1845, &c_n1, &i__1);
/*< 	    goto 750 >*/
	goto L750;

/*< 690	if( ival .eq. -iplayr .or. ival .eq. iplayr+64 ) goto 750 >*/
L690:
	if (ival == -iplayr || ival == iplayr + 64) {
	    goto L750;
	}
/*< 	    i >*/
	if (ival == 3 || ival == 4 || ival < 0) {
	    goto L740;
	}

/*< 	    if( ival .ne. 1 .and. ival .ne. 2 ) goto 730 >*/
	if (ival != 1 && ival != 2) {
	    goto L730;
	}
/*< 	    if( iran(10) .gt.3 ) goto 740 >*/
	if (iran_(&c__10) > 3) {
	    goto L740;
	}
/*< 	    call putval(4, 0,1854,  -1, 0 ) >*/
	putval_(&c__4, &c__0, &c__1854, &c_n1, &c__0);
/*< 	    call nova( itx(i), ity(i), ix1, iy1 ) >*/
	nova_(&itx[i__ - 1], &ity[i__ - 1], &ix1, &iy1);
/*< 	    if( ival .eq. 1 ) call addval(6, 0,1856,  2, itx(i), ity(i), -1 ) >*/
	if (ival == 1) {
	    addval_(&c__6, &c__0, &c__1856, &c__2, &itx[i__ - 1], &ity[i__ - 
		    1], &c_n1);
	}
/*< 	    if( ival .eq. 2 ) call addval(6, 0,1857,  2, itx(i), ity(i), -10 ) >*/
	if (ival == 2) {
	    addval_(&c__6, &c__0, &c__1857, &c__2, &itx[i__ - 1], &ity[i__ - 
		    1], &c_n10);
	}
/*< 	    if( ival .eq. 1 ) goto 740 >*/
	if (ival == 1) {
	    goto L740;
	}
/*< 725	    istx = iran(10) >*/
L725:
	istx = iran_(&c__10);
/*< 	    isty = iran(10) >*/
	isty = iran_(&c__10);
/*< 	    call getval(6, 0,1861,  2, istx, isty, ival1 ) >*/
	getval_(&c__6, &c__0, &c__1861, &c__2, &istx, &isty, &ival1);
/*< 	    if( ival1 .gt. 9 ) goto 725 >*/
	if (ival1 > 9) {
	    goto L725;
	}
/*< 	    call addval(4, 0,1863,  -2, 10 ) >*/
	addval_(&c__4, &c__0, &c__1863, &c_n2, &c__10);
/*< 726	    istx1 = iran(10) >*/
L726:
	istx1 = iran_(&c__10);
/*< 	    isty1 = iran(10) >*/
	isty1 = iran_(&c__10);
/*< 	    call getval(8, 0,1866,  1, istx, isty, istx1, isty1, ival1 ) >*/
	getval_(&c__8, &c__0, &c__1866, &c__1, &istx, &isty, &istx1, &isty1, &
		ival1);
/*< 	    if( ival1 .ne. 0 ) goto 726 >*/
	if (ival1 != 0) {
	    goto L726;
	}
/*< 	    call addval(4, 0,1868,  -1, 2 ) >*/
	addval_(&c__4, &c__0, &c__1868, &c_n1, &c__2);
/*< 	    goto 740 >*/
	goto L740;

/*< 730	    call putval(6, 0,1871,  4, ival-64, 4, -20 ) >*/
L730:
	i__1 = ival - 64;
	putval_(&c__6, &c__0, &c__1871, &c__4, &i__1, &c__4, &c_n20);
/*< 	    call putval(6, 0,1872,  4, ival-64, 17, iplayr ) >*/
	i__1 = ival - 64;
	putval_(&c__6, &c__0, &c__1872, &c__4, &i__1, &c__17, &iplayr);

/*< 740	    torpx(i) = 0.0 >*/
L740:
	torpx[i__ - 1] = (float)0.;

/*< 750	continue >*/
L750:
	;
    }
/*< 	call unlock >*/
    unlock_();

/*  --	FIND OUT IF HIT BY ENEMY */

/*< 	call getval(6, 0,1881,  4, iplayr, 4, i1 ) >*/
    getval_(&c__6, &c__0, &c__1881, &c__4, &iplayr, &c__4, &i1);
/*< 	call putval(4, 0,1882,  -4, 0 ) >*/
    putval_(&c__4, &c__0, &c__1882, &c_n4, &c__0);
/*< 	if( i1 .eq. 0 ) goto 780 >*/
    if (i1 == 0) {
	goto L780;
    }
/*< 	call colcur( 26, 12 ) >*/
    colcur_(&c__26, &c__12);
/*< 	if( i1 .lt. 0 ) goto 760 >*/
    if (i1 < 0) {
	goto L760;
    }
/*< 	call colstr(iclred,'Ship hit with ^E') >*/
    colstr_(&col_1.iclred, "Ship hit with ^E", (ftnlen)16);
/*< 	call number(2, i1, 3 ) >*/
    number_(&c__2, &i1, &c__3);
/*< 	call string(1,'% phaser bolt.     ^E') >*/
    string_(&c__1, "% phaser bolt.     ^E", (ftnlen)21);
/*< 	goto 770 >*/
    goto L770;

/*< 760	call colstr(iclred,'Ship hit by photon torpedo.        ^E') >*/
L760:
    colstr_(&col_1.iclred, "Ship hit by photon torpedo.        ^E", (ftnlen)
	    37);

/*< 770	call getval(6, 0,1893,  4, iplayr, 17, ival ) >*/
L770:
    getval_(&c__6, &c__0, &c__1893, &c__4, &iplayr, &c__17, &ival);
/*< 	fault = ival >*/
    fault = ival;
/*< 	call damagm( damage, iabs(i1), isheld ) >*/
    i__1 = abs(i1);
    damagm_(damage, &i__1, &isheld);
/*< 	erase2 = .true. >*/
    erase2 = TRUE_;

/*  --	GET ANY MESSAGES */

/*< 780	call getval(5, 0,1900,  3, 3, ival ) >*/
L780:
    getval_(&c__5, &c__0, &c__1900, &c__3, &c__3, &ival);
/*< 	if( ival .ne. iplayr ) goto 70 >*/
    if (ival != iplayr) {
	goto L70;
    }
/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 	call irepeat(32,78) >*/
    irepeat_(&c__32, &c__78);
/*<         call cursor( 1, 2 ) >*/
    cursor_(&c__1, &c__2);
/*< 	call getval(5, 0,1905,  5, 1, index ) >*/
    getval_(&c__5, &c__0, &c__1905, &c__5, &c__1, &index);
/*< 	do 790 i1= 2, index >*/
    i__1 = index;
    for (i1 = 2; i1 <= i__1; ++i1) {
/*< 	    i = i1 >*/
	i__ = i1;
/*< 	    call getval(5, 0,1908,  5, i, commar(i-1) ) >*/
	getval_(&c__5, &c__0, &c__1908, &c__5, &i__, &commar[i__ - 2]);
/*< 790	continue >*/
/* L790: */
    }
/*< 	call putval(5, 0,1910,  3, 3, 0 ) >*/
    putval_(&c__5, &c__0, &c__1910, &c__3, &c__3, &c__0);
/*< 	call chrout( commar(1)+64 ) >*/
    i__1 = commar[0] + 64;
    chrout_(&i__1);
/*< 	call chrout(40) >*/
    chrout_(&c__40);
/*< 	call getval(6, 0,1913,  4, commar(1), 9, ival ) >*/
    getval_(&c__6, &c__0, &c__1913, &c__4, commar, &c__9, &ival);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	call chrout(44) >*/
    chrout_(&c__44);
/*< 	call getval(6, 0,1916,  4, commar(1), 10, ival ) >*/
    getval_(&c__6, &c__0, &c__1916, &c__4, commar, &c__10, &ival);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	call string(1,'): - ^E') >*/
    string_(&c__1, "): - ^E", (ftnlen)7);
/*< 	if( index-2 .gt. 0 )call string(3, commar(2), 0, index-2 ) >*/
    if (index - 2 > 0) {
	i__1 = index - 2;
	string_(&c__3, &commar[1], &c__0, &i__1);
    }
/*< 	erase3 = .true. >*/
    erase3 = TRUE_;
/*< 	goto 70 >*/
    goto L70;

/*  --	GAME ENDED FOR SOME REASON (PROBABLY TOO MANY PEOPLE) */

/*< 792	ca >*/
/* L792: */
    colstr_(&col_1.icllbl, "I am sorry, too many people are playing.  Try ag\
ain later.^M^J^E", (ftnlen)64);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call exprog >*/
    exprog_();

/*  --	PRIVILEDGED:  MAKE MAP AND PRINT OUT STATISTICS */

/*  --	IF THERE IS A NOT A GALAXY, SET ONE UP TO MAP. */
/*  --	IN ANY CASE, GET OUTPUT FILE SPECIFICATION */

/*< 800	call check( iniflg ) >*/
L800:
    check_(&iniflg);
/*< 	if(iniflg) call initdb >*/
    if (iniflg) {
	initdb_();
    }
/*< 803	call string(1,'^M^JOutput file specification: ^E') >*/
L803:
    string_(&c__1, "^M^JOutput file specification: ^E", (ftnlen)33);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call getstr(3, comara, 60, i ) >*/
    getstr_(&c__3, comara, &c__60, &i__);

/*  --	ATTEMPT TO OPEN FILE */

/*< 	call iscan( 1, i, comara, filesp ) >*/
    iscan_(&c__1, &i__, comara, filesp);
/*< 	call ofile( 2, filesp, 0 ) >*/
    ofile_(&c__2, filesp, &c__0);
/*< 	if( lerror(0) ) goto 805 >*/
    if (lerror_(&c__0)) {
	goto L805;
    }
/*< 	call wfile( 2, filesp ) >*/
    wfile_(&c__2, filesp);
/*< 	if( .not. lerror(0) ) goto 808 >*/
    if (! lerror_(&c__0)) {
	goto L808;
    }

/*  --	HE MADE AN ERROR:  TELL HIM WHAT IT LOOKED LIKE AND GO BACK */

/*< 	call string(1,'Cannot open file for:^M^J    ^E') >*/
    string_(&c__1, "Cannot open file for:^M^J    ^E", (ftnlen)31);
/*< 	call outspc( filesp ) >*/
    outspc_(filesp);
/*< 	goto 803 >*/
    goto L803;
/*< 805	call string(1,'Cannot open device for:^M^J    ^E') >*/
L805:
    string_(&c__1, "Cannot open device for:^M^J    ^E", (ftnlen)33);
/*< 	call outspc( filesp ) >*/
    outspc_(filesp);
/*< 	goto 803 >*/
    goto L803;

/*  --	SELECT CHANNEL, PRINT OUT HEADER AND START MAIN MAP LOOP */

/*< 808	call select( 2 ) >*/
L808:
    select_(&c__2);
/*< 	call  >*/
    string_(&c__1, "                                                  Starda\
te: ^E", (ftnlen)62);
/*< 	call getval(5, 0,1964,  3, 2, idat ) >*/
    getval_(&c__5, &c__0, &c__1964, &c__3, &c__2, &idat);
/*< 	call number(4, idat/100.0, 8, 10, 2 ) >*/
    r__1 = idat / (float)100.;
    number_(&c__4, &r__1, &c__8, &c__10, &c__2);
/*< 	call string(1,'^M^J^J^J^E') >*/
    string_(&c__1, "^M^J^J^J^E", (ftnlen)10);
/*< 	do 820 i1 = 10, 1, -1 >*/
    for (i1 = 10; i1 >= 1; --i1) {
/*< 	    iqy = i1 >*/
	iqy = i1;
/*< 	    call string(1,'       ^E') >*/
	string_(&c__1, "       ^E", (ftnlen)9);
/*< 	    do 809 i2 = 1, 111 >*/
	for (i2 = 1; i2 <= 111; ++i2) {
/*< 		call chrout(45) >*/
	    chrout_(&c__45);
/*< 809	    continue >*/
/* L809: */
	}
/*< 	    call string(1,'^M^J       ^E') >*/
	string_(&c__1, "^M^J       ^E", (ftnlen)13);
/*< 	    do 810 i2 = 1, 10 >*/
	for (i2 = 1; i2 <= 10; ++i2) {
/*< 		iqx = i2 >*/
	    iqx = i2;
/*< 		call string(1,':::^E') >*/
	    string_(&c__1, ":::^E", (ftnlen)5);
/*< 		call getval(6, 0,1977,  2, iqx, iqy, ival ) >*/
	    getval_(&c__6, &c__0, &c__1977, &c__2, &iqx, &iqy, &ival);
/*< 		call number(2, ival, 5 ) >*/
	    number_(&c__2, &ival, &c__5);
/*< 		call string(1,' ::^E') >*/
	    string_(&c__1, " ::^E", (ftnlen)5);
/*< 810	    continue >*/
/* L810: */
	}
/*< 	    call string(1,':^M^J       ^E') >*/
	string_(&c__1, ":^M^J       ^E", (ftnlen)14);
/*< 	    do 811 i2 = 1, 111 >*/
	for (i2 = 1; i2 <= 111; ++i2) {
/*< 		call chrout(45) >*/
	    chrout_(&c__45);
/*< 811	    continue >*/
/* L811: */
	}
/*< 	    call crlf >*/
	crlf_();
/*< 	    do 820 i2 = 10, 1, -1 >*/
	for (i2 = 10; i2 >= 1; --i2) {
/*< 		    isy = i2 >*/
	    isy = i2;
/*< 		    if( isy .eq. 5 ) call number(2, iqy, 5 ) >*/
	    if (isy == 5) {
		number_(&c__2, &iqy, &c__5);
	    }
/*< 		    if( isy .ne. 5 ) call string(1,'     ^E') >*/
	    if (isy != 5) {
		string_(&c__1, "     ^E", (ftnlen)7);
	    }
/*< 		    call string(1,'  ^E') >*/
	    string_(&c__1, "  ^E", (ftnlen)4);
/*< 		    do 815 j = 1, 10 >*/
	    for (j = 1; j <= 10; ++j) {
/*< 			iqx = j >*/
		iqx = j;
/*< 			call chrout(58) >*/
		chrout_(&c__58);
/*< 			do 815 i = 1, 10 >*/
		for (i__ = 1; i__ <= 10; ++i__) {
/*< 			    isx = i >*/
		    isx = i__;
/*< 			    call getval(8, 0,1996,  1, iqx, iqy, isx, isy, ival ) >*/
		    getval_(&c__8, &c__0, &c__1996, &c__1, &iqx, &iqy, &isx, &
			    isy, &ival);
/*< 			    if( ival .lt. 0 ) ival = 5 >*/
		    if (ival < 0) {
			ival = 5;
		    }
/*< 			    if( ival .le. 6 ) ival = objval( ival+1 ) >*/
		    if (ival <= 6) {
			ival = objval[ival];
		    }
/*< 			    call chrout( ival ) >*/
		    chrout_(&ival);

/*< 815			continue >*/
/* L815: */
		}
	    }
/*< 	    call string(1,':^M^J^E') >*/
	    string_(&c__1, ":^M^J^E", (ftnlen)7);
/*< 820	continue >*/
/* L820: */
	}
    }
/*< 	call string(1,'       ^E') >*/
    string_(&c__1, "       ^E", (ftnlen)9);
/*< 	do 821 i = 1, 111 >*/
    for (i__ = 1; i__ <= 111; ++i__) {
/*< 	    call chrout(45) >*/
	chrout_(&c__45);
/*< 821	continue >*/
/* L821: */
    }
/*< 	call string(1,'^M^J^J    ^E') >*/
    string_(&c__1, "^M^J^J    ^E", (ftnlen)12);
/*< 	do 825 i1 = 1, 10 >*/
    for (i1 = 1; i1 <= 10; ++i1) {
/*< 	    iqx = i1 >*/
	iqx = i1;
/*< 	    call number(2, iqx, 11 ) >*/
	number_(&c__2, &iqx, &c__11);
/*< 825	continue >*/
/* L825: */
    }
/*< 	call string(1,'^M^J^J^J^J^E') >*/
    string_(&c__1, "^M^J^J^J^J^E", (ftnlen)12);

/*  --	MAP DONE, PRINT OUT SHIP STATISTICS */

/*< 	do 900 i1 = 1, 26 >*/
    for (i1 = 1; i1 <= 26; ++i1) {
/*< 	    i = i1 >*/
	i__ = i1;
/*< 	    call getval(6, 0,2019,  4, i, 1, j ) >*/
	getval_(&c__6, &c__0, &c__2019, &c__4, &i__, &c__1, &j);
/*< 	    if( j .eq. 0 ) goto 900 >*/
	if (j == 0) {
	    goto L900;
	}
/*< 	    call chrout( i+64 ) >*/
	i__1 = i__ + 64;
	chrout_(&i__1);
/*< 	    call string(1,' - ^E') >*/
	string_(&c__1, " - ^E", (ftnlen)5);
/*< 	    call getval(6, 0,2023,  4, i, 2, ival ) >*/
	getval_(&c__6, &c__0, &c__2023, &c__4, &i__, &c__2, &ival);
/*< 	    call string(3, ival, 6, 6 ) >*/
	string_(&c__3, &ival, &c__6, &c__6);
/*< 	    call getval(6, 0,2025,  4, i, 3, ival ) >*/
	getval_(&c__6, &c__0, &c__2025, &c__4, &i__, &c__3, &ival);
/*< 	    call string(3, ival, 6, 6 ) >*/
	string_(&c__3, &ival, &c__6, &c__6);
/*< 	    if( i .ne. 1 ) goto 899 >*/
	if (i__ != 1) {
	    goto L899;
	}
/*< 	    call string(1,'  Computer controlled ship^M^J^E') >*/
	string_(&c__1, "  Computer controlled ship^M^J^E", (ftnlen)32);
/*< 	    goto 900 >*/
	goto L900;
/*< 899	    call string(1,'  J^E') >*/
L899:
	string_(&c__1, "  J^E", (ftnlen)5);
/*< 	    call number(2, j, 3 ) >*/
	number_(&c__2, &j, &c__3);
/*< 	    call string(1,'   ^E') >*/
	string_(&c__1, "   ^E", (ftnlen)5);
/*< 	    sname(1) = igtab( j, 25 ) >*/
	sname[0] = igtab_(&j, &c__25);
/*< 	    sname(2) = igtab( j, 26 ) >*/
	sname[1] = igtab_(&j, &c__26);
/*< 	    call string(3, sname, 6, 12 ) >*/
	string_(&c__3, sname, &c__6, &c__12);
/*< 	    call string(1,'  [^E') >*/
	string_(&c__1, "  [^E", (ftnlen)5);
/*< 	    call number(3, ileft( igtab( j, 2 ) ), 5, 8 ) >*/
	i__2 = igtab_(&j, &c__2);
	i__1 = ileft_(&i__2);
	number_(&c__3, &i__1, &c__5, &c__8);
/*< 	    call chrout(44) >*/
	chrout_(&c__44);
/*< 	    call number(3, iright( igtab( j, 2 ) ), 5, 8 ) >*/
	i__2 = igtab_(&j, &c__2);
	i__1 = iright_(&i__2);
	number_(&c__3, &i__1, &c__5, &c__8);
/*< 	    call string(1,']  TTY^E') >*/
	string_(&c__1, "]  TTY^E", (ftnlen)8);
/*< 	    call number(3, itty( j ), 3, 8 ) >*/
	i__1 = itty_(&j);
	number_(&c__3, &i__1, &c__3, &c__8);
/*< 	    call string(1,'  at ^E') >*/
	string_(&c__1, "  at ^E", (ftnlen)7);
/*< 	    call nodlin( itty( j ), inode, iline ) >*/
	i__1 = itty_(&j);
	nodlin_(&i__1, &inode, &iline);
/*< 	    call string(3, node( inode ), 6, 6 ) >*/
	i__1 = node_(&inode);
	string_(&c__3, &i__1, &c__6, &c__6);
/*< 	    call crlf >*/
	crlf_();
/*< 900	continue >*/
L900:
	;
    }

/*  --	FINISHED, NOW CLOSE FILES AND EXIT */

/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call close( 2 ) >*/
    close_(&c__2);
/*< 	call exprog >*/
    exprog_();
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

