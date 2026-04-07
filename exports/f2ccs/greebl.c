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

/* Table of constant values */

static integer c__6 = 6;
static integer c__0 = 0;
static integer c__82 = 82;
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
static integer c__117 = 117;
static integer c__100 = 100;
static integer c__119 = 119;
static integer c__121 = 121;
static integer c__7 = 7;
static integer c__122 = 122;
static integer c__123 = 123;
static integer c__125 = 125;
static integer c__36 = 36;
static integer c__126 = 126;
static integer c__127 = 127;
static integer c__128 = 128;
static integer c__129 = 129;
static integer c__130 = 130;
static integer c__131 = 131;
static integer c__132 = 132;
static integer c__149 = 149;
static integer c__154 = 154;
static integer c__163 = 163;
static integer c__164 = 164;
static integer c__165 = 165;
static integer c__166 = 166;
static integer c__167 = 167;
static integer c__168 = 168;
static integer c__169 = 169;
static integer c__170 = 170;
static integer c__171 = 171;
static integer c__172 = 172;
static integer c__183 = 183;
static integer c__184 = 184;
static integer c__197 = 197;
static logical c_true = TRUE_;
static integer c__200 = 200;
static integer c__41 = 41;
static integer c__205 = 205;
static integer c__65 = 65;
static integer c__214 = 214;
static integer c__215 = 215;
static logical c_false = FALSE_;
static integer c__233 = 233;
static integer c__235 = 235;
static integer c__236 = 236;
static integer c__239 = 239;
static integer c__240 = 240;
static integer c__244 = 244;
static integer c__245 = 245;
static integer c__4 = 4;
static integer c__246 = 246;
static integer c_n1 = -1;
static integer c__252 = 252;
static integer c__250 = 250;
static integer c__258 = 258;
static integer c__261 = 261;
static integer c__262 = 262;
static integer c_n6 = -6;
static integer c__268 = 268;
static integer c__270 = 270;
static integer c__272 = 272;
static integer c__275 = 275;
static integer c__276 = 276;
static integer c__277 = 277;
static integer c__278 = 278;
static integer c__282 = 282;
static integer c__283 = 283;
static integer c__289 = 289;
static integer c__291 = 291;
static integer c__293 = 293;
static integer c__294 = 294;
static integer c__296 = 296;
static integer c__301 = 301;
static integer c__302 = 302;
static integer c__306 = 306;
static integer c__312 = 312;
static integer c__10 = 10;
static integer c__314 = 314;
static integer c__315 = 315;
static integer c__322 = 322;
static integer c__324 = 324;
static integer c__326 = 326;
static integer c__330 = 330;
static integer c__332 = 332;
static integer c__333 = 333;
static integer c__335 = 335;
static integer c__337 = 337;
static integer c__338 = 338;
static integer c__32 = 32;
static integer c__343 = 343;
static integer c__345 = 345;
static integer c__356 = 356;
static integer c__357 = 357;
static integer c__364 = 364;
static integer c__365 = 365;
static integer c__367 = 367;
static integer c__374 = 374;
static integer c__375 = 375;
static integer c__376 = 376;
static integer c__377 = 377;
static integer c__46 = 46;
static integer c__378 = 378;
static integer c__379 = 379;
static integer c__386 = 386;
static integer c__392 = 392;
static integer c__393 = 393;
static integer c__64 = 64;
static integer c__407 = 407;
static integer c__408 = 408;
static integer c__409 = 409;
static integer c__410 = 410;
static integer c__411 = 411;
static integer c__412 = 412;
static integer c__413 = 413;
static integer c__420 = 420;
static integer c__421 = 421;
static integer c__424 = 424;

/* indx#	greebl.for - Multi-user game where the ballons are out to get you! */
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
/* doc#	greebl.for - Multi-user game where the ballons are out to get you! */
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
/*< 	call init(6, 0,82,  screen, 18, 24, 80 ) >*/
    init_(&c__6, &c__0, &c__82, &screen, &c__18, &c__24, &c__80);
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
/*< 	call init(5, 0,117,  inuse, 1, 100 ) >*/
    init_(&c__5, &c__0, &c__117, &inuse, &c__1, &c__100);
