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

struct names_1_ {
    integer useful, inuse, coord, size, numobj;
};

#define names_1 (*(struct names_1_ *) &names_)

/* Initialized data */

struct {
    integer e_1[5];
    } names_ = { 1, 2, 3, 4, 1 };


/* Table of constant values */

static integer c__1 = 1;
static integer c__0 = 0;
static integer c__20 = 20;
static integer c__5 = 5;
static integer c__3 = 3;
static integer c__6 = 6;
static integer c_n6 = -6;
static integer c__46 = 46;
static integer c__8 = 8;
static integer c__10 = 10;
static integer c__4 = 4;
static integer c__129 = 129;
static integer c__36 = 36;
static integer c__130 = 130;
static integer c__200 = 200;
static integer c__131 = 131;
static integer c__132 = 132;
static logical c_false = FALSE_;
static integer c__10000 = 10000;
static integer c__136 = 136;
static integer c__137 = 137;
static integer c__2 = 2;
static integer c__138 = 138;
static integer c__139 = 139;
static integer c__100 = 100;
static integer c__141 = 141;
static integer c__168 = 168;
static integer c__172 = 172;
static integer c__177 = 177;
static integer c__178 = 178;
static integer c__45 = 45;
static integer c__32 = 32;
static integer c__35 = 35;
static integer c__1000 = 1000;
static integer c__12 = 12;
static integer c__24 = 24;
static integer c__47 = 47;
static integer c__41 = 41;
static integer c__92 = 92;
static integer c__124 = 124;
static integer c__43 = 43;
static integer c__62 = 62;
static integer c_n1 = -1;
static integer c__355 = 355;
static integer c__358 = 358;
static integer c__360 = 360;
static integer c__361 = 361;
static integer c__362 = 362;
static integer c__382 = 382;
static integer c__13 = 13;

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

/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static logical new__ = TRUE_;
    static real arng = (float)100.;
    static real x = (float)5e3;
    static real y = (float)5e3;
    static real z__ = (float)5e3;

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, par[20];
    extern /* Subroutine */ int cube_();
    static real aelv;
    static integer ilen, icom;
    static real arol;
    static integer plen;
    static real axim, azim;
    extern /* Subroutine */ int check_(), cease_();
    static integer ichar, iaelv, iarng, iarol, iazim;
    extern /* Subroutine */ int parse_();
    static integer privd, itorx, itory, itorz;
    extern /* Subroutine */ int comand_();
    static integer comara[80];
    extern /* Subroutine */ int defscr_();
    static logical iniflg;
    extern /* Subroutine */ int initdb_(), arfill_(), grafon_();
    static integer screen[960], filspc[13];
    extern /* Subroutine */ int update_(), clrlin_(), messag_(), setdis_(), 
	    getnum_();
    static integer comlst[5];
    extern integer isxbit_();
    extern /* Subroutine */ int newscr_(), chrout_(), string_();
    extern integer isrsix_();
    extern /* Subroutine */ int settty_();

/*< 	implicit integer ( b - w ) >*/
/*< 	integer comara( 80 ), par( 20 ), filspc( 13 ), screen( 960 ) >*/
/*< 	integer comlst( 5 ) >*/
/*< 	real x, y, z, azim, aelv, arol, arng >*/
/*< 	logical new, iniflg, newang >*/
/*< 	common/nhcom/newang >*/
/*< 	common /names/ useful, inuse, coord, size, numobj >*/
/*< 	data new/.true./, arng/100.0/, x,y,z/5000.0,5000.0,5000.0/ >*/
/*< 	if( comlst(1) .ne. 0 ) goto 100 >*/
    if (comlst[0] != 0) {
	goto L100;
    }
/*< 	comlst(1) = isxbit('EXIT~')	! isxbit('EXIT  ~') >*/
    comlst[0] = isxbit_("EXIT~", (ftnlen)5);
/*< 	comlst(2) = isxbit('NEW~')	! isxbit('NEW   ~') >*/
    comlst[1] = isxbit_("NEW~", (ftnlen)4);
/*< 	comlst(3) = isxbit('POSITI~')	! isxbit('POSITI~') >*/
    comlst[2] = isxbit_("POSITI~", (ftnlen)7);
/*< 	comlst(4) = isxbit('PROJEC~')	! isxbit('PROJEC~') >*/
    comlst[3] = isxbit_("PROJEC~", (ftnlen)7);
