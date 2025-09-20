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
static integer c__4 = 4;
static integer c__2 = 2;
static integer c__32 = 32;
static integer c__52 = 52;
static integer c__10 = 10;
static integer c__3 = 3;
static integer c__60 = 60;
static integer c__79 = 79;
static integer c__20 = 20;
static integer c__17 = 17;
static integer c__6 = 6;
static integer c__0 = 0;
static integer c__5 = 5;
static integer c__43 = 43;
static integer c__44 = 44;
static integer c__12 = 12;
static integer c_n1 = -1;
static integer c__1031 = 1031;
static integer c__7 = 7;

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
/* 	*** LIFE.FOR *** */
/*< 	subroutine fmain >*/
/* Subroutine */ int fmain_()
{
    /* Initialized data */

    static integer spe = 79;
    static integer naptim = 1000;
    static integer mut = 79;
    static integer xdir[9] = { -1,0,1,-1,0,1,-1,0,1 };
    static integer ydir[9] = { -1,-1,-1,0,0,0,1,1,1 };
    static integer celchr[104]	/* was [26][4] */ = { 2,2,2,2,2,2,2,2,2,2,2,2,
	    2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
	    3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
	    3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3 };

    /* System generated locals */
    integer i__1, i__2, i__3, i__4;

    /* Local variables */
    static integer i__, x, y, it, lx, ly;
    static logical eof;
    static integer gen, iar;
    extern integer job_();
    extern /* Subroutine */ int nap_(), new_();
    static integer xadd, yadd, cmds[17], ilen;
    extern integer icon_();
    static integer temp, minx, miny, maxx, maxy, icom1, icom2, ichar;
    extern /* Subroutine */ int iscan_(), ofile_(), erase_();
    static integer ispac;
    extern /* Subroutine */ int rfile_();
    static integer cells[3200]	/* was [80][20][2] */;
    extern /* Subroutine */ int close_(), wfile_(), parse_();
    static integer gento, newar, ipmax, privd, minxs, minys, maxxs, maxys;
    extern /* Subroutine */ int tstop_();
    static logical change;
    extern /* Subroutine */ int defcol_(), allcap_();
    static integer comara[60];
    extern /* Subroutine */ int grafof_();
    static integer parara[20], celcnt;
    extern /* Subroutine */ int chrbuf_(), grafon_();
    extern integer iserch_();
    extern /* Subroutine */ int select_();
    static integer filesp[13];
    static logical newflg;
    extern /* Subroutine */ int rnfile_(), curbuf_(), clrscr_(), number_(), 
	    chrwat_(), getnum_(), pcolor_();
    extern integer isxbit_();
    extern /* Subroutine */ int chrout_();
    extern logical lerror_();
    extern /* Subroutine */ int colstr_(), string_(), getstr_(), netsix_(), 
	    convrt_(), cursor_(), outspc_();
    extern integer isrsix_();
    extern /* Subroutine */ int usrset_(), outspl_(), settty_(), irepeat_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer cells( 80, 20, 2 ), xdir(9), ydir(9) >*/
/*< 	integer comara(60), parara(20), filesp(13) >*/
/*< 	integer celchr( 26, 4 ) >*/
/*< 	integer cmds(17) >*/
/*< 	logical newflg, lerror, eof, change >*/
/*< 	commo >*/
/*< 	data spe/79/, naptim/1000/, mut/79/ >*/
/*< 	data xdir/-1,0,1,-1,0,1,-1,0,1/ >*/
/*< 	data ydir/-1,-1,-1,0,0,0,1,1,1/ >*/
/*< 	data ((celchr( i, j ), i=1, 26 ), j=1,4)/26*2,26*3,26*3,26*3/ >*/
/*< 	cmds( 1) = isxbit('CLEAR~') >*/
    cmds[0] = isxbit_("CLEAR~", (ftnlen)6);
/*< 	cmds( 2) = isxbit('INPUT~') >*/
    cmds[1] = isxbit_("INPUT~", (ftnlen)6);
/*< 	cmds( 3) = isxbit('EXIT~') >*/
    cmds[2] = isxbit_("EXIT~", (ftnlen)5);
/*< 	cmds( 4) = isxbit('KILL~') >*/
    cmds[3] = isxbit_("KILL~", (ftnlen)5);
/*< 	cmds( 5) = isxbit('READ~') >*/
    cmds[4] = isxbit_("READ~", (ftnlen)5);
/*< 	cmds( 6) = isxbit('SAVE~') >*/
    cmds[5] = isxbit_("SAVE~", (ftnlen)5);
/*< 	cmds( 7) = isxbit('DELETE~') >*/
    cmds[6] = isxbit_("DELETE~", (ftnlen)7);
/*< 	cmds( 8) = isxbit('NEW~') >*/
    cmds[7] = isxbit_("NEW~", (ftnlen)4);
/*< 	cmds( 9) = isxbit('GENERATION~') >*/
    cmds[8] = isxbit_("GENERATION~", (ftnlen)11);
/*< 	cmds(10) = isxbit('GO~') >*/
    cmds[9] = isxbit_("GO~", (ftnlen)3);
/*< 	cmds(11) = isxbit('CENTER~') >*/
    cmds[10] = isxbit_("CENTER~", (ftnlen)7);
/*< 	cmds(12) = isxbit('SET~') >*/
    cmds[11] = isxbit_("SET~", (ftnlen)4);
/*< 	cmds(13) = isxbit('EDIT~') >*/
    cmds[12] = isxbit_("EDIT~", (ftnlen)5);
/*< 	cmds(14) = isxbit('TIME~') >*/
    cmds[13] = isxbit_("TIME~", (ftnlen)5);
/*< 	cmds(15) = isxbit('STATUS~') >*/
    cmds[14] = isxbit_("STATUS~", (ftnlen)7);
/*< 	cmds(16) = isxbit('CROSSBREED~') >*/
    cmds[15] = isxbit_("CROSSBREED~", (ftnlen)11);
/*< 	cmds(17) = isxbit('HELP~') >*/
    cmds[16] = isxbit_("HELP~", (ftnlen)5);
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
/*< 	call settty( comara, parara, ilen, privd, filesp ) >*/
    settty_(comara, parara, &ilen, &privd, filesp);
/*< 	call defcol >*/
    defcol_();
/*< 100	call clrscr >*/
L100:
    clrscr_();
/*< 	call cursor( 1, 4 ) >*/
    cursor_(&c__1, &c__4);
/*< 	call colstr(icllbl,'Generation:    0^E') >*/
    colstr_(&col_1.icllbl, "Generation:    0^E", (ftnlen)18);
/*< 	gen = 0 >*/
    gen = 0;
/*< 	iar = 1 >*/
    iar = 1;
/*< 	minx = 80 >*/
    minx = 80;
/*< 	maxx = 1 >*/
    maxx = 1;
/*< 	miny = 20 >*/
    miny = 20;
/*< 	maxy = 1 >*/
    maxy = 1;
/*< 	call erase( cells, iar, minx, maxx, miny, maxy ) >*/
    erase_(cells, &iar, &minx, &maxx, &miny, &maxy);
/*< 200	call cursor( 1, 2 ) >*/
L200:
    cursor_(&c__1, &c__2);
/*< 	call colstr(icllbl,'Command:^E') >*/
    colstr_(&col_1.icllbl, "Command:^E", (ftnlen)10);
/*< 	call irepeat(32,52) >*/
    irepeat_(&c__32, &c__52);
/*< 	call cursor( 10, 2 ) >*/
    cursor_(&c__10, &c__2);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call getstr(3, comara, 60, ilen ) >*/
    getstr_(&c__3, comara, &c__60, &ilen);
/*< 	if( .not. newflg ) goto 205 >*/
    if (! newflg) {
	goto L205;
    }
/*< 	call new( cells, iar, minx, maxx, miny, maxy, gen ) >*/
    new_(cells, &iar, &minx, &maxx, &miny, &maxy, &gen);
/*< 	newflg = .false. >*/
    newflg = FALSE_;
/*< 	goto 208 >*/
    goto L208;
/*< 205	call cursor( 1, 1 ) >*/
L205:
    cursor_(&c__1, &c__1);
/*< 	call irepeat(32,79) >*/
    irepeat_(&c__32, &c__79);
/*< 208	if( ilen .eq. 0 ) goto 200 >*/
L208:
    if (ilen == 0) {
	goto L200;
    }
/*< 	call allcap( comara, ilen ) >*/
    allcap_(comara, &ilen);
/*< 	parara( 2 ) = 0 >*/
    parara[1] = 0;
/*< 	call parse( comara, ilen, parara, ipmax, 20 ) >*/
    parse_(comara, &ilen, parara, &ipmax, &c__20);
/*< 	if( ipmax .eq. 0 ) goto 200 >*/
    if (ipmax == 0) {
	goto L200;
    }
/*< 	icom1 = isrsix( cmds, parara(1), 17 ) >*/
    icom1 = isrsix_(cmds, parara, &c__17);
/*< 	if( icom1 .lt. 0 .or. icom1 .gt. 17 ) goto 209 >*/
    if (icom1 < 0 || icom1 > 17) {
	goto L209;
    }
/*< 	call convrt( parara(2), 1, 6, icom2, 0 ) >*/
    convrt_(&parara[1], &c__1, &c__6, &icom2, &c__0);
/*< 	goto( >*/
    switch ((int)icom1) {
	case 1:  goto L100;
	case 2:  goto L300;
	case 3:  goto L400;
	case 4:  goto L500;
	case 5:  goto L600;
	case 6:  goto L700;
	case 7:  goto L800;
	case 8:  goto L900;
	case 9:  goto L1000;
	case 10:  goto L1100;
	case 11:  goto L1200;
	case 12:  goto L1300;
	case 13:  goto L1400;
	case 14:  goto L1500;
	case 15:  goto L1600;
	case 16:  goto L1690;
	case 17:  goto L220;
    }
/*< 209	call cursor( 1, 1 ) >*/
L209:
    cursor_(&c__1, &c__1);
/*< 	call colstr(iclyel,'Illegal command.  Type help for help.^E') >*/
    colstr_(&col_1.iclyel, "Illegal command.  Type help for help.^E", (ftnlen)
	    39);
/*< 	goto 200 >*/
    goto L200;
/*< 220	call clrscr >*/
L220:
    clrscr_();
/*< 	call  >*/
    string_(&c__1, "Commands are:^M^JCLEAR                                  \
  Kill everything^M^JINPUT <SPECIES> <X> <Y>                  Put species at\
 X-Y^M^JKILL <SPECIES>                           Kill all species^M^JREAD <F\
ILESPEC>                          Read cells from file^M^JSAVE <FILESPEC>   \
                       Save cells on file^M^JDELETE <FILESPEC>              \
          Delete file^M^JNEW                                      Reprint sc\
reen^M^JGENERATION                               Reset generation^M^JGO <GEN\
>                                 Grow until GEN^M^JCENTER                  \
                 Center cell pattern^M^JTIME <MILLISECONDS>                 \
     Set interval time^M^JCROSSBREED <SPECIES>                     Set cross\
 breed^M^JSTATUS                                   Print out status^M^JEDIT \
                                    Enter edit mode^M^J                  A -\
 Z                  Input cell^M^J                 <SPACE>                 K\
ill cell^M^J                    0                    Exit edit mode^M^J     \
             1 - 9                  Move cursor^M^JSET <SPECIES MNLIV MXLIV \
MNBRN MXBRN>    Set parameters:^M^J                                         \
Minimum & maximum^M^J                                         to live & be b\
orn^E", (ftnlen)1277);
/*< 	newflg = .true. >*/
    newflg = TRUE_;
/*< 	goto 200 >*/
    goto L200;
/*< 225	call cursor( 1, 1 ) >*/
L225:
    cursor_(&c__1, &c__1);
/*< 	call colstr(iclyel,'Illegal argument for ^E') >*/
    colstr_(&col_1.iclyel, "Illegal argument for ^E", (ftnlen)23);
/*< 	call netsix( parara(1) ) >*/
    netsix_(parara);
/*< 	goto 200 >*/
    goto L200;
/*< 300	if( icom2 .ge. 65 .and. icom2 .le. 91 ) spe = icom2 >*/
L300:
    if (icom2 >= 65 && icom2 <= 91) {
	spe = icom2;
    }
/*< 	call getnum(6, comara, ilen, x, 10, y, 10 ) >*/
    getnum_(&c__6, comara, &ilen, &x, &c__10, &y, &c__10);
/*< 	if(x.lt.1.or.x.gt.80.or.y.lt.1.or.y.gt.20) goto 225 >*/
    if (x < 1 || x > 80 || y < 1 || y > 20) {
	goto L225;
    }
/*< 	if( x .lt. minx ) minx = x >*/
    if (x < minx) {
	minx = x;
    }
/*< 	if( x .gt. maxx ) maxx = x >*/
    if (x > maxx) {
	maxx = x;
    }
/*< 	if( y .lt. miny ) miny = y >*/
    if (y < miny) {
	miny = y;
    }
/*< 	if( y .gt. maxy ) maxy = y >*/
    if (y > maxy) {
	maxy = y;
    }
/*< 	cells( x, y, iar ) = spe >*/
    cells[x + (y + iar * 20) * 80 - 1681] = spe;
/*< 	call cursor( x, y+4 ) >*/
    i__1 = y + 4;
    cursor_(&x, &i__1);
/*< 	call chrout( spe ) >*/
    chrout_(&spe);
/*< 	goto 200 >*/
    goto L200;
/*< 400	call curbuf >*/
L400:
    curbuf_();
/*< 	call grafof >*/
    grafof_();
/*< 	call tstop >*/
    tstop_();
/*< 	call grafon >*/
    grafon_();
/*< 	goto 900 >*/
    goto L900;
/*< 500	call getnum(6, comara, ilen, x, 10, y, 10 ) >*/
L500:
    getnum_(&c__6, comara, &ilen, &x, &c__10, &y, &c__10);
/*< 	if(x.lt.1.or.x.gt.80.or.y.lt.1.or.y.gt.20) goto 510 >*/
    if (x < 1 || x > 80 || y < 1 || y > 20) {
	goto L510;
    }
/*< 	call cursor( x, y+4 ) >*/
    i__1 = y + 4;
    cursor_(&x, &i__1);
/*< 	call chrout( 32 ) >*/
    chrout_(&c__32);
/*< 	cells( x, y, iar ) = 32 >*/
    cells[x + (y + iar * 20) * 80 - 1681] = 32;
/*< 	goto 200 >*/
    goto L200;
/*< 510	if( icom2 .lt. 65 .or. icom2 .gt. 91 ) goto 225 >*/
L510:
    if (icom2 < 65 || icom2 > 91) {
	goto L225;
    }
/*< 	if( maxx .lt. minx ) goto 200 >*/
    if (maxx < minx) {
	goto L200;
    }
/*< 	do 520 x = minx, maxx >*/
    i__1 = maxx;
    for (x = minx; x <= i__1; ++x) {
/*< 	do 520 y = miny, maxy >*/
	i__2 = maxy;
	for (y = miny; y <= i__2; ++y) {
/*< 	    if( cells( x, y, iar ) .ne. icom2 )goto 520 >*/
	    if (cells[x + (y + iar * 20) * 80 - 1681] != icom2) {
		goto L520;
	    }
/*< 	    cells( x, y, iar ) = 32 >*/
	    cells[x + (y + iar * 20) * 80 - 1681] = 32;
/*< 	    call cursor( x+0, y+4 ) >*/
	    i__3 = x;
	    i__4 = y + 4;
	    cursor_(&i__3, &i__4);
/*< 	    call chrout( 32 ) >*/
	    chrout_(&c__32);
/*< 520	continue >*/
L520:
	    ;
	}
    }
/*< 	goto 200 >*/
    goto L200;
/*< 600	ispac = iserch( comara, 32, ilen ) >*/
L600:
    ispac = iserch_(comara, &c__32, &ilen);
/*< 	if( ispac .eq. 0 .or. ispac .eq. ilen ) goto 225 >*/
    if (ispac == 0 || ispac == ilen) {
	goto L225;
    }
/*< 	call iscan( ispac, ilen, comara, filesp ) >*/
    iscan_(&ispac, &ilen, comara, filesp);
/*< 	if( lerror(0) ) goto 225 >*/
    if (lerror_(&c__0)) {
	goto L225;
    }
/*< 	call ofile( 2, filesp, 0 ) >*/
    ofile_(&c__2, filesp, &c__0);
/*< 	if( lerror(0) ) goto 225 >*/
    if (lerror_(&c__0)) {
	goto L225;
    }
/*< 	call rfile( 2, filesp ) >*/
    rfile_(&c__2, filesp);
/*< 	if( lerror(0) ) goto 225 >*/
    if (lerror_(&c__0)) {
	goto L225;
    }
/*< 	call outspl( parara(1), filesp ) >*/
    outspl_(parara, filesp);
/*< 610	call getstr(5, comara, 60, ilen, 2, eof ) >*/
L610:
    getstr_(&c__5, comara, &c__60, &ilen, &c__2, &eof);
/*< 	if( eof ) goto 711 >*/
    if (eof) {
	goto L711;
    }
/*< 	if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 610 >*/
    if (ilen == 0 || comara[0] == 59) {
	goto L610;
    }
/*< 	temp = icon( comara(1) ) >*/
    temp = icon_(comara);
/*< 	if( temp .lt. 65 .or. temp .gt. 91 ) goto 620 >*/
    if (temp < 65 || temp > 91) {
	goto L620;
    }
/*< 	call getnum(6, comara, ilen, x, 10, y, 10 ) >*/
    getnum_(&c__6, comara, &ilen, &x, &c__10, &y, &c__10);
/*< 	if(x.lt.1.or.x.gt.80.or.y.lt.1.or.y.gt.20) goto 630 >*/
    if (x < 1 || x > 80 || y < 1 || y > 20) {
	goto L630;
    }
/*< 	if( x .lt. minx ) minx = x >*/
    if (x < minx) {
	minx = x;
    }
/*< 	if( x .gt. maxx ) maxx = x >*/
    if (x > maxx) {
	maxx = x;
    }
/*< 	if( y .lt. miny ) miny = y >*/
    if (y < miny) {
	miny = y;
    }
/*< 	if( y .gt. maxy ) maxy = y >*/
    if (y > maxy) {
	maxy = y;
    }
/*< 	cells( x, y, iar ) = temp >*/
    cells[x + (y + iar * 20) * 80 - 1681] = temp;
/*< 	call cursor( x, y+4 ) >*/
    i__2 = y + 4;
    cursor_(&x, &i__2);
/*< 	call chrout( temp ) >*/
    chrout_(&temp);
/*< 	goto 610 >*/
    goto L610;
/*< 615	call cursor( 1, 1 ) >*/
/* L615: */
    cursor_(&c__1, &c__1);
/*< 	call colstr(iclred,'Cannot read ^E') >*/
    colstr_(&col_1.iclred, "Cannot read ^E", (ftnlen)14);
/*< 	call outspc( filesp ) >*/
    outspc_(filesp);
/*< 	goto 200 >*/
    goto L200;
/*< 620	call cursor( 1, 1 ) >*/
L620:
    cursor_(&c__1, &c__1);
/*< 	call colstr(iclyel,'Unknown species: ^E') >*/
    colstr_(&col_1.iclyel, "Unknown species: ^E", (ftnlen)19);
/*< 	goto 640 >*/
    goto L640;
/*< 630	call cursor( 1, 1 ) >*/
L630:
    cursor_(&c__1, &c__1);
/*< 	call colstr(iclyel,'Bad coordinates: ^E') >*/
    colstr_(&col_1.iclyel, "Bad coordinates: ^E", (ftnlen)19);
/*< 640	call string(3, comara, 1, 43 ) >*/
L640:
    string_(&c__3, comara, &c__1, &c__43);
/*< 	goto 711 >*/
    goto L711;
/*< 700	ispac = iserch( comara, 32, ilen ) >*/
L700:
    ispac = iserch_(comara, &c__32, &ilen);
/*< 	if( ispac .eq. 0 .or. ispac .eq. ilen ) goto 225 >*/
    if (ispac == 0 || ispac == ilen) {
	goto L225;
    }
/*< 	call iscan( ispac, ilen, comara, filesp ) >*/
    iscan_(&ispac, &ilen, comara, filesp);
/*< 	if( lerror(0) ) goto 225 >*/
    if (lerror_(&c__0)) {
	goto L225;
    }
/*< 	call ofile( 2, filesp, 0 ) >*/
    ofile_(&c__2, filesp, &c__0);
/*< 	if( lerror(0) ) goto 750 >*/
    if (lerror_(&c__0)) {
	goto L750;
    }
/*< 	call wfile( 2, filesp ) >*/
    wfile_(&c__2, filesp);
/*< 	if( lerror(0) ) goto 750 >*/
    if (lerror_(&c__0)) {
	goto L750;
    }
/*< 	call outspl( parara(1), filesp ) >*/
    outspl_(parara, filesp);
/*< 	if( maxx .lt. minx ) goto 200 >*/
    if (maxx < minx) {
	goto L200;
    }
/*< 	call select( 2 ) >*/
    select_(&c__2);
/*< 	do 710 x = minx, maxx >*/
    i__2 = maxx;
    for (x = minx; x <= i__2; ++x) {
/*< 	do 710 y = miny, maxy >*/
	i__1 = maxy;
	for (y = miny; y <= i__1; ++y) {
/*< 	    if( cells( x, y, iar ) .le. 32 ) goto 710 >*/
	    if (cells[x + (y + iar * 20) * 80 - 1681] <= 32) {
		goto L710;
	    }
/*< 	    call chrout( cells( x, y, iar ) ) >*/
	    chrout_(&cells[x + (y + iar * 20) * 80 - 1681]);
/*< 	    call string(1,'  (^E') >*/
	    string_(&c__1, "  (^E", (ftnlen)5);
/*< 	    call number(2, x+0, 2 ) >*/
	    i__3 = x;
	    number_(&c__2, &i__3, &c__2);
/*< 	    call chrout(44) >*/
	    chrout_(&c__44);
/*< 	    call number(2, y+0, 2 ) >*/
	    i__3 = y;
	    number_(&c__2, &i__3, &c__2);
/*< 	    call string(1,')^M^J^E') >*/
	    string_(&c__1, ")^M^J^E", (ftnlen)7);
/*< 710	continue >*/
L710:
	    ;
	}
    }
/*< 711	call close( 2 ) >*/
L711:
    close_(&c__2);
/*< 	call select( 0 ) >*/
    select_(&c__0);
/*< 	goto 200 >*/
    goto L200;
/*< 750	call cursor( 1, 1 ) >*/
L750:
    cursor_(&c__1, &c__1);
/*< 	call colstr(iclred,'Cannot write ^E') >*/
    colstr_(&col_1.iclred, "Cannot write ^E", (ftnlen)15);
/*< 	call outspc( filesp ) >*/
    outspc_(filesp);
/*< 	goto 200 >*/
    goto L200;
/*< 800	ispac = iserch( comara, 32, ilen ) >*/
L800:
    ispac = iserch_(comara, &c__32, &ilen);
/*< 	if( ispac .eq. 0 .or. ispac .eq. ilen ) goto 225 >*/
    if (ispac == 0 || ispac == ilen) {
	goto L225;
    }
/*< 	call iscan( ispac, ilen, comara, filesp ) >*/
    iscan_(&ispac, &ilen, comara, filesp);
/*< 	if( lerror(0) ) goto 225 >*/
    if (lerror_(&c__0)) {
	goto L225;
    }
/*< 	call ofile( 2, filesp, 0 ) >*/
    ofile_(&c__2, filesp, &c__0);
/*< 	if( lerror(0) ) goto 225 >*/
    if (lerror_(&c__0)) {
	goto L225;
    }
/*< 	call rfile( 2, filesp ) >*/
    rfile_(&c__2, filesp);
/*< 	if( lerror(0) ) goto 225 >*/
    if (lerror_(&c__0)) {
	goto L225;
    }
/*< 	call outspl( parara(1), filesp ) >*/
    outspl_(parara, filesp);
/*< 	filesp( 4 ) = 0 >*/
    filesp[3] = 0;
/*< 	call rnfile( 2, filesp ) >*/
    rnfile_(&c__2, filesp);
/*< 	goto 200 >*/
    goto L200;
/*< 900	call new( cells, iar, minx, maxx, miny, maxy, gen ) >*/
L900:
    new_(cells, &iar, &minx, &maxx, &miny, &maxy, &gen);
/*< 	goto 200 >*/
    goto L200;
/*< 1000	call getnum(4, comara, ilen, gen, 10 ) >*/
L1000:
    getnum_(&c__4, comara, &ilen, &gen, &c__10);
/*< 	if( gen .lt. 0 .or. gen .gt. 9999 ) gen = 0 >*/
    if (gen < 0 || gen > 9999) {
	gen = 0;
    }
/*< 	call cursor( 1, 4 ) >*/
    cursor_(&c__1, &c__4);
/*< 	call colstr(icllbl,'Generation: ^E') >*/
    colstr_(&col_1.icllbl, "Generation: ^E", (ftnlen)14);
/*< 	call number(2, gen, 4 ) >*/
    number_(&c__2, &gen, &c__4);
/*< 	goto 200 >*/
    goto L200;
/*< 1100	call getnum(4, comara, ilen, gento, 10 ) >*/
L1100:
    getnum_(&c__4, comara, &ilen, &gento, &c__10);
/*< 	if( gento .le. gen .or. gento .gt. 9999 ) gento = 9999 >*/
    if (gento <= gen || gento > 9999) {
	gento = 9999;
    }
/*< 	call erase( cells, iar, minx, maxx, miny, maxy ) >*/
    erase_(cells, &iar, &minx, &maxx, &miny, &maxy);
/*< 1150	gen = gen + 1 >*/
L1150:
    ++gen;
/*< 	call cursor( 1, 4 ) >*/
    cursor_(&c__1, &c__4);
/*< 	call colstr(icllbl,'Generation: ^E') >*/
    colstr_(&col_1.icllbl, "Generation: ^E", (ftnlen)14);
/*< 	call number(2, gen, 4 ) >*/
    number_(&c__2, &gen, &c__4);
/*< 	call curbuf >*/
    curbuf_();
/*< 	newar = 3-iar >*/
    newar = 3 - iar;
/*< 	change = .false. >*/
    change = FALSE_;
/*< 	if( maxx .lt. minx ) goto 1191 >*/
    if (maxx < minx) {
	goto L1191;
    }
/*< 	minxs = max0( minx-1, 1 ) >*/
/* Computing MAX */
    i__1 = minx - 1;
    minxs = max(i__1,1);
/*< 	maxxs = min0( maxx+1, 80 ) >*/
/* Computing MIN */
    i__1 = maxx + 1;
    maxxs = min(i__1,80);
/*< 	minys = max0( miny-1, 1 ) >*/
/* Computing MAX */
    i__1 = miny - 1;
    minys = max(i__1,1);
/*< 	maxys = min0( maxy+1, 20 ) >*/
/* Computing MIN */
    i__1 = maxy + 1;
    maxys = min(i__1,20);
/*< 	do 1190 x = minxs, maxxs >*/
    i__1 = maxxs;
    for (x = minxs; x <= i__1; ++x) {
/*< 	do 1190 y = minys, maxys >*/
	i__2 = maxys;
	for (y = minys; y <= i__2; ++y) {
/*< 	    cells( x, y, newar ) = 32 >*/
	    cells[x + (y + newar * 20) * 80 - 1681] = 32;
/*< 	    celcnt = 0 >*/
	    celcnt = 0;
/*< 	    it =32  >*/
	    it = 32;
/*< 	    do 1165 lx = x-1, x+1 >*/
	    i__3 = x + 1;
	    for (lx = x - 1; lx <= i__3; ++lx) {
/*< 	    if( lx .lt. minxs .or. lx .gt. maxxs ) goto 1165 >*/
		if (lx < minxs || lx > maxxs) {
		    goto L1165;
		}
/*< 	    do 1160 ly = y-1, y+1 >*/
		i__4 = y + 1;
		for (ly = y - 1; ly <= i__4; ++ly) {
/*< 		if( ly .lt. minys .or. ly .gt. maxys ) goto 1160 >*/
		    if (ly < minys || ly > maxys) {
			goto L1160;
		    }
/*< 		if( cells( lx, ly, iar ) .le. 32 ) goto 1160 >*/
		    if (cells[lx + (ly + iar * 20) * 80 - 1681] <= 32) {
			goto L1160;
		    }
/*< 		celcnt = celcnt + 1 >*/
		    ++celcnt;
/*< 		if(it.ne.32.and.it.ne.cells(lx,ly,iar)) goto 1155 >*/
		    if (it != 32 && it != cells[lx + (ly + iar * 20) * 80 - 
			    1681]) {
			goto L1155;
		    }
/*< 		it = cells( lx, ly, iar ) >*/
		    it = cells[lx + (ly + iar * 20) * 80 - 1681];
/*< 		goto 1160 >*/
		    goto L1160;
/*< 1155		it = mut >*/
L1155:
		    it = mut;
/*< 1160	    continue >*/
L1160:
		    ;
		}
/*< 1165	    continue >*/
L1165:
		;
	    }
/*< 	    temp = cells( x, y, iar ) >*/
	    temp = cells[x + (y + iar * 20) * 80 - 1681];
/*< 	    if( temp .le. 32 ) goto 1170 >*/
	    if (temp <= 32) {
		goto L1170;
	    }
/*< 	    it = temp - 64 >*/
	    it = temp - 64;
/*< 	    celcnt = celcnt - 1 >*/
	    --celcnt;
/*< 	    i >*/
	    if (celcnt < celchr[it - 1] || celcnt > celchr[it + 25]) {
		goto L1180;
	    }
/*< 	    cells( x, y, newar ) = cells( x, y, iar ) >*/
	    cells[x + (y + newar * 20) * 80 - 1681] = cells[x + (y + iar * 20)
		     * 80 - 1681];
/*< 	    goto 1180 >*/
	    goto L1180;
/*< 1170	  >*/
L1170:
	    if (celcnt < celchr[it - 13] || celcnt > celchr[it + 13]) {
		goto L1180;
	    }
/*< 	    cells( x, y, newar ) = it >*/
	    cells[x + (y + newar * 20) * 80 - 1681] = it;
/*< 	    if( x .lt. minx ) minx = x >*/
	    if (x < minx) {
		minx = x;
	    }
/*< 	    if( x .gt. maxx ) maxx = x >*/
	    if (x > maxx) {
		maxx = x;
	    }
/*< 	    if( y .lt. miny ) miny = y >*/
	    if (y < miny) {
		miny = y;
	    }
/*< 	    if( y .gt. maxy ) maxy = y >*/
	    if (y > maxy) {
		maxy = y;
	    }
/*< 1180	  >*/
L1180:
	    if (cells[x + (y + newar * 20) * 80 - 1681] == cells[x + (y + iar 
		    * 20) * 80 - 1681]) {
		goto L1190;
	    }
/*< 	    change = .true. >*/
	    change = TRUE_;
/*< 	    call cursor( x+0, y+4 ) >*/
	    i__3 = x;
	    i__4 = y + 4;
	    cursor_(&i__3, &i__4);
/*< 	    it = cells( x, y, newar ) >*/
	    it = cells[x + (y + newar * 20) * 80 - 1681];
/*< 	    call pcolor( mod(it,7)+1 ) >*/
	    i__3 = it % 7 + 1;
	    pcolor_(&i__3);
/*< 	    call chrout( it ) >*/
	    chrout_(&it);
/*< 1190	continue >*/
L1190:
	    ;
	}
    }
/*< 1191	iar = newar >*/
L1191:
    iar = newar;
/*< 	call curbuf >*/
    curbuf_();
/*< 	call nap( naptim, 12 ) >*/
    nap_(&naptim, &c__12);
/*< 	call chrbuf( ichar ) >*/
    chrbuf_(&ichar);
/*< 	if( ichar .eq. -1 .and. gen .lt. gento .and. change ) goto 1150 >*/
    if (ichar == -1 && gen < gento && change) {
	goto L1150;
    }
/*< 	if( change ) goto 200 >*/
    if (change) {
	goto L200;
    }
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call colstr(icllbl,'*** Culture has stabilized ***^E') >*/
    colstr_(&col_1.icllbl, "*** Culture has stabilized ***^E", (ftnlen)32);
/*< 	goto 200 >*/
    goto L200;
/*< 1200	newar = 3-iar >*/
L1200:
    newar = 3 - iar;
/*< 	if( maxx .lt. minx ) goto 200 >*/
    if (maxx < minx) {
	goto L200;
    }
/*< 	call erase( cells, iar, minx, maxx, miny, maxy ) >*/
    erase_(cells, &iar, &minx, &maxx, &miny, &maxy);
/*< 	minxs = minx >*/
    minxs = minx;
/*< 	minx = 80 >*/
    minx = 80;
/*< 	maxxs = maxx >*/
    maxxs = maxx;
/*< 	maxx = 1 >*/
    maxx = 1;
/*< 	minys = miny >*/
    minys = miny;
/*< 	miny = 20 >*/
    miny = 20;
/*< 	maxys = maxy >*/
    maxys = maxy;
/*< 	maxy = 1 >*/
    maxy = 1;
/*< 	do 1250 x = minxs, maxxs >*/
    i__2 = maxxs;
    for (x = minxs; x <= i__2; ++x) {
/*< 	do 1250 y = minys, maxys >*/
	i__1 = maxys;
	for (y = minys; y <= i__1; ++y) {
/*< 	    if( cells( x, y, iar ) .eq. 32 ) goto 1250 >*/
	    if (cells[x + (y + iar * 20) * 80 - 1681] == 32) {
		goto L1250;
	    }
/*< 	    if( x .lt. minx ) minx = x >*/
	    if (x < minx) {
		minx = x;
	    }
/*< 	    if( x .gt. maxx ) maxx = x >*/
	    if (x > maxx) {
		maxx = x;
	    }
/*< 	    if( y .lt. miny ) miny = y >*/
	    if (y < miny) {
		miny = y;
	    }
/*< 	    if( y .gt. maxy ) maxy = y >*/
	    if (y > maxy) {
		maxy = y;
	    }
/*< 1250	continue >*/
L1250:
	    ;
	}
    }
/*< 	if( maxx .lt. minx ) goto 200 >*/
    if (maxx < minx) {
	goto L200;
    }
/*< 	xadd = 40 - (maxx-minx)/2 - minx >*/
    xadd = 40 - (maxx - minx) / 2 - minx;
/*< 	yadd = 10 - (maxy-miny)/2 - miny >*/
    yadd = 10 - (maxy - miny) / 2 - miny;
/*< 	if( xadd .eq. 0 .and. yadd .eq. 0 ) goto 200 >*/
    if (xadd == 0 && yadd == 0) {
	goto L200;
    }
/*< 	do 1275 x = minx, maxx >*/
    i__1 = maxx;
    for (x = minx; x <= i__1; ++x) {
/*< 	do 1275 y = miny, maxy >*/
	i__2 = maxy;
	for (y = miny; y <= i__2; ++y) {
/*< 	    cells( x+xadd, y+yadd, newar ) = cells( x, y, iar ) >*/
	    cells[x + xadd + (y + yadd + newar * 20) * 80 - 1681] = cells[x + 
		    (y + iar * 20) * 80 - 1681];
/*< 	    cells( x, y, iar ) = 32 >*/
	    cells[x + (y + iar * 20) * 80 - 1681] = 32;
/*< 1275	continue >*/
/* L1275: */
	}
    }
/*< 	iar = newar >*/
    iar = newar;
/*< 	minx = minx + xadd >*/
    minx += xadd;
/*< 	maxx = maxx + xadd >*/
    maxx += xadd;
/*< 	miny = miny + yadd >*/
    miny += yadd;
/*< 	maxy = maxy + yadd >*/
    maxy += yadd;
/*< 	goto 900 >*/
    goto L900;
/*< 1300	if( icom2 .lt. 65 .or. icom2 .gt. 91 ) goto 1350 >*/
L1300:
    if (icom2 < 65 || icom2 > 91) {
	goto L1350;
    }
/*< 	spe = icom2 >*/
    spe = icom2;
/*< 	temp = icom2 - 64 >*/
    temp = icom2 - 64;
/*< 	call  >*/
    getnum_(&c__10, comara, &ilen, &celchr[temp - 1], &c__10, &celchr[temp + 
	    25], &c__10, &celchr[temp + 51], &c__10, &celchr[temp + 77], &
	    c__10);
/*< 	if(celchr(temp,1).lt.1.or.celchr(temp,1).gt.8)celchr(temp,1)=2 >*/
    if (celchr[temp - 1] < 1 || celchr[temp - 1] > 8) {
	celchr[temp - 1] = 2;
    }
/*< 	if(celchr(temp,2).lt.1.or.celchr(temp,2).gt.8)celchr(temp,2)=3 >*/
    if (celchr[temp + 25] < 1 || celchr[temp + 25] > 8) {
	celchr[temp + 25] = 3;
    }
/*< 	if( c >*/
    if (celchr[temp + 25] < celchr[temp - 1]) {
	celchr[temp + 25] = celchr[temp - 1];
    }
/*< 	if(celchr(temp,3).lt.1.or.celchr(temp,3).gt.8)celchr(temp,3)=3 >*/
    if (celchr[temp + 51] < 1 || celchr[temp + 51] > 8) {
	celchr[temp + 51] = 3;
    }
/*< 	if(celchr(temp,4).lt.1.or.celchr(temp,4).gt.8)celchr(temp,4)=3 >*/
    if (celchr[temp + 77] < 1 || celchr[temp + 77] > 8) {
	celchr[temp + 77] = 3;
    }
/*< 	if( c >*/
    if (celchr[temp + 77] < celchr[temp + 51]) {
	celchr[temp + 77] = celchr[temp + 51];
    }
/*< 	goto 200 >*/
    goto L200;
/*< 1350	do 1360 i = 1, 26 >*/
L1350:
    for (i__ = 1; i__ <= 26; ++i__) {
/*< 	    celchr( i, 1 ) = 2 >*/
	celchr[i__ - 1] = 2;
/*< 	    celchr( i, 2 ) = 3 >*/
	celchr[i__ + 25] = 3;
/*< 	    celchr( i, 3 ) = 3 >*/
	celchr[i__ + 51] = 3;
/*< 	    celchr( i, 4 ) = 3 >*/
	celchr[i__ + 77] = 3;
/*< 1360	continue >*/
/* L1360: */
    }
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call colstr(icllbl,'Cell characteristics reset.^E') >*/
    colstr_(&col_1.icllbl, "Cell characteristics reset.^E", (ftnlen)29);
/*< 	goto 200 >*/
    goto L200;
/*< 1400	if( job(-1) .ne. 0 ) call usrset( 1031, 1 ) >*/
L1400:
    if (job_(&c_n1) != 0) {
	usrset_(&c__1031, &c__1);
    }
/*< 	x = (minx+maxx)/2 >*/
    x = (minx + maxx) / 2;
/*< 	y = (miny+maxy)/2 >*/
    y = (miny + maxy) / 2;
/*< 1450	call cursor( x, y+4 ) >*/
L1450:
    i__2 = y + 4;
    cursor_(&x, &i__2);
/*< 	call pcolor( mod( cells( x, y, iar ), 7 ) + 1 ) >*/
    i__2 = cells[x + (y + iar * 20) * 80 - 1681] % 7 + 1;
    pcolor_(&i__2);
/*< 	call chrout( cells( x, y, iar ) ) >*/
    chrout_(&cells[x + (y + iar * 20) * 80 - 1681]);
/*< 	call cursor( x, y+4 ) >*/
    i__2 = y + 4;
    cursor_(&x, &i__2);
/*< 	call curbuf >*/
    curbuf_();
/*< 	call chrwat( ichar ) >*/
    chrwat_(&ichar);
/*< 	if( ichar .ne. 48 ) goto 1460 >*/
    if (ichar != 48) {
	goto L1460;
    }
/*< 	if( job(-1) .ne. 0 ) call usrset( 1031, 0 ) >*/
    if (job_(&c_n1) != 0) {
	usrset_(&c__1031, &c__0);
    }
/*< 	goto 200 >*/
    goto L200;
/*< 1460	if( ichar .ne. 53 ) goto 1470 >*/
L1460:
    if (ichar != 53) {
	goto L1470;
    }
/*< 	cells( x, y, iar ) = 32 >*/
    cells[x + (y + iar * 20) * 80 - 1681] = 32;
/*< 	goto 1450 >*/
    goto L1450;
/*< 1470	if( ichar .lt. 65 ) goto 1475 >*/
L1470:
    if (ichar < 65) {
	goto L1475;
    }
/*< 	if( ichar .gt. 91 ) ichar = ichar - 32 >*/
    if (ichar > 91) {
	ichar += -32;
    }
/*< 	if( ichar .lt. 65 .or. ichar .gt. 91 ) goto 1480 >*/
    if (ichar < 65 || ichar > 91) {
	goto L1480;
    }
/*< 	cells( x, y, iar ) = ichar >*/
    cells[x + (y + iar * 20) * 80 - 1681] = ichar;
/*< 	spe = ichar >*/
    spe = ichar;
/*< 	if( x .lt. minx ) minx = x >*/
    if (x < minx) {
	minx = x;
    }
/*< 	if( x .gt. maxx ) maxx = x >*/
    if (x > maxx) {
	maxx = x;
    }
/*< 	if( y .lt. miny ) miny = y >*/
    if (y < miny) {
	miny = y;
    }
/*< 	if( y .gt. maxy ) maxy = y >*/
    if (y > maxy) {
	maxy = y;
    }
/*< 	goto 1450 >*/
    goto L1450;
/*< 1475	ichar = ichar - 48 >*/
L1475:
    ichar += -48;
/*< 	if( ichar .lt. 1 .or. ichar .gt. 9 ) goto 1480 >*/
    if (ichar < 1 || ichar > 9) {
	goto L1480;
    }
/*< 	x = x + xdir( ichar ) >*/
    x += xdir[ichar - 1];
/*< 	y = y + ydir( ichar ) >*/
    y += ydir[ichar - 1];
/*< 	if( x .lt. 1 ) x = 1 >*/
    if (x < 1) {
	x = 1;
    }
/*< 	if( x .gt. 80 ) x = 80 >*/
    if (x > 80) {
	x = 80;
    }
/*< 	if( y .lt. 1 ) y = 1 >*/
    if (y < 1) {
	y = 1;
    }
/*< 	if( y .gt. 20 ) y = 20 >*/
    if (y > 20) {
	y = 20;
    }
/*< 	goto 1450 >*/
    goto L1450;
/*< 1480	call chrout( 7 ) >*/
L1480:
    chrout_(&c__7);
/*< 	goto 1450 >*/
    goto L1450;
/*< 1500	call getnum(4, comara, ilen, naptim, 10 ) >*/
L1500:
    getnum_(&c__4, comara, &ilen, &naptim, &c__10);
/*< 	if( naptim .le. 0 ) naptim = 1 >*/
    if (naptim <= 0) {
	naptim = 1;
    }
/*< 	goto 200 >*/
    goto L200;
/*< 1600	if( icom2 .lt. 65 .or. icom2 .gt. 91 ) goto 1605 >*/
L1600:
    if (icom2 < 65 || icom2 > 91) {
	goto L1605;
    }
/*< 	call cursor( 1, 1 ) >*/
    cursor_(&c__1, &c__1);
/*< 	call colstr(icllbl,'Status-^E') >*/
    colstr_(&col_1.icllbl, "Status-^E", (ftnlen)9);
/*< 	call chrout( icom2 ) >*/
    chrout_(&icom2);
/*< 	call string(1,':  MnLiv: ^E') >*/
    string_(&c__1, ":  MnLiv: ^E", (ftnlen)12);
/*< 	call number(1, celchr( icom2-64, 1 ) ) >*/
    number_(&c__1, &celchr[icom2 - 65]);
/*< 	call string(1,'   MxLiv: ^E') >*/
    string_(&c__1, "   MxLiv: ^E", (ftnlen)12);
/*< 	call number(1, celchr( icom2-64, 2 ) ) >*/
    number_(&c__1, &celchr[icom2 - 39]);
/*< 	call string(1,'   MnBrn: ^E') >*/
    string_(&c__1, "   MnBrn: ^E", (ftnlen)12);
/*< 	call number(1, celchr( icom2-64, 3 ) ) >*/
    number_(&c__1, &celchr[icom2 - 13]);
/*< 	call string(1,'   MxBrn: ^E') >*/
    string_(&c__1, "   MxBrn: ^E", (ftnlen)12);
/*< 	call number(1, celchr( icom2-64, 4 ) ) >*/
    number_(&c__1, &celchr[icom2 + 13]);
/*< 	goto 200 >*/
    goto L200;
/*< 1605	newflg = .true. >*/
L1605:
    newflg = TRUE_;
/*< 	call clrscr >*/
    clrscr_();
/*< 	call  >*/
    string_(&c__1, "Cell characteristics:^M^J        A B C D E F G H I J K L\
 M N O P Q R S T U V W X Y Z^M^JMnLiv: ^E", (ftnlen)97);
/*< 	do 1610 i = 1, 26 >*/
    for (i__ = 1; i__ <= 26; ++i__) {
/*< 	    call number(2, celchr( i, 1 ), 2 ) >*/
	number_(&c__2, &celchr[i__ - 1], &c__2);
/*< 1610	continue >*/
/* L1610: */
    }
/*< 	call string(1,'^M^JMxLiv: ^E') >*/
    string_(&c__1, "^M^JMxLiv: ^E", (ftnlen)13);
/*< 	do 1620 i = 1, 26 >*/
    for (i__ = 1; i__ <= 26; ++i__) {
/*< 	    call number(2, celchr( i, 2 ), 2 ) >*/
	number_(&c__2, &celchr[i__ + 25], &c__2);
/*< 1620	continue >*/
/* L1620: */
    }
/*< 	call string(1,'^M^JMnBrn: ^E') >*/
    string_(&c__1, "^M^JMnBrn: ^E", (ftnlen)13);
/*< 	do 1630 i = 1, 26 >*/
    for (i__ = 1; i__ <= 26; ++i__) {
/*< 	    call number(2, celchr( i, 3 ), 2 ) >*/
	number_(&c__2, &celchr[i__ + 51], &c__2);
/*< 1630	continue >*/
/* L1630: */
    }
/*< 	call string(1,'^M^JMxBrn: ^E') >*/
    string_(&c__1, "^M^JMxBrn: ^E", (ftnlen)13);
/*< 	do 1640 i = 1, 26 >*/
    for (i__ = 1; i__ <= 26; ++i__) {
/*< 	    call number(2, celchr( i, 4 ), 2 ) >*/
	number_(&c__2, &celchr[i__ + 77], &c__2);
/*< 1640	continue >*/
/* L1640: */
    }
/*< 	if( m >*/
    if (maxx < minx) {
	colstr_(&col_1.iclyel, "^M^J^JRanges undefined.^E", (ftnlen)25);
    }
/*< 	if( maxx .lt. minx ) goto 1650 >*/
    if (maxx < minx) {
	goto L1650;
    }
/*< 	call colstr(icllbl,'^M^J^JX-range: ^E') >*/
    colstr_(&col_1.icllbl, "^M^J^JX-range: ^E", (ftnlen)17);
/*< 	call number(2, minx, 2 ) >*/
    number_(&c__2, &minx, &c__2);
/*< 	call string(1,' - ^E') >*/
    string_(&c__1, " - ^E", (ftnlen)5);
/*< 	call number(2, maxx, 2 ) >*/
    number_(&c__2, &maxx, &c__2);
/*< 	call string(1,'   Y-range: ^E') >*/
    string_(&c__1, "   Y-range: ^E", (ftnlen)14);
/*< 	call number(2, miny, 2 ) >*/
    number_(&c__2, &miny, &c__2);
/*< 	call string(1,' - ^E') >*/
    string_(&c__1, " - ^E", (ftnlen)5);
/*< 	call number(2, maxy, 2 ) >*/
    number_(&c__2, &maxy, &c__2);
/*< 1650	call string(1,'^M^JInterval: ^E') >*/
L1650:
    string_(&c__1, "^M^JInterval: ^E", (ftnlen)16);
/*< 	call number(1, naptim ) >*/
    number_(&c__1, &naptim);
/*< 	call string(1,'^M^JCross breed: ^E') >*/
    string_(&c__1, "^M^JCross breed: ^E", (ftnlen)19);
/*< 	call chrout( mut ) >*/
    chrout_(&mut);
/*< 	call string(1,'^M^JCurrent species: ^E') >*/
    string_(&c__1, "^M^JCurrent species: ^E", (ftnlen)23);
/*< 	call chrout( spe ) >*/
    chrout_(&spe);
/*< 	goto 200 >*/
    goto L200;
/*< 1690	if( icom2 .lt. 65 .or. icom2 .gt. 91 ) goto 225 >*/
L1690:
    if (icom2 < 65 || icom2 > 91) {
	goto L225;
    }
/*< 	mut = icom2 >*/
    mut = icom2;
/*< 	goto 200 >*/
    goto L200;
/*< 	end >*/
} /* fmain_ */


