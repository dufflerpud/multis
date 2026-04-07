/*  -- translated by f2c (version 20200916).
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
    integer wrdlst[400], wrdtyp[400], wrdind[400], numwds;
} wrdcom_;

#define wrdcom_1 wrdcom_

/* Table of constant values */

static integer c_n1 = -1;
static integer c__6 = 6;
static integer c__1 = 1;
static integer c__2 = 2;
static integer c__0 = 0;
static integer c__5 = 5;
static integer c__80 = 80;
static integer c__10 = 10;
static integer c__7 = 7;
static integer c__92 = 92;
static integer c__9 = 9;
static integer c__50 = 50;
static integer c__4 = 4;
static integer c__96 = 96;
static integer c__510 = 510;
static integer c__11 = 11;
static integer c__99 = 99;
static integer c__3 = 3;
static integer c__36 = 36;
static integer c__100 = 100;
static integer c__102 = 102;
static integer c__18 = 18;
static integer c__106 = 106;
static integer c__109 = 109;
static integer c__52 = 52;
static integer c__112 = 112;
static integer c__26 = 26;
static integer c__115 = 115;
static integer c__8 = 8;
static integer c__118 = 118;
static integer c__121 = 121;
static integer c__124 = 124;
static integer c__127 = 127;
static integer c__12 = 12;
static integer c__130 = 130;
static integer c__13 = 13;
static integer c__133 = 133;
static integer c__14 = 14;
static integer c__136 = 136;
static integer c__15 = 15;
static integer c__139 = 139;
static integer c__16 = 16;
static integer c__142 = 142;
static integer c__17 = 17;
static integer c__145 = 145;
static integer c__148 = 148;
static integer c__19 = 19;
static integer c__152 = 152;
static integer c__20 = 20;
static integer c__75 = 75;
static integer c__155 = 155;
static integer c__21 = 21;
static integer c__159 = 159;
static integer c__22 = 22;
static integer c__162 = 162;
static integer c__23 = 23;
static integer c__165 = 165;
static integer c__24 = 24;
static integer c__168 = 168;
static integer c__25 = 25;
static integer c__171 = 171;
static integer c__174 = 174;
static integer c__27 = 27;
static integer c__178 = 178;
static integer c__28 = 28;
static integer c__181 = 181;
static integer c__29 = 29;
static integer c__184 = 184;
static integer c__30 = 30;
static integer c__187 = 187;
static integer c__31 = 31;
static integer c__190 = 190;
static integer c__32 = 32;
static integer c__193 = 193;
static integer c__33 = 33;
static integer c__48 = 48;
static integer c__209 = 209;
static integer c__511 = 511;
static integer c__217 = 217;
static integer c__219 = 219;
static integer c__221 = 221;
static integer c__40 = 40;
static integer c__234 = 234;
static integer c__237 = 237;
static integer c__253 = 253;
static integer c__256 = 256;
static integer c__257 = 257;
static integer c__258 = 258;
static integer c__259 = 259;
static integer c__260 = 260;
static integer c__261 = 261;
static integer c__265 = 265;
static integer c__266 = 266;
static integer c__267 = 267;
static integer c__268 = 268;
static integer c__270 = 270;
static integer c__277 = 277;
static logical c_false = FALSE_;
static integer c__294 = 294;
static integer c__298 = 298;
static integer c__299 = 299;
static integer c__300 = 300;
static integer c__301 = 301;
static integer c__302 = 302;
static integer c__303 = 303;
static integer c__304 = 304;
static integer c__305 = 305;
static integer c__306 = 306;
static integer c__307 = 307;
static integer c__359 = 359;
static integer c__360 = 360;
static integer c__361 = 361;
static integer c__362 = 362;
static integer c__367 = 367;
static integer c__369 = 369;
static integer c__396 = 396;
static integer c__62 = 62;
static integer c__45 = 45;
static integer c__60 = 60;
static integer c__405 = 405;
static integer c__35 = 35;
static integer c__413 = 413;
static integer c__68 = 68;
static integer c__78 = 78;
static integer c__418 = 418;
static integer c__85 = 85;
static integer c__429 = 429;
static integer c__437 = 437;
static integer c__438 = 438;
static integer c__442 = 442;
static integer c__77 = 77;
static integer c__61 = 61;
static integer c__46 = 46;
static integer c__47 = 47;
static integer c__94 = 94;
static integer c__474 = 474;
static integer c__475 = 475;
static integer c__479 = 479;
static integer c__55 = 55;
static integer c__67 = 67;
static integer c__63 = 63;
static integer c__53 = 53;
static integer c__71 = 71;
static integer c__51 = 51;
static integer c__54 = 54;
static integer c__49 = 49;
static integer c__500 = 500;
static integer c__1031 = 1031;
static integer c__1026 = 1026;
static integer c__1041 = 1041;
static integer c__693 = 693;
static integer c__696 = 696;
static logical c_true = TRUE_;
static integer c__704 = 704;
static integer c__705 = 705;
static integer c__728 = 728;
static integer c__732 = 732;
static integer c__738 = 738;
static integer c__741 = 741;
static integer c_n2 = -2;
static integer c__742 = 742;
static integer c__744 = 744;
static integer c__751 = 751;
static integer c__756 = 756;
static integer c__762 = 762;
static integer c__774 = 774;
static integer c__777 = 777;
static integer c__783 = 783;
static integer c__784 = 784;
static integer c__785 = 785;
static integer c__786 = 786;
static integer c__870 = 870;
static integer c__877 = 877;
static integer c__879 = 879;
static integer c__972 = 972;
static integer c__975 = 975;
static integer c__978 = 978;
static integer c__980 = 980;
static integer c__982 = 982;
static integer c__985 = 985;
static integer c__988 = 988;
static integer c__1001 = 1001;
static integer c__1004 = 1004;
static integer c__1007 = 1007;
static integer c__1009 = 1009;
static integer c__1011 = 1011;
static integer c__1013 = 1013;
static integer c__1014 = 1014;
static integer c__1016 = 1016;
static integer c__1018 = 1018;
static integer c__1023 = 1023;
static integer c__1025 = 1025;
static integer c__1043 = 1043;
static integer c__1047 = 1047;
static integer c__1050 = 1050;
static integer c__1056 = 1056;
static integer c__1057 = 1057;
static integer c__1059 = 1059;
static integer c__1067 = 1067;
static integer c__1068 = 1068;
static integer c__1084 = 1084;
static integer c__1086 = 1086;
static integer c__1092 = 1092;
static integer c__1114 = 1114;
static integer c__1115 = 1115;
static integer c__1117 = 1117;
static integer c__1123 = 1123;
static integer c__1143 = 1143;
static integer c__1147 = 1147;
static integer c__1149 = 1149;
static integer c__1162 = 1162;
static integer c__1166 = 1166;
static integer c__1168 = 1168;
static integer c__1180 = 1180;
static integer c__1181 = 1181;
static integer c__1194 = 1194;
static integer c__1197 = 1197;
static integer c__1199 = 1199;
static integer c__1201 = 1201;
static integer c__1203 = 1203;
static integer c__95 = 95;
static integer c__1247 = 1247;
static integer c__1248 = 1248;
static integer c__1257 = 1257;
static integer c__1258 = 1258;
static integer c__1274 = 1274;
static integer c__44 = 44;
static integer c__1293 = 1293;
static integer c__1301 = 1301;
static integer c__58 = 58;
static integer c__1316 = 1316;
static integer c__1322 = 1322;
static integer c__1327 = 1327;
static integer c__1332 = 1332;
static integer c__1336 = 1336;
static integer c__1339 = 1339;
static integer c__1342 = 1342;
static integer c__1345 = 1345;
static integer c__1348 = 1348;
static integer c__1351 = 1351;
static integer c__1354 = 1354;
static integer c__1355 = 1355;
static integer c__1356 = 1356;
static integer c__1363 = 1363;
static integer c__1374 = 1374;
static integer c__1380 = 1380;
static integer c__1384 = 1384;
static integer c__1387 = 1387;
static integer c__1390 = 1390;
static integer c__1395 = 1395;
static integer c__1398 = 1398;
static integer c__1407 = 1407;
static integer c__91 = 91;
static integer c__93 = 93;
static integer c__1443 = 1443;
static integer c__1448 = 1448;
static integer c_n10 = -10;
static integer c__1449 = 1449;
static integer c__1450 = 1450;
static integer c__1451 = 1451;
static integer c__1452 = 1452;
static integer c__1453 = 1453;
static integer c__1454 = 1454;
static integer c__1455 = 1455;
static integer c__1459 = 1459;
static integer c__1462 = 1462;
static integer c__1463 = 1463;
static integer c__1464 = 1464;
static integer c__1465 = 1465;
static integer c__1471 = 1471;
static integer c__1473 = 1473;
static integer c__1482 = 1482;
static integer c__1483 = 1483;
static integer c__1484 = 1484;
static integer c__1485 = 1485;
static integer c__1486 = 1486;
static integer c__1487 = 1487;
static integer c__1488 = 1488;
static integer c_n32 = -32;
static integer c__1489 = 1489;
static integer c__1491 = 1491;
static integer c_n6 = -6;
static integer c__1492 = 1492;
static integer c__1496 = 1496;
static integer c__1497 = 1497;
static integer c__1499 = 1499;
static integer c__1502 = 1502;
static integer c__1505 = 1505;
static integer c__1513 = 1513;
static integer c__1515 = 1515;
static integer c__1523 = 1523;
static integer c__1525 = 1525;
static integer c__1527 = 1527;
static integer c__1528 = 1528;
static integer c__1543 = 1543;
static integer c__1546 = 1546;
static integer c__1553 = 1553;
static integer c__1554 = 1554;
static integer c__1555 = 1555;
static integer c__1559 = 1559;
static integer c__1561 = 1561;
static integer c__1569 = 1569;
static integer c__1576 = 1576;
static integer c__1580 = 1580;
static integer c__1581 = 1581;
static integer c__1582 = 1582;
static integer c__1583 = 1583;
static integer c__1624 = 1624;
static integer c__1626 = 1626;
static integer c__1681 = 1681;
static integer c__1684 = 1684;
static integer c__1686 = 1686;
static integer c__1687 = 1687;
static integer c__1690 = 1690;
static integer c__1692 = 1692;
static integer c__1693 = 1693;
static integer c__1694 = 1694;
static integer c__1695 = 1695;
static integer c__1697 = 1697;
static integer c__70 = 70;
static integer c__1712 = 1712;
static integer c__1718 = 1718;
static integer c__1721 = 1721;
static integer c_n21 = -21;
static integer c__1722 = 1722;
static integer c__1725 = 1725;
static integer c_n17 = -17;
static integer c__1743 = 1743;
static integer c__1748 = 1748;
static integer c__1762 = 1762;
static integer c__1765 = 1765;
static integer c__1772 = 1772;
static integer c__1774 = 1774;
static integer c__1785 = 1785;
static integer c__1789 = 1789;
static integer c__1791 = 1791;
static integer c__1793 = 1793;
static integer c__1030 = 1030;
static integer c__1045 = 1045;
static integer c__1032 = 1032;
static integer c__536 = 536;
static integer c__1814 = 1814;
static integer c__1048 = 1048;
static integer c__1049 = 1049;
static integer c__1827 = 1827;
static integer c__1828 = 1828;
static integer c__1829 = 1829;
static integer c__1830 = 1830;
static integer c__1831 = 1831;
static integer c__1845 = 1845;
static integer c__1847 = 1847;
static integer c__1849 = 1849;
static integer c__1851 = 1851;
static integer c_n20 = -20;
static integer c__1853 = 1853;
static integer c__1855 = 1855;
static integer c__1856 = 1856;
static integer c__1858 = 1858;
static integer c__1883 = 1883;
static integer c__1885 = 1885;
static integer c__1892 = 1892;
static integer c__1899 = 1899;
static integer c__1901 = 1901;
static integer c__1910 = 1910;
static integer c__1912 = 1912;
static integer c__1922 = 1922;
static integer c__1924 = 1924;
static integer c__1926 = 1926;
static integer c__1928 = 1928;
static integer c__1929 = 1929;
static integer c__1931 = 1931;
static integer c__1933 = 1933;
static integer c__1934 = 1934;
static integer c__1945 = 1945;
static integer c__1949 = 1949;
static integer c__1963 = 1963;
static integer c__1964 = 1964;
static integer c__1972 = 1972;
static integer c__1973 = 1973;
static integer c__1984 = 1984;
static integer c__1986 = 1986;
static integer c__1991 = 1991;
static integer c__2013 = 2013;
static integer c__2014 = 2014;
static integer c__2017 = 2017;
static integer c__2018 = 2018;
static integer c__2022 = 2022;
static integer c__2030 = 2030;
static integer c__2031 = 2031;
static integer c__2032 = 2032;
static integer c__2035 = 2035;
static integer c__2040 = 2040;
static integer c__2041 = 2041;
static integer c__2046 = 2046;
static integer c__2048 = 2048;
static integer c__2049 = 2049;
static integer c__2057 = 2057;
static integer c__2071 = 2071;
static integer c__2073 = 2073;
static integer c__2076 = 2076;
static integer c__2082 = 2082;
static integer c__2089 = 2089;
static integer c__1035 = 1035;
static integer c__2147 = 2147;
static integer c__2152 = 2152;
static integer c__2159 = 2159;
static integer c__34 = 34;
static integer c__2193 = 2193;
static integer c__2194 = 2194;
static integer c__2195 = 2195;
static integer c__2196 = 2196;
static integer c__2199 = 2199;
static integer c__2200 = 2200;
static integer c__2210 = 2210;
static integer c__2212 = 2212;
static integer c__2218 = 2218;
static integer c__2221 = 2221;
static integer c__2256 = 2256;
static integer c__2263 = 2263;
static integer c__37 = 37;
static integer c__2322 = 2322;
static integer c__2349 = 2349;
static integer c__2363 = 2363;
static integer c__2373 = 2373;
static integer c__2382 = 2382;
static integer c__2440 = 2440;
static integer c__2448 = 2448;
static integer c__2451 = 2451;
static integer c__2453 = 2453;
static integer c__2505 = 2505;
static integer c__2530 = 2530;
static integer c__2535 = 2535;
static integer c__2565 = 2565;
static integer c__2569 = 2569;
static integer c__2570 = 2570;
static integer c__2598 = 2598;
static integer c__2601 = 2601;
static integer c__2602 = 2602;
static integer c__2603 = 2603;
static integer c__2624 = 2624;
static integer c__2625 = 2625;
static integer c__2626 = 2626;
static integer c__2627 = 2627;
static integer c__2650 = 2650;
static integer c__2651 = 2651;
static integer c__2652 = 2652;
static integer c__2653 = 2653;
static integer c__2671 = 2671;
static integer c__2674 = 2674;
static integer c__2675 = 2675;
static integer c__2677 = 2677;
static integer c__2679 = 2679;
static integer c__2680 = 2680;
static integer c__2720 = 2720;
static integer c__2727 = 2727;
static integer c__2742 = 2742;
static integer c__2748 = 2748;
static integer c__2749 = 2749;
static integer c__2754 = 2754;
static integer c__2755 = 2755;
static integer c_n4 = -4;
static integer c__2757 = 2757;
static integer c__2760 = 2760;
static integer c__2762 = 2762;
static integer c_n11 = -11;
static integer c__2763 = 2763;
static integer c__2766 = 2766;
static integer c__2767 = 2767;
static integer c__2790 = 2790;
static integer c__2792 = 2792;
static integer c__2793 = 2793;
static integer c__2794 = 2794;
static integer c__2802 = 2802;
static integer c__2804 = 2804;
static integer c__2807 = 2807;
static integer c__2809 = 2809;
static integer c__2810 = 2810;
static integer c__2843 = 2843;
static integer c__2871 = 2871;
static integer c__2884 = 2884;

/* indx#	cave.for - A multi-user game to wander around in a cave made up of hexagons and monsters */
/* @HDR@	$Id$ */
/* @HDR@ */
/* @HDR@	Copyright (c) 1982-2026 Christopher Caldwell (Christopher.M.Caldwell0@gmail.com) */
/* @HDR@ */
/* @HDR@	Permission is hereby granted, free of charge, to any person */
/* @HDR@	obtaining a copy of this software and associated documentation */
/* @HDR@	files (the "Software"), to deal in the Software without */
/* @HDR@	restriction, including without limitation the rights to use, */
/* @HDR@	copy, modify, merge, publish, distribute, sublicense, and/or */
/* @HDR@	sell copies of the Software, and to permit persons to whom */
/* @HDR@	the Software is furnished to do so, subject to the following */
/* @HDR@	conditions: */
/* @HDR@ */
/* @HDR@	The above copyright notice and this permission notice shall be */
/* @HDR@	included in all copies or substantial portions of the Software. */
/* @HDR@ */
/* @HDR@	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY */
/* @HDR@	KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE */
/* @HDR@	WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE */
/* @HDR@	AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT */
/* @HDR@	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, */
/* @HDR@	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING */
/* @HDR@	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR */
/* @HDR@	OTHER DEALINGS IN THE SOFTWARE. */

/* hist#	2026-02-17 - Christopher.M.Caldwell0@gmail.com - Created */
/* ------------------------------------------------------------------------ */
/* doc#	cave.for - A multi-user game to wander around in a cave made up of hexagons and monsters */
/* doc#	In some ways based on the old Gygax Dungeons and Dragons. */
/* doc#	Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC. */
/* ------------------------------------------------------------------------ */
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