/*< 	do 210 i = 1, 100 >*/
    for (i__ = 1; i__ <= 100; ++i__) {
/*< 	    call putval(5, 0,119,  inuse, i+0, 0 ) >*/
	i__1 = i__;
	putval_(&c__5, &c__0, &c__119, &inuse, &i__1, &c__0);
/*< 210	continue >*/
/* L210: */
    }
/*< 	call init(6, 0,121,  pos, 7, 100, 2 ) >*/
    init_(&c__6, &c__0, &c__121, &pos, &c__7, &c__100, &c__2);
/*< 	call init(5, 0,122,  direxn, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__122, &direxn, &c__7, &c__100);
/*< 	call init(5, 0,123,  conflg, 1, 100 ) >*/
    init_(&c__5, &c__0, &c__123, &conflg, &c__1, &c__100);
/*< 	call init(5, 0,124,  type, 6, 100 ) >*/
    init_(&c__5, &c__0, &c__124, &type__, &c__6, &c__100);
/*< 	call init(5, 0,125,  useful, 36, 3 ) >*/
    init_(&c__5, &c__0, &c__125, &useful, &c__36, &c__3);
/*< 	call putval(5, 0,126,  useful, 1, 0 ) >*/
    putval_(&c__5, &c__0, &c__126, &useful, &c__1, &c__0);
/*< 	call putval(5, 0,127,  useful, 2, 0 ) >*/
    putval_(&c__5, &c__0, &c__127, &useful, &c__2, &c__0);
/*< 	call putval(5, 0,128,  useful, 3, 0 ) >*/
    putval_(&c__5, &c__0, &c__128, &useful, &c__3, &c__0);
/*< 	call init(5, 0,129,  charep, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__129, &charep, &c__7, &c__100);
/*< 	call init(5, 0,130,  recovr, 5, 100 ) >*/
    init_(&c__5, &c__0, &c__130, &recovr, &c__5, &c__100);
/*< 	call init(5, 0,131,  whosen, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__131, &whosen, &c__7, &c__100);
/*< 	call init(6, 0,132,  score, 18, 100, 2 ) >*/
    init_(&c__6, &c__0, &c__132, &score, &c__18, &c__100, &c__2);
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
/*< 	    call getval(5, 0,149,  inuse, i+0, ival ) >*/
	i__1 = i__;
	getval_(&c__5, &c__0, &c__149, &inuse, &i__1, &ival);
/*< 	    if( ival .eq. 1 ) goto 10023 >*/
	if (ival == 1) {
	    goto L10023;
	}
/*< 	    player = i >*/
	player = i__;
/*< 	    goto 10025 >*/
	goto L10025;
/*< 10023	    call getval(5, 0,154,  charep, i+0, ival ) >*/
L10023:
	i__1 = i__;
	getval_(&c__5, &c__0, &c__154, &charep, &i__1, &ival);
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
/*< 10040	call putval(5, 0,163,  inuse, player, 1 ) >*/
L10040:
    putval_(&c__5, &c__0, &c__163, &inuse, &player, &c__1);
/*< 	call putval(5, 0,164,  charep, player, ichar ) >*/
    putval_(&c__5, &c__0, &c__164, &charep, &player, &ichar);
/*< 	call putval(6, 0,165,  pos, player, 1, 127 ) >*/
    putval_(&c__6, &c__0, &c__165, &pos, &player, &c__1, &c__127);
/*< 	call putval(6, 0,166,  pos, player, 2, 127 ) >*/
    putval_(&c__6, &c__0, &c__166, &pos, &player, &c__2, &c__127);
/*< 	call putval(5, 0,167,  type, player, 1 ) >*/
    putval_(&c__5, &c__0, &c__167, &type__, &player, &c__1);
/*< 	call putval(5, 0,168,  direxn, player, 5 ) >*/
    putval_(&c__5, &c__0, &c__168, &direxn, &player, &c__5);
/*< 	call putval(5, 0,169,  conflg, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__169, &conflg, &player, &c__0);
/*< 	call putval(5, 0,170,  recovr, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__170, &recovr, &player, &c__0);
/*< 	call putval(6, 0,171,  score, player, 1, 0 ) >*/
    putval_(&c__6, &c__0, &c__171, &score, &player, &c__1, &c__0);