/*< 	subroutine outspl( ic, filesp ) >*/
/* Subroutine */ int outspl_(ic, filesp)
integer *ic, *filesp;
{
    extern /* Subroutine */ int curbuf_(), chrout_(), netsix_(), cursor_(), 
	    outspc_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer filesp(13) >*/
/*< 	call cursor( 1, 1 ) >*/
    /* Parameter adjustments */
    --filesp;

    /* Function Body */
    cursor_(&c__1, &c__1);
/*< 	call netsix( ic ) >*/
    netsix_(ic);
/*< 	call chrout(32) >*/
    chrout_(&c__32);
/*< 	call outspc( filesp ) >*/
    outspc_(&filesp[1]);
/*< 	call curbuf >*/
    curbuf_();
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* outspl_ */


/*< 	subroutine netsix( iword ) >*/
/* Subroutine */ int netsix_(iword)
integer *iword;
{
    static integer ispac;
    extern integer iserch_();
    static integer wrdara[6];
    extern /* Subroutine */ int string_(), convrt_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer wrdara( 6 ) >*/
/*< 	call convrt( iword, 6, 6, wrdara, 1 ) >*/
    convrt_(iword, &c__6, &c__6, wrdara, &c__1);
/*< 	ispac = iserch( wrdara, 32, 6 ) - 1 >*/
    ispac = iserch_(wrdara, &c__32, &c__6) - 1;
/*< 	if( ispac .eq. -1 ) ispac = 6 >*/
    if (ispac == -1) {
	ispac = 6;
    }
/*< 	if( ispac .eq. 0 ) return >*/
    if (ispac == 0) {
	return 0;
    }
/*< 	call string(3, wrdara, 1, ispac ) >*/
    string_(&c__3, wrdara, &c__1, &ispac);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* netsix_ */


/*< 	subroutine erase( cells, iar, minx, maxx, miny, maxy ) >*/
/* Subroutine */ int erase_(cells, iar, minx, maxx, miny, maxy)
integer *cells, *iar, *minx, *maxx, *miny, *maxy;
{
    static integer x, y, newar;

/*< 	implicit integer ( a - z ) >*/
/*< 	integer cells( 80, 20, 2 ) >*/
/*< 	newar = 3-iar >*/
    /* Parameter adjustments */
    cells -= 1681;

    /* Function Body */
    newar = 3 - *iar;
/*< 	do 100 x = 1, 80 >*/
    for (x = 1; x <= 80; ++x) {
/*< 	do 100 y = 1, 20 >*/
	for (y = 1; y <= 20; ++y) {
/*< 	    cells( x, y, newar ) = 32 >*/
	    cells[x + (y + newar * 20) * 80] = 32;
/*< 	    i >*/
	    if (x < *minx || x > *maxx || y < *miny || y > *maxy) {
		cells[x + (y + *iar * 20) * 80] = 32;
	    }
/*< 100	continue >*/
/* L100: */
	}
    }
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* erase_ */


/*< 	subroutine new( cells, iar, minx, maxx, miny, maxy, gen ) >*/
/* Subroutine */ int new_(cells, iar, minx, maxx, miny, maxy, gen)
integer *cells, *iar, *minx, *maxx, *miny, *maxy, *gen;
{
    /* System generated locals */
    integer i__1, i__2, i__3, i__4;

    /* Local variables */
    static integer x, y;
    extern /* Subroutine */ int clrscr_(), number_(), chrout_(), colstr_(), 
	    cursor_();

/*< 	implicit integer ( a - z ) >*/
/*< 	integer cells( 80, 20, 2 ) >*/
/*< 	commo >*/
/*< 	call clrscr >*/
    /* Parameter adjustments */
    cells -= 1681;

    /* Function Body */
    clrscr_();
/*< 	if( maxx .lt. minx ) goto 105 >*/
    if (*maxx < *minx) {
	goto L105;
    }
/*< 	do 100 x = minx, maxx >*/
    i__1 = *maxx;
    for (x = *minx; x <= i__1; ++x) {
/*< 	do 100 y = miny, maxy >*/
	i__2 = *maxy;
	for (y = *miny; y <= i__2; ++y) {
/*< 	    if( cells( x, y, iar ) .le. 32 ) goto 100 >*/
	    if (cells[x + (y + *iar * 20) * 80] <= 32) {
		goto L100;
	    }
/*< 	    call cursor( x+0, y+4 ) >*/
	    i__3 = x;
	    i__4 = y + 4;
	    cursor_(&i__3, &i__4);
/*< 	    call chrout( cells( x, y, iar ) ) >*/
	    chrout_(&cells[x + (y + *iar * 20) * 80]);
/*< 100	continue >*/
L100:
	    ;
	}
    }
/*< 105	call cursor( 1, 4 ) >*/
L105:
    cursor_(&c__1, &c__4);
/*< 	call colstr(icllbl,'Generation: ^E') >*/
    colstr_(&col_1.icllbl, "Generation: ^E", (ftnlen)14);
/*< 	call number(2, gen, 4 ) >*/
    number_(&c__2, gen, &c__4);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* new_ */

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

/*<     	subroutine defcol >*/
/* Subroutine */ int defcol_()
{
    extern /* Subroutine */ int pback_(), pcolor_();

/*< 	commo >*/
/*< 	call pback( iclbla ) >*/
    pback_(&col_1.iclbla);
/*< 	call pcolor( iclwhi ) >*/
    pcolor_(&col_1.iclwhi);
/*< 	return >*/
    return 0;
/*< 	end >*/
} /* defcol_ */