/*< 	comlst(5) = isxbit('RANGE~')	! isxbit('RANGE ~') >*/
    comlst[4] = isxbit_("RANGE~", (ftnlen)6);
/*< 100	continue >*/
L100:
/*< 	call settty( comara, par, ilen, privd, filspc )	! init graphics >*/
    settty_(comara, par, &ilen, &privd, filspc);
/*< 	do 105 i=1, ilen >*/
    i__1 = ilen;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*<     	    if( par(i) .eq. isxbit('NEWANG~') ) newang=.true. >*/
	if (par[i__ - 1] == isxbit_("NEWANG~", (ftnlen)7)) {
	    nhcom_1.newang = TRUE_;
	}
/*< 105	continue >*/
/* L105: */
    }
/*< 	call check( iniflg ) >*/
    check_(&iniflg);
/*< 	if( iniflg ) call initdb >*/
    if (iniflg) {
	initdb_();
    }
/*< 	call defscr( 1, screen ) >*/
    defscr_(&c__1, screen);
/*< 	continue ! call ctrap >*/
/* 	    call cease */
/*< 	call grafon >*/
    grafon_();
/*< 	call setdis( 1 ) >*/
    setdis_(&c__1);
/*< 1000	call cube( new, x,y,z, azim,aelv,arol, arng ) >*/
L1000:
    cube_(&new__, &x, &y, &z__, &azim, &aelv, &arol, &arng);
/*< 	if( new ) call newscr( 1 ) >*/
    if (new__) {
	newscr_(&c__1);
    }
/*< 	if( .not. new ) call update( 1 ) >*/
    if (! new__) {
	update_(&c__1);
    }
/*< 	call clrlin >*/
    clrlin_();
/*< 	new = .false. >*/
    new__ = FALSE_;
/*< 	call setdis( 0 ) >*/
    setdis_(&c__0);
/*< 	call comand( ichar, comara, ilen ) >*/
    comand_(&ichar, comara, &ilen);
/*< 	call setdis( 1 ) >*/
    setdis_(&c__1);
/*< 	if( ichar .eq. -1 .or. ilen .eq. 0 ) goto 1000 >*/
    if (ichar == -1 || ilen == 0) {
	goto L1000;
    }
/*< 	call parse( comara, ilen, par, plen, 20 ) >*/
    parse_(comara, &ilen, par, &plen, &c__20);
/*< 	if( plen .eq. 0 ) goto 1000 >*/
    if (plen == 0) {
	goto L1000;
    }
/*< 	if( plen .lt. 20 ) call arfill( par(plen+1), 20-plen, 0 ) >*/
    if (plen < 20) {
	i__1 = 20 - plen;
	arfill_(&par[plen], &i__1, &c__0);
    }
/*< 	icom = isrsix( comlst, par(1), 5 ) >*/
    icom = isrsix_(comlst, par, &c__5);
/*< 	if( icom .gt. 0 ) goto( 1100, 1200, 1300, 1400, 1500 ) icom >*/
    if (icom > 0) {
	switch ((int)icom) {
	    case 1:  goto L1100;
	    case 2:  goto L1200;
	    case 3:  goto L1300;
	    case 4:  goto L1400;
	    case 5:  goto L1500;
	}
    }
/*< 	if( icom .lt. 0 ) call messag('Ambiguous^E') >*/
    if (icom < 0) {
	messag_("Ambiguous^E", (ftnlen)11);
    }
/*< 	if( icom .eq. 0 ) call messag('Unknown^E') >*/
    if (icom == 0) {
	messag_("Unknown^E", (ftnlen)9);
    }
/*< 	call string(1,' command ^E') >*/
    string_(&c__1, " command ^E", (ftnlen)11);
/*< 	call string(3, par(1), 6, -6 ) >*/
    string_(&c__3, par, &c__6, &c_n6);
/*< 	call chrout(46) >*/
    chrout_(&c__46);
/*< 	goto 1000 >*/
    goto L1000;
/*< 1100	call cease >*/
L1100:
    cease_();
/*< 1200	new = .true. >*/
L1200:
    new__ = TRUE_;
/*< 	goto 1000 >*/
    goto L1000;
/*< 1300	call getnum(8, comara, ilen, itorx, 10, itory, 10, itorz, 10 ) >*/
L1300:
    getnum_(&c__8, comara, &ilen, &itorx, &c__10, &itory, &c__10, &itorz, &
	    c__10);
