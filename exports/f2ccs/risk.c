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
static integer c__5 = 5;
static integer c__0 = 0;
static integer c__55 = 55;
static integer c__56 = 56;
static integer c__2 = 2;
static integer c__57 = 57;
static integer c__7 = 7;
static integer c__61 = 61;
static integer c__3 = 3;
static integer c__4 = 4;
static integer c__62 = 62;
static integer c_n1 = -1;
static integer c__26 = 26;
static integer c__6 = 6;
static integer c__73 = 73;
static integer c__75 = 75;
static integer c__77 = 77;
static integer c__78 = 78;
static integer c__1000 = 1000;
static integer c__82 = 82;
static integer c__90 = 90;
static integer c__91 = 91;
static integer c__99 = 99;
static integer c__103 = 103;
static integer c__105 = 105;
static integer c__109 = 109;
static integer c__111 = 111;
static integer c__113 = 113;
static integer c__32 = 32;
static integer c__8 = 8;
static integer c__58 = 58;
static integer c__137 = 137;
static integer c__139 = 139;
static integer c__20 = 20;
static integer c__12 = 12;
static integer c__10 = 10;
static integer c__193 = 193;
static integer c__195 = 195;
static integer c__197 = 197;
static integer c__200 = 200;
static integer c__201 = 201;
static integer c__205 = 205;
static integer c__210 = 210;
static integer c__211 = 211;
static integer c__212 = 212;
static integer c__213 = 213;
static integer c__214 = 214;
static integer c__215 = 215;
static integer c__227 = 227;
static integer c__36 = 36;
static integer c__228 = 228;
static integer c__18 = 18;
static integer c__24 = 24;
static integer c__80 = 80;
static integer c__229 = 229;
static integer c__230 = 230;
static integer c__231 = 231;
static integer c__232 = 232;
static integer c__233 = 233;
static integer c__235 = 235;
static integer c__236 = 236;
static integer c__100 = 100;
static integer c__237 = 237;
static integer c__238 = 238;
static integer c__239 = 239;
static integer c__240 = 240;
static integer c__279 = 279;
static integer c__282 = 282;
static integer c__283 = 283;
static integer c__286 = 286;
static integer c__294 = 294;
static integer c__301 = 301;
static integer c__304 = 304;
static integer c__308 = 308;
static integer c__9 = 9;
static integer c__323 = 323;
static integer c__326 = 326;
static integer c__328 = 328;
static integer c__332 = 332;
static integer c__337 = 337;
static integer c__341 = 341;
static integer c__342 = 342;
static integer c__343 = 343;
static integer c__345 = 345;
static integer c__346 = 346;
static integer c__347 = 347;
static integer c__349 = 349;
static integer c__350 = 350;
static integer c__353 = 353;
static integer c__357 = 357;
static integer c__358 = 358;
static integer c__360 = 360;
static integer c__361 = 361;
static integer c__362 = 362;
static integer c__363 = 363;
static integer c__364 = 364;
static integer c__11 = 11;
static integer c__381 = 381;
static integer c__383 = 383;
static integer c__388 = 388;
static integer c__389 = 389;
static integer c__391 = 391;
static integer c__393 = 393;
static integer c__394 = 394;
static integer c__402 = 402;
static integer c__404 = 404;
static integer c__406 = 406;
static integer c__410 = 410;
static integer c__413 = 413;
static integer c__415 = 415;
static integer c__421 = 421;
static integer c__425 = 425;
static integer c__427 = 427;
static integer c__432 = 432;
static integer c__434 = 434;
static integer c__435 = 435;
static integer c__444 = 444;
static integer c__446 = 446;
static integer c__448 = 448;
static integer c__449 = 449;
static integer c__450 = 450;
static integer c__451 = 451;
static integer c__452 = 452;
static integer c__455 = 455;
static integer c__456 = 456;
static integer c__463 = 463;
static integer c__464 = 464;
static integer c__465 = 465;
static integer c_n2 = -2;
static integer c__469 = 469;
static integer c__476 = 476;
static integer c__3000 = 3000;
static integer c__587 = 587;

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
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static logical new__ = TRUE_;
    static integer numat = 6;
    static integer contan = 7;
    static integer conarm = 8;
    static integer regfrm = 9;
    static integer regto = 10;
    static integer amtmov = 11;
    static integer timlft = 12;
    static integer whos = 13;
    static integer strtnm = 10;
    static integer lstpos = 0;
    static integer intrvl = 200;
    static integer useful = 1;
    static integer screen = 2;
    static integer coord = 3;
    static integer disto = 4;
    static integer owner = 5;

    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Builtin functions */
    double sqrt();

    /* Local variables */
    static integer i__, j, r1, r2, ic, ix, iy, iy1;
    static logical eof;
    extern /* Subroutine */ int bug_(), nap_();
    static integer par, ilen;
    extern /* Subroutine */ int lock_();
    extern integer iran_(), icon_();
    static integer ival, best;
    extern /* Subroutine */ int init_();
    static integer cpos, dist;
    extern /* Subroutine */ int check_(), cease_(), pback_();
    static integer ichar;
    extern /* Subroutine */ int ofile_(), rfile_(), close_();
    static logical privd;
    static integer itest;
    extern /* Subroutine */ int pstop_(), defadr_(), enable_(), addval_();
    static integer comara[80];
    extern /* Subroutine */ int grafof_();
    extern integer itbadr_();
    static logical iniflg;
    extern /* Subroutine */ int comand_(), getaln_();
    static integer defndr;
    extern /* Subroutine */ int grafon_();
    extern integer iserch_();
    static integer oldarm, filspc[13];
    extern integer iright_();
    extern /* Subroutine */ int getval_();
    static integer maxreg, maxcon;
    extern /* Subroutine */ int rnfile_(), unlock_();
    static integer regnum;
    extern /* Subroutine */ int update_();
    static integer lstcom[22];
    extern integer isxbit_();
    extern logical lerror_();
    extern /* Subroutine */ int newscr_();
    static integer compos, numarm, maxcom, numcom;
    extern /* Subroutine */ int putval_();
    static integer timeto, numove, maxusr;
    extern /* Subroutine */ int colcur_(), number_(), chrout_(), lnumbr_();
    static integer numrgs, numreg;
    extern /* Subroutine */ int setdis_();
    static integer numusr;
    extern /* Subroutine */ int clrscr_(), string_(), settty_(), exprog_();
    static integer oldrgs;
    extern /* Subroutine */ int getnum_();
    static integer nummen;
    extern /* Subroutine */ int getstr_(), cursor_(), pcolor_();
    static integer reginq, invadr, numinv, numdef, curtim, numcon, conown, 
	    nmfreg, ownerq, numatq, bestrg, bestds;
    extern /* Subroutine */ int irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer filspc( 13 )		! where run from >*/
/*< 	integer comara( 80 ), ilen	! input array for data file >*/
/*< 	integer parara( 40 ), plen	! pararased stuff for initdb >*/
/*< 	integer chreps( 7 ) >*/
/*< 	integer lstcom( 22 ) >*/
/*< 	logical new, privd, iniflg, lerror, eof >*/
/*< 	commo >*/
/*< 	data new/.true./, strtnm/10/, lstpos/0/, intrvl/200/ >*/
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
/*< 3	call settty( comara, par, ilen, privd, filspc ) >*/
L3:
    settty_(comara, &par, &ilen, &privd, filspc);
/*< 	call check( iniflg ) >*/
    check_(&iniflg);
/*< 	if( iniflg ) goto 10000 >*/
    if (iniflg) {
	goto L10000;
    }
/*< 	call defadr( 1, iright(itbadr(screen)) ) >*/
    i__2 = itbadr_(&screen);
    i__1 = iright_(&i__2);
    defadr_(&c__1, &i__1);
