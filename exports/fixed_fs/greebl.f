C	@HDR@	$Id$
C	@HDR@		Copyright 1982-2025 by
C	@HDR@		Christopher Caldwell/Brightsands
C	@HDR@		P.O. Box 401, Bailey Island, ME 04003
C	@HDR@		All Rights Reserved
C	@HDR@
C	@HDR@	This software comprises unpublished confidential information
C	@HDR@	of Brightsands and may not be used, copied or made available
C	@HDR@	to anyone, except in accordance with the license under which
C	@HDR@	it is furnished.
	subroutine defcol

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call pcolor( iclwhi )
	call pback( iclbla )
	return
	end

	subroutine fmain

	implicit integer ( a - z )

	integer filspc( 13 )		! where run from
	integer comara( 80 ), ilen	! input array for data file
	integer parara( 40 ), plen	! pararased stuff for initdb
	integer xdir( 9 ), ydir( 9 )
	integer player
	integer screen,inuse,pos,direxn,conflg
	integer type,useful,charep,recovr,whosen,score
	logical firing, reping, iniflg, new

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data screen,inuse,pos,direxn,conflg,
     &	type,useful,charep,recovr,whosen,score
     &	    /1,2,3,4,5,6,7,8,9,10,11/
	data xdir/-1,0,1,-1,0,1,-1,0,1/
	data ydir/-1,-1,-1,0,0,0,1,1,1/
	data igrebl/-1/, iplayr/-1/

	if( iclwhi .ne. 0 ) goto 3
	iclwhi = 1
	icldbl = 2
	iclred = 3
	icllbl = 4
	iclpur = 5
	iclgre = 6
	iclyel = 7
	iclbla = 8

3	call settty( comara, par, ilen, privd, filspc )
	call enable
	call check( iniflg )
	if( .not. iniflg ) goto 10000

C***************************** INITDB *******************************

	call init(6, 0,61,  screen, 18, 24, 80 )
	call defadr( 1, iright(itbadr(screen)) )
	call setdis( 1 )
	call clrscr
	call pback( icllbl )
	call pcolor( icllbl )
	call cursor( 1, 24 )
	call chrout(47)
	call irepeat(45,78)
	call chrout(92)
	call cursor( 1, 3 )
	call chrout(92)
	call irepeat(45,78)
	call chrout(47)
	do 100 i = 1, 20
	    call cursor( 1, i+3 )
	    call chrout(124)
	    call cursor( 80, i+3 )
	    call chrout(124)
100	continue
	do 200 i = 1, 200
150	    ix = iran( 80 )
	    iy = iran( 20 ) + 3
	    if( ichrat(ix,iy) .ne. 32 ) goto 150
	    call cursor( ix, iy )
	    call chrout(42)
200	continue
	call pback( iclbla )
	call cursor( 1, 2 )
	call string(1,'Time:^E')
	call cursor( 26, 2 )
	call string(1,'Greeble kills:^E')
	call cursor( 51, 2 )
	call string(1,'Player kills:^E')

	call init(5, 0,96,  inuse, 1, 100 )
	do 210 i = 1, 100
	    call putval(5, 0,98,  inuse, i+0, 0 )
210	continue
	call init(6, 0,100,  pos, 7, 100, 2 )
	call init(5, 0,101,  direxn, 7, 100 )
	call init(5, 0,102,  conflg, 1, 100 )
	call init(5, 0,103,  type, 6, 100 )
	call init(5, 0,104,  useful, 36, 3 )
	call putval(5, 0,105,  useful, 1, 0 )
	call putval(5, 0,106,  useful, 2, 0 )
	call putval(5, 0,107,  useful, 3, 0 )
	call init(5, 0,108,  charep, 7, 100 )
	call init(5, 0,109,  recovr, 5, 100 )
	call init(5, 0,110,  whosen, 7, 100 )
	call init(6, 0,111,  score, 18, 100, 2 )
	call unlock
	goto 10010
C
C***************************** SETUP ********************************

10000	call defadr( 1, iright(itbadr(screen)) )
C10000	CALL DEFSCR( 1, SCREEN )
10010	call setdis( 0 )
10020	continue ! call ctrap
c	    call exprog
	call string(1,'^M^JInput character to represent player: ^B')
	call chrwat( ichar )
	call enable
	call lock
	if( ichar .gt. 90 ) ichar = ichar - 32
	if( ichar .lt. 65 .or. ichar .gt. 90 ) goto 10030
	do 10025 i = 100, 1, -1
	    call getval(5, 0,128,  inuse, i+0, ival )
	    if( ival .eq. 1 ) goto 10023
	    player = i
	    goto 10025

