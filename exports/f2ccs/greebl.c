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

static integer c__6 = 6;
static integer c__0 = 0;
static integer c__61 = 61;
static integer c__18 = 18;
static integer c__24 = 24;
static integer c__80 = 80;
static integer c__1 = 1;
static integer c__47 = 47;
static integer c__45 = 45;
static integer c__78 = 78;
static integer c__92 = 92;
static integer c__3 = 3;
static integer c__124 = 124;
static integer c__20 = 20;
static integer c__42 = 42;
static integer c__2 = 2;
static integer c__26 = 26;
static integer c__51 = 51;
static integer c__5 = 5;
static integer c__96 = 96;
static integer c__100 = 100;
static integer c__98 = 98;
static integer c__7 = 7;
static integer c__101 = 101;
static integer c__102 = 102;
static integer c__103 = 103;
static integer c__104 = 104;
static integer c__36 = 36;
static integer c__105 = 105;
static integer c__106 = 106;
static integer c__107 = 107;
static integer c__108 = 108;
static integer c__109 = 109;
static integer c__110 = 110;
static integer c__111 = 111;
static integer c__128 = 128;
static integer c__133 = 133;
static integer c__142 = 142;
static integer c__143 = 143;
static integer c__144 = 144;
static integer c__127 = 127;
static integer c__145 = 145;
static integer c__146 = 146;
static integer c__147 = 147;
static integer c__148 = 148;
static integer c__149 = 149;
static integer c__150 = 150;
static integer c__151 = 151;
static integer c__162 = 162;
static integer c__163 = 163;
static integer c__176 = 176;
static logical c_true = TRUE_;
static integer c__179 = 179;
static integer c__41 = 41;
static integer c__184 = 184;
static integer c__65 = 65;
static integer c__193 = 193;
static integer c__194 = 194;
static logical c_false = FALSE_;
static integer c__212 = 212;
static integer c__214 = 214;
static integer c__215 = 215;
static integer c__218 = 218;
static integer c__219 = 219;
static integer c__223 = 223;
static integer c__224 = 224;
static integer c__4 = 4;
static integer c__225 = 225;
static integer c_n1 = -1;
static integer c__231 = 231;
static integer c__250 = 250;
static integer c__237 = 237;
static integer c__240 = 240;
static integer c__241 = 241;
static integer c_n6 = -6;
static integer c__247 = 247;
static integer c__249 = 249;
static integer c__251 = 251;
static integer c__254 = 254;
static integer c__255 = 255;
static integer c__256 = 256;
static integer c__257 = 257;
static integer c__261 = 261;
static integer c__262 = 262;
static integer c__268 = 268;
static integer c__270 = 270;
static integer c__272 = 272;
static integer c__273 = 273;
static integer c__275 = 275;
static integer c__280 = 280;
static integer c__281 = 281;
static integer c__285 = 285;
static integer c__291 = 291;
static integer c__10 = 10;
static integer c__293 = 293;
static integer c__294 = 294;
static integer c__301 = 301;
static integer c__303 = 303;
static integer c__305 = 305;
static integer c__309 = 309;
static integer c__311 = 311;
static integer c__312 = 312;
static integer c__314 = 314;
static integer c__316 = 316;
static integer c__317 = 317;
static integer c__32 = 32;
static integer c__322 = 322;
static integer c__324 = 324;
static integer c__335 = 335;
static integer c__336 = 336;
static integer c__343 = 343;
static integer c__344 = 344;
static integer c__346 = 346;
static integer c__353 = 353;
static integer c__354 = 354;
static integer c__355 = 355;
static integer c__356 = 356;
static integer c__46 = 46;
static integer c__357 = 357;
static integer c__358 = 358;
static integer c__365 = 365;
static integer c__371 = 371;
static integer c__372 = 372;
static integer c__64 = 64;
static integer c__386 = 386;
static integer c__387 = 387;
static integer c__388 = 388;
static integer c__389 = 389;
static integer c__390 = 390;
static integer c__391 = 391;
static integer c__392 = 392;
static integer c__399 = 399;
static integer c__400 = 400;
static integer c__403 = 403;

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