/*< 20	call getval(5, 0,55,  useful, 1, maxreg ) >*/
L20:
    getval_(&c__5, &c__0, &c__55, &useful, &c__1, &maxreg);
/*< 	call getval(5, 0,56,  useful, 2, maxusr ) >*/
    getval_(&c__5, &c__0, &c__56, &useful, &c__2, &maxusr);
/*< 	call getval(5, 0,57,  useful, 7, maxcon ) >*/
    getval_(&c__5, &c__0, &c__57, &useful, &c__7, &maxcon);
/*< 	continue ! call ctrap >*/
/* 	    call cease( useful ) */
/*< 	call lock >*/
    lock_();
/*< 	call addval(5, 0,61,  useful, 3, 1 ) >*/
    addval_(&c__5, &c__0, &c__61, &useful, &c__3, &c__1);
/*< 	call getval(4, 0,62,  -1, numusr ) >*/
    getval_(&c__4, &c__0, &c__62, &c_n1, &numusr);
/*< 	if( numusr .gt. maxusr ) call pstop >*/
    if (numusr > maxusr) {
	pstop_();
    }
/*< 	if( numusr .lt. maxusr ) goto 30 >*/
    if (numusr < maxusr) {
	goto L30;
    }
/*< 	filspc(5) = isxbit('EXE~') >*/
    filspc[4] = isxbit_("EXE~", (ftnlen)4);
/*< 	call ofile( 2, filspc, 0 ) >*/
    ofile_(&c__2, filspc, &c__0);
/*< 	if( lerror(0) ) goto 30 >*/
    if (lerror_(&c__0)) {
	goto L30;
    }
/*< 	call rfile( 2, filspc ) >*/
    rfile_(&c__2, filspc);
/*< 	if( lerror(0) ) goto 30 >*/
    if (lerror_(&c__0)) {
	goto L30;
    }
/*< 	call rnfile( 2, filspc ) >*/
    rnfile_(&c__2, filspc);
/*< 30	regnum = iran( 26 ) >*/
L30:
    regnum = iran_(&c__26);
/*< 	call getval(6, 0,73,  coord, regnum, 1, ival ) >*/
    getval_(&c__6, &c__0, &c__73, &coord, &regnum, &c__1, &ival);
/*< 	if( ival .eq. 0 ) goto 30 >*/
    if (ival == 0) {
	goto L30;
    }
/*< 	call getval(5, 0,75,  numat, regnum, ival ) >*/
    getval_(&c__5, &c__0, &c__75, &numat, &regnum, &ival);
/*< 	if( ival .ne. 0 ) goto 30 >*/
    if (ival != 0) {
	goto L30;
    }
/*< 	call putval(4, 0,77,  -1, strtnm ) >*/
    putval_(&c__4, &c__0, &c__77, &c_n1, &strtnm);
/*< 	call putval(5, 0,78,  owner, regnum, numusr ) >*/
    putval_(&c__5, &c__0, &c__78, &owner, &regnum, &numusr);
/*< 	call unlock >*/
    unlock_();
/*< 35	call nap( 1000, 4 ) >*/
L35:
    nap_(&c__1000, &c__4);
/*< 	call getval(5, 0,82,  useful, 3, ival ) >*/
    getval_(&c__5, &c__0, &c__82, &useful, &c__3, &ival);
/*< 	if( ival .lt. maxusr ) goto 35 >*/
    if (ival < maxusr) {
	goto L35;
    }
/*< 	call grafon >*/
    grafon_();
/*< 	continue ! call ctrap >*/
/* 	    call cease( useful ) */
/*< 100	call lock >*/
L100:
    lock_();
/*< 	call addval(5, 0,90,  useful, 5, 1 ) >*/
    addval_(&c__5, &c__0, &c__90, &useful, &c__5, &c__1);
/*< 	call getval(4, 0,91,  -1, ival ) >*/
    getval_(&c__4, &c__0, &c__91, &c_n1, &ival);
/*< 	call unlock >*/
    unlock_();
/*< 	if( ival .eq. 1 ) goto 20000 >*/
    if (ival == 1) {
	goto L20000;
    }
/*< 110	if( new ) call newscr( 1 ) >*/
L110:
    if (new__) {
	newscr_(&c__1);
    }
/*< 	if( .not. new ) call update( 1 ) >*/
    if (! new__) {
	update_(&c__1);
    }
/*< 	compos = 0 >*/
    compos = 0;
/*< 	numarm = 0 >*/
    numarm = 0;
/*< 	call getval(5, 0,99,  useful, 4, maxcom ) >*/
    getval_(&c__5, &c__0, &c__99, &useful, &c__4, &maxcom);
/*< 	do 140 i = 1, maxcom >*/
    i__1 = maxcom;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    numcom = i >*/
	numcom = i__;
/*< 	    if( compos .ge. 22 ) goto 140 >*/
	if (compos >= 22) {
	    goto L140;
	}
/*< 	    call getval(5, 0,103,  whos, numcom, ival ) >*/
	getval_(&c__5, &c__0, &c__103, &whos, &numcom, &ival);
/*< 	    if( ival .ne. numusr ) goto 140 >*/
	if (ival != numusr) {
	    goto L140;
	}
/*< 	    call getval(5, 0,105,  timlft, numcom, timeto ) >*/
	getval_(&c__5, &c__0, &c__105, &timlft, &numcom, &timeto);
/*< 	    if( timeto .eq. 0 ) goto 140 >*/
	if (timeto == 0) {
	    goto L140;
	}
/*< 	    compos = compos + 1 >*/
	++compos;
/*< 	    itest = timeto >*/
	itest = timeto;
/*< 	    call getval(5, 0,109,  regfrm, numcom, r1 ) >*/
	getval_(&c__5, &c__0, &c__109, &regfrm, &numcom, &r1);
/*< 	    itest = 4096*itest + r1 >*/
	itest = (itest << 12) + r1;
/*< 	    call getval(5, 0,111,  regto, numcom, r2 ) >*/
	getval_(&c__5, &c__0, &c__111, &regto, &numcom, &r2);
/*< 	    itest = 128*itest + r2 >*/
	itest = (itest << 7) + r2;
/*< 	    call getval(5, 0,113,  amtmov, numcom, numove ) >*/
	getval_(&c__5, &c__0, &c__113, &amtmov, &numcom, &numove);
/*< 	    itest = 128*itest + numove >*/
	itest = (itest << 7) + numove;
/*< 	    numarm = numarm + numove >*/
	numarm += numove;
/*< 	    if( lstcom(compos) .eq. itest .and. .not. new ) goto 140 >*/
	if (lstcom[compos - 1] == itest && ! new__) {
	    goto L140;
	}
/*< 	    lstcom(compos) = itest >*/
	lstcom[compos - 1] = itest;
/*< 	    call colcur( 73, 25-compos ) >*/
	i__2 = 25 - compos;
	colcur_(&c__73, &i__2);
/*< 	    if( timeto .eq. 0 ) call irepeat( 32, 8 ) >*/
	if (timeto == 0) {
	    irepeat_(&c__32, &c__8);
	}
/*< 	    if( timeto .eq. 0 ) goto 140 >*/
	if (timeto == 0) {
	    goto L140;
	}
/*< 	    call number(2, numove, 2 ) >*/
	number_(&c__2, &numove, &c__2);
/*< 	    call chrout( r1+64 ) >*/
	i__2 = r1 + 64;
	chrout_(&i__2);
/*< 	    call chrout( 62 ) >*/
	chrout_(&c__62);
/*< 	    call chrout( r2+64 ) >*/
	i__2 = r2 + 64;
	chrout_(&i__2);
/*< 	    call chrout(58) >*/
	chrout_(&c__58);
/*< 	    call lnumbr(2, mod( timeto, 100 ), 2 ) >*/
	i__2 = timeto % 100;
	lnumbr_(&c__2, &i__2, &c__2);
/*< 140	continue >*/
L140:
	;
    }