10023	    call getval(5, 0,133,  charep, i+0, ival )
	    if( ival .eq. ichar ) goto 10030
10025	continue
	goto 10040

10030	call unlock
	call string(1,'^M^JCharacter in use.  ^E')
	goto 10020

10040	call putval(5, 0,142,  inuse, player, 1 )
	call putval(5, 0,143,  charep, player, ichar )
	call putval(6, 0,144,  pos, player, 1, 127 )
	call putval(6, 0,145,  pos, player, 2, 127 )
	call putval(5, 0,146,  type, player, 1 )
	call putval(5, 0,147,  direxn, player, 5 )
	call putval(5, 0,148,  conflg, player, 0 )
	call putval(5, 0,149,  recovr, player, 0 )
	call putval(6, 0,150,  score, player, 1, 0 )
	call putval(6, 0,151,  score, player, 2, 0 )
	call unlock
	call setdis( 1 )
	call newscr( screen )
	new = .false.

10050	ix = iran( 80 )
	iy = iran( 20 ) + 3
	if( ichrat( ix, iy ) .ne. 32 ) goto 10050
	call lock
	call cursor( ix, iy )
	call putval(6, 0,162,  pos, player, 1, ix )
	call putval(6, 0,163,  pos, player, 2, iy )
	call pback( iclbla )
	call pcolor( iclwhi )
	call chrout( ichar )
	call unlock
	call grafon
	continue ! call ctrap
c	    call cease( .false. )
C
C****************************** COMMANDS ****************************

10100	if( new ) call newscr( screen )
	if( .not. new ) call update( screen )
	new = .false.
	call getval(5, 0,176,  inuse, player, ival )
	if( ival .ne. 1 ) call cease( .true. )
	call setdis( 0 )
	call getval(6, 0,179,  score, player, 1, ival )
	if( ival .eq. igrebl ) goto 10102
	call cursor( 41, 2 )
	call number(1, ival )
	igrebl = ival
10102	call getval(6, 0,184,  score, player, 2, ival )
	if( ival .eq. iplayr ) goto 10103
	call cursor( 65, 2 )
	call number(1, ival )
	iplayr = ival
10103	call setdis( 1 )
10110	call chrbuf( ichar )
	if( ichar .eq. -1 ) goto 20000
	if( reping .and. ichar .gt. 48 .and. ichar .le. 57 ) goto 10300
	call putval(5, 0,193,  conflg, player, 0 )
	call putval(5, 0,194,  direxn, player, 5 )
	reping = .false.
	if( firing .and. ichar .gt. 48 .and. ichar .le. 57 ) goto 10200
	firing = .false.
	if( ichar .gt. 48 .and. ichar .le. 57 ) goto 10300
	ichar = icon( ichar )
	call allcap( ichar, 1 )
	if( ichar .eq. 70 ) firing = .true.
	if( ichar .eq. 46 ) firing = .true.
	if( ichar .eq. 82 ) reping = .true.
	if( ichar .eq. 48 ) reping = .true.
	if( ichar .eq. 78 ) new = .true.
	if( ichar .eq. 69 ) call cease( .false. )
	goto 10110

10200	continue
	firing = .false.
	if( ichar .eq. 53 ) goto 10110
	call getval(5, 0,212,  recovr, player, ival )
	if( ival .gt. 0 ) goto 10110
	call getval(6, 0,214,  pos, player, 1, ix )
	call getval(6, 0,215,  pos, player, 2, iy )
	idir = ichar-48
	call torp
	call putval(5, 0,218,  whosen, itorp, player )
	call putval(5, 0,219,  recovr, player, 5 )
	goto 10110

10300	continue
	call putval(5, 0,223,  direxn, player, ichar-48 )
	call putval(5, 0,224,  conflg, player, 0 )
	if( reping ) call putval(4, 0,225,  -1, 1 )
	reping = .false.
	goto 10110
C
C****************************** MOVES *******************************

20000	call lock
	call getval(5, 0,231,  useful, 1, ival )
	if( ival .eq. 0 ) goto 20001
	call unlock
	call nap( 250, 4 )
	goto 10100