/*< 	call putval(6, 0,172,  score, player, 2, 0 ) >*/
    putval_(&c__6, &c__0, &c__172, &score, &player, &c__2, &c__0);
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
/*< 	call putval(6, 0,183,  pos, player, 1, ix ) >*/
    putval_(&c__6, &c__0, &c__183, &pos, &player, &c__1, &ix);
/*< 	call putval(6, 0,184,  pos, player, 2, iy ) >*/
    putval_(&c__6, &c__0, &c__184, &pos, &player, &c__2, &iy);
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
/*< 	call getval(5, 0,197,  inuse, player, ival ) >*/
    getval_(&c__5, &c__0, &c__197, &inuse, &player, &ival);
/*< 	if( ival .ne. 1 ) call cease( .true. ) >*/
    if (ival != 1) {
	cease_(&c_true);
    }
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call getval(6, 0,200,  score, player, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__200, &score, &player, &c__1, &ival);
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
/*< 10102	call getval(6, 0,205,  score, player, 2, ival ) >*/
L10102:
    getval_(&c__6, &c__0, &c__205, &score, &player, &c__2, &ival);
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
/*< 	call putval(5, 0,214,  conflg, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__214, &conflg, &player, &c__0);
/*< 	call putval(5, 0,215,  direxn, player, 5 ) >*/
    putval_(&c__5, &c__0, &c__215, &direxn, &player, &c__5);
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
/*< 	call getval(5, 0,233,  recovr, player, ival ) >*/
    getval_(&c__5, &c__0, &c__233, &recovr, &player, &ival);
/*< 	if( ival .gt. 0 ) goto 10110 >*/
    if (ival > 0) {
	goto L10110;
    }
/*< 	call getval(6, 0,235,  pos, player, 1, ix ) >*/
    getval_(&c__6, &c__0, &c__235, &pos, &player, &c__1, &ix);
/*< 	call getval(6, 0,236,  pos, player, 2, iy ) >*/
    getval_(&c__6, &c__0, &c__236, &pos, &player, &c__2, &iy);
/*< 	idir = ichar-48 >*/
    idir = ichar - 48;
/*< 	call torp >*/
    torp_();
/*< 	call putval(5, 0,239,  whosen, itorp, player ) >*/
    putval_(&c__5, &c__0, &c__239, &whosen, &itorp, &player);
/*< 	call putval(5, 0,240,  recovr, player, 5 ) >*/
    putval_(&c__5, &c__0, &c__240, &recovr, &player, &c__5);
/*< 	goto 10110 >*/
    goto L10110;
/*< 10300	continue >*/
L10300:
/*< 	call putval(5, 0,244,  direxn, player, ichar-48 ) >*/
    i__1 = ichar - 48;
    putval_(&c__5, &c__0, &c__244, &direxn, &player, &i__1);
/*< 	call putval(5, 0,245,  conflg, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__245, &conflg, &player, &c__0);
/*< 	if( reping ) call putval(4, 0,246,  -1, 1 ) >*/
    if (reping) {
	putval_(&c__4, &c__0, &c__246, &c_n1, &c__1);
    }
/*< 	reping = .false. >*/
    reping = FALSE_;
/*< 	goto 10110 >*/
    goto L10110;

/* ****************************** MOVES ******************************* */
/*< 20000	call lock >*/
L20000:
    lock_();
/*< 	call getval(5, 0,252,  useful, 1, ival ) >*/
    getval_(&c__5, &c__0, &c__252, &useful, &c__1, &ival);
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
/*< 20001	call putval(5, 0,258,  useful, 1, 1 ) >*/
L20001:
    putval_(&c__5, &c__0, &c__258, &useful, &c__1, &c__1);
/*< 	call unlock >*/
    unlock_();
/*< 	call nap( 250, 4 ) >*/
    nap_(&c__250, &c__4);
/*< 	call getval(5, 0,261,  useful, 3, ival ) >*/
    getval_(&c__5, &c__0, &c__261, &useful, &c__3, &ival);