/*< 	if( lstpos .le. compos ) goto 151 >*/
    if (lstpos <= compos) {
	goto L151;
    }
/*< 	do 150 i = compos+1, lstpos >*/
    i__1 = lstpos;
    for (i__ = compos + 1; i__ <= i__1; ++i__) {
/*< 	    call colcur( 73, 25-i ) >*/
	i__2 = 25 - i__;
	colcur_(&c__73, &i__2);
/*< 	    call irepeat( 32, 8 ) >*/
	irepeat_(&c__32, &c__8);
/*< 150	continue >*/
/* L150: */
    }
/*< 151	continue >*/
L151:
/*< 	numrgs = 0 >*/
    numrgs = 0;
/*< 	do 160 i = 1, maxreg >*/
    i__1 = maxreg;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    numreg = i >*/
	numreg = i__;
/*< 	    call getval(5, 0,137,  owner, numreg, ival ) >*/
	getval_(&c__5, &c__0, &c__137, &owner, &numreg, &ival);
/*< 	    if( ival .ne. numusr ) goto 160 >*/
	if (ival != numusr) {
	    goto L160;
	}
/*< 	    call getval(5, 0,139,  numat, numreg, ival ) >*/
	getval_(&c__5, &c__0, &c__139, &numat, &numreg, &ival);
/*< 	    numarm = numarm + ival >*/
	numarm += ival;
/*< 	    if( ival .gt. 0 ) numrgs = numrgs + 1 >*/
	if (ival > 0) {
	    ++numrgs;
	}
/*< 160	continue >*/
L160:
	;
    }
/*< 	if( numarm .ne. 0 .and. numrgs .ne. maxreg ) goto 170 >*/
    if (numarm != 0 && numrgs != maxreg) {
	goto L170;
    }
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call clrscr >*/
    clrscr_();
/*< 	call colcur( 20, 12 ) >*/
    colcur_(&c__20, &c__12);
/*< 	if( n >*/
    if (numarm == 0) {
	string_(&c__1, "Your entire forces have been destroyed.  You have lo\
st^E", (ftnlen)56);
    }
/*< 	if( n >*/
    if (numrgs == maxreg) {
	string_(&c__1, "You have taken over the world.  Congratulations^E", (
		ftnlen)49);
    }
/*< 	call string(1,'.^G^M^J^E') >*/
    string_(&c__1, ".^G^M^J^E", (ftnlen)9);
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call grafof >*/
    grafof_();
/*< 	call exprog >*/
    exprog_();
/*< 170	if(oldarm.eq.numarm.and.oldrgs.eq.numrgs.and..not.new) goto 180 >*/
L170:
    if (oldarm == numarm && oldrgs == numrgs && ! new__) {
	goto L180;
    }
/*< 	oldarm = numarm >*/
    oldarm = numarm;
/*< 	oldrgs = numrgs >*/
    oldrgs = numrgs;
/*< 	call colcur( 73, 2 ) >*/
    colcur_(&c__73, &c__2);
/*< 	call number(2, numarm, 3 ) >*/
    number_(&c__2, &numarm, &c__3);
/*< 	call chrout( numusr+64 ) >*/
    i__1 = numusr + 64;
    chrout_(&i__1);
/*< 	call lnumbr(2, -numrgs, 3 ) >*/
    i__1 = -numrgs;
    lnumbr_(&c__2, &i__1, &c__3);
/*< 180	lstpos = compos >*/
L180:
    lstpos = compos;
/*< 	new = .false. >*/
    new__ = FALSE_;
/*< 	call comand( ichar, comara, ilen ) >*/
    comand_(&ichar, comara, &ilen);
/*< 	if( ichar .eq. -1 ) goto 100 >*/
    if (ichar == -1) {
	goto L100;
    }
/* ***	NEW COMMAND */
/*< 	if( ichar .ne. 78 ) goto 200 >*/
    if (ichar != 78) {
	goto L200;
    }
/*< 	new = .true. >*/
    new__ = TRUE_;
/*< 	lstpos = 0 >*/
    lstpos = 0;
/*< 	goto 100 >*/
    goto L100;
/* ***	EXIT COMMAND */
/*< 200	if( ichar .ne. 69 .or. comara(2) .ne. 88 ) goto 300 >*/
L200:
    if (ichar != 69 || comara[1] != 88) {
	goto L300;
    }
/*< 	call cease( useful ) >*/
    cease_(&useful);
/* ***	MOVE COMMAND */
/*< 300	call getnum(4, comara, ilen, nummen, 10 ) >*/
L300:
    getnum_(&c__4, comara, &ilen, &nummen, &c__10);
/*< 	i = 1 >*/
    i__ = 1;
/*< 400	i = i + 1 >*/
L400:
    ++i__;
/*< 	if( i .eq. ilen ) goto 800 >*/
    if (i__ == ilen) {
	goto L800;
    }
/*< 	r1 = icon( comara(i) ) - 64 >*/
    r1 = icon_(&comara[i__ - 1]) - 64;
/*< 	if( r1 .lt. 1 .or. r1 .gt. 26 ) goto 400 >*/
    if (r1 < 1 || r1 > 26) {
	goto L400;
    }
/*< 450	i = i + 1 >*/
L450:
    ++i__;
/*< 	if( i .gt. ilen ) goto 800 >*/
    if (i__ > ilen) {
	goto L800;
    }
/*< 	r2 = icon( comara(i) ) - 64 >*/
    r2 = icon_(&comara[i__ - 1]) - 64;
/*< 	if( r2 .lt. 1 .or. r2 .gt. 26 ) goto 450 >*/
    if (r2 < 1 || r2 > 26) {
	goto L450;
    }
/*< 	call lock >*/
    lock_();
/*< 	call getval(6, 0,193,  disto, r1, r2, timeto ) >*/
    getval_(&c__6, &c__0, &c__193, &disto, &r1, &r2, &timeto);
/*< 	if( timeto .eq. 0 ) goto 520 >*/
    if (timeto == 0) {
	goto L520;
    }
/*< 	call getval(5, 0,195,  owner, r1, ival ) >*/
    getval_(&c__5, &c__0, &c__195, &owner, &r1, &ival);
/*< 	if( ival .ne. numusr ) goto 520 >*/
    if (ival != numusr) {
	goto L520;
    }
/*< 	call getval(5, 0,197,  numat, r1, ival ) >*/
    getval_(&c__5, &c__0, &c__197, &numat, &r1, &ival);
/*< 	if( ival .eq. 0 ) goto 520 >*/
    if (ival == 0) {
	goto L520;
    }
/*< 	nummen = max0( 1, min0( ival, nummen, 127 ) ) >*/
/* Computing MAX */
/* Computing MIN */
    i__3 = min(ival,nummen);
    i__1 = 1, i__2 = min(i__3,127);
    nummen = max(i__1,i__2);
/*< 	call addval(4, 0,200,  -1, -nummen ) >*/
    i__1 = -nummen;
    addval_(&c__4, &c__0, &c__200, &c_n1, &i__1);
/*< 	call getval(5, 0,201,  useful, 4, maxcom ) >*/
    getval_(&c__5, &c__0, &c__201, &useful, &c__4, &maxcom);
/*< 	if( maxcom .eq. 0 ) goto 501 >*/
    if (maxcom == 0) {
	goto L501;
    }
/*< 	do 500 i = 1, maxcom >*/
    i__1 = maxcom;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    numcom = i >*/
	numcom = i__;
/*< 	    call getval(5, 0,205,  timlft, numcom, ival ) >*/
	getval_(&c__5, &c__0, &c__205, &timlft, &numcom, &ival);
/*< 	    if( ival .eq. 0 ) goto 510 >*/
	if (ival == 0) {
	    goto L510;
	}
/*< 500	continue >*/
/* L500: */
    }