/*< 	x = itorx >*/
    x = (real) itorx;
/*< 	y = itory >*/
    y = (real) itory;
/*< 	z = itorz >*/
    z__ = (real) itorz;
/*< 	goto 1000 >*/
    goto L1000;
/*< 1400	call getnum(8, comara, ilen, iazim, 10, iaelv, 10, iarol, 10 ) >*/
L1400:
    getnum_(&c__8, comara, &ilen, &iazim, &c__10, &iaelv, &c__10, &iarol, &
	    c__10);
/*< 	axim = iazim >*/
    axim = (real) iazim;
/*< 	aelv = iaelv >*/
    aelv = (real) iaelv;
/*< 	arol = iarol >*/
    arol = (real) iarol;
/*< 	goto 1000 >*/
    goto L1000;
/*< 1500	call getnum(4, comara, ilen, iarng, 10 ) >*/
L1500:
    getnum_(&c__4, comara, &ilen, &iarng, &c__10);
/*< 	arng = iarng >*/
    arng = (real) iarng;
/*< 	goto 1000 >*/
    goto L1000;
/*< 	end >*/
} /* fmain_ */


/*< 	subroutine initdb >*/
/* Subroutine */ int initdb_()
{
    /* Initialized data */

    static integer nobj = 100;

    /* System generated locals */
    integer i__1;
    real r__1;

    /* Local variables */
    static integer i__, iobj;
    extern integer iran_();
    extern /* Subroutine */ int init_();
    extern integer newobj_();
    extern /* Subroutine */ int unlock_(), putval_();

/*< 	implicit integer ( b - w ) >*/
/*< 	common /names/ useful, inuse, coord, size, numobj >*/
/*< 	data useful, inuse, coord, size/1,2,3,4/ >*/
/*< 	data numobj/1/ >*/
/*< 	data nobj/100/ >*/
/*< 	call init(5, 0,129,  useful, 36, 1 ) >*/
    init_(&c__5, &c__0, &c__129, &names_1.useful, &c__36, &c__1);
/*< 	call init(5, 0,130,  inuse, 1, 200 ) >*/
    init_(&c__5, &c__0, &c__130, &names_1.inuse, &c__1, &c__200);
/*< 	call init(6, 0,131,  coord, 36, 200, 3 ) >*/
    init_(&c__6, &c__0, &c__131, &names_1.coord, &c__36, &c__200, &c__3);
/*< 	call init(5, 0,132,  size, 36, 200 ) >*/
    init_(&c__5, &c__0, &c__132, &names_1.size, &c__36, &c__200);
/*< 	do 100 i = 1, nobj >*/
    i__1 = nobj;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    iobj = newobj(.false.) >*/
	iobj = newobj_(&c_false);
/*< 	    call putval(6, 0,136,  coord, iobj, 1, iran(10000)+0.0 ) >*/
	r__1 = iran_(&c__10000) + (float)0.;
	putval_(&c__6, &c__0, &c__136, &names_1.coord, &iobj, &c__1, &r__1);
/*< 	    call putval(6, 0,137,  coord, iobj, 2, iran(10000)+0.0 ) >*/
	r__1 = iran_(&c__10000) + (float)0.;
	putval_(&c__6, &c__0, &c__137, &names_1.coord, &iobj, &c__2, &r__1);
/*< 	    call putval(6, 0,138,  coord, iobj, 3, iran(10000)+0.0 ) >*/
	r__1 = iran_(&c__10000) + (float)0.;
	putval_(&c__6, &c__0, &c__138, &names_1.coord, &iobj, &c__3, &r__1);
/*< 	    call putval(5, 0,139,  size, iobj, iran(100)+0.0 ) >*/
	r__1 = iran_(&c__100) + (float)0.;
	putval_(&c__5, &c__0, &c__139, &names_1.size, &iobj, &r__1);
/*< 100	continue >*/
/* L100: */
    }
/*< 	call putval(5, 0,141,  useful, numobj, nobj ) >*/
    putval_(&c__5, &c__0, &c__141, &names_1.useful, &names_1.numobj, &nobj);
/*< 	call unlock >*/
    unlock_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* initdb_ */