/*< 	call addval(4, 0,262,  -1, 1 ) >*/
    addval_(&c__4, &c__0, &c__262, &c_n1, &c__1);
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
/*< 	    call getval(5, 0,268,  inuse, iobj, ival ) >*/
	getval_(&c__5, &c__0, &c__268, &inuse, &iobj, &ival);
/*< 	    if( ival .eq. 0 ) goto 20100 >*/
	if (ival == 0) {
	    goto L20100;
	}
/*< 	    call getval(5, 0,270,  recovr, iobj, ival ) >*/
	getval_(&c__5, &c__0, &c__270, &recovr, &iobj, &ival);
/*< 	    if( ival .le. 0 ) goto 20002 >*/
	if (ival <= 0) {
	    goto L20002;
	}
/*< 	    call addval(4, 0,272,  -1, -1 ) >*/
	addval_(&c__4, &c__0, &c__272, &c_n1, &c_n1);
/*< 	    goto 20100 >*/
	goto L20100;
/*< 20002	    call getval(5, 0,275,  type, iobj, itype ) >*/
L20002:
	getval_(&c__5, &c__0, &c__275, &type__, &iobj, &itype);
/*< 	    call getval(5, 0,276,  direxn, iobj, idir ) >*/
	getval_(&c__5, &c__0, &c__276, &direxn, &iobj, &idir);
/*< 	    call getval(6, 0,277,  pos, iobj, 1, ix ) >*/
	getval_(&c__6, &c__0, &c__277, &pos, &iobj, &c__1, &ix);
/*< 	    call getval(6, 0,278,  pos, iobj, 2, iy ) >*/
	getval_(&c__6, &c__0, &c__278, &pos, &iobj, &c__2, &iy);
/*< 	    if( itype .ne. 2 ) goto 20010 >*/
	if (itype != 2) {
	    goto L20010;
	}
/*< 	    jobj = idir >*/
	jobj = idir;
/*< 	    ival = 0 >*/
	ival = 0;
/*< 	    if( jobj .ne. 0 ) call getval(5, 0,282,  inuse, jobj, ival ) >*/
	if (jobj != 0) {
	    getval_(&c__5, &c__0, &c__282, &inuse, &jobj, &ival);
	}
/*< 	    if( ival .ne. 0 ) call getval(5, 0,283,  type, jobj, ival ) >*/
	if (ival != 0) {
	    getval_(&c__5, &c__0, &c__283, &type__, &jobj, &ival);
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
/*< 	    call getval(5, 0,289,  inuse, jobj, ival ) >*/
	getval_(&c__5, &c__0, &c__289, &inuse, &jobj, &ival);
/*< 	    if( ival .eq. 0 ) goto 20003 >*/
	if (ival == 0) {
	    goto L20003;
	}
/*< 	    call getval(5, 0,291,  type, jobj, ival ) >*/
	getval_(&c__5, &c__0, &c__291, &type__, &jobj, &ival);
/*< 	    if( ival .ne. 1 ) goto 20003 >*/
	if (ival != 1) {
	    goto L20003;
	}
/*< 	    call putval(5, 0,293,  direxn, iobj, jobj ) >*/
	putval_(&c__5, &c__0, &c__293, &direxn, &iobj, &jobj);
/*< 20005	    call getval(6, 0,294,  pos, jobj, 1, imx ) >*/
L20005:
	getval_(&c__6, &c__0, &c__294, &pos, &jobj, &c__1, &imx);
/*< 	    if( imx .gt. 100 ) goto 20003 >*/
	if (imx > 100) {
	    goto L20003;
	}
/*< 	    call getval(6, 0,296,  pos, jobj, 2, imy ) >*/
	getval_(&c__6, &c__0, &c__296, &pos, &jobj, &c__2, &imy);
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
/*< 	    call putval(5, 0,301,  whosen, itorp, iobj ) >*/
	putval_(&c__5, &c__0, &c__301, &whosen, &itorp, &iobj);
/*< 	    call putval(5, 0,302,  recovr, iobj, 6 ) >*/
	putval_(&c__5, &c__0, &c__302, &recovr, &iobj, &c__6);
/*< 	    goto 20100 >*/
	goto L20100;
/*< 20010	    if( idir .eq. 5 ) goto 20100 >*/
L20010:
	if (idir == 5) {
	    goto L20100;
	}
/*< 	    call getval(5, 0,306,  charep, iobj, ichar ) >*/
	getval_(&c__5, &c__0, &c__306, &charep, &iobj, &ichar);
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
	    putval_(&c__5, &c__0, &c__312, &recovr, &iobj, &c__10);
	}