/*< 501	continue >*/
L501:
/*< 	numcom = maxcom + 1 >*/
    numcom = maxcom + 1;
/*< 	call putval(5, 0,210,  useful, 4, numcom ) >*/
    putval_(&c__5, &c__0, &c__210, &useful, &c__4, &numcom);
/*< 510	call putval(5, 0,211,  regfrm, numcom, r1 ) >*/
L510:
    putval_(&c__5, &c__0, &c__211, &regfrm, &numcom, &r1);
/*< 	call putval(5, 0,212,  regto, numcom, r2 ) >*/
    putval_(&c__5, &c__0, &c__212, &regto, &numcom, &r2);
/*< 	call putval(5, 0,213,  amtmov, numcom, nummen ) >*/
    putval_(&c__5, &c__0, &c__213, &amtmov, &numcom, &nummen);
/*< 	call putval(5, 0,214,  timlft, numcom, ifix(sqrt(float(nummen))*timeto) ) >*/
    i__1 = (integer) (sqrt((real) nummen) * timeto);
    putval_(&c__5, &c__0, &c__214, &timlft, &numcom, &i__1);
/*< 	call putval(5, 0,215,  whos, numcom, numusr ) >*/
    putval_(&c__5, &c__0, &c__215, &whos, &numcom, &numusr);
/*< 520	call unlock >*/
L520:
    unlock_();
/*< 	goto 100 >*/
    goto L100;
/*< 800	goto 100 >*/
L800:
    goto L100;

/*< 10000	call enable >*/
L10000:
    enable_();
/*< 	filspc(5) = isxbit('DAT~') >*/
    filspc[4] = isxbit_("DAT~", (ftnlen)4);
/*< 	call ofile( 2, filspc, 0 ) >*/
    ofile_(&c__2, filspc, &c__0);
/*< 	if( lerror(0) ) call bug('Cannot open device.^E') >*/
    if (lerror_(&c__0)) {
	bug_("Cannot open device.^E", (ftnlen)21);
    }
/*< 	call rfile( 2, filspc ) >*/
    rfile_(&c__2, filspc);
/*< 	if( lerror(0) ) call bug('Cannot lookup file.^E') >*/
    if (lerror_(&c__0)) {
	bug_("Cannot lookup file.^E", (ftnlen)21);
    }
/*< 	call init(5, 0,227,  useful, 36, 8 ) >*/
    init_(&c__5, &c__0, &c__227, &useful, &c__36, &c__8);
/*< 	call init(6, 0,228,  screen, 18, 24, 80 ) >*/
    init_(&c__6, &c__0, &c__228, &screen, &c__18, &c__24, &c__80);
/*< 	call init(6, 0,229,  coord, 7, 26, 2 ) >*/
    init_(&c__6, &c__0, &c__229, &coord, &c__7, &c__26, &c__2);
/*< 	call init(6, 0,230,  disto, 7, 26, 26 ) >*/
    init_(&c__6, &c__0, &c__230, &disto, &c__7, &c__26, &c__26);
/*< 	call init(5, 0,231,  owner, 3, 26 ) >*/
    init_(&c__5, &c__0, &c__231, &owner, &c__3, &c__26);
/*< 	call init(5, 0,232,  numat, 36, 26 ) >*/
    init_(&c__5, &c__0, &c__232, &numat, &c__36, &c__26);
/*< 	call init(6, 0,233,  contan, 1, 26, 26 ) >*/
    init_(&c__6, &c__0, &c__233, &contan, &c__1, &c__26, &c__26);
/* 	CALL INIT(6, 0,234,  CONARM, 7, 26, 10 ) */
/*< 	call init(5, 0,235,  conarm, 7, 26 ) >*/
    init_(&c__5, &c__0, &c__235, &conarm, &c__7, &c__26);
/*< 	call init(5, 0,236,  regfrm, 5, 100 ) >*/
    init_(&c__5, &c__0, &c__236, &regfrm, &c__5, &c__100);
/*< 	call init(5, 0,237,  regto, 5, 100 ) >*/
    init_(&c__5, &c__0, &c__237, &regto, &c__5, &c__100);
/*< 	call init(5, 0,238,  amtmov, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__238, &amtmov, &c__7, &c__100);
/*< 	call init(5, 0,239,  timlft, 12, 100 ) >*/
    init_(&c__5, &c__0, &c__239, &timlft, &c__12, &c__100);
/*< 	call init(5, 0,240,  whos, 7, 100 ) >*/
    init_(&c__5, &c__0, &c__240, &whos, &c__7, &c__100);
/*< 	call defadr( 1, iright( itbadr( screen ) ) ) >*/
    i__2 = itbadr_(&screen);
    i__1 = iright_(&i__2);
    defadr_(&c__1, &i__1);
/*< 	call setdis( 1 ) >*/
    setdis_(&c__1);
/*< 	call clrscr >*/
    clrscr_();
/*< 	maxreg = 0 >*/
    maxreg = 0;
/*< 	do 10200 iy1 = 24, 1, -1 >*/
    for (iy1 = 24; iy1 >= 1; --iy1) {
/*< 	    iy = iy1 >*/
	iy = iy1;
/*< 	    call getstr(5, comara, 78, ilen, 2, eof ) >*/
	getstr_(&c__5, comara, &c__78, &ilen, &c__2, &eof);
/*< 	    if( eof ) call bug('Found eof reading screen^E') >*/
	if (eof) {
	    bug_("Found eof reading screen^E", (ftnlen)26);
	}
/*< 	    if( ilen .lt. 72 ) call string(1,'^M^JPROBLEM=^E') >*/
	if (ilen < 72) {
	    string_(&c__1, "^M^JPROBLEM=^E", (ftnlen)14);
	}
/*< 	    if( ilen .lt. 72 ) call number(1, ilen ) >*/
	if (ilen < 72) {
	    number_(&c__1, &ilen);
	}
/*< 	    if( ilen .lt. 72 ) call string(1,'.^M^J^B') >*/
	if (ilen < 72) {
	    string_(&c__1, ".^M^J^B", (ftnlen)7);
	}
/*< 	    call cursor( 1, iy ) >*/
	cursor_(&c__1, &iy);
/*< 	    do 10100 ix = 1, 72 >*/
	for (ix = 1; ix <= 72; ++ix) {
/*< 		ic = comara(ix) >*/
	    ic = comara[ix - 1];
/*< 		regnum = icon( ic ) - 64 >*/
	    regnum = icon_(&ic) - 64;
/*< 		if( ic .ne. 61 ) goto 10010 >*/
	    if (ic != 61) {
		goto L10010;
	    }
/*< 		call pback( icldbl ) >*/
	    pback_(&col_1.icldbl);
/*< 		call pcolor( iclwhi ) >*/
	    pcolor_(&col_1.iclwhi);
/*< 		goto 10090 >*/
	    goto L10090;
/*< 10010		if( ic .ne. 32 ) goto 10020 >*/
L10010:
	    if (ic != 32) {
		goto L10020;
	    }
/*< 		call pcolor( iclwhi ) >*/
	    pcolor_(&col_1.iclwhi);
/*< 		call pback( iclwhi ) >*/
	    pback_(&col_1.iclwhi);
/*< 		goto 10090 >*/
	    goto L10090;
/*< 10020		if( ic .ne. 44 ) goto 10030 >*/
L10020:
	    if (ic != 44) {
		goto L10030;
	    }
/*< 		call pback( icldbl ) >*/
	    pback_(&col_1.icldbl);
/*< 		call pcolor( icldbl ) >*/
	    pcolor_(&col_1.icldbl);
/*< 		goto 10090 >*/
	    goto L10090;
/*< 10030		if( ic .ge. 65 .and. ic .le. 90 ) goto 10040 >*/
L10030:
	    if (ic >= 65 && ic <= 90) {
		goto L10040;
	    }
/*< 		call pback( iclbla ) >*/
	    pback_(&col_1.iclbla);
/*< 		call pcolor( iclbla ) >*/
	    pcolor_(&col_1.iclbla);
/*< 		goto 10090 >*/
	    goto L10090;
/*< 10040		call pback( iclwhi ) >*/
L10040:
	    pback_(&col_1.iclwhi);
/*< 		call pcolor( icldbl ) >*/
	    pcolor_(&col_1.icldbl);
/*< 10090		call chrout( ic ) >*/
L10090:
	    chrout_(&ic);
/*< 		if( regnum .lt. 1 .or. regnum .gt. 26 ) goto 10100 >*/
	    if (regnum < 1 || regnum > 26) {
		goto L10100;
	    }
/*< 		if( ix .gt. 68 )call bug('Region mark out of bounds.^E') >*/
	    if (ix > 68) {
		bug_("Region mark out of bounds.^E", (ftnlen)28);
	    }
/*< 		call getval(6, 0,279,  coord, regnum, 1, ival ) >*/
	    getval_(&c__6, &c__0, &c__279, &coord, &regnum, &c__1, &ival);
/*< 		if( ival .ne. 0 )call bug('Two regions with same name.^E') >*/
	    if (ival != 0) {
		bug_("Two regions with same name.^E", (ftnlen)29);
	    }
/*< 		maxreg = maxreg + 1 >*/
	    ++maxreg;
/*< 		call putval(4, 0,282,  -1, ix+1 ) >*/
	    i__1 = ix + 1;
	    putval_(&c__4, &c__0, &c__282, &c_n1, &i__1);
/*< 		call putval(6, 0,283,  coord, regnum, 2, iy ) >*/
	    putval_(&c__6, &c__0, &c__283, &coord, &regnum, &c__2, &iy);
/*< 10100	    continue >*/
L10100:
	    ;
	}
/*< 10200	continue >*/
/* L10200: */
    }