/*< 	logical function streq( six1, six2 ) >*/
logical streq_(six1, six2)
integer *six1, *six2;
{
    /* System generated locals */
    logical ret_val;

    /* Local variables */
    static integer i__;
    extern integer job_();
    static integer chk1[6], chk2[6];
    extern /* Subroutine */ int allcap_(), convrt_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer chk1(6), chk2(6) >*/
/*< 	streq = ( six1 .eq. six2 ) >*/
    ret_val = *six1 == *six2;
/*< 	if( job(-1) .ne. 0 ) return >*/
    if (job_(&c_n1) != 0) {
	return ret_val;
    }
/*< 	call convrt( six1, 6, 6, chk1, 1 ) >*/
    convrt_(six1, &c__6, &c__6, chk1, &c__1);
/*< 	call allcap( chk1, 6 ) >*/
    allcap_(chk1, &c__6);
/*< 	call convrt( six2, 6, 6, chk2, 1 ) >*/
    convrt_(six2, &c__6, &c__6, chk2, &c__1);
/*< 	call allcap( chk2, 6 ) >*/
    allcap_(chk2, &c__6);
/*< 	do 100 i = 1, 6 >*/
    for (i__ = 1; i__ <= 6; ++i__) {
/*< 	    streq = ( chk1(i) .eq. chk2(i) ) >*/
	ret_val = chk1[i__ - 1] == chk2[i__ - 1];
/*< 	    if( chk1(i) .eq. 0 .or. .not. streq ) return >*/
	if (chk1[i__ - 1] == 0 || ! ret_val) {
	    return ret_val;
	}
/*< 100	continue >*/
/* L100: */
    }
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* streq_ */

/*< 	subroutine initdb( comara, parara, filesp ) >*/
/* Subroutine */ int initdb_(comara, parara, filesp)
integer *comara, *parara, *filesp;
{
    /* Initialized data */

    static integer numbrm = 1250;
    static integer maxwsz = 6;

    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, j, x, y, z__, i1, nx, ny;
    extern integer job_();
    static integer dir, dex, hit, idam;
    static logical ieof;
    static integer bite, claw, ilen, nobj;
    extern integer iran_(), icon_();
    static integer ival, nhex;
    extern /* Subroutine */ int init_(), drop_();
    static integer burn, type__;
    extern /* Subroutine */ int ofile_(), rfile_(), close_(), parse_();
    static integer ipass, ocost, ztemp;
    extern /* Subroutine */ int newxy_();
    static integer failed, cancar, length;
    extern /* Subroutine */ int getval_();
    static integer weighs, sixara[4], itweap, numobj, ifloor;
    extern /* Subroutine */ int unlock_(), getnum_();
    static integer nverbs;
    extern integer isxbit_();
    static integer streng;
    extern /* Subroutine */ int exprog_();
    extern logical lerror_();
    extern /* Subroutine */ int getstr_(), putval_(), convrt_();
    static integer smothr;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer comara(80), parara(40), filesp(13), sixara(4) >*/
/*< 	logical lerror, ieof >*/
/*< 	integer maxwsz >*/
/*< 	data numbrm/1250/ >*/
    /* Parameter adjustments */
    --filesp;
    --parara;
    --comara;

    /* Function Body */
/*< 	data maxwsz/6/ >*/
/*< 	if( job(-1) .eq. 0 ) maxwsz = 20 >*/
    if (job_(&c_n1) == 0) {
	maxwsz = 20;
    }
/* 	OPEN UP THE VOCABULARY DATA FILE */
/*< 	filesp( 5 ) = isxbit('DAT~') >*/
    filesp[5] = isxbit_("DAT~", (ftnlen)4);
/*< 	call ofile( 2, filesp, 0 ) >*/
    ofile_(&c__2, &filesp[1], &c__0);
/*< 	if( lerror(0) )  call exprog >*/
    if (lerror_(&c__0)) {
	exprog_();
    }
/*< 	call rfile( 2, filesp ) >*/
    rfile_(&c__2, &filesp[1]);
/*< 	if( lerror(0) )  call exprog >*/
    if (lerror_(&c__0)) {
	exprog_();
    }
/*< 100	call getstr(5, comara, 80, ilen, 2, ieof ) >*/
L100:
    getstr_(&c__5, &comara[1], &c__80, &ilen, &c__2, &ieof);
/*< 	if( ieof )  call exprog >*/
    if (ieof) {
	exprog_();
    }
/*< 	if( ilen .le. 0 .or. comara(1) .eq. 59 ) goto 100 >*/
    if (ilen <= 0 || comara[1] == 59) {
	goto L100;
    }
/*< 	call getnum(6, comara, ilen, nverbs, 10, nobj, 10 ) >*/
    getnum_(&c__6, &comara[1], &ilen, &nverbs, &c__10, &nobj, &c__10);
/* 	ARRAY #1 IS THE MASTER ARRAY WITH ALL THE PTR'S TO ARRAY #2 */
/* 	VALUE		MEANS */
/* 	0		ROCK */
/* 	1-510		POINTERS */
/* 	511		NOTHING */
/*< 	call init(7, 0,92,  1, 9, 50, 50, 4 ) >*/
    init_(&c__7, &c__0, &c__92, &c__1, &c__9, &c__50, &c__50, &c__4);

/* 	ARRAY #2 CONSISTS OF A LIST OF POINTERS AND CONTAINS */
/* 	ALL THE THINGS STORED AT A LOCATION (AT MOST 10) */
/*< 	call init(6, 0,96,  2, 9, 510, 11 ) >*/
    init_(&c__6, &c__0, &c__96, &c__2, &c__9, &c__510, &c__11);

/* 	ARRAY #3 CONSISTS OF THE NAMES OF THE ITEMS */
/*< 	call init(5, 0,99,  3, 36, 100 ) >*/
    init_(&c__5, &c__0, &c__99, &c__3, &c__36, &c__100);

/* 	ARRAY #4 CONSISTS OF THE WEIGHTS OF THE ITEMS */
/*< 	call init(5, 0,102,  4, 18, 510 ) >*/
    init_(&c__5, &c__0, &c__102, &c__4, &c__18, &c__510);

/* 	ARRAY #5 CONSISTS OF POINTERS FOR ITEMS THAT STORE THINGS */
/* 	OR A 511 IF IT CAN'T BE USED TO STORE THINGS */
/*< 	call init(5, 0,106,  5, 9, 510 ) >*/
    init_(&c__5, &c__0, &c__106, &c__5, &c__9, &c__510);

/* 	ARRAY #6 DAMAGE ARRAY */
/*< 	call init(6, 0,109,  6, 10, 52, 4 ) >*/
    init_(&c__6, &c__0, &c__109, &c__6, &c__10, &c__52, &c__4);

/* 	ARRAY #7 CONTAINS JOB NUMBERS AND EXPERIENCE FOR PLAYERS */
/*< 	call init(6, 0,112,  7, 18, 26, 2 ) >*/
    init_(&c__6, &c__0, &c__112, &c__7, &c__18, &c__26, &c__2);

/* 	ARRAY #8 CONTAINS WHICH DIRECTION PLAYER IS POINTING */
/*< 	call init(5, 0,115,  8, 3, 52 ) >*/
    init_(&c__5, &c__0, &c__115, &c__8, &c__3, &c__52);

/* 	ARRAY #9 CONTAINS ALL VERBS */
/*< 	call init(5, 0,118,  9, 36, 3*nverbs/2 ) >*/
    i__1 = nverbs * 3 / 2;
    init_(&c__5, &c__0, &c__118, &c__9, &c__36, &i__1);

/* 	ARRAY #10 TELLS IF INDEX IS IN USE */
/*< 	call init(5, 0,121,  10, 1, 510 ) >*/
    init_(&c__5, &c__0, &c__121, &c__10, &c__1, &c__510);

/* 	ARRAY #11 CONSISTS OF THE INDICES TO STUFF IN THE STORE */
/*< 	call init(5, 0,124,  11, 9, 80 ) >*/
    init_(&c__5, &c__0, &c__124, &c__11, &c__9, &c__80);

/* 	ARRAY #12 CONSISTS OF THE POINTERS TO THE NAMES OF INDICES */
/*< 	call init(5, 0,127,  12, 7, 510 ) >*/
    init_(&c__5, &c__0, &c__127, &c__12, &c__7, &c__510);

/* 	ARRAY #13 CONSISTS OF COST OF EACH KIND OF ITEM */
/*< 	call init(5, 0,130,  13, 12, 100 ) >*/
    init_(&c__5, &c__0, &c__130, &c__13, &c__12, &c__100);

/* 	ARRAY #14 CONSISTS OF WEIGHT TYPE OF ITEM CAN CARRY */
/*< 	call init(5, 0,133,  14, 18, 100 ) >*/
    init_(&c__5, &c__0, &c__133, &c__14, &c__18, &c__100);

/* 	ARRAY #15 CONSISTS OF ITEM TYPE (WHERE IT GOES) */
/*< 	call init(5, 0,136,  15, 3, 100 ) >*/
    init_(&c__5, &c__0, &c__136, &c__15, &c__3, &c__100);

/* 	ARRAY #16 CONTAINS FLAGS (1 = STAIRWAY BETWEEN FLOORS) */
/*< 	call init(7, 0,139,  16, 1, 50, 50, 4 ) >*/
    init_(&c__7, &c__0, &c__139, &c__16, &c__1, &c__50, &c__50, &c__4);

/* 	ARRAY #17 CONTAINS DAMAGE FACTOR FOR EACH TYPE OF ITEM */
/*< 	call init(5, 0,142,  17, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__142, &c__17, &c__7, &c__100);

/* 	ARRAY #18 CONTAINS STRENGTH REQUIRED TO USE OBJECT */
/*< 	call init(5, 0,145,  18, 4, 100 ) >*/
    init_(&c__5, &c__0, &c__145, &c__18, &c__4, &c__100);

/* 	ARRAY #19 CONTAINS X, Y AND Z POSITION OF PLAYER */
/*< 	call init(6, 0,148,  19, 6, 52, 3 ) >*/
    init_(&c__6, &c__0, &c__148, &c__19, &c__6, &c__52, &c__3);

/* 	ARRAY #20 CONTAINS SOURCE, VOLUME, LENGTH AND MESSAGE */
/* 	AND WHO WON THE GAME. */
/*< 	call init(5, 0,152,  20, 7, 75 ) >*/
    init_(&c__5, &c__0, &c__152, &c__20, &c__7, &c__75);

/* 	ARRAY #21 FLAG INDICATING SUCCESS OF ATTACK */
/*< 	call init(5, 0,155,  21, 3, 52 ) >*/
    init_(&c__5, &c__0, &c__155, &c__21, &c__3, &c__52);

/* 	ARRAY #22 IS A LIST OF PROGRAMMER NUMBERS AND */
/* 	THE AMOUNT OF MONEY THEY HAVE LEFT TO SPEND. */
/*< 	call init(6, 0,159,  22, 18, 100, 2 ) >*/
    init_(&c__6, &c__0, &c__159, &c__22, &c__18, &c__100, &c__2);

/* 	ARRAY #23 CONTAINS DESIRED ALLY SETUPS */
/*< 	call init(6, 0,162,  23, 1, 26, 26 ) >*/
    init_(&c__6, &c__0, &c__162, &c__23, &c__1, &c__26, &c__26);

/* 	ARRAY #24 CONTAINS WHAT TYPE WEAPON (HIT, THROWN, FIRED) */
/*< 	call init(5, 0,165,  24, 2, 100 ) >*/
    init_(&c__5, &c__0, &c__165, &c__24, &c__2, &c__100);

/* 	ARRAY #25 CONTAINS STANDARD WEIGHT FOR MONSTERS */
/*< 	call init(5, 0,168,  25, 18, 26 ) >*/
    init_(&c__5, &c__0, &c__168, &c__25, &c__18, &c__26);

/* 	ARRAY #26 CONTAINS STANDARD DEXTERITY FOR MONSTERS */
/*< 	call init(5, 0,171,  26, 6, 26 ) >*/
    init_(&c__5, &c__0, &c__171, &c__26, &c__6, &c__26);

/* 	ARRAY #27 CONTAINS STANDARD & ACTUAL STRENGTH FOR MONSTERS */
/*< 	call init(6, 0,174,  27, 6, 26, 2 ) >*/
    init_(&c__6, &c__0, &c__174, &c__27, &c__6, &c__26, &c__2);

/* 	ARRAY #28 CONTAINS PERCENTAGE OF */
/* 	BITING, CLAWING, BURNING, HITTING AND SMOTHERING ATTACKS / 5 */
/*< 	call init(6, 0,178,  28, 5, 26, 5 ) >*/
    init_(&c__6, &c__0, &c__178, &c__28, &c__5, &c__26, &c__5);

/* 	ARRAY #29 CONTAINS NUMBER OF HEXES THAT MONSTER OCCUPIES */
/*< 	call init(5, 0,181,  29, 5, 26 ) >*/
    init_(&c__5, &c__0, &c__181, &c__29, &c__5, &c__26);

/* 	ARRAY #30 CONTAINS THE MONSTER'S PREFERENCE OF FLOORS - 1 */
/*< 	call init(5, 0,184,  30, 2, 26 ) >*/
    init_(&c__5, &c__0, &c__184, &c__30, &c__2, &c__26);

/* 	ARRAY #31 CONTAINS THE DIRECTION TO THE CURRENT HEX OF MONSTER */
/*< 	call init(6, 0,187,  31, 3, 26, 20 ) >*/
    init_(&c__6, &c__0, &c__187, &c__31, &c__3, &c__26, &c__20);

/* 	ARRAY #32 CONTAINS AMOUNT OF TIME TO RECOVER */
/*< 	call init(5, 0,190,  32, 6, 52 ) >*/
    init_(&c__5, &c__0, &c__190, &c__32, &c__6, &c__52);

/* 	ARRAY #33 CONTAINS NUMBER TIMES DISI HAS BEEN HANDLED */
/*< 	call init(5, 0,193,  33, 36, 1 ) >*/
    init_(&c__5, &c__0, &c__193, &c__33, &c__36, &c__1);
/*< 	do 400 z = 1, 4 >*/
    for (z__ = 1; z__ <= 4; ++z__) {
/*< 	    x = iran( 48 ) + 1 >*/
	x = iran_(&c__48) + 1;
/*< 	    y = iran( 48 ) + 1 >*/
	y = iran_(&c__48) + 1;
/*< 	    dir = iran( 6 ) >*/
	dir = iran_(&c__6);
/*< 	    ipass = 1 >*/
	ipass = 1;
/*< 	    do 400 i = 1, numbrm >*/
	i__1 = numbrm;
	for (i__ = 1; i__ <= i__1; ++i__) {
/*< 		if( ipass .gt. 0 )  dir = iran( 6 ) >*/
	    if (ipass > 0) {
		dir = iran_(&c__6);
	    }
/*< 200		call newxy( x, y, dir, nx, ny ) >*/
/* L200: */
	    newxy_(&x, &y, &dir, &nx, &ny);
/*< 		if(  >*/
	    if (nx > 1 && nx < 50 && ny > 1 && ny < 50) {
		goto L300;
	    }
/*< 		ipass = 1 >*/
	    ipass = 1;
/*< 		goto 400 >*/
	    goto L400;
/*< 300		x = nx >*/
L300:
	    x = nx;
/*< 		y = ny >*/
	    y = ny;
/*< 		call putval(7, 0,209,  1, x, y, z+0, 511 ) >*/
	    i__2 = z__;
	    putval_(&c__7, &c__0, &c__209, &c__1, &x, &y, &i__2, &c__511);
/*< 		if( iran(10) .eq. 1 )  ipass = -ipass >*/
	    if (iran_(&c__10) == 1) {
		ipass = -ipass;
	    }
/*< 400	continue >*/
L400:
	    ;
	}
    }
/*< 	do 600 ztemp = 1, 4 >*/
    for (ztemp = 1; ztemp <= 4; ++ztemp) {
/*< 	    z = ztemp >*/
	z__ = ztemp;
/*< 500	    x = iran( 50 ) >*/
L500:
	x = iran_(&c__50);
/*< 	    y = iran( 50 ) >*/
	y = iran_(&c__50);
/*< 	    call getval(7, 0,217,  1, x, y, z, ival ) >*/
	getval_(&c__7, &c__0, &c__217, &c__1, &x, &y, &z__, &ival);
/*< 	    if( ival .eq. 0 ) goto 500 >*/
	if (ival == 0) {
	    goto L500;
	}
/*< 	    if( z .ne. 4 )call getval(7, 0,219,  1, x, y, z+1, ival ) >*/
	if (z__ != 4) {
	    i__1 = z__ + 1;
	    getval_(&c__7, &c__0, &c__219, &c__1, &x, &y, &i__1, &ival);
	}
/*< 	    if( ival .eq. 0 ) goto 500 >*/
	if (ival == 0) {
	    goto L500;
	}
/*< 	    call putval(7, 0,221,  16, x, y, z, 1 ) >*/
	putval_(&c__7, &c__0, &c__221, &c__16, &x, &y, &z__, &c__1);
/*< 600	continue >*/
/* L600: */
    }
/*< 	i = 0 >*/
    i__ = 0;
/*< 700	call getstr(5, comara, 80, ilen, 2, ieof ) >*/
L700:
    getstr_(&c__5, &comara[1], &c__80, &ilen, &c__2, &ieof);
/*< 	    if( ieof )  call exprog >*/
    if (ieof) {
	exprog_();
    }
/*< 	    if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 700 >*/
    if (ilen == 0 || comara[1] == 59) {
	goto L700;
    }
/*< 	    call parse( comara, ilen, parara, length, 40 ) >*/
    parse_(&comara[1], &ilen, &parara[1], &length, &c__40);
/*< 	    if( length .eq. 0 ) goto 700 >*/
    if (length == 0) {
	goto L700;
    }
/*< 	    do 800 j = 1, length >*/
    i__1 = length;
    for (j = 1; j <= i__1; ++j) {
/*< 		if( parara(j) .eq. isxbit('-~') ) goto 700 >*/
	if (parara[j] == isxbit_("-~", (ftnlen)2)) {
	    goto L700;
	}
/*< 		if( parara(j) .eq. isxbit('.~') ) goto 900 >*/
	if (parara[j] == isxbit_(".~", (ftnlen)2)) {
	    goto L900;
	}
/*< 		i = i + 1 >*/
	++i__;
/*< 		call putval(5, 0,234,  9, i, parara(j) ) >*/
	putval_(&c__5, &c__0, &c__234, &c__9, &i__, &parara[j]);
/*< 800	    continue >*/
/* L800: */
    }
/*< 	    i = i + 1 >*/
    ++i__;
/*< 	    call putval(5, 0,237,  9, i, -1 ) >*/
    putval_(&c__5, &c__0, &c__237, &c__9, &i__, &c_n1);
/*< 	goto 700 >*/
    goto L700;
/*< 900	i = 52 >*/
L900:
    i__ = 52;
/*< 	j = 52 >*/
    j = 52;
/*< 1000	call getstr(5, comara, 80, ilen, 2, ieof ) >*/
L1000:
    getstr_(&c__5, &comara[1], &c__80, &ilen, &c__2, &ieof);
/*< 	if( ieof )  call exprog >*/
    if (ieof) {
	exprog_();
    }
/*< 	if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 1000 >*/
    if (ilen == 0 || comara[1] == 59) {
	goto L1000;
    }
/*< 	if( comara(1) .eq. 46 ) goto 1400 >*/
    if (comara[1] == 46) {
	goto L1400;
    }
/* 	CALL ALLCAP( COMARA, ILEN ) */
/*< 	i = i + 1 >*/
    ++i__;
/*< 	do 1100 i1 = 1, maxwsz  >*/
    i__1 = maxwsz;
    for (i1 = 1; i1 <= i__1; ++i1) {
/*< 	    if( icon(comara(i1)) .le. 32 ) goto 1105 >*/
	if (icon_(&comara[i1]) <= 32) {
	    goto L1105;
	}
/*< 1100	continue >*/
/* L1100: */
    }
/*< 	i1 = maxwsz >*/
    i1 = maxwsz;
/*< 1105	call convrt( comara, i1, 1, sixara, 6 ) >*/
L1105:
    convrt_(&comara[1], &i1, &c__1, sixara, &c__6);
/*< 	call putval(5, 0,253,  3, i, sixara(1) ) >*/
    putval_(&c__5, &c__0, &c__253, &c__3, &i__, sixara);
/*< 	call  >*/
    getnum_(&c__18, &comara[1], &ilen, &type__, &c__10, &cancar, &c__10, &
	    weighs, &c__10, &numobj, &c__10, &ocost, &c__10, &idam, &c__10, &
	    streng, &c__10, &itweap, &c__10);
/*< 	call putval(5, 0,256,  13, i, ocost ) >*/
    putval_(&c__5, &c__0, &c__256, &c__13, &i__, &ocost);
/*< 	call putval(5, 0,257,  14, i, cancar ) >*/
    putval_(&c__5, &c__0, &c__257, &c__14, &i__, &cancar);
/*< 	call putval(5, 0,258,  15, i, type ) >*/
    putval_(&c__5, &c__0, &c__258, &c__15, &i__, &type__);
/*< 	call putval(5, 0,259,  17, i, idam ) >*/
    putval_(&c__5, &c__0, &c__259, &c__17, &i__, &idam);
/*< 	call putval(5, 0,260,  18, i, streng ) >*/
    putval_(&c__5, &c__0, &c__260, &c__18, &i__, &streng);
/*< 	if( itweap .gt. 0 ) call putval(5, 0,261,  24, i, itweap ) >*/
    if (itweap > 0) {
	putval_(&c__5, &c__0, &c__261, &c__24, &i__, &itweap);
    }
/*< 1200	if( numobj .eq. 0 ) goto 1000 >*/
L1200:
    if (numobj == 0) {
	goto L1000;
    }
/*< 	numobj = numobj - 1 >*/
    --numobj;
/*< 	j = j + 1 >*/
    ++j;
/*< 	if( cancar .eq. 0 )  call putval(5, 0,265,  5, j, 511 ) >*/
    if (cancar == 0) {
	putval_(&c__5, &c__0, &c__265, &c__5, &j, &c__511);
    }
/*< 	call putval(5, 0,266,  4, j, weighs ) >*/
    putval_(&c__5, &c__0, &c__266, &c__4, &j, &weighs);
/*< 	call putval(5, 0,267,  10, j, 1 ) >*/
    putval_(&c__5, &c__0, &c__267, &c__10, &j, &c__1);
/*< 	call putval(5, 0,268,  12, j, i ) >*/
    putval_(&c__5, &c__0, &c__268, &c__12, &j, &i__);
/*< 	if( j .gt. 132 ) goto 1300 >*/
    if (j > 132) {
	goto L1300;
    }
/*< 	call putval(5, 0,270,  11, j-52, j ) >*/
    i__1 = j - 52;
    putval_(&c__5, &c__0, &c__270, &c__11, &i__1, &j);
/*< 	goto 1200 >*/
    goto L1200;
/*< 1300	x = iran( 50 ) >*/
L1300:
    x = iran_(&c__50);
/*< 	y = iran( 50 ) >*/
    y = iran_(&c__50);
/*< 	z = -itweap >*/
    z__ = -itweap;
/*< 	if( z .le. 0 )  z = iran( 4 ) >*/
    if (z__ <= 0) {
	z__ = iran_(&c__4);
    }
/*< 	call getval(7, 0,277,  1, x, y, z, ival ) >*/
    getval_(&c__7, &c__0, &c__277, &c__1, &x, &y, &z__, &ival);
/*< 	if( ival .ne. 511 ) goto 1300 >*/
    if (ival != 511) {
	goto L1300;
    }
/*< 	call drop( failed, .false., x, y, z, j ) >*/
    drop_(&failed, &c_false, &x, &y, &z__, &j);
/*< 	goto 1200 >*/
    goto L1200;
/*< 1400	i = 0 >*/
L1400:
    i__ = 0;
/*< 1500	call getstr(5, comara, 80, ilen, 2, ieof ) >*/
L1500:
    getstr_(&c__5, &comara[1], &c__80, &ilen, &c__2, &ieof);
/*< 	if( ieof ) call exprog >*/
    if (ieof) {
	exprog_();
    }
/*< 	if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 1500 >*/
    if (ilen == 0 || comara[1] == 59) {
	goto L1500;
    }
/*< 	if( comara(1) .eq. 46 ) goto 1700 >*/
    if (comara[1] == 46) {
	goto L1700;
    }
/* 	CALL ALLCAP( COMARA, ILEN ) */
/*< 	i = i + 1 >*/
    ++i__;
/*< 	do 1600 i1 = 1, maxwsz >*/
    i__1 = maxwsz;
    for (i1 = 1; i1 <= i__1; ++i1) {
/*< 	    if( icon(comara(i1)) .le. 32 ) goto 1605 >*/
	if (icon_(&comara[i1]) <= 32) {
	    goto L1605;
	}
/*< 1600	continue >*/
/* L1600: */
    }
/*< 	i1 = maxwsz >*/
    i1 = maxwsz;
/*< 1605	call convrt( comara, i1, 1, ival, 6 ) >*/
L1605:
    convrt_(&comara[1], &i1, &c__1, &ival, &c__6);
/*< 	call putval(5, 0,294,  3, i+26, ival ) >*/
    i__1 = i__ + 26;
    putval_(&c__5, &c__0, &c__294, &c__3, &i__1, &ival);
/*< 	call  >*/
    getnum_(&c__22, &comara[1], &ilen, &weighs, &c__10, &dex, &c__10, &streng,
	     &c__10, &bite, &c__10, &claw, &c__10, &burn, &c__10, &hit, &
	    c__10, &smothr, &c__10, &nhex, &c__10, &ifloor, &c__10);
/*< 	call putval(5, 0,298,  25, i, weighs ) >*/
    putval_(&c__5, &c__0, &c__298, &c__25, &i__, &weighs);
/*< 	call putval(5, 0,299,  26, i, dex ) >*/
    putval_(&c__5, &c__0, &c__299, &c__26, &i__, &dex);
/*< 	call putval(6, 0,300,  27, i, 1, streng ) >*/
    putval_(&c__6, &c__0, &c__300, &c__27, &i__, &c__1, &streng);
/*< 	call putval(6, 0,301,  28, i, 1, bite/5 ) >*/
    i__1 = bite / 5;
    putval_(&c__6, &c__0, &c__301, &c__28, &i__, &c__1, &i__1);
/*< 	call putval(6, 0,302,  28, i, 2, claw/5 ) >*/
    i__1 = claw / 5;
    putval_(&c__6, &c__0, &c__302, &c__28, &i__, &c__2, &i__1);
/*< 	call putval(6, 0,303,  28, i, 3, burn/5 ) >*/
    i__1 = burn / 5;
    putval_(&c__6, &c__0, &c__303, &c__28, &i__, &c__3, &i__1);
/*< 	call putval(6, 0,304,  28, i, 4, hit/5 ) >*/
    i__1 = hit / 5;
    putval_(&c__6, &c__0, &c__304, &c__28, &i__, &c__4, &i__1);
/*< 	call putval(6, 0,305,  28, i, 5, smothr/5 ) >*/
    i__1 = smothr / 5;
    putval_(&c__6, &c__0, &c__305, &c__28, &i__, &c__5, &i__1);
/*< 	call putval(5, 0,306,  29, i, nhex ) >*/
    putval_(&c__5, &c__0, &c__306, &c__29, &i__, &nhex);
/*< 	call putval(5, 0,307,  30, i, ifloor-1 ) >*/
    i__1 = ifloor - 1;
    putval_(&c__5, &c__0, &c__307, &c__30, &i__, &i__1);
/*< 	goto 1500 >*/
    goto L1500;
/*< 1700	call close( 2 ) >*/
L1700:
    close_(&c__2);
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* initdb_ */


/*< 	subroutine newxy( ox, oy, dir, nx, ny ) >*/
/* Subroutine */ int newxy_(ox, oy, dir, nx, ny)
integer *ox, *oy, *dir, *nx, *ny;
{
    /* Initialized data */

    static integer xdir[6] = { 0,1,1,0,-1,-1 };
    static integer ydir[6] = { -1,0,1,1,1,0 };

    static integer x, y;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer xdir(6), ydir(6) >*/
/*< 	data xdir/0,1,1,0,-1,-1/, ydir/-1,0,1,1,1,0/ >*/
/*< 	x = ox >*/
    x = *ox;
/*< 	y = oy >*/
    y = *oy;
/*< 	nx = x + xdir( dir ) >*/
    *nx = x + xdir[*dir - 1];
/*< 	if( nx .lt. 1 .or. nx .gt. 50 )  nx = 0 >*/
    if (*nx < 1 || *nx > 50) {
	*nx = 0;
    }
/*< 	ny = y + ydir( dir ) >*/
    *ny = y + ydir[*dir - 1];
/*< 	if( mod( x, 2 ) .ne. 0 .and. xdir( dir ) .ne. 0 )  ny = ny - 1 >*/
    if (x % 2 != 0 && xdir[*dir - 1] != 0) {
	--(*ny);
    }
/*< 	if( ny .lt. 1 .or. ny .gt. 50 )  nx = 0 >*/
    if (*ny < 1 || *ny > 50) {
	*nx = 0;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* newxy_ */


/*< 	integer function newdir( dir, inc ) >*/
integer newdir_(dir, inc)
integer *dir, *inc;
{
    /* System generated locals */
    integer ret_val;

/*< 	implicit integer ( a - z ) >*/
/*< 	newdir = 0 >*/
    ret_val = 0;
/*< 	if( dir .eq. 0 )  return >*/
    if (*dir == 0) {
	return ret_val;
    }
/*< 	newdir = dir + inc >*/
    ret_val = *dir + *inc;
/*< 	if( newdir .lt. 1 )  newdir = newdir + 6 >*/
    if (ret_val < 1) {
	ret_val += 6;
    }
/*< 	if( newdir .gt. 6 )  newdir = newdir - 6 >*/
    if (ret_val > 6) {
	ret_val += -6;
    }
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* newdir_ */

/*< 	function ichcod( ichar, ifg, ibg ) >*/
integer ichcod_(ichar, ifg, ibg)
integer *ichar, *ifg, *ibg;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    extern integer icon_();

/*< 	if( ichar .lt. 0 .or. ichar .gt. 256 ) ichar = icon( ichar ) >*/
    if (*ichar < 0 || *ichar > 256) {
	*ichar = icon_(ichar);
    }
/*< 	ichcod = ifg*256*256 + ibg*256 + ichar >*/
    ret_val = (*ifg << 16) + (*ibg << 8) + *ichar;
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* ichcod_ */


/*< 	subroutine updscr(player,newscr,streng,dexter,cansee,disind) >*/
/* Subroutine */ int updscr_(player, newscr, streng, dexter, cansee, disind)
integer *player;
logical *newscr;
integer *streng, *dexter;
logical *cansee;
integer *disind;
{
    /* System generated locals */
    integer i__1, i__2, i__3, i__4, i__5;

    /* Local variables */
    static integer x, y, z__, i1, x1, y1, x2, y2, ax, ya, xc, yc, ay, ibg, 
	    ifg, dir;
    extern /* Subroutine */ int load_();
    static integer icol;
    extern integer icon_();
    static integer ival, ndir, best, item;
    static logical next;
    static integer ival1, ival2, iback;
    extern /* Subroutine */ int pback_();
    static integer ichar, index, ocost, xtemp, ytemp;
    extern /* Subroutine */ int newxy_();
    static logical change;
    extern integer ichcod_();
    static integer oldara[1134]	/* was [54][21] */, bindex, scrara[1134]	
	    /* was [54][21] */;
    extern integer findir_();
    static integer lastbg, lastfg, toload[4];
    extern /* Subroutine */ int getval_();
    extern integer weight_(), newdir_();
    extern /* Subroutine */ int clrscr_(), colcur_();
    static integer tindex;
    extern /* Subroutine */ int pcolor_();
    static integer lplayr;
    extern /* Subroutine */ int chrout_();
    static integer iunsen;
    extern /* Subroutine */ int string_(), number_();
    static integer odextr, ostren;
    extern /* Subroutine */ int convrt_(), cursor_(), monstr_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer scrara( 54, 21 ), oldara( 54, 21 ) >*/
/*< 	logical cansee( 52 ), newscr, change, next >*/
/*< 	integer toload( 4 ) >*/
/*< 	commo >*/
/*< 	call getval(6, 0,359,  19, player, 1, x ) >*/
    /* Parameter adjustments */
    --cansee;

    /* Function Body */
    getval_(&c__6, &c__0, &c__359, &c__19, player, &c__1, &x);
/*< 	call getval(6, 0,360,  19, player, 2, y ) >*/
    getval_(&c__6, &c__0, &c__360, &c__19, player, &c__2, &y);
/*< 	call getval(6, 0,361,  19, player, 3, z ) >*/
    getval_(&c__6, &c__0, &c__361, &c__19, player, &c__3, &z__);
/*< 	call getval(5, 0,362,  8, player, dir ) >*/
    getval_(&c__5, &c__0, &c__362, &c__8, player, &dir);
/*< 	do 100 index = 1, 52 >*/
    for (index = 1; index <= 52; ++index) {
/*< 	    cansee( index ) = .false. >*/
	cansee[index] = FALSE_;
/*< 	    if( index .gt. 26 ) goto 100 >*/
	if (index > 26) {
	    goto L100;
	}
/*< 	    call getval(5, 0,367,  10, index+0, ival ) >*/
	i__1 = index;
	getval_(&c__5, &c__0, &c__367, &c__10, &i__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 100 >*/
	if (ival == 0) {
	    goto L100;
	}
/*< 	    call getval(5, 0,369,  8, index+0, ival ) >*/
	i__1 = index;
	getval_(&c__5, &c__0, &c__369, &c__8, &i__1, &ival);
/*< 	    if( ival .lt. 7 ) lplayr = index >*/
	if (ival < 7) {
	    lplayr = index;
	}
/*< 100	continue >*/
L100:
	;
    }
/*< 	if( lplayr .eq. player ) call monstr >*/
    if (lplayr == *player) {
	monstr_();
    }
/*< 	yc = -1 >*/
    yc = -1;
/*< 	yc = 0 - mod( x+1, 2 ) >*/
    yc = -((x + 1) % 2);
/*< 	do 901 ytemp = y-4, y+4 >*/
    i__1 = y + 4;
    for (ytemp = y - 4; ytemp <= i__1; ++ytemp) {
/*< 	    y1 = ytemp >*/
	y1 = ytemp;
/*< 	    yc = yc + 2 >*/
	yc += 2;
/*< 	    if( y1 .lt. 1 .or. y1 .gt. 50 ) goto 901 >*/
	if (y1 < 1 || y1 > 50) {
	    goto L901;
	}
/*< 	    xc = -3 >*/
	xc = -3;
/*< 	    do 900 xtemp = x-6, x+6 >*/
	i__2 = x + 6;
	for (xtemp = x - 6; xtemp <= i__2; ++xtemp) {
/*< 		x1 = xtemp >*/
	    x1 = xtemp;
/*< 		xc = xc + 4 >*/
	    xc += 4;
/*< 		if( x1 .lt. 1 .or. x1 .gt. 50 ) goto 900 >*/
	    if (x1 < 1 || x1 > 50) {
		goto L900;
	    }
/*< 		if( x1 .eq. x .and. y1 .eq. y ) goto 300 >*/
	    if (x1 == x && y1 == y) {
		goto L300;
	    }
/*< 		ndir = findir( x, y, x1+0, y1+0 ) >*/
	    i__3 = x1;
	    i__4 = y1;
	    ndir = findir_(&x, &y, &i__3, &i__4);
/*< 		call newxy( x, y, ndir, x2, y2 ) >*/
	    newxy_(&x, &y, &ndir, &x2, &y2);
/*< 		if( x1 .eq. x2 .and. y1 .eq. y2 ) goto 300 >*/
	    if (x1 == x2 && y1 == y2) {
		goto L300;
	    }
/*< 		if(. >*/
	    if (! (ndir == newdir_(&dir, &c__1) || ndir == newdir_(&dir, &
		    c_n1) || ndir == dir)) {
		goto L900;
	    }
/*< 		x2 = x >*/
	    x2 = x;
/*< 		y2 = y >*/
	    y2 = y;
/*< 200		ndir = findir( x2, y2, x1+0, y1+0 ) >*/
L200:
	    i__3 = x1;
	    i__4 = y1;
	    ndir = findir_(&x2, &y2, &i__3, &i__4);
/*< 		call newxy( x2, y2, ndir, x2, y2 ) >*/
	    newxy_(&x2, &y2, &ndir, &x2, &y2);
/*< 		if( x1 .eq. x2 .and. y1 .eq. y2 ) goto 300 >*/
	    if (x1 == x2 && y1 == y2) {
		goto L300;
	    }
/*< 		call getval(7, 0,396,  1, x2, y2, z, ival ) >*/
	    getval_(&c__7, &c__0, &c__396, &c__1, &x2, &y2, &z__, &ival);
/*< 		if( ival .eq. 0 ) goto 900 >*/
	    if (ival == 0) {
		goto L900;
	    }
/*< 		goto 200 >*/
	    goto L200;
/*< 300		ya = yc + mod( x1+1, 2 ) >*/
L300:
	    ya = yc + (x1 + 1) % 2;
/*< 		call load(scrara,icllbl,icldbl,xc,ya,62,45,45,60) >*/
	    load_(scrara, &col_1.icllbl, &col_1.icldbl, &xc, &ya, &c__62, &
		    c__45, &c__45, &c__60);
/*< 		scrara( xc, ya+1 ) = ichcod(60,icllbl,icldbl) >*/
	    scrara[xc + (ya + 1) * 54 - 55] = ichcod_(&c__60, &col_1.icllbl, &
		    col_1.icldbl);
/*< 		scrara( xc+5, ya+1 ) = ichcod(62,icllbl,icldbl) >*/
	    scrara[xc + 5 + (ya + 1) * 54 - 55] = ichcod_(&c__62, &
		    col_1.icllbl, &col_1.icldbl);
/*< 		call load(scrara,icllbl,icldbl,xc,ya+2,62,45,45,60) >*/
	    i__3 = ya + 2;
	    load_(scrara, &col_1.icllbl, &col_1.icldbl, &xc, &i__3, &c__62, &
		    c__45, &c__45, &c__60);
/*< 		call getval(7, 0,405,  1, x1+0, y1+0, z, ival ) >*/
	    i__3 = x1;
	    i__4 = y1;
	    getval_(&c__7, &c__0, &c__405, &c__1, &i__3, &i__4, &z__, &ival);
/*< 		if( ival .ne. 0 ) goto 400 >*/
	    if (ival != 0) {
		goto L400;
	    }
/*< 		call load(scrara,iclgre,icldbl,xc,ya+1,35,35,35,35) >*/
	    i__3 = ya + 1;
	    load_(scrara, &col_1.iclgre, &col_1.icldbl, &xc, &i__3, &c__35, &
		    c__35, &c__35, &c__35);
/*< 		goto 900 >*/
	    goto L900;
/*< 400		if( ival .ne. 511 ) goto 600 >*/
L400:
	    if (ival != 511) {
		goto L600;
	    }
/*< 		call load(scrara,icllbl,icldbl,xc,ya+1,32,32,32,32) >*/
	    i__3 = ya + 1;
	    load_(scrara, &col_1.icllbl, &col_1.icldbl, &xc, &i__3, &c__32, &
		    c__32, &c__32, &c__32);
/*< 		if( z .eq. 1 ) goto 500 >*/
	    if (z__ == 1) {
		goto L500;
	    }
/*< 		call getval(7, 0,413,  16, x1+0, y1+0, z-1, ival ) >*/
	    i__3 = x1;
	    i__4 = y1;
	    i__5 = z__ - 1;
	    getval_(&c__7, &c__0, &c__413, &c__16, &i__3, &i__4, &i__5, &ival)
		    ;
/*< 		if( ival .eq. 0 ) goto 500 >*/
	    if (ival == 0) {
		goto L500;
	    }
/*< 		scrara( xc+2, ya+1 ) = ichcod(68,iclred,iclwhi) >*/
	    scrara[xc + 2 + (ya + 1) * 54 - 55] = ichcod_(&c__68, &
		    col_1.iclred, &col_1.iclwhi);
/*< 		scrara( xc+3, ya+1 ) = ichcod(78,iclred,iclwhi) >*/
	    scrara[xc + 3 + (ya + 1) * 54 - 55] = ichcod_(&c__78, &
		    col_1.iclred, &col_1.iclwhi);
/*< 500		call getval(7, 0,418,  16, x1+0, y1+0, z, ival ) >*/
L500:
	    i__3 = x1;
	    i__4 = y1;
	    getval_(&c__7, &c__0, &c__418, &c__16, &i__3, &i__4, &z__, &ival);
/*< 		if( ival .eq. 0 ) goto 900 >*/
	    if (ival == 0) {
		goto L900;
	    }
/*< 		scrara( xc+2, ya+1 ) = ichcod(85,icldbl,iclwhi) >*/
	    scrara[xc + 2 + (ya + 1) * 54 - 55] = ichcod_(&c__85, &
		    col_1.icldbl, &col_1.iclwhi);
/*< 		if( mod(scrara(xc+3,ya+1),256) .eq. icon(78) ) goto 505 >*/
	    if (scrara[xc + 3 + (ya + 1) * 54 - 55] % 256 == icon_(&c__78)) {
		goto L505;
	    }
/*< 		scrara( xc+3, ya+1 ) = ichcod(80,icldbl,iclwhi) >*/
	    scrara[xc + 3 + (ya + 1) * 54 - 55] = ichcod_(&c__80, &
		    col_1.icldbl, &col_1.iclwhi);
/*< 		goto 900 >*/
	    goto L900;
/*< 505		scrara( xc+3, ya+1 ) = ichcod(68,icldbl,iclwhi) >*/
L505:
	    scrara[xc + 3 + (ya + 1) * 54 - 55] = ichcod_(&c__68, &
		    col_1.icldbl, &col_1.iclwhi);
/*< 		goto 900 >*/
	    goto L900;
/*< 600		best = 0 >*/
L600:
	    best = 0;
/*< 		do 700 ival1 = 1, 10 >*/
	    for (ival1 = 1; ival1 <= 10; ++ival1) {
/*< 		    call getval(6, 0,429,  2, ival, ival1+0, index ) >*/
		i__3 = ival1;
		getval_(&c__6, &c__0, &c__429, &c__2, &ival, &i__3, &index);
/*< 		    if( index .eq. 0 ) goto 700 >*/
		if (index == 0) {
		    goto L700;
		}
/*< 		    if( index .le. 52 ) cansee(index) = .true. >*/
		if (index <= 52) {
		    cansee[index] = TRUE_;
		}
/*< 		    ival2 = weight( index ) >*/
		ival2 = weight_(&index);
/*< 		    if( ival2 .lt. best ) goto 700 >*/
		if (ival2 < best) {
		    goto L700;
		}
/*< 		    best = ival2 >*/
		best = ival2;
/*< 		    bindex = index >*/
		bindex = index;
/*< 		    if( index .gt. 52 ) goto 700 >*/
		if (index > 52) {
		    goto L700;
		}
/*< 		    call getval(6, 0,437,  19, index, 1, ax ) >*/
		getval_(&c__6, &c__0, &c__437, &c__19, &index, &c__1, &ax);
/*< 		    call getval(6, 0,438,  19, index, 2, ay ) >*/
		getval_(&c__6, &c__0, &c__438, &c__19, &index, &c__2, &ay);
/*< 		    if( ax .ne. x1 .or. ay .ne. y1 ) bindex = -index >*/
		if (ax != x1 || ay != y1) {
		    bindex = -index;
		}
/*< 700		continue >*/
L700:
		;
	    }
/*< 		if( bindex .lt. 0 .or. bindex .gt. 52 ) goto 800 >*/
	    if (bindex < 0 || bindex > 52) {
		goto L800;
	    }
/*< 		call getval(5, 0,442,  8, bindex, ival ) >*/
	    getval_(&c__5, &c__0, &c__442, &c__8, &bindex, &ival);
/*< 		scrara( xc+1, ya+1 ) = ichcod(32,icllbl,icldbl) >*/
	    scrara[xc + 1 + (ya + 1) * 54 - 55] = ichcod_(&c__32, &
		    col_1.icllbl, &col_1.icldbl);
/*< 		scrara( xc+4, ya+1 ) = ichcod(32,icllbl,icldbl) >*/
	    scrara[xc + 4 + (ya + 1) * 54 - 55] = ichcod_(&c__32, &
		    col_1.icllbl, &col_1.icldbl);
/*< 		icol = iclpur >*/
	    icol = col_1.iclpur;
/*< 		if( bindex .gt. 26 ) icol = iclred >*/
	    if (bindex > 26) {
		icol = col_1.iclred;
	    }
/*< 		if( bindex .eq. player ) icol = iclwhi >*/
	    if (bindex == *player) {
		icol = col_1.iclwhi;
	    }
/*< 		if(  >*/
	    if (bindex > 26 && ival < 4) {
		scrara[xc + 1 + (ya + 1) * 54 - 55] = ichcod_(&c__77, &icol, &
			col_1.icldbl);
	    }
/*< 		if(  >*/
	    if (bindex > 26 && ival >= 4) {
		scrara[xc + 3 + (ya + 1) * 54 - 55] = ichcod_(&c__77, &icol, &
			col_1.icldbl);
	    }
/*< 		if(b >*/
	    if (bindex <= 26) {
		i__4 = bindex + 64;
		i__3 = icon_(&i__4);
		ival1 = ichcod_(&i__3, &icol, &col_1.icldbl);
	    }
/*< 		if(b >*/
	    if (bindex > 26) {
		i__4 = bindex + 38;
		i__3 = icon_(&i__4);
		ival1 = ichcod_(&i__3, &icol, &col_1.icldbl);
	    }
/*< 		if( ival .lt. 4 )  scrara( xc+2, ya+1 ) = ival1 >*/
	    if (ival < 4) {
		scrara[xc + 2 + (ya + 1) * 54 - 55] = ival1;
	    }
/*< 		if(  >*/
	    if (ival >= 4 && bindex <= 26) {
		scrara[xc + 3 + (ya + 1) * 54 - 55] = ival1;
	    }
/*< 		if(  >*/
	    if (ival >= 4 && bindex > 26) {
		scrara[xc + 4 + (ya + 1) * 54 - 55] = ival1;
	    }
/*< 		if(ival.eq.0)scrara(xc+3,ya+1)=ichcod(61,icol,icldbl) >*/
	    if (ival == 0) {
		scrara[xc + 3 + (ya + 1) * 54 - 55] = ichcod_(&c__61, &icol, &
			col_1.icldbl);
	    }
/*< 		if(ival.eq.1)scrara(xc+3,ya+1)=ichcod(46,icol,icldbl) >*/
	    if (ival == 1) {
		scrara[xc + 3 + (ya + 1) * 54 - 55] = ichcod_(&c__46, &icol, &
			col_1.icldbl);
	    }
/*< 		if(ival.eq.2)scrara(xc+3,ya+1)=ichcod(92,icol,icldbl) >*/
	    if (ival == 2) {
		scrara[xc + 3 + (ya + 1) * 54 - 55] = ichcod_(&c__92, &icol, &
			col_1.icldbl);
	    }
/*< 		if(ival.eq.3)scrara(xc+3,ya+1)=ichcod(47,icol,icldbl) >*/
	    if (ival == 3) {
		scrara[xc + 3 + (ya + 1) * 54 - 55] = ichcod_(&c__47, &icol, &
			col_1.icldbl);
	    }
/*< 		if(ival.eq.4)scrara(xc+2,ya+1)=ichcod(94,icol,icldbl) >*/
	    if (ival == 4) {
		scrara[xc + 2 + (ya + 1) * 54 - 55] = ichcod_(&c__94, &icol, &
			col_1.icldbl);
	    }
/*< 		if(ival.eq.5)scrara(xc+2,ya+1)=ichcod(92,icol,icldbl) >*/
	    if (ival == 5) {
		scrara[xc + 2 + (ya + 1) * 54 - 55] = ichcod_(&c__92, &icol, &
			col_1.icldbl);
	    }
/*< 		if(ival.eq.6)scrara(xc+2,ya+1)=ichcod(47,icol,icldbl) >*/
	    if (ival == 6) {
		scrara[xc + 2 + (ya + 1) * 54 - 55] = ichcod_(&c__47, &icol, &
			col_1.icldbl);
	    }
/*< 		goto 900 >*/
	    goto L900;
/*< 800		icol = iclwhi >*/
L800:
	    icol = col_1.iclwhi;
/*< 		iback = icldbl >*/
	    iback = col_1.icldbl;
/*< 		if( bindex .lt. 0 ) icol = iclred >*/
	    if (bindex < 0) {
		icol = col_1.iclred;
	    }
/*< 		bindex = iabs(bindex) >*/
	    bindex = abs(bindex);
/*< 		call getval(5, 0,474,  12, bindex, tindex ) >*/
	    getval_(&c__5, &c__0, &c__474, &c__12, &bindex, &tindex);
/*< 		call getval(5, 0,475,  13, tindex, ocost ) >*/
	    getval_(&c__5, &c__0, &c__475, &c__13, &tindex, &ocost);
/*< 		if( ocost .le. 500 .and. tindex .ne. disind ) goto 850 >*/
	    if (ocost <= 500 && tindex != *disind) {
		goto L850;
	    }
/*< 		icol = iclbla >*/
	    icol = col_1.iclbla;
/*< 		iback = iclyel >*/
	    iback = col_1.iclyel;
/*< 850		call getval(5, 0,479,  3, tindex, i1 ) >*/
L850:
	    getval_(&c__5, &c__0, &c__479, &c__3, &tindex, &i1);
/*< 		call convrt( i1, 4, 6, toload, 0 ) >*/
	    convrt_(&i1, &c__4, &c__6, toload, &c__0);
/*< 		call >*/
	    i__3 = ya + 1;
	    load_(scrara, &icol, &iback, &xc, &i__3, toload, &toload[1], &
		    toload[2], &toload[3]);
/*< 900	continue >*/
L900:
	    ;
	}
/*< 901	continue >*/
L901:
	;
    }
/*< 	if( .not. newscr ) goto 1000 >*/
    if (! (*newscr)) {
	goto L1000;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call colcur( 55, 23 ) >*/
    colcur_(&c__55, &c__23);
/*< 	call string(1,'Head:^E') >*/
    string_(&c__1, "Head:^E", (ftnlen)7);
/*< 	call cursor( 55, 22 ) >*/
    cursor_(&c__55, &c__22);
/*< 	call string(1,'Body:^E') >*/
    string_(&c__1, "Body:^E", (ftnlen)7);
/*< 	call cursor( 55, 21 ) >*/
    cursor_(&c__55, &c__21);
/*< 	call string(1,'Back:^E') >*/
    string_(&c__1, "Back:^E", (ftnlen)7);
/*< 	call cursor( 55, 20 ) >*/
    cursor_(&c__55, &c__20);
/*< 	call string(1,'Weapon arm:^E') >*/
    string_(&c__1, "Weapon arm:^E", (ftnlen)13);
/*< 	call cursor( 55, 19 ) >*/
    cursor_(&c__55, &c__19);
/*< 	call string(1,'Shield arm:^E') >*/
    string_(&c__1, "Shield arm:^E", (ftnlen)13);
/*< 	call cursor( 55, 18 ) >*/
    cursor_(&c__55, &c__18);
/*< 	call string(1,'Belt:^E') >*/
    string_(&c__1, "Belt:^E", (ftnlen)7);
/*< 	call cursor( 55, 12 ) >*/
    cursor_(&c__55, &c__12);
/*< 	call string(1,'Strength:^E') >*/
    string_(&c__1, "Strength:^E", (ftnlen)11);
/*< 	call cursor( 55, 11 ) >*/
    cursor_(&c__55, &c__11);
/*< 	call string(1,'Dexterity: ^E') >*/
    string_(&c__1, "Dexterity: ^E", (ftnlen)13);
/*< 	call cursor( 67, 8 ) >*/
    cursor_(&c__67, &c__8);
/*< 	call chrout(52) >*/
    chrout_(&c__52);
/*< 	call cursor( 63, 7 ) >*/
    cursor_(&c__63, &c__7);
/*< 	call chrout(53) >*/
    chrout_(&c__53);
/*< 	call cursor( 71, 7 ) >*/
    cursor_(&c__71, &c__7);
/*< 	call chrout(51) >*/
    chrout_(&c__51);
/*< 	call cursor( 67, 6 ) >*/
    cursor_(&c__67, &c__6);
/*< 	call chrout( player+64 ) >*/
    i__1 = *player + 64;
    chrout_(&i__1);
/*< 	call cursor( 63, 5 ) >*/
    cursor_(&c__63, &c__5);
/*< 	call chrout(54) >*/
    chrout_(&c__54);
/*< 	call cursor( 71, 5 ) >*/
    cursor_(&c__71, &c__5);
/*< 	call chrout(50) >*/
    chrout_(&c__50);
/*< 	call cursor( 67, 4 ) >*/
    cursor_(&c__67, &c__4);
/*< 	call chrout(49) >*/
    chrout_(&c__49);
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call chrout(62) >*/
    chrout_(&c__62);
/*< 1000	change = .false. >*/
L1000:
    change = FALSE_;
/*< 	iunsen = ichcod(32,iclwhi,iclbla) >*/
    iunsen = ichcod_(&c__32, &col_1.iclwhi, &col_1.iclbla);
/*< 	lastbg=0 >*/
    lastbg = 0;
/*< 	lastfg=0 >*/
    lastfg = 0;
/*< 	do 1200 y1 = 1, 20 >*/
    for (y1 = 1; y1 <= 20; ++y1) {
/*< 	    next = .false. >*/
	next = FALSE_;
/*< 	    do 1200 x1 = 1, 54 >*/
	for (x1 = 1; x1 <= 54; ++x1) {
/*< 		if( newscr ) oldara(x1,y1) = ichcod(32,iclwhi,iclbla) >*/
	    if (*newscr) {
		oldara[x1 + y1 * 54 - 55] = ichcod_(&c__32, &col_1.iclwhi, &
			col_1.iclbla);
	    }
/*< 		item = scrara(x1,y1) >*/
	    item = scrara[x1 + y1 * 54 - 55];
/*< 		if( item .ne. 0 ) goto 1050 >*/
	    if (item != 0) {
		goto L1050;
	    }
/*< 		item = iunsen >*/
	    item = iunsen;
/*< 		scrara(x1,y1) = item >*/
	    scrara[x1 + y1 * 54 - 55] = item;
/*< 1050		if( scrara( x1, y1 ) .eq. oldara( x1, y1 ) ) goto 1100 >*/
L1050:
	    if (scrara[x1 + y1 * 54 - 55] == oldara[x1 + y1 * 54 - 55]) {
		goto L1100;
	    }
/*< 		change = .true. >*/
	    change = TRUE_;
/*< 		if( .not. next )  call cursor( x1+0, y1+4 ) >*/
	    if (! next) {
		i__1 = x1;
		i__2 = y1 + 4;
		cursor_(&i__1, &i__2);
	    }
/*< 		next = .true. >*/
	    next = TRUE_;
/*< 		ichar = mod( item, 256 ) >*/
	    ichar = item % 256;
/*< 		ibg = mod( item/256, 256 ) >*/
	    ibg = item / 256 % 256;
/*< 		ifg = item / 256 / 256 >*/
	    ifg = item / 256 / 256;
/*< 		if( lastbg .ne. ibg ) call pback( ibg ) >*/
	    if (lastbg != ibg) {
		pback_(&ibg);
	    }
/*< 		if( lastfg .ne. ifg ) call pcolor( ifg ) >*/
	    if (lastfg != ifg) {
		pcolor_(&ifg);
	    }
/*< 		call chrout( ichar ) >*/
	    chrout_(&ichar);
/*< 		lastbg = ibg >*/
	    lastbg = ibg;
/*< 		lastfg = ifg >*/
	    lastfg = ifg;
/*< 		oldara( x1, y1 ) = scrara( x1, y1 ) >*/
	    oldara[x1 + y1 * 54 - 55] = scrara[x1 + y1 * 54 - 55];
/*< 1100		scrara( x1, y1 ) = iunsen >*/
L1100:
	    scrara[x1 + y1 * 54 - 55] = iunsen;
/*< 		next = .false. >*/
	    next = FALSE_;
/*< 1200	continue >*/
/* L1200: */
	}
    }
/*< 	if( change .and. .not. newscr .and. dir .eq. 0 ) call chrout(7) >*/
    if (change && ! (*newscr) && dir == 0) {
	chrout_(&c__7);
    }
/*< 	if( streng .eq. ostren .and. .not. newscr ) goto 1300 >*/
    if (*streng == ostren && ! (*newscr)) {
	goto L1300;
    }
/*< 	call colcur( 67, 12 ) >*/
    colcur_(&c__67, &c__12);
/*< 	call number(2, streng, 2 ) >*/
    number_(&c__2, streng, &c__2);
/*< 	ostren = streng >*/
    ostren = *streng;
/*< 1300	if( dexter .eq. odextr .and. .not. newscr )  return >*/
L1300:
    if (*dexter == odextr && ! (*newscr)) {
	return 0;
    }
/*< 	call colcur( 67, 11 ) >*/
    colcur_(&c__67, &c__11);
/*< 	call number(2, dexter, 2 ) >*/
    number_(&c__2, dexter, &c__2);
/*< 	odextr = dexter >*/
    odextr = *dexter;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* updscr_ */


/*< 	function findir( x1, y1, x2, y2 ) >*/
integer findir_(x1, y1, x2, y2)
integer *x1, *y1, *x2, *y2;
{
    /* System generated locals */
    integer ret_val;

/*< 	implicit integer ( a - z ) >*/
/*< 	if( x1 .ne. x2 ) goto 100 >*/
    if (*x1 != *x2) {
	goto L100;
    }
/*< 	findir = 1 >*/
    ret_val = 1;
/*< 	if( y1 .lt. y2 )  findir = 4 >*/
    if (*y1 < *y2) {
	ret_val = 4;
    }
/*< 	return >*/
    return ret_val;
/*< 100	if( x1 .gt. x2 ) goto 200 >*/
L100:
    if (*x1 > *x2) {
	goto L200;
    }
/*< 	if( y1 .gt. y2 )  findir = 2 >*/
    if (*y1 > *y2) {
	ret_val = 2;
    }
/*< 	if( y1 .eq. y2 )  findir = 2 + mod( x1, 2 ) >*/
    if (*y1 == *y2) {
	ret_val = *x1 % 2 + 2;
    }
/*< 	if( y1 .lt. y2 )  findir = 3 >*/
    if (*y1 < *y2) {
	ret_val = 3;
    }
/*< 	return >*/
    return ret_val;
/*< 200	if( y1 .lt. y2 )  findir = 5 >*/
L200:
    if (*y1 < *y2) {
	ret_val = 5;
    }
/*< 	if( y1 .eq. y2 )  findir = 6 - mod( x1, 2 ) >*/
    if (*y1 == *y2) {
	ret_val = 6 - *x1 % 2;
    }
/*< 	if( y1 .gt. y2 )  findir = 6 >*/
    if (*y1 > *y2) {
	ret_val = 6;
    }
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* findir_ */


/*< 	subroutine load( scrara, ifg, ibg, x, y, i1, i2, i3, i4 ) >*/
/* Subroutine */ int load_(scrara, ifg, ibg, x, y, i1, i2, i3, i4)
integer *scrara, *ifg, *ibg, *x, *y, *i1, *i2, *i3, *i4;
{
    extern integer ichcod_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer scrara( 54, 21 ) >*/
/*< 	scrara(x+1,y) = ichcod(i1,ifg,ibg) >*/
    /* Parameter adjustments */
    scrara -= 55;

    /* Function Body */
    scrara[*x + 1 + *y * 54] = ichcod_(i1, ifg, ibg);
/*< 	scrara(x+2,y) = ichcod(i2,ifg,ibg) >*/
    scrara[*x + 2 + *y * 54] = ichcod_(i2, ifg, ibg);
/*< 	scrara(x+3,y) = ichcod(i3,ifg,ibg) >*/
    scrara[*x + 3 + *y * 54] = ichcod_(i3, ifg, ibg);
/*< 	scrara(x+4,y) = ichcod(i4,ifg,ibg) >*/
    scrara[*x + 4 + *y * 54] = ichcod_(i4, ifg, ibg);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* load_ */


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
    extern /* Subroutine */ int chrbuf_(), curbuf_(), colcur_();
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

/*< 100	call curbuf >*/
L100:
    curbuf_();
/*< 	call nap( 500, 12 ) >*/
    nap_(&c__500, &c__12);
/*< 	call chrbuf( ichar ) >*/
    chrbuf_(ichar);
/*< 	if( ichar .eq. -1 )  return >*/
    if (*ichar == -1) {
	return 0;
    }
/*< 	if( ichar .eq. 8 .or. ichar .eq. 127 ) goto 300 >*/
    if (*ichar == 8 || *ichar == 127) {
	goto L300;
    }
/*< 	if( ichar .eq. 21 ) goto 400 >*/
    if (*ichar == 21) {
	goto L400;
    }
/*< 	if( ichar .eq. 27 .and. index .eq. 0 ) goto 200 >*/
    if (*ichar == 27 && index == 0) {
	goto L200;
    }
/*< 	if( ichar .lt. 32 ) goto 600 >*/
    if (*ichar < 32) {
	goto L600;
    }
/*< 	if( index .ge. 78 ) goto 700 >*/
    if (index >= 78) {
	goto L700;
    }

/*  --	NOT SPECIAL CHARACTER, PUT IN ARRAY */

/*< 	index = index + 1 >*/
    ++index;
/*< 	call colcur( 1 + index, 1 ) >*/
    i__1 = index + 1;
    colcur_(&i__1, &c__1);
/*< 	call chrout( ichar ) >*/
    chrout_(ichar);
/*< 	comara(index) = icon( ichar ) >*/
    comara[index] = icon_(ichar);
/*< 	goto 100 >*/
    goto L100;

/*  --	ESCAPE:  REPEAT LAST COMMAND */

/*< 200	index = indstr >*/
L200:
    index = indstr;
/*< 	call colcur( 2, 1 ) >*/
    colcur_(&c__2, &c__1);
/*< 	if( index .ne. 0 )call string(3, comara, 1, index ) >*/
    if (index != 0) {
	string_(&c__3, &comara[1], &c__1, &index);
    }
/*< 	goto 600 >*/
    goto L600;

/*  --	DELETE CHARACTER */

/*< 300	index = index - 1 >*/
L300:
    --index;
/*< 	if( index .lt. 0 )  index = 0 >*/
    if (index < 0) {
	index = 0;
    }
/*< 	call colcur( 2 + index, 1 ) >*/
    i__1 = index + 2;
    colcur_(&i__1, &c__1);
/*< 	call chrout( 32 ) >*/
    chrout_(&c__32);
/*< 	goto 100 >*/
    goto L100;

/*  --	DELETE LINE */

/*< 400	call colcur( 2, 1 ) >*/
L400:
    colcur_(&c__2, &c__1);
/*< 	do 500 i = 1, index >*/
    i__1 = index;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 500	continue >*/
/* L500: */
    }
/*< 	index = 0 >*/
    index = 0;
/*< 	goto 100 >*/
    goto L100;

/*  --	CARRIAGE RETURN TYPED */

/*< 600	if( index .ne. 0 ) goto 700 >*/
L600:
    if (index != 0) {
	goto L700;
    }
/*< 	ichar = -1 >*/
    *ichar = -1;
/*< 	goto 900 >*/
    goto L900;
/*< 700	comara(index + 1) = 0 >*/
L700:
    comara[index + 1] = 0;
/*< 	call colcur( 2, 1 ) >*/
    colcur_(&c__2, &c__1);
/*< 	do 800 i = 1, index >*/
    i__1 = index;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	call chrout(32) >*/
	chrout_(&c__32);
/*< 800	continue >*/
/* L800: */
    }
/* 	CALL ALLCAP( COMARA, INDEX ) */
/*< 	ichar = comara(1) >*/
    *ichar = comara[1];
/*< 900	arrind = index >*/
L900:
    *arrind = index;
/*< 	indstr = index >*/
    indstr = index;
/*< 	index = 0 >*/
    index = 0;
/*< 	call nap( 500, 4 ) >*/
    nap_(&c__500, &c__4);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* comand_ */


/*< 	subroutine bugmsg( msgara, n1, n2, n3, n4 ) >*/
/* Subroutine */ int bugmsg_(msgara, n1, n2, n3, n4, msgara_len)
char *msgara;
integer *n1, *n2, *n3, *n4;
ftnlen msgara_len;
{
    extern /* Subroutine */ int close_(), colcur_(), clrscr_(), exprog_(), 
	    colstr_(), string_(), usrset_(), outnum_();

/*< 	implicit integer ( a - z ) >*/
/*< 	character msgara( 80 ) >*/
/*< 	commo >*/
/*< 	call clrscr >*/
    /* Parameter adjustments */
    --msgara;

    /* Function Body */
    clrscr_();
/*< 	call colcur( 1, 12 ) >*/
    colcur_(&c__1, &c__12);
/*< 	call colstr(iclred,'FATAL ERROR: ^E') >*/
    colstr_(&col_1.iclred, "FATAL ERROR: ^E", (ftnlen)15);
/*< 	call string(1, msgara ) >*/
    string_(&c__1, msgara + 1, (ftnlen)1);
/*< 	call string(1,' ( ^E') >*/
    string_(&c__1, " ( ^E", (ftnlen)5);
/*< 	call outnum(4, n1, n2, n3, n4 ) >*/
    outnum_(&c__4, n1, n2, n3, n4);
/*< 	call string(1,' ).^M^J^E') >*/
    string_(&c__1, " ).^M^J^E", (ftnlen)9);
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call usrset( 1031, 0 ) >*/
    usrset_(&c__1031, &c__0);
/*< 	call usrset( 1026, 0 ) >*/
    usrset_(&c__1026, &c__0);
/*< 	call usrset( 1041, 1 ) >*/
    usrset_(&c__1041, &c__1);
/*< 	call exprog >*/
    exprog_();
/*< 	end >*/
} /* bugmsg_ */


/*< 	subroutine cease( x, y, z, iplayr ) >*/
/* Subroutine */ int cease_(x, y, z__, iplayr)
integer *x, *y, *z__, *iplayr;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, ival;
    extern /* Subroutine */ int drop_();
    static integer ival1;
    extern /* Subroutine */ int close_(), qgone_();
    extern integer nuser_();
    static logical failed;
    extern /* Subroutine */ int getval_(), addusr_(), bugmsg_(), colcur_();
    static integer player;
    extern /* Subroutine */ int remove_(), exprog_(), takout_(), putval_(), 
	    usrset_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical failed >*/
/*< 	player = iabs( iplayr ) >*/
    player = abs(*iplayr);
/*< 	call getval(5, 0,693,  5, player, ival ) >*/
    getval_(&c__5, &c__0, &c__693, &c__5, &player, &ival);
/*< 	if( ival .eq. 0 ) goto 101 >*/
    if (ival == 0) {
	goto L101;
    }
/*< 	do 100 i = 1, 10 >*/
    for (i__ = 1; i__ <= 10; ++i__) {
/*< 	    call getval(6, 0,696,  2, ival, i+0, ival1 ) >*/
	i__1 = i__;
	getval_(&c__6, &c__0, &c__696, &c__2, &ival, &i__1, &ival1);
/*< 	    if( ival1 .eq. 0 ) goto 100 >*/
	if (ival1 == 0) {
	    goto L100;
	}
/*< 	    call takout( ival1, player, failed ) >*/
	takout_(&ival1, &player, &failed);
/*< 	    call drop( failed, .true., x, y, z, ival1 ) >*/
	drop_(&failed, &c_true, x, y, z__, &ival1);
/*< 100	continue >*/
L100:
	;
    }
/*< 101	continue >*/
L101:
/*< 	call remove( x, y, z, player, failed ) >*/
    remove_(x, y, z__, &player, &failed);
/*< 	if(failed)call bugmsg('CEASE: REMOVE#1^E',x,y,z,player) >*/
    if (failed) {
	bugmsg_("CEASE: REMOVE#1^E", x, y, z__, &player, (ftnlen)17);
    }
/*< 	call putval(5, 0,704,  10, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__704, &c__10, &player, &c__0);
/*< 	call putval(6, 0,705,  7, player, 1, 0 ) >*/
    putval_(&c__6, &c__0, &c__705, &c__7, &player, &c__1, &c__0);
/*< 	call usrset( 1031, 0 ) >*/
    usrset_(&c__1031, &c__0);
/*< 	call usrset( 1026, 0 ) >*/
    usrset_(&c__1026, &c__0);
/*< 	call usrset( 1041, 1 ) >*/
    usrset_(&c__1041, &c__1);
/*< 	if( nuser(0) .le. 1 .or. iplayr .gt. 0 )goto 200 >*/
    if (nuser_(&c__0) <= 1 || *iplayr > 0) {
	goto L200;
    }
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call addusr( -1 ) >*/
    addusr_(&c_n1);
/*< 	call qgone >*/
    qgone_();
/*< 200	call colcur( 1, 1 ) >*/
L200:
    colcur_(&c__1, &c__1);
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call exprog >*/
    exprog_();
/*< 	end >*/
} /* cease_ */


/*< 	subroutine drop( failed, lockit, x1, y1, z, index ) >*/
/* Subroutine */ int drop_(failed, lockit, x1, y1, z__, index)
logical *failed, *lockit;
integer *x1, *y1, *z__, *index;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer x, y, nx, ny, dir;
    extern /* Subroutine */ int lock_();
    extern integer iran_();
    static integer ival;
    extern /* Subroutine */ int newxy_();
    static integer index1, index2, index3, index4;
    extern /* Subroutine */ int addval_();
    static logical replac;
    extern /* Subroutine */ int getval_(), unlock_(), putval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical replac, failed, lockit >*/
/*< 	failed = .true. >*/
    *failed = TRUE_;
/*< 	if( lockit ) call lock >*/
    if (*lockit) {
	lock_();
    }
/*< 	x = x1 >*/
    x = *x1;
/*< 	y = y1 >*/
    y = *y1;
/*< 	index1 = index >*/
    index1 = *index;
/*< 	call getval(7, 0,728,  1, x, y, z, index2 ) >*/
    getval_(&c__7, &c__0, &c__728, &c__1, &x, &y, z__, &index2);
/*< 100	if( index2 .lt. 511 ) goto 300 >*/
L100:
    if (index2 < 511) {
	goto L300;
    }
/*< 	do 200 index2 = 1, 510 >*/
    for (index2 = 1; index2 <= 510; ++index2) {
/*< 	    call getval(6, 0,732,  2, index2+0, 11, index3 ) >*/
	i__1 = index2;
	getval_(&c__6, &c__0, &c__732, &c__2, &i__1, &c__11, &index3);
/*< 	    if( index3 .eq. 0 ) goto 300 >*/
	if (index3 == 0) {
	    goto L300;
	}
/*< 200	continue >*/
/* L200: */
    }
/*< 	if( lockit ) call unlock >*/
    if (*lockit) {
	unlock_();
    }
/*< 	return >*/
    return 0;
/*< 300	call getval(6, 0,738,  2, index2, 11, ival ) >*/
L300:
    getval_(&c__6, &c__0, &c__738, &c__2, &index2, &c__11, &ival);
/*< 	replac = .false. >*/
    replac = FALSE_;
/*< 	if( ival .eq. 10 )  replac = .true. >*/
    if (ival == 10) {
	replac = TRUE_;
    }
/*< 	if( ival .lt. 10 )  call addval(4, 0,741,  -2, 1 ) >*/
    if (ival < 10) {
	addval_(&c__4, &c__0, &c__741, &c_n2, &c__1);
    }
/*< 	call putval(7, 0,742,  1, x, y, z, index2 ) >*/
    putval_(&c__7, &c__0, &c__742, &c__1, &x, &y, z__, &index2);
/*< 	do 400 index3 = 1, 10 >*/
    for (index3 = 1; index3 <= 10; ++index3) {
/*< 	    call getval(6, 0,744,  2, index2, index3+0, index4 ) >*/
	i__1 = index3;
	getval_(&c__6, &c__0, &c__744, &c__2, &index2, &i__1, &index4);
/*< 	    if( replac .and. index4 .gt. 52 ) goto 500 >*/
	if (replac && index4 > 52) {
	    goto L500;
	}
/*< 	    if( index4 .eq. 0 ) goto 700 >*/
	if (index4 == 0) {
	    goto L700;
	}
/*< 400	continue >*/
/* L400: */
    }
/*< 	if( lockit ) call unlock >*/
    if (*lockit) {
	unlock_();
    }
/*< 	return >*/
    return 0;
/*< 500	call putval(4, 0,751,  -2, index1 ) >*/
L500:
    putval_(&c__4, &c__0, &c__751, &c_n2, &index1);
/*< 	index1 = index4 >*/
    index1 = index4;
/*< 600	dir = iran( 6 ) >*/
L600:
    dir = iran_(&c__6);
/*< 	call newxy( x, y, dir, nx, ny ) >*/
    newxy_(&x, &y, &dir, &nx, &ny);
/*< 	if( nx .eq. 0 ) goto 600 >*/
    if (nx == 0) {
	goto L600;
    }
/*< 	call getval(7, 0,756,  1, nx, ny, z, index2 ) >*/
    getval_(&c__7, &c__0, &c__756, &c__1, &nx, &ny, z__, &index2);
/*< 	if( index2 .eq. 0 ) goto 600 >*/
    if (index2 == 0) {
	goto L600;
    }
/*< 	x = nx >*/
    x = nx;
/*< 	y = ny >*/
    y = ny;
/*< 	goto 100 >*/
    goto L100;
/*< 700	call putval(4, 0,762,  -2, index1 ) >*/
L700:
    putval_(&c__4, &c__0, &c__762, &c_n2, &index1);
/*< 	if( lockit ) call unlock >*/
    if (*lockit) {
	unlock_();
    }
/*< 	failed = .false. >*/
    *failed = FALSE_;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* drop_ */


/*< 	subroutine remove( x, y, z, index1, failed ) >*/
/* Subroutine */ int remove_(x, y, z__, index1, failed)
integer *x, *y, *z__, *index1;
logical *failed;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    extern /* Subroutine */ int lock_();
    static integer index2, index3, index4;
    extern /* Subroutine */ int addval_(), getval_(), unlock_(), putval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical failed >*/
/*< 	call lock >*/
    lock_();
/*< 	failed = .true. >*/
    *failed = TRUE_;
/*< 	call getval(7, 0,774,  1, x, y, z, index2 ) >*/
    getval_(&c__7, &c__0, &c__774, &c__1, x, y, z__, &index2);
/*< 	if( index2 .eq. 0 .or. index2 .eq. 511 ) goto 300 >*/
    if (index2 == 0 || index2 == 511) {
	goto L300;
    }
/*< 	do 100 index3 = 1, 10 >*/
    for (index3 = 1; index3 <= 10; ++index3) {
/*< 	    call getval(6, 0,777,  2, index2, index3+0, index4 ) >*/
	i__1 = index3;
	getval_(&c__6, &c__0, &c__777, &c__2, &index2, &i__1, &index4);
/*< 	    if( index4 .eq. index1 ) goto 200 >*/
	if (index4 == *index1) {
	    goto L200;
	}
/*< 100	continue >*/
/* L100: */
    }
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;
/*< 200	call putval(6, 0,783,  2, index2, index3+0, 0 ) >*/
L200:
    i__1 = index3;
    putval_(&c__6, &c__0, &c__783, &c__2, &index2, &i__1, &c__0);
/*< 	call addval(6, 0,784,  2, index2, 11, -1 ) >*/
    addval_(&c__6, &c__0, &c__784, &c__2, &index2, &c__11, &c_n1);
/*< 	call getval(4, 0,785,  -2, index3 ) >*/
    getval_(&c__4, &c__0, &c__785, &c_n2, &index3);
/*< 	if( index3 .eq. 0 )  call putval(7, 0,786,  1, x, y, z, 511 ) >*/
    if (index3 == 0) {
	putval_(&c__7, &c__0, &c__786, &c__1, x, y, z__, &c__511);
    }
/*< 	failed = .false. >*/
    *failed = FALSE_;
/*< 300	call unlock >*/
L300:
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* remove_ */


/*< 	subroutine wrdprb( word, msgara ) >*/
/* Subroutine */ int wrdprb_(word, msgara, msgara_len)
integer *word;
char *msgara;
ftnlen msgara_len;
{
    extern /* Subroutine */ int messag_(), string_();

/*< 	implicit integer ( a - z ) >*/
/*< 	character msgara( 80 ) >*/
/*< 	commo >*/
/*< 	call messag( iclyel, '"^E' ) >*/
    /* Parameter adjustments */
    --msgara;

    /* Function Body */
    messag_(&col_1.iclyel, "\"^E", (ftnlen)3);
/*< 	call string(3, word, 6, 0 ) >*/
    string_(&c__3, word, &c__6, &c__0);
/*< 	call string(1,'" ^E') >*/
    string_(&c__1, "\" ^E", (ftnlen)4);
/*< 	call string(1, msgara ) >*/
    string_(&c__1, msgara + 1, (ftnlen)1);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* wrdprb_ */

/*< 	subroutine addwrd( isix, ityp, ind ) >*/
/* Subroutine */ int addwrd_(isix, ityp, ind)
integer *isix, *ityp, *ind;
{
/*< 	integer wrdlst(400), wrdtyp(400), wrdind(400) >*/
/*< 	common /wrdcom/ wrdlst, wrdtyp, wrdind, numwds >*/
/*< 	wrdlst(numwds) = isix >*/
    wrdcom_1.wrdlst[wrdcom_1.numwds - 1] = *isix;
/*< 	wrdtyp(numwds) = ityp >*/
    wrdcom_1.wrdtyp[wrdcom_1.numwds - 1] = *ityp;
/*< 	wrdind(numwds) = ind >*/
    wrdcom_1.wrdind[wrdcom_1.numwds - 1] = *ind;
/*< 	numwds = numwds + 1 >*/
    ++wrdcom_1.numwds;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* addwrd_ */

/*< 	integer function wrdsrc( srch4 ) >*/
integer wrdsrc_(srch4)
integer *srch4;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    extern /* Subroutine */ int wrdprb_();
    extern integer isrsix_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer wrdlst(400), wrdtyp(400), wrdind(400) >*/
/*< 	common /wrdcom/ wrdlst, wrdtyp, wrdind, numwds >*/
/*<         wrdsrc = isrsix( wrdlst, srch4, numwds ) >*/
    ret_val = isrsix_(wrdcom_1.wrdlst, srch4, &wrdcom_1.numwds);
/*< 	if( wrdsrc .gt. 0 ) return >*/
    if (ret_val > 0) {
	return ret_val;
    }
/*< 	if( wrdsrc .lt. 0 ) call wrdprb(srch4,'is ambiguous.^E') >*/
    if (ret_val < 0) {
	wrdprb_(srch4, "is ambiguous.^E", (ftnlen)15);
    }
/*< 	if( w >*/
    if (ret_val == 0) {
	wrdprb_(srch4, "is not in my vocabulary.^E", (ftnlen)26);
    }
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* wrdsrc_ */

/*< 	subroutine wrdnum( parara, wrdptr, verb, word1, word2, length ) >*/
/* Subroutine */ int wrdnum_(parara, wrdptr, verb, word1, word2, length)
integer *parara, *wrdptr, *verb, *word1, *word2, *length;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, j, cvt[3];
    extern integer icon_();
    static integer ival, noun1, noun2, nname;
    extern /* Subroutine */ int addwrd_();
    static integer scomma;
    extern /* Subroutine */ int getval_(), wrdprb_();
    extern integer isxbit_(), wrdsrc_();
    extern /* Subroutine */ int convrt_();
    static integer isxvrb, squote;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer parara( 40 ), wrdlst(400), wrdtyp(400), wrdind(400) >*/
/*< 	integer cvt(3) >*/
/*< 	common /wrdcom/ wrdlst, wrdtyp, wrdind, numwds >*/
/*< 	commo >*/
/*< 	verb = 0 >*/
    /* Parameter adjustments */
    --parara;

    /* Function Body */
    *verb = 0;
/*< 	word1 = 0 >*/
    *word1 = 0;
/*< 	word2 = 0 >*/
    *word2 = 0;
/*< 	if( scomma .ne. 0 ) goto 50 >*/
    if (scomma != 0) {
	goto L50;
    }
/*< 	scomma    = isxbit(',~')					! isxbit(',     ~') >*/
    scomma = isxbit_(",~", (ftnlen)2);
/*< 	squote    = isxbit('"~')					! isxbit('"     ~') >*/
    squote = isxbit_("\"~", (ftnlen)2);
/*< 50	continue >*/
L50:
/*< 	numwds = 1 >*/
    wrdcom_1.numwds = 1;
/*< 	call addwrd( isxbit('the~'              ), 0, 0 )	! isxbit('THE   ~') >*/
    i__1 = isxbit_("the~", (ftnlen)4);
    addwrd_(&i__1, &c__0, &c__0);
/*< 	call addwrd( isxbit('in~'               ), 0, 0 )	! isxbit('IN    ~') >*/
    i__1 = isxbit_("in~", (ftnlen)3);
    addwrd_(&i__1, &c__0, &c__0);
/*< 	call addwrd( isxbit('on~'               ), 0, 0 )	! isxbit('ON    ~') >*/
    i__1 = isxbit_("on~", (ftnlen)3);
    addwrd_(&i__1, &c__0, &c__0);
/*< 	call addwrd( isxbit('to~'               ), 0, 0 )	! isxbit('TO    ~') >*/
    i__1 = isxbit_("to~", (ftnlen)3);
    addwrd_(&i__1, &c__0, &c__0);
/*< 	call addwrd( isxbit('from~'             ), 0, 0 )	! isxbit('FROM  ~') >*/
    i__1 = isxbit_("from~", (ftnlen)5);
    addwrd_(&i__1, &c__0, &c__0);
/*< 	call addwrd( isxbit('with~'             ), 0, 0 )	! isxbit('WITH  ~') >*/
    i__1 = isxbit_("with~", (ftnlen)5);
    addwrd_(&i__1, &c__0, &c__0);
/*< 	call addwrd( isxbit('at~'               ), 0, 0 )	! isxbit('AT    ~') >*/
    i__1 = isxbit_("at~", (ftnlen)3);
    addwrd_(&i__1, &c__0, &c__0);
/*< 	do 80 i = 1, 6 >*/
    for (i__ = 1; i__ <= 6; ++i__) {
/*< 	    cvt(1) = i + 48 >*/
	cvt[0] = i__ + 48;
/*< 	    call convrt( cvt, 1, 0, nname, 6 ) >*/
	convrt_(cvt, &c__1, &c__0, &nname, &c__6);
/*< 	    call addwrd( nname, 1, i+0 ) >*/
	i__1 = i__;
	addwrd_(&nname, &c__1, &i__1);
/*< 80	continue >*/
/* L80: */
    }
/*< 	call addwrd( isxbit('right~'            ), 1, 7 )	! direction >*/
    i__1 = isxbit_("right~", (ftnlen)6);
    addwrd_(&i__1, &c__1, &c__7);
/*< 	call addwrd( isxbit('clockwise~'        ), 1, 7 )	! direction >*/
    i__1 = isxbit_("clockwise~", (ftnlen)10);
    addwrd_(&i__1, &c__1, &c__7);
/*< 	call addwrd( isxbit('left~'             ), 1, 8 )	! direction >*/
    i__1 = isxbit_("left~", (ftnlen)5);
    addwrd_(&i__1, &c__1, &c__8);
/*< 	call addwrd( isxbit('counterclockwise~' ), 1, 8 )	! direction >*/
    i__1 = isxbit_("counterclockwise~", (ftnlen)17);
    addwrd_(&i__1, &c__1, &c__8);
/*< 	i = 0 >*/
    i__ = 0;
/*< 	j = 0 >*/
    j = 0;
/*< 100	i = i + 1 >*/
L100:
    ++i__;
/*< 200	    j = j + 1 >*/
L200:
    ++j;
/*< 	    call getval(5, 0,870,  9, j, isxvrb ) >*/
    getval_(&c__5, &c__0, &c__870, &c__9, &j, &isxvrb);
/*< 	    if( isxvrb .eq. -1 ) goto 100 >*/
    if (isxvrb == -1) {
	goto L100;
    }
/*< 	    if( isxvrb .eq. 0 ) goto 250 >*/
    if (isxvrb == 0) {
	goto L250;
    }
/*< 	    call addwrd( isxvrb, 2, i ) >*/
    addwrd_(&isxvrb, &c__2, &i__);
/*< 	goto 200 >*/
    goto L200;
/*< 250	do 280 i = 1, 100 >*/
L250:
    for (i__ = 1; i__ <= 100; ++i__) {
/*< 	    call getval(5, 0,877,  10, i+0, ival ) >*/
	i__1 = i__;
	getval_(&c__5, &c__0, &c__877, &c__10, &i__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 280 >*/
	if (ival == 0) {
	    goto L280;
	}
/*< 	    call getval(5, 0,879,  3, i+0, nname )		! add full name >*/
	i__1 = i__;
	getval_(&c__5, &c__0, &c__879, &c__3, &i__1, &nname);
/*< 	    call addwrd( nname, 3, i+0 ) >*/
	i__1 = i__;
	addwrd_(&nname, &c__3, &i__1);
/*< 	    if( i .gt. 26 ) goto 260 >*/
	if (i__ > 26) {
	    goto L260;
	}
/*< 	    cvt(1) = i + 64 >*/
	cvt[0] = i__ + 64;
/*< 	    call convrt( cvt, 1, 0, nname, 6 )		! add single letter >*/
	convrt_(cvt, &c__1, &c__0, &nname, &c__6);
/*< 	    call addwrd( nname, 3, i+0 )		! for another player >*/
	i__1 = i__;
	addwrd_(&nname, &c__3, &i__1);
/*< 	    goto 280 >*/
	goto L280;
/*< 260	    if( i .gt. 52 ) goto 280 >*/
L260:
	if (i__ > 52) {
	    goto L280;
	}
/*< 	    cvt(1) = icon(77)				! add mx for >*/
	cvt[0] = icon_(&c__77);
/*< 	    cvt(2) = i + 64 - 26			! a monster >*/
	cvt[1] = i__ + 38;
/*< 	    call convrt( cvt, 2, 0, nname, 6 ) >*/
	convrt_(cvt, &c__2, &c__0, &nname, &c__6);
/*< 	    call addwrd( nname, 3, i+0 ) >*/
	i__1 = i__;
	addwrd_(&nname, &c__3, &i__1);
/*< 280	continue >*/
L280:
	;
    }
/*< 290	wrdptr = wrdptr + 1 >*/
L290:
    ++(*wrdptr);
/*< 	if(pa >*/
    if (parara[*wrdptr] == scomma || parara[*wrdptr] == squote || *wrdptr > *
	    length) {
	goto L800;
    }
/*<         i = wrdsrc( parara(wrdptr) ) >*/
    i__ = wrdsrc_(&parara[*wrdptr]);
/*< 	if( i .le. 0 ) goto 900				! die if unknown word >*/
    if (i__ <= 0) {
	goto L900;
    }
/*< 	if( wrdtyp(i) .eq. 0 ) goto 290			! skip noise words >*/
    if (wrdcom_1.wrdtyp[i__ - 1] == 0) {
	goto L290;
    }
/*< 	if( wrdtyp(i) .ne. 1 ) goto 295 >*/
    if (wrdcom_1.wrdtyp[i__ - 1] != 1) {
	goto L295;
    }
/*< 	verb = 17 >*/
    *verb = 17;
/*< 	word1 = -wrdind(i) >*/
    *word1 = -wrdcom_1.wrdind[i__ - 1];
/*< 	goto 300 >*/
    goto L300;
/*< 295	if( wrdtyp(i) .ne. 2 ) goto 297 >*/
L295:
    if (wrdcom_1.wrdtyp[i__ - 1] != 2) {
	goto L297;
    }
/*< 	verb = wrdind(i) >*/
    *verb = wrdcom_1.wrdind[i__ - 1];
/*< 	goto 300 >*/
    goto L300;
/*< 297	call wrdprb( wrdlst(i), 'is not a verb or a direction.^E') >*/
L297:
    wrdprb_(&wrdcom_1.wrdlst[i__ - 1], "is not a verb or a direction.^E", (
	    ftnlen)31);
/*< 	goto 900 >*/
    goto L900;
/*< 300	wrdptr = wrdptr + 1 >*/
L300:
    ++(*wrdptr);
/*< 	if(pa >*/
    if (parara[*wrdptr] == scomma || parara[*wrdptr] == squote || *wrdptr > *
	    length) {
	goto L800;
    }
/*< 	i = wrdsrc( parara(wrdptr) ) >*/
    i__ = wrdsrc_(&parara[*wrdptr]);
/*< 	if( i .le. 0 ) goto 900				! die if unknown word >*/
    if (i__ <= 0) {
	goto L900;
    }
/*< 	if( wrdtyp(i) .eq. 0 ) goto 300			! skip noise words >*/
    if (wrdcom_1.wrdtyp[i__ - 1] == 0) {
	goto L300;
    }
/*< 	if( wrdtyp(i) .ne. 1 ) goto 400 >*/
    if (wrdcom_1.wrdtyp[i__ - 1] != 1) {
	goto L400;
    }
/*< 	word1 = -wrdind(i) >*/
    *word1 = -wrdcom_1.wrdind[i__ - 1];
/*< 	goto 500 >*/
    goto L500;
/*< 400	if( wrdtyp(i) .ne. 3 ) goto 450 >*/
L400:
    if (wrdcom_1.wrdtyp[i__ - 1] != 3) {
	goto L450;
    }
/*< 	word1 = wrdind(i) >*/
    *word1 = wrdcom_1.wrdind[i__ - 1];
/*< 	goto 500 >*/
    goto L500;
/*< 450	call wrdprb( wrdlst(i), 'is not a noun or a direction.^E') >*/
L450:
    wrdprb_(&wrdcom_1.wrdlst[i__ - 1], "is not a noun or a direction.^E", (
	    ftnlen)31);
/*< 	goto 900 >*/
    goto L900;
/*< 500	wrdptr = wrdptr + 1 >*/
L500:
    ++(*wrdptr);
/*< 	if(pa >*/
    if (parara[*wrdptr] == scomma || parara[*wrdptr] == squote || *wrdptr > *
	    length) {
	goto L800;
    }
/*<         i = wrdsrc( parara(wrdptr) ) >*/
    i__ = wrdsrc_(&parara[*wrdptr]);
/*< 	if( i .le. 0 ) goto 900				! die if unknown word >*/
    if (i__ <= 0) {
	goto L900;
    }
/*< 	if( wrdtyp(i) .eq. 0 ) goto 500			! skip noise words >*/
    if (wrdcom_1.wrdtyp[i__ - 1] == 0) {
	goto L500;
    }
/*< 	if( wrdtyp(i) .ne. 3 ) goto 550 >*/
    if (wrdcom_1.wrdtyp[i__ - 1] != 3) {
	goto L550;
    }
/*< 	word2 = wrdind(i) >*/
    *word2 = wrdcom_1.wrdind[i__ - 1];
/*< 	goto 800 >*/
    goto L800;
/*< 550	call wrdprb( wrdlst(i), 'is not a noun.^E') >*/
L550:
    wrdprb_(&wrdcom_1.wrdlst[i__ - 1], "is not a noun.^E", (ftnlen)16);
/*< 	goto 900 >*/
    goto L900;
/*< 800	if( wrdptr .gt. length )  wrdptr = 0 >*/
L800:
    if (*wrdptr > *length) {
	*wrdptr = 0;
    }
/*< 	return >*/
    return 0;
/*< 900	verb = 0 >*/
L900:
    *verb = 0;
/*< 	noun1 = 0 >*/
    noun1 = 0;
/*< 	noun2 = 0 >*/
    noun2 = 0;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* wrdnum_ */


/*< 	subroutine messag(icol, msgara ) >*/
/* Subroutine */ int messag_(icol, msgara, msgara_len)
integer *icol;
char *msgara;
ftnlen msgara_len;
{
    static integer i__;
    extern /* Subroutine */ int colcur_(), chrout_(), colstr_();

/*< 	character msgara( 80 ) >*/
/*< 	commo >*/
/*< 	call colcur( 1, 2 ) >*/
    /* Parameter adjustments */
    --msgara;

    /* Function Body */
    colcur_(&c__1, &c__2);
/*< 	do 100 i = 1, 79 >*/
    for (i__ = 1; i__ <= 79; ++i__) {
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 100	continue >*/
/* L100: */
    }
/*< 	call chrout( 13 ) >*/
    chrout_(&c__13);
/*< 	call colstr( icol, msgara ) >*/
    colstr_(icol, msgara + 1, (ftnlen)1);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* messag_ */


/*< 	subroutine putin( index1, index2, failed ) >*/
/* Subroutine */ int putin_(index1, index2, failed)
integer *index1, *index2;
logical *failed;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    extern /* Subroutine */ int lock_();
    static integer ival, ival1, ival2;
    extern /* Subroutine */ int addval_(), getval_(), unlock_(), putval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical failed >*/
/*< 	call lock >*/
    lock_();
/*< 	failed = .true. >*/
    *failed = TRUE_;
/*< 	call getval(5, 0,972,  5, index2, ival ) >*/
    getval_(&c__5, &c__0, &c__972, &c__5, index2, &ival);
/*< 	if( ival .ne. 0 ) goto 300 >*/
    if (ival != 0) {
	goto L300;
    }
/*< 	do 100 ival = 1, 510 >*/
    for (ival = 1; ival <= 510; ++ival) {
/*< 	    call getval(6, 0,975,  2, ival+0, 11, ival1 ) >*/
	i__1 = ival;
	getval_(&c__6, &c__0, &c__975, &c__2, &i__1, &c__11, &ival1);
/*< 	    if( ival1 .eq. 0 ) goto 200 >*/
	if (ival1 == 0) {
	    goto L200;
	}
/*< 100	continue >*/
/* L100: */
    }
/*< 200	call putval(5, 0,978,  5, index2, ival ) >*/
L200:
    putval_(&c__5, &c__0, &c__978, &c__5, index2, &ival);
/*< 300	call getval(6, 0,980,  2, ival, 11, ival1 ) >*/
L300:
    getval_(&c__6, &c__0, &c__980, &c__2, &ival, &c__11, &ival1);
/*< 	if( ival1 .ge. 10 ) goto 600 >*/
    if (ival1 >= 10) {
	goto L600;
    }
/*< 	call addval(4, 0,982,  -2, 1 ) >*/
    addval_(&c__4, &c__0, &c__982, &c_n2, &c__1);
/*< 	do 400 ival1 = 1, 10 >*/
    for (ival1 = 1; ival1 <= 10; ++ival1) {
/*< 	    call getval(6, 0,985,  2, ival, ival1+0, ival2 ) >*/
	i__1 = ival1;
	getval_(&c__6, &c__0, &c__985, &c__2, &ival, &i__1, &ival2);
/*< 	    if( ival2 .eq. 0 ) goto 500 >*/
	if (ival2 == 0) {
	    goto L500;
	}
/*< 400	continue >*/
/* L400: */
    }
/*< 500	call putval(4, 0,988,  -2, index1 ) >*/
L500:
    putval_(&c__4, &c__0, &c__988, &c_n2, index1);
/*< 	failed = .false. >*/
    *failed = FALSE_;
/*< 600	call unlock >*/
L600:
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* putin_ */


/*< 	subroutine phold( index1, iplayr, failed ) >*/
/* Subroutine */ int phold_(index1, iplayr, failed)
integer *index1, *iplayr;
logical *failed;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    extern /* Subroutine */ int lock_();
    static integer type__, index2, index3, index4;
    extern /* Subroutine */ int addval_(), getval_(), unlock_();
    static integer player;
    extern /* Subroutine */ int putval_();
    static integer numuse;

/*< 	implicit integer ( a - z ) >*/
/*< 	logical failed >*/
/*< 	call lock >*/
    lock_();
/*< 	player = iabs( iplayr ) >*/
    player = abs(*iplayr);
/*< 	failed = .false. >*/
    *failed = FALSE_;
/*< 	call getval(5, 0,1001,  5, player, index2 ) >*/
    getval_(&c__5, &c__0, &c__1001, &c__5, &player, &index2);
/*< 	if( index2 .ne. 0 ) goto 300 >*/
    if (index2 != 0) {
	goto L300;
    }
/*< 	do 100 index2 = 1, 510 >*/
    for (index2 = 1; index2 <= 510; ++index2) {
/*< 	    call getval(6, 0,1004,  2, index2+0, 11, index3 ) >*/
	i__1 = index2;
	getval_(&c__6, &c__0, &c__1004, &c__2, &i__1, &c__11, &index3);
/*< 	    if( index3 .eq. 0 ) goto 200 >*/
	if (index3 == 0) {
	    goto L200;
	}
/*< 100	continue >*/
/* L100: */
    }
/*< 200	call putval(5, 0,1007,  5, player, index2 ) >*/
L200:
    putval_(&c__5, &c__0, &c__1007, &c__5, &player, &index2);
/*< 300	call getval(6, 0,1009,  2, index2, 11, numuse ) >*/
L300:
    getval_(&c__6, &c__0, &c__1009, &c__2, &index2, &c__11, &numuse);
/*< 	if( numuse .ge. 10 ) goto 600 >*/
    if (numuse >= 10) {
	goto L600;
    }
/*< 	call addval(4, 0,1011,  -2, 1 ) >*/
    addval_(&c__4, &c__0, &c__1011, &c_n2, &c__1);
/*< 	call getval(5, 0,1013,  12, index1, index3 ) >*/
    getval_(&c__5, &c__0, &c__1013, &c__12, index1, &index3);
/*< 	call getval(5, 0,1014,  15, index3, type ) >*/
    getval_(&c__5, &c__0, &c__1014, &c__15, &index3, &type__);
/*< 	if( type .eq. 0 ) goto 400 >*/
    if (type__ == 0) {
	goto L400;
    }
/*< 	call getval(6, 0,1016,  2, index2, type, index3 ) >*/
    getval_(&c__6, &c__0, &c__1016, &c__2, &index2, &type__, &index3);
/*< 	if( iplayr .lt. 0 .and. index3 .ne. 0 ) goto 400 >*/
    if (*iplayr < 0 && index3 != 0) {
	goto L400;
    }
/*< 	call putval(4, 0,1018,  -2, index1 ) >*/
    putval_(&c__4, &c__0, &c__1018, &c_n2, index1);
/*< 	if( index3 .eq. 0 ) goto 700 >*/
    if (index3 == 0) {
	goto L700;
    }
/*< 	index1 = index3 >*/
    *index1 = index3;
/*< 400	index3 = 6 >*/
L400:
    index3 = 6;
/*< 500	    call getval(6, 0,1023,  2, index2, index3, index4 ) >*/
L500:
    getval_(&c__6, &c__0, &c__1023, &c__2, &index2, &index3, &index4);
/*< 	    if( index4 .ne. 0 .and. iplayr .lt. 0 ) goto 550 >*/
    if (index4 != 0 && *iplayr < 0) {
	goto L550;
    }
/*< 	    call putval(4, 0,1025,  -2, index1 ) >*/
    putval_(&c__4, &c__0, &c__1025, &c_n2, index1);
/*< 	    if( index4 .eq. 0 ) goto 700 >*/
    if (index4 == 0) {
	goto L700;
    }
/*< 	    index1 = index4 >*/
    *index1 = index4;
/*< 550	    index3 = index3 + 1 >*/
L550:
    ++index3;
/*< 	if( index3 .lt. 11 ) goto 500 >*/
    if (index3 < 11) {
	goto L500;
    }
/*< 600	failed = .true. >*/
L600:
    *failed = TRUE_;
/*< 700	call unlock >*/
L700:
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* phold_ */


/*< 	subroutine takout( index1, index2, failed ) >*/
/* Subroutine */ int takout_(index1, index2, failed)
integer *index1, *index2;
logical *failed;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    extern /* Subroutine */ int lock_();
    static integer ival, ival1, ival2;
    extern /* Subroutine */ int addval_(), getval_(), unlock_(), putval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical failed >*/
/*< 	call lock >*/
    lock_();
/*< 	failed = .true. >*/
    *failed = TRUE_;
/*< 	call getval(5, 0,1043,  5, index2, ival ) >*/
    getval_(&c__5, &c__0, &c__1043, &c__5, index2, &ival);
/*< 	if( ival .eq. 0 ) goto 300 >*/
    if (ival == 0) {
	goto L300;
    }
/*< 	do 100 ival1 = 1, 10 >*/
    for (ival1 = 1; ival1 <= 10; ++ival1) {
/*< 	    call getval(6, 0,1047,  2, ival, ival1+0, ival2 ) >*/
	i__1 = ival1;
	getval_(&c__6, &c__0, &c__1047, &c__2, &ival, &i__1, &ival2);
/*< 	    if( ival2 .ne. index1 ) goto 100 >*/
	if (ival2 != *index1) {
	    goto L100;
	}
/*< 	    failed = .false. >*/
	*failed = FALSE_;
/*< 	    call putval(4, 0,1050,  -2, 0 ) >*/
	putval_(&c__4, &c__0, &c__1050, &c_n2, &c__0);
/*< 	    goto 200 >*/
	goto L200;
/*< 100	continue >*/
L100:
	;
    }
/*< 	goto 300 >*/
    goto L300;
/*< 200	call addval(6, 0,1056,  2, ival, 11, -1 ) >*/
L200:
    addval_(&c__6, &c__0, &c__1056, &c__2, &ival, &c__11, &c_n1);
/*< 	call getval(6, 0,1057,  2, ival, 11, ival1 ) >*/
    getval_(&c__6, &c__0, &c__1057, &c__2, &ival, &c__11, &ival1);
/*< 	if( ival1 .gt. 0 ) goto 300 >*/
    if (ival1 > 0) {
	goto L300;
    }
/*< 	call putval(5, 0,1059,  5, index2, 0 ) >*/
    putval_(&c__5, &c__0, &c__1059, &c__5, index2, &c__0);
/*< 300	call unlock >*/
L300:
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* takout_ */


/*< 	subroutine pname( index, ilen ) >*/
/* Subroutine */ int pname_(index, ilen)
integer *index, *ilen;
{
    extern integer job_();
    static integer name__, index1;
    extern /* Subroutine */ int getval_();
    static integer uselen;
    extern /* Subroutine */ int string_();

/*< 	implicit integer ( a - z ) >*/
/*< 	call getval(5, 0,1067,  12, index, index1 ) >*/
    getval_(&c__5, &c__0, &c__1067, &c__12, index, &index1);
/*< 	call getval(5, 0,1068,  3, index1, name ) >*/
    getval_(&c__5, &c__0, &c__1068, &c__3, &index1, &name__);
/*< 	uselen = ilen >*/
    uselen = *ilen;
/*< 	if( job(-1) .eq. 0 ) goto 100 >*/
    if (job_(&c_n1) == 0) {
	goto L100;
    }
/*< 	if( uselen .lt. -6 ) uselen = -6 >*/
    if (uselen < -6) {
	uselen = -6;
    }
/*< 	if( uselen .gt. 6 ) uselen = 6 >*/
    if (uselen > 6) {
	uselen = 6;
    }
/*< 100	call string(3, name, 6, uselen ) >*/
L100:
    string_(&c__3, &name__, &c__6, &uselen);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* pname_ */


/*< 	integer function weight( index1 ) >*/
integer weight_(index1)
integer *index1;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static integer dummy, index2, index3, index4;
    extern /* Subroutine */ int getval_();
    static logical pdlerr;
    extern /* Subroutine */ int popval_(), pushvl_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical pdlerr >*/
/*< 	weight = 0 >*/
    ret_val = 0;
/*< 100	call getval(5, 0,1084,  4, index1, dummy ) >*/
L100:
    getval_(&c__5, &c__0, &c__1084, &c__4, index1, &dummy);
/*< 	weight = weight + dummy >*/
    ret_val += dummy;
/*< 	call getval(5, 0,1086,  5, index1, index2 ) >*/
    getval_(&c__5, &c__0, &c__1086, &c__5, index1, &index2);
/*< 	if( index2 .eq. 0 .or. index2 .eq. 511 ) goto 300 >*/
    if (index2 == 0 || index2 == 511) {
	goto L300;
    }
/*< 	index3 = 0 >*/
    index3 = 0;
/*< 200	if( index3 .eq. 10 ) goto 300 >*/
L200:
    if (index3 == 10) {
	goto L300;
    }
/*< 	index3 = index3 + 1 >*/
    ++index3;
/*< 	call getval(6, 0,1092,  2, index2, index3, index4 ) >*/
    getval_(&c__6, &c__0, &c__1092, &c__2, &index2, &index3, &index4);
/*< 	if( index4 .eq. 0 .or. index4 .eq. 511 ) goto 200 >*/
    if (index4 == 0 || index4 == 511) {
	goto L200;
    }
/*< 	call pushvl( index1, pdlerr ) >*/
    pushvl_(index1, &pdlerr);
/*< 	call pushvl( index2, pdlerr ) >*/
    pushvl_(&index2, &pdlerr);
/*< 	call pushvl( index3, pdlerr ) >*/
    pushvl_(&index3, &pdlerr);
/*< 	index1 = index4 >*/
    *index1 = index4;
/*< 	goto 100 >*/
    goto L100;
/*< 300	call popval( index3, pdlerr ) >*/
L300:
    popval_(&index3, &pdlerr);
/*< 	if( pdlerr )  return >*/
    if (pdlerr) {
	return ret_val;
    }
/*< 	call popval( index2, pdlerr ) >*/
    popval_(&index2, &pdlerr);
/*< 	call popval( index1, pdlerr ) >*/
    popval_(index1, &pdlerr);
/*< 	goto 200 >*/
    goto L200;
/*< 	end >*/
} /* weight_ */


/*< 	integer function cost( index1 ) >*/
integer cost_(index1)
integer *index1;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static integer dummy, index2, index3, index4, index5;
    extern /* Subroutine */ int getval_();
    static logical pdlerr;
    extern /* Subroutine */ int popval_(), pushvl_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical pdlerr >*/
/*< 	cost = 0 >*/
    ret_val = 0;
/*< 100	call getval(5, 0,1114,  12, index1, index5 ) >*/
L100:
    getval_(&c__5, &c__0, &c__1114, &c__12, index1, &index5);
/*< 	call getval(5, 0,1115,  13, index5, dummy ) >*/
    getval_(&c__5, &c__0, &c__1115, &c__13, &index5, &dummy);
/*< 	cost = cost + dummy >*/
    ret_val += dummy;
/*< 	call getval(5, 0,1117,  5, index1, index2 ) >*/
    getval_(&c__5, &c__0, &c__1117, &c__5, index1, &index2);
/*< 	if( index2 .eq. 0 .or. index2 .eq. 511 ) goto 300 >*/
    if (index2 == 0 || index2 == 511) {
	goto L300;
    }
/*< 	index3 = 0 >*/
    index3 = 0;
/*< 200	if( index3 .eq. 10 ) goto 300 >*/
L200:
    if (index3 == 10) {
	goto L300;
    }
/*< 	index3 = index3 + 1 >*/
    ++index3;
/*< 	call getval(6, 0,1123,  2, index2, index3, index4 ) >*/
    getval_(&c__6, &c__0, &c__1123, &c__2, &index2, &index3, &index4);
/*< 	if( index4 .eq. 0 ) goto 200 >*/
    if (index4 == 0) {
	goto L200;
    }
/*< 	call pushvl( index1, pdlerr ) >*/
    pushvl_(index1, &pdlerr);
/*< 	call pushvl( index2, pdlerr ) >*/
    pushvl_(&index2, &pdlerr);
/*< 	call pushvl( index3, pdlerr ) >*/
    pushvl_(&index3, &pdlerr);
/*< 	index1 = index4 >*/
    *index1 = index4;
/*< 	goto 100 >*/
    goto L100;
/*< 300	call popval( index3, pdlerr ) >*/
L300:
    popval_(&index3, &pdlerr);
/*< 	if( pdlerr )  return >*/
    if (pdlerr) {
	return ret_val;
    }
/*< 	call popval( index2, pdlerr ) >*/
    popval_(&index2, &pdlerr);
/*< 	call popval( index1, pdlerr ) >*/
    popval_(index1, &pdlerr);
/*< 	goto 200 >*/
    goto L200;
/*< 	end >*/
} /* cost_ */


/*< 	integer function holds( index, name ) >*/
integer holds_(index, name__)
integer *index, *name__;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static integer itemp, index1, index2, index3, index4;
    extern /* Subroutine */ int getval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	holds = 0 >*/
    ret_val = 0;
/*< 	call getval(5, 0,1143,  5, index, index1 ) >*/
    getval_(&c__5, &c__0, &c__1143, &c__5, index, &index1);
/*< 	if( index1 .eq. 0 .or. index1 .eq. 511 )  return >*/
    if (index1 == 0 || index1 == 511) {
	return ret_val;
    }
/*< 	do 100 itemp = 1, 10 >*/
    for (itemp = 1; itemp <= 10; ++itemp) {
/*< 	    index2 = itemp >*/
	index2 = itemp;
/*< 	    call getval(6, 0,1147,  2, index1, index2, index3 ) >*/
	getval_(&c__6, &c__0, &c__1147, &c__2, &index1, &index2, &index3);
/*< 	    if( index3 .eq. 0 ) goto 100 >*/
	if (index3 == 0) {
	    goto L100;
	}
/*< 	    call getval(5, 0,1149,  12, index3, index4 ) >*/
	getval_(&c__5, &c__0, &c__1149, &c__12, &index3, &index4);
/*< 	    if( name .eq. index4 ) goto 200 >*/
	if (*name__ == index4) {
	    goto L200;
	}
/*< 100	continue >*/
L100:
	;
    }
/*< 	return >*/
    return ret_val;
/*< 200	holds = index3 >*/
L200:
    ret_val = index3;
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* holds_ */


/*< 	integer function at( x, y, z, name ) >*/
integer at_(x, y, z__, name__)
integer *x, *y, *z__, *name__;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static integer itemp, index1, index2, index3, index4;
    extern /* Subroutine */ int getval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	at = 0 >*/
    ret_val = 0;
/*< 	call getval(7, 0,1162,  1, x, y, z, index1 ) >*/
    getval_(&c__7, &c__0, &c__1162, &c__1, x, y, z__, &index1);
/*< 	if( index1 .eq. 0 .or. index1 .eq. 511 )  return >*/
    if (index1 == 0 || index1 == 511) {
	return ret_val;
    }
/*< 	do 100 itemp = 1, 10 >*/
    for (itemp = 1; itemp <= 10; ++itemp) {
/*< 	    index2 = itemp >*/
	index2 = itemp;
/*< 	    call getval(6, 0,1166,  2, index1, index2, index3 ) >*/
	getval_(&c__6, &c__0, &c__1166, &c__2, &index1, &index2, &index3);
/*< 	    if( index3 .eq. 0 .or. index3 .eq. 511 ) goto 100 >*/
	if (index3 == 0 || index3 == 511) {
	    goto L100;
	}
/*< 	    call getval(5, 0,1168,  12, index3, index4 ) >*/
	getval_(&c__5, &c__0, &c__1168, &c__12, &index3, &index4);
/*< 	    if( name .eq. index4 ) goto 200 >*/
	if (*name__ == index4) {
	    goto L200;
	}
/*< 100	continue >*/
L100:
	;
    }
/*< 	return >*/
    return ret_val;
/*< 200	at = index3 >*/
L200:
    ret_val = index3;
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* at_ */


/*< 	integer function canhld( index1 ) >*/
integer canhld_(index1)
integer *index1;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static integer index2;
    extern /* Subroutine */ int getval_();
    extern integer weight_();

/*< 	implicit integer ( a - z ) >*/
/*< 	call getval(5, 0,1180,  12, index1, index2 ) >*/
    getval_(&c__5, &c__0, &c__1180, &c__12, index1, &index2);
/*< 	call getval(5, 0,1181,  14, index2, canhld ) >*/
    getval_(&c__5, &c__0, &c__1181, &c__14, &index2, &ret_val);
/*< 	canhld = canhld - weight( index1 ) >*/
    ret_val -= weight_(index1);
/*< 	if( canhld .lt. 0 )  canhld = 0 >*/
    if (ret_val < 0) {
	ret_val = 0;
    }
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* canhld_ */


/*< 	logical function enemy( x, y, z, player, dexter ) >*/
logical enemy_(x, y, z__, player, dexter)
integer *x, *y, *z__, *player, *dexter;
{
    /* System generated locals */
    logical ret_val;

    /* Local variables */
    static integer ax, ay, az;
    extern integer iran_();
    static integer ival, dice1, itemp;
    extern /* Subroutine */ int getval_();
    static integer iplayr;

/*< 	implicit integer ( a - z ) >*/
/*< 	dice1 = 0 >*/
    dice1 = 0;
/*< 	do 100 itemp = 1, 52 >*/
    for (itemp = 1; itemp <= 52; ++itemp) {
/*< 	    if( itemp .eq. player ) goto 100 >*/
	if (itemp == *player) {
	    goto L100;
	}
/*< 	    iplayr = itemp >*/
	iplayr = itemp;
/*< 	    call getval(5, 0,1194,  10, iplayr, ival ) >*/
	getval_(&c__5, &c__0, &c__1194, &c__10, &iplayr, &ival);
/*< 	    if( ival .eq. 0 ) goto 100 >*/
	if (ival == 0) {
	    goto L100;
	}
/*< 	    ival = 0 >*/
	ival = 0;
/*< 	    if(iplayr.le.26)call getval(6, 0,1197,  23, iplayr, player, ival ) >*/
	if (iplayr <= 26) {
	    getval_(&c__6, &c__0, &c__1197, &c__23, &iplayr, player, &ival);
	}
/*< 	    if( ival .eq. 1 ) goto 100 >*/
	if (ival == 1) {
	    goto L100;
	}
/*< 	    call getval(6, 0,1199,  19, iplayr, 1, ax ) >*/
	getval_(&c__6, &c__0, &c__1199, &c__19, &iplayr, &c__1, &ax);
/*< 	    if( ax .ne. x ) goto 100 >*/
	if (ax != *x) {
	    goto L100;
	}
/*< 	    call getval(6, 0,1201,  19, iplayr, 2, ay ) >*/
	getval_(&c__6, &c__0, &c__1201, &c__19, &iplayr, &c__2, &ay);
/*< 	    if( ay .ne. y ) goto 100 >*/
	if (ay != *y) {
	    goto L100;
	}
/*< 	    call getval(6, 0,1203,  19, iplayr, 3, az ) >*/
	getval_(&c__6, &c__0, &c__1203, &c__19, &iplayr, &c__3, &az);
/*< 	    if( az .ne. z ) goto 100 >*/
	if (az != *z__) {
	    goto L100;
	}
/*< 	    dice1 = dice1 + iran( 18 ) >*/
	dice1 += iran_(&c__18);
/*< 100	continue >*/
L100:
	;
    }
/*< 	enemy = .false. >*/
    ret_val = FALSE_;
/*< 	if( dice1 .gt. dexter )  enemy = .true. >*/
    if (dice1 > *dexter) {
	ret_val = TRUE_;
    }
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* enemy_ */


/*< 	subroutine map( failed ) >*/
/* Subroutine */ int map_(failed)
logical *failed;
{
    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer i__, j, p, x, y, z__, il, in;
    extern integer job_();
    static integer ind, ival;
    extern /* Subroutine */ int phex_();
    static integer ipos;
    extern integer itty_();
    static integer ival1;
    extern integer igtab_();
    extern /* Subroutine */ int ofile_(), pname_(), close_(), wfile_();
    static integer itemp, ptemp, xtemp, ytemp, ztemp;
    extern /* Subroutine */ int select_();
    static integer filesp[13];
    extern /* Subroutine */ int nodlin_(), getval_();
    extern integer weight_();
    extern /* Subroutine */ int number_();
    extern integer isxbit_();
    extern /* Subroutine */ int chrout_();
    extern logical lerror_();
    extern /* Subroutine */ int string_(), outnum_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer filesp( 13 ) >*/
/*< 	logical failed, lerror >*/
/*< 	i = itty( job(0) ) >*/
    i__1 = job_(&c__0);
    i__ = itty_(&i__1);
/*< 	call nodlin( i, in, il ) >*/
    nodlin_(&i__, &in, &il);
/*< 	filesp( 3 ) = isxbit('LPT00~') + (in/8)*4096 + mod(in,8)*64 >*/
    filesp[2] = isxbit_("LPT00~", (ftnlen)6) + (in / 8 << 12) + (in % 8 << 6);
/*< 	filesp( 4 ) = igtab(job(0),95) >*/
    i__1 = job_(&c__0);
    filesp[3] = igtab_(&i__1, &c__95);
/*< 	filesp( 5 ) = isxbit('MAP~') >*/
    filesp[4] = isxbit_("MAP~", (ftnlen)4);
/*< 	call ofile( 10, filesp, 0 ) >*/
    ofile_(&c__10, filesp, &c__0);
/*< 	if( lerror(0) )  return >*/
    if (lerror_(&c__0)) {
	return 0;
    }
/*< 	call wfile( 10, filesp ) >*/
    wfile_(&c__10, filesp);
/*< 	if( lerror(0) )  return >*/
    if (lerror_(&c__0)) {
	return 0;
    }
/*< 	call select( 10 ) >*/
    select_(&c__10);
/*< 	do 400 ztemp = 4, 1, -1 >*/
    for (ztemp = 4; ztemp >= 1; --ztemp) {
/*< 	    z = ztemp >*/
	z__ = ztemp;
/*< 	    call chrout( 12 ) >*/
	chrout_(&c__12);
/*< 	    c >*/
	string_(&c__1, "^M^S^S^S^I^I^I^I^I^I    * * * C a v e  m a p * * *^M\
^S^I^I^I^I^I^I^I      Floor ^E", (ftnlen)82);
/*< 	    call number(1, z ) >*/
	number_(&c__1, &z__);
/*< 	    call string(1,'^M^S^S^S^I^I    ^E') >*/
	string_(&c__1, "^M^S^S^S^I^I    ^E", (ftnlen)18);
/*< 	    do 50 i = 1, 25 >*/
	for (i__ = 1; i__ <= 25; ++i__) {
/*< 		call number(2, i*2, 4 ) >*/
	    i__1 = i__ << 1;
	    number_(&c__2, &i__1, &c__4);
/*< 50	    continue >*/
/* L50: */
	}
/*< 	    call string(1,'^M^S^E') >*/
	string_(&c__1, "^M^S^E", (ftnlen)6);
/*< 	    do 300 ytemp = 50, 1, -1 >*/
	for (ytemp = 50; ytemp >= 1; --ytemp) {
/*< 		y = ytemp >*/
	    y = ytemp;
/*< 		call string(1,'^I^I    >^E') >*/
	    string_(&c__1, "^I^I    >^E", (ftnlen)11);
/*< 		do 100 xtemp = 2, 50, 2 >*/
	    for (xtemp = 2; xtemp <= 50; xtemp += 2) {
/*< 		    ival1 = 0 >*/
		ival1 = 0;
/*< 		    call getval(7, 0,1247,  16, xtemp+0, y, z, ival1 ) >*/
		i__1 = xtemp;
		getval_(&c__7, &c__0, &c__1247, &c__16, &i__1, &y, &z__, &
			ival1);
/*< 		    call getval(7, 0,1248,  1, xtemp+0, y, z, ival ) >*/
		i__1 = xtemp;
		getval_(&c__7, &c__0, &c__1248, &c__1, &i__1, &y, &z__, &ival)
			;
/*< 		    call phex( ival, ival1 ) >*/
		phex_(&ival, &ival1);
/*< 100		continue >*/
/* L100: */
	    }
/*< 		call number(2, y, 3 ) >*/
	    number_(&c__2, &y, &c__3);
/*< 		call string(1,'^M^S^I^I^E') >*/
	    string_(&c__1, "^M^S^I^I^E", (ftnlen)10);
/*< 		call number(2, y, 2 ) >*/
	    number_(&c__2, &y, &c__2);
/*< 		call chrout(32) >*/
	    chrout_(&c__32);
/*< 		do 200 xtemp = 1, 49, 2 >*/
	    for (xtemp = 1; xtemp <= 49; xtemp += 2) {
/*< 		    ival1 = 0 >*/
		ival1 = 0;
/*< 		    call getval(7, 0,1257,  16, xtemp+0, y, z, ival1 ) >*/
		i__1 = xtemp;
		getval_(&c__7, &c__0, &c__1257, &c__16, &i__1, &y, &z__, &
			ival1);
/*< 		    call getval(7, 0,1258,  1, xtemp+0, y, z, ival ) >*/
		i__1 = xtemp;
		getval_(&c__7, &c__0, &c__1258, &c__1, &i__1, &y, &z__, &ival)
			;
/*< 		    call phex( ival, ival1 ) >*/
		phex_(&ival, &ival1);
/*< 200		continue >*/
/* L200: */
	    }
/*< 		call string(1,'<^M^S^E') >*/
	    string_(&c__1, "<^M^S^E", (ftnlen)7);
/*< 300	    continue >*/
/* L300: */
	}
/*< 	    call string(1,'^I^I  ^E') >*/
	string_(&c__1, "^I^I  ^E", (ftnlen)8);
/*< 	    do 350 i = 1, 25 >*/
	for (i__ = 1; i__ <= 25; ++i__) {
/*< 		call number(2, i*2-1, 4 ) >*/
	    i__1 = (i__ << 1) - 1;
	    number_(&c__2, &i__1, &c__4);
/*< 350	    continue >*/
/* L350: */
	}
/*< 400	continue >*/
/* L400: */
    }
/*< 	call string(1,'^LMap indices:^M^S^S^S^E') >*/
    string_(&c__1, "^LMap indices:^M^S^S^S^E", (ftnlen)24);
/*< 	ipos = 0 >*/
    ipos = 0;
/*< 	do 500 z = 4, 1, -1 >*/
    for (z__ = 4; z__ >= 1; --z__) {
/*< 	    do 500 y = 50, 1, -1 >*/
	for (y = 50; y >= 1; --y) {
/*< 		do 500 x = 1, 50 >*/
	    for (x = 1; x <= 50; ++x) {
/*< 		    call getval(7, 0,1274,  1, x+0, y+0, z+0, ival ) >*/
		i__1 = x;
		i__2 = y;
		i__3 = z__;
		getval_(&c__7, &c__0, &c__1274, &c__1, &i__1, &i__2, &i__3, &
			ival);
/*< 		    if( ival .eq. 0 .or. ival .eq. 511 ) goto 500 >*/
		if (ival == 0 || ival == 511) {
		    goto L500;
		}
/*< 		    ipos = ipos + 1 >*/
		++ipos;
/*< 		    call string(1,'       ^E') >*/
		string_(&c__1, "       ^E", (ftnlen)9);
/*< 		    call chrout(40) >*/
		chrout_(&c__40);
/*< 		    call number(2, x+0, -2 ) >*/
		i__1 = x;
		number_(&c__2, &i__1, &c_n2);
/*< 		    call chrout(44) >*/
		chrout_(&c__44);
/*< 		    call number(2, y+0, -2 ) >*/
		i__1 = y;
		number_(&c__2, &i__1, &c_n2);
/*< 		    call chrout(44) >*/
		chrout_(&c__44);
/*< 		    call number(1, z+0 ) >*/
		i__1 = z__;
		number_(&c__1, &i__1);
/*< 		    call string(1,'):  ^E') >*/
		string_(&c__1, "):  ^E", (ftnlen)6);
/*< 		    call number(2, ival, 3 ) >*/
		number_(&c__2, &ival, &c__3);
/*< 		    call number(3, ival, 4, 36 ) >*/
		number_(&c__3, &ival, &c__4, &c__36);
/*< 		    if( mod( ipos, 4 ) .eq. 0 )  call string(1,'^M^S^E') >*/
		if (ipos % 4 == 0) {
		    string_(&c__1, "^M^S^E", (ftnlen)6);
		}
/*< 500	continue >*/
L500:
		;
	    }
	}
    }
/*< 	call string(1,'^LGroup indices:^M^S^S^S^E') >*/
    string_(&c__1, "^LGroup indices:^M^S^S^S^E", (ftnlen)26);
/*< 	do 700 itemp = 1, 510 >*/
    for (itemp = 1; itemp <= 510; ++itemp) {
/*< 	    ind = itemp >*/
	ind = itemp;
/*< 	    call getval(6, 0,1293,  2, ind, 11, ival ) >*/
	getval_(&c__6, &c__0, &c__1293, &c__2, &ind, &c__11, &ival);
/*< 	    if( ival .eq. 0 ) goto 700 >*/
	if (ival == 0) {
	    goto L700;
	}
/*< 	    call string(1,'       ^E') >*/
	string_(&c__1, "       ^E", (ftnlen)9);
/*< 	    call number(2, ind, 3 ) >*/
	number_(&c__2, &ind, &c__3);
/*< 	    call number(3, -ind, 3, 36 ) >*/
	i__1 = -ind;
	number_(&c__3, &i__1, &c__3, &c__36);
/*< 	    call string(1,'  Length:^E') >*/
	string_(&c__1, "  Length:^E", (ftnlen)11);
/*< 	    call number(2, ival, 2 ) >*/
	number_(&c__2, &ival, &c__2);
/*< 	    do 600 j = 1, 10 >*/
	for (j = 1; j <= 10; ++j) {
/*< 		call getval(6, 0,1301,  2, ind, j+0, ival ) >*/
	    i__1 = j;
	    getval_(&c__6, &c__0, &c__1301, &c__2, &ind, &i__1, &ival);
/*< 		if( ival .eq. 0 ) goto 600 >*/
	    if (ival == 0) {
		goto L600;
	    }
/*< 		call string(1,'   ^E') >*/
	    string_(&c__1, "   ^E", (ftnlen)5);
/*< 		call number(2, j+0, 2 ) >*/
	    i__1 = j;
	    number_(&c__2, &i__1, &c__2);
/*< 		call chrout(58) >*/
	    chrout_(&c__58);
/*< 		call number(2, ival, 3 ) >*/
	    number_(&c__2, &ival, &c__3);
/*< 600	    continue >*/
L600:
	    ;
	}
/*< 	    call string(1,'^M^S^E') >*/
	string_(&c__1, "^M^S^E", (ftnlen)6);
/*< 700	continue >*/
L700:
	;
    }
/*< 	call  >*/
    string_(&c__1, "^LObject indices:^M^S^S^SIndex^IName^IWeight^IHolds^IIS^\
IDamage^ISuccess^IJob^IDir^ICoordinate^I^IAllies^M^S^E", (ftnlen)110);
/*< 	do 1100 itemp = 1, 510 >*/
    for (itemp = 1; itemp <= 510; ++itemp) {
/*< 	    ind = itemp >*/
	ind = itemp;
/*< 	    call getval(5, 0,1316,  10, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1316, &c__10, &ind, &ival);
/*< 	    if( ival .eq. 0 ) goto 1100 >*/
	if (ival == 0) {
	    goto L1100;
	}
/*< 	    call number(2, ind, 3 ) >*/
	number_(&c__2, &ind, &c__3);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call pname( ind, 4 ) >*/
	pname_(&ind, &c__4);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1322,  4, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1322, &c__4, &ind, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout(58) >*/
	chrout_(&c__58);
/*< 	    call number(1, weight(ind) ) >*/
	i__1 = weight_(&ind);
	number_(&c__1, &i__1);
/*< 	    call chrout(9) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1327,  5, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1327, &c__5, &ind, &ival);
/*< 	    if( ival .eq. 511 ) goto 800 >*/
	if (ival == 511) {
	    goto L800;
	}
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call number(3, -ival, 0, 36 ) >*/
	i__1 = -ival;
	number_(&c__3, &i__1, &c__0, &c__36);
/*< 800	    call chrout( 9 ) >*/
L800:
	chrout_(&c__9);
/*< 	    call getval(5, 0,1332,  12, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1332, &c__12, &ind, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    if( ind .gt. 52 ) goto 1000 >*/
	if (ind > 52) {
	    goto L1000;
	}
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(6, 0,1336,  6, ind, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1336, &c__6, &ind, &c__1, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout(44) >*/
	chrout_(&c__44);
/*< 	    call getval(6, 0,1339,  6, ind, 2, ival ) >*/
	getval_(&c__6, &c__0, &c__1339, &c__6, &ind, &c__2, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout(44) >*/
	chrout_(&c__44);
/*< 	    call getval(6, 0,1342,  6, ind, 3, ival ) >*/
	getval_(&c__6, &c__0, &c__1342, &c__6, &ind, &c__3, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1345,  21, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1345, &c__21, &ind, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    if( ind .le. 26 )call getval(6, 0,1348,  7, ind, 1, ival ) >*/
	if (ind <= 26) {
	    getval_(&c__6, &c__0, &c__1348, &c__7, &ind, &c__1, &ival);
	}
/*< 	    if( ind .le. 26 )call number(1, ival ) >*/
	if (ind <= 26) {
	    number_(&c__1, &ival);
	}
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1351,  8, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1351, &c__8, &ind, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(6, 0,1354,  19, ind, 1, x ) >*/
	getval_(&c__6, &c__0, &c__1354, &c__19, &ind, &c__1, &x);
/*< 	    call getval(6, 0,1355,  19, ind, 2, y ) >*/
	getval_(&c__6, &c__0, &c__1355, &c__19, &ind, &c__2, &y);
/*< 	    call getval(6, 0,1356,  19, ind, 3, z ) >*/
	getval_(&c__6, &c__0, &c__1356, &c__19, &ind, &c__3, &z__);
/*< 	    call outnum(3, x, y, z ) >*/
	outnum_(&c__3, &x, &y, &z__);
/*< 	    if( ind .gt. 26 ) goto 901 >*/
	if (ind > 26) {
	    goto L901;
	}
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    do 900 ptemp = 1, 26 >*/
	for (ptemp = 1; ptemp <= 26; ++ptemp) {
/*< 		p = ptemp >*/
	    p = ptemp;
/*< 		call getval(6, 0,1363,  23, ind, p, ival ) >*/
	    getval_(&c__6, &c__0, &c__1363, &c__23, &ind, &p, &ival);
/*< 		if( ival .ne. 0 )  call chrout( p+64 ) >*/
	    if (ival != 0) {
		i__1 = p + 64;
		chrout_(&i__1);
	    }
/*< 900	    continue >*/
/* L900: */
	}
/*< 901	    continue >*/
L901:
/*< 1000	    call string(1,'^M^S^E') >*/
L1000:
	string_(&c__1, "^M^S^E", (ftnlen)6);
/*< 1100	continue >*/
L1100:
	;
    }
/*< 	call  >*/
    string_(&c__1, "^LInformation for item types:^M^S^S^SIndex^IName^ICost^I\
Carries^IWhere^IDamage^IStren^IType^M^S^E", (ftnlen)97);
/*< 	do 1300 itemp = 1, 100 >*/
    for (itemp = 1; itemp <= 100; ++itemp) {
/*< 	    ind = itemp >*/
	ind = itemp;
/*< 	    call getval(5, 0,1374,  3, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1374, &c__3, &ind, &ival);
/*< 	    if( ival .eq. 0 ) goto 1300 >*/
	if (ival == 0) {
	    goto L1300;
	}
/*< 	    call number(2, ind, 3 ) >*/
	number_(&c__2, &ind, &c__3);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call string(3, ival, 6, 4 ) >*/
	string_(&c__3, &ival, &c__6, &c__4);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1380,  13, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1380, &c__13, &ind, &ival);
/*< 	    call chrout(36) >*/
	chrout_(&c__36);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1384,  14, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1384, &c__14, &ind, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1387,  15, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1387, &c__15, &ind, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1390,  17, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1390, &c__17, &ind, &ival);
/*< 	    call number(1, ival/10 ) >*/
	i__1 = ival / 10;
	number_(&c__1, &i__1);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call number(1, mod(ival,10)-5 ) >*/
	i__1 = ival % 10 - 5;
	number_(&c__1, &i__1);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1395,  18, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1395, &c__18, &ind, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call chrout( 9 ) >*/
	chrout_(&c__9);
/*< 	    call getval(5, 0,1398,  24, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1398, &c__24, &ind, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 	    call string(1,'^M^S^E') >*/
	string_(&c__1, "^M^S^E", (ftnlen)6);
/*< 1300	continue >*/
L1300:
	;
    }
/*< 	call string(1,'^LStore indices:^M^S^S^S^E') >*/
    string_(&c__1, "^LStore indices:^M^S^S^S^E", (ftnlen)26);
/*< 	ipos = 0 >*/
    ipos = 0;
/*< 	do 1400 itemp = 1, 80 >*/
    for (itemp = 1; itemp <= 80; ++itemp) {
/*< 	    ind = itemp >*/
	ind = itemp;
/*< 	    call getval(5, 0,1407,  11, ind, ival ) >*/
	getval_(&c__5, &c__0, &c__1407, &c__11, &ind, &ival);
/*< 	    if( ival .eq. 0 ) goto 1400 >*/
	if (ival == 0) {
	    goto L1400;
	}
/*< 	    call string(1,'                  ^E') >*/
	string_(&c__1, "                  ^E", (ftnlen)20);
/*< 	    call number(2, ind, 2 ) >*/
	number_(&c__2, &ind, &c__2);
/*< 	    call string(1,'  -  ^E') >*/
	string_(&c__1, "  -  ^E", (ftnlen)7);
/*< 	    call number(2, ival, 3 ) >*/
	number_(&c__2, &ival, &c__3);
/*< 	    ipos = ipos + 1 >*/
	++ipos;
/*< 	    if( mod( ipos, 4 ) .eq. 0 ) call string(1,'^M^S^E') >*/
	if (ipos % 4 == 0) {
	    string_(&c__1, "^M^S^E", (ftnlen)6);
	}
/*< 1400	continue >*/
L1400:
	;
    }
/*< 	failed = .false. >*/
    *failed = FALSE_;
/*< 	call close( 10 ) >*/
    close_(&c__10);
/*< 	call select( 0 ) >*/
    select_(&c__0);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* map_ */


/*< 	subroutine phex( ival, ival1 ) >*/
/* Subroutine */ int phex_(ival, ival1)
integer *ival, *ival1;
{
    extern /* Subroutine */ int number_(), chrout_(), string_();

/*< 	if( ival1 .eq. 0 )call chrout(60) >*/
    if (*ival1 == 0) {
	chrout_(&c__60);
    }
/*< 	if( ival1 .ne. 0 )call chrout(91) >*/
    if (*ival1 != 0) {
	chrout_(&c__91);
    }
/*< 	if( ival .eq. 0 )  call string(1,'##^E') >*/
    if (*ival == 0) {
	string_(&c__1, "##^E", (ftnlen)4);
    }
/*< 	if( ival .eq. 511 )  call string(1,'  ^E') >*/
    if (*ival == 511) {
	string_(&c__1, "  ^E", (ftnlen)4);
    }
/*< 	if( ival .gt. 0 .and. ival .lt. 511 )call number(3, ival, 2, 36 ) >*/
    if (*ival > 0 && *ival < 511) {
	number_(&c__3, ival, &c__2, &c__36);
    }
/*< 	if( ival1 .eq. 0 )call chrout(62) >*/
    if (*ival1 == 0) {
	chrout_(&c__62);
    }
/*< 	if( ival1 .ne. 0 )call chrout(93) >*/
    if (*ival1 != 0) {
	chrout_(&c__93);
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* phex_ */


/*< 	subroutine monstr >*/
/* Subroutine */ int monstr_()
{
    /* System generated locals */
    integer i__1, i__2;
    real r__1, r__2;

    /* Builtin functions */
    double sqrt();

    /* Local variables */
    static integer a, i__, j, x, y, z__;
    extern integer at_();
    static integer ax, ay, az, nx, ny, dir, idir;
    extern integer iran_();
    static integer ival, ihex, nhex, dist;
    extern /* Subroutine */ int drop_();
    static integer force;
    extern /* Subroutine */ int newxy_();
    static logical failed;
    extern /* Subroutine */ int addval_();
    static integer aindex, bindex;
    extern integer findir_();
    static integer hoatme, method;
    extern /* Subroutine */ int getval_();
    static integer mindex;
    extern /* Subroutine */ int bugmsg_();
    extern integer newdir_();
    static integer tindex, dexter;
    extern /* Subroutine */ int remove_();
    static integer recovr, streng, bstdst, monctr;
    extern /* Subroutine */ int putval_();

/* ****** SUBROUTINE CONTROLS ALL MONSTERS ************************ */
/*< 	implicit integer ( a - z ) >*/
/*< 	logical failed >*/
/*< 	do 1000 i = 1, 26 >*/
    for (i__ = 1; i__ <= 26; ++i__) {
/*< 	    mindex = i >*/
	mindex = i__;
/*< 	    tindex = mindex + 26 >*/
	tindex = mindex + 26;
/*< 	    call getval(5, 0,1443,  10, tindex, ival ) >*/
	getval_(&c__5, &c__0, &c__1443, &c__10, &tindex, &ival);
/*< 	    if( ival .ne. 0 ) goto 100 >*/
	if (ival != 0) {
	    goto L100;
	}
/* ****** MONSTER MUST BE (RE) CREATED **************************** */
/*< 	    call putval(4, 0,1448,  -10, 1 ) >*/
	putval_(&c__4, &c__0, &c__1448, &c_n10, &c__1);
/*< 	    call getval(5, 0,1449,  25, mindex, ival ) >*/
	getval_(&c__5, &c__0, &c__1449, &c__25, &mindex, &ival);
/*< 	    call putval(5, 0,1450,  4, tindex, ival ) >*/
	putval_(&c__5, &c__0, &c__1450, &c__4, &tindex, &ival);
/*< 	    call getval(6, 0,1451,  27, mindex, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__1451, &c__27, &mindex, &c__1, &ival);
/*< 	    call putval(6, 0,1452,  27, mindex, 2, ival ) >*/
	putval_(&c__6, &c__0, &c__1452, &c__27, &mindex, &c__2, &ival);
/*< 	    call putval(5, 0,1453,  12, tindex, tindex ) >*/
	putval_(&c__5, &c__0, &c__1453, &c__12, &tindex, &tindex);
/*< 	    call putval(5, 0,1454,  8, tindex, iran(6) ) >*/
	i__1 = iran_(&c__6);
	putval_(&c__5, &c__0, &c__1454, &c__8, &tindex, &i__1);
/*< 	    call getval(5, 0,1455,  30, mindex, z ) >*/
	getval_(&c__5, &c__0, &c__1455, &c__30, &mindex, &z__);
/*< 	    z = iran( z+1 ) >*/
	i__1 = z__ + 1;
	z__ = iran_(&i__1);
/*< 50	    x = iran( 49 ) + 1 >*/
L50:
	x = iran_(&c__49) + 1;
/*< 	    y = iran( 49 ) + 1 >*/
	y = iran_(&c__49) + 1;
/*< 	    call getval(7, 0,1459,  1, x, y, z, ival ) >*/
	getval_(&c__7, &c__0, &c__1459, &c__1, &x, &y, &z__, &ival);
/*< 	    if( ival .eq. 0 ) goto 50 >*/
	if (ival == 0) {
	    goto L50;
	}
/*< 	    call drop( failed, .true., x, y, z, tindex ) >*/
	drop_(&failed, &c_true, &x, &y, &z__, &tindex);
/*< 	    call putval(6, 0,1462,  19, tindex, 1, x ) >*/
	putval_(&c__6, &c__0, &c__1462, &c__19, &tindex, &c__1, &x);
/*< 	    call putval(6, 0,1463,  19, tindex, 2, y ) >*/
	putval_(&c__6, &c__0, &c__1463, &c__19, &tindex, &c__2, &y);
/*< 	    call putval(6, 0,1464,  19, tindex, 3, z ) >*/
	putval_(&c__6, &c__0, &c__1464, &c__19, &tindex, &c__3, &z__);
/*< 	    call getval(5, 0,1465,  29, mindex, nhex ) >*/
	getval_(&c__5, &c__0, &c__1465, &c__29, &mindex, &nhex);
/*< 	    if( nhex .le. 1 ) goto 71 >*/
	if (nhex <= 1) {
	    goto L71;
	}
/*< 	    do 70 ihex= 1, nhex-1 >*/
	i__1 = nhex - 1;
	for (ihex = 1; ihex <= i__1; ++ihex) {
/*< 60		idir = iran(6) >*/
L60:
	    idir = iran_(&c__6);
/*< 		call newxy( x, y, idir, nx, ny ) >*/
	    newxy_(&x, &y, &idir, &nx, &ny);
/*< 		if( nx .eq. 0 ) goto 60 >*/
	    if (nx == 0) {
		goto L60;
	    }
/*< 		call getval(7, 0,1471,  1, nx, ny, z, ival ) >*/
	    getval_(&c__7, &c__0, &c__1471, &c__1, &nx, &ny, &z__, &ival);
/*< 		if( ival .eq. 0 ) goto 60 >*/
	    if (ival == 0) {
		goto L60;
	    }
/*< 		call putval(6, 0,1473,  31, mindex, ihex+0, idir ) >*/
	    i__2 = ihex;
	    putval_(&c__6, &c__0, &c__1473, &c__31, &mindex, &i__2, &idir);
/*< 		call drop( failed, .true., nx, ny, z, tindex ) >*/
	    drop_(&failed, &c_true, &nx, &ny, &z__, &tindex);
/*< 		x = nx >*/
	    x = nx;
/*< 		y = ny >*/
	    y = ny;
/*< 70	    continue >*/
/* L70: */
	}
/*< 71	    continue >*/
L71:
/* ****** MOVE MONSTER ******************************************** */
/*< 100	    call getval(6, 0,1482,  27, mindex, 2, streng ) >*/
L100:
	getval_(&c__6, &c__0, &c__1482, &c__27, &mindex, &c__2, &streng);
/*< 	    call getval(5, 0,1483,  26, mindex, dexter ) >*/
	getval_(&c__5, &c__0, &c__1483, &c__26, &mindex, &dexter);
/*< 	    call getval(6, 0,1484,  19, tindex, 1, x ) >*/
	getval_(&c__6, &c__0, &c__1484, &c__19, &tindex, &c__1, &x);
/*< 	    call getval(6, 0,1485,  19, tindex, 2, y ) >*/
	getval_(&c__6, &c__0, &c__1485, &c__19, &tindex, &c__2, &y);
/*< 	    call getval(6, 0,1486,  19, tindex, 3, z ) >*/
	getval_(&c__6, &c__0, &c__1486, &c__19, &tindex, &c__3, &z__);
/*< 	    call getval(5, 0,1487,  32, tindex, recovr ) >*/
	getval_(&c__5, &c__0, &c__1487, &c__32, &tindex, &recovr);
/*< 	    if( recovr .gt. 0 ) call addval(4, 0,1488,  -32, -1 ) >*/
	if (recovr > 0) {
	    addval_(&c__4, &c__0, &c__1488, &c_n32, &c_n1);
	}
/*< 	    call getval(6, 0,1489,  6, tindex, 1, hoatme ) >*/
	getval_(&c__6, &c__0, &c__1489, &c__6, &tindex, &c__1, &hoatme);
/*< 	    if( hoatme .eq. 0 ) goto 105 >*/
	if (hoatme == 0) {
	    goto L105;
	}
/*< 	    call putval(4, 0,1491,  -6, 0 ) >*/
	putval_(&c__4, &c__0, &c__1491, &c_n6, &c__0);
/*< 	    call getval(6, 0,1492,  6, tindex, 3, force ) >*/
	getval_(&c__6, &c__0, &c__1492, &c__6, &tindex, &c__3, &force);
/* 	    IF( IRAN(6)+IRAN(6)+IRAN(6).LT.DEXTER.AND.RECOVR.LE.0 ) */
/*     & GOTO 104 */
/*< 	    streng = streng - force >*/
	streng -= force;
/*< 	    call putval(5, 0,1496,  21, hoatme, 2 ) >*/
	putval_(&c__5, &c__0, &c__1496, &c__21, &hoatme, &c__2);
/*< 	    call putval(6, 0,1497,  27, mindex, 2, streng ) >*/
	putval_(&c__6, &c__0, &c__1497, &c__27, &mindex, &c__2, &streng);
/*< 	    if( streng .gt. 0 ) goto 105 >*/
	if (streng > 0) {
	    goto L105;
	}
/*< 	    call putval(6, 0,1499,  6, hoatme, 4, tindex ) >*/
	putval_(&c__6, &c__0, &c__1499, &c__6, &hoatme, &c__4, &tindex);
/*< 	    call remove( x, y, z, tindex, failed ) >*/
	remove_(&x, &y, &z__, &tindex, &failed);
/*< 	    if(failed)call bugmsg('MONSTR: REMOVE#1^E',x,y,z,tindex) >*/
	if (failed) {
	    bugmsg_("MONSTR: REMOVE#1^E", &x, &y, &z__, &tindex, (ftnlen)18);
	}
/*< 	    call getval(5, 0,1502,  29, mindex, nhex ) >*/
	getval_(&c__5, &c__0, &c__1502, &c__29, &mindex, &nhex);
/*< 	    if( nhex .le. 1 ) goto 103 >*/
	if (nhex <= 1) {
	    goto L103;
	}
/*< 	    do 102 ihex = 1, nhex-1 >*/
	i__1 = nhex - 1;
	for (ihex = 1; ihex <= i__1; ++ihex) {
/*< 		call getval(6, 0,1505,  31, mindex, ihex+0, idir ) >*/
	    i__2 = ihex;
	    getval_(&c__6, &c__0, &c__1505, &c__31, &mindex, &i__2, &idir);
/*< 		call newxy( x, y, idir, nx, ny ) >*/
	    newxy_(&x, &y, &idir, &nx, &ny);
/*< 		call remove( nx, ny, z, tindex, failed ) >*/
	    remove_(&nx, &ny, &z__, &tindex, &failed);
/*< 		if(failed)call bugmsg('MONSTR: REMOVE#2^E',nx,ny,z,tindex) >*/
	    if (failed) {
		bugmsg_("MONSTR: REMOVE#2^E", &nx, &ny, &z__, &tindex, (
			ftnlen)18);
	    }
/*< 		x = nx >*/
	    x = nx;
/*< 		y = ny >*/
	    y = ny;
/*< 102	    continue >*/
/* L102: */
	}
/*< 103	    continue >*/
L103:
/*< 	    call putval(5, 0,1513,  10, tindex, 0 ) >*/
	putval_(&c__5, &c__0, &c__1513, &c__10, &tindex, &c__0);
/*< 	    goto 1000 >*/
	goto L1000;
/*< 104	    call putval(5, 0,1515,  21, hoatme, 3 ) >*/
/* L104: */
	putval_(&c__5, &c__0, &c__1515, &c__21, &hoatme, &c__3);
/* ****** FIND OUT IF ANY ENEMY IS PRESENT, IF SO, ATTACK ********* */
/*< 105	    if( recovr .gt. 0 ) goto 1000 >*/
L105:
	if (recovr > 0) {
	    goto L1000;
	}
/*< 	    bstdst = 100. >*/
	bstdst = (float)100.;
/*< 	    do 150 a = 1, 26 >*/
	for (a = 1; a <= 26; ++a) {
/*< 		aindex = a >*/
	    aindex = a;
/*< 		call getval(5, 0,1523,  10, aindex, ival ) >*/
	    getval_(&c__5, &c__0, &c__1523, &c__10, &aindex, &ival);
/*< 		if( ival .eq. 0 ) goto 150 >*/
	    if (ival == 0) {
		goto L150;
	    }
/*< 		call getval(6, 0,1525,  19, aindex, 3, az ) >*/
	    getval_(&c__6, &c__0, &c__1525, &c__19, &aindex, &c__3, &az);
/*< 		if( az .ne. z ) goto 150 >*/
	    if (az != z__) {
		goto L150;
	    }
/*< 		call getval(6, 0,1527,  19, aindex, 1, ax ) >*/
	    getval_(&c__6, &c__0, &c__1527, &c__19, &aindex, &c__1, &ax);
/*< 		call getval(6, 0,1528,  19, aindex, 2, ay ) >*/
	    getval_(&c__6, &c__0, &c__1528, &c__19, &aindex, &c__2, &ay);
/*< 		dist = sqrt((x-ax+0.0)**2 + (y-ay+0.0)**2) >*/
/* Computing 2nd power */
	    r__1 = x - ax + (float)0.;
/* Computing 2nd power */
	    r__2 = y - ay + (float)0.;
	    dist = sqrt(r__1 * r__1 + r__2 * r__2);
/*< 		if( dist .gt. bstdst ) goto 150 >*/
	    if (dist > bstdst) {
		goto L150;
	    }
/*< 		bstdst = dist >*/
	    bstdst = dist;
/*< 		bindex = aindex >*/
	    bindex = aindex;
/*< 		dir = findir( x, y, ax, ay ) >*/
	    dir = findir_(&x, &y, &ax, &ay);
/*< 150	    continue >*/
L150:
	    ;
	}
/*< 	    if( bstdst .gt. 10 ) dir = iran( 6 ) >*/
	if (bstdst > 10) {
	    dir = iran_(&c__6);
	}
/*< 	    monctr = 0 >*/
	monctr = 0;
/*< 	    goto 170 >*/
	goto L170;
/*< 160	    monctr = monctr + 1 >*/
L160:
	++monctr;
/*< 	    if( monctr .eq. 10 ) goto 1000 >*/
	if (monctr == 10) {
	    goto L1000;
	}
/*< 	    dir = newdir( dir, iran(3)-2 ) >*/
	i__1 = iran_(&c__3) - 2;
	dir = newdir_(&dir, &i__1);
/*< 170	    call putval(5, 0,1543,  8, tindex, dir ) >*/
L170:
	putval_(&c__5, &c__0, &c__1543, &c__8, &tindex, &dir);
/*< 	    call newxy( x, y, dir, nx, ny ) >*/
	newxy_(&x, &y, &dir, &nx, &ny);
/*< 	    if( nx .eq. 0 ) goto 160 >*/
	if (nx == 0) {
	    goto L160;
	}
/*< 	    call getval(7, 0,1546,  1, nx, ny, z, ival ) >*/
	getval_(&c__7, &c__0, &c__1546, &c__1, &nx, &ny, &z__, &ival);
/*< 	    if( ival .eq. 0 ) goto 160 >*/
	if (ival == 0) {
	    goto L160;
	}
/*< 	    if( bstdst.le.2.0 .and. at(nx,ny,z,bindex).ne.0 ) goto 600 >*/
	if ((real) bstdst <= (float)2. && at_(&nx, &ny, &z__, &bindex) != 0) {
	    goto L600;
	}
/*< 	    call drop( failed, .true., nx, ny, z, tindex ) >*/
	drop_(&failed, &c_true, &nx, &ny, &z__, &tindex);
/*< 	    if( failed ) goto 160 >*/
	if (failed) {
	    goto L160;
	}
/*< 	    call remove( x, y, z, tindex, failed ) >*/
	remove_(&x, &y, &z__, &tindex, &failed);
/*< 	    if(failed)call bugmsg('MONSTR: REMOVE#3^E',x,y,z,tindex) >*/
	if (failed) {
	    bugmsg_("MONSTR: REMOVE#3^E", &x, &y, &z__, &tindex, (ftnlen)18);
	}
/*< 	    call putval(6, 0,1553,  19, tindex, 1, nx ) >*/
	putval_(&c__6, &c__0, &c__1553, &c__19, &tindex, &c__1, &nx);
/*< 	    call putval(6, 0,1554,  19, tindex, 2, ny ) >*/
	putval_(&c__6, &c__0, &c__1554, &c__19, &tindex, &c__2, &ny);
/*< 	    call getval(5, 0,1555,  29, mindex, nhex ) >*/
	getval_(&c__5, &c__0, &c__1555, &c__29, &mindex, &nhex);
/*< 	    if( nhex .le. 1 ) goto 301 >*/
	if (nhex <= 1) {
	    goto L301;
	}
/*< 	    dir = newdir( dir, 3 ) >*/
	dir = newdir_(&dir, &c__3);
/*< 	    do 300 ihex = 1, nhex-1 >*/
	i__1 = nhex - 1;
	for (ihex = 1; ihex <= i__1; ++ihex) {
/*< 		call getval(6, 0,1559,  31, mindex, ihex+0, idir ) >*/
	    i__2 = ihex;
	    getval_(&c__6, &c__0, &c__1559, &c__31, &mindex, &i__2, &idir);
/*< 		call newxy( x, y, idir, nx, ny ) >*/
	    newxy_(&x, &y, &idir, &nx, &ny);
/*< 		call putval(6, 0,1561,  31, mindex, ihex+0, dir ) >*/
	    i__2 = ihex;
	    putval_(&c__6, &c__0, &c__1561, &c__31, &mindex, &i__2, &dir);
/*< 		dir = idir >*/
	    dir = idir;
/*< 		call remove( nx, ny, z, tindex, failed ) >*/
	    remove_(&nx, &ny, &z__, &tindex, &failed);
/*< 		call drop( failed, .true., x, y, z, tindex ) >*/
	    drop_(&failed, &c_true, &x, &y, &z__, &tindex);
/*< 		x = nx >*/
	    x = nx;
/*< 		y = ny >*/
	    y = ny;
/*< 300	    continue >*/
/* L300: */
	}
/*< 301	    continue >*/
L301:
/*< 	    if( 20-dexter .gt. 0 ) call putval(5, 0,1569,  32, tindex, 20-dexter ) >*/
	if (20 - dexter > 0) {
	    i__1 = 20 - dexter;
	    putval_(&c__5, &c__0, &c__1569, &c__32, &tindex, &i__1);
	}
/*< 	    goto 1000 >*/
	goto L1000;
/* ****** MONSTER IS ATTACKING ************************************ */
/*< 600	    method = iran( 20 ) >*/
L600:
	method = iran_(&c__20);
/*< 	    do 700 j = 1, 5 >*/
	for (j = 1; j <= 5; ++j) {
/*< 		call getval(6, 0,1576,  28, mindex, j+0, ival ) >*/
	    i__1 = j;
	    getval_(&c__6, &c__0, &c__1576, &c__28, &mindex, &i__1, &ival);
/*< 		if( ival .ge. method ) goto 800 >*/
	    if (ival >= method) {
		goto L800;
	    }
/*< 		method = method - ival >*/
	    method -= ival;
/*< 700	    continue >*/
/* L700: */
	}
/*< 800	    call putval(6, 0,1580,  6, bindex, 1, tindex ) >*/
L800:
	putval_(&c__6, &c__0, &c__1580, &c__6, &bindex, &c__1, &tindex);
/*< 	    call putval(6, 0,1581,  6, bindex, 2, 511+j ) >*/
	i__1 = j + 511;
	putval_(&c__6, &c__0, &c__1581, &c__6, &bindex, &c__2, &i__1);
/*< 	    call putval(6, 0,1582,  6, bindex, 3, iran( streng*j/5 ) ) >*/
	i__2 = streng * j / 5;
	i__1 = iran_(&i__2);
	putval_(&c__6, &c__0, &c__1582, &c__6, &bindex, &c__3, &i__1);
/*< 	    if( 33-dexter.gt.0 )call putval(5, 0,1583,  32, tindex, 33-dexter ) >*/
	if (33 - dexter > 0) {
	    i__1 = 33 - dexter;
	    putval_(&c__5, &c__0, &c__1583, &c__32, &tindex, &i__1);
	}
/*< 1000	continue >*/
L1000:
	;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* monstr_ */

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
/*< 	call string(1,' line ^E') >*/
    string_(&c__1, " line ^E", (ftnlen)8);
/*< 	call number(3, il, 0, 8 ) >*/
    number_(&c__3, &il, &c__0, &c__8);
/* 	CALL CHROUT(' ') */
/* 	CALL STRING(3, JSTAT( IJOB ), 6, 2 ) */
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* syswho_ */

/*< 	subroutine finwrd( word, ind ) >*/
/* Subroutine */ int finwrd_(word, ind)
integer *word, *ind;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer ival, nname;
    extern logical streq_();
    extern /* Subroutine */ int getval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical streq >*/
/*< 	commo >*/
/*< 	do 100 ind = 1, 100 >*/
    for (*ind = 1; *ind <= 100; ++(*ind)) {
/*< 	    call getval(5, 0,1624,  10, ind+0, ival ) >*/
	i__1 = *ind;
	getval_(&c__5, &c__0, &c__1624, &c__10, &i__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 100 >*/
	if (ival == 0) {
	    goto L100;
	}
/*< 	    call getval(5, 0,1626,  3, ind+0, nname ) >*/
	i__1 = *ind;
	getval_(&c__5, &c__0, &c__1626, &c__3, &i__1, &nname);
/*< 	    if( streq( nname, word ) ) return >*/
	if (streq_(&nname, word)) {
	    return 0;
	}
/*< 100	continue >*/
L100:
	;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* finwrd_ */


/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static logical newscr = TRUE_;
    static integer imoney = 500;
    static integer nitem = 10;
    static integer elevel = 25;
    static struct {
	char e_1[48];
	integer e_2;
	} equiv_308 = { {'J', 'A', 'N', ' ', 'F', 'E', 'B', ' ', 'M', 'A', 
		'R', ' ', 'A', 'P', 'R', ' ', 'M', 'A', 'Y', ' ', 'J', 'U', 
		'N', ' ', 'J', 'U', 'L', ' ', 'A', 'U', 'G', ' ', 'S', 'E', 
		'P', ' ', 'O', 'C', 'T', ' ', 'N', 'O', 'V', ' ', 'D', 'E', 
		'C', ' '}, 0 };

#define month ((integer *)&equiv_308)


    /* System generated locals */
    integer i__1, i__2, i__3;
    real r__1, r__2;

    /* Builtin functions */
    double sqrt();
    integer pow_ii();

    /* Local variables */
    static integer i__, x, y, z__;
    extern integer at_();
    static integer ax, ay, nx, ny, nz, dgo;
    extern integer job_();
    extern /* Subroutine */ int map_();
    static integer dir, hit;
    extern /* Subroutine */ int ppn_();
    static integer vol, ipn1, ipn2, dfac, diff, idam, adir, name__, ddir, 
	    ijob, ilen;
    extern integer icon_();
    extern /* Subroutine */ int lock_();
    extern integer iran_();
    static integer ival, imod, body[10], item, verb, dist;
    extern /* Subroutine */ int drop_();
    static integer udex, vdir;
    extern /* Subroutine */ int xfer_();
    extern integer cost_();
    static integer istr, dice1, dice2, name1, name2;
    extern /* Subroutine */ int check_(), pback_(), cease_();
    extern integer igtab_();
    static integer ichar;
    extern /* Subroutine */ int ofile_(), pname_(), rfile_(), phold_();
    static integer index;
    extern /* Subroutine */ int wfile_();
    extern integer holds_();
    extern /* Subroutine */ int parse_();
    static integer ilmax;
    extern logical enemy_();
    static integer itemp, ilnum, money, iuser, ocost;
    extern integer nuser_();
    static logical parry;
    extern logical streq_();
    static integer restr;
    extern /* Subroutine */ int putin_(), newxy_();
    static integer index1, index2, index3, index4, oldnm1, oldnm2, index5, 
	    index6;
    static logical failed;
    extern /* Subroutine */ int enable_();
    extern integer canhld_();
    extern /* Subroutine */ int addval_(), allcap_();
    static integer indice;
    static logical cansee[52];
    static integer comara[80];
    extern /* Subroutine */ int comand_();
    static integer parara[40], atackr;
    static logical iniflg;
    extern /* Subroutine */ int initdb_();
    static integer disind;
    extern integer findir_();
    static integer iforce, gweigh;
    extern /* Subroutine */ int messag_();
    static integer filesp[13];
    extern /* Subroutine */ int getval_(), update_();
    static integer length;
    extern /* Subroutine */ int curbuf_(), colcur_(), clrscr_(), finwrd_();
    static integer ppnind;
    extern /* Subroutine */ int unlock_();
    static integer player, inplay;
    extern /* Subroutine */ int pcolor_();
    static logical lprivd;
    extern integer isxbit_();
    extern /* Subroutine */ int getnum_();
    extern logical lerror_();
    extern /* Subroutine */ int string_();
    static integer streng;
    extern /* Subroutine */ int getstr_();
    static integer dexter;
    extern /* Subroutine */ int number_(), convrt_(), putval_(), chrout_(), 
	    colstr_();
    static integer runing, ustren, isourc, olndst;
    extern /* Subroutine */ int updscr_();
    static integer olplay;
    extern /* Subroutine */ int usrset_(), cursor_();
    static integer ttyspd, recovr, trecvr, orecvr, iweapn;
    extern /* Subroutine */ int settty_();
    extern integer newdir_();
    extern /* Subroutine */ int takout_();
    static integer wrdptr;
    extern /* Subroutine */ int wrdnum_(), syswho_();
    static integer iquote;
    extern integer iserch_(), weight_();
    extern /* Subroutine */ int datime_();
    static integer numwrn;
    extern /* Subroutine */ int remove_(), bugmsg_();
    static integer quiver;
    extern /* Subroutine */ int select_(), rnfile_(), irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical enemy, iniflg, lprivd, failed, parry, lerror >*/
/*< 	integer comara( 80 ), parara( 40 ), body( 10 ), month(12) >*/
/*< 	integer filesp( 13 ) >*/
/*< 	logical cansee( 52 ), newscr, streq >*/
/*< 	commo >*/
/*< 	data newscr/.true./, imoney/500/, nitem/10/, elevel/25/ >*/
/*< 	data  >*/
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
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call settty( comara, parara, ilen, lprivd, filesp ) >*/
    settty_(comara, parara, &ilen, &lprivd, filesp);
/*< 	call enable >*/
    enable_();
/*< 	call check( iniflg ) >*/
    check_(&iniflg);
/*< 	if( iniflg )  call initdb( comara, parara, filesp ) >*/
    if (iniflg) {
	initdb_(comara, parara, filesp);
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call finwrd( isxbit('disintegrator~'), disind ) >*/
    i__1 = isxbit_("disintegrator~", (ftnlen)14);
    finwrd_(&i__1, &disind);
/*< 	call colcur( 1, 24 ) >*/
    colcur_(&c__1, &c__24);
/*< 	call string(1,'Your name?^E') >*/
    string_(&c__1, "Your name?^E", (ftnlen)12);
/*< 100	call colcur( 12, 24 ) >*/
L100:
    colcur_(&c__12, &c__24);
/*< 	call string(1,'               ^E') >*/
    string_(&c__1, "               ^E", (ftnlen)17);
/*< 	call colcur( 12, 24 ) >*/
    colcur_(&c__12, &c__24);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call getstr(3, comara, 15, ilen ) >*/
    getstr_(&c__3, comara, &c__15, &ilen);
/*< 	if( job(-1) .ne. 0 .and. ilen .gt. 6 ) ilen = 6 >*/
    if (job_(&c_n1) != 0 && ilen > 6) {
	ilen = 6;
    }
/*< 	call colcur( 1, 10 ) >*/
    colcur_(&c__1, &c__10);
/*< 	if( ilen .eq. 0 ) goto 100 >*/
    if (ilen == 0) {
	goto L100;
    }
/*< 	call allcap( comara, 1 ) >*/
    allcap_(comara, &c__1);
/*< 	player = icon(comara(1))-64 >*/
    player = icon_(comara) - 64;
/*< 	if( player.lt.1 .or. player.gt.52 ) goto 100 >*/
    if (player < 1 || player > 52) {
	goto L100;
    }
/*< 	call convrt( comara, ilen, 1, name, 6 ) >*/
    convrt_(comara, &ilen, &c__1, &name__, &c__6);
/*< 	do 300 i = 1, 100 >*/
    for (i__ = 1; i__ <= 100; ++i__) {
/*< 	    call getval(5, 0,1681,  3, i+0, ival ) >*/
	i__1 = i__;
	getval_(&c__5, &c__0, &c__1681, &c__3, &i__1, &ival);
/*< 	    if( streq(ival,name) ) goto 100 >*/
	if (streq_(&ival, &name__)) {
	    goto L100;
	}
/*< 300	continue >*/
/* L300: */
    }
/*< 	call getval(5, 0,1684,  10, player, ival ) >*/
    getval_(&c__5, &c__0, &c__1684, &c__10, &player, &ival);
/*< 	if( ival .ne. 0 ) goto 100 >*/
    if (ival != 0) {
	goto L100;
    }
/*< 	call putval(4, 0,1686,  -10, 1 ) >*/
    putval_(&c__4, &c__0, &c__1686, &c_n10, &c__1);
/*< 	call putval(5, 0,1687,  8, player, 7 ) >*/
    putval_(&c__5, &c__0, &c__1687, &c__8, &player, &c__7);
/*< 	call lock >*/
    lock_();
/*< 	do 350 i = 1, 26 >*/
    for (i__ = 1; i__ <= 26; ++i__) {
/*< 	    call putval(6, 0,1690,  23, player, i+0, 0 ) >*/
	i__1 = i__;
	putval_(&c__6, &c__0, &c__1690, &c__23, &player, &i__1, &c__0);
/*< 350	continue >*/
/* L350: */
    }
/*< 	call putval(6, 0,1692,  7, player, 1, job(0) ) >*/
    i__1 = job_(&c__0);
    putval_(&c__6, &c__0, &c__1692, &c__7, &player, &c__1, &i__1);
/*< 	call putval(6, 0,1693,  7, player, 2, 0 ) >*/
    putval_(&c__6, &c__0, &c__1693, &c__7, &player, &c__2, &c__0);
/*< 	call putval(5, 0,1694,  3, player, name ) >*/
    putval_(&c__5, &c__0, &c__1694, &c__3, &player, &name__);
/*< 	call putval(5, 0,1695,  12, player, player ) >*/
    putval_(&c__5, &c__0, &c__1695, &c__12, &player, &player);
/*< 	inplay = player >*/
    inplay = player;
/*< 	call putval(5, 0,1697,  4, player, 70 ) >*/
    putval_(&c__5, &c__0, &c__1697, &c__4, &player, &c__70);
/*< 	call unlock >*/
    unlock_();
/*< 	call colcur( 1, 23 ) >*/
    colcur_(&c__1, &c__23);
/*< 	call  >*/
    string_(&c__1, "How many extra points do you wish to allocate to strengt\
h?^E", (ftnlen)60);
/*< 500	call colcur( 60, 23 ) >*/
L500:
    colcur_(&c__60, &c__23);
/*< 	call string(1,'          ^E') >*/
    string_(&c__1, "          ^E", (ftnlen)12);
/*< 	call colcur( 60, 23 ) >*/
    colcur_(&c__60, &c__23);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call getnum(3, 10, diff, 10 ) >*/
    getnum_(&c__3, &c__10, &diff, &c__10);
/*< 	if( diff .lt. 0 .or. diff .gt. 8 ) goto 500 >*/
    if (diff < 0 || diff > 8) {
	goto L500;
    }
/*< 	ustren = diff + 8 >*/
    ustren = diff + 8;
/*< 	streng = ustren >*/
    streng = ustren;
/*< 	udex = 24 - ustren >*/
    udex = 24 - ustren;
/*< 	dexter = udex >*/
    dexter = udex;
/*< 	call putval(5, 0,1712,  14, player, 6*streng + 70 ) >*/
    i__1 = streng * 6 + 70;
    putval_(&c__5, &c__0, &c__1712, &c__14, &player, &i__1);
/*< 600	do 700 i = 1, 80 >*/
L600:
    for (i__ = 1; i__ <= 80; ++i__) {
/*< 	    comara( i ) = 0 >*/
	comara[i__ - 1] = 0;
/*< 700	continue >*/
/* L700: */
    }
/*< 	call ppn( i, ipn1 ) >*/
    ppn_(&i__, &ipn1);
/*< 	do 800 ppnind = 1, 100 >*/
    for (ppnind = 1; ppnind <= 100; ++ppnind) {
/*< 	    call getval(6, 0,1718,  22, ppnind+0, 1, ipn2 ) >*/
	i__1 = ppnind;
	getval_(&c__6, &c__0, &c__1718, &c__22, &i__1, &c__1, &ipn2);
/*< 	    if( ipn2 .eq. ipn1 .or. ipn2 .eq. 0 ) goto 900 >*/
	if (ipn2 == ipn1 || ipn2 == 0) {
	    goto L900;
	}
/*< 800	continue >*/
/* L800: */
    }
/*< 900	call putval(4, 0,1721,  -21, ipn1 ) >*/
L900:
    putval_(&c__4, &c__0, &c__1721, &c_n21, &ipn1);
/*< 	if( ipn2 .eq. 0 )  call putval(6, 0,1722,  22, ppnind+0, 2, imoney ) >*/
    if (ipn2 == 0) {
	i__1 = ppnind;
	putval_(&c__6, &c__0, &c__1722, &c__22, &i__1, &c__2, &imoney);
    }
/*< 1000	do 1200 itemp = 1, 80 >*/
L1000:
    for (itemp = 1; itemp <= 80; ++itemp) {
/*< 	    i = itemp >*/
	i__ = itemp;
/*< 	    call getval(5, 0,1725,  11, i, index1 ) >*/
	getval_(&c__5, &c__0, &c__1725, &c__11, &i__, &index1);
/* 	    IF( (INDEX1 .EQ. 0) .XOR. (COMARA( I ) .NE. 0) ) GOTO 1200 */
/*< 	    call colcur( ((i-1)/20)*20+1, 22-mod((i-1),20) ) >*/
	i__1 = (i__ - 1) / 20 * 20 + 1;
	i__2 = 22 - (i__ - 1) % 20;
	colcur_(&i__1, &i__2);
/*< 	    if( index1 .eq. 0 ) goto 1100 >*/
	if (index1 == 0) {
	    goto L1100;
	}
/* 	    CALL GETVAL(5, 0,1729,  12, INDEX1, INDEX2 ) */
/*< 	    call number(2, i, 2 ) >*/
	number_(&c__2, &i__, &c__2);
/* 	    CALL NUMBER(2, WEIGHT( INDEX1 ), 3 ) */
/*< 	    call string(1,' $^E') >*/
	string_(&c__1, " $^E", (ftnlen)4);
/*< 	    call number(2, cost( index1 ), 3 ) >*/
	i__1 = cost_(&index1);
	number_(&c__2, &i__1, &c__3);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call pname( index1, -17 ) >*/
	pname_(&index1, &c_n17);
/*< 	    comara( i ) = 1 >*/
	comara[i__ - 1] = 1;
/*< 	    goto 1200 >*/
	goto L1200;
/*< 1100	    comara( i ) = 0 >*/
L1100:
	comara[i__ - 1] = 0;
/*< 	    call string(1,'                 ^E') >*/
	string_(&c__1, "                 ^E", (ftnlen)19);
/*< 1200	continue >*/
L1200:
	;
    }
/*< 	call getval(6, 0,1743,  22, ppnind, 2, money ) >*/
    getval_(&c__6, &c__0, &c__1743, &c__22, &ppnind, &c__2, &money);
/*< 	if( money .eq. 0 .or. nitem .eq. 0 ) goto 1400 >*/
    if (money == 0 || nitem == 0) {
	goto L1400;
    }
/*< 	call colcur( 1, 2 ) >*/
    colcur_(&c__1, &c__2);
/*< 	call  >*/
    string_(&c__1, "Enter number of item you want (-1 to stop):            ^\
M^J$^E", (ftnlen)62);
/*< 	call getval(6, 0,1748,  22, ppnind, 2, money ) >*/
    getval_(&c__6, &c__0, &c__1748, &c__22, &ppnind, &c__2, &money);
/*< 	call number(1, money ) >*/
    number_(&c__1, &money);
/*< 	call string(1,' left.  Can carry ^E') >*/
    string_(&c__1, " left.  Can carry ^E", (ftnlen)20);
/*< 	call number(1, canhld( player ) ) >*/
    i__1 = canhld_(&player);
    number_(&c__1, &i__1);
/*< 	call string(1,' Kilogram(s) in ^E') >*/
    string_(&c__1, " Kilogram(s) in ^E", (ftnlen)18);
/*< 	call number(1, nitem ) >*/
    number_(&c__1, &nitem);
/*< 	call string(1,' item(s).       ^E') >*/
    string_(&c__1, " item(s).       ^E", (ftnlen)18);
/*< 	call colcur( 45, 2 ) >*/
    colcur_(&c__45, &c__2);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call getnum(3, 10, item, 10 ) >*/
    getnum_(&c__3, &c__10, &item, &c__10);
/*< 	call colcur( 1, 10 ) >*/
    colcur_(&c__1, &c__10);
/*< 	if( item .eq. -1 ) goto 1400 >*/
    if (item == -1) {
	goto L1400;
    }
/*< 	if( item .eq. 0 ) goto 1000 >*/
    if (item == 0) {
	goto L1000;
    }
/*< 	if( item .lt. 1 .or. item .gt. 80 ) goto 1300 >*/
    if (item < 1 || item > 80) {
	goto L1300;
    }
/*< 	call getval(5, 0,1762,  11, item, index1 ) >*/
    getval_(&c__5, &c__0, &c__1762, &c__11, &item, &index1);
/*< 	if( index1 .eq. 0 ) goto 1300 >*/
    if (index1 == 0) {
	goto L1300;
    }
/*< 	i = cost( index1 ) >*/
    i__ = cost_(&index1);
/*< 	call getval(6, 0,1765,  22, ppnind, 2, money ) >*/
    getval_(&c__6, &c__0, &c__1765, &c__22, &ppnind, &c__2, &money);
/*< 	if( money .lt. i ) goto 1300 >*/
    if (money < i__) {
	goto L1300;
    }
/*< 	call phold( index1, -player, failed ) >*/
    i__1 = -player;
    phold_(&index1, &i__1, &failed);
/*< 	if( failed ) goto 1300 >*/
    if (failed) {
	goto L1300;
    }
/*< 	call update(0) >*/
    update_(&c__0);
/*< 	money = money - i >*/
    money -= i__;
/*< 	call update(0) >*/
    update_(&c__0);
/*< 	call putval(6, 0,1772,  22, ppnind, 2, money ) >*/
    putval_(&c__6, &c__0, &c__1772, &c__22, &ppnind, &c__2, &money);
/*< 	call update(0) >*/
    update_(&c__0);
/*< 	call putval(5, 0,1774,  11, item, 0 ) >*/
    putval_(&c__5, &c__0, &c__1774, &c__11, &item, &c__0);
/*< 	call update(0) >*/
    update_(&c__0);
/*< 	nitem = nitem - 1 >*/
    --nitem;
/*< 	call update(0) >*/
    update_(&c__0);
/*< 	goto 1000 >*/
    goto L1000;
/*< 1300	call clrscr >*/
L1300:
    clrscr_();
/*< 	call colcur( 45, 2 ) >*/
    colcur_(&c__45, &c__2);
/*< 	call string(1,'* Invalid *^E') >*/
    string_(&c__1, "* Invalid *^E", (ftnlen)13);
/*< 	goto 600 >*/
    goto L600;
/*< 1400	call putval(6, 0,1785,  22, ppnind, 2, money ) >*/
L1400:
    putval_(&c__6, &c__0, &c__1785, &c__22, &ppnind, &c__2, &money);
/*< 	x = iran( 50 ) >*/
    x = iran_(&c__50);
/*< 	y = iran( 50 ) >*/
    y = iran_(&c__50);
/*< 	z = 4 >*/
    z__ = 4;
/*< 	call getval(7, 0,1789,  1, x, y, z, ival ) >*/
    getval_(&c__7, &c__0, &c__1789, &c__1, &x, &y, &z__, &ival);
/*< 	if( ival .eq. 0 ) goto 1400 >*/
    if (ival == 0) {
	goto L1400;
    }
/*< 	call putval(5, 0,1791,  13, player, money ) >*/
    putval_(&c__5, &c__0, &c__1791, &c__13, &player, &money);
/*< 	dir = iran( 6 ) >*/
    dir = iran_(&c__6);
/*< 	call putval(5, 0,1793,  8, player, dir ) >*/
    putval_(&c__5, &c__0, &c__1793, &c__8, &player, &dir);
/*< 	call drop( failed, .true., x, y, z, player ) >*/
    drop_(&failed, &c_true, &x, &y, &z__, &player);
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
/*< 	call usrset( 536, ttyspd ) >*/
    usrset_(&c__536, &ttyspd);
/*< 	goto 1600 >*/
    goto L1600;
/* **************************************************************** */
/* ****** GAME LOOP *********************************************** */
/* **************************************************************** */
/*< 1500	call messag(icllbl,'Ok.^E') >*/
L1500:
    messag_(&col_1.icllbl, "Ok.^E", (ftnlen)5);
/*< 1600	if(100*igtab(44,9)/igtab(40,9).le.85.or.lprivd) goto 1625 >*/
L1600:
    if (igtab_(&c__44, &c__9) * 100 / igtab_(&c__40, &c__9) <= 85 || lprivd) {
	goto L1625;
    }
/*< 	call  >*/
    messag_(&col_1.iclpur, "It is over styxline.  The game must cease.^M^J^E",
	     (ftnlen)48);
/*< 	call cease( x, y, z, player ) >*/
    cease_(&x, &y, &z__, &player);
/*< 1625	call getval(5, 0,1814,  20, 75, ival ) >*/
L1625:
    getval_(&c__5, &c__0, &c__1814, &c__20, &c__75, &ival);
/*< 	if( ival .eq. 0 ) goto 1650 >*/
    if (ival == 0) {
	goto L1650;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call colcur( 5, 10 ) >*/
    colcur_(&c__5, &c__10);
/*< 	call colstr(iclred,'^G^GYou have failed. ^E') >*/
    colstr_(&col_1.iclred, "^G^GYou have failed. ^E", (ftnlen)23);
/*< 	call pname( ival, -17 ) >*/
    pname_(&ival, &c_n17);
/*< 	call string(1,' Has left the cave with the disintegrator.^M^J^E') >*/
    string_(&c__1, " Has left the cave with the disintegrator.^M^J^E", (
	    ftnlen)48);
/*< 	call cease( x, y, z, player ) >*/
    cease_(&x, &y, &z__, &player);
/*< 1650	call usrset( 1048, ttyspd ) >*/
L1650:
    usrset_(&c__1048, &ttyspd);
/*< 	call usrset( 1049, ttyspd ) >*/
    usrset_(&c__1049, &ttyspd);
/*< 	call usrset( 1026, 1 ) >*/
    usrset_(&c__1026, &c__1);
/*< 	runing = 0 >*/
    runing = 0;
/*< 	call putval(6, 0,1827,  19, player, 1, x ) >*/
    putval_(&c__6, &c__0, &c__1827, &c__19, &player, &c__1, &x);
/*< 	call putval(6, 0,1828,  19, player, 2, y ) >*/
    putval_(&c__6, &c__0, &c__1828, &c__19, &player, &c__2, &y);
/*< 	call putval(6, 0,1829,  19, player, 3, z ) >*/
    putval_(&c__6, &c__0, &c__1829, &c__19, &player, &c__3, &z__);
/*< 	call putval(5, 0,1830,  14, player, 6*streng + 70 ) >*/
    i__1 = streng * 6 + 70;
    putval_(&c__5, &c__0, &c__1830, &c__14, &player, &i__1);
/*< 	call getval(6, 0,1831,  7, player, 2, ival ) >*/
    getval_(&c__6, &c__0, &c__1831, &c__7, &player, &c__2, &ival);
/*< 	if( ival .lt. elevel ) goto 1675 >*/
    if (ival < elevel) {
	goto L1675;
    }
/*< 	elevel = 2*elevel >*/
    elevel <<= 1;
/*< 	ival = iran(2) - 1 >*/
    ival = iran_(&c__2) - 1;
/*< 	streng = streng + ival >*/
    streng += ival;
/*< 	ustren = ustren + ival >*/
    ustren += ival;
/*< 	udex = udex + 1 - ival >*/
    udex = udex + 1 - ival;
/*< 1675	if( dir .ne. 0 ) goto 1700 >*/
L1675:
    if (dir != 0) {
	goto L1700;
    }
/*< 	restr = restr + 1 >*/
    ++restr;
/*< 	if( mod( restr, 25 ) .eq. 0 )  streng = streng + 1 >*/
    if (restr % 25 == 0) {
	++streng;
    }
/*< 	if( streng .gt. ustren )  streng = ustren >*/
    if (streng > ustren) {
	streng = ustren;
    }
/* ****** CHECK FOR ANY MESSAGES ********************************** */
/*< 1700	call getval(5, 0,1845,  20, 1, isourc ) >*/
L1700:
    getval_(&c__5, &c__0, &c__1845, &c__20, &c__1, &isourc);
/*< 	if( isourc .eq. 0 ) goto 2101 >*/
    if (isourc == 0) {
	goto L2101;
    }
/*< 	call getval(5, 0,1847,  20, 4, iuser ) >*/
    getval_(&c__5, &c__0, &c__1847, &c__20, &c__4, &iuser);
/*< 	if( iuser .lt. nuser(0) ) goto 1800 >*/
    if (iuser < nuser_(&c__0)) {
	goto L1800;
    }
/*< 	call putval(5, 0,1849,  20, 1, 0 ) >*/
    putval_(&c__5, &c__0, &c__1849, &c__20, &c__1, &c__0);
/*< 	goto 2101 >*/
    goto L2101;
/*< 1800	call addval(4, 0,1851,  -20, 1 ) >*/
L1800:
    addval_(&c__4, &c__0, &c__1851, &c_n20, &c__1);
/*< 	if( isourc .eq. player ) goto 2101 >*/
    if (isourc == player) {
	goto L2101;
    }
/*< 	call getval(6, 0,1853,  19, isourc, 3, nz ) >*/
    getval_(&c__6, &c__0, &c__1853, &c__19, &isourc, &c__3, &nz);
/*< 	if( nz .ne. z ) goto 2101 >*/
    if (nz != z__) {
	goto L2101;
    }
/*< 	call getval(6, 0,1855,  19, isourc, 1, nx ) >*/
    getval_(&c__6, &c__0, &c__1855, &c__19, &isourc, &c__1, &nx);
/*< 	call getval(6, 0,1856,  19, isourc, 2, ny ) >*/
    getval_(&c__6, &c__0, &c__1856, &c__19, &isourc, &c__2, &ny);
/*< 	dfac = sqrt( (x-nx+0.0)**2 + (y-ny+0.0)**2 ) >*/
/* Computing 2nd power */
    r__1 = x - nx + (float)0.;
/* Computing 2nd power */
    r__2 = y - ny + (float)0.;
    dfac = sqrt(r__1 * r__1 + r__2 * r__2);
/*< 	call getval(5, 0,1858,  20, 2, vol ) >*/
    getval_(&c__5, &c__0, &c__1858, &c__20, &c__2, &vol);
/*< 	vol = 20*(6**vol) / (dfac+1) >*/
    vol = pow_ii(&c__6, &vol) * 20 / (dfac + 1);
/*< 	if( vol .lt. 2 ) goto 2101 >*/
    if (vol < 2) {
	goto L2101;
    }
/*< 	vdir = 0 >*/
    vdir = 0;
/*< 	if( dfac .ne. 0 )  vdir = findir( x, y, nx, ny ) >*/
    if (dfac != 0) {
	vdir = findir_(&x, &y, &nx, &ny);
    }
/*< 	if( vol .gt. 10 ) goto 1900 >*/
    if (vol > 10) {
	goto L1900;
    }
/*< 	call messag(iclwhi,'You hear a voice^E') >*/
    messag_(&col_1.iclwhi, "You hear a voice^E", (ftnlen)18);
/*< 	if( vol .lt. 5 )  call chrout(46) >*/
    if (vol < 5) {
	chrout_(&c__46);
    }
/*< 	if( vol .lt. 5 ) goto 2101 >*/
    if (vol < 5) {
	goto L2101;
    }
/*< 	call string(1,' from direction ^E') >*/
    string_(&c__1, " from direction ^E", (ftnlen)18);
/*< 	call number(1, vdir ) >*/
    number_(&c__1, &vdir);
/*< 	call chrout(46) >*/
    chrout_(&c__46);
/*< 	goto 2101 >*/
    goto L2101;
/*< 1900	if( vol .ge. 15 ) goto 2000 >*/
L1900:
    if (vol >= 15) {
	goto L2000;
    }
/*< 	call messag(iclwhi,'You hear ^E') >*/
    messag_(&col_1.iclwhi, "You hear ^E", (ftnlen)11);
/*< 	call pname( isourc, -17 ) >*/
    pname_(&isourc, &c_n17);
/*< 	call string(1,' from direction ^E') >*/
    string_(&c__1, " from direction ^E", (ftnlen)18);
/*< 	call number(1, vdir ) >*/
    number_(&c__1, &vdir);
/*< 	call chrout(46) >*/
    chrout_(&c__46);
/*< 	goto 2101 >*/
    goto L2101;
/*< 2000	call messag(iclwhi,'^G^E') >*/
L2000:
    messag_(&col_1.iclwhi, "^G^E", (ftnlen)4);
/*< 	call pname( isourc, -17 ) >*/
    pname_(&isourc, &c_n17);
/*< 	call chrout(40) >*/
    chrout_(&c__40);
/*< 	call number(1, vdir ) >*/
    number_(&c__1, &vdir);
/*< 	call string(1,'): ^E') >*/
    string_(&c__1, "): ^E", (ftnlen)5);
/*< 	call getval(5, 0,1883,  20, 3, length ) >*/
    getval_(&c__5, &c__0, &c__1883, &c__20, &c__3, &length);
/*< 	do 2100 i = 1, length >*/
    i__1 = length;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call getval(5, 0,1885,  20, i+4, ival ) >*/
	i__2 = i__ + 4;
	getval_(&c__5, &c__0, &c__1885, &c__20, &i__2, &ival);
/*< 	    call chrout( ival ) >*/
	chrout_(&ival);
/*< 2100	continue >*/
/* L2100: */
    }
/*< 2101	continue >*/
L2101:
/* ******	HAS ANYONE TOUCHED THE DISI SINCE LAST CLICK ************* */
/*< 	call getval(5, 0,1892,  33, 1, ival ) >*/
    getval_(&c__5, &c__0, &c__1892, &c__33, &c__1, &ival);
/*< 	if( ival .eq. olndst ) goto 2110 >*/
    if (ival == olndst) {
	goto L2110;
    }
/*< 	call messag(iclred,'^GThe disintegrator has been picked up.^E') >*/
    messag_(&col_1.iclred, "^GThe disintegrator has been picked up.^E", (
	    ftnlen)41);
/*< 	olndst = ival >*/
    olndst = ival;
/* ****** WHAT DID THE OTHER GUY DO TO OUR ATTACK ***************** */
/*< 2110	call getval(5, 0,1899,  21, player, ival ) >*/
L2110:
    getval_(&c__5, &c__0, &c__1899, &c__21, &player, &ival);
/*< 	if( ival .eq. 0 ) goto 2150 >*/
    if (ival == 0) {
	goto L2150;
    }
/*< 	call putval(4, 0,1901,  -21, 0 ) >*/
    putval_(&c__4, &c__0, &c__1901, &c_n21, &c__0);
/*< 	if( ival .eq. 1 ) call messag(iclred,'You hit him on the head.^E') >*/
    if (ival == 1) {
	messag_(&col_1.iclred, "You hit him on the head.^E", (ftnlen)26);
    }
/*< 	if( ival .eq. 2 ) call messag(icllbl,'You hit him.^E') >*/
    if (ival == 2) {
	messag_(&col_1.icllbl, "You hit him.^E", (ftnlen)14);
    }
/*< 	if( ival .eq. 3 ) call messag(iclwhi,'He parried.^E') >*/
    if (ival == 3) {
	messag_(&col_1.iclwhi, "He parried.^E", (ftnlen)13);
    }
/*< 	if( i >*/
    if (ival == 4) {
	messag_(&col_1.iclwhi, "His shield blocked the blow.^E", (ftnlen)30);
    }
/*< 	if( i >*/
    if (ival == 5) {
	messag_(&col_1.icllbl, "He parried but he lost his weapon.^E", (
		ftnlen)36);
    }
/*< 2150	call getval(6, 0,1910,  6, player, 4, ival ) >*/
L2150:
    getval_(&c__6, &c__0, &c__1910, &c__6, &player, &c__4, &ival);
/*< 	if( ival .eq. 0 ) goto 2200 >*/
    if (ival == 0) {
	goto L2200;
    }
/*< 	call putval(4, 0,1912,  -6, 0 ) >*/
    putval_(&c__4, &c__0, &c__1912, &c_n6, &c__0);
/*< 	if( ival .le. 26 )call messag(iclwhi,'^G^E') >*/
    if (ival <= 26) {
	messag_(&col_1.iclwhi, "^G^E", (ftnlen)4);
    }
/*< 	if( ival .gt. 26 )call messag(icllbl,'^GThe ^E') >*/
    if (ival > 26) {
	messag_(&col_1.icllbl, "^GThe ^E", (ftnlen)8);
    }
/*< 	call pname( ival, -17 ) >*/
    pname_(&ival, &c_n17);
/*< 	call string(1,' is dead.^E') >*/
    string_(&c__1, " is dead.^E", (ftnlen)11);
/* ****** FIND OUT PLAYER'S CURRENT DEXTERITY ********************* */
/*< 2200	dexter = udex >*/
L2200:
    dexter = udex;
/*< 	call getval(5, 0,1922,  5, player, index1 ) >*/
    getval_(&c__5, &c__0, &c__1922, &c__5, &player, &index1);
/*< 	if( index1 .eq. 0 ) goto 2400 >*/
    if (index1 == 0) {
	goto L2400;
    }
/*< 	call getval(6, 0,1924,  2, index1, 3, index2 ) >*/
    getval_(&c__6, &c__0, &c__1924, &c__2, &index1, &c__3, &index2);
/*< 	if( index2 .ne. 0 )  dexter = dexter - 1 >*/
    if (index2 != 0) {
	--dexter;
    }
/*< 	call getval(6, 0,1926,  2, index1, 2, index2 ) >*/
    getval_(&c__6, &c__0, &c__1926, &c__2, &index1, &c__2, &index2);
/*< 	if( index2 .eq. 0 ) goto 2300 >*/
    if (index2 == 0) {
	goto L2300;
    }
/*< 	call getval(5, 0,1928,  12, index2, index3 ) >*/
    getval_(&c__5, &c__0, &c__1928, &c__12, &index2, &index3);
/*< 	call getval(5, 0,1929,  18, index3, imod ) >*/
    getval_(&c__5, &c__0, &c__1929, &c__18, &index3, &imod);
/*< 	dexter = dexter - imod >*/
    dexter -= imod;
/*< 2300	call getval(6, 0,1931,  2, index1, 5, index2 ) >*/
L2300:
    getval_(&c__6, &c__0, &c__1931, &c__2, &index1, &c__5, &index2);
/*< 	if( index2 .eq. 0 ) goto 2400 >*/
    if (index2 == 0) {
	goto L2400;
    }
/*< 	call getval(5, 0,1933,  12, index2, index3 ) >*/
    getval_(&c__5, &c__0, &c__1933, &c__12, &index2, &index3);
/*< 	call getval(5, 0,1934,  18, index3, imod ) >*/
    getval_(&c__5, &c__0, &c__1934, &c__18, &index3, &imod);
/*< 	dexter = dexter - imod/2 >*/
    dexter -= imod / 2;
/* ****** UPDATE THE SCREEN *************************************** */
/*< 2400	call updscr( player, newscr, streng, dexter, cansee, disind ) >*/
L2400:
    updscr_(&player, &newscr, &streng, &dexter, cansee, &disind);
/*< 	if( .not. cansee(inplay) )  inplay = player >*/
    if (! cansee[inplay - 1]) {
	inplay = player;
    }
/*< 	if( inplay .eq. olplay .and. .not. newscr ) goto 2500 >*/
    if (inplay == olplay && ! newscr) {
	goto L2500;
    }
/*< 	call colcur( 62, 24 ) >*/
    colcur_(&c__62, &c__24);
/*< 	call pname( inplay, 4 ) >*/
    pname_(&inplay, &c__4);
/*< 	olplay = inplay >*/
    olplay = inplay;
/*< 2500	call getval(5, 0,1945,  5, inplay, index1 ) >*/
L2500:
    getval_(&c__5, &c__0, &c__1945, &c__5, &inplay, &index1);
/*< 	do 2600 itemp = 1, 10 >*/
    for (itemp = 1; itemp <= 10; ++itemp) {
/*< 	    index2 = itemp >*/
	index2 = itemp;
/*< 	    if( index1 .eq. 0 )  index3 = 0 >*/
	if (index1 == 0) {
	    index3 = 0;
	}
/*< 	    if( index1 .ne. 0 )call getval(6, 0,1949,  2, index1, index2, index3 ) >*/
	if (index1 != 0) {
	    getval_(&c__6, &c__0, &c__1949, &c__2, &index1, &index2, &index3);
	}
/*< 	    if( index3 .eq. body(index2) .and. .not. newscr ) goto 2600 >*/
	if (index3 == body[index2 - 1] && ! newscr) {
	    goto L2600;
	}
/*< 	    call colcur( 67, 24-index2 ) >*/
	i__1 = 24 - index2;
	colcur_(&c__67, &i__1);
/*< 	    call irepeat(32,13) >*/
	irepeat_(&c__32, &c__13);
/*< 	    call cursor( 67, 24-index2 ) >*/
	i__1 = 24 - index2;
	cursor_(&c__67, &i__1);
/*< 	    body( index2 ) = index3 >*/
	body[index2 - 1] = index3;
/*< 	    if( index3 .ne. 0 ) goto 2550 >*/
	if (index3 != 0) {
	    goto L2550;
	}
/*< 	    i >*/
	if (index2 <= 2 || index2 == 4 || index2 == 5) {
	    pcolor_(&col_1.iclred);
	}
/*< 	    call string(1,'Nothing^E') >*/
	string_(&c__1, "Nothing^E", (ftnlen)9);
/*< 	    call pcolor( iclwhi ) >*/
	pcolor_(&col_1.iclwhi);
/*< 	    goto 2600 >*/
	goto L2600;
/*< 2550	    if( index3 .eq. 511 ) call colstr(iclgre,'Oddness^E') >*/
L2550:
	if (index3 == 511) {
	    colstr_(&col_1.iclgre, "Oddness^E", (ftnlen)9);
	}
/*< 	    if( index3 .eq. 511 ) goto 2600 >*/
	if (index3 == 511) {
	    goto L2600;
	}
/*< 	    call getval(5, 0,1963,  12, index3, index4 ) >*/
	getval_(&c__5, &c__0, &c__1963, &c__12, &index3, &index4);
/*< 	    call getval(5, 0,1964,  13, index4, ocost ) >*/
	getval_(&c__5, &c__0, &c__1964, &c__13, &index4, &ocost);
/*< 	    if( ocost .le. 500 .and. index4 .ne. disind ) goto 2560 >*/
	if (ocost <= 500 && index4 != disind) {
	    goto L2560;
	}
/*< 	    call pback( iclyel ) >*/
	pback_(&col_1.iclyel);
/*< 	    call pcolor( icldbl ) >*/
	pcolor_(&col_1.icldbl);
/*< 2560	    call pname( index3, -17 ) >*/
L2560:
	pname_(&index3, &c_n17);
/*< 	    call pback( iclbla ) >*/
	pback_(&col_1.iclbla);
/*< 	    call pcolor( iclwhi ) >*/
	pcolor_(&col_1.iclwhi);
/*< 2600	continue >*/
L2600:
	;
    }
/*< 	call putval(5, 0,1972,  32, player, recovr ) >*/
    putval_(&c__5, &c__0, &c__1972, &c__32, &player, &recovr);
/*< 	call getval(5, 0,1973,  32, inplay, trecvr ) >*/
    getval_(&c__5, &c__0, &c__1973, &c__32, &inplay, &trecvr);
/*< 	if( trecvr .eq. orecvr ) goto 2700 >*/
    if (trecvr == orecvr) {
	goto L2700;
    }
/*< 	call colcur( 55, 10 ) >*/
    colcur_(&c__55, &c__10);
/*< 	if( trecvr .eq. 0 )  call string(1,'             ^E') >*/
    if (trecvr == 0) {
	string_(&c__1, "             ^E", (ftnlen)15);
    }
/*< 	if( trecvr .gt. 0 )  call string(1,'Recovery: ^E') >*/
    if (trecvr > 0) {
	string_(&c__1, "Recovery: ^E", (ftnlen)12);
    }
/*< 	if( trecvr .gt. 0 )  call number(2, trecvr, 3 ) >*/
    if (trecvr > 0) {
	number_(&c__2, &trecvr, &c__3);
    }
/*< 	orecvr = trecvr >*/
    orecvr = trecvr;
/*< 2700	newscr = .false. >*/
L2700:
    newscr = FALSE_;
/* ****** CHECK TO SEE IF HE IS BEING ATTACKED ******************** */
/*< 	call getval(6, 0,1984,  6, player, 1, atackr ) >*/
    getval_(&c__6, &c__0, &c__1984, &c__6, &player, &c__1, &atackr);
/*< 	if( atackr .eq. 0 ) goto 3500 >*/
    if (atackr == 0) {
	goto L3500;
    }
/*< 	call putval(4, 0,1986,  -6, 0 ) >*/
    putval_(&c__4, &c__0, &c__1986, &c_n6, &c__0);
/*< 	if( atackr .ne. 1023 ) goto 2710 >*/
    if (atackr != 1023) {
	goto L2710;
    }
/*< 	call  >*/
    messag_(&col_1.iclred, "You have been disintegrated.  You are dead.^E", (
	    ftnlen)45);
/*< 	call cease( x, y, z, player ) >*/
    cease_(&x, &y, &z__, &player);
/*< 2710	call getval(6, 0,1991,  6, player, 2, iweapn ) >*/
L2710:
    getval_(&c__6, &c__0, &c__1991, &c__6, &player, &c__2, &iweapn);
/*< 	if( iweapn .gt. 511 ) goto 2760 >*/
    if (iweapn > 511) {
	goto L2760;
    }
/*< 	call messag(iclred,'^E') >*/
    messag_(&col_1.iclred, "^E", (ftnlen)2);
/*< 	call pname( atackr, -17 ) >*/
    pname_(&atackr, &c_n17);
/*< 	if( iweapn .eq. 0 ) goto 2750 >*/
    if (iweapn == 0) {
	goto L2750;
    }
/*< 	call string(1,' attacks with ^E') >*/
    string_(&c__1, " attacks with ^E", (ftnlen)16);
/*< 	call pname( iweapn, -17 ) >*/
    pname_(&iweapn, &c_n17);
/*< 	goto 2800 >*/
    goto L2800;
/*< 2750	call string(1,' hits you^E') >*/
L2750:
    string_(&c__1, " hits you^E", (ftnlen)11);
/*< 	goto 2800 >*/
    goto L2800;
/*< 2760	call messag(iclred,'The ^E') >*/
L2760:
    messag_(&col_1.iclred, "The ^E", (ftnlen)6);
/*< 	call pname( atackr, -17 ) >*/
    pname_(&atackr, &c_n17);
/*< 	if( iweapn .eq. 512 ) call string(1,' bites you^E') >*/
    if (iweapn == 512) {
	string_(&c__1, " bites you^E", (ftnlen)12);
    }
/*< 	if( iweapn .eq. 513 ) call string(1,' claws you^E') >*/
    if (iweapn == 513) {
	string_(&c__1, " claws you^E", (ftnlen)12);
    }
/*< 	if( iweapn .eq. 514 ) call string(1,' burns you^E') >*/
    if (iweapn == 514) {
	string_(&c__1, " burns you^E", (ftnlen)12);
    }
/*< 	if( iweapn .eq. 515 ) call string(1,' hits you^E') >*/
    if (iweapn == 515) {
	string_(&c__1, " hits you^E", (ftnlen)11);
    }
/*< 	if( iweapn .eq. 516 ) call string(1,' smothers you^E') >*/
    if (iweapn == 516) {
	string_(&c__1, " smothers you^E", (ftnlen)15);
    }
/* ****** CAN I PARRY IT? ***************************************** */
/*< 2800	call getval(6, 0,2013,  6, player, 3, iforce ) >*/
L2800:
    getval_(&c__6, &c__0, &c__2013, &c__6, &player, &c__3, &iforce);
/*< 	call getval(5, 0,2014,  5, player, index1 ) >*/
    getval_(&c__5, &c__0, &c__2014, &c__5, &player, &index1);
/*< 	if( i >*/
    if (iweapn == 0 || ! parry || index1 == 0 || recovr > 0) {
	goto L3200;
    }
/*< 	call getval(6, 0,2017,  19, atackr, 1, ax ) >*/
    getval_(&c__6, &c__0, &c__2017, &c__19, &atackr, &c__1, &ax);
/*< 	call getval(6, 0,2018,  19, atackr, 2, ay ) >*/
    getval_(&c__6, &c__0, &c__2018, &c__19, &atackr, &c__2, &ay);
/*< 	adir = findir( x, y, ax, ay ) >*/
    adir = findir_(&x, &y, &ax, &ay);
/*< 	if( a >*/
    if (adir != dir && adir != newdir_(&dir, &c__1) && adir != newdir_(&dir, &
	    c_n1)) {
	goto L3200;
    }
/*< 	call getval(6, 0,2022,  2, index1, 4, index2 ) >*/
    getval_(&c__6, &c__0, &c__2022, &c__2, &index1, &c__4, &index2);
/*< 	if( index2 .eq. 0 ) goto 3000 >*/
    if (index2 == 0) {
	goto L3000;
    }
/*< 	recovr = max0( 18 - dexter, 0 ) >*/
/* Computing MAX */
    i__1 = 18 - dexter;
    recovr = max(i__1,0);
/*< 	dice1 = 0 >*/
    dice1 = 0;
/*< 	do 2900 i = 1, 3 >*/
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    dice1 = dice1 + iran(6) >*/
	dice1 += iran_(&c__6);
/*< 2900	continue >*/
/* L2900: */
    }
/*< 	if( dice1 .gt. dexter ) goto 3000 >*/
    if (dice1 > dexter) {
	goto L3000;
    }
/*< 	call putval(5, 0,2030,  21, atackr, 3 ) >*/
    putval_(&c__5, &c__0, &c__2030, &c__21, &atackr, &c__3);
/*< 	call getval(5, 0,2031,  12, index2, index3 ) >*/
    getval_(&c__5, &c__0, &c__2031, &c__12, &index2, &index3);
/*< 	call getval(5, 0,2032,  17, index3, idam ) >*/
    getval_(&c__5, &c__0, &c__2032, &c__17, &index3, &idam);
/*< 	idam = iforce - (6*(idam/10) + mod( idam,10 ) - 5) >*/
    idam = iforce - (idam / 10 * 6 + idam % 10 - 5);
/*< 	if( idam .lt. 0 .or. idam .gt. (iran(6)+iran(6)) ) goto 3400 >*/
    if (idam < 0 || idam > iran_(&c__6) + iran_(&c__6)) {
	goto L3400;
    }
/*< 	call putval(5, 0,2035,  21, atackr, 5 ) >*/
    putval_(&c__5, &c__0, &c__2035, &c__21, &atackr, &c__5);
/*< 	ival = iran( 2 ) >*/
    ival = iran_(&c__2);
/*< 	if( ival .eq. 1 )  call string(1,'.  Your weapon broke^E') >*/
    if (ival == 1) {
	string_(&c__1, ".  Your weapon broke^E", (ftnlen)22);
    }
/*< 	if( ival .eq. 2 )  call string(1,'.  You dropped your weapon^E') >*/
    if (ival == 2) {
	string_(&c__1, ".  You dropped your weapon^E", (ftnlen)28);
    }
/*< 	call takout( index2, player, failed ) >*/
    takout_(&index2, &player, &failed);
/*< 	call getval(5, 0,2040,  4, index2, gweigh ) >*/
    getval_(&c__5, &c__0, &c__2040, &c__4, &index2, &gweigh);
/*< 	if( ival .eq. 1 )call putval(5, 0,2041,  10, index2, 0 ) >*/
    if (ival == 1) {
	putval_(&c__5, &c__0, &c__2041, &c__10, &index2, &c__0);
    }
/*< 	goto 3400 >*/
    goto L3400;
/* ****** HOW MUCH DOES SHIELD DETRACT FROM BLOW? ***************** */
/*< 3000	call getval(6, 0,2046,  2, index1, 5, index2 ) >*/
L3000:
    getval_(&c__6, &c__0, &c__2046, &c__2, &index1, &c__5, &index2);
/*< 	if( index2 .eq. 0 ) goto 3200 >*/
    if (index2 == 0) {
	goto L3200;
    }
/*< 	call getval(5, 0,2048,  12, index2, index3 ) >*/
    getval_(&c__5, &c__0, &c__2048, &c__12, &index2, &index3);
/*< 	call getval(5, 0,2049,  18, index3, imod ) >*/
    getval_(&c__5, &c__0, &c__2049, &c__18, &index3, &imod);
/*< 	dice1 = 0 >*/
    dice1 = 0;
/*< 	do 3100 i = 1, 4-imod >*/
    i__1 = 4 - imod;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    dice1 = dice1 + iran(6) >*/
	dice1 += iran_(&c__6);
/*< 3100	continue >*/
/* L3100: */
    }
/*< 	if( dice1 .gt. dexter ) goto 3200 >*/
    if (dice1 > dexter) {
	goto L3200;
    }
/*< 	iforce = iforce - imod >*/
    iforce -= imod;
/*< 	if( iforce .gt. 0 ) goto 3200 >*/
    if (iforce > 0) {
	goto L3200;
    }
/*< 	call putval(5, 0,2057,  21, atackr, 4 ) >*/
    putval_(&c__5, &c__0, &c__2057, &c__21, &atackr, &c__4);
/*< 	call string(1,'.  Shield absorbs blow.^E') >*/
    string_(&c__1, ".  Shield absorbs blow.^E", (ftnlen)25);
/*< 	goto 3500 >*/
    goto L3500;
/* ****** NOW FIND OUT WHERE IT HIT HIM *************************** */
/*< 3200	index2 = iran( 4 ) >*/
L3200:
    index2 = iran_(&c__4);
/*< 	if( index2 .gt. 1 )  index2 = 2 >*/
    if (index2 > 1) {
	index2 = 2;
    }
/*< 	if(index2.eq.1)call string(1,'.  Hit on the head with force ^E') >*/
    if (index2 == 1) {
	string_(&c__1, ".  Hit on the head with force ^E", (ftnlen)32);
    }
/*< 	if(index2.ne.1)call string(1,'.  Hit with force ^E') >*/
    if (index2 != 1) {
	string_(&c__1, ".  Hit with force ^E", (ftnlen)20);
    }
/* ****** WHAT EFFECT DOES ARMOR HAVE? **************************** */
/*< 	if( index1 .eq. 0 ) goto 3300 >*/
    if (index1 == 0) {
	goto L3300;
    }
/*< 	call getval(6, 0,2071,  2, index1, index2, index3 ) >*/
    getval_(&c__6, &c__0, &c__2071, &c__2, &index1, &index2, &index3);
/*< 	if( index3 .eq. 0 ) goto 3300 >*/
    if (index3 == 0) {
	goto L3300;
    }
/*< 	call getval(5, 0,2073,  12, index3, index4 ) >*/
    getval_(&c__5, &c__0, &c__2073, &c__12, &index3, &index4);
/*< 	if( index3 .eq. 0 ) goto 3300 >*/
    if (index3 == 0) {
	goto L3300;
    }
/*< 	if( index2 .eq. 1 )  imod = 5 >*/
    if (index2 == 1) {
	imod = 5;
    }
/*< 	if( index2 .ne. 1 )  call getval(5, 0,2076,  18, index4, imod ) >*/
    if (index2 != 1) {
	getval_(&c__5, &c__0, &c__2076, &c__18, &index4, &imod);
    }
/*< 	iforce = iforce - imod >*/
    iforce -= imod;
/*< 	if( iforce .lt. 0 )  iforce = 0 >*/
    if (iforce < 0) {
	iforce = 0;
    }
/*< 3300	call number(1, iforce ) >*/
L3300:
    number_(&c__1, &iforce);
/*< 	streng = streng - iforce >*/
    streng -= iforce;
/*< 	call chrout(46) >*/
    chrout_(&c__46);
/*< 	call putval(5, 0,2082,  21, atackr, index2 ) >*/
    putval_(&c__5, &c__0, &c__2082, &c__21, &atackr, &index2);
/*< 	goto 3500 >*/
    goto L3500;
/*< 3400	call string(1,'.^E') >*/
L3400:
    string_(&c__1, ".^E", (ftnlen)3);
/*< 	call colstr(icllbl,'  You parried.^E') >*/
    colstr_(&col_1.icllbl, "  You parried.^E", (ftnlen)16);
/*< 3500	if( streng .gt. 0 ) goto 3600 >*/
L3500:
    if (streng > 0) {
	goto L3600;
    }
/*< 	call putval(6, 0,2089,  6, atackr, 4, player ) >*/
    putval_(&c__6, &c__0, &c__2089, &c__6, &atackr, &c__4, &player);
/*< 	call string(1,'  You are dead.^E') >*/
    string_(&c__1, "  You are dead.^E", (ftnlen)17);
/*< 	call cease( x, y, z, player ) >*/
    cease_(&x, &y, &z__, &player);

/* ****** INTERPRET COMMAND *************************************** */
/*< 3600	if( recovr .gt. 0 )  recovr = recovr - 1 >*/
L3600:
    if (recovr > 0) {
	--recovr;
    }
/*< 	if( wrdptr .gt. 0 ) goto 3700 >*/
    if (wrdptr > 0) {
	goto L3700;
    }
/*< 	call curbuf >*/
    curbuf_();
/*< 	call comand( ichar, comara, index ) >*/
    comand_(&ichar, comara, &index);
/*< 	if( ichar .eq. -1 .or. index .eq. 0 ) goto 1600 >*/
    if (ichar == -1 || index == 0) {
	goto L1600;
    }
/*< 	call parse( comara, index, parara, length, 40 ) >*/
    parse_(comara, &index, parara, &length, &c__40);
/*< 	if( length .eq. 0 ) goto 1600 >*/
    if (length == 0) {
	goto L1600;
    }
/*< 	wrdptr = 0 >*/
    wrdptr = 0;
/*< 3700	call wrdnum( parara, wrdptr, verb, name1, name2, length ) >*/
L3700:
    wrdnum_(parara, &wrdptr, &verb, &name1, &name2, &length);
/*< 	if( verb .eq. 0 ) goto 1600 >*/
    if (verb == 0) {
	goto L1600;
    }
/*< 	if( verb .le. 16 .or. recovr .le. 0 ) goto 3800 >*/
    if (verb <= 16 || recovr <= 0) {
	goto L3800;
    }
/*< 	call messag(iclyel,'You must recover.^E') >*/
    messag_(&col_1.iclyel, "You must recover.^E", (ftnlen)19);
/*< 	goto 1600 >*/
    goto L1600;
/*< 3800	g >*/
L3800:
    switch ((int)verb) {
	case 1:  goto L3900;
	case 2:  goto L4000;
	case 3:  goto L4100;
	case 4:  goto L4200;
	case 5:  goto L4300;
	case 6:  goto L4600;
	case 7:  goto L4700;
	case 8:  goto L4800;
	case 9:  goto L5010;
	case 10:  goto L5025;
	case 11:  goto L5030;
	case 12:  goto L5035;
	case 13:  goto L5040;
	case 14:  goto L5045;
	case 15:  goto L5060;
	case 16:  goto L5070;
	case 17:  goto L5100;
	case 18:  goto L5300;
	case 19:  goto L5350;
	case 20:  goto L5500;
	case 21:  goto L5700;
	case 22:  goto L5800;
	case 23:  goto L6600;
	case 24:  goto L7300;
	case 25:  goto L7400;
	case 26:  goto L7900;
	case 27:  goto L9000;
	case 28:  goto L10000;
	case 29:  goto L10600;
	case 30:  goto L11300;
	case 31:  goto L11400;
	case 32:  goto L11600;
	case 33:  goto L12100;
	case 34:  goto L12500;
    }
/* ****** EXIT **************************************************** */
/*< 3900	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L3900:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	call cease( x, y, z, player ) >*/
    cease_(&x, &y, &z__, &player);
/* ****** MAP ***************************************************** */
/*< 4000	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L4000:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	if( .not. lprivd ) goto 7200 >*/
    if (! lprivd) {
	goto L7200;
    }
/*< 	call map( failed ) >*/
    map_(&failed);
/*< 	if( .not. failed ) goto 1500 >*/
    if (! failed) {
	goto L1500;
    }
/*< 	call messag(iclyel,'Cannot create map.  Sorry.^E') >*/
    messag_(&col_1.iclyel, "Cannot create map.  Sorry.^E", (ftnlen)28);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** CLEAR SCREEN ******************************************** */
/*< 4100	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L4100:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	newscr = .true. >*/
    newscr = TRUE_;
/*< 	goto 1600 >*/
    goto L1600;
/* ****** GAG ***************************************************** */
/*< 4200	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L4200:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	call usrset( 1035, 0 ) >*/
    usrset_(&c__1035, &c__0);
/*< 	goto 1500 >*/
    goto L1500;
/* ****** WHO ***************************************************** */
/*< 4300	if( name1 .lt. 0 ) goto 6500 >*/
L4300:
    if (name1 < 0) {
	goto L6500;
    }
/*< 	if( name2 .ne. 0 ) goto 8500 >*/
    if (name2 != 0) {
	goto L8500;
    }
/*< 	if( name1 .gt. 0 ) goto 4500 >*/
    if (name1 > 0) {
	goto L4500;
    }
/*< 	call messag(iclwhi,'Players: ^E') >*/
    messag_(&col_1.iclwhi, "Players: ^E", (ftnlen)11);
/*< 	do 4400 itemp = 1, 26 >*/
    for (itemp = 1; itemp <= 26; ++itemp) {
/*< 	    index1 = itemp >*/
	index1 = itemp;
/*< 	    call getval(5, 0,2147,  10, index1, ival ) >*/
	getval_(&c__5, &c__0, &c__2147, &c__10, &index1, &ival);
/*< 	    if( ival .eq. 0 ) goto 4400 >*/
	if (ival == 0) {
	    goto L4400;
	}
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call pname( index1, -17 ) >*/
	pname_(&index1, &c_n17);
/*< 	    call chrout(58) >*/
	chrout_(&c__58);
/*< 	    call getval(6, 0,2152,  7, index1, 2, ival ) >*/
	getval_(&c__6, &c__0, &c__2152, &c__7, &index1, &c__2, &ival);
/*< 	    call number(1, ival ) >*/
	number_(&c__1, &ival);
/*< 4400	continue >*/
L4400:
	;
    }
/*< 	goto 1600 >*/
    goto L1600;
/*< 4500	if( name1 .gt. 52 ) goto 7200 >*/
L4500:
    if (name1 > 52) {
	goto L7200;
    }
/*< 	if( name1 .gt. 26 ) goto 4550 >*/
    if (name1 > 26) {
	goto L4550;
    }
/*< 	call getval(6, 0,2159,  7, name1, 1, ijob ) >*/
    getval_(&c__6, &c__0, &c__2159, &c__7, &name1, &c__1, &ijob);
/*< 	if( ijob .eq. 0 ) goto 7200 >*/
    if (ijob == 0) {
	goto L7200;
    }
/*< 	call messag(iclwhi,'Player ^E') >*/
    messag_(&col_1.iclwhi, "Player ^E", (ftnlen)9);
/*< 	call pname( name1, -17 ) >*/
    pname_(&name1, &c_n17);
/*< 	call string(1,' is ^E') >*/
    string_(&c__1, " is ^E", (ftnlen)6);
/*< 	call syswho( ijob ) >*/
    syswho_(&ijob);
/*< 	goto 1600 >*/
    goto L1600;
/*< 4550	call messag(iclwhi,'Monster ^E') >*/
L4550:
    messag_(&col_1.iclwhi, "Monster ^E", (ftnlen)10);
/*< 	call pname( name1, -17 ) >*/
    pname_(&name1, &c_n17);
/*< 	call chrout(46) >*/
    chrout_(&c__46);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** WHISPER ************************************************ */
/*< 4600	vol = 0 >*/
L4600:
    vol = 0;
/*< 	goto 4900 >*/
    goto L4900;
/* ****** SAY **************************************************** */
/*< 4700	vol = 1 >*/
L4700:
    vol = 1;
/*< 	goto 4900 >*/
    goto L4900;
/* ****** SHOUT ************************************************** */
/*< 4800	vol = 2 >*/
L4800:
    vol = 2;
/*< 4900	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L4900:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	wrdptr = 0 >*/
    wrdptr = 0;
/*< 	iquote = iserch( comara, 34, index ) >*/
    iquote = iserch_(comara, &c__34, &index);
/*< 	if( iquote .eq. 0 )  iquote = iserch( comara, 44, index ) >*/
    if (iquote == 0) {
	iquote = iserch_(comara, &c__44, &index);
    }
/*< 	if( iquote .eq. 0 .or. iquote .eq. index ) goto 7200 >*/
    if (iquote == 0 || iquote == index) {
	goto L7200;
    }
/*< 	ilen = index - iquote >*/
    ilen = index - iquote;
/*< 	if( ilen .gt. 70 )  ilen = 70 >*/
    if (ilen > 70) {
	ilen = 70;
    }
/*< 	call lock >*/
    lock_();
/*< 	call putval(5, 0,2193,  20, 1, player ) >*/
    putval_(&c__5, &c__0, &c__2193, &c__20, &c__1, &player);
/*< 	call putval(5, 0,2194,  20, 2, vol ) >*/
    putval_(&c__5, &c__0, &c__2194, &c__20, &c__2, &vol);
/*< 	call putval(5, 0,2195,  20, 3, ilen ) >*/
    putval_(&c__5, &c__0, &c__2195, &c__20, &c__3, &ilen);
/*< 	call putval(5, 0,2196,  20, 4, 0 ) >*/
    putval_(&c__5, &c__0, &c__2196, &c__20, &c__4, &c__0);
/*< 	comara( iquote ) = 32 >*/
    comara[iquote - 1] = 32;
/*< 	do 5000 i = 1, ilen >*/
    i__1 = ilen;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call putval(5, 0,2199,  20, i+4, icon( comara( iquote+i ) ) ) >*/
	i__2 = i__ + 4;
	i__3 = icon_(&comara[iquote + i__ - 1]);
	putval_(&c__5, &c__0, &c__2199, &c__20, &i__2, &i__3);
/*< 	    if( comara( iquote+i ) .eq. 34 )  call putval(4, 0,2200,  -20, 32 ) >*/
	if (comara[iquote + i__ - 1] == 34) {
	    putval_(&c__4, &c__0, &c__2200, &c_n20, &c__32);
	}
/*< 	    comara( iquote+i ) = 32 >*/
	comara[iquote + i__ - 1] = 32;
/*< 5000	continue >*/
/* L5000: */
    }
/*< 	call unlock >*/
    unlock_();
/*< 	goto 1500 >*/
    goto L1500;
/* ****** LOOK **************************************************** */
/*< 5010	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L5010:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	call messag(iclwhi,'Hex contains:^E') >*/
    messag_(&col_1.iclwhi, "Hex contains:^E", (ftnlen)15);
/*< 	call getval(7, 0,2210,  1, x, y, z, index1 ) >*/
    getval_(&c__7, &c__0, &c__2210, &c__1, &x, &y, &z__, &index1);
/*< 	do 5020 index2 = 1, 10 >*/
    for (index2 = 1; index2 <= 10; ++index2) {
/*< 	    call getval(6, 0,2212,  2, index1, index2+0, index3 ) >*/
	i__1 = index2;
	getval_(&c__6, &c__0, &c__2212, &c__2, &index1, &i__1, &index3);
/*< 	    if( index3 .eq. 0 ) goto 5020 >*/
	if (index3 == 0) {
	    goto L5020;
	}
/*< 	    call string(1,'  ^E') >*/
	string_(&c__1, "  ^E", (ftnlen)4);
/*< 	    call pname( index3, -17 ) >*/
	pname_(&index3, &c_n17);
/*< 5020	continue >*/
L5020:
	;
    }
/*< 	ival = 0 >*/
    ival = 0;
/*< 	if( z .gt. 1 )  call getval(7, 0,2218,  16, x, y, z-1, ival ) >*/
    if (z__ > 1) {
	i__1 = z__ - 1;
	getval_(&c__7, &c__0, &c__2218, &c__16, &x, &y, &i__1, &ival);
    }
/*< 	if( ival .ne. 0 )  call string(1,'  down-stair^E') >*/
    if (ival != 0) {
	string_(&c__1, "  down-stair^E", (ftnlen)14);
    }
/*< 	ival = 0 >*/
    ival = 0;
/*< 	call getval(7, 0,2221,  16, x, y, z, ival ) >*/
    getval_(&c__7, &c__0, &c__2221, &c__16, &x, &y, &z__, &ival);
/*< 	if( ival .ne. 0 )  call string(1,'  up-stair^E') >*/
    if (ival != 0) {
	string_(&c__1, "  up-stair^E", (ftnlen)12);
    }
/*< 	goto 1600 >*/
    goto L1600;
/* ****** STATUS ************************************************** */
/*< 5025	if( name2 .lt. 0 ) goto 6500 >*/
L5025:
    if (name2 < 0) {
	goto L6500;
    }
/*< 	if( name2 .ne. 0 ) goto 8500 >*/
    if (name2 != 0) {
	goto L8500;
    }
/*< 	if( name1 .eq. 0 )  index1 = player >*/
    if (name1 == 0) {
	index1 = player;
    }
/*< 	if( name1 .ne. 0 )  index1 = holds( player, name1 ) >*/
    if (name1 != 0) {
	index1 = holds_(&player, &name1);
    }
/*< 	if( index1 .eq. 0 ) goto 6900 >*/
    if (index1 == 0) {
	goto L6900;
    }
/*< 	call messag(iclwhi,'Status of ^E') >*/
    messag_(&col_1.iclwhi, "Status of ^E", (ftnlen)12);
/*< 	call pname( index1, -17 ) >*/
    pname_(&index1, &c_n17);
/*< 	call string(1,':  weight: ^E') >*/
    string_(&c__1, ":  weight: ^E", (ftnlen)13);
/*< 	call number(1, weight( index1 ) ) >*/
    i__1 = weight_(&index1);
    number_(&c__1, &i__1);
/*< 	call string(1,'  holds: ^E') >*/
    string_(&c__1, "  holds: ^E", (ftnlen)11);
/*< 	call number(1, canhld( index1 ) ) >*/
    i__1 = canhld_(&index1);
    number_(&c__1, &i__1);
/*< 	call string(1,'  value: $^E') >*/
    string_(&c__1, "  value: $^E", (ftnlen)12);
/*< 	call number(1, cost( index1 ) ) >*/
    i__1 = cost_(&index1);
    number_(&c__1, &i__1);
/*< 	if( name1 .ne. 0 ) goto 5027 >*/
    if (name1 != 0) {
	goto L5027;
    }
/*< 	call string(1,' at (^E') >*/
    string_(&c__1, " at (^E", (ftnlen)7);
/*< 	call number(1, x ) >*/
    number_(&c__1, &x);
/*< 	call chrout(44) >*/
    chrout_(&c__44);
/*< 	call number(1, y ) >*/
    number_(&c__1, &y);
/*< 	call chrout(44) >*/
    chrout_(&c__44);
/*< 	call number(1, z ) >*/
    number_(&c__1, &z__);
/*< 	call string(1,') pointing ^E') >*/
    string_(&c__1, ") pointing ^E", (ftnlen)13);
/*< 	call number(1, dir ) >*/
    number_(&c__1, &dir);
/*< 5027	call chrout(46) >*/
L5027:
    chrout_(&c__46);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** ALLIES ************************************************** */
/*< 5030	if( name1 .ne. 0 ) goto 7200 >*/
L5030:
    if (name1 != 0) {
	goto L7200;
    }
/*< 	if( name2 .le. 0 .or. name2 .gt. 26 ) goto 7200 >*/
    if (name2 <= 0 || name2 > 26) {
	goto L7200;
    }
/*< 	call putval(6, 0,2256,  23, player, name2, 1 ) >*/
    putval_(&c__6, &c__0, &c__2256, &c__23, &player, &name2, &c__1);
/*< 	goto 1500 >*/
    goto L1500;
/* ****** ENEMIES ************************************************* */
/*< 5035	if( name1 .ne. 0 ) goto 7200 >*/
L5035:
    if (name1 != 0) {
	goto L7200;
    }
/*< 	if( name2 .le. 0 .or. name2 .gt. 26 ) goto 7200 >*/
    if (name2 <= 0 || name2 > 26) {
	goto L7200;
    }
/*< 	call putval(6, 0,2263,  23, player, name2, 0 ) >*/
    putval_(&c__6, &c__0, &c__2263, &c__23, &player, &name2, &c__0);
/*< 	goto 1500 >*/
    goto L1500;
/* ****** TIME **************************************************** */
/*< 5040	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L5040:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	call messag(iclwhi,'Time:  ^E') >*/
    messag_(&col_1.iclwhi, "Time:  ^E", (ftnlen)9);
/*< 	call datime( ival, ival, ival, index1, index2, index3, ival ) >*/
    datime_(&ival, &ival, &ival, &index1, &index2, &index3, &ival);
/*< 	call number(2, index1, -2 ) >*/
    number_(&c__2, &index1, &c_n2);
/*< 	call chrout(58) >*/
    chrout_(&c__58);
/*< 	call number(2, index2, -2 ) >*/
    number_(&c__2, &index2, &c_n2);
/*< 	call chrout(58) >*/
    chrout_(&c__58);
/*< 	call number(2, index3, -2 ) >*/
    number_(&c__2, &index3, &c_n2);
/*< 	call string(1,'    Cycles left:  ^E') >*/
    string_(&c__1, "    Cycles left:  ^E", (ftnlen)20);
/*< 	call number(1, 25 - mod( restr, 25 ) ) >*/
    i__1 = 25 - restr % 25;
    number_(&c__1, &i__1);
/*< 	call string(1,'    LOGNUM/LOGMAX:  ^E') >*/
    string_(&c__1, "    LOGNUM/LOGMAX:  ^E", (ftnlen)22);
/*< 	ilnum = igtab( 44, 9 ) >*/
    ilnum = igtab_(&c__44, &c__9);
/*< 	call number(1, ilnum ) >*/
    number_(&c__1, &ilnum);
/*< 	call chrout(47) >*/
    chrout_(&c__47);
/*< 	ilmax = igtab( 40, 9 ) >*/
    ilmax = igtab_(&c__40, &c__9);
/*< 	call number(1, ilmax ) >*/
    number_(&c__1, &ilmax);
/*< 	call string(1,' = ^E') >*/
    string_(&c__1, " = ^E", (ftnlen)5);
/*< 	call number(1, 100*ilnum/ilmax ) >*/
    i__1 = ilnum * 100 / ilmax;
    number_(&c__1, &i__1);
/*< 	call chrout(37) >*/
    chrout_(&c__37);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** SWEAR *************************************************** */
/*< 5045	numwrn = numwrn + 1 >*/
L5045:
    ++numwrn;
/*< 	if( numwrn .gt. 1 ) goto 5050 >*/
    if (numwrn > 1) {
	goto L5050;
    }
/*< 	call  >*/
    messag_(&col_1.iclred, "This is your first and last warning.  Do not swe\
ar.^G^E", (ftnlen)55);
/*< 	goto 1600 >*/
    goto L1600;
/*< 5050	call clrscr >*/
L5050:
    clrscr_();
/*< 	call colcur( 30, 10 ) >*/
    colcur_(&c__30, &c__10);
/*< 	call string(1,'You were warned.^E') >*/
    string_(&c__1, "You were warned.^E", (ftnlen)18);
/*< 	call cease( x, y, z, -player ) >*/
    i__1 = -player;
    cease_(&x, &y, &z__, &i__1);
/* ****** PARRY *************************************************** */
/*< 5060	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L5060:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	parry = .true. >*/
    parry = TRUE_;
/*< 	goto 1500 >*/
    goto L1500;
/* ****** NO PARRY ************************************************ */
/*< 5070	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L5070:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	parry = .false. >*/
    parry = FALSE_;
/*< 	goto 1500 >*/
    goto L1500;
/* ****** TURN **************************************************** */
/*< 5100	if( name1 .ge. 0 .or. name2 .ne. 0 ) goto 5200 >*/
L5100:
    if (name1 >= 0 || name2 != 0) {
	goto L5200;
    }
/*< 	if( dir .eq. 0 ) goto 11500 >*/
    if (dir == 0) {
	goto L11500;
    }
/*< 	if( dir .eq. -name1 ) goto 5500 >*/
    if (dir == -name1) {
	goto L5500;
    }
/*< 	if( name1 .gt. -7 )  dir = -name1 >*/
    if (name1 > -7) {
	dir = -name1;
    }
/*< 	if( name1 .eq. -7 )  dir = newdir( dir, -1 ) >*/
    if (name1 == -7) {
	dir = newdir_(&dir, &c_n1);
    }
/*< 	if( name1 .eq. -8 )  dir = newdir( dir, 1 ) >*/
    if (name1 == -8) {
	dir = newdir_(&dir, &c__1);
    }
/*< 	call putval(5, 0,2322,  8, player, dir ) >*/
    putval_(&c__5, &c__0, &c__2322, &c__8, &player, &dir);
/*< 	goto 1500 >*/
    goto L1500;
/*< 5200	call messag(iclyel,'Which way?^E') >*/
L5200:
    messag_(&col_1.iclyel, "Which way?^E", (ftnlen)12);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** RUN ***************************************************** */
/*< 5300	runing = 3 >*/
L5300:
    runing = 3;
/*< 	goto 5400 >*/
    goto L5400;
/* ****** JOG ***************************************************** */
/*< 5350	runing = 2 >*/
L5350:
    runing = 2;
/*< 5400	runing = runing - 1 >*/
L5400:
    --runing;
/* ****** WALK **************************************************** */
/*< 5500	if( name1 .gt. 0 .or. name2 .ne. 0 ) goto 5200 >*/
L5500:
    if (name1 > 0 || name2 != 0) {
	goto L5200;
    }
/*< 	if( dir .eq. 0 ) goto 11500 >*/
    if (dir == 0) {
	goto L11500;
    }
/*< 	if( name1 .eq. 0 .or. dir .eq. -name1 ) goto 5600 >*/
    if (name1 == 0 || dir == -name1) {
	goto L5600;
    }
/*< 	recovr = recovr + max0(16-dexter,0)/4 >*/
/* Computing MAX */
    i__1 = 16 - dexter;
    recovr += max(i__1,0) / 4;
/*< 	if( dir .eq. 0 )  recovr = recovr + max0(16-dexter,0) >*/
    if (dir == 0) {
/* Computing MAX */
	i__1 = 16 - dexter;
	recovr += max(i__1,0);
    }
/*< 	if( name1 .gt. -7 )  dir = -name1 >*/
    if (name1 > -7) {
	dir = -name1;
    }
/*< 	if( name1 .eq. -7 )  dir = newdir( dir, -1 ) >*/
    if (name1 == -7) {
	dir = newdir_(&dir, &c_n1);
    }
/*< 	if( name1 .eq. -8 )  dir = newdir( dir, 1 ) >*/
    if (name1 == -8) {
	dir = newdir_(&dir, &c__1);
    }
/*< 	call putval(5, 0,2349,  8, player, dir ) >*/
    putval_(&c__5, &c__0, &c__2349, &c__8, &player, &dir);
/*< 5600	call newxy( x, y, dir, nx, ny ) >*/
L5600:
    newxy_(&x, &y, &dir, &nx, &ny);
/*< 	nz = z >*/
    nz = z__;
/*< 	if( nx .eq. 0 ) goto 6100 >*/
    if (nx == 0) {
	goto L6100;
    }
/*< 	goto 5900 >*/
    goto L5900;
/* ****** DECEND ************************************************** */
/*< 5700	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L5700:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	nx = x >*/
    nx = x;
/*< 	ny = y >*/
    ny = y;
/*< 	nz = z - 1 >*/
    nz = z__ - 1;
/*< 	if( nz .lt. 1 ) goto 6100 >*/
    if (nz < 1) {
	goto L6100;
    }
/*< 	call getval(7, 0,2363,  16, nx, ny, nz, ival ) >*/
    getval_(&c__7, &c__0, &c__2363, &c__16, &nx, &ny, &nz, &ival);
/*< 	if( ival .eq. 0 ) goto 6100 >*/
    if (ival == 0) {
	goto L6100;
    }
/*< 	goto 5900 >*/
    goto L5900;
/* ****** ASCEND ************************************************** */
/*< 5800	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L5800:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	nx = x >*/
    nx = x;
/*< 	ny = y >*/
    ny = y;
/*< 	nz = z + 1 >*/
    nz = z__ + 1;
/*< 	call getval(7, 0,2373,  16, nx, ny, nz-1, ival ) >*/
    i__1 = nz - 1;
    getval_(&c__7, &c__0, &c__2373, &c__16, &nx, &ny, &i__1, &ival);
/*< 	if( ival .eq. 0 ) goto 6100 >*/
    if (ival == 0) {
	goto L6100;
    }
/*< 	if( nz .eq. 5 ) goto 13000 >*/
    if (nz == 5) {
	goto L13000;
    }
/*< 5900	if( canhld(player) .eq. 0 ) goto 6000 >*/
L5900:
    if (canhld_(&player) == 0) {
	goto L6000;
    }
/*< 	if( dir .eq. 0 ) goto 11500 >*/
    if (dir == 0) {
	goto L11500;
    }
/*< 	recovr = recovr + 20/canhld(player) >*/
    recovr += 20 / canhld_(&player);
/*< 	if( enemy( x, y, z, player, dexter ) ) goto 6200 >*/
    if (enemy_(&x, &y, &z__, &player, &dexter)) {
	goto L6200;
    }
/*< 	if( enemy( nx, ny, nz, player, dexter ) ) goto 6300 >*/
    if (enemy_(&nx, &ny, &nz, &player, &dexter)) {
	goto L6300;
    }
/*< 	call getval(7, 0,2382,  1, nx, ny, nz, ival ) >*/
    getval_(&c__7, &c__0, &c__2382, &c__1, &nx, &ny, &nz, &ival);
/*< 	if( ival .eq. 0 ) goto 6100 >*/
    if (ival == 0) {
	goto L6100;
    }
/*< 	call remove( x, y, z, player, failed ) >*/
    remove_(&x, &y, &z__, &player, &failed);
/*< 	if( failed ) call bugmsg('FMAIN: REMOVE#1^E',x,y,z,player) >*/
    if (failed) {
	bugmsg_("FMAIN: REMOVE#1^E", &x, &y, &z__, &player, (ftnlen)17);
    }
/*< 	x = nx >*/
    x = nx;
/*< 	y = ny >*/
    y = ny;
/*< 	if( z .ne. nz )  recovr = recovr + max0(16-dexter,0)/2 >*/
    if (z__ != nz) {
/* Computing MAX */
	i__1 = 16 - dexter;
	recovr += max(i__1,0) / 2;
    }
/*< 	z = nz >*/
    z__ = nz;
/*< 	call drop( failed, .true., x, y, z, player ) >*/
    drop_(&failed, &c_true, &x, &y, &z__, &player);
/*< 	if( runing .gt. 0 ) goto 5400 >*/
    if (runing > 0) {
	goto L5400;
    }
/*< 	goto 1500 >*/
    goto L1500;
/*< 6000	call messag(iclred,'You are not strong enough to move.^E') >*/
L6000:
    messag_(&col_1.iclred, "You are not strong enough to move.^E", (ftnlen)36)
	    ;
/*< 	goto 1600 >*/
    goto L1600;
/*< 6100	call messag(iclred,'You have just bumped into a rock.^E') >*/
L6100:
    messag_(&col_1.iclred, "You have just bumped into a rock.^E", (ftnlen)35);
/*< 	runing = 0 >*/
    runing = 0;
/*< 	recovr = max0( recovr + 20 - dexter, 0 ) >*/
/* Computing MAX */
    i__1 = recovr + 20 - dexter;
    recovr = max(i__1,0);
/*< 	goto 1600 >*/
    goto L1600;
/*< 6200	call messag(iclred,'You couldn''t escape.^E') >*/
L6200:
    messag_(&col_1.iclred, "You couldn't escape.^E", (ftnlen)22);
/*< 	goto 1600 >*/
    goto L1600;
/*< 6300	call messag(iclred,'You are blocked.^E') >*/
L6300:
    messag_(&col_1.iclred, "You are blocked.^E", (ftnlen)18);
/*< 	goto 1600 >*/
    goto L1600;
/*< 6400	call messag(iclyel,'Nouns do not apply here.^E') >*/
L6400:
    messag_(&col_1.iclyel, "Nouns do not apply here.^E", (ftnlen)26);
/*< 	goto 1600 >*/
    goto L1600;
/*< 6500	call messag(iclyel,'A direction does not apply here.^E') >*/
L6500:
    messag_(&col_1.iclyel, "A direction does not apply here.^E", (ftnlen)34);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** GET ***************************************************** */
/*< 6600	if( name1 .lt. 0 .or. name2 .lt. 0 ) goto 6500 >*/
L6600:
    if (name1 < 0 || name2 < 0) {
	goto L6500;
    }
/*< 	if( name1 .eq. 0 ) goto 7200 >*/
    if (name1 == 0) {
	goto L7200;
    }
/*< 	if( dir .eq. 0 ) goto 11500 >*/
    if (dir == 0) {
	goto L11500;
    }
/*< 	if( name2 .eq. 0 ) goto 6800 >*/
    if (name2 == 0) {
	goto L6800;
    }
/*< 	if( name2 .le. 52 ) goto 6850 >*/
    if (name2 <= 52) {
	goto L6850;
    }
/*< 	index2 = holds( player, name2 ) >*/
    index2 = holds_(&player, &name2);
/*< 	if( index2 .eq. 0 ) goto 7100 >*/
    if (index2 == 0) {
	goto L7100;
    }
/*< 	index1 = holds( index2, name1 ) >*/
    index1 = holds_(&index2, &name1);
/*< 	if( index1 .eq. 0 ) goto 6900 >*/
    if (index1 == 0) {
	goto L6900;
    }
/*< 	call takout( index1, index2, failed ) >*/
    takout_(&index1, &index2, &failed);
/*< 	if( failed ) goto 6900 >*/
    if (failed) {
	goto L6900;
    }
/*< 	if( canhld(player) .lt. weight(index2) ) goto 6700 >*/
    if (canhld_(&player) < weight_(&index2)) {
	goto L6700;
    }
/*< 	call phold( index1, player, failed ) >*/
    phold_(&index1, &player, &failed);
/*< 	if( .not. failed ) goto 1500 >*/
    if (! failed) {
	goto L1500;
    }
/*< 6700	call messag(iclyel,'Carrying too much.  An item dropped.^E') >*/
L6700:
    messag_(&col_1.iclyel, "Carrying too much.  An item dropped.^E", (ftnlen)
	    38);
/*< 	call drop( failed, .true., x, y, z, index1 ) >*/
    drop_(&failed, &c_true, &x, &y, &z__, &index1);
/*< 	goto 1600 >*/
    goto L1600;
/*< 6800	index1 = at( x, y, z, name1 ) >*/
L6800:
    index1 = at_(&x, &y, &z__, &name1);
/*< 	if( index1 .eq. 0 ) goto 7000 >*/
    if (index1 == 0) {
	goto L7000;
    }
/*< 	if( index1 .le. 52 ) goto 7800 >*/
    if (index1 <= 52) {
	goto L7800;
    }
/*< 	call remove( x, y, z, index1, failed ) >*/
    remove_(&x, &y, &z__, &index1, &failed);
/*< 	if( failed ) call bugmsg('FMAIN: REMOVE#2^E',x,y,z,index1) >*/
    if (failed) {
	bugmsg_("FMAIN: REMOVE#2^E", &x, &y, &z__, &index1, (ftnlen)17);
    }
/*< 	if( name1 .eq. disind ) call addval(5, 0,2440,  33, 1, 1 ) >*/
    if (name1 == disind) {
	addval_(&c__5, &c__0, &c__2440, &c__33, &c__1, &c__1);
    }
/*< 	if( canhld(player) .lt. weight(index1) ) goto 6700 >*/
    if (canhld_(&player) < weight_(&index1)) {
	goto L6700;
    }
/*< 	call phold( index1, player, failed ) >*/
    phold_(&index1, &player, &failed);
/*< 	if( failed ) goto 6700 >*/
    if (failed) {
	goto L6700;
    }
/*< 	goto 1500 >*/
    goto L1500;
/*< 6850	index1 = at( x, y, z, name2 ) >*/
L6850:
    index1 = at_(&x, &y, &z__, &name2);
/*< 	if( index1 .eq. 0 ) goto 10300 >*/
    if (index1 == 0) {
	goto L10300;
    }
/*< 	call getval(5, 0,2448,  5, name2, index1 ) >*/
    getval_(&c__5, &c__0, &c__2448, &c__5, &name2, &index1);
/*< 	if( index1 .eq. 0 .or. index1 .eq. 511 ) goto 6861 >*/
    if (index1 == 0 || index1 == 511) {
	goto L6861;
    }
/*< 	do 6860 itemp = 1, 5 >*/
    for (itemp = 1; itemp <= 5; ++itemp) {
/*< 	    call getval(6, 0,2451,  2, index1, itemp+5, index2 ) >*/
	i__1 = itemp + 5;
	getval_(&c__6, &c__0, &c__2451, &c__2, &index1, &i__1, &index2);
/*< 	    if( index2 .eq. 0 ) goto 6860 >*/
	if (index2 == 0) {
	    goto L6860;
	}
/*< 	    call getval(5, 0,2453,  12, index2, index3 ) >*/
	getval_(&c__5, &c__0, &c__2453, &c__12, &index2, &index3);
/*< 	    if( index3 .eq. name1 ) goto 6870 >*/
	if (index3 == name1) {
	    goto L6870;
	}
/*< 6860	continue >*/
L6860:
	;
    }
/*< 6861	continue >*/
L6861:
/*< 	call messag(iclyel,'That is not in his belt.^E') >*/
    messag_(&col_1.iclyel, "That is not in his belt.^E", (ftnlen)26);
/*< 	goto 1600 >*/
    goto L1600;
/*< 6870	if( 5*iran(6) .gt. dexter ) goto 6880 >*/
L6870:
    if (iran_(&c__6) * 5 > dexter) {
	goto L6880;
    }
/*< 	call takout( index2, name2, failed ) >*/
    takout_(&index2, &name2, &failed);
/*< 	call phold( index2, player, failed ) >*/
    phold_(&index2, &player, &failed);
/*< 	if( failed ) goto 6700 >*/
    if (failed) {
	goto L6700;
    }
/*< 	recovr = max0( 40 - 2*dexter, 0 ) >*/
/* Computing MAX */
    i__1 = 40 - (dexter << 1);
    recovr = max(i__1,0);
/*< 	goto 1600 >*/
    goto L1600;
/*< 6880	call messag(iclred, 'You couldn''t grab it.^E' ) >*/
L6880:
    messag_(&col_1.iclred, "You couldn't grab it.^E", (ftnlen)23);
/*< 	recovr = max0( 40 - 2*dexter, 0 ) >*/
/* Computing MAX */
    i__1 = 40 - (dexter << 1);
    recovr = max(i__1,0);
/*< 	goto 1600 >*/
    goto L1600;
/*< 6900	call messag(iclyel,'You don''t have that.^E') >*/
L6900:
    messag_(&col_1.iclyel, "You don't have that.^E", (ftnlen)22);
/*< 	goto 1600 >*/
    goto L1600;
/*< 7000	call messag(iclyel,'You can''t see one here.^E') >*/
L7000:
    messag_(&col_1.iclyel, "You can't see one here.^E", (ftnlen)25);
/*< 	goto 1600 >*/
    goto L1600;
/*< 7100	call messag(iclyel,'You aren''t carrying that container.^E') >*/
L7100:
    messag_(&col_1.iclyel, "You aren't carrying that container.^E", (ftnlen)
	    37);
/*< 	goto 1600 >*/
    goto L1600;
/*< 7200	call messag(iclyel,'What?^E') >*/
L7200:
    messag_(&col_1.iclyel, "What?^E", (ftnlen)7);
/*< 	goto 1600 >*/
    goto L1600;
/*< 7300	if( name1 .le. 0 ) goto 7200 >*/
L7300:
    if (name1 <= 0) {
	goto L7200;
    }
/*< 	if( name2 .ne. 0 ) goto 8500 >*/
    if (name2 != 0) {
	goto L8500;
    }
/*< 	index1 = holds( player, name1 ) >*/
    index1 = holds_(&player, &name1);
/*< 	if( index1 .eq. 0 ) goto 6900 >*/
    if (index1 == 0) {
	goto L6900;
    }
/*< 	call takout( index1, player, failed ) >*/
    takout_(&index1, &player, &failed);
/*< 	call phold( index1, player, failed ) >*/
    phold_(&index1, &player, &failed);
/*< 	goto 1500 >*/
    goto L1500;
/* ****** PUT ***************************************************** */
/*< 7400	if( name1 .lt. 0 .or. name2 .lt. 0 ) goto 6500 >*/
L7400:
    if (name1 < 0 || name2 < 0) {
	goto L6500;
    }
/*< 	if( name1 .eq. 0 ) goto 7200 >*/
    if (name1 == 0) {
	goto L7200;
    }
/*< 	if( dir .eq. 0 ) goto 11500 >*/
    if (dir == 0) {
	goto L11500;
    }
/*< 	index1 = holds( player, name1 ) >*/
    index1 = holds_(&player, &name1);
/*< 	if( name1 .eq. disind .and. name2 .ne. 0 ) goto 7800 >*/
    if (name1 == disind && name2 != 0) {
	goto L7800;
    }
/*< 	if( index1 .eq. 0 ) goto 6900 >*/
    if (index1 == 0) {
	goto L6900;
    }
/*< 	call takout( index1, player, failed ) >*/
    takout_(&index1, &player, &failed);
/*< 	if( failed ) goto 6900 >*/
    if (failed) {
	goto L6900;
    }
/*< 	if( name2 .eq. 0 ) goto 7500 >*/
    if (name2 == 0) {
	goto L7500;
    }
/*< 	index2 = holds( player, name2 ) >*/
    index2 = holds_(&player, &name2);
/*< 	if( index1 .eq. index2 ) goto 7700 >*/
    if (index1 == index2) {
	goto L7700;
    }
/*< 	if( index2 .eq. 0 ) goto 7600 >*/
    if (index2 == 0) {
	goto L7600;
    }
/*< 	call getval(5, 0,2505,  5, index2, index3 ) >*/
    getval_(&c__5, &c__0, &c__2505, &c__5, &index2, &index3);
/*< 	if( index3 .eq. 511 ) goto 7700 >*/
    if (index3 == 511) {
	goto L7700;
    }
/*< 	if( canhld(index2) .lt. weight(index1) ) goto 6700 >*/
    if (canhld_(&index2) < weight_(&index1)) {
	goto L6700;
    }
/*< 	call putin( index1, index2, failed ) >*/
    putin_(&index1, &index2, &failed);
/*< 	if( failed ) goto 6700 >*/
    if (failed) {
	goto L6700;
    }
/*< 	goto 1500 >*/
    goto L1500;
/*< 7500	call drop( failed, .true., x, y, z, index1 ) >*/
L7500:
    drop_(&failed, &c_true, &x, &y, &z__, &index1);
/*< 	goto 1500 >*/
    goto L1500;
/*< 7600	call phold( index1, player, failed ) >*/
L7600:
    phold_(&index1, &player, &failed);
/*< 	goto 7100 >*/
    goto L7100;
/*< 7700	call phold( index1, player, failed ) >*/
L7700:
    phold_(&index1, &player, &failed);
/*< 7800	call messag(iclyel,'That would be *VERY* difficult.^E') >*/
L7800:
    messag_(&col_1.iclyel, "That would be *VERY* difficult.^E", (ftnlen)33);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** INVENT ************************************************** */
/*< 7900	if( name1 .lt. 0 ) goto 6500 >*/
L7900:
    if (name1 < 0) {
	goto L6500;
    }
/*< 	if( name2 .ne. 0 ) goto 8500 >*/
    if (name2 != 0) {
	goto L8500;
    }
/*< 	if( name1 .lt. 0 ) goto 6500 >*/
    if (name1 < 0) {
	goto L6500;
    }
/*< 	if( name1 .le. 52 ) goto 8300 >*/
    if (name1 <= 52) {
	goto L8300;
    }
/*< 	index1 = holds( player, name1 ) >*/
    index1 = holds_(&player, &name1);
/*< 	if( index1 .eq. 0 ) goto 6900 >*/
    if (index1 == 0) {
	goto L6900;
    }
/*< 8000	call getval(5, 0,2530,  5, index1, index2 ) >*/
/* L8000: */
    getval_(&c__5, &c__0, &c__2530, &c__5, &index1, &index2);
/*< 	if( index2 .eq. 511 ) goto 7800 >*/
    if (index2 == 511) {
	goto L7800;
    }
/*< 	call messag(iclwhi,'Inventory: ^E') >*/
    messag_(&col_1.iclwhi, "Inventory: ^E", (ftnlen)13);
/*< 	if( index2 .eq. 0 ) goto 8200 >*/
    if (index2 == 0) {
	goto L8200;
    }
/*< 	do 8100 index3 = 1, 10 >*/
    for (index3 = 1; index3 <= 10; ++index3) {
/*< 	    call getval(6, 0,2535,  2, index2, index3+0, index4 ) >*/
	i__1 = index3;
	getval_(&c__6, &c__0, &c__2535, &c__2, &index2, &i__1, &index4);
/*< 	    if( index4 .eq. 0 ) goto 8100 >*/
	if (index4 == 0) {
	    goto L8100;
	}
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call pname( index4, -17 ) >*/
	pname_(&index4, &c_n17);
/*< 8100	continue >*/
L8100:
	;
    }
/*< 	goto 1600 >*/
    goto L1600;
/*< 8200	call string(1,'Nothing.^E') >*/
L8200:
    string_(&c__1, "Nothing.^E", (ftnlen)10);
/*< 	goto 1600 >*/
    goto L1600;
/*< 8300	if( name1 .eq. 0 )  name1 = player >*/
L8300:
    if (name1 == 0) {
	name1 = player;
    }
/*< 	if( .not. cansee(name1) ) goto 8400 >*/
    if (! cansee[name1 - 1]) {
	goto L8400;
    }
/*< 	inplay = name1 >*/
    inplay = name1;
/*< 	goto 1500 >*/
    goto L1500;
/*< 8400	call messag(iclyel,'You can''t see him.^E') >*/
L8400:
    messag_(&col_1.iclyel, "You can't see him.^E", (ftnlen)20);
/*< 	goto 1600 >*/
    goto L1600;
/*< 8500	call messag(iclyel,'Second noun does not apply here.^E') >*/
L8500:
    messag_(&col_1.iclyel, "Second noun does not apply here.^E", (ftnlen)34);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** ATTACK ************************************************** */
/*< 9000	if( dir .eq. 0 ) goto 11500 >*/
L9000:
    if (dir == 0) {
	goto L11500;
    }
/*< 	if( name1 .eq. 0 )  name1 = oldnm1 >*/
    if (name1 == 0) {
	name1 = oldnm1;
    }
/*< 	if( name2 .eq. 0 )  name2 = oldnm2 >*/
    if (name2 == 0) {
	name2 = oldnm2;
    }
/*< 	if( name1 .le. 0 .or. name1 .gt. 52 ) goto 7800 >*/
    if (name1 <= 0 || name1 > 52) {
	goto L7800;
    }
/*< 	if( name2 .le. 52 ) goto 7800 >*/
    if (name2 <= 52) {
	goto L7800;
    }
/*< 	oldnm1 = name1 >*/
    oldnm1 = name1;
/*< 	oldnm2 = name2 >*/
    oldnm2 = name2;
/*< 	call getval(5, 0,2565,  24, name2, ival ) >*/
    getval_(&c__5, &c__0, &c__2565, &c__24, &name2, &ival);
/*< 	if( ival .gt. 1 ) goto 11900 >*/
    if (ival > 1) {
	goto L11900;
    }
/*< 	index1 = holds( player, name2 ) >*/
    index1 = holds_(&player, &name2);
/*< 	if( index1 .eq. 0 ) goto 6900 >*/
    if (index1 == 0) {
	goto L6900;
    }
/*< 	call getval(5, 0,2569,  5, player, index2 ) >*/
    getval_(&c__5, &c__0, &c__2569, &c__5, &player, &index2);
/*< 	call getval(6, 0,2570,  2, index2, 4, index3 ) >*/
    getval_(&c__6, &c__0, &c__2570, &c__2, &index2, &c__4, &index3);
/*< 	if( index3 .eq. index1 ) goto 9200 >*/
    if (index3 == index1) {
	goto L9200;
    }
/*< 9100	call messag(iclyel,'That is not in weapon arm.^E') >*/
L9100:
    messag_(&col_1.iclyel, "That is not in weapon arm.^E", (ftnlen)28);
/*< 	goto 1600 >*/
    goto L1600;
/*< 9200	do 9300 i = -1, 1 >*/
L9200:
    for (i__ = -1; i__ <= 1; ++i__) {
/*< 	    call newxy( x, y, newdir( dir, i+0 ), nx, ny ) >*/
	i__2 = i__;
	i__1 = newdir_(&dir, &i__2);
	newxy_(&x, &y, &i__1, &nx, &ny);
/*< 	    if( nx .eq. 0 ) goto 9300 >*/
	if (nx == 0) {
	    goto L9300;
	}
/*< 	    index2 = at( nx, ny, z, name1 ) >*/
	index2 = at_(&nx, &ny, &z__, &name1);
/*< 	    if( index2 .ne. 0 ) goto 9400 >*/
	if (index2 != 0) {
	    goto L9400;
	}
/*< 9300	continue >*/
L9300:
	;
    }
/*< 	call messag(iclyel,'He is not attackable.^E') >*/
    messag_(&col_1.iclyel, "He is not attackable.^E", (ftnlen)23);
/*< 	goto 1600 >*/
    goto L1600;
/*< 9400	recovr = max0( 20-dexter, 0 ) >*/
L9400:
/* Computing MAX */
    i__1 = 20 - dexter;
    recovr = max(i__1,0);
/*< 	dice1 = 0 >*/
    dice1 = 0;
/*< 	do 9500 i = 1, 3 >*/
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    dice1 = dice1 + iran(6) >*/
	dice1 += iran_(&c__6);
/*< 9500	continue >*/
/* L9500: */
    }
/*< 	if( dice1 .ne. 17 ) goto 9600 >*/
    if (dice1 != 17) {
	goto L9600;
    }
/*< 	call messag(iclred,'You fool, you dropped your weapon.^E') >*/
    messag_(&col_1.iclred, "You fool, you dropped your weapon.^E", (ftnlen)36)
	    ;
/*< 	call takout( index1, player, failed ) >*/
    takout_(&index1, &player, &failed);
/*< 	call drop( failed, .true., x, y, z, index1 ) >*/
    drop_(&failed, &c_true, &x, &y, &z__, &index1);
/*< 	goto 1600 >*/
    goto L1600;
/*< 9600	if( dice1 .ne. 18 ) goto 9700 >*/
L9600:
    if (dice1 != 18) {
	goto L9700;
    }
/*< 	call messag(iclred,'^GYou clod, you broke your weapon.^E') >*/
    messag_(&col_1.iclred, "^GYou clod, you broke your weapon.^E", (ftnlen)36)
	    ;
/*< 	call takout( index1, player, failed ) >*/
    takout_(&index1, &player, &failed);
/*< 	call putval(5, 0,2598,  10, index1, 0 ) >*/
    putval_(&c__5, &c__0, &c__2598, &c__10, &index1, &c__0);
/*< 	goto 1600 >*/
    goto L1600;
/*< 9700	call getval(5, 0,2601,  12, index1, index2 ) >*/
L9700:
    getval_(&c__5, &c__0, &c__2601, &c__12, &index1, &index2);
/*< 	call getval(5, 0,2602,  17, index2, idam ) >*/
    getval_(&c__5, &c__0, &c__2602, &c__17, &index2, &idam);
/*< 	call getval(5, 0,2603,  18, index2, istr ) >*/
    getval_(&c__5, &c__0, &c__2603, &c__18, &index2, &istr);
/*< 	imod = ustren - istr >*/
    imod = ustren - istr;
/*< 	recovr = max0( 0, recovr-imod*2 ) >*/
/* Computing MAX */
    i__1 = 0, i__2 = recovr - (imod << 1);
    recovr = max(i__1,i__2);
/*< 	if( imod .gt. 0 )  imod = 0 >*/
    if (imod > 0) {
	imod = 0;
    }
/*< 	call messag(icllbl,'Effective dexterity: ^E') >*/
    messag_(&col_1.icllbl, "Effective dexterity: ^E", (ftnlen)23);
/*< 	call number(1, dexter+imod ) >*/
    i__1 = dexter + imod;
    number_(&c__1, &i__1);
/*< 	if( dice1 .gt. dexter+imod ) goto 9900 >*/
    if (dice1 > dexter + imod) {
	goto L9900;
    }
/*< 	indice = idam/10 >*/
    indice = idam / 10;
/*< 	dice2 = 0 >*/
    dice2 = 0;
/*< 	do 9800 i = 1, indice >*/
    i__1 = indice;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    dice2 = dice2 + iran(6) >*/
	dice2 += iran_(&c__6);
/*< 9800	continue >*/
/* L9800: */
    }
/*< 	dice2 = dice2 + mod( idam, 10 ) - 5 + imod >*/
    dice2 = dice2 + idam % 10 - 5 + imod;
/*< 	if( dice2 .lt. 0 )  dice2 = 0 >*/
    if (dice2 < 0) {
	dice2 = 0;
    }
/*< 	if( dice1 .eq. 3 )  dice2 = dice2 * 3 >*/
    if (dice1 == 3) {
	dice2 *= 3;
    }
/*< 	if( dice1 .eq. 4 )  dice2 = dice2 * 2 >*/
    if (dice1 == 4) {
	dice2 <<= 1;
    }
/*< 	if( d >*/
    if (dice1 <= 4) {
	string_(&c__1, ".  Critical hit.  Possible damage: ^E", (ftnlen)37);
    }
/*< 	if( d >*/
    if (dice1 >= 5) {
	string_(&c__1, ".  Attack accurate.  Possible damage: ^E", (ftnlen)40)
		;
    }
/*< 	call number(1, dice2 ) >*/
    number_(&c__1, &dice2);
/*< 	call putval(6, 0,2624,  6, name1, 1, player ) >*/
    putval_(&c__6, &c__0, &c__2624, &c__6, &name1, &c__1, &player);
/*< 	call putval(6, 0,2625,  6, name1, 2, index1 ) >*/
    putval_(&c__6, &c__0, &c__2625, &c__6, &name1, &c__2, &index1);
/*< 	call putval(6, 0,2626,  6, name1, 3, dice2 ) >*/
    putval_(&c__6, &c__0, &c__2626, &c__6, &name1, &c__3, &dice2);
/*< 	if( name1 .gt. 26 )call addval(6, 0,2627,  7, player, 2, dice2 ) >*/
    if (name1 > 26) {
	addval_(&c__6, &c__0, &c__2627, &c__7, &player, &c__2, &dice2);
    }
/*< 	call chrout(46) >*/
    chrout_(&c__46);
/*< 	goto 1600 >*/
    goto L1600;
/*< 9900	call string(1,'.  You missed.^E') >*/
L9900:
    string_(&c__1, ".  You missed.^E", (ftnlen)16);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** HIT ***************************************************** */
/*< 10000	if( dir .eq. 0 ) goto 11500 >*/
L10000:
    if (dir == 0) {
	goto L11500;
    }
/*< 	if( name1 .eq. 0 )  name1 = oldnm1 >*/
    if (name1 == 0) {
	name1 = oldnm1;
    }
/*< 	if( name1 .le. 0 .or. name1 .gt. 52 ) goto 7800 >*/
    if (name1 <= 0 || name1 > 52) {
	goto L7800;
    }
/*< 	if( name2 .ne. 0 ) goto 8500 >*/
    if (name2 != 0) {
	goto L8500;
    }
/*< 	oldnm1 = name1 >*/
    oldnm1 = name1;
/*< 	if( at( x, y, z, name1 ) .eq. 0 ) goto 10300 >*/
    if (at_(&x, &y, &z__, &name1) == 0) {
	goto L10300;
    }
/*< 	recovr = max0( 16 - dexter, 0 ) >*/
/* Computing MAX */
    i__1 = 16 - dexter;
    recovr = max(i__1,0);
/*< 	dice1 = 0 >*/
    dice1 = 0;
/*< 	do 10100 i = 1, 3 >*/
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    dice1 = dice1 + iran(6) >*/
	dice1 += iran_(&c__6);
/*< 10100	continue >*/
/* L10100: */
    }
/*< 	if( dexter .le. dice1 ) goto 10200 >*/
    if (dexter <= dice1) {
	goto L10200;
    }
/*< 	hit = streng - 8 >*/
    hit = streng - 8;
/*< 	if( hit .lt. 1 )  hit = 1 >*/
    if (hit < 1) {
	hit = 1;
    }
/*< 	call putval(6, 0,2650,  6, name1, 1, player ) >*/
    putval_(&c__6, &c__0, &c__2650, &c__6, &name1, &c__1, &player);
/*< 	call putval(6, 0,2651,  6, name1, 2, 0 ) >*/
    putval_(&c__6, &c__0, &c__2651, &c__6, &name1, &c__2, &c__0);
/*< 	call putval(6, 0,2652,  6, name1, 3, hit ) >*/
    putval_(&c__6, &c__0, &c__2652, &c__6, &name1, &c__3, &hit);
/*< 	if( name1 .gt. 26 )call addval(6, 0,2653,  7, player, 2, 1 ) >*/
    if (name1 > 26) {
	addval_(&c__6, &c__0, &c__2653, &c__7, &player, &c__2, &c__1);
    }
/*< 	goto 1600 >*/
    goto L1600;
/*< 10200	call messag(iclyel,'Your blow missed.^E') >*/
L10200:
    messag_(&col_1.iclyel, "Your blow missed.^E", (ftnlen)19);
/*< 	goto 1600 >*/
    goto L1600;
/*< 10300	call messag(iclyel,'He is not in this hex.^E') >*/
L10300:
    messag_(&col_1.iclyel, "He is not in this hex.^E", (ftnlen)24);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** THROW *************************************************** */
/*< 10600	if( name1 .le. 52 ) goto 7800 >*/
L10600:
    if (name1 <= 52) {
	goto L7800;
    }
/*< 	if( name2 .eq. 0 )  name2 = oldnm1 >*/
    if (name2 == 0) {
	name2 = oldnm1;
    }
/*< 	oldnm1 = name2 >*/
    oldnm1 = name2;
/*< 	if( name2 .le. 0 .or. name2 .gt. 52 ) goto 11200 >*/
    if (name2 <= 0 || name2 > 52) {
	goto L11200;
    }
/*< 	if( dir .eq. 0 ) goto 11500 >*/
    if (dir == 0) {
	goto L11500;
    }
/*< 	if( .not. cansee(name2) ) goto 11100 >*/
    if (! cansee[name2 - 1]) {
	goto L11100;
    }
/*< 	index1 = holds( player, name1 ) >*/
    index1 = holds_(&player, &name1);
/*< 	call getval(5, 0,2671,  24, name1, ival ) >*/
    getval_(&c__5, &c__0, &c__2671, &c__24, &name1, &ival);
/*< 	if( ival .ne. 0 .and. ival .ne. 2 ) goto 11900 >*/
    if (ival != 0 && ival != 2) {
	goto L11900;
    }
/*< 	if( index1 .eq. 0 ) goto 6900 >*/
    if (index1 == 0) {
	goto L6900;
    }
/*< 	call getval(5, 0,2674,  5, player, index2 ) >*/
    getval_(&c__5, &c__0, &c__2674, &c__5, &player, &index2);
/*< 	call getval(6, 0,2675,  2, index2, 4, index3 ) >*/
    getval_(&c__6, &c__0, &c__2675, &c__2, &index2, &c__4, &index3);
/*< 	if( index3 .ne. index1 ) goto 9100 >*/
    if (index3 != index1) {
	goto L9100;
    }
/*< 	call getval(5, 0,2677,  4, index1, gweigh ) >*/
    getval_(&c__5, &c__0, &c__2677, &c__4, &index1, &gweigh);
/*< 	dgo = streng - gweigh >*/
    dgo = streng - gweigh;
/*< 	call getval(6, 0,2679,  19, name2, 1, ax ) >*/
    getval_(&c__6, &c__0, &c__2679, &c__19, &name2, &c__1, &ax);
/*< 	call getval(6, 0,2680,  19, name2, 2, ay ) >*/
    getval_(&c__6, &c__0, &c__2680, &c__19, &name2, &c__2, &ay);
/*< 	if( ax .eq. x .and. ay .eq. y ) goto 10750 >*/
    if (ax == x && ay == y) {
	goto L10750;
    }
/*< 	nx = x >*/
    nx = x;
/*< 	ny = y >*/
    ny = y;
/*< 	dist = 0 >*/
    dist = 0;
/*< 	recovr = max0( 18 - dexter, 0 ) >*/
/* Computing MAX */
    i__1 = 18 - dexter;
    recovr = max(i__1,0);
/*< 	call takout( index1, player, failed ) >*/
    takout_(&index1, &player, &failed);
/*< 10700	if( dgo .lt. dist ) goto 11000 >*/
L10700:
    if (dgo < dist) {
	goto L11000;
    }
/*< 	dist = dist + 1 >*/
    ++dist;
/*< 	adir = findir( nx, ny, ax, ay ) >*/
    adir = findir_(&nx, &ny, &ax, &ay);
/*< 	call newxy( nx, ny, adir, nx, ny ) >*/
    newxy_(&nx, &ny, &adir, &nx, &ny);
/*< 	if( nx .eq. ax .and. ny .eq. ay ) goto 10800 >*/
    if (nx == ax && ny == ay) {
	goto L10800;
    }
/*< 	goto 10700 >*/
    goto L10700;
/*< 10750	call messag(iclyel,'You can''t when he is in your hex.^E') >*/
L10750:
    messag_(&col_1.iclyel, "You can't when he is in your hex.^E", (ftnlen)35);
/*< 	goto 1600 >*/
    goto L1600;
/*< 10800	dice1 = 0 >*/
L10800:
    dice1 = 0;
/*< 	do 10900 i = 1, 3 >*/
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    dice1 = dice1 + iran(6) >*/
	dice1 += iran_(&c__6);
/*< 10900	continue >*/
/* L10900: */
    }
/*< 	if( dice1 .gt. dexter - dist/3 ) goto 11000 >*/
    if (dice1 > dexter - dist / 3) {
	goto L11000;
    }
/*< 	call drop( failed, .true., ax, ay, z, index1 ) >*/
    drop_(&failed, &c_true, &ax, &ay, &z__, &index1);
/*< 	name1 = name2 >*/
    name1 = name2;
/*< 	goto 9700 >*/
    goto L9700;
/*< 11000	call messag(iclyel,'You missed.^E') >*/
L11000:
    messag_(&col_1.iclyel, "You missed.^E", (ftnlen)13);
/*< 	call drop( failed, .true., nx, ny, z, index1 ) >*/
    drop_(&failed, &c_true, &nx, &ny, &z__, &index1);
/*< 	goto 1600 >*/
    goto L1600;
/*< 11100	call messag(iclyel,'You can''t see him here.^E') >*/
L11100:
    messag_(&col_1.iclyel, "You can't see him here.^E", (ftnlen)25);
/*< 	goto 1600 >*/
    goto L1600;
/*< 11200	call messag(iclyel,'That is pure idiocy.^E') >*/
L11200:
    messag_(&col_1.iclyel, "That is pure idiocy.^E", (ftnlen)22);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** REST **************************************************** */
/*< 11300	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L11300:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	dir = 0 >*/
    dir = 0;
/*< 	call putval(5, 0,2720,  8, player, dir ) >*/
    putval_(&c__5, &c__0, &c__2720, &c__8, &player, &dir);
/*< 	goto 1500 >*/
    goto L1500;
/* ****** WAKE **************************************************** */
/*< 11400	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400 >*/
L11400:
    if (name1 != 0 || name2 != 0) {
	goto L6400;
    }
/*< 	dir = iran( 6 ) >*/
    dir = iran_(&c__6);
/*< 	call putval(5, 0,2727,  8, player, dir ) >*/
    putval_(&c__5, &c__0, &c__2727, &c__8, &player, &dir);
/*< 	recovr = max0( 20 - dexter, 0 ) >*/
/* Computing MAX */
    i__1 = 20 - dexter;
    recovr = max(i__1,0);
/*< 	goto 1500 >*/
    goto L1500;
/*< 11500	call messag(iclyel,'You can''t while you''re on the ground.^E') >*/
L11500:
    messag_(&col_1.iclyel, "You can't while you're on the ground.^E", (ftnlen)
	    39);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** FIRE **************************************************** */
/*< 11600	if( name1 .eq. 0 )  name1 = oldnm2 >*/
L11600:
    if (name1 == 0) {
	name1 = oldnm2;
    }
/*< 	if( name2 .eq. 0 )  name2 = oldnm1 >*/
    if (name2 == 0) {
	name2 = oldnm1;
    }
/*< 	oldnm1 = name2 >*/
    oldnm1 = name2;
/*< 	oldnm2 = name1 >*/
    oldnm2 = name1;
/*< 	if( dir .eq. 0 ) goto 11500 >*/
    if (dir == 0) {
	goto L11500;
    }
/*< 	if( name1 .le. 52 ) goto 7800 >*/
    if (name1 <= 52) {
	goto L7800;
    }
/*< 	call getval(5, 0,2742,  24, name1, ival ) >*/
    getval_(&c__5, &c__0, &c__2742, &c__24, &name1, &ival);
/*< 	if( ival .ne. 3 ) goto 11900 >*/
    if (ival != 3) {
	goto L11900;
    }
/*< 	if( name2 .le. 0 .or. name2 .gt. 52 ) goto 7800 >*/
    if (name2 <= 0 || name2 > 52) {
	goto L7800;
    }
/*< 	if( .not. cansee(name2) ) goto 8400 >*/
    if (! cansee[name2 - 1]) {
	goto L8400;
    }
/*< 	index1 = holds( player, name1 ) >*/
    index1 = holds_(&player, &name1);
/*< 	if( index1 .eq. 0 ) goto 6900 >*/
    if (index1 == 0) {
	goto L6900;
    }
/*< 	call getval(5, 0,2748,  5, player, index2 ) >*/
    getval_(&c__5, &c__0, &c__2748, &c__5, &player, &index2);
/*< 	call getval(6, 0,2749,  2, index2, 4, index3 ) >*/
    getval_(&c__6, &c__0, &c__2749, &c__2, &index2, &c__4, &index3);
/*< 	if( index1 .ne. index3 ) goto 9100 >*/
    if (index1 != index3) {
	goto L9100;
    }
/*< 	if( quiver .eq. 0 )call finwrd( isxbit('quiver~'), quiver ) >*/
    if (quiver == 0) {
	i__1 = isxbit_("quiver~", (ftnlen)7);
	finwrd_(&i__1, &quiver);
    }
/*< 	index2 = holds( player, quiver ) >*/
    index2 = holds_(&player, &quiver);
/*< 	if( index2 .eq. 0 ) goto 11800 >*/
    if (index2 == 0) {
	goto L11800;
    }
/*< 	call getval(5, 0,2754,  4, index2, gweigh ) >*/
    getval_(&c__5, &c__0, &c__2754, &c__4, &index2, &gweigh);
/*< 	call addval(4, 0,2755,  -4, -1 ) >*/
    addval_(&c__4, &c__0, &c__2755, &c_n4, &c_n1);
/*< 	if( gweigh .gt. 1 ) goto 11650 >*/
    if (gweigh > 1) {
	goto L11650;
    }
/*< 	call putval(4, 0,2757,  -4, 10 ) >*/
    putval_(&c__4, &c__0, &c__2757, &c_n4, &c__10);
/*< 	call takout( index2, player, failed ) >*/
    takout_(&index2, &player, &failed);
/*< 11625	i = iran( 80 ) >*/
L11625:
    i__ = iran_(&c__80);
/*< 	call getval(5, 0,2760,  11, i, ival ) >*/
    getval_(&c__5, &c__0, &c__2760, &c__11, &i__, &ival);
/*< 	if( ival .ne. 0 ) goto 11625 >*/
    if (ival != 0) {
	goto L11625;
    }
/*< 	call putval(4, 0,2762,  -11, index2 ) >*/
    putval_(&c__4, &c__0, &c__2762, &c_n11, &index2);
/*< 11650	call getval(5, 0,2763,  18, name1, istr ) >*/
L11650:
    getval_(&c__5, &c__0, &c__2763, &c__18, &name1, &istr);
/*< 	recovr = max0( 5*istr - 25 - dexter, 0 ) >*/
/* Computing MAX */
    i__1 = istr * 5 - 25 - dexter;
    recovr = max(i__1,0);
/*< 	name1 = name2 >*/
    name1 = name2;
/*< 	call getval(6, 0,2766,  19, name1, 1, ax ) >*/
    getval_(&c__6, &c__0, &c__2766, &c__19, &name1, &c__1, &ax);
/*< 	call getval(6, 0,2767,  19, name1, 2, ay ) >*/
    getval_(&c__6, &c__0, &c__2767, &c__19, &name1, &c__2, &ay);
/*< 	if( ax .eq. x .and. ay .eq. y ) goto 10750 >*/
    if (ax == x && ay == y) {
	goto L10750;
    }
/*< 	dice1 = 0 >*/
    dice1 = 0;
/*< 	do 11700 i = 1, 3 >*/
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    dice1 = dice1 + iran( 6 ) >*/
	dice1 += iran_(&c__6);
/*< 11700	continue >*/
/* L11700: */
    }
/*< 	goto 9700 >*/
    goto L9700;
/*< 11800	call messag(iclyel,'You don''t have a quiver.^E') >*/
L11800:
    messag_(&col_1.iclyel, "You don't have a quiver.^E", (ftnlen)26);
/*< 	goto 1600 >*/
    goto L1600;
/*< 11900	 >*/
L11900:
    messag_(&col_1.iclyel, "It would be very difficult to use the weapon tha\
t way.^E", (ftnlen)56);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** DESTROY ************************************************* */
/*< 12100	if( name1 .ge. 0 .or. name2 .ne. 0 ) goto 5200 >*/
L12100:
    if (name1 >= 0 || name2 != 0) {
	goto L5200;
    }
/*< 	index1 = holds( player, disind ) >*/
    index1 = holds_(&player, &disind);
/*< 	if( index1 .eq. 0 ) goto 12150 >*/
    if (index1 == 0) {
	goto L12150;
    }
/*< 	call newxy( x, y, -name1, nx, ny ) >*/
    i__1 = -name1;
    newxy_(&x, &y, &i__1, &nx, &ny);
/*< 	if( n >*/
    if (nx < 2 || nx > 48 || ny < 2 || ny > 48) {
	goto L5200;
    }
/*< 	call getval(5, 0,2790,  4, index1, gweigh ) >*/
    getval_(&c__5, &c__0, &c__2790, &c__4, &index1, &gweigh);
/*< 	if( gweigh .le. 3 ) goto 12125 >*/
    if (gweigh <= 3) {
	goto L12125;
    }
/*< 	call addval(4, 0,2792,  -4, -1 ) >*/
    addval_(&c__4, &c__0, &c__2792, &c_n4, &c_n1);
/*< 	call getval(7, 0,2793,  1, nx, ny, z, ival ) >*/
    getval_(&c__7, &c__0, &c__2793, &c__1, &nx, &ny, &z__, &ival);
/*< 	if( ival .eq. 0 ) call putval(4, 0,2794,  -1, 511 ) >*/
    if (ival == 0) {
	putval_(&c__4, &c__0, &c__2794, &c_n1, &c__511);
    }
/*< 	if( gweigh .gt. 4 ) goto 1500 >*/
    if (gweigh > 4) {
	goto L1500;
    }
/*< 	call messag(iclred,'The disintegrator is glowing red.^G^E') >*/
    messag_(&col_1.iclred, "The disintegrator is glowing red.^G^E", (ftnlen)
	    37);
/*< 	goto 1600 >*/
    goto L1600;
/*< 12125	do 12135 ddir = 1, 6 >*/
L12125:
    for (ddir = 1; ddir <= 6; ++ddir) {
/*< 	    call newxy( x, y, ddir+0, nx, ny ) >*/
	i__1 = ddir;
	newxy_(&x, &y, &i__1, &nx, &ny);
/*< 	    if( nx.lt.2.or.nx.gt.48.or.ny.lt.2.or.ny.gt.48 ) goto 12135 >*/
	if (nx < 2 || nx > 48 || ny < 2 || ny > 48) {
	    goto L12135;
	}
/*< 	    call getval(7, 0,2802,  1, nx, ny, z, ival ) >*/
	getval_(&c__7, &c__0, &c__2802, &c__1, &nx, &ny, &z__, &ival);
/*< 	    if( ival .eq. 511 ) goto 12135 >*/
	if (ival == 511) {
	    goto L12135;
	}
/*< 	    if( ival .eq. 0 ) call putval(4, 0,2804,  -1, 511 ) >*/
	if (ival == 0) {
	    putval_(&c__4, &c__0, &c__2804, &c_n1, &c__511);
	}
/*< 	    if( ival .eq. 0 ) goto 12135 >*/
	if (ival == 0) {
	    goto L12135;
	}
/*< 	    do 12134 index1 = 1, 10 >*/
	for (index1 = 1; index1 <= 10; ++index1) {
/*< 		call getval(6, 0,2807,  2, ival, index1+0, index2 ) >*/
	    i__1 = index1;
	    getval_(&c__6, &c__0, &c__2807, &c__2, &ival, &i__1, &index2);
/*< 		if( index2 .lt. 1 .or. index2 .gt. 52 ) goto 12134 >*/
	    if (index2 < 1 || index2 > 52) {
		goto L12134;
	    }
/*< 		call putval(6, 0,2809,  6, index2, 1, 1023 ) >*/
	    putval_(&c__6, &c__0, &c__2809, &c__6, &index2, &c__1, &c__1023);
/*< 		call putval(6, 0,2810,  6, index2, 3, 1023 ) >*/
	    putval_(&c__6, &c__0, &c__2810, &c__6, &index2, &c__3, &c__1023);
/*< 12134	    continue >*/
L12134:
	    ;
	}
/*< 12135	continue >*/
L12135:
	;
    }
/*< 	call  >*/
    messag_(&col_1.iclred, "The disintegrator has reached critical mass.  Yo\
u are dead.^G^E", (ftnlen)63);
/*< 	call cease( x, y, z, player ) >*/
    cease_(&x, &y, &z__, &player);
/*< 	goto 1600 >*/
    goto L1600;
/*< 12150	call messag(iclyel,'You need the disintegrator.^E') >*/
L12150:
    messag_(&col_1.iclyel, "You need the disintegrator.^E", (ftnlen)29);
/*< 	goto 1600 >*/
    goto L1600;
/* ****** CAST **************************************************** */
/*< 12500	if( name1.lt.52 .or. name2.lt.1 .or. name2.gt.52 ) goto 7800 >*/
L12500:
    if (name1 < 52 || name2 < 1 || name2 > 52) {
	goto L7800;
    }
/*< 	call messag(icllbl,'Casting spell ^E') >*/
    messag_(&col_1.icllbl, "Casting spell ^E", (ftnlen)16);
/*< 	call pname( name1, -17 ) >*/
    pname_(&name1, &c_n17);
/*< 	call string(1,' at ^E') >*/
    string_(&c__1, " at ^E", (ftnlen)6);
/*< 	call pname( name2, -17 ) >*/
    pname_(&name2, &c_n17);
/*< 	goto 1600 >*/
    goto L1600;
/*< 13000	call clrscr >*/
L13000:
    clrscr_();
/*< 	call colcur( 5, 10 ) >*/
    colcur_(&c__5, &c__10);
/*< 	call string(1,'You have left the dungeon with^E') >*/
    string_(&c__1, "You have left the dungeon with^E", (ftnlen)32);
/*< 	if( holds( player, disind ) .ne. 0 ) goto 13100 >*/
    if (holds_(&player, &disind) != 0) {
	goto L13100;
    }
/*< 	call string(1,'out the disintegrator.  You have failed.^M^J^E') >*/
    string_(&c__1, "out the disintegrator.  You have failed.^M^J^E", (ftnlen)
	    46);
/*< 	call cease( x, y, z, player ) >*/
    cease_(&x, &y, &z__, &player);
/*< 13100	call string(1,' the disintegrator and $^E') >*/
L13100:
    string_(&c__1, " the disintegrator and $^E", (ftnlen)26);
/*< 	ival = cost( player ) >*/
    ival = cost_(&player);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	call string(1,' to your credit.^G^G^E') >*/
    string_(&c__1, " to your credit.^G^G^E", (ftnlen)22);
/*< 	call colcur( 32, 8 ) >*/
    colcur_(&c__32, &c__8);
/*< 	call string(1,'Congratulations.^M^J^B') >*/
    string_(&c__1, "Congratulations.^M^J^B", (ftnlen)22);
/*< 	call putval(5, 0,2843,  20, 75, player ) >*/
    putval_(&c__5, &c__0, &c__2843, &c__20, &c__75, &player);
/*< 	call ofile( 2, filesp, 0 ) >*/
    ofile_(&c__2, filesp, &c__0);
/*< 	if( lerror(0) ) goto 13200 >*/
    if (lerror_(&c__0)) {
	goto L13200;
    }
/*< 	filesp( 5 ) = isxbit('DAT~') >*/
    filesp[4] = isxbit_("DAT~", (ftnlen)4);
/*< 	call rfile( 2, filesp ) >*/
    rfile_(&c__2, filesp);
/*< 	if( lerror(0) ) goto 13200 >*/
    if (lerror_(&c__0)) {
	goto L13200;
    }
/*< 	call ofile( 3, filesp, 0 ) >*/
    ofile_(&c__3, filesp, &c__0);
/*< 	if( lerror(0) ) goto 13200 >*/
    if (lerror_(&c__0)) {
	goto L13200;
    }
/*< 	filesp( 5 ) = isxbit('TMP~') >*/
    filesp[4] = isxbit_("TMP~", (ftnlen)4);
/*< 	call wfile( 3, filesp ) >*/
    wfile_(&c__3, filesp);
/*< 	if( lerror(0) ) goto 13200 >*/
    if (lerror_(&c__0)) {
	goto L13200;
    }
/*< 	call xfer( 2, 3 ) >*/
    xfer_(&c__2, &c__3);
/*< 	call select( 3 ) >*/
    select_(&c__3);
/*< 	call datime(index1,index2,index3,index4,index5,index6,ival) >*/
    datime_(&index1, &index2, &index3, &index4, &index5, &index6, &ival);
/*< 	call number(1, index1 ) >*/
    number_(&c__1, &index1);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call string(3, month( index2 ), 5, 3 ) >*/
    string_(&c__3, &month[index2 - 1], &c__5, &c__3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call number(1, index3 ) >*/
    number_(&c__1, &index3);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call number(2, index4, -2 ) >*/
    number_(&c__2, &index4, &c_n2);
/*< 	call chrout(58) >*/
    chrout_(&c__58);
/*< 	call number(2, index5, -2 ) >*/
    number_(&c__2, &index5, &c_n2);
/*< 	call chrout(58) >*/
    chrout_(&c__58);
/*< 	call number(2, index6, -2 ) >*/
    number_(&c__2, &index6, &c_n2);
/*< 	call string(1,'  "^E') >*/
    string_(&c__1, "  \"^E", (ftnlen)5);
/*< 	call pname( player, -17 ) >*/
    pname_(&player, &c_n17);
/*< 	call string(1,'"  Exp:^E') >*/
    string_(&c__1, "\"  Exp:^E", (ftnlen)9);
/*< 	call getval(6, 0,2871,  7, player, 2, ival ) >*/
    getval_(&c__6, &c__0, &c__2871, &c__7, &player, &c__2, &ival);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	call string(1,'   Str: ^E') >*/
    string_(&c__1, "   Str: ^E", (ftnlen)10);
/*< 	call number(1, streng ) >*/
    number_(&c__1, &streng);
/*< 	call chrout(40) >*/
    chrout_(&c__40);
/*< 	call number(1, ustren ) >*/
    number_(&c__1, &ustren);
/*< 	call string(1,')  Dex: ^E') >*/
    string_(&c__1, ")  Dex: ^E", (ftnlen)10);
/*< 	call number(1, dexter ) >*/
    number_(&c__1, &dexter);
/*< 	call chrout(40) >*/
    chrout_(&c__40);
/*< 	call number(1, udex ) >*/
    number_(&c__1, &udex);
/*< 	call string(1,')  Val: $ ^E') >*/
    string_(&c__1, ")  Val: $ ^E", (ftnlen)12);
/*< 	call number(1, cost( player ) ) >*/
    i__1 = cost_(&player);
    number_(&c__1, &i__1);
/*< 	call string(1,'^M^J^I^E') >*/
    string_(&c__1, "^M^J^I^E", (ftnlen)8);
/*< 	call getval(6, 0,2884,  7, player, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__2884, &c__7, &player, &c__1, &ival);
/*< 	call syswho( ival ) >*/
    syswho_(&ival);
/*< 	call string(1,'^M^J^B') >*/
    string_(&c__1, "^M^J^B", (ftnlen)6);
/*< 	ival = filesp( 4 ) >*/
    ival = filesp[3];
/*< 	filesp( 4 ) = 0 >*/
    filesp[3] = 0;
/*< 	call rnfile( 2, filesp ) >*/
    rnfile_(&c__2, filesp);
/*< 	filesp( 4 ) = ival >*/
    filesp[3] = ival;
/*< 	filesp( 5 ) = isxbit('DAT~') >*/
    filesp[4] = isxbit_("DAT~", (ftnlen)4);
/*< 	call rnfile( 3, filesp ) >*/
    rnfile_(&c__3, filesp);
/*< 	call select( 0 ) >*/
    select_(&c__0);
/*< 13200	call cease( x, y, z, player ) >*/
L13200:
    cease_(&x, &y, &z__, &player);
/*< 	end >*/
} /* fmain_ */

#undef month


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