20001	call putval(5, 0,237,  useful, 1, 1 )
	call unlock
	call nap( 250, 4 )
	call getval(5, 0,240,  useful, 3, ival )
	call addval(4, 0,241,  -1, 1 )
	call colcur( 7, 2 )
	call number(2, ival, -6 )
	if( mod( ival, 250 ) .eq. 0 ) call makmon
	do 20100 i = 1, 100
	    iobj = i
	    call getval(5, 0,247,  inuse, iobj, ival )
	    if( ival .eq. 0 ) goto 20100
	    call getval(5, 0,249,  recovr, iobj, ival )
	    if( ival .le. 0 ) goto 20002
	    call addval(4, 0,251,  -1, -1 )
	    goto 20100

20002	    call getval(5, 0,254,  type, iobj, itype )
	    call getval(5, 0,255,  direxn, iobj, idir )
	    call getval(6, 0,256,  pos, iobj, 1, ix )
	    call getval(6, 0,257,  pos, iobj, 2, iy )
	    if( itype .ne. 2 ) goto 20010
	    jobj = idir
	    ival = 0
	    if( jobj .ne. 0 ) call getval(5, 0,261,  inuse, jobj, ival )
	    if( ival .ne. 0 ) call getval(5, 0,262,  type, jobj, ival )
	    if( ival .eq. 1 ) goto 20005
	    j = 0
20003	    j = j + 1
	    if( j .gt. 30 ) goto 20100
	    jobj = iran( 100 )
	    call getval(5, 0,268,  inuse, jobj, ival )
	    if( ival .eq. 0 ) goto 20003
	    call getval(5, 0,270,  type, jobj, ival )
	    if( ival .ne. 1 ) goto 20003
	    call putval(5, 0,272,  direxn, iobj, jobj )
20005	    call getval(6, 0,273,  pos, jobj, 1, imx )
	    if( imx .gt. 100 ) goto 20003
	    call getval(6, 0,275,  pos, jobj, 2, imy )
	    idir = isgn(imx-ix) + 3*isgn(imy-iy) + 5
	    if( imx.ne.ix .and. imy.ne.iy .and. imx-ix.ne.imy-iy
     &		.and. ix-imx.ne.imy-iy ) goto 20010
	    call torp
	    call putval(5, 0,280,  whosen, itorp, iobj )
	    call putval(5, 0,281,  recovr, iobj, 6 )
	    goto 20100

20010	    if( idir .eq. 5 ) goto 20100
	    call getval(5, 0,285,  charep, iobj, ichar )
	    inx = ix + xdir( idir )
	    iny = iy + ydir( idir )
	    inchar = ichrat( inx, iny )
	    if( inchar .eq. 32 ) goto 20050
	    if( inchar .eq. 42 .and. itype .eq. 2 )
     &		call putval(5, 0,291,  recovr, iobj, 10 )
	    if( inchar .eq. 42 .and. itype .eq. 2 ) goto 20050
	    call putval(5, 0,293,  conflg, iobj, 0 )
	    call putval(5, 0,294,  direxn, iobj, 5 )
	    if( itype .ne. 3 ) goto 20100
	    if( inchar .eq. 42 ) goto 20020
	    if( (inchar.le.64 .or. inchar.ge.91) .and.
     &		inchar.ne.46 .and. inchar.ne.64) goto 20025
	    do 20013 j = 1, 100
		jobj = j
		call getval(5, 0,301,  inuse, jobj, ival )
		if( ival .eq. 0 ) goto 20013
		call getval(6, 0,303,  pos, jobj, 1, ival )
		if( ival .ne. inx ) goto 20013
		call getval(6, 0,305,  pos, jobj, 2, ival )
		if( ival .eq. iny ) goto 20015
20013	    continue
20015	    continue
	    call putval(5, 0,309,  inuse, jobj, 0 )
	    if( inchar .eq. 46 ) goto 20020
	    call getval(5, 0,311,  whosen, iobj, jobj )
	    call getval(5, 0,312,  inuse, jobj, ival )
	    if( ival .eq. 0 ) goto 20020
	    call getval(5, 0,314,  type, jobj, ival )
	    if( ival .ne. 1 ) goto 20020
	    if( inchar .eq. 64 ) call addval(6, 0,316,  score, jobj, 1, 1 )
	    if( inchar .ne. 64 ) call addval(6, 0,317,  score, jobj, 2, 1 )