/*< 	call putval(5, 0,286,  useful, 1, maxreg ) >*/
    putval_(&c__5, &c__0, &c__286, &useful, &c__1, &maxreg);
/*< 	do 10400 i = 1, maxreg >*/
    i__1 = maxreg;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    call getaln( comara, ilen, eof ) >*/
	getaln_(comara, &ilen, &eof);
/*< 	    if( eof ) call bug('Premature eof reading distances.^E') >*/
	if (eof) {
	    bug_("Premature eof reading distances.^E", (ftnlen)34);
	}
/*< 	    regnum = icon( comara(1) ) - 64 >*/
	regnum = icon_(comara) - 64;
/*< 	    i >*/
	if (regnum < 1 || regnum > 26) {
	    bug_("Illegal region name in distances.^E", (ftnlen)35);
	}
/*< 	    call getval(6, 0,294,  coord, regnum, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__294, &coord, &regnum, &c__1, &ival);
/*< 	    if( ival .eq. 0 ) call bug('Unknown region name.^E') >*/
	if (ival == 0) {
	    bug_("Unknown region name.^E", (ftnlen)22);
	}
/*< 	    do 10300 cpos = 2, ilen-1 >*/
	i__2 = ilen - 1;
	for (cpos = 2; cpos <= i__2; ++cpos) {
/*< 		if( icon(comara(cpos)) .lt. 64 ) goto 10300 >*/
	    if (icon_(&comara[cpos - 1]) < 64) {
		goto L10300;
	    }
/*< 		reginq = icon( comara( cpos ) ) - 64 >*/
	    reginq = icon_(&comara[cpos - 1]) - 64;
/*< 		if(  >*/
	    if (reginq < 1 || reginq > 26) {
		bug_("Illegal region name in list.^E", (ftnlen)30);
	    }
/*< 		call getval(6, 0,301,  coord, reginq, 1, ival ) >*/
	    getval_(&c__6, &c__0, &c__301, &coord, &reginq, &c__1, &ival);
/*< 		if(  >*/
	    if (ival == 0) {
		bug_("Illegal region name in list.^E", (ftnlen)30);
	    }
/*< 		call getval(6, 0,304,  disto, regnum, reginq, ival ) >*/
	    getval_(&c__6, &c__0, &c__304, &disto, &regnum, &reginq, &ival);
/*< 		if( ival .ne. 0 ) call bug('Distance defined.^E') >*/
	    if (ival != 0) {
		bug_("Distance defined.^E", (ftnlen)19);
	    }
/*< 		call getnum(4, comara(cpos), ilen-cpos+1, ival, 10 ) >*/
	    i__3 = ilen - cpos + 1;
	    getnum_(&c__4, &comara[cpos - 1], &i__3, &ival, &c__10);
/*< 		if( ival .lt. 1 ) call bug('Invalid destance.^E') >*/
	    if (ival < 1) {
		bug_("Invalid destance.^E", (ftnlen)19);
	    }
/*< 		call putval(4, 0,308,  -1, ival ) >*/
	    putval_(&c__4, &c__0, &c__308, &c_n1, &ival);
/*< 10300	    continue >*/
L10300:
	    ;
	}
/*< 10400	continue >*/
/* L10400: */
    }
/*< 	maxcon = 0 >*/
    maxcon = 0;
/*< 10500	call getaln( comara, ilen, eof ) >*/
L10500:
    getaln_(comara, &ilen, &eof);
/*< 	if( eof ) goto 10700 >*/
    if (eof) {
	goto L10700;
    }
/*< 	    maxcon = maxcon + 1 >*/
    ++maxcon;
/*< 	    i = iserch( comara, 32, ilen ) >*/
    i__ = iserch_(comara, &c__32, &ilen);
/*< 	    if( i .eq. 0 ) i = iserch( comara, icon(9), ilen ) >*/
    if (i__ == 0) {
	i__1 = icon_(&c__9);
	i__ = iserch_(comara, &i__1, &ilen);
    }
/*< 	    if( i .eq. 0 ) call bug('Illegal format for continent.^E') >*/
    if (i__ == 0) {
	bug_("Illegal format for continent.^E", (ftnlen)31);
    }
/*< 	    do 10600 j = 1, i-1 >*/
    i__1 = i__ - 1;
    for (j = 1; j <= i__1; ++j) {
/*< 		regnum = icon( comara(j) ) - 64 >*/
	regnum = icon_(&comara[j - 1]) - 64;
/*< 		if(  >*/
	if (regnum < 1 || regnum > 26) {
	    bug_("Illegal region in continent.^E", (ftnlen)30);
	}
/*< 		call getval(6, 0,323,  coord, regnum, 1, ival ) >*/
	getval_(&c__6, &c__0, &c__323, &coord, &regnum, &c__1, &ival);
/*< 		if(  >*/
	if (ival == 0) {
	    bug_("Illegal region in continent.^E", (ftnlen)30);
	}
/*< 		call getval(6, 0,326,  contan, maxcon, regnum, ival ) >*/
	getval_(&c__6, &c__0, &c__326, &contan, &maxcon, &regnum, &ival);
/*< 		if( ival .ne. 0 ) call bug('Repeated region.^E') >*/
	if (ival != 0) {
	    bug_("Repeated region.^E", (ftnlen)18);
	}
/*< 		call putval(4, 0,328,  -1, 1 ) >*/
	putval_(&c__4, &c__0, &c__328, &c_n1, &c__1);
/*< 10600	    continue >*/
/* L10600: */
    }
/*< 	    call getnum(4, comara(i), ilen-i+1, ival, 10 ) >*/
    i__1 = ilen - i__ + 1;
    getnum_(&c__4, &comara[i__ - 1], &i__1, &ival, &c__10);
/*< 	    if( ival .lt. 0 )call bug('Illegal content-army number.^E') >*/
    if (ival < 0) {
	bug_("Illegal content-army number.^E", (ftnlen)30);
    }
/*< 	    call putval(5, 0,332,  conarm, maxcon, ival ) >*/
    putval_(&c__5, &c__0, &c__332, &conarm, &maxcon, &ival);