/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_0_(n__, iobjp)
int n__;
integer *iobjp;
{
    /* Initialized data */

    static integer screen = 1;
    static integer whosen = 10;
    static integer score = 11;
    static integer xdir[9] = { -1,0,1,-1,0,1,-1,0,1 };
    static integer ydir[9] = { -1,-1,-1,0,0,0,1,1,1 };
    static integer igrebl = -1;
    static integer iplayr = -1;
    static integer inuse = 2;
    static integer pos = 3;
    static integer direxn = 4;
    static integer conflg = 5;
    static integer type__ = 6;
    static integer useful = 7;
    static integer charep = 8;
    static integer recovr = 9;

    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, j, ix, iy;
    extern /* Subroutine */ int nap_();
    static integer par;
    static logical new__;
    static integer imx, imy, inx, iny, iobj, jobj, ilen;
    extern /* Subroutine */ int lock_();
    extern integer iran_(), icon_();
    static integer ival, idir;
    extern integer isgn_();
    static integer imon;
    extern /* Subroutine */ int init_(), torp_(), check_(), pback_(), cease_()
	    ;
    static integer ichar;
    extern integer ifind_();
    static integer privd, itype;
    extern integer nuser_();
    static integer itorp;
    extern /* Subroutine */ int defadr_(), enable_(), addval_(), allcap_();
    static integer comara[80];
    static logical iniflg;
    extern integer itbadr_(), ichrat_();
    extern /* Subroutine */ int grafon_(), chrbuf_();
    static logical firing;
    static integer filspc[13];
    extern /* Subroutine */ int getval_();
    static logical reping;
    extern /* Subroutine */ int update_();
    extern integer iright_();
    extern /* Subroutine */ int colcur_(), clrscr_(), chrwat_(), setdis_();
    static integer player;
    extern /* Subroutine */ int unlock_(), pcolor_(), newscr_(), chrout_(), 
	    string_(), number_(), makmon_();
    static integer inchar;
    extern /* Subroutine */ int putval_(), cursor_(), settty_(), irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer filspc( 13 )		! where run from >*/
/*< 	integer comara( 80 ), ilen	! input array for data file >*/
/*< 	integer parara( 40 ), plen	! pararased stuff for initdb >*/
/*< 	integer xdir( 9 ), ydir( 9 ) >*/
/*< 	integer player >*/
/*< 	integer screen,inuse,pos,direxn,conflg >*/
/*< 	integer type,useful,charep,recovr,whosen,score >*/
/*< 	logical firing, reping, iniflg, new >*/
/*< 	commo >*/
/*< 	data  >*/
    switch(n__) {
	case 1: goto L_torph;
	case 2: goto L_ifindr;
	case 3: goto L_makemo;
	case 4: goto L_kilchr;
	}

/*< 	data xdir/-1,0,1,-1,0,1,-1,0,1/ >*/
/*< 	data ydir/-1,-1,-1,0,0,0,1,1,1/ >*/
/*< 	data igrebl/-1/, iplayr/-1/ >*/
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
    settty_(comara, &par, &ilen, &privd, filspc);
/*< 	call enable >*/
    enable_();
/*< 	call check( iniflg ) >*/
    check_(&iniflg);
/*< 	if( .not. iniflg ) goto 10000 >*/
    if (! iniflg) {
	goto L10000;
    }
/* ***************************** INITDB ******************************* */
/*< 	call init(6, 0,61,  screen, 18, 24, 80 ) >*/
    init_(&c__6, &c__0, &c__61, &screen, &c__18, &c__24, &c__80);
/*< 	call defadr( 1, iright(itbadr(screen)) ) >*/
    i__2 = itbadr_(&screen);
    i__1 = iright_(&i__2);
    defadr_(&c__1, &i__1);
/*< 	call setdis( 1 ) >*/
    setdis_(&c__1);
/*< 	call clrscr >*/
    clrscr_();
/*< 	call pback( icllbl ) >*/
    pback_(&col_1.icllbl);
/*< 	call pcolor( icllbl ) >*/
    pcolor_(&col_1.icllbl);
/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	call chrout(47) >*/
    chrout_(&c__47);
/*< 	call irepeat(45,78) >*/
    irepeat_(&c__45, &c__78);
/*< 	call chrout(92) >*/
    chrout_(&c__92);
/*< 	call cursor( 1, 3 ) >*/
    cursor_(&c__1, &c__3);
/*< 	call chrout(92) >*/
    chrout_(&c__92);
/*< 	call irepeat(45,78) >*/
    irepeat_(&c__45, &c__78);
/*< 	call chrout(47) >*/
    chrout_(&c__47);
/*< 	do 100 i = 1, 20 >*/
    for (i__ = 1; i__ <= 20; ++i__) {
/*< 	    call cursor( 1, i+3 ) >*/
	i__1 = i__ + 3;
	cursor_(&c__1, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 	    call cursor( 80, i+3 ) >*/
	i__1 = i__ + 3;
	cursor_(&c__80, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 100	continue >*/
/* L100: */
    }
/*< 	do 200 i = 1, 200 >*/
    for (i__ = 1; i__ <= 200; ++i__) {
/*< 150	    ix = iran( 80 ) >*/
L150:
	ix = iran_(&c__80);
/*< 	    iy = iran( 20 ) + 3 >*/
	iy = iran_(&c__20) + 3;
/*< 	    if( ichrat(ix,iy) .ne. 32 ) goto 150 >*/
	if (ichrat_(&ix, &iy) != 32) {
	    goto L150;
	}
/*< 	    call cursor( ix, iy ) >*/
	cursor_(&ix, &iy);
/*< 	    call chrout(42) >*/
	chrout_(&c__42);
/*< 200	continue >*/
/* L200: */
    }
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	call cursor( 1, 2 ) >*/
    cursor_(&c__1, &c__2);
/*< 	call string(1,'Time:^E') >*/
    string_(&c__1, "Time:^E", (ftnlen)7);
/*< 	call cursor( 26, 2 ) >*/
    cursor_(&c__26, &c__2);
/*< 	call string(1,'Greeble kills:^E') >*/
    string_(&c__1, "Greeble kills:^E", (ftnlen)16);
/*< 	call cursor( 51, 2 ) >*/
    cursor_(&c__51, &c__2);
/*< 	call string(1,'Player kills:^E') >*/
    string_(&c__1, "Player kills:^E", (ftnlen)15);
/*< 	call init(5, 0,96,  inuse, 1, 100 ) >*/
    init_(&c__5, &c__0, &c__96, &inuse, &c__1, &c__100);
/*< 	do 210 i = 1, 100 >*/
    for (i__ = 1; i__ <= 100; ++i__) {
/*< 	    call putval(5, 0,98,  inuse, i+0, 0 ) >*/
	i__1 = i__;
	putval_(&c__5, &c__0, &c__98, &inuse, &i__1, &c__0);
/*< 210	continue >*/
/* L210: */
    }
/*< 	call init(6, 0,100,  pos, 7, 100, 2 ) >*/
    init_(&c__6, &c__0, &c__100, &pos, &c__7, &c__100, &c__2);
/*< 	call init(5, 0,101,  direxn, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__101, &direxn, &c__7, &c__100);
/*< 	call init(5, 0,102,  conflg, 1, 100 ) >*/
    init_(&c__5, &c__0, &c__102, &conflg, &c__1, &c__100);
/*< 	call init(5, 0,103,  type, 6, 100 ) >*/
    init_(&c__5, &c__0, &c__103, &type__, &c__6, &c__100);
/*< 	call init(5, 0,104,  useful, 36, 3 ) >*/
    init_(&c__5, &c__0, &c__104, &useful, &c__36, &c__3);
/*< 	call putval(5, 0,105,  useful, 1, 0 ) >*/
    putval_(&c__5, &c__0, &c__105, &useful, &c__1, &c__0);
/*< 	call putval(5, 0,106,  useful, 2, 0 ) >*/
    putval_(&c__5, &c__0, &c__106, &useful, &c__2, &c__0);
/*< 	call putval(5, 0,107,  useful, 3, 0 ) >*/
    putval_(&c__5, &c__0, &c__107, &useful, &c__3, &c__0);
/*< 	call init(5, 0,108,  charep, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__108, &charep, &c__7, &c__100);
/*< 	call init(5, 0,109,  recovr, 5, 100 ) >*/
    init_(&c__5, &c__0, &c__109, &recovr, &c__5, &c__100);
/*< 	call init(5, 0,110,  whosen, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__110, &whosen, &c__7, &c__100);
/*< 	call init(6, 0,111,  score, 18, 100, 2 ) >*/
    init_(&c__6, &c__0, &c__111, &score, &c__18, &c__100, &c__2);
/*< 	call unlock >*/
    unlock_();
/*< 	goto 10010 >*/
    goto L10010;

/* ***************************** SETUP ******************************** */
/*< 10000	call defadr( 1, iright(itbadr(screen)) ) >*/
L10000:
    i__2 = itbadr_(&screen);
    i__1 = iright_(&i__2);
    defadr_(&c__1, &i__1);
/* 10000	CALL DEFSCR( 1, SCREEN ) */
/*< 10010	call setdis( 0 ) >*/
L10010:
    setdis_(&c__0);
/*< 10020	continue ! call ctrap >*/
L10020:
/* 	    call exprog */
/*< 	call string(1,'^M^JInput character to represent player: ^B') >*/
    string_(&c__1, "^M^JInput character to represent player: ^B", (ftnlen)43);
/*< 	call chrwat( ichar ) >*/
    chrwat_(&ichar);
/*< 	call enable >*/
    enable_();
/*< 	call lock >*/
    lock_();
/*< 	if( ichar .gt. 90 ) ichar = ichar - 32 >*/
    if (ichar > 90) {
	ichar += -32;
    }
/*< 	if( ichar .lt. 65 .or. ichar .gt. 90 ) goto 10030 >*/
    if (ichar < 65 || ichar > 90) {
	goto L10030;
    }
/*< 	do 10025 i = 100, 1, -1 >*/
    for (i__ = 100; i__ >= 1; --i__) {
/*< 	    call getval(5, 0,128,  inuse, i+0, ival ) >*/
	i__1 = i__;
	getval_(&c__5, &c__0, &c__128, &inuse, &i__1, &ival);
/*< 	    if( ival .eq. 1 ) goto 10023 >*/
	if (ival == 1) {
	    goto L10023;
	}
/*< 	    player = i >*/
	player = i__;
/*< 	    goto 10025 >*/
	goto L10025;
/*< 10023	    call getval(5, 0,133,  charep, i+0, ival ) >*/
L10023:
	i__1 = i__;
	getval_(&c__5, &c__0, &c__133, &charep, &i__1, &ival);
/*< 	    if( ival .eq. ichar ) goto 10030 >*/
	if (ival == ichar) {
	    goto L10030;
	}
/*< 10025	continue >*/
L10025:
	;
    }
/*< 	goto 10040 >*/
    goto L10040;
/*< 10030	call unlock >*/
L10030:
    unlock_();
/*< 	call string(1,'^M^JCharacter in use.  ^E') >*/
    string_(&c__1, "^M^JCharacter in use.  ^E", (ftnlen)25);
/*< 	goto 10020 >*/
    goto L10020;
/*< 10040	call putval(5, 0,142,  inuse, player, 1 ) >*/
L10040:
    putval_(&c__5, &c__0, &c__142, &inuse, &player, &c__1);
/*< 	call putval(5, 0,143,  charep, player, ichar ) >*/
    putval_(&c__5, &c__0, &c__143, &charep, &player, &ichar);
/*< 	call putval(6, 0,144,  pos, player, 1, 127 ) >*/
    putval_(&c__6, &c__0, &c__144, &pos, &player, &c__1, &c__127);
/*< 	call putval(6, 0,145,  pos, player, 2, 127 ) >*/
    putval_(&c__6, &c__0, &c__145, &pos, &player, &c__2, &c__127);
/*< 	call putval(5, 0,146,  type, player, 1 ) >*/
    putval_(&c__5, &c__0, &c__146, &type__, &player, &c__1);
/*< 	call putval(5, 0,147,  direxn, player, 5 ) >*/
    putval_(&c__5, &c__0, &c__147, &direxn, &player, &c__5);
/*< 	call putval(5, 0,148,  conflg, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__148, &conflg, &player, &c__0);
/*< 	call putval(5, 0,149,  recovr, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__149, &recovr, &player, &c__0);
/*< 	call putval(6, 0,150,  score, player, 1, 0 ) >*/
    putval_(&c__6, &c__0, &c__150, &score, &player, &c__1, &c__0);
/*< 	call putval(6, 0,151,  score, player, 2, 0 ) >*/
    putval_(&c__6, &c__0, &c__151, &score, &player, &c__2, &c__0);
/*< 	call unlock >*/
    unlock_();
/*< 	call setdis( 1 ) >*/
    setdis_(&c__1);
/*< 	call newscr( screen ) >*/
    newscr_(&screen);
/*< 	new = .false. >*/
    new__ = FALSE_;
/*< 10050	ix = iran( 80 ) >*/
L10050:
    ix = iran_(&c__80);
/*< 	iy = iran( 20 ) + 3 >*/
    iy = iran_(&c__20) + 3;
/*< 	if( ichrat( ix, iy ) .ne. 32 ) goto 10050 >*/
    if (ichrat_(&ix, &iy) != 32) {
	goto L10050;
    }
/*< 	call lock >*/
    lock_();
/*< 	call cursor( ix, iy ) >*/
    cursor_(&ix, &iy);
/*< 	call putval(6, 0,162,  pos, player, 1, ix ) >*/
    putval_(&c__6, &c__0, &c__162, &pos, &player, &c__1, &ix);
/*< 	call putval(6, 0,163,  pos, player, 2, iy ) >*/
    putval_(&c__6, &c__0, &c__163, &pos, &player, &c__2, &iy);
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	call chrout( ichar ) >*/
    chrout_(&ichar);
/*< 	call unlock >*/
    unlock_();
/*< 	call grafon >*/
    grafon_();
/*< 	continue ! call ctrap >*/
/* 	    call cease( .false. ) */

/* ****************************** COMMANDS **************************** */
/*< 10100	if( new ) call newscr( screen ) >*/
L10100:
    if (new__) {
	newscr_(&screen);
    }
/*< 	if( .not. new ) call update( screen ) >*/
    if (! new__) {
	update_(&screen);
    }
/*< 	new = .false. >*/
    new__ = FALSE_;
/*< 	call getval(5, 0,176,  inuse, player, ival ) >*/
    getval_(&c__5, &c__0, &c__176, &inuse, &player, &ival);
/*< 	if( ival .ne. 1 ) call cease( .true. ) >*/
    if (ival != 1) {
	cease_(&c_true);
    }
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call getval(6, 0,179,  score, player, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__179, &score, &player, &c__1, &ival);
/*< 	if( ival .eq. igrebl ) goto 10102 >*/
    if (ival == igrebl) {
	goto L10102;
    }
/*< 	call cursor( 41, 2 ) >*/
    cursor_(&c__41, &c__2);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	igrebl = ival >*/
    igrebl = ival;
/*< 10102	call getval(6, 0,184,  score, player, 2, ival ) >*/
L10102:
    getval_(&c__6, &c__0, &c__184, &score, &player, &c__2, &ival);
/*< 	if( ival .eq. iplayr ) goto 10103 >*/
    if (ival == iplayr) {
	goto L10103;
    }
/*< 	call cursor( 65, 2 ) >*/
    cursor_(&c__65, &c__2);
/*< 	call number(1, ival ) >*/
    number_(&c__1, &ival);
/*< 	iplayr = ival >*/
    iplayr = ival;
/*< 10103	call setdis( 1 ) >*/
L10103:
    setdis_(&c__1);
/*< 10110	call chrbuf( ichar ) >*/
L10110:
    chrbuf_(&ichar);
/*< 	if( ichar .eq. -1 ) goto 20000 >*/
    if (ichar == -1) {
	goto L20000;
    }
/*< 	if( reping .and. ichar .gt. 48 .and. ichar .le. 57 ) goto 10300 >*/
    if (reping && ichar > 48 && ichar <= 57) {
	goto L10300;
    }
/*< 	call putval(5, 0,193,  conflg, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__193, &conflg, &player, &c__0);
/*< 	call putval(5, 0,194,  direxn, player, 5 ) >*/
    putval_(&c__5, &c__0, &c__194, &direxn, &player, &c__5);
/*< 	reping = .false. >*/
    reping = FALSE_;
/*< 	if( firing .and. ichar .gt. 48 .and. ichar .le. 57 ) goto 10200 >*/
    if (firing && ichar > 48 && ichar <= 57) {
	goto L10200;
    }
/*< 	firing = .false. >*/
    firing = FALSE_;
/*< 	if( ichar .gt. 48 .and. ichar .le. 57 ) goto 10300 >*/
    if (ichar > 48 && ichar <= 57) {
	goto L10300;
    }
/*< 	ichar = icon( ichar ) >*/
    ichar = icon_(&ichar);
/*< 	call allcap( ichar, 1 ) >*/
    allcap_(&ichar, &c__1);
/*< 	if( ichar .eq. 70 ) firing = .true. >*/
    if (ichar == 70) {
	firing = TRUE_;
    }
/*< 	if( ichar .eq. 46 ) firing = .true. >*/
    if (ichar == 46) {
	firing = TRUE_;
    }
/*< 	if( ichar .eq. 82 ) reping = .true. >*/
    if (ichar == 82) {
	reping = TRUE_;
    }
/*< 	if( ichar .eq. 48 ) reping = .true. >*/
    if (ichar == 48) {
	reping = TRUE_;
    }
/*< 	if( ichar .eq. 78 ) new = .true. >*/
    if (ichar == 78) {
	new__ = TRUE_;
    }
/*< 	if( ichar .eq. 69 ) call cease( .false. ) >*/
    if (ichar == 69) {
	cease_(&c_false);
    }
/*< 	goto 10110 >*/
    goto L10110;
/*< 10200	continue >*/
L10200:
/*< 	firing = .false. >*/
    firing = FALSE_;
/*< 	if( ichar .eq. 53 ) goto 10110 >*/
    if (ichar == 53) {
	goto L10110;
    }
/*< 	call getval(5, 0,212,  recovr, player, ival ) >*/
    getval_(&c__5, &c__0, &c__212, &recovr, &player, &ival);
/*< 	if( ival .gt. 0 ) goto 10110 >*/
    if (ival > 0) {
	goto L10110;
    }
/*< 	call getval(6, 0,214,  pos, player, 1, ix ) >*/
    getval_(&c__6, &c__0, &c__214, &pos, &player, &c__1, &ix);
/*< 	call getval(6, 0,215,  pos, player, 2, iy ) >*/
    getval_(&c__6, &c__0, &c__215, &pos, &player, &c__2, &iy);
/*< 	idir = ichar-48 >*/
    idir = ichar - 48;
/*< 	call torp >*/
    torp_();
/*< 	call putval(5, 0,218,  whosen, itorp, player ) >*/
    putval_(&c__5, &c__0, &c__218, &whosen, &itorp, &player);
/*< 	call putval(5, 0,219,  recovr, player, 5 ) >*/
    putval_(&c__5, &c__0, &c__219, &recovr, &player, &c__5);
/*< 	goto 10110 >*/
    goto L10110;
/*< 10300	continue >*/
L10300:
/*< 	call putval(5, 0,223,  direxn, player, ichar-48 ) >*/
    i__1 = ichar - 48;
    putval_(&c__5, &c__0, &c__223, &direxn, &player, &i__1);
/*< 	call putval(5, 0,224,  conflg, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__224, &conflg, &player, &c__0);
/*< 	if( reping ) call putval(4, 0,225,  -1, 1 ) >*/
    if (reping) {
	putval_(&c__4, &c__0, &c__225, &c_n1, &c__1);
    }
/*< 	reping = .false. >*/
    reping = FALSE_;
/*< 	goto 10110 >*/
    goto L10110;

/* ****************************** MOVES ******************************* */
/*< 20000	call lock >*/
L20000:
    lock_();
/*< 	call getval(5, 0,231,  useful, 1, ival ) >*/
    getval_(&c__5, &c__0, &c__231, &useful, &c__1, &ival);
/*< 	if( ival .eq. 0 ) goto 20001 >*/
    if (ival == 0) {
	goto L20001;
    }
/*< 	call unlock >*/
    unlock_();
/*< 	call nap( 250, 4 ) >*/
    nap_(&c__250, &c__4);
/*< 	goto 10100 >*/
    goto L10100;
/*< 20001	call putval(5, 0,237,  useful, 1, 1 ) >*/
L20001:
    putval_(&c__5, &c__0, &c__237, &useful, &c__1, &c__1);
/*< 	call unlock >*/
    unlock_();
/*< 	call nap( 250, 4 ) >*/
    nap_(&c__250, &c__4);
/*< 	call getval(5, 0,240,  useful, 3, ival ) >*/
    getval_(&c__5, &c__0, &c__240, &useful, &c__3, &ival);
/*< 	call addval(4, 0,241,  -1, 1 ) >*/
    addval_(&c__4, &c__0, &c__241, &c_n1, &c__1);
/*< 	call colcur( 7, 2 ) >*/
    colcur_(&c__7, &c__2);
/*< 	call number(2, ival, -6 ) >*/
    number_(&c__2, &ival, &c_n6);
/*< 	if( mod( ival, 250 ) .eq. 0 ) call makmon >*/
    if (ival % 250 == 0) {
	makmon_();
    }
/*< 	do 20100 i = 1, 100 >*/
    for (i__ = 1; i__ <= 100; ++i__) {
/*< 	    iobj = i >*/
	iobj = i__;
/*< 	    call getval(5, 0,247,  inuse, iobj, ival ) >*/
	getval_(&c__5, &c__0, &c__247, &inuse, &iobj, &ival);
/*< 	    if( ival .eq. 0 ) goto 20100 >*/
	if (ival == 0) {
	    goto L20100;
	}
/*< 	    call getval(5, 0,249,  recovr, iobj, ival ) >*/
	getval_(&c__5, &c__0, &c__249, &recovr, &iobj, &ival);
/*< 	    if( ival .le. 0 ) goto 20002 >*/
	if (ival <= 0) {
	    goto L20002;
	}
/*< 	    call addval(4, 0,251,  -1, -1 ) >*/
	addval_(&c__4, &c__0, &c__251, &c_n1, &c_n1);
/*< 	    goto 20100 >*/
	goto L20100;
/*< 20002	    call getval(5, 0,254,  type, iobj, itype ) >*/
L20002:
	getval_(&c__5, &c__0, &c__254, &type__, &iobj, &itype);
/*< 	    call getval(5, 0,255,  direxn, iobj, idir ) >*/
	getval_(&c__5, &c__0, &c__255, &direxn, &iobj, &idir);
/*< 	    call getval(6, 0,256,  pos, iobj, 1, ix ) >*/
	getval_(&c__6, &c__0, &c__256, &pos, &iobj, &c__1, &ix);
/*< 	    call getval(6, 0,257,  pos, iobj, 2, iy ) >*/
	getval_(&c__6, &c__0, &c__257, &pos, &iobj, &c__2, &iy);
/*< 	    if( itype .ne. 2 ) goto 20010 >*/
	if (itype != 2) {
	    goto L20010;
	}
/*< 	    jobj = idir >*/
	jobj = idir;
/*< 	    ival = 0 >*/
	ival = 0;
/*< 	    if( jobj .ne. 0 ) call getval(5, 0,261,  inuse, jobj, ival ) >*/
	if (jobj != 0) {
	    getval_(&c__5, &c__0, &c__261, &inuse, &jobj, &ival);
	}
/*< 	    if( ival .ne. 0 ) call getval(5, 0,262,  type, jobj, ival ) >*/
	if (ival != 0) {
	    getval_(&c__5, &c__0, &c__262, &type__, &jobj, &ival);
	}
/*< 	    if( ival .eq. 1 ) goto 20005 >*/
	if (ival == 1) {
	    goto L20005;
	}
/*< 	    j = 0 >*/
	j = 0;
/*< 20003	    j = j + 1 >*/
L20003:
	++j;
/*< 	    if( j .gt. 30 ) goto 20100 >*/
	if (j > 30) {
	    goto L20100;
	}
/*< 	    jobj = iran( 100 ) >*/
	jobj = iran_(&c__100);
/*< 	    call getval(5, 0,268,  inuse, jobj, ival ) >*/
	getval_(&c__5, &c__0, &c__268, &inuse, &jobj, &ival);
/*< 	    if( ival .eq. 0 ) goto 20003 >*/
	if (ival == 0) {
	    goto L20003;
	}
/*< 	    call getval(5, 0,270,  type, jobj, ival ) >*/
	getval_(&c__5, &c__0, &c__270, &type__, &jobj, &ival);
/*< 	    if( ival .ne. 1 ) goto 20003 >*/
	if (ival != 1) {
	    goto L20003;
	}
/*< 	    call putval(5, 0,272,  direxn, iobj, jobj ) >*/
	putval_(&c__5, &c__0, &c__272, &direxn, &iobj, &jobj);
/*< 20005	    call getval(6, 0,273,  pos, jobj, 1, imx ) >*/
L20005:
	getval_(&c__6, &c__0, &c__273, &pos, &jobj, &c__1, &imx);
/*< 	    if( imx .gt. 100 ) goto 20003 >*/
	if (imx > 100) {
	    goto L20003;
	}
/*< 	    call getval(6, 0,275,  pos, jobj, 2, imy ) >*/
	getval_(&c__6, &c__0, &c__275, &pos, &jobj, &c__2, &imy);
/*< 	    idir = isgn(imx-ix) + 3*isgn(imy-iy) + 5 >*/
	i__1 = imx - ix;
	i__2 = imy - iy;
	idir = isgn_(&i__1) + isgn_(&i__2) * 3 + 5;
/*< 	    i >*/
	if (imx != ix && imy != iy && imx - ix != imy - iy && ix - imx != imy 
		- iy) {
	    goto L20010;
	}
/*< 	    call torp >*/
	torp_();
/*< 	    call putval(5, 0,280,  whosen, itorp, iobj ) >*/
	putval_(&c__5, &c__0, &c__280, &whosen, &itorp, &iobj);
/*< 	    call putval(5, 0,281,  recovr, iobj, 6 ) >*/
	putval_(&c__5, &c__0, &c__281, &recovr, &iobj, &c__6);
/*< 	    goto 20100 >*/
	goto L20100;
/*< 20010	    if( idir .eq. 5 ) goto 20100 >*/
L20010:
	if (idir == 5) {
	    goto L20100;
	}
/*< 	    call getval(5, 0,285,  charep, iobj, ichar ) >*/
	getval_(&c__5, &c__0, &c__285, &charep, &iobj, &ichar);
/*< 	    inx = ix + xdir( idir ) >*/
	inx = ix + xdir[idir - 1];
/*< 	    iny = iy + ydir( idir ) >*/
	iny = iy + ydir[idir - 1];
/*< 	    inchar = ichrat( inx, iny ) >*/
	inchar = ichrat_(&inx, &iny);
/*< 	    if( inchar .eq. 32 ) goto 20050 >*/
	if (inchar == 32) {
	    goto L20050;
	}
/*< 	    i >*/
	if (inchar == 42 && itype == 2) {
	    putval_(&c__5, &c__0, &c__291, &recovr, &iobj, &c__10);
	}
/*< 	    if( inchar .eq. 42 .and. itype .eq. 2 ) goto 20050 >*/
	if (inchar == 42 && itype == 2) {
	    goto L20050;
	}
/*< 	    call putval(5, 0,293,  conflg, iobj, 0 ) >*/
	putval_(&c__5, &c__0, &c__293, &conflg, &iobj, &c__0);
/*< 	    call putval(5, 0,294,  direxn, iobj, 5 ) >*/
	putval_(&c__5, &c__0, &c__294, &direxn, &iobj, &c__5);
/*< 	    if( itype .ne. 3 ) goto 20100 >*/
	if (itype != 3) {
	    goto L20100;
	}
/*< 	    if( inchar .eq. 42 ) goto 20020 >*/
	if (inchar == 42) {
	    goto L20020;
	}
/*< 	    i >*/
	if ((inchar <= 64 || inchar >= 91) && inchar != 46 && inchar != 64) {
	    goto L20025;
	}
/*< 	    do 20013 j = 1, 100 >*/
	for (j = 1; j <= 100; ++j) {
/*< 		jobj = j >*/
	    jobj = j;
/*< 		call getval(5, 0,301,  inuse, jobj, ival ) >*/
	    getval_(&c__5, &c__0, &c__301, &inuse, &jobj, &ival);
/*< 		if( ival .eq. 0 ) goto 20013 >*/
	    if (ival == 0) {
		goto L20013;
	    }
/*< 		call getval(6, 0,303,  pos, jobj, 1, ival ) >*/
	    getval_(&c__6, &c__0, &c__303, &pos, &jobj, &c__1, &ival);
/*< 		if( ival .ne. inx ) goto 20013 >*/
	    if (ival != inx) {
		goto L20013;
	    }
/*< 		call getval(6, 0,305,  pos, jobj, 2, ival ) >*/
	    getval_(&c__6, &c__0, &c__305, &pos, &jobj, &c__2, &ival);
/*< 		if( ival .eq. iny ) goto 20015 >*/
	    if (ival == iny) {
		goto L20015;
	    }
/*< 20013	    continue >*/
L20013:
	    ;
	}
/*< 20015	    continue >*/
L20015:
/*< 	    call putval(5, 0,309,  inuse, jobj, 0 ) >*/
	putval_(&c__5, &c__0, &c__309, &inuse, &jobj, &c__0);
/*< 	    if( inchar .eq. 46 ) goto 20020 >*/
	if (inchar == 46) {
	    goto L20020;
	}
/*< 	    call getval(5, 0,311,  whosen, iobj, jobj ) >*/
	getval_(&c__5, &c__0, &c__311, &whosen, &iobj, &jobj);
/*< 	    call getval(5, 0,312,  inuse, jobj, ival ) >*/
	getval_(&c__5, &c__0, &c__312, &inuse, &jobj, &ival);
/*< 	    if( ival .eq. 0 ) goto 20020 >*/
	if (ival == 0) {
	    goto L20020;
	}
/*< 	    call getval(5, 0,314,  type, jobj, ival ) >*/
	getval_(&c__5, &c__0, &c__314, &type__, &jobj, &ival);
/*< 	    if( ival .ne. 1 ) goto 20020 >*/
	if (ival != 1) {
	    goto L20020;
	}
/*< 	    if( inchar .eq. 64 ) call addval(6, 0,316,  score, jobj, 1, 1 ) >*/
	if (inchar == 64) {
	    addval_(&c__6, &c__0, &c__316, &score, &jobj, &c__1, &c__1);
	}
/*< 	    if( inchar .ne. 64 ) call addval(6, 0,317,  score, jobj, 2, 1 ) >*/
	if (inchar != 64) {
	    addval_(&c__6, &c__0, &c__317, &score, &jobj, &c__2, &c__1);
	}
/*< 20020	    call cursor( inx, iny ) >*/
L20020:
	cursor_(&inx, &iny);
/*< 	    call pback( iclbla ) >*/
	pback_(&col_1.iclbla);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    if( inchar .ne. 64 ) goto 20025 >*/
	if (inchar != 64) {
	    goto L20025;
	}
/*< 	    call addval(5, 0,322,  useful, 2, -1 ) >*/
	addval_(&c__5, &c__0, &c__322, &useful, &c__2, &c_n1);
/*< 	    if( nuser(0) .le. 1 ) call makmon >*/
	if (nuser_(&c__0) <= 1) {
	    makmon_();
	}
/*< 20025	    call putval(5, 0,324,  inuse, iobj, 0 ) >*/
L20025:
	putval_(&c__5, &c__0, &c__324, &inuse, &iobj, &c__0);
/*< 	    if( ichrat( ix, iy ) .ne. ichar ) goto 20100 >*/
	if (ichrat_(&ix, &iy) != ichar) {
	    goto L20100;
	}
/*< 	    call cursor( ix, iy ) >*/
	cursor_(&ix, &iy);
/*< 	    call pback( iclbla ) >*/
	pback_(&col_1.iclbla);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 	    goto 20100 >*/
	goto L20100;
/*< 20050	    call cursor( ix, iy ) >*/
L20050:
	cursor_(&ix, &iy);
/*< 	    if(ichrat(ix,iy).ne.ichar) goto 20055 >*/
	if (ichrat_(&ix, &iy) != ichar) {
	    goto L20055;
	}
/*< 	    call pback( iclbla ) >*/
	pback_(&col_1.iclbla);
/*< 	    call chrout(32) >*/
	chrout_(&c__32);
/*< 20055	    call putval(6, 0,335,  pos, iobj, 1, inx ) >*/
L20055:
	putval_(&c__6, &c__0, &c__335, &pos, &iobj, &c__1, &inx);
/*< 	    call putval(6, 0,336,  pos, iobj, 2, iny ) >*/
	putval_(&c__6, &c__0, &c__336, &pos, &iobj, &c__2, &iny);
/*< 	    call cursor( inx, iny ) >*/
	cursor_(&inx, &iny);
/*< 	    call pback( iclbla ) >*/
	pback_(&col_1.iclbla);
/*< 	    if( ichar .eq. 46 ) call pcolor( iclred ) >*/
	if (ichar == 46) {
	    pcolor_(&col_1.iclred);
	}
/*< 	    if( ichar .eq. 64 ) call pcolor( iclyel ) >*/
	if (ichar == 64) {
	    pcolor_(&col_1.iclyel);
	}
/*< 	    if( ichar.gt.65 .and. ichar.le.90 ) call pcolor(iclwhi) >*/
	if (ichar > 65 && ichar <= 90) {
	    pcolor_(&col_1.iclwhi);
	}
/*< 	    call chrout( ichar ) >*/
	chrout_(&ichar);
/*< 	    call getval(5, 0,343,  conflg, iobj, ival ) >*/
	getval_(&c__5, &c__0, &c__343, &conflg, &iobj, &ival);
/*< 	    if( ival .eq. 0 ) call putval(5, 0,344,  direxn, iobj, 5 ) >*/
	if (ival == 0) {
	    putval_(&c__5, &c__0, &c__344, &direxn, &iobj, &c__5);
	}
/*< 20100	continue >*/
L20100:
	;
    }
/*< 	call putval(5, 0,346,  useful, 1, 0 ) >*/
    putval_(&c__5, &c__0, &c__346, &useful, &c__1, &c__0);
/*< 	goto 10100 >*/
    goto L10100;

/*< 	entry torph >*/

L_torph:
/*< 	itorp = ifind(0) >*/
    itorp = ifind_(&c__0);
/*< 	if( itorp .eq. 0 ) goto 30290 >*/
    if (itorp == 0) {
	goto L30290;
    }
/*< 	call putval(6, 0,353,  pos, itorp, 1, ix ) >*/
    putval_(&c__6, &c__0, &c__353, &pos, &itorp, &c__1, &ix);
/*< 	call putval(6, 0,354,  pos, itorp, 2, iy ) >*/
    putval_(&c__6, &c__0, &c__354, &pos, &itorp, &c__2, &iy);
/*< 	call putval(5, 0,355,  type, itorp, 3 ) >*/
    putval_(&c__5, &c__0, &c__355, &type__, &itorp, &c__3);
/*< 	call putval(5, 0,356,  charep, itorp, 46 ) >*/
    putval_(&c__5, &c__0, &c__356, &charep, &itorp, &c__46);
/*< 	call putval(5, 0,357,  direxn, itorp, idir ) >*/
    putval_(&c__5, &c__0, &c__357, &direxn, &itorp, &idir);
/*< 	call putval(5, 0,358,  conflg, itorp, 1 ) >*/
    putval_(&c__5, &c__0, &c__358, &conflg, &itorp, &c__1);
/*< 30290	call unlock >*/
L30290:
    unlock_();
/*< 	return >*/
    return 0;

/*< 	entry ifindr( iobjp ) >*/

L_ifindr:
/*< 	call lock >*/
    lock_();
/*< 	do 40100 iobjp = 1, 100 >*/
    for (*iobjp = 1; *iobjp <= 100; ++(*iobjp)) {
/*< 	    call getval(5, 0,365,  inuse, iobjp+0, ival ) >*/
	i__1 = *iobjp;
	getval_(&c__5, &c__0, &c__365, &inuse, &i__1, &ival);
/*< 	    if( ival .eq. 0 ) goto 40200 >*/
	if (ival == 0) {
	    goto L40200;
	}
/*< 40100	continue >*/
/* L40100: */
    }
/*< 	iobjp = 0 >*/
    *iobjp = 0;
/*< 	return >*/
    return 0;
/*< 40200	call putval(4, 0,371,  -1, 1 ) >*/
L40200:
    putval_(&c__4, &c__0, &c__371, &c_n1, &c__1);
/*< 	call putval(5, 0,372,  recovr, iobjp, 0 ) >*/
    putval_(&c__5, &c__0, &c__372, &recovr, iobjp, &c__0);
/*< 	return >*/
    return 0;

/*< 	entry makemo >*/

L_makemo:
/*< 	imon = ifind(0) >*/
    imon = ifind_(&c__0);
/*< 	if( imon .eq. 0 ) call unlock >*/
    if (imon == 0) {
	unlock_();
    }
/*< 	if( imon .eq. 0 ) return >*/
    if (imon == 0) {
	return 0;
    }
/*< 50100	imx = iran( 80 ) >*/
L50100:
    imx = iran_(&c__80);
/*< 	imy = iran( 20 ) + 3 >*/
    imy = iran_(&c__20) + 3;
/*< 	if( ichrat( imx, imy ) .ne. 32 ) goto 50100 >*/
    if (ichrat_(&imx, &imy) != 32) {
	goto L50100;
    }
/*< 	call cursor( imx, imy ) >*/
    cursor_(&imx, &imy);
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	call pcolor( iclyel ) >*/
    pcolor_(&col_1.iclyel);
/*< 	call chrout( 64 ) >*/
    chrout_(&c__64);
/*< 	call putval(6, 0,386,  pos, imon, 1, imx ) >*/
    putval_(&c__6, &c__0, &c__386, &pos, &imon, &c__1, &imx);
/*< 	call putval(6, 0,387,  pos, imon, 2, imy ) >*/
    putval_(&c__6, &c__0, &c__387, &pos, &imon, &c__2, &imy);
/*< 	call putval(5, 0,388,  direxn, imon, 0 ) >*/
    putval_(&c__5, &c__0, &c__388, &direxn, &imon, &c__0);
/*< 	call putval(5, 0,389,  conflg, imon, 0 ) >*/
    putval_(&c__5, &c__0, &c__389, &conflg, &imon, &c__0);
/*< 	call putval(5, 0,390,  type, imon, 2 ) >*/
    putval_(&c__5, &c__0, &c__390, &type__, &imon, &c__2);
/*< 	call putval(5, 0,391,  charep, imon, 64 ) >*/
    putval_(&c__5, &c__0, &c__391, &charep, &imon, &c__64);
/*< 	call addval(5, 0,392,  useful, 2, 1 ) >*/
    addval_(&c__5, &c__0, &c__392, &useful, &c__2, &c__1);
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;

/*< 	entry kilchr >*/

L_kilchr:
/*< 	call unlock >*/
    unlock_();
/*< 	call lock >*/
    lock_();
/*< 	call getval(6, 0,399,  pos, player, 1, ix ) >*/
    getval_(&c__6, &c__0, &c__399, &pos, &player, &c__1, &ix);
/*< 	call getval(6, 0,400,  pos, player, 2, iy ) >*/
    getval_(&c__6, &c__0, &c__400, &pos, &player, &c__2, &iy);
/*< 	call cursor( ix, iy ) >*/
    cursor_(&ix, &iy);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call putval(5, 0,403,  inuse, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__403, &inuse, &player, &c__0);
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* fmain_ */

/* Subroutine */ int fmain_()
{
    return fmain_0_(0, (integer *)0);
    }

/* Subroutine */ int torph_()
{
    return fmain_0_(1, (integer *)0);
    }

/* Subroutine */ int ifindr_(iobjp)
integer *iobjp;
{
    return fmain_0_(2, iobjp);
    }

/* Subroutine */ int makemo_()
{
    return fmain_0_(3, (integer *)0);
    }

/* Subroutine */ int kilchr_()
{
    return fmain_0_(4, (integer *)0);
    }


/*< 	subroutine cease( iflag ) >*/
/* Subroutine */ int cease_(iflag)
logical *iflag;
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    extern integer job_();
    extern /* Subroutine */ int close_(), enable_(), grafof_(), kilchr_(), 
	    clrscr_(), setdis_(), execut_();
    extern integer isxbit_();
    extern /* Subroutine */ int exprog_(), colstr_(), cursor_();

/*< 	logical iflag >*/
/*< 	commo >*/
/*< 	call enable >*/
    enable_();
/*< 	if( .not. iflag ) call kilchr >*/
    if (! (*iflag)) {
	kilchr_();
    }
/*< 	call grafof >*/
    grafof_();
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	if( i >*/
    if (*iflag) {
	colstr_(&col_1.iclred, "You have been hit by a bullet.^M^J^E", (
		ftnlen)36);
    }
/*< 	call close( 1 ) >*/
    close_(&c__1);

/* 	This will never work anywhere other than under Tops10 */
/*< 	if( job(1) .ne. 0 ) call execut( isxbit('%,@   ~') ) >*/
    if (job_(&c__1) != 0) {
	i__1 = isxbit_("%,@   ~", (ftnlen)7);
	execut_(&i__1);
    }

/*< 	call exprog >*/
    exprog_();
/*< 	end >*/
} /* cease_ */

/*< 	subroutine torp >*/
/* Subroutine */ int torp_()
{
    extern /* Subroutine */ int torph_();

/*< 	call torph >*/
    torph_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* torp_ */

/*< 	integer function ifind( dummy ) >*/
integer ifind_(dummy)
integer *dummy;
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    extern /* Subroutine */ int ifindr_();

/*< 	call ifindr( ifind ) >*/
    ifindr_(&ret_val);
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* ifind_ */

/*< 	subroutine makmon >*/
/* Subroutine */ int makmon_()
{
    extern /* Subroutine */ int makemo_();

/*< 	call makemo >*/
    makemo_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* makmon_ */

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