/*< 	subroutine bug( array ) >*/
/* Subroutine */ int bug_(array)
integer *array;
{
    extern /* Subroutine */ int pstop_(), grafof_(), setdis_(), string_(), 
	    cursor_();

/* ***	THIS PROCEDURE PRINTS OUT ERROR MESSAGES IN THE STRING ARRAY. */
/*< 	integer array( 1 ), value	! array and value to print >*/
/*< 	call setdis( 0 )		! make sure normal i/o >*/
    /* Parameter adjustments */
    --array;

    /* Function Body */
    setdis_(&c__0);
/*< 	call cursor( 1, 1 )		! message at lower left >*/
    cursor_(&c__1, &c__1);
/*< 	call string(1,'^M^J%BUG ^E')	! print header >*/
    string_(&c__1, "^M^J%BUG ^E", (ftnlen)11);
/*< 	call string(1, array )		! print lerror message >*/
    string_(&c__1, &array[1]);
/*< 	call string(1,'^M^J^B')		! dump the buffer >*/
    string_(&c__1, "^M^J^B", (ftnlen)6);
/*< 	call grafof			! reset the terminal >*/
    grafof_();
/*< 	call pstop			! and exit >*/
    pstop_();
/*< 	end >*/
} /* bug_ */


/*< 	integer function newobj( lockit ) >*/
integer newobj_(lockit)
logical *lockit;
{
    /* System generated locals */
    integer ret_val, i__1;

    /* Local variables */
    static integer i__, iobj;
    extern /* Subroutine */ int lock_();
    static integer ival, maxobj;
    extern /* Subroutine */ int getval_(), putval_();

/*< 	implicit integer ( a - z ) >*/
/*< 	logical lockit >*/
/*< 	common /names/ useful, inuse, coord, size, numobj >*/
/*< 	if( lockit ) call lock >*/
    if (*lockit) {
	lock_();
    }
/*< 	call getval(5, 0,168,  useful, numobj, maxobj ) >*/
    getval_(&c__5, &c__0, &c__168, &names_1.useful, &names_1.numobj, &maxobj);
/*< 	if( lockit ) goto 101 >*/
    if (*lockit) {
	goto L101;
    }
/*< 	do 100 i = 1, maxobj >*/
    i__1 = maxobj;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    iobj = i >*/
	iobj = i__;
/*< 	    call getval(5, 0,172,  inuse, iobj, ival ) >*/
	getval_(&c__5, &c__0, &c__172, &names_1.inuse, &iobj, &ival);
/*< 	    if( ival .eq. 0 ) goto 200 >*/
	if (ival == 0) {
	    goto L200;
	}
/*< 100	continue >*/
/* L100: */
    }
/*< 101	continue >*/
L101:
/*< 	iobj = maxobj + 1 >*/
    iobj = maxobj + 1;
/*< 	call putval(5, 0,177,  useful, numobj, iobj ) >*/
    putval_(&c__5, &c__0, &c__177, &names_1.useful, &names_1.numobj, &iobj);
/*< 200	call putval(5, 0,178,  inuse, iobj, 1 ) >*/
L200:
    putval_(&c__5, &c__0, &c__178, &names_1.inuse, &iobj, &c__1);
/*< 	newobj = iobj >*/
    ret_val = iobj;
/*< 	return >*/
    return ret_val;
/*< 	end >*/
} /* newobj_ */