/*< 	goto 10500 >*/
    goto L10500;
/*< 10700	call close( 2 ) >*/
L10700:
    close_(&c__2);
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call putval(5, 0,337,  useful, 7, maxcon ) >*/
    putval_(&c__5, &c__0, &c__337, &useful, &c__7, &maxcon);
/*< 10800	call string(1,'Input number of players: ^B') >*/
L10800:
    string_(&c__1, "Input number of players: ^B", (ftnlen)27);
/*< 	call getnum(3, 10, maxusr, 10 ) >*/
    getnum_(&c__3, &c__10, &maxusr, &c__10);
/*< 	if( maxusr .lt. 1 .or. maxusr .gt. 6 ) goto 10800 >*/
    if (maxusr < 1 || maxusr > 6) {
	goto L10800;
    }
/*< 	call putval(5, 0,341,  useful, 2, maxusr ) >*/
    putval_(&c__5, &c__0, &c__341, &useful, &c__2, &maxusr);
/*< 	call putval(5, 0,342,  useful, 3, 0 ) >*/
    putval_(&c__5, &c__0, &c__342, &useful, &c__3, &c__0);
/*< 	call putval(5, 0,343,  useful, 8, 0 ) >*/
    putval_(&c__5, &c__0, &c__343, &useful, &c__8, &c__0);
/*< 	if( maxusr .gt. 1 ) goto 11000 >*/
    if (maxusr > 1) {
	goto L11000;
    }
/*< 	call putval(4, 0,345,  -1, 1 ) >*/
    putval_(&c__4, &c__0, &c__345, &c_n1, &c__1);
/*< 	call addval(5, 0,346,  useful, 2, 1 ) >*/
    addval_(&c__5, &c__0, &c__346, &useful, &c__2, &c__1);
/*< 	call addval(5, 0,347,  useful, 3, 1 ) >*/
    addval_(&c__5, &c__0, &c__347, &useful, &c__3, &c__1);
/*< 	i = iran( maxreg ) >*/
    i__ = iran_(&maxreg);
/*< 	call putval(5, 0,349,  owner, i, 1 ) >*/
    putval_(&c__5, &c__0, &c__349, &owner, &i__, &c__1);
/*< 	call putval(5, 0,350,  numat, i, 10 ) >*/
    putval_(&c__5, &c__0, &c__350, &numat, &i__, &c__10);
/*< 11000	call unlock >*/
L11000:
    unlock_();
/*< 	goto 20 >*/
    goto L20;

/*< 20000	call getval(5, 0,353,  useful, 4, maxcom ) >*/
L20000:
    getval_(&c__5, &c__0, &c__353, &useful, &c__4, &maxcom);
/*< 	if( maxcom .eq. 0 ) goto 20101 >*/
    if (maxcom == 0) {
	goto L20101;
    }
/*< 	do 20100 i = 1, maxcom >*/
    i__1 = maxcom;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    numcom = i >*/
	numcom = i__;
/*< 	    call getval(5, 0,357,  timlft, numcom, ival ) >*/
	getval_(&c__5, &c__0, &c__357, &timlft, &numcom, &ival);
/*< 	    if( ival .gt. 0 ) call addval(4, 0,358,  -1, -1 ) >*/
	if (ival > 0) {
	    addval_(&c__4, &c__0, &c__358, &c_n1, &c_n1);
	}
/*< 	    if( ival .ne. 1 ) goto 20100 >*/
	if (ival != 1) {
	    goto L20100;
	}
/*< 	    call getval(5, 0,360,  whos, numcom, invadr ) >*/
	getval_(&c__5, &c__0, &c__360, &whos, &numcom, &invadr);
/*< 	    call getval(5, 0,361,  amtmov, numcom, numinv ) >*/
	getval_(&c__5, &c__0, &c__361, &amtmov, &numcom, &numinv);
/*< 	    call getval(5, 0,362,  regto, numcom, r2 ) >*/
	getval_(&c__5, &c__0, &c__362, &regto, &numcom, &r2);
/*< 	    call getval(5, 0,363,  owner, r2, defndr ) >*/
	getval_(&c__5, &c__0, &c__363, &owner, &r2, &defndr);
/*< 	    call getval(5, 0,364,  numat, r2, numdef ) >*/
	getval_(&c__5, &c__0, &c__364, &numat, &r2, &numdef);
/* 	    IF THE ARMIES INCOMING BELONG TO SOMEONE OTHER THAN THE */
/* 	    THE ARMIES ALREADY THERE, WE HAVE A BATTLE.  SKIP TO BATTLE */
/* 	    LOOP, OTHERWISE SIMPLY INCREASE THE NUMBER AT THE LOCATION. */
/*< 	    if( invadr .ne. defndr .and. numdef .gt. 0 ) goto 20010 >*/
	if (invadr != defndr && numdef > 0) {
	    goto L20010;
	}
/*< 	    numdef = numdef + numinv >*/
	numdef += numinv;
/*< 	    goto 20030 >*/
	goto L20030;
/*< 20010	    if( iran(11) .le. 6 ) goto 20020	! roll dice, invader died? >*/
L20010:
	if (iran_(&c__11) <= 6) {
	    goto L20020;
	}
/*< 	    numinv = numinv - 1			! yup, decrement invaders >*/
	--numinv;
/*< 	    if( numinv .gt. 0 ) goto 20010	! more invaders?  more battle >*/
	if (numinv > 0) {
	    goto L20010;
	}
/*< 	    goto 20040 >*/
	goto L20040;
/*< 20020	    numdef = numdef - 1			! decrement defenders >*/
L20020:
	--numdef;
/*< 	    if( numdef .gt. 0 ) goto 20010	! more defenders?  more battle >*/
	if (numdef > 0) {
	    goto L20010;
	}
/*< 	    numdef = numinv			! defenders gone, switch sides >*/
	numdef = numinv;
/*< 20030	    call putval(5, 0,381,  owner, r2, invadr ) >*/
L20030:
	putval_(&c__5, &c__0, &c__381, &owner, &r2, &invadr);
/*< 20040	    call putval(5, 0,383,  numat, r2, numdef ) >*/
L20040:
	putval_(&c__5, &c__0, &c__383, &numat, &r2, &numdef);
/*< 20100	continue >*/
L20100:
	;
    }
/*< 20101	continue >*/
L20101:
/*< 	call addval(5, 0,388,  useful, 6, 1 ) >*/
    addval_(&c__5, &c__0, &c__388, &useful, &c__6, &c__1);
/*< 	call getval(4, 0,389,  -1, curtim ) >*/
    getval_(&c__4, &c__0, &c__389, &c_n1, &curtim);
/*< 	if( curtim .le. intrvl ) goto 20150 >*/
    if (curtim <= intrvl) {
	goto L20150;
    }
/*< 	call putval(4, 0,391,  -1, 0 ) >*/
    putval_(&c__4, &c__0, &c__391, &c_n1, &c__0);
/*< 	do 20110 regnum = 1, maxreg >*/
    i__1 = maxreg;
    for (regnum = 1; regnum <= i__1; ++regnum) {
/*< 	    call getval(5, 0,393,  numat, regnum+0, ival ) >*/
	i__2 = regnum;
	getval_(&c__5, &c__0, &c__393, &numat, &i__2, &ival);
/*< 	    if( ival .ge. 1 ) call addval(4, 0,394,  -1, 1 ) >*/
	if (ival >= 1) {
	    addval_(&c__4, &c__0, &c__394, &c_n1, &c__1);
	}
/*< 20110	continue >*/
/* L20110: */
    }
/*< 	do 20140 i = 1, maxcon >*/
    i__1 = maxcon;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    numcon = i >*/
	numcon = i__;
/*< 	    conown = 0 >*/
	conown = 0;