20020	    call cursor( inx, iny )
	    call pback( iclbla )
	    call chrout(32)
	    if( inchar .ne. 64 ) goto 20025
	    call addval(5, 0,322,  useful, 2, -1 )
	    if( nuser(0) .le. 1 ) call makmon
20025	    call putval(5, 0,324,  inuse, iobj, 0 )
	    if( ichrat( ix, iy ) .ne. ichar ) goto 20100
	    call cursor( ix, iy )
	    call pback( iclbla )
	    call chrout(32)
	    goto 20100

20050	    call cursor( ix, iy )
	    if(ichrat(ix,iy).ne.ichar) goto 20055
	    call pback( iclbla )
	    call chrout(32)
20055	    call putval(6, 0,335,  pos, iobj, 1, inx )
	    call putval(6, 0,336,  pos, iobj, 2, iny )
	    call cursor( inx, iny )
	    call pback( iclbla )
	    if( ichar .eq. 46 ) call pcolor( iclred )
	    if( ichar .eq. 64 ) call pcolor( iclyel )
	    if( ichar.gt.65 .and. ichar.le.90 ) call pcolor(iclwhi)
	    call chrout( ichar )
	    call getval(5, 0,343,  conflg, iobj, ival )
	    if( ival .eq. 0 ) call putval(5, 0,344,  direxn, iobj, 5 )
20100	continue
	call putval(5, 0,346,  useful, 1, 0 )
	goto 10100
C
	entry torph

	itorp = ifind(0)
	if( itorp .eq. 0 ) goto 30290

	call putval(6, 0,353,  pos, itorp, 1, ix )
	call putval(6, 0,354,  pos, itorp, 2, iy )
	call putval(5, 0,355,  type, itorp, 3 )
	call putval(5, 0,356,  charep, itorp, 46 )
	call putval(5, 0,357,  direxn, itorp, idir )
	call putval(5, 0,358,  conflg, itorp, 1 )
30290	call unlock
	return
C
	entry ifindr( iobjp )

	call lock
	do 40100 iobjp = 1, 100
	    call getval(5, 0,365,  inuse, iobjp+0, ival )
	    if( ival .eq. 0 ) goto 40200
40100	continue
	iobjp = 0
	return

40200	call putval(4, 0,371,  -1, 1 )
	call putval(5, 0,372,  recovr, iobjp, 0 )
	return
C
	entry makemo

	imon = ifind(0)
	if( imon .eq. 0 ) call unlock
	if( imon .eq. 0 ) return
50100	imx = iran( 80 )
	imy = iran( 20 ) + 3
	if( ichrat( imx, imy ) .ne. 32 ) goto 50100
	call cursor( imx, imy )
	call pback( iclbla )
	call pcolor( iclyel )
	call chrout( 64 )
	call putval(6, 0,386,  pos, imon, 1, imx )
	call putval(6, 0,387,  pos, imon, 2, imy )
	call putval(5, 0,388,  direxn, imon, 0 )
	call putval(5, 0,389,  conflg, imon, 0 )
	call putval(5, 0,390,  type, imon, 2 )
	call putval(5, 0,391,  charep, imon, 64 )
	call addval(5, 0,392,  useful, 2, 1 )
	call unlock
	return
C
	entry kilchr

	call unlock
	call lock
	call getval(6, 0,399,  pos, player, 1, ix )
	call getval(6, 0,400,  pos, player, 2, iy )
	call cursor( ix, iy )
	call chrout(32)
	call putval(5, 0,403,  inuse, player, 0 )
	call unlock
	return
	end
C
	subroutine cease( iflag )
	logical iflag
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla
	call enable
	if( .not. iflag ) call kilchr
	call grafof
	call setdis( 0 )
	call clrscr
	call cursor( 1, 24 )
	if( iflag ) call colstr(iclred,
     & 'You have been hit by a bullet.^M^J^E')
	call close( 1 )
C
C	This will never work anywhere other than under Tops10
	if( job(1) .ne. 0 ) call execut( isxbit('%,@   ~') )
C
	call exprog
	end

	subroutine torp
	call torph
	return
	end

	integer function ifind( dummy )
	call ifindr( ifind )
	return
	end

	subroutine makmon
	call makemo
	return
	end

	subroutine colcur( ix, iy )
	call defcol
	call cursor( ix, iy )
	return
	end

    	subroutine colstr( icol, msgara )
	character msgara( 80 )
	call pcolor( icol )
	call string(1, msgara )
	return
	end