/*< 	    if( inchar .eq. 42 .and. itype .eq. 2 ) goto 20050 >*/
	if (inchar == 42 && itype == 2) {
	    goto L20050;
	}
/*< 	    call putval(5, 0,314,  conflg, iobj, 0 ) >*/
	putval_(&c__5, &c__0, &c__314, &conflg, &iobj, &c__0);
/*< 	    call putval(5, 0,315,  direxn, iobj, 5 ) >*/
	putval_(&c__5, &c__0, &c__315, &direxn, &iobj, &c__5);
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
/*< 		call getval(5, 0,322,  inuse, jobj, ival ) >*/
	    getval_(&c__5, &c__0, &c__322, &inuse, &jobj, &ival);
/*< 		if( ival .eq. 0 ) goto 20013 >*/
	    if (ival == 0) {
		goto L20013;
	    }
/*< 		call getval(6, 0,324,  pos, jobj, 1, ival ) >*/
	    getval_(&c__6, &c__0, &c__324, &pos, &jobj, &c__1, &ival);
/*< 		if( ival .ne. inx ) goto 20013 >*/
	    if (ival != inx) {
		goto L20013;
	    }
/*< 		call getval(6, 0,326,  pos, jobj, 2, ival ) >*/
	    getval_(&c__6, &c__0, &c__326, &pos, &jobj, &c__2, &ival);
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
/*< 	    call putval(5, 0,330,  inuse, jobj, 0 ) >*/
	putval_(&c__5, &c__0, &c__330, &inuse, &jobj, &c__0);
/*< 	    if( inchar .eq. 46 ) goto 20020 >*/
	if (inchar == 46) {
	    goto L20020;
	}
/*< 	    call getval(5, 0,332,  whosen, iobj, jobj ) >*/
	getval_(&c__5, &c__0, &c__332, &whosen, &iobj, &jobj);
/*< 	    call getval(5, 0,333,  inuse, jobj, ival ) >*/
	getval_(&c__5, &c__0, &c__333, &inuse, &jobj, &ival);
/*< 	    if( ival .eq. 0 ) goto 20020 >*/
	if (ival == 0) {
	    goto L20020;
	}
/*< 	    call getval(5, 0,335,  type, jobj, ival ) >*/
	getval_(&c__5, &c__0, &c__335, &type__, &jobj, &ival);
/*< 	    if( ival .ne. 1 ) goto 20020 >*/
	if (ival != 1) {
	    goto L20020;
	}
/*< 	    if( inchar .eq. 64 ) call addval(6, 0,337,  score, jobj, 1, 1 ) >*/
	if (inchar == 64) {
	    addval_(&c__6, &c__0, &c__337, &score, &jobj, &c__1, &c__1);
	}
/*< 	    if( inchar .ne. 64 ) call addval(6, 0,338,  score, jobj, 2, 1 ) >*/
	if (inchar != 64) {
	    addval_(&c__6, &c__0, &c__338, &score, &jobj, &c__2, &c__1);
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
/*< 	    call addval(5, 0,343,  useful, 2, -1 ) >*/
	addval_(&c__5, &c__0, &c__343, &useful, &c__2, &c_n1);
/*< 	    if( nuser(0) .le. 1 ) call makmon >*/
	if (nuser_(&c__0) <= 1) {
	    makmon_();
	}
/*< 20025	    call putval(5, 0,345,  inuse, iobj, 0 ) >*/
L20025:
	putval_(&c__5, &c__0, &c__345, &inuse, &iobj, &c__0);
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
/*< 20055	    call putval(6, 0,356,  pos, iobj, 1, inx ) >*/
L20055:
	putval_(&c__6, &c__0, &c__356, &pos, &iobj, &c__1, &inx);
/*< 	    call putval(6, 0,357,  pos, iobj, 2, iny ) >*/
	putval_(&c__6, &c__0, &c__357, &pos, &iobj, &c__2, &iny);
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
/*< 	    call getval(5, 0,364,  conflg, iobj, ival ) >*/
	getval_(&c__5, &c__0, &c__364, &conflg, &iobj, &ival);
/*< 	    if( ival .eq. 0 ) call putval(5, 0,365,  direxn, iobj, 5 ) >*/
	if (ival == 0) {
	    putval_(&c__5, &c__0, &c__365, &direxn, &iobj, &c__5);
	}
/*< 20100	continue >*/
L20100:
	;
    }