/*< 	    do 20120 j = 1, 26 >*/
	for (j = 1; j <= 26; ++j) {
/*< 		r1 = j >*/
	    r1 = j;
/*< 		call getval(6, 0,402,  contan, numcon, r1, ival ) >*/
	    getval_(&c__6, &c__0, &c__402, &contan, &numcon, &r1, &ival);
/*< 		if( ival .eq. 0 ) goto 20120 >*/
	    if (ival == 0) {
		goto L20120;
	    }
/*< 		call getval(5, 0,404,  numat, r1, ival ) >*/
	    getval_(&c__5, &c__0, &c__404, &numat, &r1, &ival);
/*< 		if( ival .eq. 0 ) goto 20140 >*/
	    if (ival == 0) {
		goto L20140;
	    }
/*< 		call getval(5, 0,406,  owner, r1, ival ) >*/
	    getval_(&c__5, &c__0, &c__406, &owner, &r1, &ival);
/*< 		if( conown .eq. 0 ) conown = ival >*/
	    if (conown == 0) {
		conown = ival;
	    }
/*< 		if( ival .ne. conown ) goto 20140 >*/
	    if (ival != conown) {
		goto L20140;
	    }
/*< 20120	    continue >*/
L20120:
	    ;
	}
/*< 	    call getval(5, 0,410,  conarm, numcon, numarm ) >*/
	getval_(&c__5, &c__0, &c__410, &conarm, &numcon, &numarm);
/*< 	    do 20130 j = 1, numarm >*/
	i__2 = numarm;
	for (j = 1; j <= i__2; ++j) {
/*< 20125		r1 = iran( maxreg ) >*/
L20125:
	    r1 = iran_(&maxreg);
/*< 		call getval(6, 0,413,  contan, numcon, r1, ival ) >*/
	    getval_(&c__6, &c__0, &c__413, &contan, &numcon, &r1, &ival);
/*< 		if( ival .eq. 0 ) goto 20125 >*/
	    if (ival == 0) {
		goto L20125;
	    }
/*< 		call addval(5, 0,415,  numat, r1, 1 ) >*/
	    addval_(&c__5, &c__0, &c__415, &numat, &r1, &c__1);
/*< 20130	    continue >*/
/* L20130: */
	}
/*< 20140	continue >*/
L20140:
	;
    }
/*< 20150	numcom = 0 >*/
L20150:
    numcom = 0;
/*< 	if( mod( curtim, 10 ) .ne. 0 ) goto 20181 >*/
    if (curtim % 10 != 0) {
	goto L20181;
    }
/*< 	call getval(5, 0,421,  useful, 8, ival ) >*/
    getval_(&c__5, &c__0, &c__421, &useful, &c__8, &ival);
/*< 	if( ival .eq. 0 ) goto 20181 >*/
    if (ival == 0) {
	goto L20181;
    }
/*< 	do 20180 i = 1, maxreg >*/
    i__1 = maxreg;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    numreg = i >*/
	numreg = i__;
/*< 	    call getval(5, 0,425,  owner, numreg, ival ) >*/
	getval_(&c__5, &c__0, &c__425, &owner, &numreg, &ival);
/*< 	    if( ival .ne. 1 ) goto 20180 >*/
	if (ival != 1) {
	    goto L20180;
	}
/*< 	    call getval(5, 0,427,  numat, numreg, nmfreg ) >*/
	getval_(&c__5, &c__0, &c__427, &numat, &numreg, &nmfreg);
/*< 	    if( nmfreg .eq. 0 ) goto 20180 >*/
	if (nmfreg == 0) {
	    goto L20180;
	}
/*< 	    best = nmfreg >*/
	best = nmfreg;
/*< 	    do 20160 j = 1, maxreg >*/
	i__2 = maxreg;
	for (j = 1; j <= i__2; ++j) {
/*< 		reginq = j >*/
	    reginq = j;
/*< 		call getval(6, 0,432,  disto, numreg, reginq, dist ) >*/
	    getval_(&c__6, &c__0, &c__432, &disto, &numreg, &reginq, &dist);
/*< 		if( dist .eq. 0 ) goto 20160 >*/
	    if (dist == 0) {
		goto L20160;
	    }
/*< 		call getval(5, 0,434,  owner, reginq, ownerq ) >*/
	    getval_(&c__5, &c__0, &c__434, &owner, &reginq, &ownerq);
/*< 		call getval(5, 0,435,  numat, reginq, numatq ) >*/
	    getval_(&c__5, &c__0, &c__435, &numat, &reginq, &numatq);
/*< 		if( ownerq .ne. 1 ) numatq = -numatq >*/
	    if (ownerq != 1) {
		numatq = -numatq;
	    }
/*< 		if( numatq .ge. best ) goto 20160 >*/
	    if (numatq >= best) {
		goto L20160;
	    }
/*< 		best = numatq >*/
	    best = numatq;
/*< 		bestrg = reginq >*/
	    bestrg = reginq;
/*< 		bestds = dist >*/
	    bestds = dist;
/*< 20160	    continue >*/
L20160:
	    ;
	}
/*< 	    if( best .ge. nmfreg-1 ) goto 20180 >*/
	if (best >= nmfreg - 1) {
	    goto L20180;
	}
/*< 	    nummen = min0( nmfreg-1, nmfreg-best, 127 ) >*/
/* Computing MIN */
	i__2 = nmfreg - 1, i__3 = nmfreg - best, i__2 = min(i__2,i__3);
	nummen = min(i__2,127);
/*< 	    call addval(5, 0,444,  numat, numreg, -nummen ) >*/
	i__2 = -nummen;
	addval_(&c__5, &c__0, &c__444, &numat, &numreg, &i__2);
/*< 20170	    numcom = numcom + 1 >*/
L20170:
	++numcom;
/*< 	    call getval(5, 0,446,  timlft, numcom, ival ) >*/
	getval_(&c__5, &c__0, &c__446, &timlft, &numcom, &ival);
/*< 	    if( ival .ne. 0 ) goto 20170 >*/
	if (ival != 0) {
	    goto L20170;
	}
/*< 	    call putval(4, 0,448,  -1, ifix( sqrt(float(nummen))*bestds) ) >*/
	i__2 = (integer) (sqrt((real) nummen) * bestds);
	putval_(&c__4, &c__0, &c__448, &c_n1, &i__2);
/*< 	    call putval(5, 0,449,  whos, numcom, 1 ) >*/
	putval_(&c__5, &c__0, &c__449, &whos, &numcom, &c__1);
/*< 	    call putval(5, 0,450,  regfrm, numcom, numreg ) >*/
	putval_(&c__5, &c__0, &c__450, &regfrm, &numcom, &numreg);
/*< 	    call putval(5, 0,451,  regto, numcom, bestrg ) >*/
	putval_(&c__5, &c__0, &c__451, &regto, &numcom, &bestrg);
/*< 	    call putval(5, 0,452,  amtmov, numcom, nummen ) >*/
	putval_(&c__5, &c__0, &c__452, &amtmov, &numcom, &nummen);
/*< 20180	continue >*/
L20180:
	;
    }
/*< 20181	continue >*/
L20181:
/*< 	call getval(5, 0,455,  useful, 4, maxcom ) >*/
    getval_(&c__5, &c__0, &c__455, &useful, &c__4, &maxcom);
/*< 	if( numcom .gt. maxcom ) call putval(4, 0,456,  -1, numcom ) >*/
    if (numcom > maxcom) {
	putval_(&c__4, &c__0, &c__456, &c_n1, &numcom);
    }
/*< 	call setdis( 1 ) >*/
    setdis_(&c__1);
/*< 	call pback( iclwhi ) >*/
    pback_(&col_1.iclwhi);
/*< 	call pcolor( iclred ) >*/
    pcolor_(&col_1.iclred);
/*< 	do 20200 i = 1, maxreg >*/
    i__1 = maxreg;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    regnum = i >*/
	regnum = i__;
