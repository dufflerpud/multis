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
    integer filesp[13];
} filcom_;

#define filcom_1 filcom_

struct arrcom_1_ {
    integer name__, dest, time, wplace, restrn, wstar, wplan, wmoon, ptype, 
	    pop, poporg, hunger, oprind, plcorg, nuaplc, org, res, type__, 
	    shiptr, orbit, hmflag, wprogr, pc, onerpc, tmtonx, prdtim, power, 
	    powdst, progs, prgjob, nofuni, empcod, empdst, empc, empinf, 
	    ncstru, nverb, ncode, ndest, stradr, lenprg, numusr, mestrn, 
	    ptime, useful;
};

#define arrcom_1 (*(struct arrcom_1_ *) &arrcom_)

struct {
    integer lasplc, numstr, nprogs, lunit, player, maxuni, maxprg, maxmem, 
	    maxpla;
} usrcom_;

#define usrcom_1 usrcom_

struct {
    integer iclwhi, icldbl, iclred, icllbl, iclpur, iclgre, iclyel, iclbla;
} col_;

#define col_1 col_

struct {
    integer mesflg;
} mescom_;

#define mescom_1 mescom_

/* Initialized data */

struct {
    integer e_1[45];
    } arrcom_ = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 
	    18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 
	    34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 };


/* Table of constant values */

static integer c__0 = 0;
static integer c__1 = 1;
static integer c__3 = 3;
static integer c__3000 = 3000;
static integer c__6 = 6;
static integer c__20 = 20;
static integer c_n1 = -1;
static integer c__2 = 2;
static integer c__5 = 5;
static integer c__108 = 108;
static integer c__7 = 7;
static integer c__109 = 109;
static integer c__111 = 111;
static integer c__63 = 63;
static integer c__16 = 16;
static integer c__10 = 10;
static integer c__137 = 137;
static integer c__36 = 36;
static integer c__138 = 138;
static integer c__12 = 12;
static integer c__140 = 140;
static integer c__142 = 142;
static integer c__143 = 143;
static integer c__146 = 146;
static integer c__147 = 147;
static integer c__4 = 4;
static integer c__148 = 148;
static integer c__149 = 149;
static integer c__153 = 153;
static integer c__18 = 18;
static integer c__154 = 154;
static integer c__155 = 155;
static integer c__156 = 156;
static integer c__9 = 9;
static integer c__157 = 157;
static integer c__158 = 158;
static integer c__159 = 159;
static integer c__160 = 160;
static integer c__165 = 165;
static integer c__173 = 173;
static integer c__174 = 174;
static integer c__178 = 178;
static integer c__181 = 181;
static integer c__182 = 182;
static integer c__183 = 183;
static integer c__184 = 184;
static integer c__185 = 185;
static integer c__186 = 186;
static integer c__187 = 187;
static integer c__190 = 190;
static integer c__191 = 191;
static integer c__192 = 192;
static integer c__193 = 193;
static integer c__198 = 198;
static integer c__203 = 203;
static integer c__204 = 204;
static integer c__208 = 208;
static integer c__211 = 211;
static integer c__212 = 212;
static integer c__214 = 214;
static integer c__215 = 215;
static integer c__216 = 216;
static integer c__217 = 217;
static integer c__218 = 218;
static integer c__72 = 72;
static integer c__219 = 219;
static integer c__222 = 222;
static integer c__17 = 17;
static integer c__254 = 254;
static integer c__255 = 255;
static integer c__256 = 256;
static integer c__22 = 22;
static integer c__261 = 261;
static integer c__262 = 262;
static integer c__276 = 276;
static integer c__32 = 32;
static integer c__280 = 280;
static integer c__281 = 281;
static integer c__282 = 282;
static integer c__283 = 283;
static integer c__284 = 284;
static integer c__285 = 285;
static integer c__300 = 300;
static integer c__301 = 301;
static integer c__302 = 302;
static integer c__303 = 303;
static integer c__304 = 304;
static integer c__305 = 305;
static integer c__306 = 306;
static integer c__310 = 310;
static integer c__19 = 19;
static integer c__312 = 312;
static integer c__313 = 313;
static integer c__314 = 314;
static integer c__315 = 315;
static integer c__316 = 316;
static integer c__317 = 317;
static integer c__318 = 318;
static integer c__319 = 319;
static integer c__13 = 13;
static integer c__320 = 320;
static integer c__14 = 14;
static integer c__321 = 321;
static integer c__15 = 15;
static integer c__323 = 323;
static integer c__324 = 324;
static integer c__80 = 80;
static integer c__363 = 363;
static integer c__365 = 365;
static integer c__366 = 366;
static integer c__367 = 367;
static integer c__369 = 369;
static integer c__370 = 370;
static integer c__372 = 372;
static integer c__374 = 374;
static integer c__376 = 376;
static integer c_n2 = -2;
static integer c__383 = 383;
static integer c__386 = 386;
static integer c__387 = 387;
static integer c__394 = 394;
static integer c__396 = 396;
static integer c__398 = 398;
static integer c__400 = 400;
static integer c__401 = 401;
static integer c__402 = 402;
static integer c__403 = 403;
static integer c__50 = 50;
static integer c__406 = 406;
static integer c__408 = 408;
static integer c__409 = 409;
static integer c__412 = 412;
static integer c__414 = 414;
static integer c__416 = 416;
static integer c__423 = 423;
static integer c__429 = 429;
static integer c__431 = 431;
static integer c__433 = 433;
static integer c__435 = 435;
static integer c__444 = 444;
static integer c__445 = 445;
static integer c__446 = 446;
static integer c__453 = 453;
static integer c__454 = 454;
static integer c__455 = 455;
static integer c__459 = 459;
static integer c__461 = 461;
static integer c__464 = 464;
static integer c__471 = 471;
static integer c__473 = 473;
static integer c__100 = 100;
static integer c__483 = 483;
static integer c__485 = 485;
static integer c__486 = 486;
static integer c__488 = 488;
static integer c__489 = 489;
static integer c__492 = 492;
static integer c__494 = 494;
static integer c__495 = 495;
static integer c__500 = 500;
static integer c__496 = 496;
static integer c__497 = 497;
static integer c__498 = 498;
static integer c__501 = 501;
static integer c__503 = 503;
static integer c__505 = 505;
static integer c__507 = 507;
static integer c__508 = 508;
static integer c__509 = 509;
static integer c__510 = 510;
static integer c__53 = 53;
static integer c__512 = 512;
static integer c__513 = 513;
static integer c__514 = 514;
static integer c__516 = 516;
static integer c__519 = 519;
static integer c__521 = 521;
static integer c__522 = 522;
static integer c__524 = 524;
static integer c__526 = 526;
static integer c__528 = 528;
static integer c__531 = 531;
static integer c__532 = 532;
static integer c__536 = 536;
static integer c__539 = 539;
static integer c__541 = 541;
static integer c__543 = 543;
static integer c__544 = 544;
static integer c__545 = 545;
static integer c__548 = 548;
static integer c__581 = 581;
static integer c__582 = 582;
static integer c__583 = 583;
static integer c__589 = 589;
static integer c__593 = 593;
static integer c__598 = 598;
static integer c__599 = 599;
static integer c__601 = 601;
static integer c__603 = 603;
static integer c__604 = 604;
static integer c__610 = 610;
static integer c__612 = 612;
static integer c__614 = 614;
static integer c__619 = 619;
static integer c__620 = 620;
static integer c__622 = 622;
static integer c__624 = 624;
static integer c__625 = 625;
static integer c__628 = 628;
static integer c__631 = 631;
static integer c__632 = 632;
static integer c__644 = 644;
static integer c__646 = 646;
static integer c__648 = 648;
static integer c__652 = 652;
static integer c__654 = 654;
static integer c__658 = 658;
static integer c__659 = 659;
static integer c__661 = 661;
static integer c__663 = 663;
static integer c__664 = 664;
static integer c__665 = 665;
static integer c__676 = 676;
static integer c__678 = 678;
static integer c__680 = 680;
static integer c__687 = 687;
static integer c__689 = 689;
static integer c__690 = 690;
static integer c__692 = 692;
static integer c__693 = 693;
static integer c__700 = 700;
static integer c__703 = 703;
static integer c__705 = 705;
static integer c__717 = 717;
static integer c__721 = 721;
static integer c__722 = 722;
static integer c__729 = 729;
static integer c__730 = 730;
static integer c__731 = 731;
static integer c__732 = 732;
static integer c__737 = 737;
static integer c__755 = 755;
static integer c__760 = 760;
static integer c__765 = 765;
static integer c__770 = 770;
static integer c__772 = 772;
static integer c__773 = 773;
static integer c__775 = 775;
static integer c__776 = 776;
static integer c__797 = 797;
static integer c__801 = 801;
static integer c__802 = 802;
static integer c__803 = 803;
static integer c__806 = 806;
static integer c__808 = 808;
static integer c__810 = 810;
static integer c__817 = 817;
static integer c__819 = 819;
static integer c__793 = 793;
static integer c__824 = 824;
static integer c__826 = 826;
static integer c__835 = 835;
static integer c__863 = 863;
static integer c__864 = 864;
static integer c__865 = 865;
static integer c__866 = 866;
static integer c__867 = 867;
static integer c__868 = 868;
static integer c__875 = 875;
static integer c__877 = 877;
static integer c__921 = 921;
static integer c__923 = 923;
static integer c__925 = 925;
static integer c__928 = 928;
static integer c__933 = 933;
static integer c__935 = 935;
static integer c__937 = 937;
static integer c__939 = 939;
static integer c__940 = 940;
static integer c__941 = 941;
static integer c__942 = 942;
static integer c__943 = 943;
static integer c__944 = 944;
static integer c__945 = 945;
static integer c__946 = 946;
static integer c__947 = 947;
static integer c__948 = 948;
static integer c__950 = 950;
static integer c__951 = 951;
static integer c__953 = 953;
static integer c__954 = 954;
static integer c__955 = 955;
static integer c__976 = 976;
static integer c__977 = 977;
static integer c__978 = 978;
static integer c__979 = 979;
static integer c__980 = 980;
static integer c__981 = 981;
static integer c__982 = 982;
static integer c__983 = 983;
static integer c__985 = 985;
static integer c__987 = 987;
static integer c__988 = 988;
static integer c__994 = 994;
static integer c__996 = 996;
static integer c__998 = 998;
static integer c__1003 = 1003;
static integer c__1004 = 1004;
static integer c__1009 = 1009;
static integer c__1011 = 1011;
static integer c__1059 = 1059;
static integer c__1071 = 1071;
static integer c__1072 = 1072;
static integer c__1073 = 1073;
static integer c__24 = 24;
static integer c__1085 = 1085;
static integer c__1086 = 1086;
static integer c__47 = 47;
static integer c__1091 = 1091;
static integer c__60 = 60;
static real c_b1290 = (float)10.;
static integer c__69 = 69;
static integer c__4975 = 4975;
static integer c__91 = 91;
static integer c__101 = 101;
static integer c__37 = 37;
static integer c__2724 = 2724;
static integer c_b1381 = 1234567;
static real c_b1382 = (float)2.;
static integer c__9862 = 9862;
static integer c__2561 = 2561;
static integer c__25 = 25;
static integer c__90 = 90;
static integer c__1214 = 1214;
static integer c__1219 = 1219;
static integer c__1224 = 1224;
static integer c__11 = 11;
static integer c__1229 = 1229;
static integer c__8 = 8;
static integer c__1262 = 1262;
static integer c__1264 = 1264;
static integer c__1266 = 1266;
static integer c__1268 = 1268;
static integer c__1286 = 1286;
static integer c__1287 = 1287;
static integer c__39 = 39;
static integer c__45 = 45;
static integer c__92 = 92;
static integer c__124 = 124;
static integer c__79 = 79;
static integer c__35 = 35;
static integer c__1420 = 1420;
static integer c__1466 = 1466;
static integer c__1467 = 1467;
static integer c__1468 = 1468;
static integer c__1470 = 1470;
static integer c__1475 = 1475;
static integer c__1507 = 1507;
static integer c__1517 = 1517;
static integer c__1518 = 1518;
static integer c__1530 = 1530;
static integer c__1532 = 1532;
static integer c__1536 = 1536;
static integer c__1537 = 1537;
static integer c__1538 = 1538;
static integer c__1545 = 1545;
static integer c__1547 = 1547;
static integer c__1554 = 1554;
static integer c__1556 = 1556;
static integer c__1558 = 1558;
static integer c__1559 = 1559;
static integer c__1564 = 1564;
static integer c__1572 = 1572;
static integer c__1575 = 1575;
static integer c__1578 = 1578;
static integer c__1581 = 1581;
static integer c__1584 = 1584;
static integer c__33 = 33;
static integer c__1600 = 1600;
static integer c__1603 = 1603;
static integer c__1607 = 1607;
static integer c__1610 = 1610;
static integer c__1613 = 1613;
static integer c__1616 = 1616;
static integer c__1619 = 1619;
static integer c__1665 = 1665;
static integer c__1675 = 1675;
static integer c__1676 = 1676;
static integer c__1677 = 1677;
static integer c__23 = 23;
static integer c__1692 = 1692;
static integer c__1698 = 1698;
static integer c__1705 = 1705;
static integer c__1712 = 1712;
static integer c__1756 = 1756;
static integer c__1758 = 1758;
static integer c__1759 = 1759;
static integer c__1767 = 1767;
static integer c__1769 = 1769;
static integer c__1771 = 1771;
static integer c__67 = 67;
static integer c__1953 = 1953;
static integer c__1955 = 1955;
static integer c__2004 = 2004;
static integer c__2013 = 2013;
static integer c__58 = 58;
static integer c__2017 = 2017;
static integer c__2023 = 2023;
static integer c__2025 = 2025;
static integer c__2033 = 2033;
static integer c__2042 = 2042;
static integer c__42 = 42;
static integer c_n4 = -4;
static integer c__2085 = 2085;
static integer c__29 = 29;
static integer c__2090 = 2090;
static integer c__48 = 48;
static integer c__2097 = 2097;
static integer c__2098 = 2098;
static integer c__2099 = 2099;
static integer c__2117 = 2117;
static integer c__2118 = 2118;
static integer c__2119 = 2119;
static integer c_n6 = -6;
static integer c__1000 = 1000;
static integer c__2421 = 2421;
static integer c__2422 = 2422;
static integer c__2423 = 2423;
static integer c__2434 = 2434;
static integer c__2462 = 2462;
static integer c__2464 = 2464;
static integer c__2466 = 2466;
static integer c__2497 = 2497;
static integer c__26 = 26;
static integer c__44 = 44;
static integer c__40 = 40;
static integer c__2650 = 2650;
static integer c__2658 = 2658;
static integer c__2659 = 2659;
static integer c__2660 = 2660;
static integer c__2661 = 2661;
static integer c__2662 = 2662;
static integer c__2663 = 2663;
static integer c__2664 = 2664;
static integer c__2665 = 2665;
static integer c__2668 = 2668;
static integer c__2676 = 2676;
static integer c__2678 = 2678;
static integer c__2694 = 2694;
static integer c__2695 = 2695;
static integer c__2698 = 2698;
static integer c__2700 = 2700;
static integer c__1048 = 1048;
static integer c__1049 = 1049;
static integer c__21 = 21;
static integer c__2721 = 2721;
static integer c__2729 = 2729;
static integer c__2732 = 2732;
static integer c__2742 = 2742;
static integer c__2743 = 2743;
static integer c__2744 = 2744;
static integer c__2745 = 2745;
static integer c__1026 = 1026;
static integer c__2763 = 2763;
static integer c__2768 = 2768;
static integer c__2784 = 2784;
static integer c__2786 = 2786;
static integer c__2787 = 2787;
static integer c__2792 = 2792;
static integer c__2793 = 2793;
static integer c__2806 = 2806;
static integer c__2808 = 2808;
static integer c__2809 = 2809;
static integer c__2810 = 2810;
static integer c__2822 = 2822;
static integer c__2824 = 2824;
static integer c__2826 = 2826;
static integer c__2847 = 2847;
static integer c__2848 = 2848;
static integer c__2850 = 2850;
static integer c__2851 = 2851;
static integer c__2852 = 2852;
static integer c__2857 = 2857;
static integer c__2862 = 2862;
static integer c__2865 = 2865;
static integer c__2866 = 2866;
static integer c__2917 = 2917;
static integer c__2936 = 2936;
static integer c__2937 = 2937;
static integer c__2940 = 2940;
static integer c__2942 = 2942;
static integer c__2943 = 2943;
static integer c__2944 = 2944;
static integer c__2946 = 2946;
static integer c__2947 = 2947;
static integer c__2950 = 2950;
static integer c__2951 = 2951;
static integer c__2952 = 2952;
static integer c__2960 = 2960;
static integer c__2961 = 2961;
static integer c__2967 = 2967;
static integer c__2969 = 2969;
static integer c__2978 = 2978;
static integer c__2979 = 2979;
static integer c__2984 = 2984;
static integer c__2986 = 2986;
static integer c__2988 = 2988;
static integer c__2989 = 2989;
static integer c_b2912 = 262143;
static integer c__2993 = 2993;
static integer c__1035 = 1035;
static integer c__3106 = 3106;
static integer c__3108 = 3108;
static integer c__3109 = 3109;
static integer c__3117 = 3117;
static integer c__3127 = 3127;
static integer c__3128 = 3128;
static integer c__3146 = 3146;
static integer c__3148 = 3148;
static integer c__3150 = 3150;
static integer c__3151 = 3151;
static integer c__3155 = 3155;
static integer c__3156 = 3156;
static integer c__3162 = 3162;
static integer c__3163 = 3163;
static integer c__3168 = 3168;
static integer c__3171 = 3171;
static integer c__3174 = 3174;
static integer c__3183 = 3183;
static integer c__3193 = 3193;
static integer c__3196 = 3196;
static integer c__3197 = 3197;
static integer c__3199 = 3199;
static integer c__3200 = 3200;
static integer c__3201 = 3201;
static integer c__3205 = 3205;
static integer c__3206 = 3206;
static integer c__3207 = 3207;
static integer c__3209 = 3209;
static integer c__3210 = 3210;
static integer c__3211 = 3211;
static integer c__3218 = 3218;
static integer c__3220 = 3220;
static integer c__3221 = 3221;
static integer c__3222 = 3222;
static integer c__3261 = 3261;
static integer c__3263 = 3263;
static integer c__3265 = 3265;
static integer c__3268 = 3268;
static integer c__3269 = 3269;
static integer c__3270 = 3270;
static integer c__3271 = 3271;
static integer c__3272 = 3272;
static integer c__3273 = 3273;
static integer c__3278 = 3278;
static integer c__3281 = 3281;
static integer c__3282 = 3282;
static integer c__3286 = 3286;
static integer c__3287 = 3287;
static integer c__3298 = 3298;
static integer c__3300 = 3300;
static integer c__3302 = 3302;
static integer c__3304 = 3304;
static integer c__3308 = 3308;
static integer c__3309 = 3309;
static integer c__3310 = 3310;
static integer c__3311 = 3311;
static integer c__3312 = 3312;
static integer c__3313 = 3313;
static integer c__3318 = 3318;
static integer c__3321 = 3321;
static integer c__3322 = 3322;
static integer c__3326 = 3326;
static integer c__3327 = 3327;
static integer c__3332 = 3332;
static integer c__3353 = 3353;
static integer c__3355 = 3355;
static integer c__3365 = 3365;

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
/*< 	subroutine bugmsg( msgara, com, msglen ) >*/
/* Subroutine */ int bugmsg_(msgara, com, msglen, msgara_len)
char *msgara;
integer *com, *msglen;
ftnlen msgara_len;
{
    extern /* Subroutine */ int nap_(), grafon_(), select_(), curbuf_(), 
	    number_(), exprog_(), string_(), cursor_();

/*< 	implicit integer ( a - z ) >*/
/*< 	character msgara( 80 ) >*/
/*< 	integer com( 80 ) >*/
/*< 	call select( 0 ) >*/
    /* Parameter adjustments */
    --com;
    --msgara;

    /* Function Body */
    select_(&c__0);
/*< 	call string(1,'^M^JFATAL ERROR: ^E') >*/
    string_(&c__1, "^M^JFATAL ERROR: ^E", (ftnlen)19);
/*< 	call string(1, msgara ) >*/
    string_(&c__1, msgara + 1, (ftnlen)1);
/*< 	if( msglen .le. 0 ) goto 200 >*/
    if (*msglen <= 0) {
	goto L200;
    }
/*< 	call string(1,'  FOUND IN LINE:^M^J^E') >*/
    string_(&c__1, "  FOUND IN LINE:^M^J^E", (ftnlen)22);
/*< 	call string(3, com, 1, msglen ) >*/
    string_(&c__3, &com[1], &c__1, msglen);
/*< 	goto 300 >*/
    goto L300;
/*< 200	if( msglen .eq. 0 ) goto 300 >*/
L200:
    if (*msglen == 0) {
	goto L300;
    }
/*< 	call string(1,' = ^E') >*/
    string_(&c__1, " = ^E", (ftnlen)5);
/*< 	call number(1, com(1) ) >*/
    number_(&c__1, &com[1]);
/*< 300	call grafon >*/
L300:
    grafon_();
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call nap( 3000, 0 ) >*/
    nap_(&c__3000, &c__0);
/*< 	call exprog >*/
    exprog_();
/*< 	end >*/
} /* bugmsg_ */

/*< 	function firstc( sixb ) >*/
integer firstc_(sixb)
integer *sixb;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static integer ac;
    extern /* Subroutine */ int convrt_();

/*< 	implicit integer ( a - z ) >*/
/*< 	call convrt( sixb, 1, 6, ac, 0 ) >*/
    convrt_(sixb, &c__1, &c__6, &ac, &c__0);
/*< 	firstc = ac - 32 >*/
    ret_val = ac - 32;
/*< 	return  >*/
    return ret_val;
/*< 	end >*/
} /* firstc_ */


/*< 	subroutine initdb( com, p, lprivd ) >*/
/* Subroutine */ int initdb_(com, p, lprivd)
integer *com, *p;
logical *lprivd;
{
    /* Initialized data */

    static logical stalon = FALSE_;

    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    extern /* Subroutine */ int d_();
    static integer f[5], i__, j, k, t[5];
    extern integer job_();
    static integer len, npl;
    static logical ieof;
    extern integer icon_();
    static integer ival;
    extern /* Subroutine */ int init_();
    static integer temp, star;
    extern /* Subroutine */ int ccore_(), ofile_(), rfile_(), close_();
    static integer itype;
    extern /* Subroutine */ int mcall1_();
    static integer begadr;
    extern /* Subroutine */ int enable_();
    static integer begblk;
    extern integer nhiblk_();
    extern /* Subroutine */ int filget_();
    extern integer iserch_();
    extern logical lerror_();
    extern integer isxbit_();
    extern /* Subroutine */ int bugmsg_(), hiprot_();
    static integer toploc;
    extern /* Subroutine */ int putval_(), getval_(), skpcom_(), getnum_(), 
	    convrt_();
    static integer planum, numpla, moonum, numoon;
    extern /* Subroutine */ int unlock_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer com( 80 ), filesp( 13 ), f(5), t(5), p(20) >*/
/*< 	logical stalon, lprivd, lerror, ieof >*/
/*< 	common/filcom/filesp >*/
/*< 	commo >*/
/*< 	commo >*/
/* ***	DEFINE ARRAY NAMES */
/*< 	data >*/
/*<  >*/
    /* Parameter adjustments */
    --p;
    --com;

    /* Function Body */
/*< 	data stalon/.false./ >*/
/*< 	call enable >*/
    enable_();
/*< 	if(iserch(p,isxbit('EMPIRE~'),20).ne.0.and.lprivd) goto 45 >*/
    i__1 = isxbit_("EMPIRE~", (ftnlen)7);
    if (iserch_(&p[1], &i__1, &c__20) != 0 && *lprivd) {
	goto L45;
    }
/*< 	if( job(-1) .eq. 0 ) goto 50	! non tops10 do not have upd files >*/
    if (job_(&c_n1) == 0) {
	goto L50;
    }
/*< 	call ofile( 2, filesp, isxbit('@    ,~') ) >*/
    i__1 = isxbit_("@    ,~", (ftnlen)7);
    ofile_(&c__2, filcom_1.filesp, &i__1);
/*< 	if(lerror(0))call bugmsg('INIT: UPD OPEN FAILURE.^E',0,0) >*/
    if (lerror_(&c__0)) {
	bugmsg_("INIT: UPD OPEN FAILURE.^E", &c__0, &c__0, (ftnlen)25);
    }
/*< 	filesp(5) = isxbit('UPD~') >*/
    filcom_1.filesp[4] = isxbit_("UPD~", (ftnlen)4);
/*< 	call rfile( 2, filesp ) >*/
    rfile_(&c__2, filcom_1.filesp);
/*< 	if( lerror(0) ) goto 50 >*/
    if (lerror_(&c__0)) {
	goto L50;
    }
/* ***	UPDATE FILE EXISTS - READ IT INTO HISEGMENT */
/*< 	call hiprot( 0 ) >*/
    hiprot_(&c__0);
/*< 	begblk = nhiblk(0) >*/
    begblk = nhiblk_(&c__0);
/*< 	call filget( 2, toploc, ieof ) >*/
    filget_(&c__2, &toploc, &ieof);
/*< 	call ccore( 0, toploc )			! read length, inc core >*/
    ccore_(&c__0, &toploc);
/*< 	if(lerror(0)) call bugmsg('INIT: CANNOT ALLOCATE CORE.^E',0,0) >*/
    if (lerror_(&c__0)) {
	bugmsg_("INIT: CANNOT ALLOCATE CORE.^E", &c__0, &c__0, (ftnlen)29);
    }
/*< 	call d( begblk+3, toploc ) >*/
    i__1 = begblk + 3;
    d_(&i__1, &toploc);
/*< 	do 40 i = 1, 490 >*/
    for (i__ = 1; i__ <= 490; ++i__) {
/*< 	    call filget( 2, begadr, ieof ) >*/
	filget_(&c__2, &begadr, &ieof);
/*< 	    call d( begblk+i+3, begadr ) >*/
	i__1 = begblk + i__ + 3;
	d_(&i__1, &begadr);
/*< 40	continue >*/
/* L40: */
    }
/*< 41	continue >*/
L41:
/*< 	call filget( 2, ival, ieof ) >*/
    filget_(&c__2, &ival, &ieof);
/*< 	if( ieof ) goto 42 >*/
    if (ieof) {
	goto L42;
    }
/*< 	call d( begadr, ival ) >*/
    d_(&begadr, &ival);
/*< 	begadr = begadr + 1 >*/
    ++begadr;
/*< 	goto 41 >*/
    goto L41;
/*< 42	j = 1 >*/
L42:
    j = 1;
/*< 	call putval(5, 0,108,  useful, 7, 0 ) >*/
    putval_(&c__5, &c__0, &c__108, &arrcom_1.useful, &c__7, &c__0);
/*< 43	call getval(5, 0,109,  progs, j, ival ) >*/
L43:
    getval_(&c__5, &c__0, &c__109, &arrcom_1.progs, &j, &ival);
/*< 	if( ival .eq. 0 ) goto 800 >*/
    if (ival == 0) {
	goto L800;
    }
/*< 	call putval(5, 0,111,  ncstru, j, 63 ) >*/
    putval_(&c__5, &c__0, &c__111, &arrcom_1.ncstru, &j, &c__63);
/*< 	j = j + 1 >*/
    ++j;
/*< 	goto 43 >*/
    goto L43;
/* ***	NOT READING UPD FILE - GET DATA FILE. */
/*< 45	stalon = .true. >*/
L45:
    stalon = TRUE_;
/*< 50	call ofile( 2, filesp, isxbit('@     ~') ) >*/
L50:
    i__1 = isxbit_("@     ~", (ftnlen)7);
    ofile_(&c__2, filcom_1.filesp, &i__1);
/*< 	if( lerror(0) ) call bugmsg('INIT: DAT OPEN FAILURE.^E',0,0) >*/
    if (lerror_(&c__0)) {
	bugmsg_("INIT: DAT OPEN FAILURE.^E", &c__0, &c__0, (ftnlen)25);
    }
/*< 	filesp(5) = isxbit('DAT~') >*/
    filcom_1.filesp[4] = isxbit_("DAT~", (ftnlen)4);
/*< 	call rfile( 2, filesp ) >*/
    rfile_(&c__2, filcom_1.filesp);
/*< 	if(lerror(0))call bugmsg('INIT: LOOKUP FAILURE.^E',0,0) >*/
    if (lerror_(&c__0)) {
	bugmsg_("INIT: LOOKUP FAILURE.^E", &c__0, &c__0, (ftnlen)23);
    }
/*< 	call skpcom( com, len ) >*/
    skpcom_(&com[1], &len);
/*< 	call  >*/
    getnum_(&c__16, &com[1], &len, &usrcom_1.numstr, &c__10, &npl, &c__10, &
	    usrcom_1.maxuni, &c__10, &usrcom_1.nprogs, &c__10, &
	    usrcom_1.maxprg, &c__10, &usrcom_1.maxmem, &c__10, &
	    usrcom_1.maxpla, &c__10);
/*< 	if(numstr.le.0)call bugmsg('INIT: NUMSTR<=0.^E',com,len) >*/
    if (usrcom_1.numstr <= 0) {
	bugmsg_("INIT: NUMSTR<=0.^E", &com[1], &len, (ftnlen)18);
    }
/*< 	if(npl.lt.numstr)call bugmsg('INIT: NPL<NUMSTR.^E',com,len) >*/
    if (npl < usrcom_1.numstr) {
	bugmsg_("INIT: NPL<NUMSTR.^E", &com[1], &len, (ftnlen)19);
    }
/*< 	if(maxuni.le.0)call bugmsg('INIT: MAXUNI<=0.^E',com,len) >*/
    if (usrcom_1.maxuni <= 0) {
	bugmsg_("INIT: MAXUNI<=0.^E", &com[1], &len, (ftnlen)18);
    }
/*< 	if(nprogs.le.0)call bugmsg('INIT: NPROGS<=0.^E',com,len) >*/
    if (usrcom_1.nprogs <= 0) {
	bugmsg_("INIT: NPROGS<=0.^E", &com[1], &len, (ftnlen)18);
    }
/*< 	if(maxprg.le.0)call bugmsg('INIT: MAXPRG<=0.^E',com,len) >*/
    if (usrcom_1.maxprg <= 0) {
	bugmsg_("INIT: MAXPRG<=0.^E", &com[1], &len, (ftnlen)18);
    }
/*< 	if(maxmem.lt.maxprg)call bugmsg('INIT: MAXMEM<MAXPRG.^E',com,len) >*/
    if (usrcom_1.maxmem < usrcom_1.maxprg) {
	bugmsg_("INIT: MAXMEM<MAXPRG.^E", &com[1], &len, (ftnlen)22);
    }
/*< 	if(maxpla.le.0)call bugmsg('INIT: MAXPLA<=0.^E',com,len) >*/
    if (usrcom_1.maxpla <= 0) {
	bugmsg_("INIT: MAXPLA<=0.^E", &com[1], &len, (ftnlen)18);
    }
/* ********************************************************************** */
/*< 	call init(6, 0,137,  name, 36, numstr, 2 )	! init star name array >*/
    init_(&c__6, &c__0, &c__137, &arrcom_1.name__, &c__36, &usrcom_1.numstr, &
	    c__2);
/*< 	call init(6, 0,138,  dest, 12, numstr, 5 )	! possible destinations >*/
    init_(&c__6, &c__0, &c__138, &arrcom_1.dest, &c__12, &usrcom_1.numstr, &
	    c__5);
/* for hyper jump */
/*< 	call init(6, 0,140,  time, 7, numstr, 7 )		! time required to jump >*/
    init_(&c__6, &c__0, &c__140, &arrcom_1.time, &c__7, &usrcom_1.numstr, &
	    c__7);
/* to each place */
/*< 	call init(5, 0,142,  wplace, 12, numstr )		! star pointers >*/
    init_(&c__5, &c__0, &c__142, &arrcom_1.wplace, &c__12, &usrcom_1.numstr);
/*< 	call init(6, 0,143,  restrn, 5, npl, 2 )		! init resource array >*/
    init_(&c__6, &c__0, &c__143, &arrcom_1.restrn, &c__5, &npl, &c__2);
/* 1: ore/turn */
/* 2: food/turn */
/*< 	call init(5, 0,146,  wstar, 7, npl )		! what star am i >*/
    init_(&c__5, &c__0, &c__146, &arrcom_1.wstar, &c__7, &npl);
/*< 	call init(5, 0,147,  wplan, 4, npl )		! what planet am i >*/
    init_(&c__5, &c__0, &c__147, &arrcom_1.wplan, &c__4, &npl);
/*< 	call init(5, 0,148,  wmoon, 4, npl )		! what moon am i >*/
    init_(&c__5, &c__0, &c__148, &arrcom_1.wmoon, &c__4, &npl);
/*< 	call init(5, 0,149,  ptype, 2, npl )		! planet type: >*/
    init_(&c__5, &c__0, &c__149, &arrcom_1.ptype, &c__2, &npl);
/* 1: habitable */
/* 2: ordinary */
/* 3: gasseous */
/*< 	call init(5, 0,153,  pop, 18, npl )		! population >*/
    init_(&c__5, &c__0, &c__153, &arrcom_1.pop, &c__18, &npl);
/*< 	call init(5, 0,154,  poporg, 6, npl )		! population allegiance >*/
    init_(&c__5, &c__0, &c__154, &arrcom_1.poporg, &c__6, &npl);
/*< 	call init(5, 0,155,  hunger, 18, npl )		! population hunger >*/
    init_(&c__5, &c__0, &c__155, &arrcom_1.hunger, &c__18, &npl);
/*< 	call init(5, 0,156,  oprind, 9, npl )		! population opression >*/
    init_(&c__5, &c__0, &c__156, &arrcom_1.oprind, &c__9, &npl);
/*< 	call init(6, 0,157,  plcorg, 6, npl, 2 )		! place controlled by >*/
    init_(&c__6, &c__0, &c__157, &arrcom_1.plcorg, &c__6, &npl, &c__2);
/*< 	call init(6, 0,158,  nuaplc, 12, npl, 2 )		! num units at place >*/
    init_(&c__6, &c__0, &c__158, &arrcom_1.nuaplc, &c__12, &npl, &c__2);
/*< 	call init(5, 0,159,  org, 6, maxuni )		! origin of ship >*/
    init_(&c__5, &c__0, &c__159, &arrcom_1.org, &c__6, &usrcom_1.maxuni);
/*< 	call init(6, 0,160,  res, 6, maxuni, 4 )		! init unit resource: >*/
    init_(&c__6, &c__0, &c__160, &arrcom_1.res, &c__6, &usrcom_1.maxuni, &
	    c__4);
/* 1: ore */
/* 2: food */
/* 3: luxury */
/* 4: men */
/*< 	call init(5, 0,165,  type, 3, maxuni )		! unit type: >*/
    init_(&c__5, &c__0, &c__165, &arrcom_1.type__, &c__3, &usrcom_1.maxuni);
/* 1: spaceship */
/* 2: hypership */
/* 3: ground unit */
/* 4: ore processor */
/* 5: food processor */
/* 6: luxury processor */
/* 7: port */
/*< 	call init(5, 0,173,  shiptr, 12, maxuni )		! where is unit? >*/
    init_(&c__5, &c__0, &c__173, &arrcom_1.shiptr, &c__12, &usrcom_1.maxuni);
/*< 	call init(5, 0,174,  orbit, 2, maxuni )		! in what orbit? >*/
    init_(&c__5, &c__0, &c__174, &arrcom_1.orbit, &c__2, &usrcom_1.maxuni);
/* 1: ground */
/* 2: low orbit */
/* 3: high orbit */
/*< 	call init(5, 0,178,  hmflag, 2, maxuni )		! 0: normal space >*/
    init_(&c__5, &c__0, &c__178, &arrcom_1.hmflag, &c__2, &usrcom_1.maxuni);
/* 1: hyper space */
/* 2: moving */
/*< 	call init(5, 0,181,  wprogr, 9, maxuni )		! which prog running >*/
    init_(&c__5, &c__0, &c__181, &arrcom_1.wprogr, &c__9, &usrcom_1.maxuni);
/*< 	call init(5, 0,182,  pc, 6, maxuni )		! where is it in prog? >*/
    init_(&c__5, &c__0, &c__182, &arrcom_1.pc, &c__6, &usrcom_1.maxuni);
/*< 	call init(5, 0,183,  onerpc, 6, maxuni )		! go where on lerror >*/
    init_(&c__5, &c__0, &c__183, &arrcom_1.onerpc, &c__6, &usrcom_1.maxuni);
/*< 	call init(5, 0,184,  tmtonx, 18, maxuni )		! time to next instr. >*/
    init_(&c__5, &c__0, &c__184, &arrcom_1.tmtonx, &c__18, &usrcom_1.maxuni);
/*< 	call init(5, 0,185,  prdtim, 18, maxuni )		! time to next prod. >*/
    init_(&c__5, &c__0, &c__185, &arrcom_1.prdtim, &c__18, &usrcom_1.maxuni);
/*< 	call init(5, 0,186,  power, 7, maxuni )		! unitns1714132329s tot. power >*/
    init_(&c__5, &c__0, &c__186, &arrcom_1.power, &c__7, &usrcom_1.maxuni);
/*< 	call init(7, 0,187,  powdst, 7, maxuni, 3, 2 )	! 1: engine/max >*/
    init_(&c__7, &c__0, &c__187, &arrcom_1.powdst, &c__7, &usrcom_1.maxuni, &
	    c__3, &c__2);
/* 2: shield/max */
/* 3: beam/max */
/*< 	call init(5, 0,190,  progs, 18, nprogs )		! list of players >*/
    init_(&c__5, &c__0, &c__190, &arrcom_1.progs, &c__18, &usrcom_1.nprogs);
/*< 	call init(5, 0,191,  prgjob, 7, nprogs )		! playerns1714132329s jobs (or 0) >*/
    init_(&c__5, &c__0, &c__191, &arrcom_1.prgjob, &c__7, &usrcom_1.nprogs);
/*< 	call init(5, 0,192,  nofuni, 12, nprogs )		! num units for players >*/
    init_(&c__5, &c__0, &c__192, &arrcom_1.nofuni, &c__12, &usrcom_1.nprogs);
/*< 	call init(5, 0,193,  empcod, 3, nprogs )		! what kind of message: >*/
    init_(&c__5, &c__0, &c__193, &arrcom_1.empcod, &c__3, &usrcom_1.nprogs);
/* 1: lerror */
/* 2: inform */
/* 3: battle */
/* 4: revolt */
/*< 	call init(5, 0,198,  empdst, 12, nprogs )		! which unitns1714132329s lerror >*/
    init_(&c__5, &c__0, &c__198, &arrcom_1.empdst, &c__12, &usrcom_1.nprogs);
/* which unitns1714132329s inform */
/* where is battle */
/* where is revolt */
/* 	CALL INIT(5, 0,202,  EMPINF, 18, NPROGS )		! INFORM MESSAGE CODE */
/*< 	call init(5, 0,203,  empinf, 36, nprogs )		! inform message code >*/
    init_(&c__5, &c__0, &c__203, &arrcom_1.empinf, &c__36, &usrcom_1.nprogs);
/*< 	call init(5, 0,204,  empc, 6, nprogs )		! pc of inform >*/
    init_(&c__5, &c__0, &c__204, &arrcom_1.empc, &c__6, &usrcom_1.nprogs);
/* pc of lerror */
/* orbit of battle */
/* 0 */
/*< 	call init(5, 0,208,  ncstru, 6, nprogs )		! number of total >*/
    init_(&c__5, &c__0, &c__208, &arrcom_1.ncstru, &c__6, &usrcom_1.nprogs);
/* clicks since this */
/* prog looped. */
/*< 	call init(5, 0,211,  nverb, 4, maxmem )		! unitns1714132329s action >*/
    init_(&c__5, &c__0, &c__211, &arrcom_1.nverb, &c__4, &usrcom_1.maxmem);
/*< 	call init(5, 0,212,  ncode, 4, maxmem )		! unitns1714132329s code >*/
    init_(&c__5, &c__0, &c__212, &arrcom_1.ncode, &c__4, &usrcom_1.maxmem);
/* 	CALL INIT(5, 0,213,  NDEST, 18, MAXMEM )		! UNIT'S NOUN (DEST) */
/*< 	call init(5, 0,214,  ndest, 36, maxmem )		! unitns1714132329s noun (dest) >*/
    init_(&c__5, &c__0, &c__214, &arrcom_1.ndest, &c__36, &usrcom_1.maxmem);
/*< 	call init(5, 0,215,  stradr, 12, maxprg )		! where prog begins >*/
    init_(&c__5, &c__0, &c__215, &arrcom_1.stradr, &c__12, &usrcom_1.maxprg);
/*< 	call init(5, 0,216,  lenprg, 6, maxprg )		! length of prog >*/
    init_(&c__5, &c__0, &c__216, &arrcom_1.lenprg, &c__6, &usrcom_1.maxprg);
/*< 	call init(5, 0,217,  numusr, 12, maxprg )		! #users using prog >*/
    init_(&c__5, &c__0, &c__217, &arrcom_1.numusr, &c__12, &usrcom_1.maxprg);
/*< 	call init(5, 0,218,  mestrn, 7, 72 )		! message array >*/
    init_(&c__5, &c__0, &c__218, &arrcom_1.mestrn, &c__7, &c__72);
/*< 	call init(5, 0,219,  ptime, 36, 3 )		! 1: starting date >*/
    init_(&c__5, &c__0, &c__219, &arrcom_1.ptime, &c__36, &c__3);
/* 2: starting time */
/* 3: clicks elapsed */
/*< 	call init(5, 0,222,  useful, 18, 17 )		! miscelanious info: >*/
    init_(&c__5, &c__0, &c__222, &arrcom_1.useful, &c__18, &c__17);
/* 1: numstr */
/* 2: numpla */
/* 3: numoon */
/* 4: lasplc */
/* 5: lunit */
/* 6: nprogs */
/* 7: whoinl */
/* 8: lprogr */
/* 9: lmem */
/* 10: whoto */
/* 11: whofrm */
/* 12: maxuni */
/* 13: maxprg */
/* 14: maxmem */
/* 15: maxpla */
/* 16: stand alone */
/* 17: preserve */
/* ********************************************************************** */
/*< 	lasplc = numstr >*/
    usrcom_1.lasplc = usrcom_1.numstr;
/*< 	do 700 k = 1, numstr >*/
    i__1 = usrcom_1.numstr;
    for (k = 1; k <= i__1; ++k) {
/*< 	    star = k >*/
	star = k;
/*< 	    call skpcom( com, len ) >*/
	skpcom_(&com[1], &len);
/*< 	    do 100 i = 1, 12 >*/
	for (i__ = 1; i__ <= 12; ++i__) {
/*< 		if( icon(com(i)) .le. 32 ) goto 110 >*/
	    if (icon_(&com[i__]) <= 32) {
		goto L110;
	    }
/*< 100	    continue >*/
/* L100: */
	}
/*< 	    i = 13 >*/
	i__ = 13;
/*< 110	    if(len.le.i)call bugmsg('INIT: ISOLATED STAR.^E',com,len) >*/
L110:
	if (len <= i__) {
	    bugmsg_("INIT: ISOLATED STAR.^E", &com[1], &len, (ftnlen)22);
	}
/*< 	    f( 2 ) = 0 >*/
	f[1] = 0;
/*< 	    call convrt( com, i-1, 1, f, 6 ) >*/
	i__2 = i__ - 1;
	convrt_(&com[1], &i__2, &c__1, f, &c__6);
/*< 	    call putval(6, 0,254,  name, star, 1, f(1) ) >*/
	putval_(&c__6, &c__0, &c__254, &arrcom_1.name__, &star, &c__1, f);
/*< 	    call putval(6, 0,255,  name, star, 2, f(2) ) >*/
	putval_(&c__6, &c__0, &c__255, &arrcom_1.name__, &star, &c__2, &f[1]);
/*< 	    call putval(5, 0,256,  wstar, star, star ) >*/
	putval_(&c__5, &c__0, &c__256, &arrcom_1.wstar, &star, &star);
/*< 	    c >*/
	i__2 = len - i__ + 1;
	getnum_(&c__22, &com[i__], &i__2, f, &c__10, t, &c__10, &f[1], &c__10,
		 &t[1], &c__10, &f[2], &c__10, &t[2], &c__10, &f[3], &c__10, &
		t[3], &c__10, &f[4], &c__10, &t[4], &c__10);
/*< 	    do 200 i = 1, 5 >*/
	for (i__ = 1; i__ <= 5; ++i__) {
/*< 		call putval(6, 0,261,  dest, star, i+0, f(i) ) >*/
	    i__2 = i__;
	    putval_(&c__6, &c__0, &c__261, &arrcom_1.dest, &star, &i__2, &f[
		    i__ - 1]);
/*< 		call putval(6, 0,262,  time, star, i+0, t(i) ) >*/
	    i__2 = i__;
	    putval_(&c__6, &c__0, &c__262, &arrcom_1.time, &star, &i__2, &t[
		    i__ - 1]);
/*< 200	    continue >*/
/* L200: */
	}
/*< 300	    planum = 0 >*/
/* L300: */
	planum = 0;
/*< 400	    call skpcom( com, len ) >*/
L400:
	skpcom_(&com[1], &len);
/*< 	    if( com(1) .eq. 42 ) goto 700 >*/
	if (com[1] == 42) {
	    goto L700;
	}
/*< 	    itype = 0 >*/
	itype = 0;
/*< 	    if( com(1) .eq. 72 ) itype = 1 >*/
	if (com[1] == 72) {
	    itype = 1;
	}
/*< 	    if( com(1) .eq. 79 ) itype = 2 >*/
	if (com[1] == 79) {
	    itype = 2;
	}
/*< 	    if( com(1) .eq. 71 ) itype = 3 >*/
	if (com[1] == 71) {
	    itype = 3;
	}
/*< 	    if(itype.eq.0)call bugmsg('INIT: BAD PLANET.^E',com,len) >*/
	if (itype == 0) {
	    bugmsg_("INIT: BAD PLANET.^E", &com[1], &len, (ftnlen)19);
	}
/*< 	    planum = planum + 1 >*/
	++planum;
/*< 	    numpla = numpla + 1 >*/
	++numpla;
/*< 	    lasplc = lasplc + 1 >*/
	++usrcom_1.lasplc;
/*< 	    if(lasplc.gt.npl)call bugmsg('INIT: LASPLC>NPL.^E',com,len) >*/
	if (usrcom_1.lasplc > npl) {
	    bugmsg_("INIT: LASPLC>NPL.^E", &com[1], &len, (ftnlen)19);
	}
/*< 	    if( planum .eq. 1 ) call putval(5, 0,276,  wplace, star, lasplc ) >*/
	if (planum == 1) {
	    putval_(&c__5, &c__0, &c__276, &arrcom_1.wplace, &star, &
		    usrcom_1.lasplc);
	}
/*< 	    c >*/
	getnum_(&c__32, &com[1], &len, &p[1], &c__10, f, &c__10, t, &c__10, &
		p[2], &c__10, &f[1], &c__10, &t[1], &c__10, &p[3], &c__10, &f[
		2], &c__10, &t[2], &c__10, &p[4], &c__10, &f[3], &c__10, &t[3]
		, &c__10, &p[5], &c__10, &f[4], &c__10, &t[4], &c__10);
/*< 	    call putval(5, 0,280,  wstar, lasplc, star ) >*/
	putval_(&c__5, &c__0, &c__280, &arrcom_1.wstar, &usrcom_1.lasplc, &
		star);
/*< 	    call putval(5, 0,281,  wplan, lasplc, planum ) >*/
	putval_(&c__5, &c__0, &c__281, &arrcom_1.wplan, &usrcom_1.lasplc, &
		planum);
/*< 	    call putval(5, 0,282,  ptype, lasplc, itype ) >*/
	putval_(&c__5, &c__0, &c__282, &arrcom_1.ptype, &usrcom_1.lasplc, &
		itype);
/*< 	    call putval(5, 0,283,  pop, lasplc, p(1) ) >*/
	putval_(&c__5, &c__0, &c__283, &arrcom_1.pop, &usrcom_1.lasplc, &p[1])
		;
/*< 	    call putval(6, 0,284,  restrn, lasplc, 1, t(1) ) >*/
	putval_(&c__6, &c__0, &c__284, &arrcom_1.restrn, &usrcom_1.lasplc, &
		c__1, t);
/*< 	    call putval(6, 0,285,  restrn, lasplc, 2, f(1) ) >*/
	putval_(&c__6, &c__0, &c__285, &arrcom_1.restrn, &usrcom_1.lasplc, &
		c__2, f);
/*< 500	    moonum = 0 >*/
/* L500: */
	moonum = 0;
/*< 600	    temp = moonum*12 + 13 >*/
L600:
	temp = moonum * 12 + 13;
/*< 	    if( temp .gt. len ) goto 400 >*/
	if (temp > len) {
	    goto L400;
	}
/*< 	    temp = com( temp ) >*/
	temp = com[temp];
/*< 	    itype = 0 >*/
	itype = 0;
/*< 	    if( temp .eq. 72 ) itype = 1 >*/
	if (temp == 72) {
	    itype = 1;
	}
/*< 	    if( temp .eq. 79 ) itype = 2 >*/
	if (temp == 79) {
	    itype = 2;
	}
/*< 	    if( temp .eq. 71 ) itype = 3 >*/
	if (temp == 71) {
	    itype = 3;
	}
/*< 	    if(itype.eq.0)call bugmsg('INIT: BAD MOON.^E',com,len) >*/
	if (itype == 0) {
	    bugmsg_("INIT: BAD MOON.^E", &com[1], &len, (ftnlen)17);
	}
/*< 	    moonum = moonum + 1 >*/
	++moonum;
/*< 	    lasplc = lasplc + 1 >*/
	++usrcom_1.lasplc;
/*< 	    numoon = numoon + 1 >*/
	++numoon;
/*< 	    if(lasplc.gt.npl)call bugmsg('INIT: LASPLC>NPL.^E',com,len) >*/
	if (usrcom_1.lasplc > npl) {
	    bugmsg_("INIT: LASPLC>NPL.^E", &com[1], &len, (ftnlen)19);
	}
/*< 	    call putval(5, 0,300,  wstar, lasplc, star ) >*/
	putval_(&c__5, &c__0, &c__300, &arrcom_1.wstar, &usrcom_1.lasplc, &
		star);
/*< 	    call putval(5, 0,301,  wplan, lasplc, planum ) >*/
	putval_(&c__5, &c__0, &c__301, &arrcom_1.wplan, &usrcom_1.lasplc, &
		planum);
/*< 	    call putval(5, 0,302,  wmoon, lasplc, moonum ) >*/
	putval_(&c__5, &c__0, &c__302, &arrcom_1.wmoon, &usrcom_1.lasplc, &
		moonum);
/*< 	    call putval(5, 0,303,  ptype, lasplc, itype ) >*/
	putval_(&c__5, &c__0, &c__303, &arrcom_1.ptype, &usrcom_1.lasplc, &
		itype);
/*< 	    call putval(5, 0,304,  pop, lasplc, p(moonum+1) ) >*/
	putval_(&c__5, &c__0, &c__304, &arrcom_1.pop, &usrcom_1.lasplc, &p[
		moonum + 1]);
/*< 	    call putval(6, 0,305,  restrn, lasplc, 1, t(moonum+1) ) >*/
	putval_(&c__6, &c__0, &c__305, &arrcom_1.restrn, &usrcom_1.lasplc, &
		c__1, &t[moonum]);
/*< 	    call putval(6, 0,306,  restrn, lasplc, 2, f(moonum+1) ) >*/
	putval_(&c__6, &c__0, &c__306, &arrcom_1.restrn, &usrcom_1.lasplc, &
		c__2, &f[moonum]);
/*< 	    goto 600 >*/
	goto L600;
/*< 700	continue >*/
L700:
	;
    }
/*< 	call mcall1( 12, ival, i )		! get starting date >*/
    mcall1_(&c__12, &ival, &i__);
/*< 	call putval(5, 0,310,  ptime, 1, ival ) >*/
    putval_(&c__5, &c__0, &c__310, &arrcom_1.ptime, &c__1, &ival);
/*< 	call mcall1( 19, ival, i )		! and time >*/
    mcall1_(&c__19, &ival, &i__);
/*< 	call putval(5, 0,312,  ptime, 2, ival ) >*/
    putval_(&c__5, &c__0, &c__312, &arrcom_1.ptime, &c__2, &ival);
/*< 	call putval(5, 0,313,  useful, 1, numstr ) >*/
    putval_(&c__5, &c__0, &c__313, &arrcom_1.useful, &c__1, &usrcom_1.numstr);
/*< 	call putval(5, 0,314,  useful, 2, numpla ) >*/
    putval_(&c__5, &c__0, &c__314, &arrcom_1.useful, &c__2, &numpla);
/*< 	call putval(5, 0,315,  useful, 3, numoon ) >*/
    putval_(&c__5, &c__0, &c__315, &arrcom_1.useful, &c__3, &numoon);
/*< 	call putval(5, 0,316,  useful, 4, lasplc ) >*/
    putval_(&c__5, &c__0, &c__316, &arrcom_1.useful, &c__4, &usrcom_1.lasplc);
/*< 	call putval(5, 0,317,  useful, 6, nprogs ) >*/
    putval_(&c__5, &c__0, &c__317, &arrcom_1.useful, &c__6, &usrcom_1.nprogs);
/*< 	call putval(5, 0,318,  useful, 12, maxuni ) >*/
    putval_(&c__5, &c__0, &c__318, &arrcom_1.useful, &c__12, &usrcom_1.maxuni)
	    ;
/*< 	call putval(5, 0,319,  useful, 13, maxprg ) >*/
    putval_(&c__5, &c__0, &c__319, &arrcom_1.useful, &c__13, &usrcom_1.maxprg)
	    ;
/*< 	call putval(5, 0,320,  useful, 14, maxmem ) >*/
    putval_(&c__5, &c__0, &c__320, &arrcom_1.useful, &c__14, &usrcom_1.maxmem)
	    ;
/*< 	call putval(5, 0,321,  useful, 15, maxpla ) >*/
    putval_(&c__5, &c__0, &c__321, &arrcom_1.useful, &c__15, &usrcom_1.maxpla)
	    ;
/*< 	if( .not. stalon ) goto 800 >*/
    if (! stalon) {
	goto L800;
    }
/*< 	call putval(5, 0,323,  useful, 16, 1 ) >*/
    putval_(&c__5, &c__0, &c__323, &arrcom_1.useful, &c__16, &c__1);
/*< 	call putval(5, 0,324,  useful, 17, 1 ) >*/
    putval_(&c__5, &c__0, &c__324, &arrcom_1.useful, &c__17, &c__1);
/*< 800	call close( 2 ) >*/
L800:
    close_(&c__2);
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* initdb_ */


/*< 	subroutine skpcom( com, len ) >*/
/* Subroutine */ int skpcom_(com, len)
integer *com, *len;
{
    static logical ieof;
    extern /* Subroutine */ int bugmsg_(), getstr_();

/*< 	integer com( 80 ) >*/
/*< 	logical ieof >*/
/*< 100	call getstr(5, com, 80, len, 2, ieof ) >*/
    /* Parameter adjustments */
    --com;

    /* Function Body */
L100:
    getstr_(&c__5, &com[1], &c__80, len, &c__2, &ieof);
/*< 	if(ieof)call bugmsg('INIT: PREMATURE END OF FILE.^E',0,0) >*/
    if (ieof) {
	bugmsg_("INIT: PREMATURE END OF FILE.^E", &c__0, &c__0, (ftnlen)30);
    }
/*< 	if( len .eq. 0 ) goto 100 >*/
    if (*len == 0) {
	goto L100;
    }
/*< 	if( com(1) .eq. 59 ) goto 100 >*/
    if (com[1] == 59) {
	goto L100;
    }
/* 	CALL ALLCAP( COM, LEN ) */
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* skpcom_ */


/*< 	subroutine exunit >*/
/* Subroutine */ int exunit_()
{
    /* System generated locals */
    integer i__1, i__2, i__3, i__4;
    real r__1;

    /* Builtin functions */
    double sqrt(), r_lg10();

    /* Local variables */
    static integer i__, j, k, i1, nc, nd, nv, wp, act;
    extern integer job_();
    static integer ipc, loc, len, pas, addr__, team[100]	/* was [2][50]
	     */;
    extern integer iran_();
    static integer ival, dorg, enum__, torg, unum, level;
    static logical lmove;
    static integer nprod;
    extern /* Subroutine */ int exins_();
    static integer numop[2], stype, chance;
    extern /* Subroutine */ int enable_(), addval_();
    static integer acplar, hungfc, curbem;
    extern /* Subroutine */ int messag_(), getval_();
    static integer whoinl;
    extern /* Subroutine */ int number_(), string_(), putval_(), savesg_(), 
	    delunt_();
    static integer curshd;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer team( 2, 50 ), numop(2) >*/
/*< 	logical lmove >*/
/*< 	commo >*/
/*< 	commo >*/
/* ***	GO INCREMENT ALL PLAYERS TO FIND WHO IS NOT PLAYING */
/*< 	call getval(5, 0,363,  useful, 5, lunit ) >*/
    getval_(&c__5, &c__0, &c__363, &arrcom_1.useful, &c__5, &usrcom_1.lunit);
/*< 	do 10 i = 1, nprogs >*/
    i__1 = usrcom_1.nprogs;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call getval(5, 0,365,  ncstru, i+0, ival ) >*/
	i__2 = i__;
	getval_(&c__5, &c__0, &c__365, &arrcom_1.ncstru, &i__2, &ival);
/*< 	    if( ival .lt. 63 ) call addval(4, 0,366,  -1, 1 ) >*/
	if (ival < 63) {
	    addval_(&c__4, &c__0, &c__366, &c_n1, &c__1);
	}
/*< 	    if( ival .ge. 63 ) call putval(5, 0,367,  prgjob, player, 0 ) >*/
	if (ival >= 63) {
	    putval_(&c__5, &c__0, &c__367, &arrcom_1.prgjob, &usrcom_1.player,
		     &c__0);
	}
/*< 10	continue >*/
/* L10: */
    }
/*< 	call putval(5, 0,369,  ncstru, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__369, &arrcom_1.ncstru, &usrcom_1.player, &c__0);
/*< 	call putval(5, 0,370,  prgjob, player, job(0) ) >*/
    i__1 = job_(&c__0);
    putval_(&c__5, &c__0, &c__370, &arrcom_1.prgjob, &usrcom_1.player, &i__1);
/*< 	call getval(5, 0,372,  useful, 7, whoinl ) >*/
    getval_(&c__5, &c__0, &c__372, &arrcom_1.useful, &c__7, &whoinl);
/*< 	if( whoinl .eq. 0 ) goto 20 >*/
    if (whoinl == 0) {
	goto L20;
    }
/*< 	call getval(5, 0,374,  ncstru, whoinl, ival ) >*/
    getval_(&c__5, &c__0, &c__374, &arrcom_1.ncstru, &whoinl, &ival);
/*< 	if( ival .lt. 63 ) return >*/
    if (ival < 63) {
	return 0;
    }
/*< 	call putval(5, 0,376,  useful, 7, player ) >*/
    putval_(&c__5, &c__0, &c__376, &arrcom_1.useful, &c__7, &usrcom_1.player);
/*< 	call messag('Player #^E') >*/
    messag_("Player #^E", (ftnlen)10);
/*< 	call number(2, whoinl, -2 ) >*/
    number_(&c__2, &whoinl, &c_n2);
/*< 	call string(1,' stuck in EXUNIT loop.  Clearing.^G^E') >*/
    string_(&c__1, " stuck in EXUNIT loop.  Clearing.^G^E", (ftnlen)37);
/*< 	goto 30 >*/
    goto L30;
/*< 20	call enable >*/
L20:
    enable_();
/*< 	call putval(4, 0,383,  -1, player ) >*/
    putval_(&c__4, &c__0, &c__383, &c_n1, &usrcom_1.player);
/*< 30	acplar = player >*/
L30:
    acplar = usrcom_1.player;
/*< 	call addval(5, 0,386,  ptime, 3, 1 )		! increment time >*/
    addval_(&c__5, &c__0, &c__386, &arrcom_1.ptime, &c__3, &c__1);
/*< 	call getval(4, 0,387,  -1, ival )			! save world every >*/
    getval_(&c__4, &c__0, &c__387, &c_n1, &ival);
/*< 	if(mod(ival,1000).eq.0) call savesg	! 1000 cycles >*/
    if (ival % 1000 == 0) {
	savesg_();
    }
/* ***	LOOP THROUGH THE SYSTEM FOR BATTLES */
/*< 	do 60 i = 1, lasplc >*/
    i__1 = usrcom_1.lasplc;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    loc = i >*/
	loc = i__;
/*< 	    call getval(5, 0,394,  pop, loc, j ) >*/
	getval_(&c__5, &c__0, &c__394, &arrcom_1.pop, &loc, &j);
/*< 	    if( j .eq. 0 ) goto 34 >*/
	if (j == 0) {
	    goto L34;
	}
/*< 	    call getval(5, 0,396,  hunger, loc, hungfc ) >*/
	getval_(&c__5, &c__0, &c__396, &arrcom_1.hunger, &loc, &hungfc);
/*< 	    hungfc = hungfc + j >*/
	hungfc += j;
/*< 	    call getval(6, 0,398,  restrn, loc, 2, ival ) >*/
	getval_(&c__6, &c__0, &c__398, &arrcom_1.restrn, &loc, &c__2, &ival);
/*< 	    hungfc = min0( max0( 0, hungfc - 1000*ival ), 2**18-1 ) >*/
/* Computing MIN */
/* Computing MAX */
	i__3 = 0, i__4 = hungfc - ival * 1000;
	i__2 = max(i__3,i__4);
	hungfc = min(i__2,262143);
/*< 	    call putval(5, 0,400,  hunger, loc, hungfc ) >*/
	putval_(&c__5, &c__0, &c__400, &arrcom_1.hunger, &loc, &hungfc);
/*< 	    if( hungfc .gt. 100000 ) call putval(5, 0,401,  pop, loc, 99*j/100 ) >*/
	if (hungfc > 100000) {
	    i__2 = j * 99 / 100;
	    putval_(&c__5, &c__0, &c__401, &arrcom_1.pop, &loc, &i__2);
	}
/*< 	    call getval(5, 0,402,  oprind, loc, ival ) >*/
	getval_(&c__5, &c__0, &c__402, &arrcom_1.oprind, &loc, &ival);
/*< 	    call putval(4, 0,403,  -1, 0 ) >*/
	putval_(&c__4, &c__0, &c__403, &c_n1, &c__0);
/*< 	    i >*/
	if ((real) (iran_(&c__50) + 50) >= sqrt((real) j) * hungfc / ((ival + 
		1) * 1000)) {
	    goto L34;
	}
/*< 	    call getval(6, 0,406,  plcorg, loc, 1, k ) >*/
	getval_(&c__6, &c__0, &c__406, &arrcom_1.plcorg, &loc, &c__1, &k);
/*< 	    if( k .eq. 0 ) goto 34 >*/
	if (k == 0) {
	    goto L34;
	}
/*< 	    call putval(5, 0,408,  empcod, k, 4 ) >*/
	putval_(&c__5, &c__0, &c__408, &arrcom_1.empcod, &k, &c__4);
/*< 	    call putval(5, 0,409,  empdst, k, loc ) >*/
	putval_(&c__5, &c__0, &c__409, &arrcom_1.empdst, &k, &loc);
/*< 	    do 33 i1 = 1, lunit >*/
	i__2 = usrcom_1.lunit;
	for (i1 = 1; i1 <= i__2; ++i1) {
/*< 		j = i1 >*/
	    j = i1;
/*< 		call getval(5, 0,412,  org, j, ival ) >*/
	    getval_(&c__5, &c__0, &c__412, &arrcom_1.org, &j, &ival);
/*< 		if( ival .ne. k ) goto 33 >*/
	    if (ival != k) {
		goto L33;
	    }
/*< 		call getval(5, 0,414,  shiptr, j, ival ) >*/
	    getval_(&c__5, &c__0, &c__414, &arrcom_1.shiptr, &j, &ival);
/*< 		if( ival .ne. loc ) goto 33 >*/
	    if (ival != loc) {
		goto L33;
	    }
/*< 		call getval(5, 0,416,  orbit, j, ival ) >*/
	    getval_(&c__5, &c__0, &c__416, &arrcom_1.orbit, &j, &ival);
/*< 		if( ival .ne. 1 ) goto 33 >*/
	    if (ival != 1) {
		goto L33;
	    }
/*< 		call delunt( j ) >*/
	    delunt_(&j);
/*< 33	    continue >*/
L33:
	    ;
	}
/*< 34	    continue >*/
L34:
/*< 	    do 60 i1 = 1, 2 >*/
	for (i1 = 1; i1 <= 2; ++i1) {
/*< 		level = i1 >*/
	    level = i1;
/*< 		call getval(6, 0,423,  plcorg, loc, level, dorg ) >*/
	    getval_(&c__6, &c__0, &c__423, &arrcom_1.plcorg, &loc, &level, &
		    dorg);
/*< 		if( dorg .eq. 0 ) goto 61 >*/
	    if (dorg == 0) {
		goto L61;
	    }
/*< 		numop(1) = 0 >*/
	    numop[0] = 0;
/*< 		numop(2) = 0 >*/
	    numop[1] = 0;
/*< 		do 40 j = 1, lunit >*/
	    i__2 = usrcom_1.lunit;
	    for (j = 1; j <= i__2; ++j) {
/*< 		    enum = j >*/
		enum__ = j;
/*< 		    call getval(5, 0,429,  org, enum, torg ) >*/
		getval_(&c__5, &c__0, &c__429, &arrcom_1.org, &enum__, &torg);
/*< 		    if( torg .eq. 0 ) goto 40 >*/
		if (torg == 0) {
		    goto L40;
		}
/*< 		    call getval(5, 0,431,  hmflag, enum, ival ) >*/
		getval_(&c__5, &c__0, &c__431, &arrcom_1.hmflag, &enum__, &
			ival);
/*< 		    if( ival .ne. 0 ) goto 40 >*/
		if (ival != 0) {
		    goto L40;
		}
/*< 		    call getval(5, 0,433,  shiptr, enum, ival ) >*/
		getval_(&c__5, &c__0, &c__433, &arrcom_1.shiptr, &enum__, &
			ival);
/*< 		    if( ival .ne. loc ) goto 40 >*/
		if (ival != loc) {
		    goto L40;
		}
/*< 		    call getval(5, 0,435,  orbit, enum, ival ) >*/
		getval_(&c__5, &c__0, &c__435, &arrcom_1.orbit, &enum__, &
			ival);
/*< 		    if( ival/3 + 1 .ne. level ) goto 40 >*/
		if (ival / 3 + 1 != level) {
		    goto L40;
		}
/*< 		    if( torg .ne. dorg ) goto 35 >*/
		if (torg != dorg) {
		    goto L35;
		}
/*< 		    if( numop(1) .ge. 50 ) goto 40 >*/
		if (numop[0] >= 50) {
		    goto L40;
		}
/*< 		    numop(1) = numop(1) + 1 >*/
		++numop[0];
/*< 		    team(1,numop(1)) = enum >*/
		team[(numop[0] << 1) - 2] = enum__;
/*< 		    goto 40 >*/
		goto L40;
/*< 35		    call putval(5, 0,444,  empcod, torg, 3 ) >*/
L35:
		putval_(&c__5, &c__0, &c__444, &arrcom_1.empcod, &torg, &c__3)
			;
/*< 		    call putval(5, 0,445,  empdst, torg, loc ) >*/
		putval_(&c__5, &c__0, &c__445, &arrcom_1.empdst, &torg, &loc);
/*< 		    call putval(5, 0,446,  empinf, torg, level ) >*/
		putval_(&c__5, &c__0, &c__446, &arrcom_1.empinf, &torg, &
			level);
/*< 		    if( numop(2) .ge. 50 ) goto 40 >*/
		if (numop[1] >= 50) {
		    goto L40;
		}
/*< 		    numop(2) = numop(2) + 1 >*/
		++numop[1];
/*< 		    team(2,numop(2)) = enum >*/
		team[(numop[1] << 1) - 1] = enum__;
/*< 40		continue >*/
L40:
		;
	    }
/*< 45		if( numop(2) .eq. 0 ) goto 61 >*/
/* L45: */
	    if (numop[1] == 0) {
		goto L61;
	    }
/*< 		call putval(5, 0,453,  empcod, dorg, 3 ) >*/
	    putval_(&c__5, &c__0, &c__453, &arrcom_1.empcod, &dorg, &c__3);
/*< 		call putval(5, 0,454,  empdst, dorg, loc ) >*/
	    putval_(&c__5, &c__0, &c__454, &arrcom_1.empdst, &dorg, &loc);
/*< 		call putval(5, 0,455,  empinf, dorg, level ) >*/
	    putval_(&c__5, &c__0, &c__455, &arrcom_1.empinf, &dorg, &level);
/*< 		do 60 j = 1, 2 >*/
	    for (j = 1; j <= 2; ++j) {
/*< 		    do 60 k = 1, numop(j) >*/
		i__2 = numop[j - 1];
		for (k = 1; k <= i__2; ++k) {
/*< 			act = team(j,k) >*/
		    act = team[j + (k << 1) - 3];
/*< 			call getval(5, 0,459,  tmtonx, act, ival ) >*/
		    getval_(&c__5, &c__0, &c__459, &arrcom_1.tmtonx, &act, &
			    ival);
/*< 			if( ival .ne. 0 ) goto 60 >*/
		    if (ival != 0) {
			goto L60;
		    }
/*< 			call getval(7, 0,461,  powdst, act, 3, 1, curbem ) >*/
		    getval_(&c__7, &c__0, &c__461, &arrcom_1.powdst, &act, &
			    c__3, &c__1, &curbem);
/*< 			if( curbem .eq. 0 ) goto 60 >*/
		    if (curbem == 0) {
			goto L60;
		    }
/*< 			if( k .le. numop(3-j) ) goto 54 >*/
		    if (k <= numop[3 - j - 1]) {
			goto L54;
		    }
/*< 			call getval(5, 0,464,  pc, act, ival ) >*/
		    getval_(&c__5, &c__0, &c__464, &arrcom_1.pc, &act, &ival);
/*< 			if( ival .ne. 0 ) goto 60 >*/
		    if (ival != 0) {
			goto L60;
		    }
/*< 			pas = team(3-j,iran(numop(3-j))) >*/
		    pas = team[3 - j + (iran_(&numop[3 - j - 1]) << 1) - 3];
/*< 			goto 56 >*/
		    goto L56;
/*< 54			pas = team( 3-j, k ) >*/
L54:
		    pas = team[3 - j + (k << 1) - 3];
/*< 56			call getval(5, 0,471,  org, pas, ival ) >*/
L56:
		    getval_(&c__5, &c__0, &c__471, &arrcom_1.org, &pas, &ival)
			    ;
/*< 			if( ival .eq. 0 ) goto 60 >*/
		    if (ival == 0) {
			goto L60;
		    }
/*< 			call getval(6, 0,473,  powdst, pas, 2, curshd ) >*/
		    getval_(&c__6, &c__0, &c__473, &arrcom_1.powdst, &pas, &
			    c__2, &curshd);
/*< 			chance=40*alog10(10.0*curbem/(curshd+0.001))+10 >*/
		    r__1 = curbem * (float)10. / (curshd + (float).001);
		    chance = r_lg10(&r__1) * 40 + 10;
/*< 			if( iran(100) .lt. chance ) call delunt( pas ) >*/
		    if (iran_(&c__100) < chance) {
			delunt_(&pas);
		    }
/*< 60	continue >*/
L60:
		    ;
		}
	    }
	}
    }
/*< 61	continue >*/
L61:
/* ***	LOOP THROUGH ALL UNITS AND EXECUTE THEIR PROGRAMS */
/*< 	do 100 i = 1, lunit >*/
    i__2 = usrcom_1.lunit;
    for (i__ = 1; i__ <= i__2; ++i__) {
/*< 	    unum = i >*/
	unum = i__;
/*< 	    call getval(5, 0,483,  org, unum, player ) >*/
	getval_(&c__5, &c__0, &c__483, &arrcom_1.org, &unum, &usrcom_1.player)
		;
/*< 	    if( player .eq. 0 ) goto 100 >*/
	if (usrcom_1.player == 0) {
	    goto L100;
	}
/*< 	    call getval(5, 0,485,  type, unum, stype ) >*/
	getval_(&c__5, &c__0, &c__485, &arrcom_1.type__, &unum, &stype);
/*< 	    call getval(5, 0,486,  shiptr, unum, loc ) >*/
	getval_(&c__5, &c__0, &c__486, &arrcom_1.shiptr, &unum, &loc);
/*< 	    if( stype .lt. 4 .or. stype .eq. 7 ) goto 65 >*/
	if (stype < 4 || stype == 7) {
	    goto L65;
	}
/*< 	    call getval(5, 0,488,  prdtim, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__488, &arrcom_1.prdtim, &unum, &ival);
/*< 	    if( ival .gt. 1 ) call addval(4, 0,489,  -1, -1 ) >*/
	if (ival > 1) {
	    addval_(&c__4, &c__0, &c__489, &c_n1, &c_n1);
	}
/*< 	    if( ival .ne. 1 ) goto 65 >*/
	if (ival != 1) {
	    goto L65;
	}
/*< 	    if( stype .eq. 6 ) goto 62 >*/
	if (stype == 6) {
	    goto L62;
	}
/*< 	    call getval(6, 0,492,  res, unum, stype-3, ival ) >*/
	i__1 = stype - 3;
	getval_(&c__6, &c__0, &c__492, &arrcom_1.res, &unum, &i__1, &ival);
/*< 	    if( ival .ge. 63 ) goto 65 >*/
	if (ival >= 63) {
	    goto L65;
	}
/*< 	    call addval(4, 0,494,  -1, 1 ) >*/
	addval_(&c__4, &c__0, &c__494, &c_n1, &c__1);
/*< 	    call getval(6, 0,495,  restrn, loc, stype-3, nprod ) >*/
	i__1 = stype - 3;
	getval_(&c__6, &c__0, &c__495, &arrcom_1.restrn, &loc, &i__1, &nprod);
/*< 	    if(iran(500).eq.1.and.nprod.gt.0) call addval(4, 0,496,  -1, -1 ) >*/
	if (iran_(&c__500) == 1 && nprod > 0) {
	    addval_(&c__4, &c__0, &c__496, &c_n1, &c_n1);
	}
/*< 	    if(nprod.gt.0) call putval(5, 0,497,  prdtim, unum, 793/nprod ) >*/
	if (nprod > 0) {
	    i__1 = 793 / nprod;
	    putval_(&c__5, &c__0, &c__497, &arrcom_1.prdtim, &unum, &i__1);
	}
/*< 	    if(nprod.eq.0) call putval(5, 0,498,  prdtim, unum, 0 ) >*/
	if (nprod == 0) {
	    putval_(&c__5, &c__0, &c__498, &arrcom_1.prdtim, &unum, &c__0);
	}
/*< 	    goto 65 >*/
	goto L65;
/*< 62	    call getval(6, 0,501,  res, unum, 1, ival ) >*/
L62:
	getval_(&c__6, &c__0, &c__501, &arrcom_1.res, &unum, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 65 >*/
	if (ival == 0) {
	    goto L65;
	}
/*< 	    call getval(6, 0,503,  res, unum, 2, ival ) >*/
	getval_(&c__6, &c__0, &c__503, &arrcom_1.res, &unum, &c__2, &ival);
/*< 	    if( ival .eq. 0 ) goto 65 >*/
	if (ival == 0) {
	    goto L65;
	}
/*< 	    call getval(6, 0,505,  res, unum, 3, ival ) >*/
	getval_(&c__6, &c__0, &c__505, &arrcom_1.res, &unum, &c__3, &ival);
/*< 	    if( ival .ge. 63 ) goto 65 >*/
	if (ival >= 63) {
	    goto L65;
	}
/*< 	    call addval(4, 0,507,  -1, 1 ) >*/
	addval_(&c__4, &c__0, &c__507, &c_n1, &c__1);
/*< 	    call addval(6, 0,508,  res, unum, 1, -1 ) >*/
	addval_(&c__6, &c__0, &c__508, &arrcom_1.res, &unum, &c__1, &c_n1);
/*< 	    call addval(6, 0,509,  res, unum, 2, -1 ) >*/
	addval_(&c__6, &c__0, &c__509, &arrcom_1.res, &unum, &c__2, &c_n1);
/*< 	    call putval(5, 0,510,  prdtim, unum, 53 ) >*/
	putval_(&c__5, &c__0, &c__510, &arrcom_1.prdtim, &unum, &c__53);
/*< 65	    if( stype .eq. 3 ) call addval(5, 0,512,  oprind, loc, 1 ) >*/
L65:
	if (stype == 3) {
	    addval_(&c__5, &c__0, &c__512, &arrcom_1.oprind, &loc, &c__1);
	}
/*< 	    call getval(5, 0,513,  tmtonx, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__513, &arrcom_1.tmtonx, &unum, &ival);
/*< 	    if( ival .le. 2 ) call putval(5, 0,514,  hmflag, unum, 0 ) >*/
	if (ival <= 2) {
	    putval_(&c__5, &c__0, &c__514, &arrcom_1.hmflag, &unum, &c__0);
	}
/*< 	    if( ival .eq. 0 ) goto 70 >*/
	if (ival == 0) {
	    goto L70;
	}
/*< 	    call addval(5, 0,516,  tmtonx, unum, -1 ) >*/
	addval_(&c__5, &c__0, &c__516, &arrcom_1.tmtonx, &unum, &c_n1);
/*< 	    goto 100 >*/
	goto L100;
/*< 70	    call getval(5, 0,519,  wprogr, unum, wp ) >*/
L70:
	getval_(&c__5, &c__0, &c__519, &arrcom_1.wprogr, &unum, &wp);
/*< 	    if( wp .eq. 0 ) goto 100 >*/
	if (wp == 0) {
	    goto L100;
	}
/*< 	    call getval(5, 0,521,  lenprg, wp, len ) >*/
	getval_(&c__5, &c__0, &c__521, &arrcom_1.lenprg, &wp, &len);
/*< 	    call getval(5, 0,522,  pc, unum, ipc ) >*/
	getval_(&c__5, &c__0, &c__522, &arrcom_1.pc, &unum, &ipc);
/*< 	    if( ipc .le. 0 .or. ipc .gt. len ) goto 75 >*/
	if (ipc <= 0 || ipc > len) {
	    goto L75;
	}
/*< 	    call getval(5, 0,524,  stradr, wp, addr ) >*/
	getval_(&c__5, &c__0, &c__524, &arrcom_1.stradr, &wp, &addr__);
/*< 	    addr = addr + ipc - 1 >*/
	addr__ = addr__ + ipc - 1;
/*< 	    call getval(5, 0,526,  nverb, addr, nv ) >*/
	getval_(&c__5, &c__0, &c__526, &arrcom_1.nverb, &addr__, &nv);
/*< 	    if( nv .ne. 0 ) goto 80 >*/
	if (nv != 0) {
	    goto L80;
	}
/*< 75	    call putval(5, 0,528,  pc, unum, 0 ) >*/
L75:
	putval_(&c__5, &c__0, &c__528, &arrcom_1.pc, &unum, &c__0);
/*< 	    goto 100 >*/
	goto L100;
/*< 80	    call getval(5, 0,531,  ncode, addr, nc ) >*/
L80:
	getval_(&c__5, &c__0, &c__531, &arrcom_1.ncode, &addr__, &nc);
/*< 	    call getval(5, 0,532,  ndest, addr, nd ) >*/
	getval_(&c__5, &c__0, &c__532, &arrcom_1.ndest, &addr__, &nd);
/*< 	    call exins( unum, nv, nc, nd, lmove ) >*/
	exins_(&unum, &nv, &nc, &nd, &lmove);
/*< 	    if( .not. lmove ) goto 90 >*/
	if (! lmove) {
	    goto L90;
	}
/*< 85	    if( nv .ne. 9 ) call addval(5, 0,536,  pc, unum, 1 ) >*/
L85:
	if (nv != 9) {
	    addval_(&c__5, &c__0, &c__536, &arrcom_1.pc, &unum, &c__1);
	}
/*< 	    goto 100 >*/
	goto L100;
/*< 90	    call getval(5, 0,539,  onerpc, unum, ival ) >*/
L90:
	getval_(&c__5, &c__0, &c__539, &arrcom_1.onerpc, &unum, &ival);
/*< 	    if( ival .eq. 63 ) goto 85 >*/
	if (ival == 63) {
	    goto L85;
	}
/*< 	    call putval(5, 0,541,  pc, unum, ival ) >*/
	putval_(&c__5, &c__0, &c__541, &arrcom_1.pc, &unum, &ival);
/*< 	    if( ival .ne. 0 .or. player .eq. 0 ) goto 100 >*/
	if (ival != 0 || usrcom_1.player == 0) {
	    goto L100;
	}
/*< 	    call putval(5, 0,543,  empcod, player, 1 ) >*/
	putval_(&c__5, &c__0, &c__543, &arrcom_1.empcod, &usrcom_1.player, &
		c__1);
/*< 	    call putval(5, 0,544,  empdst, player, unum ) >*/
	putval_(&c__5, &c__0, &c__544, &arrcom_1.empdst, &usrcom_1.player, &
		unum);
/*< 	    call putval(5, 0,545,  empc, player, ipc ) >*/
	putval_(&c__5, &c__0, &c__545, &arrcom_1.empc, &usrcom_1.player, &ipc)
		;
/*< 100	continue >*/
L100:
	;
    }
/*< 	call putval(5, 0,548,  useful, 7, 0 ) >*/
    putval_(&c__5, &c__0, &c__548, &arrcom_1.useful, &c__7, &c__0);
/*< 	continue ! call ctrap >*/
/* 	    call cease */
/*< 	player = acplar >*/
    usrcom_1.player = acplar;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* exunit_ */


/*< 	subroutine exins( ship, iverb, icode, idest, lmove ) >*/
/* Subroutine */ int exins_(ship, iverb, icode, idest, lmove)
integer *ship, *iverb, *icode, *idest;
logical *lmove;
{
    /* Initialized data */

    static integer timcre[7] = { 213,402,150,204,201,203,803 };
    static integer oreqir[7] = { 3,5,1,0,1,1,7 };
    static integer menreq[7] = { 1,1,3,0,0,0,5 };
    static integer maxres[28]	/* was [7][4] */ = { 15,32,0,63,0,63,63,10,21,
	    0,0,63,63,63,4,9,0,1,1,63,63,3,8,0,1,1,1,63 };

    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer i__, j, k, m, p, s, loc, cmp, orb, ift, ito;
    extern integer iran_();
    static integer ival, nres, level, mtime, ifrom, ncomp, itype, stype;
    extern /* Subroutine */ int addval_(), addunt_(), legtim_(), getval_(), 
	    putval_();
    static integer neworg, numshp;
    extern /* Subroutine */ int delunt_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer maxres(7,4), timcre(7), oreqir(7), menreq(7), typshd(7) >*/
/*< 	logical lmove >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	data typshd/12,10,7,3,3,2,15/ >*/
/*< 	data timcre/213,402,150,204,201,203,803/ >*/
/*< 	data oreqir/3,5,1,0,1,1,7/, menreq/1,1,3,0,0,0,5/ >*/
/*< 	data  >*/
/*< 	lmove = .true. >*/
    *lmove = TRUE_;
/*< 	call getval(5, 0,581,  shiptr, ship, loc ) >*/
    getval_(&c__5, &c__0, &c__581, &arrcom_1.shiptr, ship, &loc);
/*< 	call getval(5, 0,582,  orbit, ship, orb ) >*/
    getval_(&c__5, &c__0, &c__582, &arrcom_1.orbit, ship, &orb);
/*< 	call getval(5, 0,583,  type, ship, stype ) >*/
    getval_(&c__5, &c__0, &c__583, &arrcom_1.type__, ship, &stype);
/*< 	goto( >*/
    switch ((int)*iverb) {
	case 1:  goto L10;
	case 2:  goto L10;
	case 3:  goto L100;
	case 4:  goto L300;
	case 5:  goto L600;
	case 6:  goto L700;
	case 7:  goto L800;
	case 8:  goto L850;
	case 9:  goto L900;
	case 10:  goto L910;
	case 11:  goto L2100;
	case 12:  goto L2100;
	case 13:  goto L2100;
	case 14:  goto L2100;
	case 15:  goto L950;
    }
/* ***	MOVE & JUMP */
/*< 10	call getval(7, 0,589,  powdst, ship, 1, 1, ival ) >*/
L10:
    getval_(&c__7, &c__0, &c__589, &arrcom_1.powdst, ship, &c__1, &c__1, &
	    ival);
/*< 	if( ival .eq. 0 ) goto 2200 >*/
    if (ival == 0) {
	goto L2200;
    }
/*< 	call legtim( loc, orb, idest, icode, lmove, mtime ) >*/
    legtim_(&loc, &orb, idest, icode, lmove, &mtime);
/*< 	if( .not. lmove ) return >*/
    if (! (*lmove)) {
	return 0;
    }
/*< 	call getval(5, 0,593,  ptype, loc, ival ) >*/
    getval_(&c__5, &c__0, &c__593, &arrcom_1.ptype, &loc, &ival);
/*< 	if( s >*/
    if (stype > 2 || *iverb == 2 && (orb != *icode && loc > usrcom_1.numstr ||
	     stype != 2) || *icode == 1 && (loc <= usrcom_1.numstr || ival == 
	    3)) {
	goto L2200;
    }
/*< 	level = orb/3 + 1 >*/
    level = orb / 3 + 1;
/*< 	call putval(5, 0,598,  shiptr, ship, idest ) >*/
    putval_(&c__5, &c__0, &c__598, &arrcom_1.shiptr, ship, idest);
/*< 	call putval(5, 0,599,  orbit, ship, icode ) >*/
    putval_(&c__5, &c__0, &c__599, &arrcom_1.orbit, ship, icode);
/*< 	if( loc .eq. idest .and. level .eq. icode/3 + 1 ) goto 30 >*/
    if (loc == *idest && level == *icode / 3 + 1) {
	goto L30;
    }
/*< 	call getval(6, 0,601,  plcorg, loc, level, ival ) >*/
    getval_(&c__6, &c__0, &c__601, &arrcom_1.plcorg, &loc, &level, &ival);
/*< 	if( ival .ne. player ) goto 20 >*/
    if (ival != usrcom_1.player) {
	goto L20;
    }
/*< 	call addval(6, 0,603,  nuaplc, loc, level, -1 ) >*/
    addval_(&c__6, &c__0, &c__603, &arrcom_1.nuaplc, &loc, &level, &c_n1);
/*< 	call getval(4, 0,604,  -1, ival ) >*/
    getval_(&c__4, &c__0, &c__604, &c_n1, &ival);
/*< 	if( ival .gt. 0 ) goto 20 >*/
    if (ival > 0) {
	goto L20;
    }
/*< 	neworg = 0 >*/
    neworg = 0;
/*< 	numshp = 0 >*/
    numshp = 0;
/*< 	do 15 i = 1, lunit >*/
    i__1 = usrcom_1.lunit;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    j = i >*/
	j = i__;
/*< 	    call getval(5, 0,610,  shiptr, j, ival ) >*/
	getval_(&c__5, &c__0, &c__610, &arrcom_1.shiptr, &j, &ival);
/*< 	    if( ival .ne. loc ) goto 15 >*/
	if (ival != loc) {
	    goto L15;
	}
/*< 	    call getval(5, 0,612,  orbit, j, ival ) >*/
	getval_(&c__5, &c__0, &c__612, &arrcom_1.orbit, &j, &ival);
/*< 	    if( ival/3+1 .ne. level ) goto 15 >*/
	if (ival / 3 + 1 != level) {
	    goto L15;
	}
/*< 	    call getval(5, 0,614,  org, j, k ) >*/
	getval_(&c__5, &c__0, &c__614, &arrcom_1.org, &j, &k);
/*< 	    if( k.eq.0 .or. (neworg.ne.0 .and. neworg.ne.k) ) goto 15 >*/
	if (k == 0 || neworg != 0 && neworg != k) {
	    goto L15;
	}
/*< 	    neworg = k >*/
	neworg = k;
/*< 	    numshp = numshp + 1 >*/
	++numshp;
/*< 15	continue >*/
L15:
	;
    }
/*< 	call putval(6, 0,619,  plcorg, loc, level, neworg ) >*/
    putval_(&c__6, &c__0, &c__619, &arrcom_1.plcorg, &loc, &level, &neworg);
/*< 	call putval(6, 0,620,  nuaplc, loc, level, numshp ) >*/
    putval_(&c__6, &c__0, &c__620, &arrcom_1.nuaplc, &loc, &level, &numshp);
/*< 20	call getval(6, 0,622,  plcorg, idest, icode/3+1, ival ) >*/
L20:
    i__1 = *icode / 3 + 1;
    getval_(&c__6, &c__0, &c__622, &arrcom_1.plcorg, idest, &i__1, &ival);
/*< 	if( ival .ne. 0 .and. ival .ne. player ) goto 30 >*/
    if (ival != 0 && ival != usrcom_1.player) {
	goto L30;
    }
/*< 	call putval(4, 0,624,  -1, player ) >*/
    putval_(&c__4, &c__0, &c__624, &c_n1, &usrcom_1.player);
/*< 	call addval(6, 0,625,  nuaplc, idest, icode/3+1, 1 ) >*/
    i__1 = *icode / 3 + 1;
    addval_(&c__6, &c__0, &c__625, &arrcom_1.nuaplc, idest, &i__1, &c__1);
/*< 30	if( iverb .ne. 2 ) goto 35 >*/
L30:
    if (*iverb != 2) {
	goto L35;
    }
/*< 	mtime = mtime / 764529 >*/
    mtime /= 764529;
/*< 	call putval(5, 0,628,  hmflag, ship, 1 ) >*/
    putval_(&c__5, &c__0, &c__628, &arrcom_1.hmflag, ship, &c__1);
/*< 	goto 2000 >*/
    goto L2000;
/*< 35	call putval(5, 0,631,  hmflag, ship, 2 ) >*/
L35:
    putval_(&c__5, &c__0, &c__631, &arrcom_1.hmflag, ship, &c__2);
/*< 	call getval(7, 0,632,  powdst, ship, 1, 1, ival ) >*/
    getval_(&c__7, &c__0, &c__632, &arrcom_1.powdst, ship, &c__1, &c__1, &
	    ival);
/*< 	mtime = mtime / ival >*/
    mtime /= ival;
/*< 	goto 2000 >*/
    goto L2000;
/* ***	CREATE */
/*< 100	if( orb .ne. 1 ) goto 2200 >*/
L100:
    if (orb != 1) {
	goto L2200;
    }
/*< 	if(stype.eq.1.and.(icode.lt.3.or.icode.gt.6)) goto 2200 >*/
    if (stype == 1 && (*icode < 3 || *icode > 6)) {
	goto L2200;
    }
/*< 	if(stype.eq.2.and.icode.le.3) goto 2200 >*/
    if (stype == 2 && *icode <= 3) {
	goto L2200;
    }
/*< 	if(stype.gt.2.and.stype.lt.7) goto 2200 >*/
    if (stype > 2 && stype < 7) {
	goto L2200;
    }
/*< 	if(stype.eq.7.and.icode.gt.3) goto 2200 >*/
    if (stype == 7 && *icode > 3) {
	goto L2200;
    }
/*< 	if( icode .ne. 4 .and. icode .ne. 5 ) goto 105 >*/
    if (*icode != 4 && *icode != 5) {
	goto L105;
    }
/*< 	call getval(6, 0,644,  restrn, loc, icode-3, ival ) >*/
    i__1 = *icode - 3;
    getval_(&c__6, &c__0, &c__644, &arrcom_1.restrn, &loc, &i__1, &ival);
/*< 	if( ival .eq. 0 ) goto 2200 >*/
    if (ival == 0) {
	goto L2200;
    }
/*< 105	call getval(6, 0,646,  res, ship, 1, ival ) >*/
L105:
    getval_(&c__6, &c__0, &c__646, &arrcom_1.res, ship, &c__1, &ival);
/*< 	if( oreqir(icode) .gt. ival ) goto 2200 >*/
    if (oreqir[*icode - 1] > ival) {
	goto L2200;
    }
/*< 	call getval(6, 0,648,  res, ship, 4, ival ) >*/
    getval_(&c__6, &c__0, &c__648, &arrcom_1.res, ship, &c__4, &ival);
/*< 	if( menreq(icode) .gt. ival ) goto 2200 >*/
    if (menreq[*icode - 1] > ival) {
	goto L2200;
    }
/*< 	if( idest .eq. 0 ) goto 107 >*/
    if (*idest == 0) {
	goto L107;
    }
/*< 	if( idest .gt. lunit ) goto 2200 >*/
    if (*idest > usrcom_1.lunit) {
	goto L2200;
    }
/*< 	call getval(5, 0,652,  org, idest, ival ) >*/
    getval_(&c__5, &c__0, &c__652, &arrcom_1.org, idest, &ival);
/*< 	if( ival .ne. player ) goto 2200 >*/
    if (ival != usrcom_1.player) {
	goto L2200;
    }
/*< 	call getval(5, 0,654,  wprogr, idest, ival ) >*/
    getval_(&c__5, &c__0, &c__654, &arrcom_1.wprogr, idest, &ival);
/*< 	if( ival .eq. 0 ) goto 2200 >*/
    if (ival == 0) {
	goto L2200;
    }
/*< 107	call addunt( loc, icode, i, lmove ) >*/
L107:
    addunt_(&loc, icode, &i__, lmove);
/*< 	if( .not. lmove ) goto 2200 >*/
    if (! (*lmove)) {
	goto L2200;
    }
/*< 	call addval(6, 0,658,  res, ship, 1, -oreqir(icode) ) >*/
    i__1 = -oreqir[*icode - 1];
    addval_(&c__6, &c__0, &c__658, &arrcom_1.res, ship, &c__1, &i__1);
/*< 	call addval(6, 0,659,  res, ship, 4, -menreq(icode) ) >*/
    i__1 = -menreq[*icode - 1];
    addval_(&c__6, &c__0, &c__659, &arrcom_1.res, ship, &c__4, &i__1);
/*< 	mtime = timcre(icode) >*/
    mtime = timcre[*icode - 1];
/*< 	call putval(5, 0,661,  tmtonx, i, mtime ) >*/
    putval_(&c__5, &c__0, &c__661, &arrcom_1.tmtonx, &i__, &mtime);
/*< 	if( idest .eq. 0 ) goto 2000 >*/
    if (*idest == 0) {
	goto L2000;
    }
/*< 	call addval(5, 0,663,  numusr, ival, 1 ) >*/
    addval_(&c__5, &c__0, &c__663, &arrcom_1.numusr, &ival, &c__1);
/*< 	call putval(5, 0,664,  wprogr, i, ival ) >*/
    putval_(&c__5, &c__0, &c__664, &arrcom_1.wprogr, &i__, &ival);
/*< 	call putval(5, 0,665,  pc, i, 1 ) >*/
    putval_(&c__5, &c__0, &c__665, &arrcom_1.pc, &i__, &c__1);
/*< 	goto 2000 >*/
    goto L2000;
/* ***	LOAD ON/FROM */
/*< 300	itype = mod( idest/(2**15), 4 ) + 1 >*/
L300:
    itype = *idest / 32768 % 4 + 1;
/*< 	ift = idest/(2**17) >*/
    ift = *idest / 131072;
/*< 	ifrom = ship >*/
    ifrom = *ship;
/*< 	ito = mod( idest, 2**15 ) >*/
    ito = *idest % 32768;
/*< 	if( ito .eq. 0 ) goto 350 >*/
    if (ito == 0) {
	goto L350;
    }
/*< 	if( ito .le. 0 .or. ito .gt. lunit ) goto 2200 >*/
    if (ito <= 0 || ito > usrcom_1.lunit) {
	goto L2200;
    }
/*< 	call getval(5, 0,676,  org, ito, ival ) >*/
    getval_(&c__5, &c__0, &c__676, &arrcom_1.org, &ito, &ival);
/*< 	if( ival .ne. player ) goto 2200 >*/
    if (ival != usrcom_1.player) {
	goto L2200;
    }
/*< 	call getval(5, 0,678,  shiptr, ito, ival ) >*/
    getval_(&c__5, &c__0, &c__678, &arrcom_1.shiptr, &ito, &ival);
/*< 	if( ival .ne. loc ) goto 2200 >*/
    if (ival != loc) {
	goto L2200;
    }
/*< 	call getval(5, 0,680,  orbit, ito, ival ) >*/
    getval_(&c__5, &c__0, &c__680, &arrcom_1.orbit, &ito, &ival);
/*< 	if( ival .ne. orb ) goto 2200 >*/
    if (ival != orb) {
	goto L2200;
    }
/*< 	if( ift .eq. 0 ) goto 305 >*/
    if (ift == 0) {
	goto L305;
    }
/*< 	ifrom = ito >*/
    ifrom = ito;
/*< 	ito = ship >*/
    ito = *ship;
/*< 305	call getval(6, 0,687,  res, ifrom, itype, ival ) >*/
L305:
    getval_(&c__6, &c__0, &c__687, &arrcom_1.res, &ifrom, &itype, &ival);
/*< 	if( ival .lt. icode ) goto 2200 >*/
    if (ival < *icode) {
	goto L2200;
    }
/*< 	call getval(5, 0,689,  type, ito, stype ) >*/
    getval_(&c__5, &c__0, &c__689, &arrcom_1.type__, &ito, &stype);
/*< 	call getval(6, 0,690,  res, ito, itype, ival ) >*/
    getval_(&c__6, &c__0, &c__690, &arrcom_1.res, &ito, &itype, &ival);
/*< 	if( maxres( stype, itype ) - ival .lt. icode ) goto 2200 >*/
    if (maxres[stype + itype * 7 - 8] - ival < *icode) {
	goto L2200;
    }
/*< 	call addval(4, 0,692,  -1, icode ) >*/
    addval_(&c__4, &c__0, &c__692, &c_n1, icode);
/*< 	call addval(6, 0,693,  res, ifrom, itype, -icode ) >*/
    i__1 = -(*icode);
    addval_(&c__6, &c__0, &c__693, &arrcom_1.res, &ifrom, &itype, &i__1);
/*< 	mtime = orb*iverb*icode >*/
    mtime = orb * *iverb * *icode;
/*< 	goto 2000 >*/
    goto L2000;
/* ***	LOAD MEN */
/*< 350	if( itype .ne. 4 ) goto 2200 >*/
L350:
    if (itype != 4) {
	goto L2200;
    }
/*< 	call getval(6, 0,700,  res, ship, 4, ival ) >*/
    getval_(&c__6, &c__0, &c__700, &arrcom_1.res, ship, &c__4, &ival);
/*< 	if( maxres( stype, itype ) - ival .lt. icode ) goto 2200 >*/
    if (maxres[stype + itype * 7 - 8] - ival < *icode) {
	goto L2200;
    }
/*< 	if( orb .ne. 1 ) goto 2200 >*/
    if (orb != 1) {
	goto L2200;
    }
/*< 	call getval(5, 0,703,  pop, loc, ival ) >*/
    getval_(&c__5, &c__0, &c__703, &arrcom_1.pop, &loc, &ival);
/*< 	if( ival .eq. 0 ) goto 2200 >*/
    if (ival == 0) {
	goto L2200;
    }
/*< 	call addval(6, 0,705,  res, ship, 4, icode ) >*/
    addval_(&c__6, &c__0, &c__705, &arrcom_1.res, ship, &c__4, icode);
/*< 	mtime = icode*7 >*/
    mtime = *icode * 7;
/*< 	goto 2000 >*/
    goto L2000;
/* ***	TACTIC */
/*< 600	ival = idest >*/
L600:
    ival = *idest;
/*< 	j = 0 >*/
    j = 0;
/*< 	do 605 i = 1, 3 >*/
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    j = j + mod( ival, 32 ) >*/
	j += ival % 32;
/*< 	    ival = ival / 32 >*/
	ival /= 32;
/*< 605	continue >*/
/* L605: */
    }
/*< 	call getval(5, 0,717,  power, ship, ival ) >*/
    getval_(&c__5, &c__0, &c__717, &arrcom_1.power, ship, &ival);
/*< 	if( ival .lt. j ) goto 2200 >*/
    if (ival < j) {
	goto L2200;
    }
/*< 	ival = idest >*/
    ival = *idest;
/*< 	do 610 i = 3, 1, -1 >*/
    for (i__ = 3; i__ >= 1; --i__) {
/*< 	    call getval(7, 0,721,  powdst, ship, i+0, 2, j ) >*/
	i__1 = i__;
	getval_(&c__7, &c__0, &c__721, &arrcom_1.powdst, ship, &i__1, &c__2, &
		j);
/*< 	    call putval(7, 0,722,  powdst, ship, i+0, 1, min0(mod(ival,32),j) ) >*/
	i__1 = i__;
/* Computing MIN */
	i__3 = ival % 32;
	i__2 = min(i__3,j);
	putval_(&c__7, &c__0, &c__722, &arrcom_1.powdst, ship, &i__1, &c__1, &
		i__2);
/*< 	    ival = ival / 32 >*/
	ival /= 32;
/*< 610	continue >*/
/* L610: */
    }
/*< 	goto 2100 >*/
    goto L2100;
/* ***	INFORM */
/*< 700	call putval(5, 0,729,  empcod, player, 2 ) >*/
L700:
    putval_(&c__5, &c__0, &c__729, &arrcom_1.empcod, &usrcom_1.player, &c__2);
/*< 	call putval(5, 0,730,  empc, player, icode ) >*/
    putval_(&c__5, &c__0, &c__730, &arrcom_1.empc, &usrcom_1.player, icode);
/*< 	call putval(5, 0,731,  empdst, player, ship ) >*/
    putval_(&c__5, &c__0, &c__731, &arrcom_1.empdst, &usrcom_1.player, ship);
/*< 	call putval(5, 0,732,  empinf, player, idest ) >*/
    putval_(&c__5, &c__0, &c__732, &arrcom_1.empinf, &usrcom_1.player, idest);
/*< 	goto 2100 >*/
    goto L2100;
/* ***	SKIP */
/*< 800	call getval(6, 0,737,  res, ship, icode, nres ) >*/
L800:
    getval_(&c__6, &c__0, &c__737, &arrcom_1.res, ship, icode, &nres);
/*< 	cmp = idest/(2**15) >*/
    cmp = *idest / 32768;
/*< 	ncomp = mod( idest, 2**15 ) >*/
    ncomp = *idest % 32768;
/*< 	goto( 810, 812, 814, 816, 818, 820 ) cmp >*/
    switch ((int)cmp) {
	case 1:  goto L810;
	case 2:  goto L812;
	case 3:  goto L814;
	case 4:  goto L816;
	case 5:  goto L818;
	case 6:  goto L820;
    }
/*< 810	if( nres .lt. ncomp ) goto 830 >*/
L810:
    if (nres < ncomp) {
	goto L830;
    }
/*< 	goto 2100 >*/
    goto L2100;
/*< 812	if( nres .le. ncomp ) goto 830 >*/
L812:
    if (nres <= ncomp) {
	goto L830;
    }
/*< 	goto 2100 >*/
    goto L2100;
/*< 814	if( nres .eq. ncomp ) goto 830 >*/
L814:
    if (nres == ncomp) {
	goto L830;
    }
/*< 	goto 2100 >*/
    goto L2100;
/*< 816	if( nres .ne. ncomp ) goto 830 >*/
L816:
    if (nres != ncomp) {
	goto L830;
    }
/*< 	goto 2100 >*/
    goto L2100;
/*< 818	if( nres .gt. ncomp ) goto 830 >*/
L818:
    if (nres > ncomp) {
	goto L830;
    }
/*< 	goto 2100 >*/
    goto L2100;
/*< 820	if( nres .ge. ncomp ) goto 830 >*/
L820:
    if (nres >= ncomp) {
	goto L830;
    }
/*< 	goto 2100 >*/
    goto L2100;
/*< 830	call addval(5, 0,755,  pc, ship, 1 ) >*/
L830:
    addval_(&c__5, &c__0, &c__755, &arrcom_1.pc, ship, &c__1);
/*< 	goto 2100 >*/
    goto L2100;
/* ***	ERROR */
/*< 850	call putval(5, 0,760,  onerpc, ship, idest ) >*/
L850:
    putval_(&c__5, &c__0, &c__760, &arrcom_1.onerpc, ship, idest);
/*< 	goto 2100 >*/
    goto L2100;
/* ***	GOTO */
/*< 900	call putval(5, 0,765,  pc, ship, idest ) >*/
L900:
    putval_(&c__5, &c__0, &c__765, &arrcom_1.pc, ship, idest);
/*< 	goto 2100 >*/
    goto L2100;
/* ***	BUILD COMMAND */
/*< 910	call getval(6, 0,770,  res, ship, 3, ival ) >*/
L910:
    getval_(&c__6, &c__0, &c__770, &arrcom_1.res, ship, &c__3, &ival);
/*< 	if( ival .lt. idest ) goto 2200 >*/
    if (ival < *idest) {
	goto L2200;
    }
/*< 	if( icode .lt. 4 ) call getval(7, 0,772,  powdst, ship, icode, 2, ival ) >*/
    if (*icode < 4) {
	getval_(&c__7, &c__0, &c__772, &arrcom_1.powdst, ship, icode, &c__2, &
		ival);
    }
/*< 	if( icode .eq. 4 ) call getval(5, 0,773,  power, ship, ival ) >*/
    if (*icode == 4) {
	getval_(&c__5, &c__0, &c__773, &arrcom_1.power, ship, &ival);
    }
/*< 	if( ival+idest .gt. 31 ) goto 2200 >*/
    if (ival + *idest > 31) {
	goto L2200;
    }
/*< 	call addval(4, 0,775,  -1, idest ) >*/
    addval_(&c__4, &c__0, &c__775, &c_n1, idest);
/*< 	call addval(6, 0,776,  res, ship, 3, -idest ) >*/
    i__1 = -(*idest);
    addval_(&c__6, &c__0, &c__776, &arrcom_1.res, ship, &c__3, &i__1);
/*< 	mtime = 37*idest*icode >*/
    mtime = *idest * 37 * *icode;
/*< 	goto 2000 >*/
    goto L2000;
/* ***	NO ARGUMENT COMMANDS */
/*< 950	goto( 960, 970, 975, 990 ) icode >*/
L950:
    switch ((int)*icode) {
	case 1:  goto L960;
	case 2:  goto L970;
	case 3:  goto L975;
	case 4:  goto L990;
    }
/* ***	RANDOM JUMP */
/*< 960	if( orb .eq. 3 ) goto 962 >*/
L960:
    if (orb == 3) {
	goto L962;
    }
/*< 	iverb = 2 >*/
    *iverb = 2;
/*< 	if( loc .gt. numstr ) iverb = 1 >*/
    if (loc > usrcom_1.numstr) {
	*iverb = 1;
    }
/*< 	icode = orb + 1 >*/
    *icode = orb + 1;
/*< 	idest = loc >*/
    *idest = loc;
/*< 	goto 10 >*/
    goto L10;
/*< 962	iverb = 2 >*/
L962:
    *iverb = 2;
/*< 	icode = 3 >*/
    *icode = 3;
/*< 	if( loc .gt. numstr ) goto 966 >*/
    if (loc > usrcom_1.numstr) {
	goto L966;
    }
/*< 964	i = iran( 5 ) >*/
L964:
    i__ = iran_(&c__5);
/*< 	call getval(6, 0,797,  dest, loc, i, idest ) >*/
    getval_(&c__6, &c__0, &c__797, &arrcom_1.dest, &loc, &i__, idest);
/*< 	if( idest .eq. 0 ) goto 964 >*/
    if (*idest == 0) {
	goto L964;
    }
/*< 	goto 10 >*/
    goto L10;
/*< 966	call getval(5, 0,801,  wstar, loc, s ) >*/
L966:
    getval_(&c__5, &c__0, &c__801, &arrcom_1.wstar, &loc, &s);
/*< 	call getval(5, 0,802,  wplan, loc, p ) >*/
    getval_(&c__5, &c__0, &c__802, &arrcom_1.wplan, &loc, &p);
/*< 	call getval(5, 0,803,  wmoon, loc, m ) >*/
    getval_(&c__5, &c__0, &c__803, &arrcom_1.wmoon, &loc, &m);
/*< 	idest = loc >*/
    *idest = loc;
/*< 968	idest = idest - 1 >*/
L968:
    --(*idest);
/*< 	call getval(5, 0,806,  wstar, idest, ival ) >*/
    getval_(&c__5, &c__0, &c__806, &arrcom_1.wstar, idest, &ival);
/*< 	if( ival .ne. s ) goto 968 >*/
    if (ival != s) {
	goto L968;
    }
/*< 	call getval(5, 0,808,  wplan, idest, ival ) >*/
    getval_(&c__5, &c__0, &c__808, &arrcom_1.wplan, idest, &ival);
/*< 	if( ival .ne. 0 .and. ival .ne. p ) goto 968 >*/
    if (ival != 0 && ival != p) {
	goto L968;
    }
/*< 	call getval(5, 0,810,  wmoon, idest, ival ) >*/
    getval_(&c__5, &c__0, &c__810, &arrcom_1.wmoon, idest, &ival);
/*< 	if( ival .ne. 0 ) goto 968 >*/
    if (ival != 0) {
	goto L968;
    }
/*< 	goto 10 >*/
    goto L10;
/* ***	PRODUCE */
/*< 970	if( stype .lt. 4 .or. stype .eq. 7 ) goto 2200 >*/
L970:
    if (stype < 4 || stype == 7) {
	goto L2200;
    }
/*< 	call getval(5, 0,817,  prdtim, ship, ival ) >*/
    getval_(&c__5, &c__0, &c__817, &arrcom_1.prdtim, ship, &ival);
/*< 	if( ival .ne. 0 ) goto 2200 >*/
    if (ival != 0) {
	goto L2200;
    }
/*< 	call putval(4, 0,819,  -1, 793 ) >*/
    putval_(&c__4, &c__0, &c__819, &c_n1, &c__793);
/*< 	goto 2100 >*/
    goto L2100;
/* ***	CEASE PRODUCTION */
/*< 975	call getval(5, 0,824,  prdtim, ship, ival ) >*/
L975:
    getval_(&c__5, &c__0, &c__824, &arrcom_1.prdtim, ship, &ival);
/*< 	if( ival .eq. 0 ) goto 2200 >*/
    if (ival == 0) {
	goto L2200;
    }
/*< 	call putval(4, 0,826,  -1, 0 ) >*/
    putval_(&c__4, &c__0, &c__826, &c_n1, &c__0);
/*< 	goto 2100 >*/
    goto L2100;
/* ***	SELF DESTRUCT */
/*< 990	call delunt( ship ) >*/
L990:
    delunt_(ship);
/*< 	goto 2100 >*/
    goto L2100;
/*< 2000	continue >*/
L2000:
/*< 	call putval(5, 0,835,  tmtonx, ship, mtime ) >*/
    putval_(&c__5, &c__0, &c__835, &arrcom_1.tmtonx, ship, &mtime);
/*< 2100	return >*/
L2100:
    return 0;
/*< 2200	lmove = .false. >*/
L2200:
    *lmove = FALSE_;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* exins_ */


/*< 	subroutine legtim( cl, co, nl, no, lmove, mtime ) >*/
/* Subroutine */ int legtim_(cl, co, nl, no, lmove, mtime)
integer *cl, *co, *nl, *no;
logical *lmove;
integer *mtime;
{
    /* System generated locals */
    integer i__1;

    /* Builtin functions */
    integer pow_ii();

    /* Local variables */
    static integer i__, ival, curm, newm, curp, newp, curs, news, optr;
    extern /* Subroutine */ int getval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical lmove >*/
/*< 	integer par( 19 ), pn( 6 ) >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	lmove = .false. >*/
    *lmove = FALSE_;
/*< 	mtime = 0 >*/
    *mtime = 0;
/*< 	call getval(5, 0,863,  wstar, cl, curs ) >*/
    getval_(&c__5, &c__0, &c__863, &arrcom_1.wstar, cl, &curs);
/*< 	call getval(5, 0,864,  wplan, cl, curp ) >*/
    getval_(&c__5, &c__0, &c__864, &arrcom_1.wplan, cl, &curp);
/*< 	call getval(5, 0,865,  wmoon, cl, curm ) >*/
    getval_(&c__5, &c__0, &c__865, &arrcom_1.wmoon, cl, &curm);
/*< 	call getval(5, 0,866,  wstar, nl, news ) >*/
    getval_(&c__5, &c__0, &c__866, &arrcom_1.wstar, nl, &news);
/*< 	call getval(5, 0,867,  wplan, nl, newp ) >*/
    getval_(&c__5, &c__0, &c__867, &arrcom_1.wplan, nl, &newp);
/*< 	call getval(5, 0,868,  wmoon, nl, newm ) >*/
    getval_(&c__5, &c__0, &c__868, &arrcom_1.wmoon, nl, &newm);
/*< 	if( co .ne. no ) goto 100 >*/
    if (*co != *no) {
	goto L100;
    }
/*< 	if( no .ne. 3 ) return >*/
    if (*no != 3) {
	return 0;
    }
/*< 	if(news.ne.curs.and.(newp.ne.curp.or.newm.ne.curm)) return >*/
    if (news != curs && (newp != curp || newm != curm)) {
	return 0;
    }
/*< 	if(newp.ne.curp.and.newm.ne.curm) return >*/
    if (newp != curp && newm != curm) {
	return 0;
    }
/*< 	if( news .eq. curs ) goto 200 >*/
    if (news == curs) {
	goto L200;
    }
/*< 	do 50 i = 1, 5 >*/
    for (i__ = 1; i__ <= 5; ++i__) {
/*< 	    call getval(6, 0,875,  dest, curs, i+0, ival ) >*/
	i__1 = i__;
	getval_(&c__6, &c__0, &c__875, &arrcom_1.dest, &curs, &i__1, &ival);
/*< 	    if( ival .ne. news ) goto 50 >*/
	if (ival != news) {
	    goto L50;
	}
/*< 	    call getval(6, 0,877,  time, curs, i+0, mtime ) >*/
	i__1 = i__;
	getval_(&c__6, &c__0, &c__877, &arrcom_1.time, &curs, &i__1, mtime);
/*< 	    mtime = mtime*764529 >*/
	*mtime *= 764529;
/*< 	    goto 200 >*/
	goto L200;
/*< 50	continue >*/
L50:
	;
    }
/*< 	return >*/
    return 0;
/*< 100	if >*/
L100:
    if (news != curs || newp != curp || newm != curm || (i__1 = *no - *co, 
	    abs(i__1)) > 1) {
	return 0;
    }
/*< 	optr = 0 >*/
    optr = 0;
/*< 	if( newm .eq. 0 ) optr = 1 >*/
    if (newm == 0) {
	optr = 1;
    }
/*< 	if( newp .eq. 0 ) optr = 2 >*/
    if (newp == 0) {
	optr = 2;
    }
/*< 	if( no+co .gt. 3 ) optr = optr + 1 >*/
    if (*no + *co > 3) {
	++optr;
    }
/*< 	mtime = mtime + 13**optr >*/
    *mtime += pow_ii(&c__13, &optr);
/*< 200	if( newp .ne. curp ) mtime = mtime + (newp + curp)*3167 >*/
L200:
    if (newp != curp) {
	*mtime += (newp + curp) * 3167;
    }
/*< 	if( newm .ne. curm ) mtime = mtime + (newm + curm)*98 >*/
    if (newm != curm) {
	*mtime += (newm + curm) * 98;
    }
/*< 	lmove = .true. >*/
    *lmove = TRUE_;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* legtim_ */


/*< 	subroutine addunt( loc, stype, shpnum, lmove ) >*/
/* Subroutine */ int addunt_(loc, stype, shpnum, lmove)
integer *loc, *stype, *shpnum;
logical *lmove;
{
    /* Initialized data */

    static integer typowr[7] = { 7,4,2,1,1,1,7 };
    static integer maxpow[21]	/* was [7][3] */ = { 7,4,2,1,1,1,7,12,10,7,3,
	    3,2,15,5,4,2,1,1,0,7 };

    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, ival;
    extern /* Subroutine */ int addval_(), getval_(), putval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer typowr(7), maxpow(7,3) >*/
/*< 	logical lmove >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	data typowr/7,4,2,1,1,1,7/ >*/
/*< 	data  >*/
/*< 	lmove = .false. >*/
    *lmove = FALSE_;
/*< 	call getval(5, 0,921,  useful, 5, lunit ) >*/
    getval_(&c__5, &c__0, &c__921, &arrcom_1.useful, &c__5, &usrcom_1.lunit);
/*< 	if( lunit .ge. maxuni ) return >*/
    if (usrcom_1.lunit >= usrcom_1.maxuni) {
	return 0;
    }
/*< 	call getval(5, 0,923,  nofuni, player, ival ) >*/
    getval_(&c__5, &c__0, &c__923, &arrcom_1.nofuni, &usrcom_1.player, &ival);
/*< 	if( ival .ge. maxpla ) return >*/
    if (ival >= usrcom_1.maxpla) {
	return 0;
    }
/*< 	call addval(4, 0,925,  -1, 1 ) >*/
    addval_(&c__4, &c__0, &c__925, &c_n1, &c__1);
/*< 	if( lunit .le. 1 ) goto 101 >*/
    if (usrcom_1.lunit <= 1) {
	goto L101;
    }
/*< 	do 100 shpnum = 1, lunit-1 >*/
    i__1 = usrcom_1.lunit - 1;
    for (*shpnum = 1; *shpnum <= i__1; ++(*shpnum)) {
/*< 	    call getval(5, 0,928,  org, shpnum+0, ival ) >*/
	i__2 = *shpnum;
	getval_(&c__5, &c__0, &c__928, &arrcom_1.org, &i__2, &ival);
/*< 	    if( ival .eq. 0 ) goto 200 >*/
	if (ival == 0) {
	    goto L200;
	}
/*< 100	continue >*/
/* L100: */
    }
/*< 101	continue >*/
L101:
/*< 	lunit = lunit + 1 >*/
    ++usrcom_1.lunit;
/*< 	call putval(5, 0,933,  useful, 5, lunit ) >*/
    putval_(&c__5, &c__0, &c__933, &arrcom_1.useful, &c__5, &usrcom_1.lunit);
/*< 	shpnum = lunit >*/
    *shpnum = usrcom_1.lunit;
/*< 200	call putval(5, 0,935,  org, shpnum, player ) >*/
L200:
    putval_(&c__5, &c__0, &c__935, &arrcom_1.org, shpnum, &usrcom_1.player);
/*< 	do 300 i = 1, 4 >*/
    for (i__ = 1; i__ <= 4; ++i__) {
/*< 	    call putval(6, 0,937,  res, shpnum, i+0, 0 ) >*/
	i__1 = i__;
	putval_(&c__6, &c__0, &c__937, &arrcom_1.res, shpnum, &i__1, &c__0);
/*< 300	continue >*/
/* L300: */
    }
/*< 	call putval(5, 0,939,  type, shpnum, stype ) >*/
    putval_(&c__5, &c__0, &c__939, &arrcom_1.type__, shpnum, stype);
/*< 	call putval(5, 0,940,  shiptr, shpnum, loc ) >*/
    putval_(&c__5, &c__0, &c__940, &arrcom_1.shiptr, shpnum, loc);
/*< 	call putval(5, 0,941,  orbit, shpnum, 1 ) >*/
    putval_(&c__5, &c__0, &c__941, &arrcom_1.orbit, shpnum, &c__1);
/*< 	call putval(5, 0,942,  hmflag, shpnum, 0 ) >*/
    putval_(&c__5, &c__0, &c__942, &arrcom_1.hmflag, shpnum, &c__0);
/*< 	call putval(5, 0,943,  wprogr, shpnum, 0 ) >*/
    putval_(&c__5, &c__0, &c__943, &arrcom_1.wprogr, shpnum, &c__0);
/*< 	call putval(5, 0,944,  pc, shpnum, 0 ) >*/
    putval_(&c__5, &c__0, &c__944, &arrcom_1.pc, shpnum, &c__0);
/*< 	call putval(5, 0,945,  onerpc, shpnum, 0 ) >*/
    putval_(&c__5, &c__0, &c__945, &arrcom_1.onerpc, shpnum, &c__0);
/*< 	call putval(5, 0,946,  tmtonx, shpnum, 0 ) >*/
    putval_(&c__5, &c__0, &c__946, &arrcom_1.tmtonx, shpnum, &c__0);
/*< 	call putval(5, 0,947,  prdtim, shpnum, 0 ) >*/
    putval_(&c__5, &c__0, &c__947, &arrcom_1.prdtim, shpnum, &c__0);
/*< 	call putval(5, 0,948,  power, shpnum, typowr(stype) ) >*/
    putval_(&c__5, &c__0, &c__948, &arrcom_1.power, shpnum, &typowr[*stype - 
	    1]);
/*< 	do 400 i = 1, 3 >*/
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    call putval(7, 0,950,  powdst, shpnum, i+0, 2, maxpow(stype,i) ) >*/
	i__1 = i__;
	putval_(&c__7, &c__0, &c__950, &arrcom_1.powdst, shpnum, &i__1, &c__2,
		 &maxpow[*stype + i__ * 7 - 8]);
/*< 	    call putval(7, 0,951,  powdst, shpnum, i+0, 1, 0 ) >*/
	i__1 = i__;
	putval_(&c__7, &c__0, &c__951, &arrcom_1.powdst, shpnum, &i__1, &c__1,
		 &c__0);
/*< 400	continue >*/
/* L400: */
    }
/*< 	call getval(6, 0,953,  plcorg, loc, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__953, &arrcom_1.plcorg, loc, &c__1, &ival);
/*< 	if( ival .eq. 0 ) call putval(4, 0,954,  -1, player ) >*/
    if (ival == 0) {
	putval_(&c__4, &c__0, &c__954, &c_n1, &usrcom_1.player);
    }
/*< 	if(ival.eq.player.or.ival.eq.0) call addval(6, 0,955, nuaplc,loc,1,1) >*/
    if (ival == usrcom_1.player || ival == 0) {
	addval_(&c__6, &c__0, &c__955, &arrcom_1.nuaplc, loc, &c__1, &c__1);
    }
/*< 	lmove = .true. >*/
    *lmove = TRUE_;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* addunt_ */


/*< 	subroutine delunt( shpnum ) >*/
/* Subroutine */ int delunt_(shpnum)
integer *shpnum;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, j, k, loc, orb, ival, level;
    extern /* Subroutine */ int addval_(), getval_();
    static integer dplayr, neworg;
    extern /* Subroutine */ int putval_();
    static integer numshp;

/*< 	implicit integer ( a - z ) >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	call getval(5, 0,976,  useful, 5, lunit ) >*/
    getval_(&c__5, &c__0, &c__976, &arrcom_1.useful, &c__5, &usrcom_1.lunit);
/*< 	call getval(5, 0,977,  org, shpnum, dplayr ) >*/
    getval_(&c__5, &c__0, &c__977, &arrcom_1.org, shpnum, &dplayr);
/*< 	call putval(4, 0,978,  -1, 0 ) >*/
    putval_(&c__4, &c__0, &c__978, &c_n1, &c__0);
/*< 	call addval(5, 0,979,  nofuni, dplayr, -1 ) >*/
    addval_(&c__5, &c__0, &c__979, &arrcom_1.nofuni, &dplayr, &c_n1);
/*< 	call getval(5, 0,980,  wprogr, shpnum, ival ) >*/
    getval_(&c__5, &c__0, &c__980, &arrcom_1.wprogr, shpnum, &ival);
/*< 	if( ival .ne. 0 ) call addval(5, 0,981,  numusr, ival, -1 ) >*/
    if (ival != 0) {
	addval_(&c__5, &c__0, &c__981, &arrcom_1.numusr, &ival, &c_n1);
    }
/*< 	call getval(5, 0,982,  shiptr, shpnum, loc ) >*/
    getval_(&c__5, &c__0, &c__982, &arrcom_1.shiptr, shpnum, &loc);
/*< 	call getval(5, 0,983,  orbit, shpnum, orb ) >*/
    getval_(&c__5, &c__0, &c__983, &arrcom_1.orbit, shpnum, &orb);
/*< 	level = orb/3 + 1 >*/
    level = orb / 3 + 1;
/*< 	call getval(6, 0,985,  plcorg, loc, level, ival ) >*/
    getval_(&c__6, &c__0, &c__985, &arrcom_1.plcorg, &loc, &level, &ival);
/*< 	if( ival .ne. dplayr ) goto 100 >*/
    if (ival != dplayr) {
	goto L100;
    }
/*< 	call getval(6, 0,987,  nuaplc, loc, level, ival ) >*/
    getval_(&c__6, &c__0, &c__987, &arrcom_1.nuaplc, &loc, &level, &ival);
/*< 	call addval(4, 0,988,  -1, -1 ) >*/
    addval_(&c__4, &c__0, &c__988, &c_n1, &c_n1);
/*< 	if( ival .gt. 1 ) goto 100 >*/
    if (ival > 1) {
	goto L100;
    }
/*< 	neworg = 0 >*/
    neworg = 0;
/*< 	numshp = 0 >*/
    numshp = 0;
/*< 	do 50 i = 1, lunit >*/
    i__1 = usrcom_1.lunit;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    j = i >*/
	j = i__;
/*< 	    call getval(5, 0,994,  shiptr, j, ival ) >*/
	getval_(&c__5, &c__0, &c__994, &arrcom_1.shiptr, &j, &ival);
/*< 	    if( ival .ne. loc ) goto 50 >*/
	if (ival != loc) {
	    goto L50;
	}
/*< 	    call getval(5, 0,996,  orbit, j, ival ) >*/
	getval_(&c__5, &c__0, &c__996, &arrcom_1.orbit, &j, &ival);
/*< 	    if( ival/3 + 1 .ne. level ) goto 50 >*/
	if (ival / 3 + 1 != level) {
	    goto L50;
	}
/*< 	    call getval(5, 0,998,  org, j, k ) >*/
	getval_(&c__5, &c__0, &c__998, &arrcom_1.org, &j, &k);
/*< 	    if( k.eq.0 .or. (neworg.ne.0 .and. k.ne.neworg) ) goto 50 >*/
	if (k == 0 || neworg != 0 && k != neworg) {
	    goto L50;
	}
/*< 	    neworg = k >*/
	neworg = k;
/*< 	    numshp = numshp + 1 >*/
	++numshp;
/*< 50	continue >*/
L50:
	;
    }
/*< 	call putval(6, 0,1003,  plcorg, loc, level, neworg ) >*/
    putval_(&c__6, &c__0, &c__1003, &arrcom_1.plcorg, &loc, &level, &neworg);
/*< 	call putval(6, 0,1004,  nuaplc, loc, level, numshp ) >*/
    putval_(&c__6, &c__0, &c__1004, &arrcom_1.nuaplc, &loc, &level, &numshp);
/*< 100	if( lunit .gt. shpnum ) return >*/
L100:
    if (usrcom_1.lunit > *shpnum) {
	return 0;
    }
/*< 	lunit = lunit - 1 >*/
    --usrcom_1.lunit;
/*< 	if( lunit .le. 0 ) goto 150 >*/
    if (usrcom_1.lunit <= 0) {
	goto L150;
    }
/*< 	call getval(5, 0,1009,  org, lunit, ival ) >*/
    getval_(&c__5, &c__0, &c__1009, &arrcom_1.org, &usrcom_1.lunit, &ival);
/*< 	if( ival .eq. 0 ) goto 100 >*/
    if (ival == 0) {
	goto L100;
    }
/*< 150	call putval(5, 0,1011,  useful, 5, lunit ) >*/
L150:
    putval_(&c__5, &c__0, &c__1011, &arrcom_1.useful, &c__5, &usrcom_1.lunit);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* delunt_ */


/*< 	subroutine disens( new, ship, xtr ) >*/
/* Subroutine */ int disens_(new__, ship, xtr)
logical *new__;
integer *ship;
logical *xtr;
{
    /* Initialized data */

    static integer tc[7] = { 83,72,71,79,70,76,80 };
    static integer letter[6] = { 66,65,70,71,75,77 };

    /* System generated locals */
    integer i__1, i__2, i__3;
    real r__1, r__2;

    /* Builtin functions */
    double r_lg10(), pow_ri();

    /* Local variables */
    static integer i__, j, i1, i2, i3, iv, loc, orb;
    static logical line;
    static integer ival, oloc;
    extern /* Subroutine */ int ploc_();
    static real zrad;
    static integer oorb;
    static real temp;
    static integer sorb, sorg;
    extern /* Subroutine */ int pback_();
    static real class__;
    extern integer iqran_();
    static integer oship;
    static real zmass;
    static integer itype;
    extern /* Subroutine */ int punit_();
    static integer twoat, stype, oldara[169]	/* was [13][13] */, oldfod, 
	    newara[169]	/* was [13][13] */, threat, onedot;
    static real zlumen;
    static integer onestr, thrshr, twoats;
    extern /* Subroutine */ int getval_();
    static integer thrstr, hypmov;
    extern /* Subroutine */ int cursor_(), pcolor_(), string_();
    static integer iatmos, planum, moonum;
    extern /* Subroutine */ int number_(), chrout_();
    static integer powert, istarc, oldpop, oldore, oldhun, natmos, splayr;
    extern /* Subroutine */ int irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer newara(13,13), oldara(13,13), tc(7), letter(6) >*/
/*< 	real class, zmass, zrad, zlumen, temp >*/
/*< 	integer threat, twoats, onestr, thrshr, onedot, thrstr >*/
/*< 	logical new, xtr, line >*/
/*< 	integer bldtok(3) >*/
/* 	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT */
/* 	INTEGER COLOR(6,2) */
/*< 	commo >*/
/*< 	commo >*/
/*< 	commo >*/
/* 	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT */
/* 	DATA ((COLOR(I,J),J=1,2),I=1,6)/'DEEP-BLUE ','BLUE-WHITE', */
/*     & 'WHITE     ','YELLOW    ','LIGHT-RED ','DEEP-RED  '/ */
/*< 	data tc/83,72,71,79,70,76,80/ >*/
/*< 	data letter/66,65,70,71,75,77/ >*/
/*< 	if( threat .ne. 0 ) goto 5 >*/
    if (threat != 0) {
	goto L5;
    }
/*< 	threat = 1 >*/
    threat = 1;
/*< 	twoats = 2 >*/
    twoats = 2;
/*< 	onestr = 3 >*/
    onestr = 3;
/*< 	thrshr = 4 >*/
    thrshr = 4;
/*< 	onedot = 5 >*/
    onedot = 5;
/*< 	thrstr = 6 >*/
    thrstr = 6;
/*< 5	continue >*/
L5:
/*< 	call getval(5, 0,1059,  hmflag, ship, hypmov ) >*/
    getval_(&c__5, &c__0, &c__1059, &arrcom_1.hmflag, ship, &hypmov);
/*< 	if( .not. xtr ) goto 10 >*/
    if (! (*xtr)) {
	goto L10;
    }
/*< 	if( .not. new ) return >*/
    if (! (*new__)) {
	return 0;
    }
/*< 	call cursor( 20, 12 ) >*/
    cursor_(&c__20, &c__12);
/*< 	call pcolor( icllbl ) >*/
    pcolor_(&col_1.icllbl);
/*< 	call string(1, '*** ^E') >*/
    string_(&c__1, "*** ^E", (ftnlen)6);
/*< 	call punit( ship ) >*/
    punit_(ship);
/*< 	if( hypmov .eq. 1 ) call string(1,'in hyperspace ***^E') >*/
    if (hypmov == 1) {
	string_(&c__1, "in hyperspace ***^E", (ftnlen)19);
    }
/*< 	if( hypmov .eq. 2 ) call string(1,'in transit ***^E') >*/
    if (hypmov == 2) {
	string_(&c__1, "in transit ***^E", (ftnlen)16);
    }
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	return >*/
    return 0;
/*< 10	call getval(5, 0,1071,  shiptr, ship, loc ) >*/
L10:
    getval_(&c__5, &c__0, &c__1071, &arrcom_1.shiptr, ship, &loc);
/*< 	call getval(5, 0,1072,  orbit, ship, orb ) >*/
    getval_(&c__5, &c__0, &c__1072, &arrcom_1.orbit, ship, &orb);
/*< 	call getval(5, 0,1073,  ptype, loc, itype ) >*/
    getval_(&c__5, &c__0, &c__1073, &arrcom_1.ptype, &loc, &itype);
/*< 	iatmos = iclbla >*/
    iatmos = col_1.iclbla;
/*< 	if( itype .eq. 1 .and. orb .eq. 1 ) iatmos = icllbl >*/
    if (itype == 1 && orb == 1) {
	iatmos = col_1.icllbl;
    }
/*< 	if( .not. new .and. loc .eq. oloc .and. orb .eq. oorb ) goto 50 >*/
    if (! (*new__) && loc == oloc && orb == oorb) {
	goto L50;
    }
/*< 	oloc = loc >*/
    oloc = loc;
/*< 	oorb = orb >*/
    oorb = orb;
/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	call string(1,'Sensor scan from ^E') >*/
    string_(&c__1, "Sensor scan from ^E", (ftnlen)19);
/*< 	call punit( ship ) >*/
    punit_(ship);
/*< 	call string(1,' at ^E') >*/
    string_(&c__1, " at ^E", (ftnlen)6);
/*< 	call ploc( loc, orb ) >*/
    ploc_(&loc, &orb);
/*< 50	if( .not. new ) goto 1000 >*/
L50:
    if (! (*new__)) {
	goto L1000;
    }
/*< 	call getval(5, 0,1085,  wplan, loc, planum ) >*/
    getval_(&c__5, &c__0, &c__1085, &arrcom_1.wplan, &loc, &planum);
/*< 	call getval(5, 0,1086,  wmoon, loc, moonum ) >*/
    getval_(&c__5, &c__0, &c__1086, &arrcom_1.wmoon, &loc, &moonum);
/*< 	call string(1,'^M^J^JCat. code: ^E') >*/
    string_(&c__1, "^M^J^JCat. code: ^E", (ftnlen)19);
/*< 	call number(1, loc ) >*/
    number_(&c__1, &loc);
/*< 	call chrout(47) >*/
    chrout_(&c__47);
/*< 	if( loc .gt. numstr ) goto 200 >*/
    if (loc > usrcom_1.numstr) {
	goto L200;
    }
/*< 	call getval(5, 0,1091,  wplace, loc, ival ) >*/
    getval_(&c__5, &c__0, &c__1091, &arrcom_1.wplace, &loc, &ival);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	call string(1,'^M^JSpectral class: ^E') >*/
    string_(&c__1, "^M^JSpectral class: ^E", (ftnlen)22);
/*< 	class = iqran(loc,60) - 1 >*/
    class__ = (real) (iqran_(&loc, &c__60) - 1);
/*< 	call chrout( letter(ifix(class/10.0)+1) ) >*/
    chrout_(&letter[(integer) (class__ / (float)10.)]);
/*< 	call number(1, mod(ifix(class),10) ) >*/
    i__1 = (integer) class__ % 10;
    number_(&c__1, &i__1);
/*< 	call string(1,'.^M^JMass: ^E') >*/
    string_(&c__1, ".^M^JMass: ^E", (ftnlen)13);
/*< 	zmass = -4.9775*10.0**25*(class-20)/30.0 + 2.9855*10.0**27 >*/
    zmass = (class__ - 20) * (float)-4.9775000000000005e25 / (float)30. + (
	    float)2.9855000000000003e27;
/*< 	powert = alog10( zmass ) >*/
    powert = r_lg10(&zmass);
/*< 	call number(4, zmass/(10.0**powert), 0, 10, 3 ) >*/
    r__1 = zmass / pow_ri(&c_b1290, &powert);
    number_(&c__4, &r__1, &c__0, &c__10, &c__3);
/*< 	call chrout(69) >*/
    chrout_(&c__69);
/*< 	call number(1, powert ) >*/
    number_(&c__1, &powert);
/*< 	call string(1,' MT.^M^JRadius: ^E') >*/
    string_(&c__1, " MT.^M^JRadius: ^E", (ftnlen)18);
/*< 	zrad = -15660*(class-20)/30.0 + 974400 >*/
    zrad = (class__ - 20) * -15660 / (float)30. + 974400;
/*< 	call number(4, zrad, 0, 10, 3 ) >*/
    number_(&c__4, &zrad, &c__0, &c__10, &c__3);
/*< 	call string(1,' km.^M^JDensity: ^E') >*/
    string_(&c__1, " km.^M^JDensity: ^E", (ftnlen)19);
/*< 	call number(4, 2.39*(class-20)/30.0 + 0.791, 0, 10, 3 ) >*/
    r__1 = (class__ - 20) * (float)2.39 / (float)30. + (float).791;
    number_(&c__4, &r__1, &c__0, &c__10, &c__3);
/*< 	call string(1,' G/CM3.^M^JLuminosity: ^E') >*/
    string_(&c__1, " G/CM3.^M^JLuminosity: ^E", (ftnlen)25);
/*< 	zlumen = -4.458*(class-20)/30.0 + 4.78 >*/
    zlumen = (class__ - 20) * (float)-4.458 / (float)30. + (float)4.78;
/*< 	call number(4, zlumen, 0, 10, 3 ) >*/
    number_(&c__4, &zlumen, &c__0, &c__10, &c__3);
/*< 	call string(1,' AL.^M^JSurface temperature: ^E') >*/
    string_(&c__1, " AL.^M^JSurface temperature: ^E", (ftnlen)31);
/*< 	temp = -3340*(class-20)/30.0 + 7060 >*/
    temp = (class__ - 20) * -3340 / (float)30. + 7060;
/*< 	call number(4, temp, 0, 10, 3 ) >*/
    number_(&c__4, &temp, &c__0, &c__10, &c__3);
/*< 	call string(1,'K.^M^JWave length: ^E') >*/
    string_(&c__1, "K.^M^JWave length: ^E", (ftnlen)21);
/*< 	call number(4, 4100 + 351*class, 0, 10, 2 ) >*/
    r__1 = class__ * 351 + 4100;
    number_(&c__4, &r__1, &c__0, &c__10, &c__2);
/*< 	call string(1,' microns.^M^JColor: ^E') >*/
    string_(&c__1, " microns.^M^JColor: ^E", (ftnlen)22);
/* 	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT */
/*< 	goto( 61, 62, 63, 64, 65, 66 ) ifix(class/10)+1 >*/
    switch ((int)((integer) (class__ / 10) + 1)) {
	case 1:  goto L61;
	case 2:  goto L62;
	case 3:  goto L63;
	case 4:  goto L64;
	case 5:  goto L65;
	case 6:  goto L66;
    }
/*< 61	call string(1,'deep-blue^E') >*/
L61:
    string_(&c__1, "deep-blue^E", (ftnlen)11);
/*< 	istarc = icldbl >*/
    istarc = col_1.icldbl;
/*< 	goto 100 >*/
    goto L100;
/*< 62	call string(1,'blue-white^E') >*/
L62:
    string_(&c__1, "blue-white^E", (ftnlen)12);
/*< 	istarc = icllbl >*/
    istarc = col_1.icllbl;
/*< 	goto 100 >*/
    goto L100;
/*< 63	call string(1,'white^E') >*/
L63:
    string_(&c__1, "white^E", (ftnlen)7);
/*< 	istarc = iclwhi >*/
    istarc = col_1.iclwhi;
/*< 	goto 100 >*/
    goto L100;
/*< 64	call string(1,'yellow^E') >*/
L64:
    string_(&c__1, "yellow^E", (ftnlen)8);
/*< 	istarc = iclyel >*/
    istarc = col_1.iclyel;
/*< 	goto 100 >*/
    goto L100;
/*< 65	call string(1,'light-red^E') >*/
L65:
    string_(&c__1, "light-red^E", (ftnlen)11);
/*< 	istarc = iclpur >*/
    istarc = col_1.iclpur;
/*< 	goto 100 >*/
    goto L100;
/*< 66	call string(1,'deep-red^E') >*/
L66:
    string_(&c__1, "deep-red^E", (ftnlen)10);
/*< 	istarc = iclred >*/
    istarc = col_1.iclred;
/*< 	goto 100 >*/
    goto L100;
/* 	CALL STRING(3, COLOR(CLASS/10+1,1), 5, 5 ) */
/* 	CALL STRING(3, COLOR(CLASS/10+1,2), 5, 5 ) */
/*< 100	call string(1,'^M^JPolar spin: ^E') >*/
L100:
    string_(&c__1, "^M^JPolar spin: ^E", (ftnlen)18);
/*< 	call number(1, iqran(loc,4975)+10 ) >*/
    i__1 = iqran_(&loc, &c__4975) + 10;
    number_(&c__1, &i__1);
/*< 	call string(1,' days/rot.^M^JDegrees off ecliptic: ^E') >*/
    string_(&c__1, " days/rot.^M^JDegrees off ecliptic: ^E", (ftnlen)38);
/*< 	call number(1, iqran(loc,91)-1 ) >*/
    i__1 = iqran_(&loc, &c__91) - 1;
    number_(&c__1, &i__1);
/*< 	call string(1,'^M^JSolar activity: ^E') >*/
    string_(&c__1, "^M^JSolar activity: ^E", (ftnlen)22);
/*< 	call number(1, iqran(loc,101)-1 ) >*/
    i__1 = iqran_(&loc, &c__101) - 1;
    number_(&c__1, &i__1);
/*< 	call chrout(37) >*/
    chrout_(&c__37);
/*< 	goto 1000 >*/
    goto L1000;
/*< 200	call number(4, (planum*1000 + moonum*10 + itype)/10.0, 0, 10, 3 ) >*/
L200:
    r__1 = (planum * 1000 + moonum * 10 + itype) / (float)10.;
    number_(&c__4, &r__1, &c__0, &c__10, &c__3);
/*< 	ival = iqran(loc,2724) >*/
    ival = iqran_(&loc, &c__2724);
/*< 	zrad = ival + 4969 >*/
    zrad = (real) (ival + 4969);
/*< 	if( moonum .ne. 0 ) zrad = zrad / 6 >*/
    if (moonum != 0) {
	zrad /= 6;
    }
/*< 	if( itype .eq. 3 ) zrad = zrad * iqran(loc,50) >*/
    if (itype == 3) {
	zrad *= iqran_(&loc, &c__50);
    }
/*< 	call string(1,'^M^JMass: ^E') >*/
    string_(&c__1, "^M^JMass: ^E", (ftnlen)12);
/*< 	zmass = 1.4045*10.0**22 + ival*4.2783*10.0**18 >*/
    r__1 = ival * (float)4.2783;
    zmass = r__1 * (float)1e18 + (float)1.4045000000000001e22;
/*< 	if( moonum .ne. 0 ) zmass = zmass / 123 >*/
    if (moonum != 0) {
	zmass /= 123;
    }
/*< 	powert = alog10( zmass ) >*/
    powert = r_lg10(&zmass);
/*< 	call number(4, zmass/(10.0**powert), 0, 10, 3 ) >*/
    r__1 = zmass / pow_ri(&c_b1290, &powert);
    number_(&c__4, &r__1, &c__0, &c__10, &c__3);
/*< 	call chrout( 69 ) >*/
    chrout_(&c__69);
/*< 	call number(1, powert ) >*/
    number_(&c__1, &powert);
/*< 	call string(1,' MT.^M^JRadius: ^E') >*/
    string_(&c__1, " MT.^M^JRadius: ^E", (ftnlen)18);
/*< 	call number(4, zrad, 0, 10, 3 ) >*/
    number_(&c__4, &zrad, &c__0, &c__10, &c__3);
/*< 	call string(1,' km.^M^JDistance from primary: ^E') >*/
    string_(&c__1, " km.^M^JDistance from primary: ^E", (ftnlen)33);
/*< 	if( moonum .ne. 0 ) goto 210 >*/
    if (moonum != 0) {
	goto L210;
    }
/*< 	zrad = 5.79*10.0**7 + iqran(loc,1234567) >*/
    zrad = iqran_(&loc, &c_b1381) + (float)5.79e7;
/*< 	if( planum .gt. 1 ) zrad = zrad + 4.46*10.0**7*(2.0**planum) >*/
    if (planum > 1) {
	zrad += pow_ri(&c_b1382, &planum) * (float)4.46e7;
    }
/*< 	goto 220 >*/
    goto L220;
/*< 210	zrad = iqran(loc,9862)*100.0 >*/
L210:
    zrad = iqran_(&loc, &c__9862) * (float)100.;
/*< 220	powert = alog10( zrad ) >*/
L220:
    powert = r_lg10(&zrad);
/*< 	call number(4, zrad/(10.0**powert), 0, 10, 3 ) >*/
    r__1 = zrad / pow_ri(&c_b1290, &powert);
    number_(&c__4, &r__1, &c__0, &c__10, &c__3);
/*< 	call chrout(69) >*/
    chrout_(&c__69);
/*< 	call number(1, powert ) >*/
    number_(&c__1, &powert);
/*< 	call string(1,' km.^M^JDays/orbit: ^E') >*/
    string_(&c__1, " km.^M^JDays/orbit: ^E", (ftnlen)22);
/*< 	if(mo >*/
    if (moonum == 0) {
/* Computing 2nd power */
	r__2 = zrad / (float)1.495e8 + (float)0.;
	r__1 = r__2 * r__2 * (float)365.;
	number_(&c__4, &r__1, &c__0, &c__10, &c__3);
    }
/*< 	if(mo >*/
    if (moonum != 0) {
/* Computing 2nd power */
	r__2 = zrad / (float)384400. + (float)0.;
	r__1 = r__2 * r__2 * (float)28.;
	number_(&c__4, &r__1, &c__0, &c__10, &c__3);
    }
/*< 	call string(1,'^M^JPolar spin: ^E') >*/
    string_(&c__1, "^M^JPolar spin: ^E", (ftnlen)18);
/*< 	call number(4, iqran(loc,2561)/100.0, 0, 10, 2 ) >*/
    r__1 = iqran_(&loc, &c__2561) / (float)100.;
    number_(&c__4, &r__1, &c__0, &c__10, &c__2);
/*< 	call string(1,' days/rot.^M^JDegrees spin off ecliptic: ^E') >*/
    string_(&c__1, " days/rot.^M^JDegrees spin off ecliptic: ^E", (ftnlen)43);
/*< 	call number(1, iqran(loc+1,91)-1 ) >*/
    i__2 = loc + 1;
    i__1 = iqran_(&i__2, &c__91) - 1;
    number_(&c__1, &i__1);
/*< 	call string(1,'^M^JDegrees off ecliptic: ^E') >*/
    string_(&c__1, "^M^JDegrees off ecliptic: ^E", (ftnlen)28);
/*< 	call number(1, iqran(loc+2,91)-1 ) >*/
    i__2 = loc + 2;
    i__1 = iqran_(&i__2, &c__91) - 1;
    number_(&c__1, &i__1);
/*< 	call string(1,'^M^JAtm: ^E') >*/
    string_(&c__1, "^M^JAtm: ^E", (ftnlen)11);
/*< 	goto( 222, 223, 224 ) itype >*/
    switch ((int)itype) {
	case 1:  goto L222;
	case 2:  goto L223;
	case 3:  goto L224;
    }
/*< 222	i1 = iqran( loc, 10 ) + 15 >*/
L222:
    i1 = iqran_(&loc, &c__10) + 15;
/*< 	call number(1, i1 ) >*/
    number_(&c__1, &i1);
/*< 	call string(1,'%O2, ^E') >*/
    string_(&c__1, "%O2, ^E", (ftnlen)7);
/*< 	i2 = iqran( loc+1, 25 ) + 49 >*/
    i__1 = loc + 1;
    i2 = iqran_(&i__1, &c__25) + 49;
/*< 	call number(1, i2 ) >*/
    number_(&c__1, &i2);
/*< 	call string(1,'%N2, ^E') >*/
    string_(&c__1, "%N2, ^E", (ftnlen)7);
/*< 	i3 = iqran( loc+2, 100-i1-i2 ) >*/
    i__1 = loc + 2;
    i__2 = 100 - i1 - i2;
    i3 = iqran_(&i__1, &i__2);
/*< 	call number(1, i3 ) >*/
    number_(&c__1, &i3);
/*< 	call string(1,'%CO2, ^E') >*/
    string_(&c__1, "%CO2, ^E", (ftnlen)8);
/*< 	call number(1, 100-i1-i2-i3 ) >*/
    i__1 = 100 - i1 - i2 - i3;
    number_(&c__1, &i__1);
/*< 	goto 225 >*/
    goto L225;
/*< 223	if( zmass .lt. 10.0**21 ) call string(1,'None^E') >*/
L223:
    if (zmass < (float)1e21) {
	string_(&c__1, "None^E", (ftnlen)6);
    }
/*< 	if( zmass .lt. 10.0**21 ) goto 226 >*/
    if (zmass < (float)1e21) {
	goto L226;
    }
/*< 224	i1 = iqran( loc, 90 ) >*/
L224:
    i1 = iqran_(&loc, &c__90);
/*< 	call number(1, i1 ) >*/
    number_(&c__1, &i1);
/*< 	call string(1,'%H2, ^E') >*/
    string_(&c__1, "%H2, ^E", (ftnlen)7);
/*< 	i2 = iqran( loc+1, 100-i1 ) >*/
    i__1 = loc + 1;
    i__2 = 100 - i1;
    i2 = iqran_(&i__1, &i__2);
/*< 	call number(1, i2 ) >*/
    number_(&c__1, &i2);
/*< 	call string(1,'%HE, ^E') >*/
    string_(&c__1, "%HE, ^E", (ftnlen)7);
/*< 	call number(1, 100-i1-i2 ) >*/
    i__1 = 100 - i1 - i2;
    number_(&c__1, &i__1);
/*< 225	call string(1,'%Trace^E') >*/
L225:
    string_(&c__1, "%Trace^E", (ftnlen)8);
/*< 226	ca >*/
L226:
    string_(&c__1, "^M^JPopulation:        mil.^M^JOre density:^M^JFood dens\
ity:^M^JHunger:^E", (ftnlen)73);
/*< 1000	if( planum .eq. 0 ) goto 1100 >*/
L1000:
    if (planum == 0) {
	goto L1100;
    }
/*< 	call getval(5, 0,1214,  pop, loc, ival ) >*/
    getval_(&c__5, &c__0, &c__1214, &arrcom_1.pop, &loc, &ival);
/*< 	if( ival .eq. oldpop .and. .not. new ) goto 1005 >*/
    if (ival == oldpop && ! (*new__)) {
	goto L1005;
    }
/*< 	call cursor( 13, 13 ) >*/
    cursor_(&c__13, &c__13);
/*< 	call number(2, ival, 6 ) >*/
    number_(&c__2, &ival, &c__6);
/*< 	oldpop = ival >*/
    oldpop = ival;
/*< 1005	call getval(6, 0,1219,  restrn, loc, 1, ival ) >*/
L1005:
    getval_(&c__6, &c__0, &c__1219, &arrcom_1.restrn, &loc, &c__1, &ival);
/*< 	if( ival .eq. oldore .and. .not. new ) goto 1010 >*/
    if (ival == oldore && ! (*new__)) {
	goto L1010;
    }
/*< 	call cursor( 14, 12 ) >*/
    cursor_(&c__14, &c__12);
/*< 	call number(2, ival, 2 ) >*/
    number_(&c__2, &ival, &c__2);
/*< 	oldore = ival >*/
    oldore = ival;
/*< 1010	call getval(6, 0,1224,  restrn, loc, 2, ival ) >*/
L1010:
    getval_(&c__6, &c__0, &c__1224, &arrcom_1.restrn, &loc, &c__2, &ival);
/*< 	if( ival .eq. oldfod .and. .not. new ) goto 1020 >*/
    if (ival == oldfod && ! (*new__)) {
	goto L1020;
    }
/*< 	call cursor( 15, 11 ) >*/
    cursor_(&c__15, &c__11);
/*< 	call number(2, ival, 2 ) >*/
    number_(&c__2, &ival, &c__2);
/*< 	oldfod = ival >*/
    oldfod = ival;
/*< 1020	call getval(5, 0,1229,  hunger, loc, ival ) >*/
L1020:
    getval_(&c__5, &c__0, &c__1229, &arrcom_1.hunger, &loc, &ival);
/*< 	if( ival .eq. oldhun .and. .not. new ) goto 1030 >*/
    if (ival == oldhun && ! (*new__)) {
	goto L1030;
    }
/*< 	call cursor( 9, 10 ) >*/
    cursor_(&c__9, &c__10);
/*< 	call number(2, ival, 8 ) >*/
    number_(&c__2, &ival, &c__8);
/*< 	oldhun = ival >*/
    oldhun = ival;
/*< 1030	do 1070 j = 1, 3 >*/
L1030:
    for (j = 1; j <= 3; ++j) {
/*< 	    if( orb .lt. j ) goto 1070 >*/
	if (orb < j) {
	    goto L1070;
	}
/*< 	    do 1040 i = orb+j*2-2, 16-orb-j*2 >*/
	i__1 = 16 - orb - (j << 1);
	for (i__ = orb + (j << 1) - 2; i__ <= i__1; ++i__) {
/*< 		newara(i,j) = thrshr >*/
	    newara[i__ + j * 13 - 14] = thrshr;
/*< 1040	    continue >*/
/* L1040: */
	}
/*< 1070	continue >*/
L1070:
	;
    }
/*< 	if( moonum .eq. 0 ) goto 1201 >*/
    if (moonum == 0) {
	goto L1201;
    }
/*< 	newara( 12, 13 ) = threat >*/
    newara[167] = threat;
/*< 	newara( 13, 13 ) = threat >*/
    newara[168] = threat;
/*< 	newara( 12, 12 ) = threat >*/
    newara[154] = threat;
/*< 	newara( 13, 12 ) = threat >*/
    newara[155] = threat;
/*< 	newara( 12, 11 ) = twoat >*/
    newara[141] = twoat;
/*< 	newara( 13, 11 ) = threat >*/
    newara[142] = threat;
/*< 	newara( 13, 10 ) = twoat >*/
    newara[129] = twoat;
/*< 	goto 1201 >*/
    goto L1201;
/*< 1100	if( orb .eq. 3 ) newara( 7, 7 ) = onestr >*/
L1100:
    if (orb == 3) {
	newara[84] = onestr;
    }
/*< 	if( orb .eq. 3 ) goto 1201 >*/
    if (orb == 3) {
	goto L1201;
    }
/*< 	do 1200 i = 1, 13 >*/
    for (i__ = 1; i__ <= 13; ++i__) {
/*< 	    do 1200 j = 1, 13 >*/
	for (j = 1; j <= 13; ++j) {
/*< 		newara(i,j) = thrstr >*/
	    newara[i__ + j * 13 - 14] = thrstr;
/*< 1200	continue >*/
/* L1200: */
	}
    }
/*< 1201	continue >*/
L1201:
/*< 	if( loc .le. numstr ) goto 1246 >*/
    if (loc <= usrcom_1.numstr) {
	goto L1246;
    }
/*< 	do 1245 i = 1, lunit >*/
    i__1 = usrcom_1.lunit;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    j = i >*/
	j = i__;
/*< 	    call getval(5, 0,1262,  org, j, ival ) >*/
	getval_(&c__5, &c__0, &c__1262, &arrcom_1.org, &j, &ival);
/*< 	    if( ival .eq. 0 ) goto 1245 >*/
	if (ival == 0) {
	    goto L1245;
	}
/*< 	    call getval(5, 0,1264,  shiptr, j, ival ) >*/
	getval_(&c__5, &c__0, &c__1264, &arrcom_1.shiptr, &j, &ival);
/*< 	    if( ival .ne. loc .or. j .eq. ship ) goto 1245 >*/
	if (ival != loc || j == *ship) {
	    goto L1245;
	}
/*< 	    call getval(5, 0,1266,  hmflag, j, ival ) >*/
	getval_(&c__5, &c__0, &c__1266, &arrcom_1.hmflag, &j, &ival);
/*< 	    if( ival .ne. 0 ) goto 1245 >*/
	if (ival != 0) {
	    goto L1245;
	}
/*< 	    call getval(5, 0,1268,  orbit, j, sorb ) >*/
	getval_(&c__5, &c__0, &c__1268, &arrcom_1.orbit, &j, &sorb);
/*< 	    i3 = 0 >*/
	i3 = 0;
/*< 	    if( sorb .ne. 1 ) goto 1230 >*/
	if (sorb != 1) {
	    goto L1230;
	}
/*< 1220	    i3 = i3 + 1 >*/
L1220:
	++i3;
/*< 	    i2 = 0 >*/
	i2 = 0;
/*< 	    i1 = iqran( loc+j+i3, 13 ) >*/
	i__2 = loc + j + i3;
	i1 = iqran_(&i__2, &c__13);
/*< 1225	    i2 = i2 + 1 >*/
L1225:
	++i2;
/*< 	    if( newara(i1,i2) .eq. thrshr ) goto 1225 >*/
	if (newara[i1 + i2 * 13 - 14] == thrshr) {
	    goto L1225;
	}
/*< 	    if( iqran( loc+j-i3, 25 ) .lt. 4 ) goto 1245 >*/
	i__2 = loc + j - i3;
	if (iqran_(&i__2, &c__25) < 4) {
	    goto L1245;
	}
/*< 	    if( newara(i1,i2) .ne. 0 ) goto 1220 >*/
	if (newara[i1 + i2 * 13 - 14] != 0) {
	    goto L1220;
	}
/*< 	    goto 1240 >*/
	goto L1240;
/*< 1230	    i3 = i3 + 1 >*/
L1230:
	++i3;
/*< 	    i1 = iqran( loc+j+i3, 13 ) >*/
	i__2 = loc + j + i3;
	i1 = iqran_(&i__2, &c__13);
/*< 	    i2 = iqran( loc-j+i3, 4 ) + sorb**2 >*/
	i__2 = loc - j + i3;
/* Computing 2nd power */
	i__3 = sorb;
	i2 = iqran_(&i__2, &c__4) + i__3 * i__3;
/*< 	    if( iqran( loc+j-i3, 25 ) .lt. 2 ) goto 1245 >*/
	i__2 = loc + j - i3;
	if (iqran_(&i__2, &c__25) < 2) {
	    goto L1245;
	}
/*< 	    if( newara(i1,i2) .ne. 0 ) goto 1230 >*/
	if (newara[i1 + i2 * 13 - 14] != 0) {
	    goto L1230;
	}
/*< 1240	    call getval(5, 0,1286,  type, j, stype ) >*/
L1240:
	getval_(&c__5, &c__0, &c__1286, &arrcom_1.type__, &j, &stype);
/*< 	    call getval(5, 0,1287,  org, j, sorg ) >*/
	getval_(&c__5, &c__0, &c__1287, &arrcom_1.org, &j, &sorg);
/*< 	    newara(i1,i2) = -(stype * 10000 + sorg) >*/
	newara[i1 + i2 * 13 - 14] = -(stype * 10000 + sorg);
/*< 1245	continue >*/
L1245:
	;
    }
/*< 1246	continue >*/
L1246:
/*< 	do 1247 ival = 1, 12 >*/
    for (ival = 1; ival <= 12; ++ival) {
/*< 	    i = iqran(loc+ival*orb,13) >*/
	i__1 = loc + ival * orb;
	i__ = iqran_(&i__1, &c__13);
/*< 	    j = iqran(loc-ival*orb,13) >*/
	i__1 = loc - ival * orb;
	j = iqran_(&i__1, &c__13);
/*< 	    if( newara(i,j) .eq. 0 ) newara(i,j) = onedot >*/
	if (newara[i__ + j * 13 - 14] == 0) {
	    newara[i__ + j * 13 - 14] = onedot;
	}
/*< 1247	continue >*/
/* L1247: */
    }
/*< 	if( .not. new ) goto 1249 >*/
    if (! (*new__)) {
	goto L1249;
    }
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call cursor( 39, 22 ) >*/
    cursor_(&c__39, &c__22);
/*< 	call chrout(47) >*/
    chrout_(&c__47);
/*< 	call irepeat(45,39) >*/
    irepeat_(&c__45, &c__39);
/*< 	call chrout(92) >*/
    chrout_(&c__92);
/*< 	call cursor( 39, 8 ) >*/
    cursor_(&c__39, &c__8);
/*< 	call chrout(92) >*/
    chrout_(&c__92);
/*< 	call irepeat(45,39) >*/
    irepeat_(&c__45, &c__39);
/*< 	call chrout(47) >*/
    chrout_(&c__47);
/*< 	do 1248 i = 1, 13 >*/
    for (i__ = 1; i__ <= 13; ++i__) {
/*< 	    call cursor( 39, i+8 ) >*/
	i__1 = i__ + 8;
	cursor_(&c__39, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 	    call cursor( 79, i+8 ) >*/
	i__1 = i__ + 8;
	cursor_(&c__79, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 1248	continue >*/
/* L1248: */
    }
/*< 	call pback(iclbla) >*/
    pback_(&col_1.iclbla);
/*< 1249	do 1300 j = 1, 13 >*/
L1249:
    for (j = 1; j <= 13; ++j) {
/*< 	    line = .false. >*/
	line = FALSE_;
/*< 	    do 1300 i = 1, 13 >*/
	for (i__ = 1; i__ <= 13; ++i__) {
/*< 		if( new ) oldara(i,j) = -1 >*/
	    if (*new__) {
		oldara[i__ + j * 13 - 14] = -1;
	    }
/*< 		iv = newara(i,j) >*/
	    iv = newara[i__ + j * 13 - 14];
/*< 		if(  >*/
	    if (iv == oldara[i__ + j * 13 - 14] && iatmos == natmos && *ship 
		    == oship) {
		goto L1269;
	    }
/*< 		if( .not. line )call cursor( 37+3*i, j+8 ) >*/
	    if (! line) {
		i__1 = i__ * 3 + 37;
		i__2 = j + 8;
		cursor_(&i__1, &i__2);
	    }
/*< 		if( iv .ne. 0 ) goto 1250 >*/
	    if (iv != 0) {
		goto L1250;
	    }
/*< 		call pback( iatmos ) >*/
	    pback_(&iatmos);
/*< 		call string(1,'   ^E') >*/
	    string_(&c__1, "   ^E", (ftnlen)5);
/*< 		goto 1258 >*/
	    goto L1258;
/*< 1250		if( iv .ne. threat ) goto 1251 >*/
L1250:
	    if (iv != threat) {
		goto L1251;
	    }
/*< 		call pcolor( iclyel ) >*/
	    pcolor_(&col_1.iclyel);
/*< 		call pback( iclyel ) >*/
	    pback_(&col_1.iclyel);
/*< 		call string(1,'@@@^E') >*/
	    string_(&c__1, "@@@^E", (ftnlen)5);
/*< 		goto 1258 >*/
	    goto L1258;
/*< 1251		if( iv .ne. twoats ) goto 1252 >*/
L1251:
	    if (iv != twoats) {
		goto L1252;
	    }
/*< 		call pcolor( iclyel ) >*/
	    pcolor_(&col_1.iclyel);
/*< 		call pback( iatmos ) >*/
	    pback_(&iatmos);
/*< 		call chrout(32) >*/
	    chrout_(&c__32);
/*< 		call pback( iclyel ) >*/
	    pback_(&col_1.iclyel);
/*< 		call string(1,'@@^E') >*/
	    string_(&c__1, "@@^E", (ftnlen)4);
/*< 		goto 1258 >*/
	    goto L1258;
/*< 1252		if( iv .ne. onestr ) goto 1253 >*/
L1252:
	    if (iv != onestr) {
		goto L1253;
	    }
/*< 		call pcolor( istarc ) >*/
	    pcolor_(&istarc);
/*< 		call pback( iatmos ) >*/
	    pback_(&iatmos);
/*< 		call string(1,' * ^E') >*/
	    string_(&c__1, " * ^E", (ftnlen)5);
/*< 		goto 1258 >*/
	    goto L1258;
/*< 1253		if( iv .ne. thrshr ) goto 1254 >*/
L1253:
	    if (iv != thrshr) {
		goto L1254;
	    }
/*< 		call pcolor( iclgre ) >*/
	    pcolor_(&col_1.iclgre);
/*< 		call pback( iclgre ) >*/
	    pback_(&col_1.iclgre);
/*< 		call string(1,'###^E') >*/
	    string_(&c__1, "###^E", (ftnlen)5);
/*< 		goto 1258 >*/
	    goto L1258;
/*< 1254		if( iv .ne. onedot ) goto 1255 >*/
L1254:
	    if (iv != onedot) {
		goto L1255;
	    }
/*< 		call pcolor( iclwhi ) >*/
	    pcolor_(&col_1.iclwhi);
/*< 		call pback( iatmos ) >*/
	    pback_(&iatmos);
/*< 		call string(1,' . ^E') >*/
	    string_(&c__1, " . ^E", (ftnlen)5);
/*< 		goto 1258 >*/
	    goto L1258;
/*< 1255		if( iv .ne. thrstr ) goto 1256 >*/
L1255:
	    if (iv != thrstr) {
		goto L1256;
	    }
/*< 		call pcolor( istarc ) >*/
	    pcolor_(&istarc);
/*< 		call pback( iclwhi ) >*/
	    pback_(&col_1.iclwhi);
/*< 		call string(1,'###^E') >*/
	    string_(&c__1, "###^E", (ftnlen)5);
/*< 		goto 1258 >*/
	    goto L1258;
/*< 1256		call pback( iatmos ) >*/
L1256:
	    pback_(&iatmos);
/*< 		splayr = mod( -iv, 10000 ) >*/
	    splayr = -iv % 10000;
/*< 		if(  >*/
	    if (splayr == usrcom_1.player && iatmos != col_1.iclbla) {
		pcolor_(&col_1.iclbla);
	    }
/*< 		if(  >*/
	    if (splayr == usrcom_1.player && iatmos == col_1.iclbla) {
		pcolor_(&col_1.iclwhi);
	    }
/*< 		if( splayr .ne. player ) call pcolor( iclred ) >*/
	    if (splayr != usrcom_1.player) {
		pcolor_(&col_1.iclred);
	    }
/*< 		call chrout( tc( (-iv)/10000 ) ) >*/
	    chrout_(&tc[-iv / 10000 - 1]);
/*< 		call number(3, splayr, -2, 10 ) >*/
	    number_(&c__3, &splayr, &c_n2, &c__10);
/*< 1258		oldara(i,j) = newara(i,j) >*/
L1258:
	    oldara[i__ + j * 13 - 14] = newara[i__ + j * 13 - 14];
/*< 		line = .true. >*/
	    line = TRUE_;
/*< 		goto 1270 >*/
	    goto L1270;
/*< 1269		line = .false. >*/
L1269:
	    line = FALSE_;
/*< 1270		newara(i,j) = 0 >*/
L1270:
	    newara[i__ + j * 13 - 14] = 0;
/*< 1300	continue >*/
/* L1300: */
	}
    }
/*< 	natmos = iatmos >*/
    natmos = iatmos;
/*< 	oship = ship >*/
    oship = *ship;
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* disens_ */


/*< 	integer function iqran( seed, range ) >*/
integer iqran_(seed, range)
integer *seed, *range;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static integer i__;
    extern integer ishift_();

/* 	TWEAKED TO BE 32 BIT SAFE */
/*< 	integer seed, range, i >*/
/*< 	iqran = seed >*/
    ret_val = *seed;
/* 	DO 10 I = 1, 9 */
/*< 	do 10 i = 1, 8 >*/
    for (i__ = 1; i__ <= 8; ++i__) {
/*< 	    iqran = ishift( iqran, 4 ) >*/
	ret_val = ishift_(&ret_val, &c__4);
/*< 	    iqran = iqran + seed >*/
	ret_val += *seed;
/*< 10	continue >*/
/* L10: */
    }
/* 	IQRAN = IQRAN .XOR. "761345243571 */
/*< 	iqran = xor(iqran,626693556) >*/
    ret_val ^= 626693556;
/*< 	iqran = mod( iabs(iqran), range ) + 1 >*/
    ret_val = abs(ret_val) % *range + 1;
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* iqran_ */


/*< 	subroutine punit( shpnum ) >*/
/* Subroutine */ int punit_(shpnum)
integer *shpnum;
{
    static integer stype;
    extern /* Subroutine */ int number_(), chrout_(), getval_(), putype_();

/*< 	implicit integer ( a - z ) >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	call chrout(35) >*/
    chrout_(&c__35);
/*< 	call number(1, shpnum ) >*/
    number_(&c__1, shpnum);
/*< 	call getval(5, 0,1420,  type, shpnum, stype ) >*/
    getval_(&c__5, &c__0, &c__1420, &arrcom_1.type__, shpnum, &stype);
/*< 	call putype( stype ) >*/
    putype_(&stype);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* punit_ */


/*< 	subroutine putype( stype ) >*/
/* Subroutine */ int putype_(stype)
integer *stype;
{
    extern /* Subroutine */ int string_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer uname( 4, 7 ) >*/
/* 	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT */
/* 	DATA ((UNAME(J,I),J=1,4),I=1,7)/' SPACESHIP          ', */
/*     &' HYPERSHIP          ',' GROUND UNIT        ', */
/*     &' ORE PROCESSOR      ',' FOOD PROCESSOR     ', */
/*     &' LUXURY PROCESSOR   ',' PORT               '/ */
/* 	CALL STRING(3, UNAME(1,STYPE), 5, 17 ) */
/*< 	if( stype .eq. 1 ) call string(1,' Spaceship       ^E') >*/
    if (*stype == 1) {
	string_(&c__1, " Spaceship       ^E", (ftnlen)19);
    }
/*< 	if( stype .eq. 2 ) call string(1,' Hypership       ^E') >*/
    if (*stype == 2) {
	string_(&c__1, " Hypership       ^E", (ftnlen)19);
    }
/*< 	if( stype .eq. 3 ) call string(1,' Ground unit     ^E') >*/
    if (*stype == 3) {
	string_(&c__1, " Ground unit     ^E", (ftnlen)19);
    }
/*< 	if( stype .eq. 4 ) call string(1,' Ore Processor   ^E') >*/
    if (*stype == 4) {
	string_(&c__1, " Ore Processor   ^E", (ftnlen)19);
    }
/*< 	if( stype .eq. 5 ) call string(1,' Food Processor  ^E') >*/
    if (*stype == 5) {
	string_(&c__1, " Food Processor  ^E", (ftnlen)19);
    }
/*< 	if( stype .eq. 6 ) call string(1,' Luxury Processor^E') >*/
    if (*stype == 6) {
	string_(&c__1, " Luxury Processor^E", (ftnlen)19);
    }
/*< 	if( stype .eq. 7 ) call string(1,' Port            ^E') >*/
    if (*stype == 7) {
	string_(&c__1, " Port            ^E", (ftnlen)19);
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* putype_ */


/*< 	subroutine ploc( loc, orb ) >*/
/* Subroutine */ int ploc_(loc, orb)
integer *loc, *orb;
{
    static integer m, p, s, stname[2];
    extern /* Subroutine */ int getval_(), number_(), string_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer stname(2) >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	call getval(5, 0,1466,  wstar, loc, s ) >*/
    getval_(&c__5, &c__0, &c__1466, &arrcom_1.wstar, loc, &s);
/*< 	call getval(6, 0,1467,  name, s, 1, stname(1) ) >*/
    getval_(&c__6, &c__0, &c__1467, &arrcom_1.name__, &s, &c__1, stname);
/*< 	call getval(6, 0,1468,  name, s, 2, stname(2) ) >*/
    getval_(&c__6, &c__0, &c__1468, &arrcom_1.name__, &s, &c__2, &stname[1]);
/*< 	call string(3, stname, 6, 12 ) >*/
    string_(&c__3, stname, &c__6, &c__12);
/*< 	call getval(5, 0,1470,  wplan, loc, p ) >*/
    getval_(&c__5, &c__0, &c__1470, &arrcom_1.wplan, loc, &p);
/*< 	if( p .eq. 0 ) call string(1,'         ^E') >*/
    if (p == 0) {
	string_(&c__1, "         ^E", (ftnlen)11);
    }
/*< 	if( p .eq. 0 ) goto 100 >*/
    if (p == 0) {
	goto L100;
    }
/*< 	call string(1,'  P^E') >*/
    string_(&c__1, "  P^E", (ftnlen)5);
/*< 	call number(2, p, -2 ) >*/
    number_(&c__2, &p, &c_n2);
/*< 	call getval(5, 0,1475,  wmoon, loc, m ) >*/
    getval_(&c__5, &c__0, &c__1475, &arrcom_1.wmoon, loc, &m);
/*< 	if( m .eq. 0 ) call string(1,'    ^E') >*/
    if (m == 0) {
	string_(&c__1, "    ^E", (ftnlen)6);
    }
/*< 	if( m .eq. 0 ) goto 100 >*/
    if (m == 0) {
	goto L100;
    }
/*< 	call string(1,'  M^E') >*/
    string_(&c__1, "  M^E", (ftnlen)5);
/*< 	call number(1, m ) >*/
    number_(&c__1, &m);
/*< 100	if( orb .eq. 1 ) call string(1,' Ground^E') >*/
L100:
    if (*orb == 1) {
	string_(&c__1, " Ground^E", (ftnlen)9);
    }
/*< 	if( orb .eq. 2 ) call string(1,' Low   ^E') >*/
    if (*orb == 2) {
	string_(&c__1, " Low   ^E", (ftnlen)9);
    }
/*< 	if( orb .eq. 3 ) call string(1,' High  ^E') >*/
    if (*orb == 3) {
	string_(&c__1, " High  ^E", (ftnlen)9);
    }
/*< 	end >*/
} /* ploc_ */


/*< 	subroutine disys( new, ship, xtr ) >*/
/* Subroutine */ int disys_(new__, ship, xtr)
logical *new__;
integer *ship;
logical *xtr;
{
    /* Initialized data */

    static integer letter[6] = { 66,65,70,71,75,77 };

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, m, p, s, t, s1, loc, orb, ibod;
    extern /* Subroutine */ int crlf_();
    static integer borg, ival, oloc;
    extern /* Subroutine */ int ploc_();
    static integer oorb, tloc, bhorg, class__, blorg, bhnum;
    extern integer iqran_();
    static integer blnum;
    extern /* Subroutine */ int punit_();
    static integer oldaan[10], magicn, stname[2];
    extern /* Subroutine */ int getval_(), string_(), number_(), chrout_(), 
	    cursor_();
    static integer hypmov, osornm;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer oldaan(10), letter(6), stname(2) >*/
/*< 	logical new, xtr >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	data letter/66,65,70,71,75,77/ >*/
/*< 	call getval(5, 0,1507,  hmflag, ship, hypmov ) >*/
    getval_(&c__5, &c__0, &c__1507, &arrcom_1.hmflag, ship, &hypmov);
/*< 	if( .not. xtr ) goto 10 >*/
    if (! (*xtr)) {
	goto L10;
    }
/*< 	if( .not. new ) return >*/
    if (! (*new__)) {
	return 0;
    }
/*< 	call cursor( 20, 12 ) >*/
    cursor_(&c__20, &c__12);
/*< 	call string(1,'*** ^E') >*/
    string_(&c__1, "*** ^E", (ftnlen)6);
/*< 	call punit( ship ) >*/
    punit_(ship);
/*< 	if( hypmov .eq. 1 ) call string(1,'in hyperspace ***^E') >*/
    if (hypmov == 1) {
	string_(&c__1, "in hyperspace ***^E", (ftnlen)19);
    }
/*< 	if( hypmov .eq. 2 ) call string(1,'in transit ***^E') >*/
    if (hypmov == 2) {
	string_(&c__1, "in transit ***^E", (ftnlen)16);
    }
/*< 	return >*/
    return 0;
/*< 10	call getval(5, 0,1517,  shiptr, ship, loc ) >*/
L10:
    getval_(&c__5, &c__0, &c__1517, &arrcom_1.shiptr, ship, &loc);
/*< 	call getval(5, 0,1518,  orbit, ship, orb ) >*/
    getval_(&c__5, &c__0, &c__1518, &arrcom_1.orbit, ship, &orb);
/*< 	if( .not. new .and. loc .eq. oloc .and. orb .eq. oorb ) goto 50 >*/
    if (! (*new__) && loc == oloc && orb == oorb) {
	goto L50;
    }
/*< 	oloc = loc >*/
    oloc = loc;
/*< 	oorb = orb >*/
    oorb = orb;
/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	call string(1,'System report from ^E') >*/
    string_(&c__1, "System report from ^E", (ftnlen)21);
/*< 	call punit( ship ) >*/
    punit_(ship);
/*< 	call string(1,' at ^E') >*/
    string_(&c__1, " at ^E", (ftnlen)6);
/*< 	call ploc( loc, orb ) >*/
    ploc_(&loc, &orb);
/*< 50	if( .not. new ) goto 300 >*/
L50:
    if (! (*new__)) {
	goto L300;
    }
/*< 	call cursor( 1, 20 ) >*/
    cursor_(&c__1, &c__20);
/*< 	call string(1,'Hyper time/jump:^M^J^E') >*/
    string_(&c__1, "Hyper time/jump:^M^J^E", (ftnlen)22);
/*< 	call getval(5, 0,1530,  wstar, loc, s ) >*/
    getval_(&c__5, &c__0, &c__1530, &arrcom_1.wstar, &loc, &s);
/*< 	do 100 i = 1, 5 >*/
    for (i__ = 1; i__ <= 5; ++i__) {
/*< 	    call getval(6, 0,1532,  time, s, i+0, t ) >*/
	i__1 = i__;
	getval_(&c__6, &c__0, &c__1532, &arrcom_1.time, &s, &i__1, &t);
/*< 	    if( t .eq. 0 ) goto 110 >*/
	if (t == 0) {
	    goto L110;
	}
/*< 	    call number(2, t, 3 ) >*/
	number_(&c__2, &t, &c__3);
/*< 	    call chrout(47) >*/
	chrout_(&c__47);
/*< 	    call getval(6, 0,1536,  dest, s, i+0, s1 ) >*/
	i__1 = i__;
	getval_(&c__6, &c__0, &c__1536, &arrcom_1.dest, &s, &i__1, &s1);
/*< 	    call getval(6, 0,1537,  name, s1, 1, stname(1) ) >*/
	getval_(&c__6, &c__0, &c__1537, &arrcom_1.name__, &s1, &c__1, stname);
/*< 	    call getval(6, 0,1538,  name, s1, 2, stname(2) ) >*/
	getval_(&c__6, &c__0, &c__1538, &arrcom_1.name__, &s1, &c__2, &stname[
		1]);
/*< 	    call string(3, stname, 6, 12 ) >*/
	string_(&c__3, stname, &c__6, &c__12);
/*< 100	continue >*/
/* L100: */
    }
/*< 110	call cursor( 1, 16 ) >*/
L110:
    cursor_(&c__1, &c__16);
/*< 	call  >*/
    string_(&c__1, "Satellite:         Type     Allegiance   Low/Num   High/\
Num^M^J^E", (ftnlen)65);
/*< 	call getval(6, 0,1545,  name, s, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__1545, &arrcom_1.name__, &s, &c__1, &ival);
/*< 	call string(3, ival, 6, 6 ) >*/
    string_(&c__3, &ival, &c__6, &c__6);
/*< 	call getval(6, 0,1547,  name, s, 2, ival ) >*/
    getval_(&c__6, &c__0, &c__1547, &arrcom_1.name__, &s, &c__2, &ival);
/*< 	call string(3, ival, 6, 6 ) >*/
    string_(&c__3, &ival, &c__6, &c__6);
/*< 	call string(1,'     ^E') >*/
    string_(&c__1, "     ^E", (ftnlen)7);
/*< 	class = iqran( s, 60 ) - 1 >*/
    class__ = iqran_(&s, &c__60) - 1;
/*< 	call chrout( letter(class/10 + 1) ) >*/
    chrout_(&letter[class__ / 10]);
/*< 	call number(1, mod(class,10) ) >*/
    i__1 = class__ % 10;
    number_(&c__1, &i__1);
/*< 	call crlf >*/
    crlf_();
/*< 	call getval(5, 0,1554,  wplace, s, tloc ) >*/
    getval_(&c__5, &c__0, &c__1554, &arrcom_1.wplace, &s, &tloc);
/*< 	if( tloc .eq. 0 ) goto 300 >*/
    if (tloc == 0) {
	goto L300;
    }
/*< 200	call getval(5, 0,1556,  wstar, tloc, ival ) >*/
L200:
    getval_(&c__5, &c__0, &c__1556, &arrcom_1.wstar, &tloc, &ival);
/*< 	if( ival .ne. s ) goto 300 >*/
    if (ival != s) {
	goto L300;
    }
/*< 	call getval(5, 0,1558,  wplan, tloc, p ) >*/
    getval_(&c__5, &c__0, &c__1558, &arrcom_1.wplan, &tloc, &p);
/*< 	call getval(5, 0,1559,  wmoon, tloc, m ) >*/
    getval_(&c__5, &c__0, &c__1559, &arrcom_1.wmoon, &tloc, &m);
/*< 	if( m .eq. 0 ) call string(1,'  Planet #^E') >*/
    if (m == 0) {
	string_(&c__1, "  Planet #^E", (ftnlen)12);
    }
/*< 	if( m .ne. 0 ) call string(1,'    Moon #^E') >*/
    if (m != 0) {
	string_(&c__1, "    Moon #^E", (ftnlen)12);
    }
/*< 	if( m .eq. 0 ) call number(2, p, -2 ) >*/
    if (m == 0) {
	number_(&c__2, &p, &c_n2);
    }
/*< 	if( m .ne. 0 ) call number(2, m, -2 ) >*/
    if (m != 0) {
	number_(&c__2, &m, &c_n2);
    }
/*< 	call getval(5, 0,1564,  ptype, tloc, ival ) >*/
    getval_(&c__5, &c__0, &c__1564, &arrcom_1.ptype, &tloc, &ival);
/*< 	if( ival .eq. 1 ) call string(1,'     Habitable^M^J^E') >*/
    if (ival == 1) {
	string_(&c__1, "     Habitable^M^J^E", (ftnlen)20);
    }
/*< 	if( ival .eq. 2 ) call string(1,'     Ordinary^M^J^E') >*/
    if (ival == 2) {
	string_(&c__1, "     Ordinary^M^J^E", (ftnlen)19);
    }
/*< 	if( ival .eq. 3 ) call string(1,'     Gasseous^M^J^E') >*/
    if (ival == 3) {
	string_(&c__1, "     Gasseous^M^J^E", (ftnlen)19);
    }
/*< 	tloc = tloc + 1 >*/
    ++tloc;
/*< 	goto 200 >*/
    goto L200;
/*< 300	if( loc .eq. -1 ) return >*/
L300:
    if (loc == -1) {
	return 0;
    }
/*< 	call getval(5, 0,1572,  poporg, s, borg ) >*/
    getval_(&c__5, &c__0, &c__1572, &arrcom_1.poporg, &s, &borg);
/*< 	if( borg .eq. 0 ) borg = 100 >*/
    if (borg == 0) {
	borg = 100;
    }
/*< 	magicn = borg >*/
    magicn = borg;
/*< 	call getval(6, 0,1575,  plcorg, s, 1, blorg ) >*/
    getval_(&c__6, &c__0, &c__1575, &arrcom_1.plcorg, &s, &c__1, &blorg);
/*< 	if( blorg .eq. 0 ) blorg = 100 >*/
    if (blorg == 0) {
	blorg = 100;
    }
/*< 	magicn = blorg + magicn*101 >*/
    magicn = blorg + magicn * 101;
/*< 	call getval(6, 0,1578,  nuaplc, s, 1, blnum ) >*/
    getval_(&c__6, &c__0, &c__1578, &arrcom_1.nuaplc, &s, &c__1, &blnum);
/*< 	if( blnum .eq. 0 ) blnum = 1000 >*/
    if (blnum == 0) {
	blnum = 1000;
    }
/*< 	magicn = blnum + magicn*1001 >*/
    magicn = blnum + magicn * 1001;
/*< 	call getval(6, 0,1581,  plcorg, s, 2, bhorg ) >*/
    getval_(&c__6, &c__0, &c__1581, &arrcom_1.plcorg, &s, &c__2, &bhorg);
/*< 	if( bhorg .eq. 0 ) bhorg = 100 >*/
    if (bhorg == 0) {
	bhorg = 100;
    }
/*< 	magicn = bhorg + magicn*101 >*/
    magicn = bhorg + magicn * 101;
/*< 	call getval(6, 0,1584,  nuaplc, s, 2, bhnum ) >*/
    getval_(&c__6, &c__0, &c__1584, &arrcom_1.nuaplc, &s, &c__2, &bhnum);
/*< 	if( bhnum .eq. 0 ) bhnum = 1000 >*/
    if (bhnum == 0) {
	bhnum = 1000;
    }
/*< 	magicn = bhnum + magicn*1001 >*/
    magicn = bhnum + magicn * 1001;
/*< 	if( magicn .eq. osornm .and. .not. new ) goto 310 >*/
    if (magicn == osornm && ! (*new__)) {
	goto L310;
    }
/*< 	call cursor( 33, 15 ) >*/
    cursor_(&c__33, &c__15);
/*< 	call number(2, borg, -2 ) >*/
    number_(&c__2, &borg, &c_n2);
/*< 	call string(1,'        ^E') >*/
    string_(&c__1, "        ^E", (ftnlen)10);
/*< 	call number(2, blorg, -2 ) >*/
    number_(&c__2, &blorg, &c_n2);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call number(2, blnum, 3 ) >*/
    number_(&c__2, &blnum, &c__3);
/*< 	call string(1,'     ^E') >*/
    string_(&c__1, "     ^E", (ftnlen)7);
/*< 	call number(2, bhorg, -2 ) >*/
    number_(&c__2, &bhorg, &c_n2);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call number(2, bhnum, 3 ) >*/
    number_(&c__2, &bhnum, &c__3);
/*< 	osornm = magicn >*/
    osornm = magicn;
/*< 310	call getval(5, 0,1600,  wplace, s, tloc ) >*/
L310:
    getval_(&c__5, &c__0, &c__1600, &arrcom_1.wplace, &s, &tloc);
/*< 	if( tloc .eq. 0 ) return >*/
    if (tloc == 0) {
	return 0;
    }
/*< 	ibod = 0 >*/
    ibod = 0;
/*< 400	call getval(5, 0,1603,  wstar, tloc, ival ) >*/
L400:
    getval_(&c__5, &c__0, &c__1603, &arrcom_1.wstar, &tloc, &ival);
/*< 	if( ival .ne. s ) return >*/
    if (ival != s) {
	return 0;
    }
/*< 	ibod = ibod + 1 >*/
    ++ibod;
/*< 	if( new ) oldaan(ibod) = 0 >*/
    if (*new__) {
	oldaan[ibod - 1] = 0;
    }
/*< 	call getval(5, 0,1607,  poporg, tloc, borg ) >*/
    getval_(&c__5, &c__0, &c__1607, &arrcom_1.poporg, &tloc, &borg);
/*< 	if( borg .eq. 0 ) borg = 100 >*/
    if (borg == 0) {
	borg = 100;
    }
/*< 	magicn = borg >*/
    magicn = borg;
/*< 	call getval(6, 0,1610,  plcorg, tloc, 1, blorg ) >*/
    getval_(&c__6, &c__0, &c__1610, &arrcom_1.plcorg, &tloc, &c__1, &blorg);
/*< 	if( blorg .eq. 0 ) blorg = 100 >*/
    if (blorg == 0) {
	blorg = 100;
    }
/*< 	magicn = blorg + magicn*101 >*/
    magicn = blorg + magicn * 101;
/*< 	call getval(6, 0,1613,  nuaplc, tloc, 1, blnum ) >*/
    getval_(&c__6, &c__0, &c__1613, &arrcom_1.nuaplc, &tloc, &c__1, &blnum);
/*< 	if( blnum .eq. 0 ) blnum = 1000 >*/
    if (blnum == 0) {
	blnum = 1000;
    }
/*< 	magicn = blnum + magicn*1001 >*/
    magicn = blnum + magicn * 1001;
/*< 	call getval(6, 0,1616,  plcorg, tloc, 2, bhorg ) >*/
    getval_(&c__6, &c__0, &c__1616, &arrcom_1.plcorg, &tloc, &c__2, &bhorg);
/*< 	if( bhorg .eq. 0 ) bhorg = 100 >*/
    if (bhorg == 0) {
	bhorg = 100;
    }
/*< 	magicn = bhorg + magicn*101 >*/
    magicn = bhorg + magicn * 101;
/*< 	call getval(6, 0,1619,  nuaplc, tloc, 2, bhnum ) >*/
    getval_(&c__6, &c__0, &c__1619, &arrcom_1.nuaplc, &tloc, &c__2, &bhnum);
/*< 	if( bhnum .eq. 0 ) bhnum = 1000 >*/
    if (bhnum == 0) {
	bhnum = 1000;
    }
/*< 	magicn = bhnum + magicn*1001 >*/
    magicn = bhnum + magicn * 1001;
/*< 	if( magicn .eq. oldaan(ibod) .and. .not. new ) goto 500 >*/
    if (magicn == oldaan[ibod - 1] && ! (*new__)) {
	goto L500;
    }
/*< 	call cursor( 33, 15-ibod ) >*/
    i__1 = 15 - ibod;
    cursor_(&c__33, &i__1);
/*< 	call number(2, borg, -2 ) >*/
    number_(&c__2, &borg, &c_n2);
/*< 	call string(1,'        ^E') >*/
    string_(&c__1, "        ^E", (ftnlen)10);
/*< 	call number(2, blorg, -2 ) >*/
    number_(&c__2, &blorg, &c_n2);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call number(2, blnum, 3 ) >*/
    number_(&c__2, &blnum, &c__3);
/*< 	call string(1,'     ^E') >*/
    string_(&c__1, "     ^E", (ftnlen)7);
/*< 	call number(2, bhorg, -2 ) >*/
    number_(&c__2, &bhorg, &c_n2);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call number(2, bhnum, 3 ) >*/
    number_(&c__2, &bhnum, &c__3);
/*< 	oldaan(ibod) = magicn >*/
    oldaan[ibod - 1] = magicn;
/*< 500	tloc = tloc + 1 >*/
L500:
    ++tloc;
/*< 	goto 400 >*/
    goto L400;
/*< 	end >*/
} /* disys_ */


/*< 	subroutine distat( new, ship ) >*/
/* Subroutine */ int distat_(new__, ship)
logical *new__;
integer *ship;
{
    /* Initialized data */

    static integer maxres[28]	/* was [7][4] */ = { 15,32,0,63,0,63,63,10,21,
	    0,0,63,63,63,4,9,0,1,1,63,63,3,8,0,1,1,1,63 };

    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, j, loc, opc, orb, pos, pow, ival;
    extern /* Subroutine */ int ploc_();
    static integer reso[4], oship;
    extern /* Subroutine */ int punit_();
    static integer magicn, oldpds[6]	/* was [3][2] */;
    extern /* Subroutine */ int string_(), getval_(), number_(), cursor_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer reso(4), oldpds(3,2), maxres(7,4) >*/
/*< 	logical new >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	data  >*/
/*< 	if( .not. new ) goto 100 >*/
    if (! (*new__)) {
	goto L100;
    }
/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	call  >*/
    string_(&c__1, "Position:^M^JType:^M^JResources:^M^J   Ore:     (^E", (
	    ftnlen)51);
/*< 	call getval(5, 0,1665,  type, ship, ival ) >*/
    getval_(&c__5, &c__0, &c__1665, &arrcom_1.type__, ship, &ival);
/*< 	call number(2, maxres( ival, 1 ), 2 ) >*/
    number_(&c__2, &maxres[ival - 1], &c__2);
/*< 	call string(1,')^M^J   Food:    (^E') >*/
    string_(&c__1, ")^M^J   Food:    (^E", (ftnlen)20);
/*< 	call number(2, maxres( ival, 2 ), 2 ) >*/
    number_(&c__2, &maxres[ival + 6], &c__2);
/*< 	call string(1,')^M^J   Lux:     (^E') >*/
    string_(&c__1, ")^M^J   Lux:     (^E", (ftnlen)20);
/*< 	call number(2, maxres( ival, 3 ), 2 ) >*/
    number_(&c__2, &maxres[ival + 13], &c__2);
/*< 	call string(1,')^M^J   Men:     (^E') >*/
    string_(&c__1, ")^M^J   Men:     (^E", (ftnlen)20);
/*< 	call number(2, maxres( ival, 4 ), 2 ) >*/
    number_(&c__2, &maxres[ival + 20], &c__2);
/*< 	call  >*/
    string_(&c__1, ")^M^JTotal power:^M^JPower distribution^M^J   Engines:^M\
^J   Shields:^M^J   Beam:^M^JPC:^M^J^E", (ftnlen)94);
/*< 100	call getval(5, 0,1675,  shiptr, ship, loc ) >*/
L100:
    getval_(&c__5, &c__0, &c__1675, &arrcom_1.shiptr, ship, &loc);
/*< 	call getval(5, 0,1676,  orbit, ship, orb ) >*/
    getval_(&c__5, &c__0, &c__1676, &arrcom_1.orbit, ship, &orb);
/*< 	call getval(5, 0,1677,  hmflag, ship, ival ) >*/
    getval_(&c__5, &c__0, &c__1677, &arrcom_1.hmflag, ship, &ival);
/*< 	magicn = loc + orb*2**12 + ival*2**16 >*/
    magicn = loc + (orb << 12) + (ival << 16);
/*< 	if( magicn .eq. pos .and. .not. new ) goto 200 >*/
    if (magicn == pos && ! (*new__)) {
	goto L200;
    }
/*< 	call cursor( 11, 24 ) >*/
    cursor_(&c__11, &c__24);
/*< 	call ploc( loc, orb ) >*/
    ploc_(&loc, &orb);
/*< 	if( ival .eq. 0 ) call string(1,'           ^E') >*/
    if (ival == 0) {
	string_(&c__1, "           ^E", (ftnlen)13);
    }
/*< 	if( ival .eq. 1 ) call string(1,' Hyperspace^E') >*/
    if (ival == 1) {
	string_(&c__1, " Hyperspace^E", (ftnlen)13);
    }
/*< 	if( ival .eq. 2 ) call string(1,' Transit   ^E') >*/
    if (ival == 2) {
	string_(&c__1, " Transit   ^E", (ftnlen)13);
    }
/*< 	pos = magicn >*/
    pos = magicn;
/*< 200	if( ship .eq. oship .and. .not. new ) goto 300 >*/
L200:
    if (*ship == oship && ! (*new__)) {
	goto L300;
    }
/*< 	call cursor( 7, 23 ) >*/
    cursor_(&c__7, &c__23);
/*< 	call punit( ship ) >*/
    punit_(ship);
/*< 	oship = ship >*/
    oship = *ship;
/*< 300	do 400 i = 1, 4 >*/
L300:
    for (i__ = 1; i__ <= 4; ++i__) {
/*< 	    j = i >*/
	j = i__;
/*< 	    call getval(6, 0,1692,  res, ship, j, ival ) >*/
	getval_(&c__6, &c__0, &c__1692, &arrcom_1.res, ship, &j, &ival);
/*< 	    if( ival .eq. reso(i) .and. .not. new ) goto 400 >*/
	if (ival == reso[i__ - 1] && ! (*new__)) {
	    goto L400;
	}
/*< 	    call cursor( 10, 22-i ) >*/
	i__1 = 22 - i__;
	cursor_(&c__10, &i__1);
/*< 	    call number(2, ival, 2 ) >*/
	number_(&c__2, &ival, &c__2);
/*< 	    reso(i) = ival >*/
	reso[i__ - 1] = ival;
/*< 400	continue >*/
L400:
	;
    }
/*< 	call getval(5, 0,1698,  power, ship, ival ) >*/
    getval_(&c__5, &c__0, &c__1698, &arrcom_1.power, ship, &ival);
/*< 	if( ival .eq. pow .and. .not. new ) goto 500 >*/
    if (ival == pow && ! (*new__)) {
	goto L500;
    }
/*< 	call cursor( 14, 17 ) >*/
    cursor_(&c__14, &c__17);
/*< 	call number(2, ival, 2 ) >*/
    number_(&c__2, &ival, &c__2);
/*< 	pow = ival >*/
    pow = ival;
/*< 500	do 600 i = 1, 3 >*/
L500:
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    do 600 j = 1, 2 >*/
	for (j = 1; j <= 2; ++j) {
/*< 		call getval(7, 0,1705,  powdst, ship, i+0, j+0, ival ) >*/
	    i__1 = i__;
	    i__2 = j;
	    getval_(&c__7, &c__0, &c__1705, &arrcom_1.powdst, ship, &i__1, &
		    i__2, &ival);
/*< 		if( ival .eq. oldpds(i,j) .and. .not. new ) goto 600 >*/
	    if (ival == oldpds[i__ + j * 3 - 4] && ! (*new__)) {
		goto L600;
	    }
/*< 		call cursor( 11+4*j, 16-i ) >*/
	    i__1 = (j << 2) + 11;
	    i__2 = 16 - i__;
	    cursor_(&i__1, &i__2);
/*< 		call number(2, ival, 2 ) >*/
	    number_(&c__2, &ival, &c__2);
/*< 		oldpds(i,j) = ival >*/
	    oldpds[i__ + j * 3 - 4] = ival;
/*< 600	continue >*/
L600:
	    ;
	}
    }
/*< 700	call getval(5, 0,1712,  pc, ship, ival ) >*/
/* L700: */
    getval_(&c__5, &c__0, &c__1712, &arrcom_1.pc, ship, &ival);
/*< 	if( ival .eq. opc .and. .not. new ) goto 800 >*/
    if (ival == opc && ! (*new__)) {
	goto L800;
    }
/*< 	call cursor( 5, 12 ) >*/
    cursor_(&c__5, &c__12);
/*< 	call number(2, ival, -2 ) >*/
    number_(&c__2, &ival, &c_n2);
/*< 	opc = ival >*/
    opc = ival;
/*< 800	return >*/
L800:
    return 0;
/*< 	end >*/
} /* distat_ */


/*< 	subroutine disunt( new, untloc, untype ) >*/
/* Subroutine */ int disunt_(new__, untloc, untype)
logical *new__;
integer *untloc, *untype;
{
    /* Initialized data */

    static integer tc[7] = { 83,72,71,79,70,76,80 };
    static integer oc[3] = { 46,45,94 };
    static integer sflag[4] = { 32,42,64,35 };

    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer i__, ival;
    extern /* Subroutine */ int ploc_();
    static integer sloc, sorb, unit, scptr, stype, magicn;
    extern /* Subroutine */ int getval_();
    static integer oldstf[200];
    extern /* Subroutine */ int string_(), number_(), cursor_(), chrout_();
    static integer oscptr;
    extern /* Subroutine */ int putype_(), irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer oldstf(200), sflag(4) >*/
/*< 	integer tc(7), oc(3) >*/
/*< 	logical new >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	data tc/83,72,71,79,70,76,80/, oc/46,45,94/ >*/
/*< 	data sflag/32,42,64,35/ >*/
/*< 	if( .not. new ) goto 50 >*/
    if (! (*new__)) {
	goto L50;
    }
/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	if( untype .ne. 0 ) call putype( untype ) >*/
    if (*untype != 0) {
	putype_(untype);
    }
/*< 	if( untype .eq. 0 ) call string(1,'units^E') >*/
    if (*untype == 0) {
	string_(&c__1, "units^E", (ftnlen)7);
    }
/*< 	if( untloc .ne. 0 ) call string(1,' at ^E') >*/
    if (*untloc != 0) {
	string_(&c__1, " at ^E", (ftnlen)6);
    }
/*< 	if( untloc .ne. 0 ) call ploc( untloc, 0 ) >*/
    if (*untloc != 0) {
	ploc_(untloc, &c__0);
    }
/*< 	if( untloc .eq. 0 ) call string(1,' in the entire system^E') >*/
    if (*untloc == 0) {
	string_(&c__1, " in the entire system^E", (ftnlen)23);
    }
/*< 	call cursor( 60, 24 ) >*/
    cursor_(&c__60, &c__24);
/*< 	call string(1,'Total: ^E') >*/
    string_(&c__1, "Total: ^E", (ftnlen)9);
/*< 50	scptr = 0 >*/
L50:
    scptr = 0;
/*< 	do 100 i = 1, lunit >*/
    i__1 = usrcom_1.lunit;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    unit = i >*/
	unit = i__;
/*< 	    call getval(5, 0,1756,  org, unit, ival ) >*/
	getval_(&c__5, &c__0, &c__1756, &arrcom_1.org, &unit, &ival);
/*< 	    if( ival .ne. player ) goto 100 >*/
	if (ival != usrcom_1.player) {
	    goto L100;
	}
/*< 	    call getval(5, 0,1758,  shiptr, unit, sloc ) >*/
	getval_(&c__5, &c__0, &c__1758, &arrcom_1.shiptr, &unit, &sloc);
/*< 	    call getval(5, 0,1759,  type, unit, stype ) >*/
	getval_(&c__5, &c__0, &c__1759, &arrcom_1.type__, &unit, &stype);
/*< 	    i >*/
	if (*untloc != 0 && sloc != *untloc || *untype != 0 && stype != *
		untype) {
	    goto L100;
	}
/*< 	    scptr = scptr + 1 >*/
	++scptr;
/*< 	    if( scptr .gt. 200 ) goto 100 >*/
	if (scptr > 200) {
	    goto L100;
	}
/*< 	    if( new ) oldstf( scptr ) = 0 >*/
	if (*new__) {
	    oldstf[scptr - 1] = 0;
	}
/*< 	    magicn = unit >*/
	magicn = unit;
/*< 	    magicn = magicn*8 + stype >*/
	magicn = (magicn << 3) + stype;
/*< 	    call getval(5, 0,1767,  orbit, unit, sorb ) >*/
	getval_(&c__5, &c__0, &c__1767, &arrcom_1.orbit, &unit, &sorb);
/*< 	    magicn = magicn*4 + sorb >*/
	magicn = (magicn << 2) + sorb;
/*< 	    call getval(5, 0,1769,  tmtonx, unit, ival ) >*/
	getval_(&c__5, &c__0, &c__1769, &arrcom_1.tmtonx, &unit, &ival);
/*< 	    if( ival .eq. 0 ) goto 55 >*/
	if (ival == 0) {
	    goto L55;
	}
/*< 	    call getval(5, 0,1771,  hmflag, unit, ival ) >*/
	getval_(&c__5, &c__0, &c__1771, &arrcom_1.hmflag, &unit, &ival);
/*< 	    ival = ival + 1 >*/
	++ival;
/*< 55	    magicn = magicn*4 + ival >*/
L55:
	magicn = (magicn << 2) + ival;
/*< 	    if( magicn .eq. oldstf( scptr ) ) goto 100 >*/
	if (magicn == oldstf[scptr - 1]) {
	    goto L100;
	}
/*< 	    call cursor( mod(scptr-1,10)*8+1, 23-(scptr-1)/10 ) >*/
	i__2 = ((scptr - 1) % 10 << 3) + 1;
	i__3 = 23 - (scptr - 1) / 10;
	cursor_(&i__2, &i__3);
/*< 	    call number(2, unit, 4 ) >*/
	number_(&c__2, &unit, &c__4);
/*< 	    call chrout( tc(stype) ) >*/
	chrout_(&tc[stype - 1]);
/*< 	    call chrout( oc(sorb) ) >*/
	chrout_(&oc[sorb - 1]);
/*< 	    call chrout( sflag(ival+1) ) >*/
	chrout_(&sflag[ival]);
/*< 	    oldstf( scptr ) = magicn >*/
	oldstf[scptr - 1] = magicn;
/*< 100	continue >*/
L100:
	;
    }
/*< 	if( scptr .ge. oscptr .or. new ) goto 201 >*/
    if (scptr >= oscptr || *new__) {
	goto L201;
    }
/*< 	do 200 i = scptr, oscptr >*/
    i__1 = oscptr;
    for (i__ = scptr; i__ <= i__1; ++i__) {
/*< 	    if( i .lt. 1 .or. i .gt. 200 ) goto 200 >*/
	if (i__ < 1 || i__ > 200) {
	    goto L200;
	}
/*< 	    if( oldstf(i) .eq. 0 ) goto 200 >*/
	if (oldstf[i__ - 1] == 0) {
	    goto L200;
	}
/*< 	    call cursor( mod(i-1,10)*8+1, 23-(i-1)/10 ) >*/
	i__2 = ((i__ - 1) % 10 << 3) + 1;
	i__3 = 23 - (i__ - 1) / 10;
	cursor_(&i__2, &i__3);
/*< 	    call irepeat(32,7) >*/
	irepeat_(&c__32, &c__7);
/*< 	    oldstf( i ) = 0 >*/
	oldstf[i__ - 1] = 0;
/*< 200	continue >*/
L200:
	;
    }
/*< 201	continue >*/
L201:
/*< 	if( scptr .eq. oscptr .and. .not. new ) return >*/
    if (scptr == oscptr && ! (*new__)) {
	return 0;
    }
/*< 	call cursor( 67, 24 ) >*/
    cursor_(&c__67, &c__24);
/*< 	call number(2, scptr, 4 ) >*/
    number_(&c__2, &scptr, &c__4);
/*< 	oscptr = scptr >*/
    oscptr = scptr;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* disunt_ */


/*< 	subroutine disedt( new, cverb, ccode, cdest ) >*/
/* Subroutine */ int disedt_(new__, cverb, ccode, cdest)
logical *new__;
integer *cverb, *ccode, *cdest;
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, old[40], magicn;
    extern /* Subroutine */ int cursor_(), prinst_(), irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer cverb( 40 ), ccode( 40 ), cdest( 40 ) >*/
/*< 	integer old(40) >*/
/*< 	logical new >*/
/*< 	do 100 i = 1, 40 >*/
    /* Parameter adjustments */
    --cdest;
    --ccode;
    --cverb;

    /* Function Body */
    for (i__ = 1; i__ <= 40; ++i__) {
/*< 	    if( new ) old( i ) = 0 >*/
	if (*new__) {
	    old[i__ - 1] = 0;
	}
/*< 	    magicn = cverb(i) + ccode(i)*16 + cdest(i)*256 >*/
	magicn = cverb[i__] + (ccode[i__] << 4) + (cdest[i__] << 8);
/*< 	    if( magicn .eq. old(i) ) goto 100 >*/
	if (magicn == old[i__ - 1]) {
	    goto L100;
	}
/*< 	    old(i) = magicn >*/
	old[i__ - 1] = magicn;
/*< 	    call cursor( 40*((i-1)/20)+1, 24-mod(i-1,20) ) >*/
	i__1 = (i__ - 1) / 20 * 40 + 1;
	i__2 = 24 - (i__ - 1) % 20;
	cursor_(&i__1, &i__2);
/*< 	    if( cverb(i) .eq. 0 ) call irepeat( 32, 37 ) >*/
	if (cverb[i__] == 0) {
	    irepeat_(&c__32, &c__37);
	}
/*< 	    i >*/
	if (cverb[i__] != 0) {
	    i__1 = i__;
	    prinst_(&i__1, &cverb[i__], &ccode[i__], &cdest[i__]);
	}
/*< 100	continue >*/
L100:
	;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* disedt_ */


/*< 	subroutine prinst( ipc, iverb, icode, idest ) >*/
/* Subroutine */ int prinst_(ipc, iverb, icode, idest)
integer *ipc, *iverb, *icode, *idest;
{
    /* Initialized data */

    static struct {
	char e_1[24];
	integer e_2;
	} equiv_215 = { {'L', 'T', ' ', ' ', 'L', 'E', ' ', ' ', 'E', 'Q', 
		' ', ' ', 'N', 'E', ' ', ' ', 'G', 'T', ' ', ' ', 'G', 'E', 
		' ', ' '}, 0 };

#define skpcod ((integer *)&equiv_215)

    static struct {
	char e_1[16];
	integer e_2;
	} equiv_216 = { {'O', 'R', 'E', ' ', 'F', 'O', 'O', 'D', 'L', 'U', 
		'X', ' ', 'M', 'E', 'N', ' '}, 0 };

#define prcode ((integer *)&equiv_216)


    /* System generated locals */
    integer i__1;

    /* Builtin functions */
    integer pow_ii();

    /* Local variables */
    static integer i__, id, ival;
    extern /* Subroutine */ int ploc_();
    static integer util[4], itype;
    extern /* Subroutine */ int number_();
    extern integer isxbit_();
    extern /* Subroutine */ int chrout_(), string_(), putype_(), irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer skpcod(6), prcode(4), util(4) >*/
/* 	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT */
/* 	INTEGER COMCOD(4,4), */
/* 	DATA ((COMCOD(J,I),J=1,4),I=1,4)/ */
/*     &	'RANDOM JUMP         ','PRODUCE             ', */
/*     &	'CEASE PRODUCTION    ','SELF DESTRUCT       '/ */
/*< 	data skpcod/'LT','LE','EQ','NE','GT','GE'/ >*/
/*< 	data prcode/'ORE','FOOD','LUX','MEN'/ >*/
/*< 	if( util(1) .ne. 0 ) goto 2 >*/
    if (util[0] != 0) {
	goto L2;
    }
/*< 	util(1) = isxbit('Engine~')	! isxbit('ENGINE~') >*/
    util[0] = isxbit_("Engine~", (ftnlen)7);
/*< 	util(2) = isxbit('Shield~')	! isxbit('SHIELD~') >*/
    util[1] = isxbit_("Shield~", (ftnlen)7);
/*< 	util(3) = isxbit('Beam~')	! isxbit('BEAM  ~') >*/
    util[2] = isxbit_("Beam~", (ftnlen)5);
/*< 	util(4) = isxbit('Power~')	! isxbit('POWER ~') >*/
    util[3] = isxbit_("Power~", (ftnlen)6);
/*< 2	continue >*/
L2:
/*< 	call number(2, ipc, -2 ) >*/
    number_(&c__2, ipc, &c_n2);
/*< 	call string(1,': ^E') >*/
    string_(&c__1, ": ^E", (ftnlen)4);
/*< 	goto(5,7,20,25,50,55,80,85,90,100,3,3,3,3,110) iverb >*/
    switch ((int)*iverb) {
	case 1:  goto L5;
	case 2:  goto L7;
	case 3:  goto L20;
	case 4:  goto L25;
	case 5:  goto L50;
	case 6:  goto L55;
	case 7:  goto L80;
	case 8:  goto L85;
	case 9:  goto L90;
	case 10:  goto L100;
	case 11:  goto L3;
	case 12:  goto L3;
	case 13:  goto L3;
	case 14:  goto L3;
	case 15:  goto L110;
    }
/*< 3	return >*/
L3:
    return 0;
/*< 5	call string(1,'Move ^E') >*/
L5:
    string_(&c__1, "Move ^E", (ftnlen)7);
/*< 	goto 9 >*/
    goto L9;
/*< 7	call string(1,'Jump ^E') >*/
L7:
    string_(&c__1, "Jump ^E", (ftnlen)7);
/*< 9	call ploc( idest, icode ) >*/
L9:
    ploc_(idest, icode);
/*< 	return >*/
    return 0;
/*< 20	call string(1,'Create ^E') >*/
L20:
    string_(&c__1, "Create ^E", (ftnlen)9);
/*< 	call putype( icode ) >*/
    putype_(icode);
/*< 	if( idest .eq. 0 ) call string(1,'     ^E') >*/
    if (*idest == 0) {
	string_(&c__1, "     ^E", (ftnlen)7);
    }
/*< 	if( idest .gt. 0 ) call number(2, idest, 5 ) >*/
    if (*idest > 0) {
	number_(&c__2, idest, &c__5);
    }
/*< 	call string(1,'    ^E') >*/
    string_(&c__1, "    ^E", (ftnlen)6);
/*< 	return >*/
    return 0;
/*< 25	itype = idest/(2**15) >*/
L25:
    itype = *idest / 32768;
/*< 	id = mod( idest, 2**15 ) >*/
    id = *idest % 32768;
/*< 	call string(1,'Load^E') >*/
    string_(&c__1, "Load^E", (ftnlen)6);
/*< 	call number(2, icode, 5 ) >*/
    number_(&c__2, icode, &c__5);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call string(3, prcode( mod( itype, 4 )+1 ), 5, 4 ) >*/
    string_(&c__3, &prcode[itype % 4], &c__5, &c__4);
/*< 	if( itype .lt. 4 ) call string(1,' on   ^E') >*/
    if (itype < 4) {
	string_(&c__1, " on   ^E", (ftnlen)8);
    }
/*< 	if( itype .ge. 4 ) call string(1,' from ^E') >*/
    if (itype >= 4) {
	string_(&c__1, " from ^E", (ftnlen)8);
    }
/*< 	if( id .gt. 0 ) call number(2, id, 8 ) >*/
    if (id > 0) {
	number_(&c__2, &id, &c__8);
    }
/*< 	if( id .le. 0 ) call string(1,' surface^E') >*/
    if (id <= 0) {
	string_(&c__1, " surface^E", (ftnlen)10);
    }
/*< 	call string(1,'      ^E') >*/
    string_(&c__1, "      ^E", (ftnlen)8);
/*< 	return >*/
    return 0;
/*< 50	call string(1,'Tactics     ^E') >*/
L50:
    string_(&c__1, "Tactics     ^E", (ftnlen)14);
/*< 	ival = idest >*/
    ival = *idest;
/*< 	do 52 i = 2, 0, -1 >*/
    for (i__ = 2; i__ >= 0; --i__) {
/*< 	    call number(2, mod( ival/(32**i), 32 ), 7 ) >*/
	i__1 = ival / pow_ii(&c__32, &i__) % 32;
	number_(&c__2, &i__1, &c__7);
/*< 52	continue >*/
/* L52: */
    }
/*< 	return >*/
    return 0;
/*< 55	call string(1,'Inform^E') >*/
L55:
    string_(&c__1, "Inform^E", (ftnlen)8);
/*< 	call string(3, idest, 6, 6 ) >*/
    string_(&c__3, idest, &c__6, &c__6);
/*< 	if( icode .eq. 0 ) call string(1,'     ^E') >*/
    if (*icode == 0) {
	string_(&c__1, "     ^E", (ftnlen)7);
    }
/*< 	if( icode .ne. 0 ) call number(2, icode, 5 ) >*/
    if (*icode != 0) {
	number_(&c__2, icode, &c__5);
    }
/*< 	call irepeat( 32, 16 ) >*/
    irepeat_(&c__32, &c__16);
/*< 	return >*/
    return 0;
/*< 80	call string(1,'Skip ^E') >*/
L80:
    string_(&c__1, "Skip ^E", (ftnlen)7);
/*< 	itype = idest/(2**15) >*/
    itype = *idest / 32768;
/*< 	call string(3, skpcod(itype), 5, 2 ) >*/
    string_(&c__3, &skpcod[itype - 1], &c__5, &c__2);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call string(3, prcode(icode), 5, 4 ) >*/
    string_(&c__3, &prcode[*icode - 1], &c__5, &c__4);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call number(2, mod( idest, 2**15 ), 6 ) >*/
    i__1 = *idest % 32768;
    number_(&c__2, &i__1, &c__6);
/*< 	call irepeat( 32, 15 ) >*/
    irepeat_(&c__32, &c__15);
/*< 	return >*/
    return 0;
/*< 85	call string(1,'Error ^E') >*/
L85:
    string_(&c__1, "Error ^E", (ftnlen)8);
/*< 	if( idest .eq. 0 ) call string(1,'stop^E') >*/
    if (*idest == 0) {
	string_(&c__1, "stop^E", (ftnlen)6);
    }
/*< 	if( idest .eq. 63 ) call string(1,'next^E') >*/
    if (*idest == 63) {
	string_(&c__1, "next^E", (ftnlen)6);
    }
/*< 	if( idest .gt. 0 .and. idest .lt. 63 ) call number(2, idest, 4 ) >*/
    if (*idest > 0 && *idest < 63) {
	number_(&c__2, idest, &c__4);
    }
/*< 	call irepeat( 32, 23 ) >*/
    irepeat_(&c__32, &c__23);
/*< 	return >*/
    return 0;
/*< 90	if( idest .eq. 0 ) call string(1,'Stop    ^E') >*/
L90:
    if (*idest == 0) {
	string_(&c__1, "Stop    ^E", (ftnlen)10);
    }
/*< 	if( idest .ne. 0 ) call string(1,'Goto^E') >*/
    if (*idest != 0) {
	string_(&c__1, "Goto^E", (ftnlen)6);
    }
/*< 	if( idest .ne. 0 ) call number(2, idest, 4 ) >*/
    if (*idest != 0) {
	number_(&c__2, idest, &c__4);
    }
/*< 	call irepeat( 32, 25 ) >*/
    irepeat_(&c__32, &c__25);
/*< 	return >*/
    return 0;
/*< 100	call string(1,'Build ^E') >*/
L100:
    string_(&c__1, "Build ^E", (ftnlen)8);
/*< 	call string(3, util(icode), 6, 6 ) >*/
    string_(&c__3, &util[*icode - 1], &c__6, &c__6);
/*< 	call number(2, idest, 4 ) >*/
    number_(&c__2, idest, &c__4);
/*< 	call string(1,' units^E') >*/
    string_(&c__1, " units^E", (ftnlen)8);
/*< 	call irepeat( 32, 11 ) >*/
    irepeat_(&c__32, &c__11);
/*< 	return >*/
    return 0;
/*< 110	continue >*/
L110:
/* 	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT */
/* 	CALL STRING(3, COMCOD(1,ICODE), 5, 20 ) */
/*< 	if( icode .eq. 1 ) call string(1,'Random jump         ^E') >*/
    if (*icode == 1) {
	string_(&c__1, "Random jump         ^E", (ftnlen)22);
    }
/*< 	if( icode .eq. 2 ) call string(1,'Produce             ^E') >*/
    if (*icode == 2) {
	string_(&c__1, "Produce             ^E", (ftnlen)22);
    }
/*< 	if( icode .eq. 3 ) call string(1,'Cease production    ^E') >*/
    if (*icode == 3) {
	string_(&c__1, "Cease production    ^E", (ftnlen)22);
    }
/*< 	if( icode .eq. 4 ) call string(1,'Self destruct       ^E') >*/
    if (*icode == 4) {
	string_(&c__1, "Self destruct       ^E", (ftnlen)22);
    }
/*< 	call irepeat( 32, 13 ) >*/
    irepeat_(&c__32, &c__13);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* prinst_ */

#undef prcode
#undef skpcod



/*< 	subroutine dispos( new ) >*/
/* Subroutine */ int dispos_(new__)
logical *new__;
{
    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer i__, loc, ival;
    extern /* Subroutine */ int ploc_();
    static integer unum;
    extern /* Subroutine */ int getval_();
    static integer nminlo[500];
    extern /* Subroutine */ int number_(), string_();
    static integer curptr;
    extern /* Subroutine */ int cursor_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer nminlo( 500 )			! or lasplc >*/
/*< 	logical new >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	if( .not. new ) return >*/
    if (! (*new__)) {
	return 0;
    }
/*< 	do 100 i = 1, lunit >*/
    i__1 = usrcom_1.lunit;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    unum = i >*/
	unum = i__;
/*< 	    call getval(5, 0,1953,  org, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__1953, &arrcom_1.org, &unum, &ival);
/*< 	    if( ival .ne. player ) goto 100 >*/
	if (ival != usrcom_1.player) {
	    goto L100;
	}
/*< 	    call getval(5, 0,1955,  shiptr, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__1955, &arrcom_1.shiptr, &unum, &ival);
/*< 	    nminlo( ival ) = nminlo( ival ) + 1 >*/
	++nminlo[ival - 1];
/*< 100	continue >*/
L100:
	;
    }
/*< 	curptr = 0 >*/
    curptr = 0;
/*< 	do 200 loc = 1, lasplc >*/
    i__1 = usrcom_1.lasplc;
    for (loc = 1; loc <= i__1; ++loc) {
/*< 	    if( nminlo(loc) .eq. 0 ) goto 200 >*/
	if (nminlo[loc - 1] == 0) {
	    goto L200;
	}
/*< 	    curptr = curptr + 1 >*/
	++curptr;
/*< 	    call cursor( 40*((curptr-1)/20)+1, 24-mod(curptr-1,20) ) >*/
	i__2 = (curptr - 1) / 20 * 40 + 1;
	i__3 = 24 - (curptr - 1) % 20;
	cursor_(&i__2, &i__3);
/*< 	    call number(2, nminlo(loc), 4 ) >*/
	number_(&c__2, &nminlo[loc - 1], &c__4);
/*< 	    nminlo(loc) = 0 >*/
	nminlo[loc - 1] = 0;
/*< 	    call string(1,' at ^E') >*/
	string_(&c__1, " at ^E", (ftnlen)6);
/*< 	    call ploc( loc+0, 0 ) >*/
	i__2 = loc;
	ploc_(&i__2, &c__0);
/*< 200	continue >*/
L200:
	;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* dispos_ */


/*< 	subroutine displa( new ) >*/
/* Subroutine */ int displa_(new__)
logical *new__;
{
    /* Initialized data */

    static struct {
	char e_1[48];
	integer e_2;
	} equiv_232 = { {'J', 'A', 'N', ' ', 'F', 'E', 'B', ' ', 'M', 'A', 
		'R', ' ', 'A', 'P', 'R', ' ', 'M', 'A', 'Y', ' ', 'J', 'U', 
		'N', ' ', 'J', 'U', 'L', ' ', 'A', 'U', 'G', ' ', 'S', 'E', 
		'P', ' ', 'O', 'C', 'T', ' ', 'N', 'O', 'V', ' ', 'D', 'E', 
		'C', ' '}, 0 };

#define month ((integer *)&equiv_232)


    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, ival, ival1, ival2;
    extern integer ileft_();
    static integer oldinl, untime[20];
    extern /* Subroutine */ int getval_(), string_(), number_(), chrout_(), 
	    cursor_(), outspc_();
    extern integer iright_();
    static integer plynum, whoinl;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer untime( 20 ), month(12), filesp( 13 ) >*/
/*< 	logical new >*/
/*< 	common/filcom/filesp >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	data  >*/
/*< 	if( .not. new ) goto 100 >*/
    if (! (*new__)) {
	goto L100;
    }
/*< 	call cursor( 25, 2 ) >*/
    cursor_(&c__25, &c__2);
/*< 	filesp(5) = 0 >*/
    filcom_1.filesp[4] = 0;
/*< 	filesp(6) = 63 >*/
    filcom_1.filesp[5] = 63;
/*< 	call outspc( filesp ) >*/
    outspc_(filcom_1.filesp);
/*< 	call cursor( 2, 24 ) >*/
    cursor_(&c__2, &c__24);
/*< 	call string(1,'Pl   Prog Units   NCSTRU^E') >*/
    string_(&c__1, "Pl   Prog Units   NCSTRU^E", (ftnlen)26);
/*< 	call cursor( 35, 24 ) >*/
    cursor_(&c__35, &c__24);
/*< 	call string(1,'Elapsed:           Started: ^E') >*/
    string_(&c__1, "Elapsed:           Started: ^E", (ftnlen)30);
/*< 	call getval(5, 0,2004,  ptime, 1, ival ) >*/
    getval_(&c__5, &c__0, &c__2004, &arrcom_1.ptime, &c__1, &ival);
/*< 	call number(1, mod( ival, 31 ) + 1 ) >*/
    i__1 = ival % 31 + 1;
    number_(&c__1, &i__1);
/*< 	ival = ival/31 >*/
    ival /= 31;
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	call string(3, month( mod( ival, 12 ) + 1 ), 5, 3 ) >*/
    string_(&c__3, &month[ival % 12], &c__5, &c__3);
/*< 	call chrout(45) >*/
    chrout_(&c__45);
/*< 	ival = ival/12 >*/
    ival /= 12;
/*< 	call number(1, ival+64 ) >*/
    i__1 = ival + 64;
    number_(&c__1, &i__1);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call getval(5, 0,2013,  ptime, 2, ival ) >*/
    getval_(&c__5, &c__0, &c__2013, &arrcom_1.ptime, &c__2, &ival);
/*< 	call number(2, ival/3600000, -2 ) >*/
    i__1 = ival / 3600000;
    number_(&c__2, &i__1, &c_n2);
/*< 	call chrout(58) >*/
    chrout_(&c__58);
/*< 	call number(2, mod( ival/60000, 60 ), -2 ) >*/
    i__1 = ival / 60000 % 60;
    number_(&c__2, &i__1, &c_n2);
/*< 100	call getval(5, 0,2017,  ptime, 3, ival ) >*/
L100:
    getval_(&c__5, &c__0, &c__2017, &arrcom_1.ptime, &c__3, &ival);
/*< 	call cursor( 45, 24 ) >*/
    cursor_(&c__45, &c__24);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	do 400 i = 1, 20 >*/
    for (i__ = 1; i__ <= 20; ++i__) {
/*< 	    plynum = i >*/
	plynum = i__;
/*< 	    if( new ) untime(plynum) = 0 >*/
	if (*new__) {
	    untime[plynum - 1] = 0;
	}
/*< 	    call getval(5, 0,2023,  progs, plynum, ival ) >*/
	getval_(&c__5, &c__0, &c__2023, &arrcom_1.progs, &plynum, &ival);
/*< 	    if( ival .eq. 0 ) goto 410 >*/
	if (ival == 0) {
	    goto L410;
	}
/*< 	    call getval(5, 0,2025,  nofuni, plynum, ival1 ) >*/
	getval_(&c__5, &c__0, &c__2025, &arrcom_1.nofuni, &plynum, &ival1);
/*< 	    ival1 = ival1 + 1 >*/
	++ival1;
/*< 	    if( ival1 .eq. ileft( untime(plynum) ) ) goto 350 >*/
	if (ival1 == ileft_(&untime[plynum - 1])) {
	    goto L350;
	}
/*< 	    call cursor( 40*((i-1)/20)+2, 23-mod(i-1,20) ) >*/
	i__1 = (i__ - 1) / 20 * 40 + 2;
	i__2 = 23 - (i__ - 1) % 20;
	cursor_(&i__1, &i__2);
/*< 	    call number(2, plynum, -2 ) >*/
	number_(&c__2, &plynum, &c_n2);
/*< 	    if( ival .ne. 262143 ) call number(3, ival, 7, 8 ) >*/
	if (ival != 262143) {
	    number_(&c__3, &ival, &c__7, &c__8);
	}
/*< 	    if( ival .eq. 262143 ) call string(1,' empire^E') >*/
	if (ival == 262143) {
	    string_(&c__1, " empire^E", (ftnlen)9);
	}
/*< 	    call number(2, ival1-1, 6 ) >*/
	i__1 = ival1 - 1;
	number_(&c__2, &i__1, &c__6);
/*< 350	    call getval(5, 0,2033,  ncstru, plynum, ival2 ) >*/
L350:
	getval_(&c__5, &c__0, &c__2033, &arrcom_1.ncstru, &plynum, &ival2);
/*< 	    ival2 = ival2 + 1 >*/
	++ival2;
/*< 	    if( ival2 .eq. iright( untime(plynum) ) ) goto 370 >*/
	if (ival2 == iright_(&untime[plynum - 1])) {
	    goto L370;
	}
/*< 	    call cursor( 40*((i-1)/20)+22, 23-mod(i-1,20) ) >*/
	i__1 = (i__ - 1) / 20 * 40 + 22;
	i__2 = 23 - (i__ - 1) % 20;
	cursor_(&i__1, &i__2);
/*< 	    if( ival2 .eq. 64 ) call string(1,'Auto^E') >*/
	if (ival2 == 64) {
	    string_(&c__1, "Auto^E", (ftnlen)6);
	}
/*< 	    if( ival2 .ne. 64 ) call number(2, ival2, 4 ) >*/
	if (ival2 != 64) {
	    number_(&c__2, &ival2, &c__4);
	}
/*< 370	    untime(plynum) = 262144*ival1 + ival2 >*/
L370:
	untime[plynum - 1] = (ival1 << 18) + ival2;
/*< 400	continue >*/
/* L400: */
    }
/*< 410	call getval(5, 0,2042,  useful, 7, whoinl ) >*/
L410:
    getval_(&c__5, &c__0, &c__2042, &arrcom_1.useful, &c__7, &whoinl);
/*< 	if( .not. new .and. whoinl .eq. oldinl ) return >*/
    if (! (*new__) && whoinl == oldinl) {
	return 0;
    }
/*< 	if( whoinl .eq. 0 ) goto 500 >*/
    if (whoinl == 0) {
	goto L500;
    }
/*< 	call cursor( 40*((whoinl-1)/20)+1, 23-mod(whoinl-1,20) ) >*/
    i__1 = (whoinl - 1) / 20 * 40 + 1;
    i__2 = 23 - (whoinl - 1) % 20;
    cursor_(&i__1, &i__2);
/*< 	call chrout(42) >*/
    chrout_(&c__42);
/*< 500	if( oldinl .eq. 0 ) goto 600 >*/
L500:
    if (oldinl == 0) {
	goto L600;
    }
/*< 	call cursor( 40*((oldinl-1)/20)+1, 23-mod(oldinl-1,20) ) >*/
    i__1 = (oldinl - 1) / 20 * 40 + 1;
    i__2 = 23 - (oldinl - 1) % 20;
    cursor_(&i__1, &i__2);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 600	oldinl = whoinl >*/
L600:
    oldinl = whoinl;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* displa_ */

#undef month



/*< 	subroutine disdbg( new ) >*/
/* Subroutine */ int disdbg_(new__)
logical *new__;
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, ic, id, iv, len, num, addr__, lmem, olmem, magicn, 
	    oldmem[40], oldprg[20];
    extern /* Subroutine */ int number_(), getval_(), string_();
    static integer olunit, lprogr;
    extern /* Subroutine */ int cursor_();
    static integer olprgr, prgnum;
    extern /* Subroutine */ int chrout_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer oldprg( 20 ), oldmem( 40 ) >*/
/*< 	logical new >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	if( .not. new ) goto 100 >*/
    if (! (*new__)) {
	goto L100;
    }
/*< 	call cursor( 1, 4 ) >*/
    cursor_(&c__1, &c__4);
/*< 	call string(1,'LUnit:     /^E') >*/
    string_(&c__1, "LUnit:     /^E", (ftnlen)14);
/*< 	call number(2, maxuni, -4 ) >*/
    number_(&c__2, &usrcom_1.maxuni, &c_n4);
/*< 	call string(1,'    LProgr:     /^E') >*/
    string_(&c__1, "    LProgr:     /^E", (ftnlen)19);
/*< 	call number(2, maxprg, -4 ) >*/
    number_(&c__2, &usrcom_1.maxprg, &c_n4);
/*< 	call string(1,'    LMem:     /^E') >*/
    string_(&c__1, "    LMem:     /^E", (ftnlen)17);
/*< 	call number(2, maxmem, -4 ) >*/
    number_(&c__2, &usrcom_1.maxmem, &c_n4);
/*< 100	if( lunit .eq. olunit .and. .not. new ) goto 105 >*/
L100:
    if (usrcom_1.lunit == olunit && ! (*new__)) {
	goto L105;
    }
/*< 	call cursor( 8, 4 ) >*/
    cursor_(&c__8, &c__4);
/*< 	call number(2, lunit, -4 ) >*/
    number_(&c__2, &usrcom_1.lunit, &c_n4);
/*< 	olunit = lunit >*/
    olunit = usrcom_1.lunit;
/*< 105	call getval(5, 0,2085,  useful, 8, lprogr ) >*/
L105:
    getval_(&c__5, &c__0, &c__2085, &arrcom_1.useful, &c__8, &lprogr);
/*< 	if( lprogr .eq. olprgr .and. .not. new ) goto 110 >*/
    if (lprogr == olprgr && ! (*new__)) {
	goto L110;
    }
/*< 	call cursor( 29, 4 ) >*/
    cursor_(&c__29, &c__4);
/*< 	call number(2, lprogr, -4 ) >*/
    number_(&c__2, &lprogr, &c_n4);
/*< 	olprgr = lprogr >*/
    olprgr = lprogr;
/*< 110	call getval(5, 0,2090,  useful, 9, lmem ) >*/
L110:
    getval_(&c__5, &c__0, &c__2090, &arrcom_1.useful, &c__9, &lmem);
/*< 	if( lmem .eq. olmem .and. .not. new ) goto 120 >*/
    if (lmem == olmem && ! (*new__)) {
	goto L120;
    }
/*< 	call cursor( 48, 4 ) >*/
    cursor_(&c__48, &c__4);
/*< 	call number(2, lmem, -4 ) >*/
    number_(&c__2, &lmem, &c_n4);
/*< 	olmem = lmem >*/
    olmem = lmem;
/*< 120	do 200 i = 1, 20 >*/
L120:
    for (i__ = 1; i__ <= 20; ++i__) {
/*< 	    prgnum = i >*/
	prgnum = i__;
/*< 	    call getval(5, 0,2097,  stradr, prgnum, addr ) >*/
	getval_(&c__5, &c__0, &c__2097, &arrcom_1.stradr, &prgnum, &addr__);
/*< 	    call getval(5, 0,2098,  lenprg, prgnum, len ) >*/
	getval_(&c__5, &c__0, &c__2098, &arrcom_1.lenprg, &prgnum, &len);
/*< 	    call getval(5, 0,2099,  numusr, prgnum, num ) >*/
	getval_(&c__5, &c__0, &c__2099, &arrcom_1.numusr, &prgnum, &num);
/*< 	    magicn = addr + len*2**12 + num*2**18 >*/
	magicn = addr__ + (len << 12) + (num << 18);
/*< 	    if( new ) oldprg(i) = 0 >*/
	if (*new__) {
	    oldprg[i__ - 1] = 0;
	}
/*< 	    if( magicn .eq. oldprg(i) ) goto 200 >*/
	if (magicn == oldprg[i__ - 1]) {
	    goto L200;
	}
/*< 	    oldprg(i) = magicn >*/
	oldprg[i__ - 1] = magicn;
/*< 	    call cursor( 1, 25-i ) >*/
	i__1 = 25 - i__;
	cursor_(&c__1, &i__1);
/*< 	    if( magicn .eq. 0 ) call string(1,'                ^E') >*/
	if (magicn == 0) {
	    string_(&c__1, "                ^E", (ftnlen)18);
	}
/*< 	    if( magicn .eq. 0 ) goto 200 >*/
	if (magicn == 0) {
	    goto L200;
	}
/*< 	    call number(2, prgnum, -2 ) >*/
	number_(&c__2, &prgnum, &c_n2);
/*< 	    call chrout(58) >*/
	chrout_(&c__58);
/*< 	    call number(2, addr, -4 ) >*/
	number_(&c__2, &addr__, &c_n4);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call number(2, len, -2 ) >*/
	number_(&c__2, &len, &c_n2);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call number(2, num, -4 ) >*/
	number_(&c__2, &num, &c_n4);
/*< 200	continue >*/
L200:
	;
    }
/*< 	do 300 i = 1, 40 >*/
    for (i__ = 1; i__ <= 40; ++i__) {
/*< 	    addr = i >*/
	addr__ = i__;
/*< 	    call getval(5, 0,2117,  nverb, addr, iv ) >*/
	getval_(&c__5, &c__0, &c__2117, &arrcom_1.nverb, &addr__, &iv);
/*< 	    call getval(5, 0,2118,  ncode, addr, ic ) >*/
	getval_(&c__5, &c__0, &c__2118, &arrcom_1.ncode, &addr__, &ic);
/*< 	    call getval(5, 0,2119,  ndest, addr, id ) >*/
	getval_(&c__5, &c__0, &c__2119, &arrcom_1.ndest, &addr__, &id);
/*< 	    magicn = id + ic*2**12 + iv*2**16 >*/
	magicn = id + (ic << 12) + (iv << 16);
/*< 	    if( new ) oldmem(i) = 0 >*/
	if (*new__) {
	    oldmem[i__ - 1] = 0;
	}
/*< 	    if( magicn .eq. oldmem(i) ) goto 300 >*/
	if (magicn == oldmem[i__ - 1]) {
	    goto L300;
	}
/*< 	    oldmem(i) = magicn >*/
	oldmem[i__ - 1] = magicn;
/*< 	    call cursor( 20*((i-1)/20)+30, 24-mod(i-1,20) ) >*/
	i__1 = (i__ - 1) / 20 * 20 + 30;
	i__2 = 24 - (i__ - 1) % 20;
	cursor_(&i__1, &i__2);
/*< 	    if( magicn .eq. 0 ) call string(1,'                 ^E') >*/
	if (magicn == 0) {
	    string_(&c__1, "                 ^E", (ftnlen)19);
	}
/*< 	    if( magicn .eq. 0 ) goto 300 >*/
	if (magicn == 0) {
	    goto L300;
	}
/*< 	    call number(2, addr, -4 ) >*/
	number_(&c__2, &addr__, &c_n4);
/*< 	    call chrout(58) >*/
	chrout_(&c__58);
/*< 	    call number(2, iv, -2 ) >*/
	number_(&c__2, &iv, &c_n2);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call number(2, ic, -2 ) >*/
	number_(&c__2, &ic, &c_n2);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    call number(2, id, -6 ) >*/
	number_(&c__2, &id, &c_n6);
/*< 300	continue >*/
L300:
	;
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* disdbg_ */


/*< 	subroutine comand( ichar, comara, arrind, lcara ) >*/
/* Subroutine */ int comand_(ichar, comara, arrind, lcara)
integer *ichar, *comara, *arrind, *lcara;
{
    /* Initialized data */

    static integer index = 0;

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__;
    extern /* Subroutine */ int nap_();
    extern integer icon_();
    extern /* Subroutine */ int allcap_(), chrbuf_(), curbuf_();
    static integer indstr;
    extern /* Subroutine */ int chrout_(), string_(), cursor_();

/* *** */
/* ***	ROUTINE GET COMMAND FROM USER IF ONE PRESENT. */
/* *** */
/*< 	integer comara(81), lcara(81), index, arrind, ichar >*/
/*< 	data index/0/ >*/
    /* Parameter adjustments */
    --lcara;
    --comara;

    /* Function Body */
/* *** */
/* ***	IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR */
/* ***	0.5 SECONDS OR UNTIL ONE IS. */
/* *** */
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
/*< 	if( ichar .eq. 8 .or. ichar .eq. 127 )  goto 300 >*/
    if (*ichar == 8 || *ichar == 127) {
	goto L300;
    }
/*< 	if( ichar .eq. 21 )  goto 400 >*/
    if (*ichar == 21) {
	goto L400;
    }
/*< 	if( ichar .eq. 27 .and. index .eq. 0 )  goto 200 >*/
    if (*ichar == 27 && index == 0) {
	goto L200;
    }
/*< 	if( ichar .lt. 32 )  goto 600 >*/
    if (*ichar < 32) {
	goto L600;
    }
/*< 	if( index .ge. 78 )  goto 700 >*/
    if (index >= 78) {
	goto L700;
    }
/* *** */
/* ***	NOT SPECIAL CHARACTER, PUT IN ARRAY */
/* *** */
/*< 	index = index + 1 >*/
    ++index;
/*< 	call cursor( 1 + index, 1 ) >*/
    i__1 = index + 1;
    cursor_(&i__1, &c__1);
/*< 	call chrout( ichar ) >*/
    chrout_(ichar);
/*< 	comara(index) = icon( ichar ) >*/
    comara[index] = icon_(ichar);
/*< 	goto 100 >*/
    goto L100;
/* *** */
/* ***	ESCAPE:  REPEAT LAST COMMAND */
/* *** */
/*< 200	index = indstr >*/
L200:
    index = indstr;
/*< 	call cursor( 2, 1 ) >*/
    cursor_(&c__2, &c__1);
/*< 	if( index .ne. 0 )call string(3, comara, 1, index ) >*/
    if (index != 0) {
	string_(&c__3, &comara[1], &c__1, &index);
    }
/*< 	goto 600 >*/
    goto L600;
/* *** */
/* ***	DELETE CHARACTER */
/* *** */
/*< 300	if( index .eq. 0 ) goto 600 >*/
L300:
    if (index == 0) {
	goto L600;
    }
/*< 	index = index - 1 >*/
    --index;
/*< 	call cursor( 2 + index, 1 ) >*/
    i__1 = index + 2;
    cursor_(&i__1, &c__1);
/*< 	call chrout( 32 ) >*/
    chrout_(&c__32);
/*< 	goto 100 >*/
    goto L100;
/* *** */
/* ***	DELETE LINE */
/* *** */
/*< 400	if( index .eq. 0 ) goto 600 >*/
L400:
    if (index == 0) {
	goto L600;
    }
/*< 	call cursor( 2, 1 ) >*/
    cursor_(&c__2, &c__1);
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
/* *** */
/* ***	CARRIAGE RETURN TYPED */
/* *** */
/*< 600	if( index .ne. 0 )  goto 700 >*/
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
/*< 	call cursor( 2, 1 ) >*/
    cursor_(&c__2, &c__1);
/*< 	do 800 i = 1, index >*/
    i__1 = index;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 800	continue >*/
/* L800: */
    }
/*< 	do 850 i=1, index+1 >*/
    i__1 = index + 1;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    lcara(i) = comara(i) >*/
	lcara[i__] = comara[i__];
/*< 850	continue >*/
/* L850: */
    }
/*< 	call allcap( comara, index ) >*/
    allcap_(&comara[1], &index);
/*< 	ichar = comara(1) >*/
    *ichar = comara[1];
/*< 900	arrind = index >*/
L900:
    *arrind = index;
/*< 	indstr = index >*/
    indstr = index;
/*< 	index = 0 >*/
    index = 0;
/* 	CALL NAP( 10, 4 ) */
/*< 	call nap( 1000, 4 ) >*/
    nap_(&c__1000, &c__4);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* comand_ */


/*< 	subroutine messag( msgara ) >*/
/* Subroutine */ int messag_(msgara, msgara_len)
char *msgara;
ftnlen msgara_len;
{
    extern /* Subroutine */ int string_(), cursor_(), irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	character msgara( 80 ) >*/
/*< 	common/mescom/mesflg >*/
/*< 	if( mesflg .le. 0 ) goto 100 >*/
    /* Parameter adjustments */
    --msgara;

    /* Function Body */
    if (mescom_1.mesflg <= 0) {
	goto L100;
    }
/*< 	call cursor( 1, 3 ) >*/
    cursor_(&c__1, &c__3);
/*< 	call irepeat( 32, 80) >*/
    irepeat_(&c__32, &c__80);
/*< 100	call cursor( 1, 3 ) >*/
L100:
    cursor_(&c__1, &c__3);
/*< 	call string(1, msgara ) >*/
    string_(&c__1, msgara + 1, (ftnlen)1);
/*< 	mesflg = 10 >*/
    mescom_1.mesflg = 10;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* messag_ */


/*< 	subroutine cease >*/
/* Subroutine */ int cease_()
{
    extern /* Subroutine */ int close_();
    extern integer nuser_();
    extern /* Subroutine */ int enable_(), grafof_(), savesg_(), setdis_(), 
	    exprog_(), cursor_();

/*< 	call enable >*/
    enable_();
/*< 	call grafof >*/
    grafof_();
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	if( nuser(0) .le. 1 ) call savesg >*/
    if (nuser_(&c__0) <= 1) {
	savesg_();
    }
/*< 	call exprog >*/
    exprog_();
/*< 	end >*/
} /* cease_ */


/*< 	subroutine genins( par, l1, o1, l2, o2, iv, ic, id ) >*/
/* Subroutine */ int genins_(par, l1, o1, l2, o2, iv, ic, id)
integer *par, *l1, *o1, *l2, *o2, *iv, *ic, *id;
{
    /* Initialized data */

    static integer utype[7] = { 51,40,39,47,38,44,48 };
    static integer rtype[4] = { 47,38,44,45 };
    static integer util[4] = { 37,51,34,48 };
    static integer insnum[13] = { 1,2,3,4,4,4,5,6,7,8,9,9,10 };
    static integer sinum[4] = { 1,2,3,4 };

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, ival, siname[4];
    extern integer iserch_();
    extern /* Subroutine */ int parloc_(), messag_();
    static integer skpcod[6], insnam[13];
    static logical jmperr;
    static integer parnum[6];
    extern integer isxbit_(), isrsix_(), firstc_();
    extern /* Subroutine */ int convrt_(), getnum_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer par(19), insnam(13), insnum(13), siname(4), sinum(4) >*/
/*< 	integer skpcod(6), rtype(4), utype(7), parnum(6), util(4) >*/
/*< 	logical jmperr >*/
/*< 	commo >*/
/*< 	commo >*/
/* ***	DEFINE UNIT TYPE CODES: S, H, G, O, F, L, P */
/*< 	data utype/51,40,39,47,38,44,48/ >*/
    /* Parameter adjustments */
    --par;

    /* Function Body */
/* ***	DEFINE RESOURCE TYPES: O(RE), F(OOD), L(UX), M(EN) */
/*< 	data rtype/47,38,44,45/ >*/
/* ***	DEFINE UTILITIES: E(NGINE) S(HIELD) B(EAM) P(OWER) */
/*< 	data util/37,51,34,48/ >*/
/*< 	data insnum/1,2,3,4,4,4,5,6,7,8,9,9,10/ >*/
/*< 	data sinum/1,2,3,4/ >*/
/*< 	if( insnam(1) .ne. 0 ) goto 50 >*/
    if (insnam[0] != 0) {
	goto L50;
    }
/* ***	DEFINE INSTRUCTIONS: MOVE,MOV,JUMP,JUM,CREATE,CRE */
/* ***	LOAD,TRANSF,PUT,TACTIC,TAC,INFORM,INF */
/* ***	SKIP,ERROR,ERR,GOTO,STOP,BUILD,BUI */
/*< 	insnam(1)  = isxbit('Move~')		! isxbit('MOVE  ~') >*/
    insnam[0] = isxbit_("Move~", (ftnlen)5);
/*< 	insnam(2)  = isxbit('Jump~')		! isxbit('JUMP  ~') >*/
    insnam[1] = isxbit_("Jump~", (ftnlen)5);
/*< 	insnam(3)  = isxbit('Create~')		! isxbit('CREATE~') >*/
    insnam[2] = isxbit_("Create~", (ftnlen)7);
/*< 	insnam(4)  = isxbit('Load~')		! isxbit('LOAD  ~') >*/
    insnam[3] = isxbit_("Load~", (ftnlen)5);
/*< 	insnam(5)  = isxbit('Transfer~')		! isxbit('TRANSF~') >*/
    insnam[4] = isxbit_("Transfer~", (ftnlen)9);
/*< 	insnam(6)  = isxbit('Put~')		! isxbit('PUT   ~') >*/
    insnam[5] = isxbit_("Put~", (ftnlen)4);
/*< 	insnam(7)  = isxbit('Tactic~')		! isxbit('TACTIC~') >*/
    insnam[6] = isxbit_("Tactic~", (ftnlen)7);
/*< 	insnam(8)  = isxbit('Inform~')		! isxbit('INFORM~') >*/
    insnam[7] = isxbit_("Inform~", (ftnlen)7);
/*< 	insnam(9)  = isxbit('Skip~')		! isxbit('SKIP  ~') >*/
    insnam[8] = isxbit_("Skip~", (ftnlen)5);
/*< 	insnam(10) = isxbit('Error~')		! isxbit('ERROR ~') >*/
    insnam[9] = isxbit_("Error~", (ftnlen)6);
/*< 	insnam(11) = isxbit('Goto~')		! isxbit('GOTO  ~') >*/
    insnam[10] = isxbit_("Goto~", (ftnlen)5);
/*< 	insnam(12) = isxbit('Stop~')		! isxbit('STOP  ~') >*/
    insnam[11] = isxbit_("Stop~", (ftnlen)5);
/*< 	insnam(13) = isxbit('Build~')		! isxbit('BUILD ~') >*/
    insnam[12] = isxbit_("Build~", (ftnlen)6);
/* ***	NOARG INSTRUCTION: RANDOM,RAN,PRODUC,PRO,CEASE,CEA,SELF */
/*< 	siname(1) = isxbit('Random~')		! isxbit('RANDOM~') >*/
    siname[0] = isxbit_("Random~", (ftnlen)7);
/*< 	siname(2) = isxbit('Produce~')		! isxbit('PRODUC~') >*/
    siname[1] = isxbit_("Produce~", (ftnlen)8);
/*< 	siname(3) = isxbit('Cease~')		! isxbit('CEASE ~') >*/
    siname[2] = isxbit_("Cease~", (ftnlen)6);
/*< 	siname(4) = isxbit('Selfdestruct~')	! isxbit('SELF  ~') >*/
    siname[3] = isxbit_("Selfdestruct~", (ftnlen)13);
/*< 	skpcod(1) = isxbit('LT~')		! isxbit('LT    ~') >*/
    skpcod[0] = isxbit_("LT~", (ftnlen)3);
/*< 	skpcod(2) = isxbit('LE~')		! isxbit('LE    ~') >*/
    skpcod[1] = isxbit_("LE~", (ftnlen)3);
/*< 	skpcod(3) = isxbit('EQ~')		! isxbit('EQ    ~') >*/
    skpcod[2] = isxbit_("EQ~", (ftnlen)3);
/*< 	skpcod(4) = isxbit('NE~')		! isxbit('NE    ~') >*/
    skpcod[3] = isxbit_("NE~", (ftnlen)3);
/*< 	skpcod(5) = isxbit('GT~')		! isxbit('GT    ~') >*/
    skpcod[4] = isxbit_("GT~", (ftnlen)3);
/*< 	skpcod(6) = isxbit('GE~')		! isxbit('GE    ~') >*/
    skpcod[5] = isxbit_("GE~", (ftnlen)3);
/*< 50	continue >*/
L50:
/*< 	ic = 0 >*/
    *ic = 0;
/*< 	id = 0 >*/
    *id = 0;
/*< 	l2 = l1 >*/
    *l2 = *l1;
/*< 	o2 = o1 >*/
    *o2 = *o1;
/*< 	iv = isrsix( insnam, par(1), 13 ) >*/
    *iv = isrsix_(insnam, &par[1], &c__13);
/*< 	if( iv .eq. 0 ) goto 1100 >*/
    if (*iv == 0) {
	goto L1100;
    }
/*< 	iv = insnum( iv ) >*/
    *iv = insnum[*iv - 1];
/*< 	goto(100,100,200,300,400,750,800,900,900,1000) iv >*/
    switch ((int)*iv) {
	case 1:  goto L100;
	case 2:  goto L100;
	case 3:  goto L200;
	case 4:  goto L300;
	case 5:  goto L400;
	case 6:  goto L750;
	case 7:  goto L800;
	case 8:  goto L900;
	case 9:  goto L900;
	case 10:  goto L1000;
    }
/*< 100	call parloc( par(2), l1, o1, jmperr, id, ic ) >*/
L100:
    parloc_(&par[2], l1, o1, &jmperr, id, ic);
/*< 	if( jmperr ) goto 1200 >*/
    if (jmperr) {
	goto L1200;
    }
/*< 	l2 = id >*/
    *l2 = *id;
/*< 	o2 = ic >*/
    *o2 = *ic;
/*< 150	return >*/
/* L150: */
    return 0;
/*< 200	ic = iserch( utype, firstc( par(2) ), 7 ) >*/
L200:
    i__1 = firstc_(&par[2]);
    *ic = iserch_(utype, &i__1, &c__7);
/*< 	if( ic .eq. 0 ) goto 1200 >*/
    if (*ic == 0) {
	goto L1200;
    }
/*< 	call convrt( par(3), 6, 6, parnum, 1 ) >*/
    convrt_(&par[3], &c__6, &c__6, parnum, &c__1);
/*< 	call getnum(4, parnum, 6, id, 10 ) >*/
    getnum_(&c__4, parnum, &c__6, id, &c__10);
/*< 	if( id .lt. 0 ) goto 1200 >*/
    if (*id < 0) {
	goto L1200;
    }
/*< 	return >*/
    return 0;
/*< 300	call convrt( par(2), 6, 6, parnum, 1 ) >*/
L300:
    convrt_(&par[2], &c__6, &c__6, parnum, &c__1);
/*< 	call getnum(4, parnum, 6, ic, 10 ) >*/
    getnum_(&c__4, parnum, &c__6, ic, &c__10);
/*< 	if( ic .lt. 0 ) ic = 0 >*/
    if (*ic < 0) {
	*ic = 0;
    }
/*< 	call convrt( par(5), 6, 6, parnum, 1 ) >*/
    convrt_(&par[5], &c__6, &c__6, parnum, &c__1);
/*< 	call getnum(4, parnum, 6, id, 10 ) >*/
    getnum_(&c__4, parnum, &c__6, id, &c__10);
/*< 	if( par(4) .eq. isxbit('FROM~') ) id = id + 2**17 >*/
    if (par[4] == isxbit_("FROM~", (ftnlen)5)) {
	*id += 131072;
    }
/*< 	ival = firstc( par(3) ) >*/
    ival = firstc_(&par[3]);
/*< 	if( ival .eq. 38 ) id = id + 2**15 >*/
    if (ival == 38) {
	*id += 32768;
    }
/*< 	if( ival .eq. 44 ) id = id + 2*2**15 >*/
    if (ival == 44) {
	*id += 65536;
    }
/*< 	if( ival .eq. 45 ) id = id + 3*2**15 >*/
    if (ival == 45) {
	*id += 98304;
    }
/*< 350	return >*/
/* L350: */
    return 0;
/*< 400	id = 31 >*/
L400:
    *id = 31;
/*< 	do 405 i = 2, 4 >*/
    for (i__ = 2; i__ <= 4; ++i__) {
/*< 	    call convrt( par(i), 6, 6, parnum, 1 ) >*/
	convrt_(&par[i__], &c__6, &c__6, parnum, &c__1);
/*< 	    call getnum(4, parnum, 6, ival, 10 ) >*/
	getnum_(&c__4, parnum, &c__6, &ival, &c__10);
/*< 	    id = 32*id + ival >*/
	*id = (*id << 5) + ival;
/*< 405	continue >*/
/* L405: */
    }
/*< 	return >*/
    return 0;
/*< 750	id = par(2) >*/
L750:
    *id = par[2];
/* 	ZERO = 0 */
/* 	CALL SHIFTC( ID, ZERO, -18 ) */
/* 	IF( ZERO .NE. 0 ) GOTO 1200 */
/*< 	call convrt( par(3), 6, 6, parnum, 1 ) >*/
    convrt_(&par[3], &c__6, &c__6, parnum, &c__1);
/*< 	call getnum(4, parnum, 6, ic, 10 ) >*/
    getnum_(&c__4, parnum, &c__6, ic, &c__10);
/*< 	if( ic .gt. 15 ) goto 1200 >*/
    if (*ic > 15) {
	goto L1200;
    }
/*< 	return >*/
    return 0;
/*< 800	ival = iserch( skpcod, par(2), 6 ) >*/
L800:
    ival = iserch_(skpcod, &par[2], &c__6);
/*< 	if( ival .eq. 0 ) goto 1200 >*/
    if (ival == 0) {
	goto L1200;
    }
/*< 	ic = iserch( rtype, firstc(par(3)), 4 ) >*/
    i__1 = firstc_(&par[3]);
    *ic = iserch_(rtype, &i__1, &c__4);
/*< 	if( ic .eq. 0 ) goto 1200 >*/
    if (*ic == 0) {
	goto L1200;
    }
/*< 	call convrt( par(4), 6, 6, parnum, 1 ) >*/
    convrt_(&par[4], &c__6, &c__6, parnum, &c__1);
/*< 	call getnum(4, parnum, 6, id, 10 ) >*/
    getnum_(&c__4, parnum, &c__6, id, &c__10);
/*< 	if( id .lt. 0 .or. id .ge. 2**15 ) goto 1200 >*/
    if (*id < 0 || *id >= 32768) {
	goto L1200;
    }
/*< 	id = id + ival*2**15 >*/
    *id += ival << 15;
/*< 	return >*/
    return 0;
/*< 900	if( par(2) .eq. isxbit('NEXT~') ) goto 910 >*/
L900:
    if (par[2] == isxbit_("NEXT~", (ftnlen)5)) {
	goto L910;
    }
/*< 	call convrt( par(2), 6, 6, parnum, 1 ) >*/
    convrt_(&par[2], &c__6, &c__6, parnum, &c__1);
/*< 	call getnum(4, parnum, 2, id, 10 ) >*/
    getnum_(&c__4, parnum, &c__2, id, &c__10);
/*< 	if( id .lt. 0 .or. id .gt. 40 ) id = 0 >*/
    if (*id < 0 || *id > 40) {
	*id = 0;
    }
/*< 	return >*/
    return 0;
/*< 910	id = 63 >*/
L910:
    *id = 63;
/*< 	return >*/
    return 0;
/*< 1000	ic = iserch( util, firstc(par(2)), 4 ) >*/
L1000:
    i__1 = firstc_(&par[2]);
    *ic = iserch_(util, &i__1, &c__4);
/*< 	if( ic .eq. 0 ) goto 1200 >*/
    if (*ic == 0) {
	goto L1200;
    }
/*< 	call convrt( par(3), 6, 6, parnum, 1 ) >*/
    convrt_(&par[3], &c__6, &c__6, parnum, &c__1);
/*< 	call getnum(4, parnum, 6, id, 10 ) >*/
    getnum_(&c__4, parnum, &c__6, id, &c__10);
/*< 	if( id .le. 0 ) goto 1200 >*/
    if (*id <= 0) {
	goto L1200;
    }
/*< 	return >*/
    return 0;
/*< 1100	ic = iserch( siname, par(1), 7 ) >*/
L1100:
    *ic = iserch_(siname, &par[1], &c__7);
/*< 	if( ic .eq. 0 ) goto 1200 >*/
    if (*ic == 0) {
	goto L1200;
    }
/*< 	ic = sinum( ic ) >*/
    *ic = sinum[*ic - 1];
/*< 	iv = 15 >*/
    *iv = 15;
/*< 	return >*/
    return 0;
/*< 1200	call messag('Illegal instruction.^E') >*/
L1200:
    messag_("Illegal instruction.^E", (ftnlen)22);
/*< 	iv = -1 >*/
    *iv = -1;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* genins_ */


/*< 	subroutine parloc( par, cloc, corb, jmperr, loc, orb ) >*/
/* Subroutine */ int parloc_(par, cloc, corb, jmperr, loc, orb)
integer *par, *cloc, *corb;
logical *jmperr;
integer *loc, *orb;
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, j, k, m, p, s, pn[6], ival, orbcod[3];
    extern /* Subroutine */ int getval_();
    extern integer isxbit_();
    extern /* Subroutine */ int getnum_(), convrt_();
    extern integer isrsix_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer par( 10 ), pn( 6 ), orbcod( 3 ) >*/
/*< 	logical jmperr >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	if( orbcod(1) .ne. 0 ) goto 10 >*/
    /* Parameter adjustments */
    --par;

    /* Function Body */
    if (orbcod[0] != 0) {
	goto L10;
    }
/*< 	orbcod(1) = isxbit('Ground~')		! isxbit('GROUND~') >*/
    orbcod[0] = isxbit_("Ground~", (ftnlen)7);
/*< 	orbcod(2) = isxbit('Low~')		! isxbit('LOW   ~') >*/
    orbcod[1] = isxbit_("Low~", (ftnlen)4);
/*< 	orbcod(3) = isxbit('High~')		! isxbit('HIGH  ~') >*/
    orbcod[2] = isxbit_("High~", (ftnlen)5);
/*< 10	continue >*/
L10:
/*< 	jmperr = .true. >*/
    *jmperr = TRUE_;
/*< 	loc = cloc >*/
    *loc = *cloc;
/*< 	orb = corb >*/
    *orb = *corb;
/*< 	call getval(5, 0,2421,  wstar, loc, s ) >*/
    getval_(&c__5, &c__0, &c__2421, &arrcom_1.wstar, loc, &s);
/*< 	call getval(5, 0,2422,  wplan, loc, p ) >*/
    getval_(&c__5, &c__0, &c__2422, &arrcom_1.wplan, loc, &p);
/*< 	call getval(5, 0,2423,  wmoon, loc, m ) >*/
    getval_(&c__5, &c__0, &c__2423, &arrcom_1.wmoon, loc, &m);
/*< 	do 100 i = 1, 10 >*/
    for (i__ = 1; i__ <= 10; ++i__) {
/*< 	    if( par(i) .eq. 0 ) goto 110 >*/
	if (par[i__] == 0) {
	    goto L110;
	}
/*< 	    i >*/
	if ((par[1] == isxbit_("TO~", (ftnlen)3) || par[1] == isxbit_("AT~", (
		ftnlen)3)) && i__ == 1) {
	    goto L100;
	}
/*< 	    k = isrsix( orbcod, par(i), 3 ) >*/
	k = isrsix_(orbcod, &par[i__], &c__3);
/*< 	    if( k .eq. 0 ) goto 30 >*/
	if (k == 0) {
	    goto L30;
	}
/*< 	    orb = k >*/
	*orb = k;
/*< 	    goto 100 >*/
	goto L100;
/*< 30	    do 50 j = 1, numstr >*/
L30:
	i__1 = usrcom_1.numstr;
	for (j = 1; j <= i__1; ++j) {
/*< 		call getval(6, 0,2434,  name, j+0, 1, ival ) >*/
	    i__2 = j;
	    getval_(&c__6, &c__0, &c__2434, &arrcom_1.name__, &i__2, &c__1, &
		    ival);
/*< 		if( ival .ne. par(i) ) goto 50 >*/
	    if (ival != par[i__]) {
		goto L50;
	    }
/*< 		s = j >*/
	    s = j;
/*< 		p = 0 >*/
	    p = 0;
/*< 		m = 0 >*/
	    m = 0;
/*< 		orb = 3 >*/
	    *orb = 3;
/*< 		goto 100 >*/
	    goto L100;
/*< 50	    continue >*/
L50:
	    ;
	}
/*< 	    call convrt( par(i), 6, 6, pn, 1 ) >*/
	convrt_(&par[i__], &c__6, &c__6, pn, &c__1);
/*< 	    call getnum(4, pn, 6, ival, 10 ) >*/
	getnum_(&c__4, pn, &c__6, &ival, &c__10);
/*< 	    if( pn(1) .ne. 83 ) goto 60 >*/
	if (pn[0] != 83) {
	    goto L60;
	}
/*< 	    s = ival >*/
	s = ival;
/*< 	    p = 0 >*/
	p = 0;
/*< 	    m = 0 >*/
	m = 0;
/*< 	    orb = 3 >*/
	*orb = 3;
/*< 	    goto 100 >*/
	goto L100;
/*< 60	    if( pn(1) .ne. 80 ) goto 70 >*/
L60:
	if (pn[0] != 80) {
	    goto L70;
	}
/*< 	    p = ival >*/
	p = ival;
/*< 	    m = 0 >*/
	m = 0;
/*< 	    orb = 3 >*/
	*orb = 3;
/*< 	    goto 100 >*/
	goto L100;
/*< 70	    if( pn(1) .ne. 77 ) return >*/
L70:
	if (pn[0] != 77) {
	    return 0;
	}
/*< 	    m = ival >*/
	m = ival;
/*< 	    orb = 3 >*/
	*orb = 3;
/*< 100	continue >*/
L100:
	;
    }
/*< 110	do 200 i = 1, lasplc >*/
L110:
    i__1 = usrcom_1.lasplc;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    loc = i >*/
	*loc = i__;
/*< 	    call getval(5, 0,2462,  wstar, loc, ival ) >*/
	getval_(&c__5, &c__0, &c__2462, &arrcom_1.wstar, loc, &ival);
/*< 	    if( ival .ne. s ) goto 200 >*/
	if (ival != s) {
	    goto L200;
	}
/*< 	    call getval(5, 0,2464,  wplan, loc, ival ) >*/
	getval_(&c__5, &c__0, &c__2464, &arrcom_1.wplan, loc, &ival);
/*< 	    if( ival .ne. p ) goto 200 >*/
	if (ival != p) {
	    goto L200;
	}
/*< 	    call getval(5, 0,2466,  wmoon, loc, ival ) >*/
	getval_(&c__5, &c__0, &c__2466, &arrcom_1.wmoon, loc, &ival);
/*< 	    if( ival .eq. m ) goto 250 >*/
	if (ival == m) {
	    goto L250;
	}
/*< 200	continue >*/
L200:
	;
    }
/*< 	return >*/
    return 0;
/*< 250	jmperr = .false. >*/
L250:
    *jmperr = FALSE_;
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* parloc_ */


/*< 	subroutine savesg >*/
/* Subroutine */ int savesg_()
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    extern /* Subroutine */ int e_();
    static integer i__;
    extern integer job_();
    static integer ival;
    extern /* Subroutine */ int ofile_(), close_(), wfile_();
    static integer begadr;
    extern /* Subroutine */ int enable_();
    static integer begblk;
    extern integer nhiblk_();
    extern logical lerror_();
    extern /* Subroutine */ int getval_();
    extern integer isxbit_();
    extern /* Subroutine */ int bugmsg_();
    static integer toploc;
    extern /* Subroutine */ int filput_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical lerror >*/
/*< 	integer filesp(13) >*/
/*< 	common/filcom/filesp >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	if( job(-1) .eq. 0 ) return	! savesg not useful unless tops10 >*/
    if (job_(&c_n1) == 0) {
	return 0;
    }
/*< 	call getval(5, 0,2497,  useful, 17, ival ) >*/
    getval_(&c__5, &c__0, &c__2497, &arrcom_1.useful, &c__17, &ival);
/*< 	if( ival .eq. 0 ) return >*/
    if (ival == 0) {
	return 0;
    }
/*< 	call enable >*/
    enable_();
/*< 	call ofile( 2, filesp, isxbit('@    ,~') ) >*/
    i__1 = isxbit_("@    ,~", (ftnlen)7);
    ofile_(&c__2, filcom_1.filesp, &i__1);
/*< 	if( lerror(0) ) call bugmsg('INIT: UPD OPEN FAILURE.^E',0,0) >*/
    if (lerror_(&c__0)) {
	bugmsg_("INIT: UPD OPEN FAILURE.^E", &c__0, &c__0, (ftnlen)25);
    }
/*< 	filesp(5) = isxbit('UPD~') >*/
    filcom_1.filesp[4] = isxbit_("UPD~", (ftnlen)4);
/*< 	call wfile( 2, filesp ) >*/
    wfile_(&c__2, filcom_1.filesp);
/*< 	if( lerror(0) ) call bugmsg('INIT: UPD ENTER FAILURE.^E',0,0) >*/
    if (lerror_(&c__0)) {
	bugmsg_("INIT: UPD ENTER FAILURE.^E", &c__0, &c__0, (ftnlen)26);
    }
/*< 	begblk = nhiblk(0) >*/
    begblk = nhiblk_(&c__0);
/*< 	call e( begblk+3, toploc ) >*/
    i__1 = begblk + 3;
    e_(&i__1, &toploc);
/*< 	call filput( 2, toploc ) >*/
    filput_(&c__2, &toploc);
/*< 	do 100 i = 1, 490 >*/
    for (i__ = 1; i__ <= 490; ++i__) {
/*< 	    call e( begblk+i+3, begadr ) >*/
	i__1 = begblk + i__ + 3;
	e_(&i__1, &begadr);
/*< 	    call filput( 2, begadr ) >*/
	filput_(&c__2, &begadr);
/*< 100	continue >*/
/* L100: */
    }
/*< 	do 200 i = begadr, toploc >*/
    i__1 = toploc;
    for (i__ = begadr; i__ <= i__1; ++i__) {
/*< 	    call e( i+0, ival ) >*/
	i__2 = i__;
	e_(&i__2, &ival);
/*< 	    call filput( 2, ival ) >*/
	filput_(&c__2, &ival);
/*< 200	continue >*/
/* L200: */
    }
/*< 	call close( 2 ) >*/
    close_(&c__2);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* savesg_ */

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


/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static integer tc[7] = { 83,72,71,79,70,76,80 };
    static integer dtype = 1;
    static logical new__ = TRUE_;

    /* System generated locals */
    integer i__1, i__2, i__3, i__4;

    /* Local variables */
    static integer i__, j, k, ec, ed, ic, id, ev, iv, wp, tac[3], ipc, com[81]
	    , len;
    extern /* Subroutine */ int nap_();
    static integer par[20];
    extern /* Subroutine */ int ppn_();
    static logical xtr1, xtr2;
    static integer addr__, cloc, eloc, corb, flen, eorb, fpar[7];
    extern integer icon_(), iran_();
    static integer ival, oloc;
    extern /* Subroutine */ int ploc_();
    static integer icom, line, sloc, ship, ilen, sorb, nlen, lmem, miss, unum;
    static logical oxtr1, oxtr2;
    static integer ecode[40];
    extern /* Subroutine */ int pback_(), check_();
    static integer lcara[81];
    static logical jflag;
    extern /* Subroutine */ int cease_();
    static integer ichar;
    extern integer igtab_();
    static integer enloc, everb[40], edest[40], enorb;
    extern /* Subroutine */ int parse_();
    static integer cstar;
    static logical lmove;
    static integer fpnum, ostar, itoks;
    extern /* Subroutine */ int disys_();
    static integer whoto;
    extern /* Subroutine */ int punit_(), addval_(), disdbg_(), comand_();
    static logical iniflg;
    extern /* Subroutine */ int initdb_();
    static integer comnam[25], disnam[8], loopen;
    static logical jmperr, lprivd, mltisp;
    extern integer isxbit_();
    extern /* Subroutine */ int pcolor_(), getval_(), string_(), exprog_(), 
	    putval_(), clrscr_(), cursor_(), settty_(), chrwat_(), addunt_(), 
	    grafon_(), usrset_();
    static integer ttyspd;
    extern /* Subroutine */ int exunit_();
    static integer hypmov;
    extern /* Subroutine */ int chrout_(), number_();
    static integer timeto, otimet;
    extern /* Subroutine */ int disens_(), distat_(), disunt_();
    static integer untloc, untype;
    extern /* Subroutine */ int disedt_(), dispos_(), displa_();
    static integer whofrm;
    extern /* Subroutine */ int messag_();
    static integer oblorn, blorun;
    extern /* Subroutine */ int prinst_();
    static integer tmtowa;
    extern /* Subroutine */ int outbuf_();
    extern integer isrsix_();
    static integer idtype;
    extern integer firstc_(), iserch_();
    extern /* Subroutine */ int parloc_(), getnum_(), genins_();
    static integer newpcv;
    extern /* Subroutine */ int convrt_();
    static integer whoinl, lprogr, prgnum;
    extern /* Subroutine */ int bugmsg_();
    static integer curprg, empnum;
    extern /* Subroutine */ int syswho_(), irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer com(81), par(20), everb(40), ecode(40), edest(40) >*/
/*< 	integer lcara(81) >*/
/*< 	integer comnam(25), filesp(13), tc(7), fpar(7), disnam(8) >*/
/*< 	integer tac(3) >*/
/*< 	integer loopen >*/
/*< 	integer sname(2) >*/
/*< 	logical new, lprivd, iniflg, lmove, xtr1, xtr2, oxtr1, oxtr2 >*/
/*< 	logical jmperr, mltisp, jflag >*/
/*< 	common/filcom/filesp >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	commo >*/
/*< 	common/mescom/mesflg >*/
/* ***	DEFINE SHIP TYPE CHARACTERS */
/*< 	data tc/83,72,71,79,70,76,80/ >*/
/* ***	START HIM ON DISPLAY #1 (SENSOR DISPLAY) */
/*< 	data dtype/1/, new/.true./ >*/
/*< 	if( disnam(1) .ne. 0 ) goto 5 >*/
    if (disnam[0] != 0) {
	goto L5;
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
/* ***	DISPLAY TYPES: SENSOR, SEN, SYSTEM, SYS, STATUS, STA, */
/* ***	UNITS, UNI, EDIT, EDI, POSITI, POS, PLAYER, PLA, DEBUG, DEB */
/*< 	disnam(1) =  isxbit('sensors~')	! isxbit('SENSOR~') >*/
    disnam[0] = isxbit_("sensors~", (ftnlen)8);
/*< 	disnam(2) =  isxbit('systems~')	! isxbit('SYSTEM~') >*/
    disnam[1] = isxbit_("systems~", (ftnlen)8);
/*< 	disnam(3) =  isxbit('status~')	! isxbit('STATUS~') >*/
    disnam[2] = isxbit_("status~", (ftnlen)7);
/*< 	disnam(4) =  isxbit('units~')	! isxbit('UNITS ~') >*/
    disnam[3] = isxbit_("units~", (ftnlen)6);
/*< 	disnam(5) =  isxbit('edit~')	! isxbit('EDIT  ~') >*/
    disnam[4] = isxbit_("edit~", (ftnlen)5);
/*< 	disnam(6) = isxbit('positions~')! isxbit('POSITI~') >*/
    disnam[5] = isxbit_("positions~", (ftnlen)10);
/*< 	disnam(7) = isxbit('players~')	! isxbit('PLAYER~') >*/
    disnam[6] = isxbit_("players~", (ftnlen)8);
/*< 	disnam(8) = isxbit('debug~')	! isxbit('DEBUG ~') >*/
    disnam[7] = isxbit_("debug~", (ftnlen)6);
/* ***	DEFINED COMMANDS: */
/* ***	DISPLA,DIS,NEW,MISSION,MIS,CLEAR,CLE,STAND,WAIT,SAVE,DONE,EXIT, */
/* ***	GAG,UNGAG,INSERT,INS,I,REPLAC,REP,R,DELETE,DEL,D,TRANSF,TRA,T, */
/* ***	NEWTAC,NEWPC,SENORD,ORDER,ORD,SENTAC,SENPC,WHO */
/*< 	comnam( 1) = isxbit('Display~')		! isxbit('DISPLA~') >*/
    comnam[0] = isxbit_("Display~", (ftnlen)8);
/*< 	comnam( 2) = isxbit('New~')		! isxbit('NEW   ~') >*/
    comnam[1] = isxbit_("New~", (ftnlen)4);
/*< 	comnam( 3) = isxbit('Mission~')		! isxbit('MISSIO~') >*/
    comnam[2] = isxbit_("Mission~", (ftnlen)8);
/*< 	comnam( 4) = isxbit('Clear~')		! isxbit('CLEAR ~') >*/
    comnam[3] = isxbit_("Clear~", (ftnlen)6);
/*< 	comnam( 5) = isxbit('Stand~')		! isxbit('STAND ~') >*/
    comnam[4] = isxbit_("Stand~", (ftnlen)6);
/*< 	comnam( 6) = isxbit('Wait~')		! isxbit('WAIT  ~') >*/
    comnam[5] = isxbit_("Wait~", (ftnlen)5);
/*< 	comnam( 7) = isxbit('Save~')		! isxbit('SAVE  ~') >*/
    comnam[6] = isxbit_("Save~", (ftnlen)5);
/*< 	comnam( 8) = isxbit('Done~')		! isxbit('DONE  ~') >*/
    comnam[7] = isxbit_("Done~", (ftnlen)5);
/*< 	comnam( 9) = isxbit('Exit~')		! isxbit('EXIT  ~') >*/
    comnam[8] = isxbit_("Exit~", (ftnlen)5);
/*< 	comnam(10) = isxbit('Gag~')		! isxbit('GAG   ~') >*/
    comnam[9] = isxbit_("Gag~", (ftnlen)4);
/*< 	comnam(11) = isxbit('Ungag~')		! isxbit('UNGAG ~') >*/
    comnam[10] = isxbit_("Ungag~", (ftnlen)6);
/*< 	comnam(12) = isxbit('Insert~')		! isxbit('INSERT~') >*/
    comnam[11] = isxbit_("Insert~", (ftnlen)7);
/*< 	comnam(13) = isxbit('Replace~')		! isxbit('REPLAC~') >*/
    comnam[12] = isxbit_("Replace~", (ftnlen)8);
/*< 	comnam(14) = isxbit('Delete~')		! isxbit('DELETE~') >*/
    comnam[13] = isxbit_("Delete~", (ftnlen)7);
/*< 	comnam(15) = isxbit('Transfer~')		! isxbit('TRANSF~') >*/
    comnam[14] = isxbit_("Transfer~", (ftnlen)9);
/*< 	comnam(16) = isxbit('Newtactic~')	! isxbit('NEWTAC~') >*/
    comnam[15] = isxbit_("Newtactic~", (ftnlen)10);
/*< 	comnam(17) = isxbit('Newpc~')		! isxbit('NEWPC ~') >*/
    comnam[16] = isxbit_("Newpc~", (ftnlen)6);
/*< 	comnam(18) = isxbit('Sendorder~')	! isxbit('SENORD~') >*/
    comnam[17] = isxbit_("Sendorder~", (ftnlen)10);
/*< 	comnam(19) = isxbit('Senorder~')		! isxbit('SENORD~') >*/
    comnam[18] = isxbit_("Senorder~", (ftnlen)9);
/*< 	comnam(20) = isxbit('Order~')		! isxbit('ORDER ~') >*/
    comnam[19] = isxbit_("Order~", (ftnlen)6);
/*< 	comnam(21) = isxbit('Sendtactic~')	! isxbit('SENTAC~') >*/
    comnam[20] = isxbit_("Sendtactic~", (ftnlen)11);
/*< 	comnam(22) = isxbit('Sentactic~')	! isxbit('SENTAC~') >*/
    comnam[21] = isxbit_("Sentactic~", (ftnlen)10);
/*< 	comnam(23) = isxbit('Sendpc~')		! isxbit('SENPC ~') >*/
    comnam[22] = isxbit_("Sendpc~", (ftnlen)7);
/*< 	comnam(24) = isxbit('Senpc~')		! isxbit('SENPC ~') >*/
    comnam[23] = isxbit_("Senpc~", (ftnlen)6);
/*< 	comnam(25) = isxbit('Who~')		! isxbit('WHO   ~') >*/
    comnam[24] = isxbit_("Who~", (ftnlen)4);
/*< 5	continue >*/
L5:
/* ***	**************************** */
/* ***	****** BEGIN MAINLINE ****** */
/* ***	**************************** */
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call settty( com, par, len, lprivd, filesp ) >*/
    settty_(com, par, &len, &lprivd, filcom_1.filesp);
/*< 	call check( iniflg ) >*/
    check_(&iniflg);
/*< 	if( iniflg ) call initdb( com, par, lprivd ) >*/
    if (iniflg) {
	initdb_(com, par, &lprivd);
    }
/*< 	call getval(5, 0,2650,  useful, 16, ival ) >*/
    getval_(&c__5, &c__0, &c__2650, &arrcom_1.useful, &c__16, &ival);
/*< 	if( ival .eq. 0 .or. lprivd ) goto 10 >*/
    if (ival == 0 || lprivd) {
	goto L10;
    }
/*< 	call string(1,'Stand alone.  Try again later.^M^J^B') >*/
    string_(&c__1, "Stand alone.  Try again later.^M^J^B", (ftnlen)36);
/*< 	call exprog >*/
    exprog_();
/*< 10	continue ! call ctrap >*/
L10:
/* 	    call cease */
/*< 	call getval(5, 0,2658,  useful, 1, numstr ) >*/
    getval_(&c__5, &c__0, &c__2658, &arrcom_1.useful, &c__1, &usrcom_1.numstr)
	    ;
/*< 	call getval(5, 0,2659,  useful, 4, lasplc ) >*/
    getval_(&c__5, &c__0, &c__2659, &arrcom_1.useful, &c__4, &usrcom_1.lasplc)
	    ;
/*< 	call getval(5, 0,2660,  useful, 5, lunit ) >*/
    getval_(&c__5, &c__0, &c__2660, &arrcom_1.useful, &c__5, &usrcom_1.lunit);
/*< 	call getval(5, 0,2661,  useful, 6, nprogs ) >*/
    getval_(&c__5, &c__0, &c__2661, &arrcom_1.useful, &c__6, &usrcom_1.nprogs)
	    ;
/*< 	call getval(5, 0,2662,  useful, 12, maxuni ) >*/
    getval_(&c__5, &c__0, &c__2662, &arrcom_1.useful, &c__12, &
	    usrcom_1.maxuni);
/*< 	call getval(5, 0,2663,  useful, 13, maxprg ) >*/
    getval_(&c__5, &c__0, &c__2663, &arrcom_1.useful, &c__13, &
	    usrcom_1.maxprg);
/*< 	call getval(5, 0,2664,  useful, 14, maxmem ) >*/
    getval_(&c__5, &c__0, &c__2664, &arrcom_1.useful, &c__14, &
	    usrcom_1.maxmem);
/*< 	call getval(5, 0,2665,  useful, 15, maxpla ) >*/
    getval_(&c__5, &c__0, &c__2665, &arrcom_1.useful, &c__15, &
	    usrcom_1.maxpla);
/*< 	call ppn( i, ival ) >*/
    ppn_(&i__, &ival);
/*< 	do 50 player = 1, nprogs >*/
    i__1 = usrcom_1.nprogs;
    for (usrcom_1.player = 1; usrcom_1.player <= i__1; ++usrcom_1.player) {
/*< 	    call getval(5, 0,2668,  progs, player+0, j ) >*/
	i__2 = usrcom_1.player;
	getval_(&c__5, &c__0, &c__2668, &arrcom_1.progs, &i__2, &j);
/*< 	    if( j .eq. ival ) goto 60 >*/
	if (j == ival) {
	    goto L60;
	}
/*< 	    if( j .eq. 0 ) goto 70 >*/
	if (j == 0) {
	    goto L70;
	}
/*< 50	continue >*/
/* L50: */
    }
/*< 55	continue >*/
L55:
/*< 	call string(1,'There are too many people in the system.^M^J^B') >*/
    string_(&c__1, "There are too many people in the system.^M^J^B", (ftnlen)
	    46);
/*< 	call exprog >*/
    exprog_();
/*< 60	call putval(5, 0,2676,  empcod, player, 0 ) >*/
L60:
    putval_(&c__5, &c__0, &c__2676, &arrcom_1.empcod, &usrcom_1.player, &c__0)
	    ;
/*< 	do 64 ship = 1, lunit >*/
    i__1 = usrcom_1.lunit;
    for (ship = 1; ship <= i__1; ++ship) {
/*< 	    call getval(5, 0,2678,  org, ship+0, ival ) >*/
	i__2 = ship;
	getval_(&c__5, &c__0, &c__2678, &arrcom_1.org, &i__2, &ival);
/*< 	    if( ival .eq. player ) goto 67 >*/
	if (ival == usrcom_1.player) {
	    goto L67;
	}
/*< 64	continue >*/
/* L64: */
    }
/*< 65	continue >*/
L65:
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 23, 14 ) >*/
    cursor_(&c__23, &c__14);
/*< 	call string(1,'Your forces have been destroyed.^E') >*/
    string_(&c__1, "Your forces have been destroyed.^E", (ftnlen)34);
/*< 	call cursor( 23, 10 ) >*/
    cursor_(&c__23, &c__10);
/*< 	call string(1,'Do you wish to start again (Y/N)? ^B') >*/
    string_(&c__1, "Do you wish to start again (Y/N)? ^B", (ftnlen)36);
/*< 	call chrwat( ichar ) >*/
    chrwat_(&ichar);
/*< 	if( ichar .gt. 91 ) ichar = ichar - 32 >*/
    if (ichar > 91) {
	ichar += -32;
    }
/*< 	ichar = icon( ichar ) >*/
    ichar = icon_(&ichar);
/*< 	if( ichar .eq. 78 ) call exprog >*/
    if (ichar == 78) {
	exprog_();
    }
/*< 	if( ichar .ne. 89 ) goto 65 >*/
    if (ichar != 89) {
	goto L65;
    }
/*< 	goto 72 >*/
    goto L72;
/*< 67	call getval(5, 0,2694,  shiptr, ship, eloc ) >*/
L67:
    getval_(&c__5, &c__0, &c__2694, &arrcom_1.shiptr, &ship, &eloc);
/*< 	call getval(5, 0,2695,  orbit, ship, eorb ) >*/
    getval_(&c__5, &c__0, &c__2695, &arrcom_1.orbit, &ship, &eorb);
/*< 	goto 90 >*/
    goto L90;
/*< 70	call putval(5, 0,2698,  progs, player, ival ) >*/
L70:
    putval_(&c__5, &c__0, &c__2698, &arrcom_1.progs, &usrcom_1.player, &ival);
/*< 72	eloc = iran( lasplc-numstr ) + numstr >*/
L72:
    i__1 = usrcom_1.lasplc - usrcom_1.numstr;
    eloc = iran_(&i__1) + usrcom_1.numstr;
/*< 	call getval(5, 0,2700,  ptype, eloc, ival ) >*/
    getval_(&c__5, &c__0, &c__2700, &arrcom_1.ptype, &eloc, &ival);
/*< 	if( ival .eq. 3 ) goto 72 >*/
    if (ival == 3) {
	goto L72;
    }
/*< 	eorb = 1 >*/
    eorb = 1;
/*< 	call addunt( eloc, 2, ship, lmove ) >*/
    addunt_(&eloc, &c__2, &ship, &lmove);
/*< 	if( .not. lmove ) goto 55 >*/
    if (! lmove) {
	goto L55;
    }
/*< 90	call grafon >*/
L90:
    grafon_();
/*< 	call usrset( 536, ttyspd ) >*/
    usrset_(&c__536, &ttyspd);
/* ***	***************************** */
/* ***	****** BEGIN GAME LOOP ****** */
/* ***	***************************** */
/*< 100	call usrset( 1048, ttyspd ) >*/
L100:
    usrset_(&c__1048, &ttyspd);
/*< 	call usrset( 1049, ttyspd ) >*/
    usrset_(&c__1049, &ttyspd);
/*< 	if(100*igtab(44,9)/igtab(40,9).le.85.or.lprivd) goto 101 >*/
    if (igtab_(&c__44, &c__9) * 100 / igtab_(&c__40, &c__9) <= 85 || lprivd) {
	goto L101;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 21, 12 ) >*/
    cursor_(&c__21, &c__12);
/*< 	call string(1,'It is over styxline.  Try again later.^E') >*/
    string_(&c__1, "It is over styxline.  Try again later.^E", (ftnlen)40);
/*< 	call cease >*/
    cease_();
/*< 101	call getval(5, 0,2721,  useful, 16, ival ) >*/
L101:
    getval_(&c__5, &c__0, &c__2721, &arrcom_1.useful, &c__16, &ival);
/*< 	if( lprivd .or. ival .eq. 0 ) goto 102 >*/
    if (lprivd || ival == 0) {
	goto L102;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 25, 12 ) >*/
    cursor_(&c__25, &c__12);
/*< 	call string(1,'Stand alone.  Try again later.^E') >*/
    string_(&c__1, "Stand alone.  Try again later.^E", (ftnlen)32);
/*< 	call cease >*/
    cease_();
/*< 102	call exunit >*/
L102:
    exunit_();
/*< 	call getval(5, 0,2729,  org, ship, ival ) >*/
    getval_(&c__5, &c__0, &c__2729, &arrcom_1.org, &ship, &ival);
/*< 	if( ival .eq. player ) goto 105 >*/
    if (ival == usrcom_1.player) {
	goto L105;
    }
/*< 	do 103 ship = 1, lunit >*/
    i__1 = usrcom_1.lunit;
    for (ship = 1; ship <= i__1; ++ship) {
/*< 	    call getval(5, 0,2732,  org, ship+0, ival ) >*/
	i__2 = ship;
	getval_(&c__5, &c__0, &c__2732, &arrcom_1.org, &i__2, &ival);
/*< 	    if( ival .eq. player ) goto 104 >*/
	if (ival == usrcom_1.player) {
	    goto L104;
	}
/*< 103	continue >*/
/* L103: */
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 24, 12 ) >*/
    cursor_(&c__24, &c__12);
/*< 	call string(1,'Your forces have been destroyed.^E') >*/
    string_(&c__1, "Your forces have been destroyed.^E", (ftnlen)34);
/*< 	call cease >*/
    cease_();
/*< 104	new = .true. >*/
L104:
    new__ = TRUE_;
/*< 105	call getval(5, 0,2742,  shiptr, ship, cloc ) >*/
L105:
    getval_(&c__5, &c__0, &c__2742, &arrcom_1.shiptr, &ship, &cloc);
/*< 	call getval(5, 0,2743,  shiptr, ship, corb ) >*/
    getval_(&c__5, &c__0, &c__2743, &arrcom_1.shiptr, &ship, &corb);
/*< 	call getval(5, 0,2744,  wstar, cloc, cstar ) >*/
    getval_(&c__5, &c__0, &c__2744, &arrcom_1.wstar, &cloc, &cstar);
/*< 	call getval(5, 0,2745,  hmflag, ship, hypmov ) >*/
    getval_(&c__5, &c__0, &c__2745, &arrcom_1.hmflag, &ship, &hypmov);
/*< 	xtr1 = .false. >*/
    xtr1 = FALSE_;
/*< 	xtr2 = .false. >*/
    xtr2 = FALSE_;
/*< 	if( cloc .ne. oloc .and. hypmov .ne. 0 ) xtr1 = .true. >*/
    if (cloc != oloc && hypmov != 0) {
	xtr1 = TRUE_;
    }
/*< 	if( cstar .ne. ostar .and. hypmov .ne. 0 ) xtr2 = .true. >*/
    if (cstar != ostar && hypmov != 0) {
	xtr2 = TRUE_;
    }
/*< 	if( dtype .eq. 1 .and. xtr1 .ne. oxtr1 ) new = .true. >*/
    if (dtype == 1 && xtr1 != oxtr1) {
	new__ = TRUE_;
    }
/*< 	if( dtype .eq. 2 .and. xtr2 .ne. oxtr2 ) new = .true. >*/
    if (dtype == 2 && xtr2 != oxtr2) {
	new__ = TRUE_;
    }
/*< 	oxtr1 = xtr1 >*/
    oxtr1 = xtr1;
/*< 	oxtr2 = xtr2 >*/
    oxtr2 = xtr2;
/*< 	if( xtr1 .or. xtr2 ) goto 106 >*/
    if (xtr1 || xtr2) {
	goto L106;
    }
/*< 	oloc = cloc >*/
    oloc = cloc;
/*< 	ostar = cstar >*/
    ostar = cstar;
/*< 106	if( .not. new ) goto 110 >*/
L106:
    if (! new__) {
	goto L110;
    }
/*< 	mesflg = 0 >*/
    mescom_1.mesflg = 0;
/*< 	call usrset( 1026, 1 ) >*/
    usrset_(&c__1026, &c__1);
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 1, 2 ) >*/
    cursor_(&c__1, &c__2);
/*< 	call string(1,'ET for ^E') >*/
    string_(&c__1, "ET for ^E", (ftnlen)9);
/*< 	call getval(5, 0,2763,  type, ship, ival ) >*/
    getval_(&c__5, &c__0, &c__2763, &arrcom_1.type__, &ship, &ival);
/*< 	call chrout( tc(ival) ) >*/
    chrout_(&tc[ival - 1]);
/*< 	call number(1, ship ) >*/
    number_(&c__1, &ship);
/*< 	call string(1,':^M^J>^E') >*/
    string_(&c__1, ":^M^J>^E", (ftnlen)8);
/*< 110	call getval(5, 0,2768,  tmtonx, ship, timeto ) >*/
L110:
    getval_(&c__5, &c__0, &c__2768, &arrcom_1.tmtonx, &ship, &timeto);
/*< 	if( .not. new .and. timeto .eq. otimet ) goto 120 >*/
    if (! new__ && timeto == otimet) {
	goto L120;
    }
/*< 	otimet = timeto >*/
    otimet = timeto;
/*< 	call cursor( 14, 2 ) >*/
    cursor_(&c__14, &c__2);
/*< 	if( timeto .eq. 0 ) call string(1,'Ready^E') >*/
    if (timeto == 0) {
	string_(&c__1, "Ready^E", (ftnlen)7);
    }
/*< 	if( timeto .gt. 0 ) call number(2, timeto, 5 ) >*/
    if (timeto > 0) {
	number_(&c__2, &timeto, &c__5);
    }
/*< 120	if( dtype .eq. 1 ) call disens( new, ship, xtr1 ) >*/
L120:
    if (dtype == 1) {
	disens_(&new__, &ship, &xtr1);
    }
/*< 	if( dtype .eq. 2 ) call disys( new, ship, xtr2 ) >*/
    if (dtype == 2) {
	disys_(&new__, &ship, &xtr2);
    }
/*< 	if( dtype .eq. 3 ) call distat( new, ship ) >*/
    if (dtype == 3) {
	distat_(&new__, &ship);
    }
/*< 	if( dtype .eq. 4 ) call disunt( new, untloc, untype ) >*/
    if (dtype == 4) {
	disunt_(&new__, &untloc, &untype);
    }
/*< 	if( dtype .eq. 5 ) call disedt( new, everb, ecode, edest ) >*/
    if (dtype == 5) {
	disedt_(&new__, everb, ecode, edest);
    }
/*< 	if( dtype .eq. 6 ) call dispos( new ) >*/
    if (dtype == 6) {
	dispos_(&new__);
    }
/*< 	if( dtype .eq. 7 ) call displa( new ) >*/
    if (dtype == 7) {
	displa_(&new__);
    }
/*< 	if( dtype .eq. 8 ) call disdbg( new ) >*/
    if (dtype == 8) {
	disdbg_(&new__);
    }
/*< 	call getval(5, 0,2784,  useful, 10, whoto ) >*/
    getval_(&c__5, &c__0, &c__2784, &arrcom_1.useful, &c__10, &whoto);
/*< 	if( whoto .ne. player ) goto 126 >*/
    if (whoto != usrcom_1.player) {
	goto L126;
    }
/*< 	call putval(4, 0,2786,  -1, 0 ) >*/
    putval_(&c__4, &c__0, &c__2786, &c_n1, &c__0);
/*< 	call getval(5, 0,2787,  useful, 11, whofrm ) >*/
    getval_(&c__5, &c__0, &c__2787, &arrcom_1.useful, &c__11, &whofrm);
/*< 	call messag('^G^E') >*/
    messag_("^G^E", (ftnlen)4);
/*< 	call number(2, whofrm, -2 ) >*/
    number_(&c__2, &whofrm, &c_n2);
/*< 	call string(1,': ^E') >*/
    string_(&c__1, ": ^E", (ftnlen)4);
/*< 	do 125 i = 1, 72 >*/
    for (i__ = 1; i__ <= 72; ++i__) {
/*< 	    call getval(5, 0,2792,  mestrn, i+0, ival ) >*/
	i__1 = i__;
	getval_(&c__5, &c__0, &c__2792, &arrcom_1.mestrn, &i__1, &ival);
/*< 	    call putval(4, 0,2793,  -1, 0 ) >*/
	putval_(&c__4, &c__0, &c__2793, &c_n1, &c__0);
/*< 	    if( ival .eq. 0 ) goto 126 >*/
	if (ival == 0) {
	    goto L126;
	}
/*< 	    call chrout( ival ) >*/
	chrout_(&ival);
/*< 125	continue >*/
/* L125: */
    }
/*< 126	continue >*/
L126:
/*< 	if( mesflg .le. 0 ) goto 130 >*/
    if (mescom_1.mesflg <= 0) {
	goto L130;
    }
/*< 	mesflg = mesflg - 1 >*/
    --mescom_1.mesflg;
/*< 	if( mesflg .gt. 0 ) goto 130 >*/
    if (mescom_1.mesflg > 0) {
	goto L130;
    }
/*< 	oblorn = 0 >*/
    oblorn = 0;
/*< 	call cursor( 1, 3 ) >*/
    cursor_(&c__1, &c__3);
/*< 	call irepeat( 32, 80 ) >*/
    irepeat_(&c__32, &c__80);
/*< 130	call getval(5, 0,2806,  empcod, player, ival ) >*/
L130:
    getval_(&c__5, &c__0, &c__2806, &arrcom_1.empcod, &usrcom_1.player, &ival)
	    ;
/*< 	if( ival .eq. 0 ) goto 139 >*/
    if (ival == 0) {
	goto L139;
    }
/*< 	call putval(4, 0,2808,  -1, 0 ) >*/
    putval_(&c__4, &c__0, &c__2808, &c_n1, &c__0);
/*< 	call getval(5, 0,2809,  empdst, player, blorun ) >*/
    getval_(&c__5, &c__0, &c__2809, &arrcom_1.empdst, &usrcom_1.player, &
	    blorun);
/*< 	call getval(5, 0,2810,  empc, player, ipc ) >*/
    getval_(&c__5, &c__0, &c__2810, &arrcom_1.empc, &usrcom_1.player, &ipc);
/*< 	goto( 137, 138, 131, 136 ) ival >*/
    switch ((int)ival) {
	case 1:  goto L137;
	case 2:  goto L138;
	case 3:  goto L131;
	case 4:  goto L136;
    }
/*< 131	if( blorun .eq. oblorn ) goto 139 >*/
L131:
    if (blorun == oblorn) {
	goto L139;
    }
/*< 	do 133 i = 1, 7 >*/
    for (i__ = 1; i__ <= 7; ++i__) {
/*< 	    fpar(i) = 0 >*/
	fpar[i__ - 1] = 0;
/*< 133	continue >*/
/* L133: */
    }
/*< 	call messag('Battle at ^E') >*/
    messag_("Battle at ^E", (ftnlen)12);
/*< 	call ploc( blorun, ipc ) >*/
    ploc_(&blorun, &ipc);
/*< 	call string(1,' Engaged:^E') >*/
    string_(&c__1, " Engaged:^E", (ftnlen)11);
/*< 	do 134 i = 1, lunit >*/
    i__1 = usrcom_1.lunit;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    unum = i >*/
	unum = i__;
/*< 	    call getval(5, 0,2822,  shiptr, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__2822, &arrcom_1.shiptr, &unum, &ival);
/*< 	    if( ival .ne. blorun ) goto 134 >*/
	if (ival != blorun) {
	    goto L134;
	}
/*< 	    call getval(5, 0,2824,  org, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__2824, &arrcom_1.org, &unum, &ival);
/*< 	    if( ival .ne. player ) goto 134 >*/
	if (ival != usrcom_1.player) {
	    goto L134;
	}
/*< 	    call getval(5, 0,2826,  type, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__2826, &arrcom_1.type__, &unum, &ival);
/*< 	    fpar(ival) = fpar(ival) + 1 >*/
	++fpar[ival - 1];
/*< 134	continue >*/
L134:
	;
    }
/*< 	do 135 i = 1, 7 >*/
    for (i__ = 1; i__ <= 7; ++i__) {
/*< 	    if( fpar(i) .eq. 0 ) goto 135 >*/
	if (fpar[i__ - 1] == 0) {
	    goto L135;
	}
/*< 	    call number(2, fpar(i), 5 ) >*/
	number_(&c__2, &fpar[i__ - 1], &c__5);
/*< 	    call chrout( tc(i) ) >*/
	chrout_(&tc[i__ - 1]);
/*< 135	continue >*/
L135:
	;
    }
/*< 	oblorn = blorun >*/
    oblorn = blorun;
/*< 	goto 139 >*/
    goto L139;
/*< 136	if( blorun .eq. oblorn ) goto 139 >*/
L136:
    if (blorun == oblorn) {
	goto L139;
    }
/*< 	call messag('^G*********** Revolt at ^E') >*/
    messag_("^G*********** Revolt at ^E", (ftnlen)26);
/*< 	call ploc( blorun, 0 ) >*/
    ploc_(&blorun, &c__0);
/*< 	call string(1,' ***********^E') >*/
    string_(&c__1, " ***********^E", (ftnlen)14);
/*< 	oblorn = blorun >*/
    oblorn = blorun;
/*< 	goto 139 >*/
    goto L139;
/*< 137	call messag('Error ^E') >*/
L137:
    messag_("Error ^E", (ftnlen)8);
/*< 	call punit( blorun ) >*/
    punit_(&blorun);
/*< 	call string(1,' @ Ins. #^E') >*/
    string_(&c__1, " @ Ins. #^E", (ftnlen)11);
/*< 	call getval(5, 0,2847,  wprogr, blorun, wp ) >*/
    getval_(&c__5, &c__0, &c__2847, &arrcom_1.wprogr, &blorun, &wp);
/*< 	call getval(5, 0,2848,  stradr, wp, addr ) >*/
    getval_(&c__5, &c__0, &c__2848, &arrcom_1.stradr, &wp, &addr__);
/*< 	addr = addr + ipc - 1 >*/
    addr__ = addr__ + ipc - 1;
/*< 	call getval(5, 0,2850,  nverb, addr, iv ) >*/
    getval_(&c__5, &c__0, &c__2850, &arrcom_1.nverb, &addr__, &iv);
/*< 	call getval(5, 0,2851,  ncode, addr, ic ) >*/
    getval_(&c__5, &c__0, &c__2851, &arrcom_1.ncode, &addr__, &ic);
/*< 	call getval(5, 0,2852,  ndest, addr, id ) >*/
    getval_(&c__5, &c__0, &c__2852, &arrcom_1.ndest, &addr__, &id);
/*< 	call prinst( ipc, iv, ic, id ) >*/
    prinst_(&ipc, &iv, &ic, &id);
/*< 	goto 139 >*/
    goto L139;
/*< 138	call messag('Inform ^E') >*/
L138:
    messag_("Inform ^E", (ftnlen)9);
/*< 	call getval(5, 0,2857,  empinf, player, ival ) >*/
    getval_(&c__5, &c__0, &c__2857, &arrcom_1.empinf, &usrcom_1.player, &ival)
	    ;
/*< 	call string(3, ival, 6, 6 ) >*/
    string_(&c__3, &ival, &c__6, &c__6);
/*< 	if( ipc .ne. 0 ) call number(2, ipc, 3 ) >*/
    if (ipc != 0) {
	number_(&c__2, &ipc, &c__3);
    }
/*< 	call string(1,' from ^E') >*/
    string_(&c__1, " from ^E", (ftnlen)8);
/*< 	call number(1, blorun ) >*/
    number_(&c__1, &blorun);
/*< 	call getval(5, 0,2862,  type, blorun, ival ) >*/
    getval_(&c__5, &c__0, &c__2862, &arrcom_1.type__, &blorun, &ival);
/*< 	call chrout(tc(ival)) >*/
    chrout_(&tc[ival - 1]);
/*< 	call string(1,' at ^E') >*/
    string_(&c__1, " at ^E", (ftnlen)6);
/*< 	call getval(5, 0,2865,  shiptr, blorun, ival ) >*/
    getval_(&c__5, &c__0, &c__2865, &arrcom_1.shiptr, &blorun, &ival);
/*< 	call getval(5, 0,2866,  orbit, blorun, i ) >*/
    getval_(&c__5, &c__0, &c__2866, &arrcom_1.orbit, &blorun, &i__);
/*< 	call ploc( ival, i ) >*/
    ploc_(&ival, &i__);
/*< 139	new = .false. >*/
L139:
    new__ = FALSE_;
/*< 	tmtowa = max0( tmtowa-1, 0 ) >*/
/* Computing MAX */
    i__1 = tmtowa - 1;
    tmtowa = max(i__1,0);
/*< 	if( tmtowa .gt. 0 ) goto 100 >*/
    if (tmtowa > 0) {
	goto L100;
    }
/*< 	call outbuf( 1 ) >*/
    outbuf_(&c__1);
/*< 	call comand( ichar, com, len, lcara ) >*/
    comand_(&ichar, com, &len, lcara);
/*< 	if( ichar .eq. -1 ) goto 100 >*/
    if (ichar == -1) {
	goto L100;
    }
/*< 	call parse( com, len, par, itoks, 20 ) >*/
    parse_(com, &len, par, &itoks, &c__20);
/*< 	if( itoks .eq. 0 ) goto 100 >*/
    if (itoks == 0) {
	goto L100;
    }
/*< 	if( itoks .eq. 20 ) goto 141 >*/
    if (itoks == 20) {
	goto L141;
    }
/*< 	do 140 j = itoks+1, 20 >*/
    for (j = itoks + 1; j <= 20; ++j) {
/*< 	    par(j) = 0 >*/
	par[j - 1] = 0;
/*< 140	continue >*/
/* L140: */
    }
/*< 141	continue >*/
L141:
/*< 	icom = isrsix( comnam, par(1), 25 ) >*/
    icom = isrsix_(comnam, par, &c__25);
/*< 	if( icom .eq. 0 ) goto 200 >*/
    if (icom == 0) {
	goto L200;
    }
/*< 	goto( >*/
    switch ((int)icom) {
	case 1:  goto L145;
	case 2:  goto L145;
	case 3:  goto L150;
	case 4:  goto L150;
	case 5:  goto L157;
	case 6:  goto L158;
	case 7:  goto L160;
	case 8:  goto L161;
	case 9:  goto L162;
	case 10:  goto L164;
	case 11:  goto L166;
	case 12:  goto L170;
	case 13:  goto L170;
	case 14:  goto L180;
	case 15:  goto L184;
	case 16:  goto L190;
	case 17:  goto L195;
	case 18:  goto L250;
	case 19:  goto L250;
	case 20:  goto L250;
	case 21:  goto L1102;
	case 22:  goto L1102;
	case 23:  goto L1104;
	case 24:  goto L1104;
	case 25:  goto L1300;
    }
/* ***	DISPLA COMMAND */
/*< 145	if( par(2) .eq. 0 ) new = .true. >*/
L145:
    if (par[1] == 0) {
	new__ = TRUE_;
    }
/*< 	if( par(2) .eq. 0 ) goto 100 >*/
    if (par[1] == 0) {
	goto L100;
    }
/*< 	idtype = isrsix( disnam, par(2), 8 ) >*/
    idtype = isrsix_(disnam, &par[1], &c__8);
/*< 	if( idtype .eq. 8 .and. .not. lprivd ) idtype = 0 >*/
    if (idtype == 8 && ! lprivd) {
	idtype = 0;
    }
/*< 	if( idtype .ne. 0 ) goto 146 >*/
    if (idtype != 0) {
	goto L146;
    }
/*< 	call messag('Unknown display type: ^E') >*/
    messag_("Unknown display type: ^E", (ftnlen)24);
/*< 	call string(3, par(2), 6, 6 ) >*/
    string_(&c__3, &par[1], &c__6, &c__6);
/*< 	goto 100 >*/
    goto L100;
/*< 146	if( idtype .ne. 4 ) goto 147 >*/
L146:
    if (idtype != 4) {
	goto L147;
    }
/*< 	i = 3 >*/
    i__ = 3;
/*< 	untype = par(3) >*/
    untype = par[2];
/*< 	ival = firstc(untype) >*/
    ival = firstc_(&untype);
/*< 	untype = iserch( tc, icon( untype+32+ival ), 7 ) >*/
    i__2 = untype + 32 + ival;
    i__1 = icon_(&i__2);
    untype = iserch_(tc, &i__1, &c__7);
/*< 	if( untype .ne. 0 ) i = i + 1 >*/
    if (untype != 0) {
	++i__;
    }
/*< 	untloc = 0 >*/
    untloc = 0;
/*< 	if( par(i) .eq. isxbit('ALL   ~') ) goto 148 >*/
    if (par[i__ - 1] == isxbit_("ALL   ~", (ftnlen)7)) {
	goto L148;
    }
/*< 	call parloc( par(i), cloc, corb, jmperr, untloc, ival ) >*/
    parloc_(&par[i__ - 1], &cloc, &corb, &jmperr, &untloc, &ival);
/*< 	if( jmperr ) untloc = 0 >*/
    if (jmperr) {
	untloc = 0;
    }
/*< 	goto 148 >*/
    goto L148;
/*< 147	i = 0 >*/
L147:
    i__ = 0;
/*< 	if( itoks .ge. 3 ) call getnum(4, com, len, i, 10 ) >*/
    if (itoks >= 3) {
	getnum_(&c__4, com, &len, &i__, &c__10);
    }
/*< 	if( i .lt. 0 .or. i .gt. lunit ) goto 149 >*/
    if (i__ < 0 || i__ > usrcom_1.lunit) {
	goto L149;
    }
/*< 	if( i.eq.0 .and. idtype.eq.4 .and. par(3).ne.0 ) goto 147 >*/
    if (i__ == 0 && idtype == 4 && par[2] != 0) {
	goto L147;
    }
/*< 	if( i .eq. 0 ) i = ship >*/
    if (i__ == 0) {
	i__ = ship;
    }
/*< 	call getval(5, 0,2917,  org, i, ival ) >*/
    getval_(&c__5, &c__0, &c__2917, &arrcom_1.org, &i__, &ival);
/*< 	if( ival .ne. player ) goto 149 >*/
    if (ival != usrcom_1.player) {
	goto L149;
    }
/*< 	ship = i >*/
    ship = i__;
/*< 148	dtype = idtype >*/
L148:
    dtype = idtype;
/*< 	new = .true. >*/
    new__ = TRUE_;
/*< 	goto 100 >*/
    goto L100;
/*< 149	call messag('Unit is not in fleet.^E') >*/
L149:
    messag_("Unit is not in fleet.^E", (ftnlen)23);
/*< 	new = .false. >*/
    new__ = FALSE_;
/*< 	goto 100 >*/
    goto L100;
/* ***	MISSION COMMAND */
/*< 150	do 155 i = 1, 40 >*/
L150:
    for (i__ = 1; i__ <= 40; ++i__) {
/*< 	    everb(i) = 0 >*/
	everb[i__ - 1] = 0;
/*< 	    ecode(i) = 0 >*/
	ecode[i__ - 1] = 0;
/*< 	    edest(i) = 0 >*/
	edest[i__ - 1] = 0;
/*< 155	continue >*/
/* L155: */
    }
/*< 	if( dtype .eq. 5 ) new = .true. >*/
    if (dtype == 5) {
	new__ = TRUE_;
    }
/*< 	call getval(5, 0,2936,  shiptr, ship, eloc ) >*/
    getval_(&c__5, &c__0, &c__2936, &arrcom_1.shiptr, &ship, &eloc);
/*< 	call getval(5, 0,2937,  orbit, ship, eorb ) >*/
    getval_(&c__5, &c__0, &c__2937, &arrcom_1.orbit, &ship, &eorb);
/*< 	call getnum(4, com, len, miss, 10 ) >*/
    getnum_(&c__4, com, &len, &miss, &c__10);
/*< 	if( miss .le. 0 .or. miss .gt. lunit ) goto 100 >*/
    if (miss <= 0 || miss > usrcom_1.lunit) {
	goto L100;
    }
/*< 	call getval(5, 0,2940,  org, miss, ival ) >*/
    getval_(&c__5, &c__0, &c__2940, &arrcom_1.org, &miss, &ival);
/*< 	if( ival .ne. player ) goto 100 >*/
    if (ival != usrcom_1.player) {
	goto L100;
    }
/*< 	call getval(5, 0,2942,  shiptr, miss, eloc ) >*/
    getval_(&c__5, &c__0, &c__2942, &arrcom_1.shiptr, &miss, &eloc);
/*< 	call getval(5, 0,2943,  shiptr, miss, eorb ) >*/
    getval_(&c__5, &c__0, &c__2943, &arrcom_1.shiptr, &miss, &eorb);
/*< 	call getval(5, 0,2944,  wprogr, miss, ival ) >*/
    getval_(&c__5, &c__0, &c__2944, &arrcom_1.wprogr, &miss, &ival);
/*< 	if( ival .eq. 0 ) goto 100 >*/
    if (ival == 0) {
	goto L100;
    }
/*< 	call getval(5, 0,2946,  stradr, ival, addr ) >*/
    getval_(&c__5, &c__0, &c__2946, &arrcom_1.stradr, &ival, &addr__);
/*< 	call getval(5, 0,2947,  lenprg, ival, len ) >*/
    getval_(&c__5, &c__0, &c__2947, &arrcom_1.lenprg, &ival, &len);
/*< 	if( len .eq. 0 .or. addr .eq. 0 ) goto 100 >*/
    if (len == 0 || addr__ == 0) {
	goto L100;
    }
/*< 	do 156 i = 1, len >*/
    i__1 = len;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call getval(5, 0,2950,  nverb, addr, everb(i) ) >*/
	getval_(&c__5, &c__0, &c__2950, &arrcom_1.nverb, &addr__, &everb[i__ 
		- 1]);
/*< 	    call getval(5, 0,2951,  ncode, addr, ecode(i) ) >*/
	getval_(&c__5, &c__0, &c__2951, &arrcom_1.ncode, &addr__, &ecode[i__ 
		- 1]);
/*< 	    call getval(5, 0,2952,  ndest, addr, edest(i) ) >*/
	getval_(&c__5, &c__0, &c__2952, &arrcom_1.ndest, &addr__, &edest[i__ 
		- 1]);
/*< 	    addr = addr + 1 >*/
	++addr__;
/*< 156	continue >*/
/* L156: */
    }
/*< 	goto 100 >*/
    goto L100;
/* ***	STAND ALONE COMMAND	(KICK EVERYBODY ELSE OUT OF GAME) */
/*< 157	if( .not. lprivd ) goto 200 >*/
L157:
    if (! lprivd) {
	goto L200;
    }
/*< 	call getval(5, 0,2960,  useful, 16, ival ) >*/
    getval_(&c__5, &c__0, &c__2960, &arrcom_1.useful, &c__16, &ival);
/*< 	call putval(5, 0,2961,  useful, 16, 1-ival ) >*/
    i__1 = 1 - ival;
    putval_(&c__5, &c__0, &c__2961, &arrcom_1.useful, &c__16, &i__1);
/*< 	goto 100 >*/
    goto L100;
/* ***	WAIT COMMAND	(TO HELP CREATE THE EMPIRE) */
/*< 158	if( .not. lprivd ) goto 200 >*/
L158:
    if (! lprivd) {
	goto L200;
    }
/*< 	call getval(5, 0,2967,  useful, 16, ival ) >*/
    getval_(&c__5, &c__0, &c__2967, &arrcom_1.useful, &c__16, &ival);
/*< 	if( ival .eq. 0 ) goto 200 >*/
    if (ival == 0) {
	goto L200;
    }
/*< 	call getval(5, 0,2969,  useful, 17, ival ) >*/
    getval_(&c__5, &c__0, &c__2969, &arrcom_1.useful, &c__17, &ival);
/*< 	if( ival .eq. 0 ) goto 200 >*/
    if (ival == 0) {
	goto L200;
    }
/*< 	call getnum(4, com, len, tmtowa, 10 ) >*/
    getnum_(&c__4, com, &len, &tmtowa, &c__10);
/*< 	if( tmtowa .le. 0 ) tmtowa = 1 >*/
    if (tmtowa <= 0) {
	tmtowa = 1;
    }
/*< 	goto 100 >*/
    goto L100;
/* ***	SAVE COMMAND	(ALLOW A NON-EMPIRE GAME TO BE SAVED) */
/*< 160	if( .not. lprivd ) goto 200 >*/
L160:
    if (! lprivd) {
	goto L200;
    }
/*< 	call getval(5, 0,2978,  useful, 17, ival ) >*/
    getval_(&c__5, &c__0, &c__2978, &arrcom_1.useful, &c__17, &ival);
/*< 	if( ival .eq. 0 ) call putval(5, 0,2979,  useful, 17, 1 ) >*/
    if (ival == 0) {
	putval_(&c__5, &c__0, &c__2979, &arrcom_1.useful, &c__17, &c__1);
    }
/*< 	goto 100 >*/
    goto L100;
/* ***	DONE COMMAND	(SAVE EMPIRE GAME, LET USERS IN) */
/*< 161	call getval(5, 0,2984,  useful, 16, ival ) >*/
L161:
    getval_(&c__5, &c__0, &c__2984, &arrcom_1.useful, &c__16, &ival);
/*< 	if( ival .eq. 0 ) goto 162 >*/
    if (ival == 0) {
	goto L162;
    }
/*< 	call getval(5, 0,2986,  useful, 17, ival ) >*/
    getval_(&c__5, &c__0, &c__2986, &arrcom_1.useful, &c__17, &ival);
/*< 	if( ival .eq. 0 ) goto 162 >*/
    if (ival == 0) {
	goto L162;
    }
/*< 	call putval(4, 0,2988,  -1, 2 ) >*/
    putval_(&c__4, &c__0, &c__2988, &c_n1, &c__2);
/*< 	call putval(5, 0,2989,  progs, player, 262143 ) >*/
    putval_(&c__5, &c__0, &c__2989, &arrcom_1.progs, &usrcom_1.player, &
	    c_b2912);
/* ***	EXIT COMMAND */
/*< 162	call putval(5, 0,2993,  ncstru, player, 63 ) >*/
L162:
    putval_(&c__5, &c__0, &c__2993, &arrcom_1.ncstru, &usrcom_1.player, &
	    c__63);
/*< 	call cease >*/
    cease_();
/*< 	goto 100 >*/
    goto L100;
/* ***	GAG COMMAND */
/*< 164	call usrset( 1035, 0 ) >*/
L164:
    usrset_(&c__1035, &c__0);
/*< 	call messag('Terminal is now gagged.^E') >*/
    messag_("Terminal is now gagged.^E", (ftnlen)25);
/*< 	goto 100 >*/
    goto L100;
/* ***	UNGAG COMMAND */
/*< 166	call usrset( 1035, 1 ) >*/
L166:
    usrset_(&c__1035, &c__1);
/*< 	call messag('Terminal is no longer gagged.^E') >*/
    messag_("Terminal is no longer gagged.^E", (ftnlen)31);
/*< 	goto 100 >*/
    goto L100;
/* ***	INSERT COMMAND */
/*< 170	call getnum(4, com, len, line, 10 ) >*/
L170:
    getnum_(&c__4, com, &len, &line, &c__10);
/*< 	if( line .lt. 1 .or. line .gt. 40 ) goto 175 >*/
    if (line < 1 || line > 40) {
	goto L175;
    }
/*< 	call genins( par(3), eloc, eorb, enloc, enorb, ev, ec, ed ) >*/
    genins_(&par[2], &eloc, &eorb, &enloc, &enorb, &ev, &ec, &ed);
/*< 	if( ev .lt. 0 ) goto 100 >*/
    if (ev < 0) {
	goto L100;
    }
/*< 	everb(line) = ev >*/
    everb[line - 1] = ev;
/*< 	ecode(line) = ec >*/
    ecode[line - 1] = ec;
/*< 	edest(line) = ed >*/
    edest[line - 1] = ed;
/*< 	eloc = enloc >*/
    eloc = enloc;
/*< 	eorb = enorb >*/
    eorb = enorb;
/*< 	goto 100 >*/
    goto L100;
/*< 175	call messag('Line out of bounds.^E') >*/
L175:
    messag_("Line out of bounds.^E", (ftnlen)21);
/*< 	goto 100 >*/
    goto L100;
/* ***	DELETE COMMAND */
/*< 180	ca >*/
L180:
    getnum_(&c__42, com, &len, par, &c__10, &par[1], &c__10, &par[2], &c__10, 
	    &par[3], &c__10, &par[4], &c__10, &par[5], &c__10, &par[6], &
	    c__10, &par[7], &c__10, &par[8], &c__10, &par[9], &c__10, &par[10]
	    , &c__10, &par[11], &c__10, &par[12], &c__10, &par[13], &c__10, &
	    par[14], &c__10, &par[15], &c__10, &par[16], &c__10, &par[17], &
	    c__10, &par[18], &c__10, &par[19], &c__10);
/*< 	do 181 i = 1, 20 >*/
    for (i__ = 1; i__ <= 20; ++i__) {
/*< 	    line = par(i) >*/
	line = par[i__ - 1];
/*< 	    if( line .eq. 0 ) goto 100 >*/
	if (line == 0) {
	    goto L100;
	}
/*< 	    if( line .lt. 1 .or. line .gt. 40 ) goto 175 >*/
	if (line < 1 || line > 40) {
	    goto L175;
	}
/*< 	    everb(line) = 0 >*/
	everb[line - 1] = 0;
/*< 	    ecode(line) = 0 >*/
	ecode[line - 1] = 0;
/*< 	    edest(line) = 0 >*/
	edest[line - 1] = 0;
/*< 181	continue >*/
/* L181: */
    }
/*< 	goto 100 >*/
    goto L100;
/* ***	TRANSFER COMMAND */
/*< 184	call getnum(8, com, len, par(1),10, par(2),10, par(3),10 ) >*/
L184:
    getnum_(&c__8, com, &len, par, &c__10, &par[1], &c__10, &par[2], &c__10);
/*< 	if( par(3) .eq. 0 ) par(3) = par(2) >*/
    if (par[2] == 0) {
	par[2] = par[1];
    }
/*< 	if(pa >*/
    if (par[0] >= 1 && par[0] <= 40 && par[0] + par[2] - par[1] <= 40 && par[
	    1] >= 0 && par[1] <= par[2] && par[2] <= 40) {
	goto L185;
    }
/*< 	call messag('Transfer line numbers out of range.^E') >*/
    messag_("Transfer line numbers out of range.^E", (ftnlen)37);
/*< 	goto 100 >*/
    goto L100;
/*< 185	if( par(1) .gt. par(2) ) goto 186 >*/
L185:
    if (par[0] > par[1]) {
	goto L186;
    }
/*< 	j = par(2) >*/
    j = par[1];
/*< 	k = par(3) >*/
    k = par[2];
/*< 	line = par(1) >*/
    line = par[0];
/*< 	ival = 1 >*/
    ival = 1;
/*< 	goto 187 >*/
    goto L187;
/*< 186	j = par(3) >*/
L186:
    j = par[2];
/*< 	k = par(2) >*/
    k = par[1];
/*< 	line = par(1) + par(3) - par(2) >*/
    line = par[0] + par[2] - par[1];
/*< 	ival = -1 >*/
    ival = -1;
/*< 187	do 188 i = j, k, ival >*/
L187:
    i__1 = k;
    i__2 = ival;
    for (i__ = j; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
/*< 	    everb(line) = everb(i) >*/
	everb[line - 1] = everb[i__ - 1];
/*< 	    everb(i) = 0 >*/
	everb[i__ - 1] = 0;
/*< 	    ecode(line) = ecode(i) >*/
	ecode[line - 1] = ecode[i__ - 1];
/*< 	    ecode(i) = 0 >*/
	ecode[i__ - 1] = 0;
/*< 	    edest(line) = edest(i) >*/
	edest[line - 1] = edest[i__ - 1];
/*< 	    edest(i) = 0 >*/
	edest[i__ - 1] = 0;
/*< 	    line = line + ival >*/
	line += ival;
/*< 188	continue >*/
/* L188: */
    }
/*< 	do 189 i = 1, 40 >*/
    for (i__ = 1; i__ <= 40; ++i__) {
/*< 	    i >*/
	if ((everb[i__ - 1] == 8 || everb[i__ - 1] == 9) && edest[i__ - 1] >= 
		par[1] && edest[i__ - 1] <= par[2]) {
	    edest[i__ - 1] = edest[i__ - 1] - par[1] + par[0];
	}
/*< 189	continue >*/
/* L189: */
    }
/*< 	goto 100 >*/
    goto L100;
/* ***	NEWTAC COMMAND */
/*< 190	call getnum(8, com, len, tac(1),10, tac(2),10, tac(3),10 ) >*/
L190:
    getnum_(&c__8, com, &len, tac, &c__10, &tac[1], &c__10, &tac[2], &c__10);
/*< 	do 192 i = 1, 3 >*/
    for (i__ = 1; i__ <= 3; ++i__) {
/*< 	    tac(i) = max0( 0, tac(i) ) >*/
/* Computing MAX */
	i__2 = 0, i__1 = tac[i__ - 1];
	tac[i__ - 1] = max(i__2,i__1);
/*< 192	continue >*/
/* L192: */
    }
/*< 	goto 100 >*/
    goto L100;
/* ***	NEWPC COMMAND */
/*< 195	call getnum(4, com, len, newpcv, 10 ) >*/
L195:
    getnum_(&c__4, com, &len, &newpcv, &c__10);
/*< 	if( newpcv .lt. 0 .or. newpcv .gt. 40 ) newpcv = 0 >*/
    if (newpcv < 0 || newpcv > 40) {
	newpcv = 0;
    }
/*< 	goto 100 >*/
    goto L100;
/* ***	NOT IN COMMAND LIST.  EITHER SNN, CNNNN OR DIRECT COMMAND */
/*< 200	call convrt( par(1), 6, 6, fpar, 1 ) >*/
L200:
    convrt_(par, &c__6, &c__6, fpar, &c__1);
/*< 	call getnum(4, fpar(2), 5, unum, 10 ) >*/
    getnum_(&c__4, &fpar[1], &c__5, &unum, &c__10);
/* ***	TRY SNN (SEND) COMMAND */
/*< 	if( fpar(1).ne.83.or.unum.lt.1.or.unum.gt.nprogs) goto 210 >*/
    if (fpar[0] != 83 || unum < 1 || unum > usrcom_1.nprogs) {
	goto L210;
    }
/*< 	i = iserch( com, 32, len ) >*/
    i__ = iserch_(com, &c__32, &len);
/*< 	if( i .eq. 0 .or. i .ge. len ) goto 100 >*/
    if (i__ == 0 || i__ >= len) {
	goto L100;
    }
/*< 	if( len-i .gt. 71 ) len = i+71 >*/
    if (len - i__ > 71) {
	len = i__ + 71;
    }
/*< 	do 205 j = i, len >*/
    i__2 = len;
    for (j = i__; j <= i__2; ++j) {
/*< 	    call putval(5, 0,3106,  mestrn, j-i+1, icon(lcara(j)) ) >*/
	i__1 = j - i__ + 1;
	i__3 = icon_(&lcara[j - 1]);
	putval_(&c__5, &c__0, &c__3106, &arrcom_1.mestrn, &i__1, &i__3);
/*< 205	continue >*/
/* L205: */
    }
/*< 	call putval(5, 0,3108,  useful, 10, unum ) >*/
    putval_(&c__5, &c__0, &c__3108, &arrcom_1.useful, &c__10, &unum);
/*< 	call putval(5, 0,3109,  useful, 11, player ) >*/
    putval_(&c__5, &c__0, &c__3109, &arrcom_1.useful, &c__11, &
	    usrcom_1.player);
/*< 	com(1) = 42 >*/
    com[0] = 42;
/*< 	goto 100 >*/
    goto L100;
/* ***	TRY CNNNN (COMMAND COMMAND) */
/*< 210	if( fpar(1) .ne. 67 .or. unum .eq. 0 ) goto 220 >*/
L210:
    if (fpar[0] != 67 || unum == 0) {
	goto L220;
    }
/*< 	if( unum .lt. 0 .or. unum .gt. lunit ) goto 149 >*/
    if (unum < 0 || unum > usrcom_1.lunit) {
	goto L149;
    }
/*< 	call getval(5, 0,3117,  org, unum, ival ) >*/
    getval_(&c__5, &c__0, &c__3117, &arrcom_1.org, &unum, &ival);
/*< 	if( ival .ne. player ) goto 149 >*/
    if (ival != usrcom_1.player) {
	goto L149;
    }
/*< 	i = 2 >*/
    i__ = 2;
/*< 	goto 230 >*/
    goto L230;
/* ***	TRY DIRECT COMMAND */
/*< 220	unum = ship >*/
L220:
    unum = ship;
/*< 	i = 1 >*/
    i__ = 1;
/*< 230	call getval(5, 0,3127,  shiptr, unum, sloc ) >*/
L230:
    getval_(&c__5, &c__0, &c__3127, &arrcom_1.shiptr, &unum, &sloc);
/*< 	call getval(5, 0,3128,  shiptr, unum, sorb ) >*/
    getval_(&c__5, &c__0, &c__3128, &arrcom_1.shiptr, &unum, &sorb);
/*< 	call genins( par(i), sloc, sorb, i, j, ev, ec, ed ) >*/
    genins_(&par[i__ - 1], &sloc, &sorb, &i__, &j, &ev, &ec, &ed);
/*< 	if( ev .lt. 0 ) goto 100 >*/
    if (ev < 0) {
	goto L100;
    }
/*< 	mltisp = .false. >*/
    mltisp = FALSE_;
/*< 	ilen = 1 >*/
    ilen = 1;
/*< 	goto 1000 >*/
    goto L1000;
/* ***	ORDER COMMAND */
/*< 250	ilen = 0 >*/
L250:
    ilen = 0;
/*< 	do 275 i = 1, 40 >*/
    for (i__ = 1; i__ <= 40; ++i__) {
/*< 	    if( everb(i) .ne. 0 ) ilen = i >*/
	if (everb[i__ - 1] != 0) {
	    ilen = i__;
	}
/*< 275	continue >*/
/* L275: */
    }
/*< 	mltisp = .true. >*/
    mltisp = TRUE_;
/*< 1000	icom = 10000			! icom = ns1714132329sordns1714132329 >*/
L1000:
    icom = 10000;
/*< 	call messag('Orders sent to: ^E') >*/
    messag_("Orders sent to: ^E", (ftnlen)18);
/*< 1010	call getval(5, 0,3146,  useful, 7, whoinl ) >*/
L1010:
    getval_(&c__5, &c__0, &c__3146, &arrcom_1.useful, &c__7, &whoinl);
/*< 	if( whoinl .eq. 0 )  goto 1030 >*/
    if (whoinl == 0) {
	goto L1030;
    }
/*< 	call getval(5, 0,3148,  ncstru, whoinl, ival ) >*/
    getval_(&c__5, &c__0, &c__3148, &arrcom_1.ncstru, &whoinl, &ival);
/*< 	if( ival .eq. 63 )  goto 1030 >*/
    if (ival == 63) {
	goto L1030;
    }
/*< 	call addval(4, 0,3150,  -1, 1 ) >*/
    addval_(&c__4, &c__0, &c__3150, &c_n1, &c__1);
/*< 	call putval(5, 0,3151,  ncstru, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__3151, &arrcom_1.ncstru, &usrcom_1.player, &c__0)
	    ;
/*< 	call nap( 500, 4 ) >*/
    nap_(&c__500, &c__4);
/*< 	goto 1010 >*/
    goto L1010;
/*< 1030	call putval(5, 0,3155,  useful, 7, player ) >*/
L1030:
    putval_(&c__5, &c__0, &c__3155, &arrcom_1.useful, &c__7, &usrcom_1.player)
	    ;
/*< 	call getval(5, 0,3156,  useful, 8, lprogr ) >*/
    getval_(&c__5, &c__0, &c__3156, &arrcom_1.useful, &c__8, &lprogr);
/*< 	prgnum = 0 >*/
    prgnum = 0;
/*< 	addr = 0 >*/
    addr__ = 0;
/*< 	if( lprogr .eq. 0 )  goto 1061 >*/
    if (lprogr == 0) {
	goto L1061;
    }
/*< 	do 1060 i = 1, lprogr >*/
    i__2 = lprogr;
    for (i__ = 1; i__ <= i__2; ++i__) {
/*< 	    fpnum = i >*/
	fpnum = i__;
/*< 	    call getval(5, 0,3162,  stradr, fpnum, addr ) >*/
	getval_(&c__5, &c__0, &c__3162, &arrcom_1.stradr, &fpnum, &addr__);
/*< 	    call getval(5, 0,3163,  lenprg, fpnum, nlen ) >*/
	getval_(&c__5, &c__0, &c__3163, &arrcom_1.lenprg, &fpnum, &nlen);
/*< 	    if( nlen .lt. ilen ) goto 1060 >*/
	if (nlen < ilen) {
	    goto L1060;
	}
/*< 	    if( nlen .gt. ilen ) goto 1050 >*/
	if (nlen > ilen) {
	    goto L1050;
	}
/*< 	    if( ilen .eq. 0 )  goto 1041 >*/
	if (ilen == 0) {
	    goto L1041;
	}
/*< 	    do 1040 j = 1, ilen >*/
	i__1 = ilen;
	for (j = 1; j <= i__1; ++j) {
/*< 		call getval(5, 0,3168,  nverb, addr, ival ) >*/
	    getval_(&c__5, &c__0, &c__3168, &arrcom_1.nverb, &addr__, &ival);
/*< 		if( mltisp .and. ival .ne. everb(j) )  goto 1050 >*/
	    if (mltisp && ival != everb[j - 1]) {
		goto L1050;
	    }
/*< 		if( .not. mltisp .and. ival .ne. ev )  goto 1050 >*/
	    if (! mltisp && ival != ev) {
		goto L1050;
	    }
/*< 		call getval(5, 0,3171,  ncode, addr, ival ) >*/
	    getval_(&c__5, &c__0, &c__3171, &arrcom_1.ncode, &addr__, &ival);
/*< 		if( mltisp .and. ival .ne. ecode(j) )  goto 1050 >*/
	    if (mltisp && ival != ecode[j - 1]) {
		goto L1050;
	    }
/*< 		if( .not. mltisp .and. ival .ne. ec )  goto 1050 >*/
	    if (! mltisp && ival != ec) {
		goto L1050;
	    }
/*< 		call getval(5, 0,3174,  ndest, addr, ival ) >*/
	    getval_(&c__5, &c__0, &c__3174, &arrcom_1.ndest, &addr__, &ival);
/*< 		if( mltisp .and. ival .ne. edest(j) )  goto 1050 >*/
	    if (mltisp && ival != edest[j - 1]) {
		goto L1050;
	    }
/*< 		if( .not. mltisp .and. ival .ne. ed )  goto 1050 >*/
	    if (! mltisp && ival != ed) {
		goto L1050;
	    }
/*< 		addr = addr + 1 >*/
	    ++addr__;
/*< 1040	    continue >*/
/* L1040: */
	}
/*< 1041	    continue >*/
L1041:
/*< 	    prgnum = fpnum >*/
	prgnum = fpnum;
/*< 	    goto 1101 >*/
	goto L1101;
/*< 1050	    call getval(5, 0,3183,  numusr, fpnum, ival ) >*/
L1050:
	getval_(&c__5, &c__0, &c__3183, &arrcom_1.numusr, &fpnum, &ival);
/*< 	    if( ival .gt. 0 ) goto 1060 >*/
	if (ival > 0) {
	    goto L1060;
	}
/*< 	    if( prgnum .gt. 0 ) goto 1060 >*/
	if (prgnum > 0) {
	    goto L1060;
	}
/*< 	    prgnum = fpnum >*/
	prgnum = fpnum;
/*< 	    if( nlen .ne. ilen ) prgnum = -prgnum >*/
	if (nlen != ilen) {
	    prgnum = -prgnum;
	}
/*< 	    flen = nlen >*/
	flen = nlen;
/*< 1060	continue >*/
L1060:
	;
    }
/*< 1061	continue >*/
L1061:
/*< 	if( prgnum .ne. 0 )  goto 1070 >*/
    if (prgnum != 0) {
	goto L1070;
    }
/*< 	call addval(5, 0,3193,  useful, 8, 1 ) >*/
    addval_(&c__5, &c__0, &c__3193, &arrcom_1.useful, &c__8, &c__1);
/*< 	prgnum = lprogr + 1 >*/
    prgnum = lprogr + 1;
/*< 	if( prgnum .gt. maxprg ) call bugmsg('LPROGR>MAXPRG^E',0,0) >*/
    if (prgnum > usrcom_1.maxprg) {
	bugmsg_("LPROGR>MAXPRG^E", &c__0, &c__0, (ftnlen)15);
    }
/*< 	call putval(5, 0,3196,  lenprg, prgnum, ilen ) >*/
    putval_(&c__5, &c__0, &c__3196, &arrcom_1.lenprg, &prgnum, &ilen);
/*< 	call getval(5, 0,3197,  useful, 9, lmem ) >*/
    getval_(&c__5, &c__0, &c__3197, &arrcom_1.useful, &c__9, &lmem);
/*< 	if(lmem+ilen.gt.maxmem) call bugmsg('LMEM>MAXMEM^E',0,0) >*/
    if (lmem + ilen > usrcom_1.maxmem) {
	bugmsg_("LMEM>MAXMEM^E", &c__0, &c__0, (ftnlen)13);
    }
/*< 	call addval(4, 0,3199,  -1, ilen ) >*/
    addval_(&c__4, &c__0, &c__3199, &c_n1, &ilen);
/*< 	call putval(5, 0,3200,  stradr, prgnum, lmem+1 ) >*/
    i__2 = lmem + 1;
    putval_(&c__5, &c__0, &c__3200, &arrcom_1.stradr, &prgnum, &i__2);
/*< 1070	call getval(5, 0,3201,  stradr, iabs(prgnum), addr ) >*/
L1070:
    i__2 = abs(prgnum);
    getval_(&c__5, &c__0, &c__3201, &arrcom_1.stradr, &i__2, &addr__);
/*< 	if( ilen .eq. 0 ) goto 1101 >*/
    if (ilen == 0) {
	goto L1101;
    }
/*< 	do 1100 i = 1, ilen >*/
    i__2 = ilen;
    for (i__ = 1; i__ <= i__2; ++i__) {
/*< 	    if( .not. mltisp )  goto 1080 >*/
	if (! mltisp) {
	    goto L1080;
	}
/*< 	    call putval(5, 0,3205,  nverb, addr, everb(i) ) >*/
	putval_(&c__5, &c__0, &c__3205, &arrcom_1.nverb, &addr__, &everb[i__ 
		- 1]);
/*< 	    call putval(5, 0,3206,  ncode, addr, ecode(i) ) >*/
	putval_(&c__5, &c__0, &c__3206, &arrcom_1.ncode, &addr__, &ecode[i__ 
		- 1]);
/*< 	    call putval(5, 0,3207,  ndest, addr, edest(i) ) >*/
	putval_(&c__5, &c__0, &c__3207, &arrcom_1.ndest, &addr__, &edest[i__ 
		- 1]);
/*< 	    goto 1090 >*/
	goto L1090;
/*< 1080	    call putval(5, 0,3209,  nverb, addr, ev ) >*/
L1080:
	putval_(&c__5, &c__0, &c__3209, &arrcom_1.nverb, &addr__, &ev);
/*< 	    call putval(5, 0,3210,  ncode, addr, ec ) >*/
	putval_(&c__5, &c__0, &c__3210, &arrcom_1.ncode, &addr__, &ec);
/*< 	    call putval(5, 0,3211,  ndest, addr, ed ) >*/
	putval_(&c__5, &c__0, &c__3211, &arrcom_1.ndest, &addr__, &ed);
/*< 1090	    addr = addr + 1 >*/
L1090:
	++addr__;
/*< 1100	continue >*/
/* L1100: */
    }
/*< 1101	continue >*/
L1101:
/*< 	if( prgnum .gt. 0 ) goto 1105 >*/
    if (prgnum > 0) {
	goto L1105;
    }
/*< 	prgnum = -prgnum >*/
    prgnum = -prgnum;
/*< 	call putval(5, 0,3218,  lenprg, prgnum, ilen ) >*/
    putval_(&c__5, &c__0, &c__3218, &arrcom_1.lenprg, &prgnum, &ilen);
/*< 	lprogr = lprogr + 1 >*/
    ++lprogr;
/*< 	call addval(5, 0,3220,  useful, 8, 1 ) >*/
    addval_(&c__5, &c__0, &c__3220, &arrcom_1.useful, &c__8, &c__1);
/*< 	call putval(5, 0,3221,  stradr, lprogr, addr ) >*/
    putval_(&c__5, &c__0, &c__3221, &arrcom_1.stradr, &lprogr, &addr__);
/*< 	call putval(5, 0,3222,  lenprg, lprogr, flen-ilen ) >*/
    i__2 = flen - ilen;
    putval_(&c__5, &c__0, &c__3222, &arrcom_1.lenprg, &lprogr, &i__2);
/*< 	goto 1105 >*/
    goto L1105;
/* ***	SENTAC COMMAND */
/*< 1102	icom = 10001			! icom = ns1714132329stacns1714132329 >*/
L1102:
    icom = 10001;
/*< 	mltisp = .true. >*/
    mltisp = TRUE_;
/*< 	call messag('Tactics sent to: ^E') >*/
    messag_("Tactics sent to: ^E", (ftnlen)19);
/*< 	goto 1105 >*/
    goto L1105;
/* ***	SENPC COMMAND */
/*< 1104	icom = 10002			! icom = ns1714132329spcns1714132329 >*/
L1104:
    icom = 10002;
/*< 	mltisp = .true. >*/
    mltisp = TRUE_;
/*< 	call messag('PC sent to: ^E') >*/
    messag_("PC sent to: ^E", (ftnlen)14);
/*< 1105	do 1106 i = 1, 7 >*/
L1105:
    for (i__ = 1; i__ <= 7; ++i__) {
/*< 	    fpar(i) = 0 >*/
	fpar[i__ - 1] = 0;
/*< 1106	continue >*/
/* L1106: */
    }
/*< 	jflag = ( par(2).eq.isxbit('UNITS~') .or. par(2).eq.isxbit('UNI~') ) >*/
    jflag = par[1] == isxbit_("UNITS~", (ftnlen)6) || par[1] == isxbit_("UNI~"
	    , (ftnlen)4);
/*< 	loopen=1 >*/
    loopen = 1;
/* 	Added because commands with no destination were falling to "no unit" */
/* 	instead of the ship in view. (Linux port) */
/*< 	par(1) = ship >*/
    par[0] = ship;
/*< 	if( .not. mltisp ) goto 1119 >*/
    if (! mltisp) {
	goto L1119;
    }
/*< 	call  >*/
    getnum_(&c__42, com, &len, par, &c__10, &par[1], &c__10, &par[2], &c__10, 
	    &par[3], &c__10, &par[4], &c__10, &par[5], &c__10, &par[6], &
	    c__10, &par[7], &c__10, &par[8], &c__10, &par[9], &c__10, &par[10]
	    , &c__10, &par[11], &c__10, &par[12], &c__10, &par[13], &c__10, &
	    par[14], &c__10, &par[15], &c__10, &par[16], &c__10, &par[17], &
	    c__10, &par[18], &c__10, &par[19], &c__10);
/*< 	if( jflag )  goto 1130 >*/
    if (jflag) {
	goto L1130;
    }
/*< 	if( par(1) .eq. 0 ) par(1) = ship >*/
    if (par[0] == 0) {
	par[0] = ship;
    }
/*< 	loopen=20 >*/
    loopen = 20;
/*< 1119	continue >*/
L1119:
/*< 	do 1120 i = 1, loopen >*/
    i__2 = loopen;
    for (i__ = 1; i__ <= i__2; ++i__) {
/*< 	    unum = par(i) >*/
	unum = par[i__ - 1];
/*< 1110	    if( unum .lt. 1 .or. unum .gt. lunit )  goto 1120 >*/
/* L1110: */
	if (unum < 1 || unum > usrcom_1.lunit) {
	    goto L1120;
	}
/*< 	    call getval(5, 0,3261,  org, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3261, &arrcom_1.org, &unum, &ival);
/*< 	    if( ival .ne. player )  goto 1120 >*/
	if (ival != usrcom_1.player) {
	    goto L1120;
	}
/*< 	    call getval(5, 0,3263,  hmflag, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3263, &arrcom_1.hmflag, &unum, &ival);
/*< 	    if( ival .eq. 1 ) goto 1120 >*/
	if (ival == 1) {
	    goto L1120;
	}
/*< 	    call getval(5, 0,3265,  type, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3265, &arrcom_1.type__, &unum, &ival);
/*< 	    fpar(ival) = fpar(ival) + 1 >*/
	++fpar[ival - 1];
/*< 	    if( icom .ne. 10000 ) goto 1113 >*/
	if (icom != 10000) {
	    goto L1113;
	}
/*< 	    call getval(5, 0,3268,  wprogr, unum, curprg ) >*/
	getval_(&c__5, &c__0, &c__3268, &arrcom_1.wprogr, &unum, &curprg);
/*< 	    call putval(4, 0,3269,  -1, prgnum ) >*/
	putval_(&c__4, &c__0, &c__3269, &c_n1, &prgnum);
/*< 	    if( curprg .ne. 0 )  call addval(5, 0,3270,  numusr, curprg, -1 ) >*/
	if (curprg != 0) {
	    addval_(&c__5, &c__0, &c__3270, &arrcom_1.numusr, &curprg, &c_n1);
	}
/*< 	    call addval(5, 0,3271,  numusr, prgnum, 1 ) >*/
	addval_(&c__5, &c__0, &c__3271, &arrcom_1.numusr, &prgnum, &c__1);
/*< 	    call putval(5, 0,3272,  pc, unum, 1 ) >*/
	putval_(&c__5, &c__0, &c__3272, &arrcom_1.pc, &unum, &c__1);
/*< 	    call putval(5, 0,3273,  onerpc, unum, 0 ) >*/
	putval_(&c__5, &c__0, &c__3273, &arrcom_1.onerpc, &unum, &c__0);
/*< 	    goto 1120 >*/
	goto L1120;
/*< 1113	    continue >*/
L1113:
/*< 	    if( icom .ne. 10001 ) goto 1117 >*/
	if (icom != 10001) {
	    goto L1117;
	}
/*< 	    call getval(5, 0,3278,  power, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3278, &arrcom_1.power, &unum, &ival);
/*< 	    if( tac(1)+tac(2)+tac(3) .gt. ival ) goto 1120 >*/
	if (tac[0] + tac[1] + tac[2] > ival) {
	    goto L1120;
	}
/*< 	    do 1115 j = 1, 3 >*/
	for (j = 1; j <= 3; ++j) {
/*< 		call getval(7, 0,3281,  powdst, unum, j+0, 2, ival ) >*/
	    i__1 = j;
	    getval_(&c__7, &c__0, &c__3281, &arrcom_1.powdst, &unum, &i__1, &
		    c__2, &ival);
/*< 		call putval(7, 0,3282,  powdst, unum, j+0, 1, min0(tac(j),ival) ) >*/
	    i__1 = j;
/* Computing MIN */
	    i__4 = tac[j - 1];
	    i__3 = min(i__4,ival);
	    putval_(&c__7, &c__0, &c__3282, &arrcom_1.powdst, &unum, &i__1, &
		    c__1, &i__3);
/*< 1115	    continue >*/
/* L1115: */
	}
/*< 	    goto 1120 >*/
	goto L1120;
/*< 1117	    call putval(5, 0,3286,  pc, unum, newpcv ) >*/
L1117:
	putval_(&c__5, &c__0, &c__3286, &arrcom_1.pc, &unum, &newpcv);
/*< 	    call putval(5, 0,3287,  onerpc, unum, 0 ) >*/
	putval_(&c__5, &c__0, &c__3287, &arrcom_1.onerpc, &unum, &c__0);
/*< 1120	continue >*/
L1120:
	;
    }
/*< 	goto 1141 >*/
    goto L1141;
/*< 1130	i = par(1) >*/
L1130:
    i__ = par[0];
/*< 	if( i .lt. 1 .or. i .gt. lunit )  i = 1 >*/
    if (i__ < 1 || i__ > usrcom_1.lunit) {
	i__ = 1;
    }
/*< 	j = par(2) >*/
    j = par[1];
/*< 	if( j .lt. 1 .or. j .gt. lunit )  j = lunit >*/
    if (j < 1 || j > usrcom_1.lunit) {
	j = usrcom_1.lunit;
    }
/*< 	do 1140 k = i, j >*/
    i__2 = j;
    for (k = i__; k <= i__2; ++k) {
/*< 	    unum = k >*/
	unum = k;
/*< 	    call getval(5, 0,3298,  org, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3298, &arrcom_1.org, &unum, &ival);
/*< 	    if( ival .ne. player )  goto 1140 >*/
	if (ival != usrcom_1.player) {
	    goto L1140;
	}
/*< 	    call getval(5, 0,3300,  shiptr, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3300, &arrcom_1.shiptr, &unum, &ival);
/*< 	    if( untloc .ne. 0 .and. ival .ne. untloc ) goto 1140 >*/
	if (untloc != 0 && ival != untloc) {
	    goto L1140;
	}
/*< 	    call getval(5, 0,3302,  hmflag, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3302, &arrcom_1.hmflag, &unum, &ival);
/*< 	    if( ival .eq. 1 ) goto 1140 >*/
	if (ival == 1) {
	    goto L1140;
	}
/*< 	    call getval(5, 0,3304,  type, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3304, &arrcom_1.type__, &unum, &ival);
/*< 	    if( untype .ne. 0 .and. ival .ne. untype ) goto 1140 >*/
	if (untype != 0 && ival != untype) {
	    goto L1140;
	}
/*< 	    fpar(ival) = fpar(ival) + 1 >*/
	++fpar[ival - 1];
/*< 	    if( icom .ne. 10000 ) goto 1133 >*/
	if (icom != 10000) {
	    goto L1133;
	}
/*< 	    call getval(5, 0,3308,  wprogr, unum, curprg ) >*/
	getval_(&c__5, &c__0, &c__3308, &arrcom_1.wprogr, &unum, &curprg);
/*< 	    call putval(4, 0,3309,  -1, prgnum ) >*/
	putval_(&c__4, &c__0, &c__3309, &c_n1, &prgnum);
/*< 	    if( curprg .ne. 0 )  call addval(5, 0,3310,  numusr, curprg, -1 ) >*/
	if (curprg != 0) {
	    addval_(&c__5, &c__0, &c__3310, &arrcom_1.numusr, &curprg, &c_n1);
	}
/*< 	    call addval(5, 0,3311,  numusr, prgnum, 1 ) >*/
	addval_(&c__5, &c__0, &c__3311, &arrcom_1.numusr, &prgnum, &c__1);
/*< 	    call putval(5, 0,3312,  pc, unum, 1 ) >*/
	putval_(&c__5, &c__0, &c__3312, &arrcom_1.pc, &unum, &c__1);
/*< 	    call putval(5, 0,3313,  onerpc, unum, 0 ) >*/
	putval_(&c__5, &c__0, &c__3313, &arrcom_1.onerpc, &unum, &c__0);
/*< 	    goto 1140 >*/
	goto L1140;
/*< 1133	    continue >*/
L1133:
/*< 	    if( icom .ne. 10001 ) goto 1137 >*/
	if (icom != 10001) {
	    goto L1137;
	}
/*< 	    call getval(5, 0,3318,  power, unum, ival ) >*/
	getval_(&c__5, &c__0, &c__3318, &arrcom_1.power, &unum, &ival);
/*< 	    if( tac(1)+tac(2)+tac(3) .gt. ival ) goto 1140 >*/
	if (tac[0] + tac[1] + tac[2] > ival) {
	    goto L1140;
	}
/*< 	    do 1135 j = 1, 3 >*/
	for (j = 1; j <= 3; ++j) {
/*< 		call getval(7, 0,3321,  powdst, unum, j+0, 2, ival ) >*/
	    i__1 = j;
	    getval_(&c__7, &c__0, &c__3321, &arrcom_1.powdst, &unum, &i__1, &
		    c__2, &ival);
/*< 		call putval(7, 0,3322,  powdst, unum, j+0, 1, min0(tac(j),ival) ) >*/
	    i__1 = j;
/* Computing MIN */
	    i__4 = tac[j - 1];
	    i__3 = min(i__4,ival);
	    putval_(&c__7, &c__0, &c__3322, &arrcom_1.powdst, &unum, &i__1, &
		    c__1, &i__3);
/*< 1135	    continue >*/
/* L1135: */
	}
/*< 	    goto 1140 >*/
	goto L1140;
/*< 1137	    call putval(5, 0,3326,  pc, unum, newpcv ) >*/
L1137:
	putval_(&c__5, &c__0, &c__3326, &arrcom_1.pc, &unum, &newpcv);
/*< 	    call putval(5, 0,3327,  onerpc, unum, 0 ) >*/
	putval_(&c__5, &c__0, &c__3327, &arrcom_1.onerpc, &unum, &c__0);
/*< 1140	continue >*/
L1140:
	;
    }
/*< 1141	continue >*/
L1141:
/*< 	if( icom .eq. 10000 ) call putval(5, 0,3332,  useful, 7, 0 ) >*/
    if (icom == 10000) {
	putval_(&c__5, &c__0, &c__3332, &arrcom_1.useful, &c__7, &c__0);
    }
/*< 	jflag = .false. >*/
    jflag = FALSE_;
/*< 	do 1200 i = 1, 7 >*/
    for (i__ = 1; i__ <= 7; ++i__) {
/*< 	    if( fpar(i) .eq. 0 ) goto 1200 >*/
	if (fpar[i__ - 1] == 0) {
	    goto L1200;
	}
/*< 	    call number(2, fpar(i), 5 ) >*/
	number_(&c__2, &fpar[i__ - 1], &c__5);
/*< 	    call chrout( tc(i) ) >*/
	chrout_(&tc[i__ - 1]);
/*< 	    jflag = .true. >*/
	jflag = TRUE_;
/*< 1200	continue >*/
L1200:
	;
    }
/*< 	if( jflag ) goto 100 >*/
    if (jflag) {
	goto L100;
    }
/*< 	call string(1,' No unit.^E') >*/
    string_(&c__1, " No unit.^E", (ftnlen)11);
/*< 	goto 100 >*/
    goto L100;
/* ***	WHO COMMAND */
/*< 1300	call getnum(4, com, len, empnum, 10 ) >*/
L1300:
    getnum_(&c__4, com, &len, &empnum, &c__10);
/*< 	if( empnum .gt. 0 .and. empnum .le. nprogs ) goto 1305 >*/
    if (empnum > 0 && empnum <= usrcom_1.nprogs) {
	goto L1305;
    }
/*< 	call messag('Illegal player number.^E') >*/
    messag_("Illegal player number.^E", (ftnlen)24);
/*< 	goto 100 >*/
    goto L100;
/*< 1305	call messag('Player #^E') >*/
L1305:
    messag_("Player #^E", (ftnlen)10);
/*< 	call number(2, empnum, -2 ) >*/
    number_(&c__2, &empnum, &c_n2);
/*< 	call getval(5, 0,3353,  ncstru, empnum, ival ) >*/
    getval_(&c__5, &c__0, &c__3353, &arrcom_1.ncstru, &empnum, &ival);
/*< 	if( ival .lt. 63 ) goto 1310 >*/
    if (ival < 63) {
	goto L1310;
    }
/*< 	call getval(5, 0,3355,  progs, empnum, ival ) >*/
    getval_(&c__5, &c__0, &c__3355, &arrcom_1.progs, &empnum, &ival);
/*< 	call string(1,' is running automatically for ^E') >*/
    string_(&c__1, " is running automatically for ^E", (ftnlen)32);
/*< 	if( ival .eq. 262143 ) call string(1,'the empire.^E') >*/
    if (ival == 262143) {
	string_(&c__1, "the empire.^E", (ftnlen)13);
    }
/*< 	if( ival .eq. 262143 ) goto 100 >*/
    if (ival == 262143) {
	goto L100;
    }
/*< 	call string(1,'[*,^E') >*/
    string_(&c__1, "[*,^E", (ftnlen)5);
/*< 	call number(3, ival, 0, 8 ) >*/
    number_(&c__3, &ival, &c__0, &c__8);
/*< 	call string(1,'].^E') >*/
    string_(&c__1, "].^E", (ftnlen)4);
/*< 	goto 100 >*/
    goto L100;
/*< 1310	call string(1,' is ^E') >*/
L1310:
    string_(&c__1, " is ^E", (ftnlen)6);
/*< 	call getval(5, 0,3365,  prgjob, empnum, j ) >*/
    getval_(&c__5, &c__0, &c__3365, &arrcom_1.prgjob, &empnum, &j);
/*< 	call syswho(j) >*/
    syswho_(&j);
/*< 	goto 100 >*/
    goto L100;
/*< 	end >*/
} /* fmain_ */