/*< 	call putval(5, 0,367,  useful, 1, 0 ) >*/
    putval_(&c__5, &c__0, &c__367, &useful, &c__1, &c__0);
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
/*< 	call putval(6, 0,374,  pos, itorp, 1, ix ) >*/
    putval_(&c__6, &c__0, &c__374, &pos, &itorp, &c__1, &ix);
/*< 	call putval(6, 0,375,  pos, itorp, 2, iy ) >*/
    putval_(&c__6, &c__0, &c__375, &pos, &itorp, &c__2, &iy);
/*< 	call putval(5, 0,376,  type, itorp, 3 ) >*/
    putval_(&c__5, &c__0, &c__376, &type__, &itorp, &c__3);
/*< 	call putval(5, 0,377,  charep, itorp, 46 ) >*/
    putval_(&c__5, &c__0, &c__377, &charep, &itorp, &c__46);
/*< 	call putval(5, 0,378,  direxn, itorp, idir ) >*/
    putval_(&c__5, &c__0, &c__378, &direxn, &itorp, &idir);
/*< 	call putval(5, 0,379,  conflg, itorp, 1 ) >*/
    putval_(&c__5, &c__0, &c__379, &conflg, &itorp, &c__1);
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
/*< 	    call getval(5, 0,386,  inuse, iobjp+0, ival ) >*/
	i__1 = *iobjp;
	getval_(&c__5, &c__0, &c__386, &inuse, &i__1, &ival);
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
/*< 40200	call putval(4, 0,392,  -1, 1 ) >*/
L40200:
    putval_(&c__4, &c__0, &c__392, &c_n1, &c__1);
/*< 	call putval(5, 0,393,  recovr, iobjp, 0 ) >*/
    putval_(&c__5, &c__0, &c__393, &recovr, iobjp, &c__0);
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
/*< 	call putval(6, 0,407,  pos, imon, 1, imx ) >*/
    putval_(&c__6, &c__0, &c__407, &pos, &imon, &c__1, &imx);
/*< 	call putval(6, 0,408,  pos, imon, 2, imy ) >*/
    putval_(&c__6, &c__0, &c__408, &pos, &imon, &c__2, &imy);
/*< 	call putval(5, 0,409,  direxn, imon, 0 ) >*/
    putval_(&c__5, &c__0, &c__409, &direxn, &imon, &c__0);
/*< 	call putval(5, 0,410,  conflg, imon, 0 ) >*/
    putval_(&c__5, &c__0, &c__410, &conflg, &imon, &c__0);
/*< 	call putval(5, 0,411,  type, imon, 2 ) >*/
    putval_(&c__5, &c__0, &c__411, &type__, &imon, &c__2);
/*< 	call putval(5, 0,412,  charep, imon, 64 ) >*/
    putval_(&c__5, &c__0, &c__412, &charep, &imon, &c__64);
/*< 	call addval(5, 0,413,  useful, 2, 1 ) >*/
    addval_(&c__5, &c__0, &c__413, &useful, &c__2, &c__1);
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
/*< 	call getval(6, 0,420,  pos, player, 1, ix ) >*/
    getval_(&c__6, &c__0, &c__420, &pos, &player, &c__1, &ix);
/*< 	call getval(6, 0,421,  pos, player, 2, iy ) >*/
    getval_(&c__6, &c__0, &c__421, &pos, &player, &c__2, &iy);
/*< 	call cursor( ix, iy ) >*/
    cursor_(&ix, &iy);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call putval(5, 0,424,  inuse, player, 0 ) >*/
    putval_(&c__5, &c__0, &c__424, &inuse, &player, &c__0);
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