/*< 	    call getval(6, 0,463,  coord, regnum, 1, ix ) >*/
	getval_(&c__6, &c__0, &c__463, &coord, &regnum, &c__1, &ix);
/*< 	    call getval(6, 0,464,  coord, regnum, 2, iy ) >*/
	getval_(&c__6, &c__0, &c__464, &coord, &regnum, &c__2, &iy);
/*< 	    call getval(5, 0,465,  numat, regnum, ival ) >*/
	getval_(&c__5, &c__0, &c__465, &numat, &regnum, &ival);
/*< 	    call cursor( ix, iy ) >*/
	cursor_(&ix, &iy);
/*< 	    if( ival .eq. 0 ) goto 20190 >*/
	if (ival == 0) {
	    goto L20190;
	}
/*< 	    call number(2, ival, -2 ) >*/
	number_(&c__2, &ival, &c_n2);
/*< 	    call getval(5, 0,469,  owner, regnum, ival ) >*/
	getval_(&c__5, &c__0, &c__469, &owner, &regnum, &ival);
/*< 	    call chrout( ival+64 ) >*/
	i__2 = ival + 64;
	chrout_(&i__2);
/*< 	    goto 20200 >*/
	goto L20200;
/*< 20190	    call string(1,'   ^E') >*/
L20190:
	string_(&c__1, "   ^E", (ftnlen)5);
/*< 20200	continue >*/
L20200:
	;
    }
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call putval(5, 0,476,  useful, 5, 0 ) >*/
    putval_(&c__5, &c__0, &c__476, &useful, &c__5, &c__0);
/*< 	goto 110 >*/
    goto L110;
/*< 	end >*/
} /* fmain_ */


/*< 	subroutine bug( array ) >*/
/* Subroutine */ int bug_(array)
integer *array;
{
    extern /* Subroutine */ int nap_(), pstop_(), grafof_(), colcur_(), 
	    setdis_(), colstr_(), string_();

/* ***	THIS PROCEDURE PRINTS OUT ERROR MESSAGES IN THE STRING ARRAY. */
/*< 	integer array( 1 ), value	! array and value to print >*/
/*< 	commo >*/
/*< 	call setdis( 0 )			! make sure normal i/o >*/
    /* Parameter adjustments */
    --array;

    /* Function Body */
    setdis_(&c__0);
/*< 	call colcur( 1, 1 )			! message at lower left >*/
    colcur_(&c__1, &c__1);
/*< 	call colstr(iclred,'^M^J%BUG ^E')	! print header >*/
    colstr_(&col_1.iclred, "^M^J%BUG ^E", (ftnlen)11);
/*< 	call string(1, array )			! print lerror message >*/
    string_(&c__1, &array[1]);
/*< 	call string(1,'^M^J^B')			! dump the buffer >*/
    string_(&c__1, "^M^J^B", (ftnlen)6);
/*< 	call nap(3000)				! make sure he sees the message >*/
    nap_(&c__3000);
/*< 	call grafof				! reset the terminal >*/
    grafof_();
/*< 	call pstop				! and exit >*/
    pstop_();
/*< 	end >*/
} /* bug_ */


/*< 	subroutine getaln( comara, ilen, eof ) >*/
/* Subroutine */ int getaln_(comara, ilen, eof)
integer *comara, *ilen;
logical *eof;
{
    extern /* Subroutine */ int allcap_(), getstr_();

/* ***	THIS PROCEDURE RETURNS AN UPPER CASE STRING OF CHARACTERS */
/* ***	READ FROM THE FILE OPENED ON CHANNEL #2 OR EOF WHEN FOUND. */
/* ***	IT WILL IGNORE COMMENTS (STUFF PRECEDED WITH A ;) AND NULL */
/* ***	LINES (ILEN = 0). */
/*< 	integer comara( 80 ), ilen	! string read and its length >*/
/*< 	logical eof			! true on end of file >*/
/*< 100	call getstr(5, comara, 80, ilen, 2, eof )	! get string from file >*/
    /* Parameter adjustments */
    --comara;

    /* Function Body */
L100:
    getstr_(&c__5, &comara[1], &c__80, ilen, &c__2, eof);
/*< 	if( eof ) return >*/
    if (*eof) {
	return 0;
    }
/*< 	if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 100 >*/
    if (*ilen == 0 || comara[1] == 59) {
	goto L100;
    }
/*< 	call allcap( comara, ilen )	! insure that its upper case >*/
    allcap_(&comara[1], ilen);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* getaln_ */


/*< 	subroutine comand( ichar, comara, arrind ) >*/
/* Subroutine */ int comand_(ichar, comara, arrind)
integer *ichar, *comara, *arrind;
{
    /* Initialized data */

    static integer index = 0;

    /* System generated locals */
    integer i__1;

    /* Local variables */
    extern /* Subroutine */ int nap_();
    extern integer icon_();
    extern /* Subroutine */ int allcap_(), chrbuf_(), curbuf_(), colcur_();
    static integer indstr;
    extern /* Subroutine */ int chrout_(), string_();
    static integer numtim;
    extern /* Subroutine */ int irepeat_();

/* *** */
/* ***	ROUTINE GET COMMAND FROM USER IF ONE PRESENT. */
/* *** */
/*< 	integer comara(81), index, arrind, ichar, numtim >*/
/*< 	data index/0/ >*/
    /* Parameter adjustments */
    --comara;

    /* Function Body */
/* *** */
/* ***	IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR */
/* ***	0.5 SECONDS OR UNTIL ONE IS. */
/* *** */
/*< 	numtim = 0 >*/
    numtim = 0;
/*< 100	ichar = -1 >*/
L100:
    *ichar = -1;
/*< 	if( numtim .gt. 10 ) return >*/
    if (numtim > 10) {
	return 0;
    }
/*< 	numtim = numtim + 1 >*/
    ++numtim;
/*< 	call curbuf >*/
    curbuf_();
/*< 	call nap( 1000, 12 )      >*/
    nap_(&c__1000, &c__12);
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
/*< 	if( index .ge. 7 )  goto 700 >*/
    if (index >= 7) {
	goto L700;
    }
/* *** */
/* ***	NOT SPECIAL CHARACTER, PUT IN ARRAY */
/* *** */
/*< 	index = index + 1 >*/
    ++index;
/*< 	call colcur( 72 + index, 1 ) >*/
    i__1 = index + 72;
    colcur_(&i__1, &c__1);
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
/*< 	call colcur( 73, 1 ) >*/
    colcur_(&c__73, &c__1);
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
/*< 	call colcur( 73 + index, 1 ) >*/
    i__1 = index + 73;
    colcur_(&i__1, &c__1);
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
/*< 	call colcur( 73, 1 ) >*/
    colcur_(&c__73, &c__1);
/*< 	call irepeat( 32, index ) >*/
    irepeat_(&c__32, &index);
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
/*< 	call colcur( 73, 1 ) >*/
    colcur_(&c__73, &c__1);
/*< 	call irepeat( 32, index ) >*/
    irepeat_(&c__32, &index);
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
/*< 	call nap( 1000, 4 ) >*/
    nap_(&c__1000, &c__4);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* comand_ */


/*< 	subroutine cease( useful ) >*/
/* Subroutine */ int cease_(useful)
real *useful;
{
    extern /* Subroutine */ int close_(), addval_(), grafof_(), clrscr_(), 
	    setdis_(), exprog_();

/*< 	call addval(5, 0,587,  useful, 3, -1 ) >*/
    addval_(&c__5, &c__0, &c__587, useful, &c__3, &c_n1);
/*< 	call grafof >*/
    grafof_();
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call clrscr >*/
    clrscr_();
/*< 	call close( 1 ) >*/
    close_(&c__1);
/*< 	call exprog >*/
    exprog_();
/*< 	end >*/
} /* cease_ */

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