/*< 	subroutine messag( array ) >*/
/* Subroutine */ int messag_0_(n__, array)
int n__;
integer *array;
{
    extern /* Subroutine */ int string_();
    static integer numthr;
    extern /* Subroutine */ int cursor_(), irepeat_();

/*< 	integer array( 7 ), numthr >*/
/*< 	if( numthr .le. 0 ) goto 100 >*/
    /* Parameter adjustments */
    if (array) {
	--array;
	}

    /* Function Body */
    switch(n__) {
	case 1: goto L_clrlin;
	}

    if (numthr <= 0) {
	goto L100;
    }
/*< 	call cursor( 45, 2 ) >*/
    cursor_(&c__45, &c__2);
/*< 	call irepeat( 32, 35 ) >*/
    irepeat_(&c__32, &c__35);
/*< 100	call cursor( 45, 2 ) >*/
L100:
    cursor_(&c__45, &c__2);
/*< 	call string(1, array ) >*/
    string_(&c__1, &array[1]);
/*< 	numthr = 10 >*/
    numthr = 10;
/*< 	return >*/
    return 0;
/*< 	entry clrlin >*/

L_clrlin:
/*< 	numthr = numthr - 1 >*/
    --numthr;
/*< 	if( numthr .ne. 0 ) return >*/
    if (numthr != 0) {
	return 0;
    }
/*< 	call cursor( 45, 2 ) >*/
    cursor_(&c__45, &c__2);
/*< 	call irepeat( 32, 35 ) >*/
    irepeat_(&c__32, &c__35);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* messag_ */

/* Subroutine */ int messag_(array)
integer *array;
{
    return messag_0_(0, array);
    }

/* Subroutine */ int clrlin_()
{
    return messag_0_(1, (integer *)0);
    }


/*< 	subroutine cease >*/
/* Subroutine */ int cease_()
{
    extern /* Subroutine */ int close_(), grafof_(), clrscr_(), setdis_(), 
	    exprog_();

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
    extern /* Subroutine */ int allcap_(), chrbuf_(), curbuf_();
    static integer indstr;
    extern /* Subroutine */ int chrout_(), string_();
    static integer numtim;
    extern /* Subroutine */ int cursor_(), irepeat_();

/* *** */
/* ***	ROUTINE GET COMMAND FROM USER IF ONE PRESENT. */
/* *** */
/*< 	integer comara(80), index, arrind, ichar, numtim >*/
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
/*< 	call cursor( 2, 1 ) >*/
    cursor_(&c__2, &c__1);
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


/*< 	subroutine cube( new, xview,yview,zview, azim,aelv,arol, arng ) >*/
/* Subroutine */ int cube_(new__, xview, yview, zview, azim, aelv, arol, arng)
logical *new__;
real *xview, *yview, *zview, *azim, *aelv, *arol, *arng;
{
    /* Initialized data */

    static integer dirs[30] = { 5050,4950,5150,5049,5051,4949,5151,4951,5149,
	    5250,4850,5250,5048,5052,4849,5251,4851,5249,4948,5152,4952,5148,
	    4750,5350,5047,5053,4848,5252,4852,5248 };

    /* System generated locals */
    integer i__1, i__2;
    real r__1, r__2, r__3;

    /* Builtin functions */
    double sqrt();

    /* Local variables */
    static integer i__;
    static real x, y, z__, ae, ar, az;
    static integer ix, iy;
    static real xva, xvb, xvc, xvd, yva, yvb, yvc, yvd, zva, zvb, zvc, zvd, 
	    xvs, yvs, zvs;
    static integer irad, iobj;
    extern /* Subroutine */ int crlf_();
    static integer ival, ichar, index, scanx;
    static real yscan, zscan;
    extern doublereal smcos_(), smsin_(), cosdeg_(), sindeg_();
    static integer nobjds, maxobj;
    extern /* Subroutine */ int carpol_(), getval_();
    static real radius;
    extern /* Subroutine */ int clrscr_(), number_(), lnumbr_(), chrout_(), 
	    string_(), cursor_(), irepeat_();

/*< 	implicit integer ( b - w ) >*/
/*< 	integer dirs(30), scanx >*/
/*< 	logical new >*/
/*< 	real xview, yview, zview, azim, aelv, arol, arng, x, y, z, radius >*/
/*< 	real xva, xvb, xvc, xvd, xvs >*/
/*< 	real yva, yvb, yvc, yvd, yvs, yscan >*/
/*< 	real zva, zvb, zvc, zvd, zvs, zscan >*/
/*< 	real smcos, smsin, cosdeg, sindeg >*/
/*< 	common /names/ useful, inuse, coord, size, numobj >*/
/*< 	data  >*/
/*< 	if( .not. new ) goto 20 >*/
    if (! (*new__)) {
	goto L20;
    }
/*< 	call clrscr >*/
    clrscr_();
/*< 	call cursor( 1, 24 ) >*/
    cursor_(&c__1, &c__24);
/*< 	call chrout( 47 ) >*/
    chrout_(&c__47);
/*< 	call irepeat( 45, 41 ) >*/
    irepeat_(&c__45, &c__41);
/*< 	call chrout( 92 ) >*/
    chrout_(&c__92);
/*< 	call crlf >*/
    crlf_();
/*< 	do 10 iy = 1, 21 >*/
    for (iy = 1; iy <= 21; ++iy) {
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 	    call cursor( 43, 24-iy ) >*/
	i__1 = 24 - iy;
	cursor_(&c__43, &i__1);
/*< 	    call chrout(124) >*/
	chrout_(&c__124);
/*< 	    call crlf >*/
	crlf_();
/*< 10	continue >*/
/* L10: */
    }
/*< 	call chrout( 92 ) >*/
    chrout_(&c__92);
/*< 	call string(1,'- Ber:___/___ --- Rol:___ --- Ran:_____ -^E') >*/
    string_(&c__1, "- Ber:___/___ --- Rol:___ --- Ran:_____ -^E", (ftnlen)43);
/*< 	call chrout( 47 ) >*/
    chrout_(&c__47);
/*< 	call cursor( 45, 24 ) >*/
    cursor_(&c__45, &c__24);
/*< 	call string(1,'Bearing Range    Velocity^E') >*/
    string_(&c__1, "Bearing Range    Velocity^E", (ftnlen)27);
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call chrout(62) >*/
    chrout_(&c__62);
/*< 20	do 30 iy = 1, 21 >*/
L20:
    for (iy = 1; iy <= 21; ++iy) {
/*< 	    call cursor( 2, 24-iy ) >*/
	i__1 = 24 - iy;
	cursor_(&c__2, &i__1);
/*< 	    call irepeat( 32, 41 ) >*/
	irepeat_(&c__32, &c__41);
/*< 30	continue >*/
/* L30: */
    }
/*< 	call cursor( 8, 2 ) >*/
    cursor_(&c__8, &c__2);
/*< 	call number(4, azim, 3, 10, -1 ) >*/
    number_(&c__4, azim, &c__3, &c__10, &c_n1);
/*< 	call chrout(47) >*/
    chrout_(&c__47);
/*< 	call lnumbr(4, aelv, 3, 10, -1 ) >*/
    lnumbr_(&c__4, aelv, &c__3, &c__10, &c_n1);
/*< 	call cursor( 24, 2 ) >*/
    cursor_(&c__24, &c__2);
/*< 	call number(4, arol, 3, 10, -1 ) >*/
    number_(&c__4, arol, &c__3, &c__10, &c_n1);
/*< 	call cursor( 36, 2 ) >*/
    cursor_(&c__36, &c__2);
/*< 	call number(4, arng, 5, 10, -1 ) >*/
    number_(&c__4, arng, &c__5, &c__10, &c_n1);
/*< 	call chrout( 32 ) >*/
    chrout_(&c__32);
/*< 	xva = smcos( azim ) * cosdeg(aelv) >*/
    xva = smcos_(azim) * cosdeg_(aelv);
/*< 	xvb = smsin( azim ) * cosdeg(aelv) >*/
    xvb = smsin_(azim) * cosdeg_(aelv);
/*< 	xvc = sindeg(aelv ) >*/
    xvc = sindeg_(aelv);
/*< 	xvd = -(xva*xview + xvb*yview + xvc*zview) >*/
    r__1 = xva * *xview + xvb * *yview;
    xvd = -(r__1 + xvc * *zview);
/*< 	xvs = sqrt( xva*xva + xvb*xvb + xvc*xvc ) >*/
    r__1 = xva * xva + xvb * xvb;
    xvs = sqrt(r__1 + xvc * xvc);
/*< 	yva = smcos( azim+90.0 ) * cosdeg(aelv+arol) >*/
    r__1 = *azim + (float)90.;
    r__2 = *aelv + *arol;
    yva = smcos_(&r__1) * cosdeg_(&r__2);
/*< 	yvb = smsin( azim+90.0 ) * cosdeg(aelv+arol) >*/
    r__1 = *azim + (float)90.;
    r__2 = *aelv + *arol;
    yvb = smsin_(&r__1) * cosdeg_(&r__2);
/*< 	yvc = sindeg(aelv+arol) >*/
    r__1 = *aelv + *arol;
    yvc = sindeg_(&r__1);
/*< 	yvd = -(yva*xview + yvb*yview + yvc*zview) >*/
    r__1 = yva * *xview + yvb * *yview;
    yvd = -(r__1 + yvc * *zview);
/*< 	yvs = sqrt( yva*yva + yvb*yvb + yvc*yvc ) >*/
    r__1 = yva * yva + yvb * yvb;
    yvs = sqrt(r__1 + yvc * yvc);
/*< 	zva = smcos( azim+90.0 ) * cosdeg((aelv+arol+90.0) ) >*/
    r__1 = *azim + (float)90.;
    r__3 = *aelv + *arol;
    r__2 = r__3 + (float)90.;
    zva = smcos_(&r__1) * cosdeg_(&r__2);
/*< 	zvb = smsin( azim+90.0 ) * cosdeg((aelv+arol+90.0) ) >*/
    r__1 = *azim + (float)90.;
    r__3 = *aelv + *arol;
    r__2 = r__3 + (float)90.;
    zvb = smsin_(&r__1) * cosdeg_(&r__2);
/*< 	zvc = sindeg(aelv+arol+90.0) >*/
    r__2 = *aelv + *arol;
    r__1 = r__2 + (float)90.;
    zvc = sindeg_(&r__1);
/*< 	zvd = -(zva*xview + zvb*yview + zvc*zview) >*/
    r__1 = zva * *xview + zvb * *yview;
    zvd = -(r__1 + zvc * *zview);
/*< 	zvs = sqrt( zva*zva + zvb*zvb + zvc*zvc ) >*/
    r__1 = zva * zva + zvb * zvb;
    zvs = sqrt(r__1 + zvc * zvc);
/*< 	nobjds = 23 >*/
    nobjds = 23;
/*< 	call getval(5, 0,355,  useful, numobj, maxobj ) >*/
    getval_(&c__5, &c__0, &c__355, &names_1.useful, &names_1.numobj, &maxobj);
/*< 	do 300 i = 1, maxobj >*/
    i__1 = maxobj;
    for (i__ = 1; i__ <= i__1; ++i__) {
/*< 	    iobj = i >*/
	iobj = i__;
/*< 	    call getval(5, 0,358,  inuse, iobj, ival ) >*/
	getval_(&c__5, &c__0, &c__358, &names_1.inuse, &iobj, &ival);
/*< 	    if( ival .eq. 0 ) goto 300 >*/
	if (ival == 0) {
	    goto L300;
	}
/*< 	    call getval(6, 0,360,  coord, iobj, 1, x ) >*/
	getval_(&c__6, &c__0, &c__360, &names_1.coord, &iobj, &c__1, &x);
/*< 	    call getval(6, 0,361,  coord, iobj, 2, y ) >*/
	getval_(&c__6, &c__0, &c__361, &names_1.coord, &iobj, &c__2, &y);
/*< 	    call getval(6, 0,362,  coord, iobj, 3, z ) >*/
	getval_(&c__6, &c__0, &c__362, &names_1.coord, &iobj, &c__3, &z__);
/*< 	    call carpol( xview,yview,zview, x,y,z, az,ae,ar ) >*/
	carpol_(xview, yview, zview, &x, &y, &z__, &az, &ae, &ar);
/*< 	    if( ar .gt. arng ) goto 100 >*/
	if (ar > *arng) {
	    goto L100;
	}
/*< 	    if( nobjds .lt. 3 ) goto 100 >*/
	if (nobjds < 3) {
	    goto L100;
	}
/*< 	    call cursor( 45, nobjds ) >*/
	cursor_(&c__45, &nobjds);
/*< 	    call number(4, az, 3, 10, -1 ) >*/
	number_(&c__4, &az, &c__3, &c__10, &c_n1);
/*< 	    call chrout( 47 ) >*/
	chrout_(&c__47);
/*< 	    call lnumbr(4, ae, 3, 10, -1 ) >*/
	lnumbr_(&c__4, &ae, &c__3, &c__10, &c_n1);
/*< 	    call chrout( 32 ) >*/
	chrout_(&c__32);
/*< 	    call number(4, ar, 5, 10, -1 ) >*/
	number_(&c__4, &ar, &c__5, &c__10, &c_n1);
/*< 	    nobjds = nobjds - 1 >*/
	--nobjds;
/*< 100	    continue >*/
L100:
/*< 	    scanx = ( xva*x+xvb*y+xvc*z+xvd ) / ( arng*xvs ) + 0.5 >*/
	r__2 = xva * x + xvb * y;
	r__1 = r__2 + xvc * z__;
	scanx = (r__1 + xvd) / (*arng * xvs) + (float).5;
/*< 	    yscan = ( yva*x+yvb*y+yvc*z+yvd ) / ( arng*yvs ) >*/
	r__2 = yva * x + yvb * y;
	r__1 = r__2 + yvc * z__;
	yscan = (r__1 + yvd) / (*arng * yvs);
/*< 	    zscan = ( zva*x+zvb*y+zvc*z+zvd ) / ( arng*zvs ) >*/
	r__2 = zva * x + zvb * y;
	r__1 = r__2 + zvc * z__;
	zscan = (r__1 + zvd) / (*arng * zvs);
/*< 	    i >*/
	if (abs(scanx) > 10 || dabs(yscan) > (float)10. || dabs(zscan) > (
		float)10.) {
	    goto L300;
	}
/*< 	    if( scanx .lt. 0 ) ichar = 47-scanx >*/
	if (scanx < 0) {
	    ichar = 47 - scanx;
	}
/*< 	    if( scanx .ge. 0 ) ichar = 64+scanx >*/
	if (scanx >= 0) {
	    ichar = scanx + 64;
	}
/*< 	    call getval(5, 0,382,  size, iobj, radius ) >*/
	getval_(&c__5, &c__0, &c__382, &names_1.size, &iobj, &radius);
/*< 	    irad = min0( ifix(4*radius/arng)+1, 30 ) >*/
/* Computing MIN */
	i__2 = (integer) (radius * 4 / *arng) + 1;
	irad = min(i__2,30);
/*< 	    do 200 index = 1, irad >*/
	i__2 = irad;
	for (index = 1; index <= i__2; ++index) {
/*< 		ix = ifix(2*yscan) + dirs(index)/100 - 28 >*/
	    ix = (integer) (yscan * 2) + dirs[index - 1] / 100 - 28;
/*< 		if( ix .lt. 2 .or. ix .gt. 42 ) goto 200 >*/
	    if (ix < 2 || ix > 42) {
		goto L200;
	    }
/*< 		iy = ifix(zscan) + mod(dirs(index),100) - 37 >*/
	    iy = (integer) zscan + dirs[index - 1] % 100 - 37;
/*< 		if( iy .lt. 3 .or. iy .gt. 23 ) goto 200 >*/
	    if (iy < 3 || iy > 23) {
		goto L200;
	    }
/*< 		call cursor( ix, iy ) >*/
	    cursor_(&ix, &iy);
/*< 		call chrout( ichar ) >*/
	    chrout_(&ichar);
/*< 200	    continue >*/
L200:
	    ;
	}
/*< 300	continue >*/
L300:
	;
    }
/*< 	if( nobjds .le. 2 ) return >*/
    if (nobjds <= 2) {
	return 0;
    }
/*< 	call cursor( 45, nobjds ) >*/
    cursor_(&c__45, &nobjds);
/*< 	call irepeat( 32, 13 ) >*/
    irepeat_(&c__32, &c__13);
/*< 	nobjds = nobjds - 1 >*/
    --nobjds;
/*< 	goto 300 >*/
    goto L300;
/*< 	end >*/
} /* cube_ */


/*< 	subroutine carpol( x0,y0,z0, x1,y1,z1, az,ae,ar ) >*/
/* Subroutine */ int carpol_(x0, y0, z0, x1, y1, z1, az, ae, ar)
real *x0, *y0, *z0, *x1, *y1, *z1, *az, *ae, *ar;
{
    /* Builtin functions */
    double atan(), sqrt();

    /* Local variables */
    static real xd, yd, zd, apartd;

/*< 	implicit integer ( b - w ) >*/
/*< 	logical newang >*/
/*< 	common/nhcom/newang >*/
/*< 	xd = x1 - x0 >*/
    xd = *x1 - *x0;
/*< 	yd = y1 - y0 >*/
    yd = *y1 - *y0;
/*< 	zd = z1 - z0 >*/
    zd = *z1 - *z0;
/* 	NEWANG LOGIC NOT TESTED AT ALL! */
/*< 	az = atan( yd/(xd+0.0001) ) / 0.017453293 >*/
    *az = atan(yd / (xd + (float)1e-4)) / (float).017453293;
/*< 	if( x1 .lt. x0 ) az = az + 180.0 >*/
    if (*x1 < *x0) {
	*az += (float)180.;
    }
/*< 	if( newang ) az = 90 - az >*/
    if (nhcom_1.newang) {
	*az = 90 - *az;
    }
/*< 	apartd = sqrt( xd*xd + yd*yd ) >*/
    apartd = sqrt(xd * xd + yd * yd);
/*< 	ae = atan( zd/(apartd+0.0001) ) / 0.017453293 >*/
    *ae = atan(zd / (apartd + (float)1e-4)) / (float).017453293;
/* 	END NEWANG LOGIC */
/*< 	ar = sqrt( apartd*apartd + zd*zd ) >*/
    *ar = sqrt(apartd * apartd + zd * zd);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* carpol_ */

