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

	real function cosdeg( deg )
	cosdeg = cos( deg * 3.141592654/180.0 )
	return
	end

	real function sindeg( deg )
	sindeg = sin( deg * 3.141592654/180.0 )
	return
	end


	real function smcos( deg )
	logical newang
	common/nhcom/newang
	d = deg
	if( newang ) d = 90.0 - d
	smcos = cosdeg( d )
	return
	end

	real function smsin( deg )
	logical newang
	common/nhcom/newang
	d = deg
	if( newang ) d = 90.0 - d
	smsin = sindeg( d )
	return
	end

	subroutine initdb
C
	call enable
	call init(7, 0,53,  1, 1, 100, 100, 30 )
	call init(6, 0,54,  2, 7, 400, 5 )
	call init(5, 0,55,  3, 36, 5 )
	call init(6, 0,56,  4, 7, 26, 2 )
C
	do 100 ixt = 1, 100
	    ix = ixt
	    do 100 iyt = 1, 100
		iy = iyt
		call putval(7, 0,62,  1, ix, iy, 5, 1 )
		if( mod( ix-5,10 ).ne.0.or.mod( iy,10 ).ne.0 ) goto 100
		call makobj( ix, iy, 6, 4 )
100	continue
C
	do 400 iyt = 1, 76
	    iy = iyt
	    do 300 izt = 1, 4
		iz = izt
		if( iz .ne. 2 .or. mod(iy-1,5) .ne. 0 ) goto 200
		call makobj( 48, iy, iz, 3 )
		call makobj( 52, iy, iz, 3 )
		goto 300
200		call putval(7, 0,75,  1, 48, iy, iz, 1 )
		call putval(7, 0,76,  1, 52, iy, iz, 1 )
300	    continue
	    do 400 ixt = 49, 51
		ix = ixt
		call putval(7, 0,80,  1, ix, iy, 5, 0 )
		call putval(7, 0,81,  1, ix, iy, 1, 1 )
400	continue
C
	do 500 ixt = 48, 52
	    ix = ixt
	    do 500 izt = 1, 4
		iz = izt
		call putval(7, 0,88,  1, ix, 76, iz, 1 )
500	continue
C
	call makobj( 50, 76, 3, 2 )
	call makobj( 50, 76, 6, 4 )
C
	call putval(5, 0,94,  3, 4, 60*30 )
	call putval(5, 0,95,  3, 5, -1 )
	call unlock
	return
	end
C
	subroutine print
C
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla
C
	call usrset( 1026, 1 )
	call clrscr
	call colcur( 1, 24 )
	call string(1,'+(   ,   ,   ) Azi:    Elv:    Rol:   +^E')
	call pback( iclwhi )
	do 100 iy = 1, 19
	    call cursor( 1, 24-iy )
	    call chrout(124)
	    call cursor( 39, 24-iy )
	    call chrout(124)
100	continue
	call pback( iclbla )
	call colcur( 1, 4 )
	call string(1,'+Vel:    D-Deg:    D-Spd:    Rol/s:   +^E')
	call cursor( 45, 24 )
	call string(1,'Time:^E')
	call cursor( 45, 23 )
	call string(1,'Rebel ships:^E')
	call cursor( 45, 22 )
	call string(1,'Empire ships:^E')
	call cursor( 1, 1 )
	call string(1,'Command:^E')
	return
	end

	function ichcod( ich, ifg, ibg )
	if( ich .lt. 0 .or. ich .gt. 256 ) ich = icon( ich )
	ichcod = 256*256*ifg + 256*ibg + ich
	return
	end
C
	subroutine updscr( x, y, z, d, e, pit, ichar, iplayr )
C
	implicit integer ( a - z )
	integer screen( 19, 19 ), oscr( 19, 19 ), prilst( 7 )
	real xp, yp, xr, yr, zr, d, e, pit
	logical next, good

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	if( prilst(1) .ne. 0 ) goto 3
	prilst(1) = ichcod( 32, iclwhi, iclbla )	! space or wall
	prilst(2) = ichcod( 46, icllbl, iclbla )	! edge/corner/end
	prilst(3) = ichcod( 64, iclred, iclyel )	! the port
	prilst(4) = ichcod( 42, iclpur, iclbla )	! trench gun
	prilst(5) = ichcod( 94, iclpur, iclred )	! surface gun
	prilst(6) = ichcod( 43, iclwhi, iclbla )
	prilst(7) = ichcod( 37, iclred, iclyel )	! explosion particle
C
3	call getval(5, 0,153,  3, 5, itim )
	if( itim .lt. 0 ) goto 5
	call colcur( 45, 20 )
	call colstr(iclred,'Death star explodes in ^E')
	call number(1, itim )
	call string(1,' seconds. ^G^E')

5	call getval(5, 0,160,  3, 4, itim )
	call colcur( 51, 24 )
	call number(2, itim/60, 2 )
	call chrout(58)
	call number(2, itim-60*(itim/60), -2 )
	if( x.eq.ox.and.y.eq.oy.and.z.eq.oz.and.ichar.ne.78 ) goto 100
	call colcur( 3, 24 )
	call number(2, x-50, 3 )
	ox = x
	call chrout(44)
	call number(2, y-76, 3 )
	oy = y
	call chrout(44)
	call number(2, z-5, 3 )
	oz = z
100	if( ifix(d).eq. od .and. ichar .ne. 78 ) goto 200
	call colcur( 20, 24 )
	call number(2, ifix(d), 3 )
	od = d
200	if(ifix(e).eq. oe .and. ichar .ne. 78 ) goto 300
	call colcur( 28, 24 )
	call number(2, ifix(e), 3 )
	oe = e
300	if( ifix(pit) .eq. opit .and. ichar .ne. 78 ) goto 400
	call colcur( 36, 24 )
	call number(2, ifix(pit), 3 )
	opit = pit
400	call setvew(float(x),float(y),float(z),d,e,45.,18.9999,pit)
C
	if( z .lt. 5 ) goto 501
	do 500 it = 1, 100
	    i = it
	    call prspec( float(i), 1., 5., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
	    call prspec( 1., float(i), 5., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
	    call prspec( float(i), 100., 5., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
	    call prspec( 100., float(i), 5., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
500	continue
501	continue
C
	do 600 yt1 = 1, 75
	    y1 = yt1
	    call prspec( 48., float(y1), 1., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
	    call prspec( 52., float(y1), 1., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
	    call prspec( 48., float(y1), 5., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
	    call prspec( 52., float(y1), 5., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
600	continue
C
	do 700 xt1 = 48, 52
	    x1 = xt1
	    call prspec( float(x1), 76., 1., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
	    call prspec( float(x1), 76., 5., xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
700	continue
C
	do 800 zt1 = 2, 4
	    z1 = zt1
	    call prspec( 48., 76., float(z1), xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
	    call prspec( 52., 76., float(z1), xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = 1
800	continue
C
	call getval(5, 0,231,  3, 1, objnum )
	do 900 i = 1, objnum
	    iobj = i
	    call getval(6, 0,234,  2, iobj, 1, x1 )
	    xr = x1
	    call getval(6, 0,236,  2, iobj, 2, y1 )
	    yr = y1
	    call getval(6, 0,238,  2, iobj, 3, z1 )
	    zr = z1
	    dist =sqrt((xr-x+0.0)**2+(yr-y+0.0)**2+(zr-z+0.0)**2)
	    if( dist .eq. 0 .or. dist .gt. 20 ) goto 900
	    call getval(6, 0,242,  2, iobj, 4, ival )
	    if( ival .eq. 0 ) goto 900
	    call prspec( xr, yr, zr, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
	    if( dist .gt. 5 ) goto 900
	    call prspec( xr-.5, yr-.5, zr-.5, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
	    call prspec( xr+.5, yr-.5, zr-.5, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
	    call prspec( xr-.5, yr+.5, zr-.5, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
	    call prspec( xr+.5, yr+.5, zr-.5, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
	    call prspec( xr-.5, yr-.5, zr+.5, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
	    call prspec( xr+.5, yr-.5, zr+.5, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
	    call prspec( xr-.5, yr+.5, zr+.5, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
	    call prspec( xr+.5, yr+.5, zr+.5, xp, yp, good )
	    if( good )  screen( ifix(xp+1.), ifix(yp+1.) ) = ival
900	continue
C
	do 1100 y1 = 1, 19
	    next = .false.
	    do 1100 x1 = 1, 19
		if( ichar .eq. 78 )  oscr(x1,y1) = 0
		iscr = screen(x1,y1)
		if( iscr .eq. oscr(x1,y1) ) goto 1000
		if( next )  call chrout(32)
		if( .not. next )  call cursor( x1*2, y1+4 )
		if( iscr .ge. 7 ) goto 950
		ich = prilst(iscr+1)
		ifg = ich / 256 / 256
		ibg = mod( ich / 256, 256 )
		ich = mod( ich, 256 )
		goto 970
950		ich = iscr - 6
		if( (ich.le.13) .eq. (iplayr.le.13) ) goto 960
		ibg = iclred
		ifg = iclpur
		ich = ich + 64
		goto 970
960		ibg = icldbl
		ifg = icllbl
		ich = ich + 64
970		call pback( ibg )
		call pcolor( ifg )
		call chrout( ich )
		oscr( x1, y1 ) = iscr
		screen(x1,y1) = 0
		next = .true.
		goto 1100
1000		screen(x1,y1) = 0
		next = .false.
1100	continue
	return
	end
C
	subroutine comand( ichar, comara, arrind )
C
C  --   ROUTINE GET COMMAND FROM USER IF ONE PRESENT.
C
	integer comara(61), index, arrind, ichar
	data index/0/
C
C  --   IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR
C  --   0.5 SECONDS OR UNTIL ONE IS.
C
100	call nap( 500, 12 )
	call chrbuf( ichar )
	if( ichar .eq. -1 )  return
	if( ichar .eq. 8 .or. ichar .eq. 127 ) goto 200
	if( ichar .eq. 21 ) goto 300
	if( ichar .lt. 32 ) goto 500
	if( index .ge. 60 ) goto 600
C
C  --   NOT SPECIAL CHARACTER, PUT IN ARRAY
C
	index = index + 1
	call colcur( 9 + index, 1 )
	if( ichar .ge. 97 )  ichar = ichar - 32
	call chrout( ichar )
	call outbuf( 1 )
	comara(index) = icon( ichar )
	if( index .ne. 1 ) goto 100
	if( ichar .lt. 65 .or. ichar .gt. 90 ) goto 500
	ichar = icon( ichar )
	if( ichar.eq.65 .or. ichar.eq.68 .or. ichar.eq.84 ) goto 500
	goto 100
C
C  --   DELETE CHARACTER
C
200	call colcur( 9 + index, 1 )
	call chrout( 32 )
	call outbuf( 1 )
	index = index - 1
	if( index .lt. 0 )  index = 0
	goto 100
C
C  --   DELETE LINE
C
300	call colcur( 10, 1 )
	do 400 i = 1, index
	    call chrout(32)
400	continue
	call outbuf( 1 )
	index = 0
	goto 100
C
C  --   CARRIAGE RETURN TYPED
C
500	if( index .eq. 0 ) goto 100
600	comara(index + 1) = 0
	call colcur( 10, 1 )
	do 700 i = 1, index
	call chrout(32)
700	continue
	call outbuf( 1 )
	call nap( 500, 4 )
	ichar = comara(1)
	arrind = index
	index = 0
	return
	end
C
	subroutine messag( icol, msgara )
C
C	The following gets replaced with character msgara(80) before being
C	handed to GNU g77.
	character msgara( 80 )
C
	call colcur( 1, 2 )
	call irepeat(32,79)
	call cursor( 1, 2 )
	call colstr( icol, msgara )
	return
	end
C
	subroutine cease( iship, icol, msgara )
C
C	The following gets replaced with character msgara(80) before being
C	handed to GNU g77.
	character msgara( 80 )

	call messag( icol, msgara )
	call close( 1 )
	call unlock
	call getval(6, 0,387,  2, iship, 4, ival )
	call putval(6, 0,388,  4, ival-6, 1, 0 )
	call putval(6, 0,389,  4, ival-6, 2, 0 )
	call addval(5, 0,390,  3, 3, -1 )
	call delobj( iship )
	call usrset( 1031, 0 )
	call usrset( 1026, 0 )
	call usrset( 1041, 1 )
C
	call exprog
C
	end
C
	subroutine makobj( x, y, z, val )
C
	implicit integer ( a - z )
C
	call getval(5, 0,403,  3, 1, lastob )
	call getval(5, 0,404,  3, 2, lastpt )
	lastpt = lastpt + 1
	if( lastpt .ge. lastob ) goto 101
	do 100 iobj = lastpt, lastob
	    call getval(6, 0,408,  2, iobj+0, 4, ival )
	    if( ival .eq. 0 ) goto 200
100	continue
101	continue
	iobj = lastob + 1
	call putval(5, 0,413,  3, 1, iobj )
C
200	call putval(5, 0,415,  3, 2, iobj )
	call putval(6, 0,416,  2, iobj, 1, x )
	call putval(6, 0,417,  2, iobj, 2, y )
	call putval(6, 0,418,  2, iobj, 3, z )
	call putval(6, 0,419,  2, iobj, 4, val )
	call putval(7, 0,420,  1, x, y, z, 1 )
	return
	end
C
	subroutine delobj( iobj )
C
	call getval(6, 0,425,  2, iobj, 1, ix )
	call getval(6, 0,426,  2, iobj, 2, iy )
	call getval(6, 0,427,  2, iobj, 3, iz )
	call putval(7, 0,428,  1, ix, iy, iz, 0 )
	call putval(6, 0,429,  2, iobj, 4, 0 )
	call getval(5, 0,430,  3, 2, ival )
	if( ival .gt. iobj )  call putval(4, 0,431,  -3, iobj )
	return
	end
C
	integer function numobj( x, y, z )
C
	implicit integer ( a - z )
C
	call getval(5, 0,438,  3, 1, numobj )
C
	do 100 iobj = 1, numobj
	    numobj = iobj
	    call getval(6, 0,442,  2, numobj, 1, ival )
	    if( ival .ne. x ) goto 100
	    call getval(6, 0,444,  2, numobj, 2, ival )
	    if( ival .ne. y ) goto 100
	    call getval(6, 0,446,  2, numobj, 3, ival )
	    if( ival .ne. z ) goto 100
	    call getval(6, 0,448,  2, numobj, 4, ival )
	    if( ival .ne. 0 )  return
100	continue
	numobj = 0
	return
	end
C
	subroutine inrang( deg )
C
100	if( deg .ge. 0 ) goto 200
	deg = deg + 360
	goto 100
200	if( deg .lt. 360 )  return
	deg = deg - 360
	goto 200
	end
C
	subroutine explod( x, y, z, f )
C
	implicit integer ( a - z )
C
	do 200 i = 1, f*8
	    xdir = iran(3)-2
	    ydir = iran(3)-2
	    zdir = iran(3)-2
	    do 100 j = 1, f
		nx = x + xdir*j
		ny = y + ydir*j
		nz = z + zdir*j
		if( nx .lt. 1 .or. nx .gt. 100 .or. ny .lt. 1 .or.          ny .
     &gt. 100 .or. nz .lt. 1 .or. nz .gt. 30 ) goto 200
		call getval(7, 0,477,  1, nx, ny, nz, ival )
		if( ival .ne. 0 ) goto 200
		call makobj( nx, ny, nz, 6 )
		call putval(6, 0,480,  2, numobj( nx, ny, nz ), 5, 10 )
100	    continue
200	continue
	return
	end
C
	subroutine dump
C
	implicit integer ( a - z )
C
	integer filesp( 13 )
C
	filesp( 3 ) = isxbit('DSK~')
	filesp( 4 ) = isxbit('WAR~')
	filesp( 5 ) = isxbit('DMA~')
	filesp( 5 ) = filesp( 5 ) + nmthru*262144
	call ofile( 2, filesp, 0 )
	call wfile( 2, filesp )
	nmthru = nmthru + 1
	call select( 2 )
	call getval(5, 0,499,  3, 1, nobj )
	call getval(5, 0,500,  3, 2, val )
	call string(1,'Maximum object: ^E')
	call number(1, nobj )
	call string(1,'.   Known to be filled in list: ^E')
	call number(1, val )
	call string(1,'.^M^J^E')
	do 100 i = 1, nobj
	    iobj = i
	    call getval(6, 0,508,  2, iobj, 1, x )
	    call getval(6, 0,509,  2, iobj, 2, y )
	    call getval(6, 0,510,  2, iobj, 3, z )
	    call getval(6, 0,511,  2, iobj, 4, val )
	    call number(1, iobj )
	    call coord( x, y, z )
	    call number(1, val )
	    call chrout(58)
	    call getval(6, 0,516,  2, iobj, 5, val1 )
	    call number(1, val1 )
	    call getval(7, 0,518,  1, x, y, z, val1 )
	    call number(2, val1, 2 )
	    if( (val.eq.0).ne.(val1.eq.0) ) call string(1,'   *^E')
	    call crlf
100	    continue
	call close( 2 )
	call select( 1 )
	call messag(iclblu,'[Data base #^E')
	call number(1, nmthru )
	call string(1,' dumped on war.^E')
	call string(3, iext, 6, 3 )
	call chrout(93)
	return
	end
C
	subroutine probj( iobj )
C
	if( iobj .eq. 0 )  call string(1,'The death star^E')
	if( iobj .eq. 0 )  return
	call getval(6, 0,536,  2, iobj, 4, ival )
	if( ival .eq. 1 )  call string(1,'The death star^E')
	if( ival .eq. 2 )  call string(1,'An exhaust port^E')
	if( ival .eq. 3 )  call string(1,'A light laser tower^E')
	if( ival .eq. 4 )  call string(1,'A heavy laser tower^E')
	if( ival .eq. 5 )  call string(1,'A torpedo^E')
	if( ival .eq. 6 )  call string(1,'An explosion particle^E')
	if( ival .le. 6 )  return
	if( ival .le. 19 )  call string(1,'The rebel-^E')
	if( ival .gt. 19 )  call string(1,'The empire-^E')
	call chrout( 58+ival )
	return
	end
C
	subroutine coord( ix, iy, iz )
	call string(1,'( ^E')
	call outnum(3, ix-50, iy-76, iz-5 )
	call string(1,' )^E')
	return
	end
C
	subroutine setvew( xo, yo, zo, deg, elv, vspan, width, rotat )
C
C
C	THIS SUBROUTINE SETS UP ALL THE NECESSARY VARIABLES
C	TO DETERMINE THE POSITION (IN PERSPECTIVE) ON A PLANE
C	OF A POINT IN 3 DIMENSIONS.  TO FIND THAT POINT, CALL
C	PRSPEC.
C
C	XO, YO, ZO	-	THE VIEW POINT IN SPACE
C	DEG, ELV	-	THE AZIMUTH AND ELEVATION OF THE
C				VIEW PROJECTION
C	VSPAN		-	THE MAXIMUM VIEW ANGLE
C	WIDTH		-	WIDTH OF VIEWING PLANE
C	ROTAT		-	HOW EYE IS ORIENTED TO THE SYSTEM
C
C
C
C			VIEWING PLANE (PERSPECTIVE)
C
C		     +(X1,Y1,Z1)
C		     !
C		     !
C		     !
C	-------------------------------------------------
C	:	     .		^			:
C	:	     .		+(XOFYP,YOFYP,ZOFYP)	:
C	:	     .		!			:
C	:	     +(X,Y,Z)	!			:
C	:	     !		!			:
C	:	     !		!   (XOFXP,YOFXP,ZOFXP) :
C	:	     !		+------<-PDIST->------+>:
C	:	     !	    (XC,YC,ZC)			:
C	:	     !	      /				:
C	:	     !	   DIST				:
C	:	     !	    /				:
C	:	     !	   / ->				:
C	:	     !	  /  N = (A,B,C)		:
C	-------------!---/------------------------------:
C		     !	/
C		     ! /
C		     !/
C		     +(X0,Y0,Z0)
C
	real smsin, smcos, cosdeg, sindeg
	logical newang

	common/nhcom/newang
	common /prscom/ x0,y0,z0,xofxp,yofxp,zofxp,xofyp,yofyp,zofyp,
     &	a, b, c, pdist, xc, yc, zc, pcos, psin

C
C
C	COPY VIEW POINT FOR COMMON
	x0 = xo
	y0 = yo
	z0 = zo
C	CALCULATE HALF PLANE, 3RD SIDE AND NORMAL DISTANCES
	pdist = width/2.0
	cdist = pdist / sindeg(vspan)
	dist = sqrt( cdist**2 - pdist**2 )
C
C	THE VIEW PROJECTION IS THE NORMAL TO THE PLANE SO
C	VECTOR N = (A,B,C) AND THE PLANE'S EQUATION IS
C	A*X + B*Y + C*Z = D.  GO FIND A, B AND C
	a = smcos(deg)*cosdeg(elv)*dist
	b = smsin(deg)*cosdeg(elv)*dist
	c = sindeg(elv)*dist
C
C	DETERMINE THE ORIGIN OF THE PLANE
	xc = x0 + a
	yc = y0 + b
	zc = z0 + c
C
C	NOW DETERMINE THE UNIT VECTORS FOR THE PLANE.
C	FOR VECTOR YP:
	xofyp = (x0 + smcos(deg)*cosdeg(elv+vspan)*cdist - xc )/pdist
	yofyp = (y0 + smsin(deg)*cosdeg(elv+vspan)*cdist - yc )/pdist
	zofyp = (z0 + sindeg(elv+vspan)*cdist - zc )/pdist
C
C	FOR VECTOR XP:
	xofxp = b*zofyp - c*yofyp
	yofxp = c*xofyp - a*zofyp
C	ZOFXP = A*YOFYP - B*XOFYP
	zofxp = 0
C
C	NOW CONVERT XP TO A UNIT VECTOR
	dfact = sqrt( xofxp**2 + yofxp**2 )
	xofxp = xofxp / dfact
	yofxp = yofxp / dfact
C
C	NOW FIND THE FACTORS TO DETERMINE ROLL
	if( newang ) goto 1000
	pcos = cosdeg( rotat )
	psin = sindeg( rotat )
	goto 2000
1000	pcos = cosdeg( -rotat )
	psin = sindeg( -rotat )
2000	return
	end
C
	subroutine prspec( x1, y1, z1, fxp, fyp, done )
C
C	X1, Y1, Z1  -	POINT TO TRANSFORM
C	FXP, FYP    -	RESULTING POINT
C	DONE	    -	LOGICAL TRUE IF NO ERROR
C
	common /prscom/ x0,y0,z0,xofxp,yofxp,zofxp,xofyp,yofyp,zofyp,
     &	a, b, c, pdist, xc, yc, zc, pcos, psin
C
	logical done
C
	done = .false.
	xp = 0
	yp = 0
C
C	(X,Y,Z) WILL BE THE POINT WHERE THE PROJECTION MEETS THE PLANE.
C	DETERMINE THE DIRECTION VECTOR (XD,YD,ZD).
	xd = x1 - x0
	yd = y1 - y0
	zd = z1 - z0
C
C		NOW WE KNOW THAT
C	D = A*( X0 + A )  +  B*( Y0 + B )  +  C*( Z0 + C )
C		AND
C	D = A*( X0 + R*XD )  +  B*( Y + R*YD )  +  C*( Z0 + R*ZD )
C		SO
	r = ( a**2 + b**2 + c**2 ) / ( a*xd + b*yd + c*zd )
C
C	IF R < 0 THEN OBJECT BEHIND VIEW POINT
	if( r .lt. 0 ) return
C
C	NOW, CALCULATE THE POINT WHERE THE LINES MEETS THE PLANE
	x = x0 + r*xd
	y = y0 + r*yd
	z = z0 + r*zd
C
C	SINCE (X,Y,Z) = XP*(XOFXP,YOFXP,ZOFXP) + YP*(XOFYP,YOFYP,ZOFYP)
C	THEN
C	X-XC = XP*XOFXP + YP*XOFYP
C	Y-YC = XP*YOFXP + YP*YOFYP
C	Z-ZC = XP*ZOFXP + YP*ZOFYP
C
C	3 EQUATIONS, 2 UNKNOWNS (XP AND YP).  BY SUBSTITUTION:
	denom = xofxp*yofyp - yofxp*xofyp
	if( abs( denom ) .lt. 0.001 ) goto 10
	yp = ((y-yc)*xofxp - (x-xc)*yofxp) / denom
	goto 100
10	denom = xofxp*zofyp - zofxp*xofyp
	if( abs( denom ) .lt. 0.001 ) goto 20
	yp = ((z-zc)*xofxp - (x-xc)*zofxp) / denom
	goto 100
20	denom = yofxp*zofyp - zofxp*yofyp
	if( abs( denom ) .lt. 0.001 ) return
	yp = ((z-zc)*yofxp - (y-yc)*zofxp) / denom
100	if( abs( xofxp ) .lt. 0.001 ) goto 110
	xp = ((x-xc) - yp*xofyp)/xofxp
	goto 200
110	if( abs( yofxp ) .lt. 0.001 ) goto 120
	xp = ((y-yc) - yp*yofyp)/yofxp
	goto 200
120	if( abs( zofxp ) .lt. 0.001 ) return
	xp = ((z-zc) - yp*zofyp)/zofxp
200	continue
	fxp = pcos*xp + psin*yp 
	fyp = pcos*yp - psin*xp

C	NAN TESTS (NOT REQUIRED UNDER TOPS10)
	if( .not. ((fxp .lt. 0.0) .or. (fxp .ge. 0.0) ) ) return
	if( .not. ((fyp .lt. 0.0) .or. (fyp .ge. 0.0) ) ) return

	if( abs(fxp).gt.pdist .or. abs(fyp).gt.pdist ) return
	fxp = fxp + pdist
	fyp = fyp + pdist
	done = .true.
	return
	end

	subroutine syswho( ijob )
	integer uname(2)
	if( job(ijob) .eq. 0 ) return
	call string(1,'Job ^E')
	call number(1, ijob )
	call chrout(32)
	uname(1) = igtab( ijob, 25 )
	uname(2) = igtab( ijob, 26 )
	call string(3, uname, 6, 12 )
	call string(1,' [^E')
	call number(3, ileft( igtab( ijob, 2 ) ), 0, 8 )
	call chrout(44)
	call number(3, iright( igtab( ijob, 2 ) ), 0, 8 )
	call string(1,'] ^E')
	call string(1,' TTY^E')
	call number(3, itty( ijob ), 0, 8 )
	call string(1,' at ^E')
	call nodlin( itty(ijob), in, il )
	call string(3, node( in ), 6, 6 )
	call chrout(40)
	call number(3, in, 0, 8 )
	call string(1,')^E')
	call string(1,' line ^E')
	call number(3, il, 0, 8 )
	call chrout(32)
	call string(3, jstat( ijob ), 6, 2 )
	return
	end

	subroutine who( iletr )
C
C***    SUBROUTINE PRINTS OUT STATISTICS ON USER
C
	ijob = 0
	if(iletr.gt.0.and.iletr.le.27)call getval(6, 0,765, 4,iletr,1,ijob)
	if( ijob .eq. 0 )  call messag(iclyel,'No one^E')
	if( ijob .eq. 0 )  return
	if( iletr .le. 13 ) call messag(icllbl,'Rebel-^E')
	if( iletr .gt. 13 ) call messag(icllbl,'Empire-^E')
	call chrout( iletr+64 )
	call string(1,': ^E')
	call syswho( ijob )
	call crlf
	return
	end
C
	subroutine fmain
C
	implicit integer ( b - z )
C
	integer screen( 19, 19 ), oscr( 19, 19 ), comara( 61 ), par(20)
	integer filspc( 13 )
	real ax, ay, az, e, d, rollam, dvec, smcos, smsin
	real cosdeg, sindeg
	logical miss, iniflg, lprivd, newang

	common/nhcom/newang
C
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla
	data ichar/78/, ntorp/4/
C
	iclwhi = 1
	icldbl = 2
	iclred = 3
	icllbl = 4
	iclpur = 5
	iclgre = 6
	iclyel = 7
	iclbla = 8

	call ppn( i, ipn )

	call settty( comara, par, ilen, lprivd, filspc )

	newang = .true.
	do 10 i=1, ilen
	    if( par(i) .eq. isxbit('OLDANG~') ) newang = .false.
10	continue

100	call check( iniflg )
	if( iniflg )  call initdb
	continue ! call ctrap
c	call exprog
C
200	call defcol
	call string(1,'^MInput character to represent ship:       ^M^E')
	call string(1,'Input character to represent ship: ^B')
	call chrwat( iplayr )
	if( iplayr .gt. 96 ) iplayr = iplayr - 32
	iplayr = iplayr - 64
	if( iplayr .lt. 1 .or. iplayr .gt. 26 ) goto 200
	call getval(6, 0,822,  4, iplayr, 1, ival )
	if( ival .ne. 0 ) goto 200
	call putval(4, 0,824,  -4, job(0) )
	call putval(6, 0,825,  4, iplayr, 2, 0 )
	ax = 1.
	if( iplayr .gt. 13 )  ax = 100.
	x = ax
	az = 20.
	z = az
300	ay = iran(100)
	y = ay
	d = 0
	if( iplayr .gt. 13 )  d = 180
	if( .not. newang ) goto 305
	d = 90 - d
	if( d .lt. 0 ) d = d + 360
305	call getval(7, 0,838,  1, x, y, z, ival )
	if( ival .ne. 0 ) goto 300
	call makobj( ifix(ax+.5), ifix(ay+.5), ifix(az+.5), iplayr+6 )
	shipnm = numobj( x, y, z )
	call addval(5, 0,842,  3, 3, 1 )
	continue ! call ctrap
c	call cease( shipnm, icllbl, 'Stopping on user request.^E')
C
	call ofile( 1, isxbit('TTY~'), 8 )
	call select( 1 )
	call usrset(1030,1)
	call usrset(1045,0)
	call usrset(1031,1)
	call usrset(1032,1)
	call usrset(1041,0)
	call usrset(536,ttyspd)
	goto 500
C
C***********************
C***    GAME LOOP    ***
C***********************
C
400	call usrset(1048,ttyspd)
	call usrset(1049,ttyspd)
	call getval(5, 0,862,  3, 4, ival )
	if( ival .gt. 0 ) goto 405
	call cease( shipnm, iclred,
     & 'The rebel base has been destroyed.^E')

405	call getval(5, 0,867,  3, 5, ival )
	if( ival .ne. 0 ) goto 410
	call cease( shipnm, iclred,
     & 'The death star has been destroyed.^E')

410	call comand( ichar, comara, index )
	call outbuf( 1 )
	if( ichar .eq. -1 ) goto 3100
C
	if( ichar .ne. 78 ) goto 600
500	call print
	goto 3100
C
600	if( ichar .ne. 69 ) goto 700
	call cease( shipnm, icllbl, 'Stopping on user request.^E')
C
700	if( ichar .ne. 65 ) goto 800
	if( iplayr .gt. 13 .and. speed .ge. 10 ) goto 3100
	if( speed .ge. 15 ) goto 800
	speed = speed + 1
	goto 3100
C
800	if( ichar .ne. 68 ) goto 900
	speed = speed - 1
	if( speed .le. -5 ) goto 3100
	goto 3100
C
900	if( ichar .ne. 80 ) goto 1000
	if( .not. lprivd ) goto 1000
C	CHANGED TO INTEGER GETNUM SINCE NO WAY FOR MODERN GETNUM TO KNOW IF
C	ARGS ARE REAL OR INTEGERS
	call getnum(14,comara,index,iax,10,iay,10,iaz,10,
     & idegre,10,ielev,10,iroll,10)
	yaw = 0
	pitch = 0
	roll = 0
	speed = 0
	ax = iax + 50.
	ay = iay + 75.
	az = iaz + 5.
	d = idegre
	e = ielev
	rollam = iroll
	goto 3100
C
1000	if( ichar .ne. 49 ) goto 1100
	yaw = yaw + 1
	pitch = pitch - 1
	goto 3100
C
1100	if( ichar .ne. 50 ) goto 1200
	pitch = pitch - 1
	goto 3100
C
1200	if( ichar .ne. 51 ) goto 1300
	yaw = yaw - 1
	pitch = pitch - 1
	goto 3100
C
1300	if( ichar .ne. 52 ) goto 1400
	yaw = yaw + 1
	goto 3100
C
1400	if( ichar .ne. 53 ) goto 1500
	yaw = 0
	pitch = 0
	roll = 0
	goto 3100
C
1500	if( ichar .ne. 54 ) goto 1600
	yaw = yaw - 1
	goto 3100
C
1600	if( ichar .ne. 55 ) goto 1700
	yaw = yaw + 1
	pitch = pitch + 1
	goto 3100
C
1700	if( ichar .ne. 56 ) goto 1800
	pitch = pitch + 1
	goto 3100
C
1800	if( ichar .ne. 57 ) goto 1900
	yaw = yaw - 1
	pitch = pitch + 1
	goto 3100
C
1900	if( ichar .ne. 60 .and. ichar .ne. 44 ) goto 2000
	roll = roll + 1
	goto 3100
C
2000	if( ichar .ne. 62 .and. ichar .ne. 46 ) goto 2100
	roll = roll - 1
	goto 3100
C
2100	if( ichar .ne. 66 ) goto 2200
	call getnum(10, comara, index, ix, 10, iy, 10, iz, 10, b, 10 )
	call explod( ix, iy, iz, b )
	goto 3100
C
2200	if( ichar .ne. 48 .and. ichar .ne. 84 ) goto 2800
	if( iplayr .gt. 13 .and. ichar .eq. 84 ) goto 2800
	if( ichar .ne. 84 ) goto 2205
	if( ntorp .gt. 0 ) goto 2204
	call messag(iclyel,'All torpedos are expended.^E')
	goto 3100
2204	ntorp = ntorp - 1
2205	miss = .true.
	do 2300 dist = 1, 20
	    phasrx = ax + smcos(d)*cosdeg(e)*dist + .5
	    if( phasrx .lt. 1 .or. phasrx .gt. 100 ) goto 2400
	    phasry = ay + smsin(d)*cosdeg(e)*dist + .5
	    if( phasry .lt. 1 .or. phasry .gt. 100 ) goto 2400
	    phasrz = az + sindeg(e)*dist + .5
	    if( phasrz .lt. 1 .or. phasrz .gt. 30 ) goto 2400
	    call getval(7, 0,982,  1, phasrx, phasry, phasrz, ival )
	    if( ival .eq. 0 ) goto 2300
	    if( phasrx .eq. x .and. phasry .eq. y .and. phasrz .eq. z )
     & goto 2300
	    ival = numobj( phasrx, phasry, phasrz )
	    ival1 = 0
	    if( ival .gt. 0 ) call getval(6, 0,988,  2, ival, 4, ival1 )
	    if( ival1 .eq. 6 ) goto 2300
	    miss = .false.
	    if(ival1.lt.6)  call explod(phasrx,phasry,phasrz,ival1+1)
	    if(ival1.gt.6)  call putval(6, 0,992, 4,ival1-6,2,1)
	    goto 2400
2300	continue
2400	if( ichar .eq. 48 ) goto 2450
	if( miss ) goto 3100
	call colcur( 19, 14 )
	call chrout(60)
	call colcur( 21, 14 )
	call chrout(62)
	goto 2701
2450	do 2700 i = 1, 12
	    if( i .gt. 9 ) goto 2600
	    call colcur( 39-2*i, i+4 )
	    call chrout(92)
	    call colcur( i*2+1, i+4 )
	    call chrout(47)
	    if( iplayr .gt. 13 ) goto 2500
	    call colcur( i*2+1, 24-i )
	    call chrout(92)
	    call colcur( 39-2*i, 24-i )
	    call chrout(47)
2500	    if( i .ne. 9 .or. miss ) goto 2600
	    call colcur( 19, 14 )
	    call chrout(40)
	    call colcur( 21, 14 )
	    call chrout(41)
2600	    if( i .le. 3 ) goto 2700
	    call colcur( 45-2*i, i+1 )
	    call chrout(32)
	    call colcur( 2*i-5, i+1 )
	    call chrout(32)
	    if( iplayr .gt. 13 ) goto 2700
	    call colcur( 2*i-5, 27-i )
	    call chrout(32)
	    call colcur( 45-2*i, 27-i )
	    call chrout(32)
2700	continue
2701	continue
	if( miss ) goto 3100
	call colcur( 19, 14 )
	call chrout(32)
	call colcur( 21, 14 )
	call chrout(32)
	if( ichar .eq. 48 ) call messag(icllbl,'Laser strikes ^E')
	if( ichar .eq. 84 )
     & call messag(icllbl,'Proton torpedo strikes ^E')
	call probj( ival )
	call string(1,' at ^E')
	call coord( phasrx, phasry, phasrz )
	call chrout(46)
	if(ival1.gt.2.and.ival1.lt.7)call delobj( ival )
	if( ival1.ne.2 .or. ichar.ne.84 ) goto 3100
	if( iran( iabs(z-2) ) .gt. 1 ) goto 3100
	call putval(5, 0,1045,  3, 5, 30 )
	goto 3100
C
2800	if( ichar .ne. 87 ) goto 2900
	call who( icon( comara(2) ) - 64 )
	goto 3100
C
2900	if( ichar .ne. 77 ) goto 3000
	call dump
	goto 3100
C
3000	call messag(iclyel,'Illegal command.^E')
C
3100	ax = ax + smcos(d)*cosdeg(e)*speed/10.
	ay = ay + smsin(d)*cosdeg(e)*speed/10.
	az = az + sindeg(e)*speed/10.
	if(ifix(ax+.5).eq.x.and.ifix(ay+.5).eq.y.and.ifix(az+.5).eq.z)
     &  goto 3300
	call putval(7, 0,1063,  1, x, y, z, 0 )
	x = ax + 0.5
	y = ay + 0.5
	z = az + 0.5
	if(x.lt.1 .or. x.gt.100 .or. y.lt.1 .or. y.gt.100 .or. z.gt.30)
     &  goto 4600
	call getval(7, 0,1069,  1, x, y, z, ival )
	if( ival .eq. 0 ) goto 3200
	ival = numobj( x, y, z )
	if( ival .ne. 0 )  call getval(6, 0,1072,  2, ival, 4, ival )
	if( ival .lt. 6 )  call explod( x, y, z, (ival+1)*2 )
	if( ival .gt. 6 )  call cease( shipnm, iclred,
     & '*** Collision with a ship ***^G^E')
	if( ival .le. 1 )  call cease( shipnm, iclred,
     & '*** Collision with the death star ***^G^E')
	if( ival .eq. 2 )  call cease( shipnm, iclred,
     & '*** Collision with an exhaust port ***^G^E')
	if( ival .eq. 3 )  call cease( shipnm, iclred,
     & '*** Collision with a light laser tower ***^G^E')
	if( ival .eq. 4 )  call cease( shipnm, iclred,
     & '*** Collision with a heavy laser tower ***^G^E')
	if( ival .eq. 5 )  call cease( shipnm, iclred,
     & '*** Collision with a torpedo ***^G^E')
	call messag(iclyel,'*** Ship buffetted in explosion ***^E')
	iff = iabs( 17-speed ) / 3
	yaw = yaw + iran( iff*2+1 ) - iff-1
	pitch = pitch + iran( iff*2+1 ) - iff-1
	roll = roll + iran( iff*2+1 ) - iff-1
3200	call putval(6, 0,1091,  2, shipnm, 1, x )
	call putval(6, 0,1092,  2, shipnm, 2, y )
	call putval(6, 0,1093,  2, shipnm, 3, z )
	call putval(7, 0,1094,  1, x, y, z, 1 )
3300	dvec = 90
	if( pitch .lt. 0 )  dvec = 270
C
C	NEWANG WORK NOT COMPLETED
C
	if(yaw.ne.0)dvec=atan(-float(pitch)/float(yaw))*180./3.14159
	if( yaw .gt. 0 )  dvec = dvec + 180
	dspeed = sqrt( (yaw+0.0)**2 + (pitch+0.)**2 )
C	IF( NEWANG ) DVEC = 360.0 - DVEC
	call inrang( dvec )
	if( dspeed .eq. 0 )  dvec = 10000
	e = e + sindeg( dvec+rollam ) * dspeed
	if( newang ) d = d + cosdeg( dvec+rollam ) * dspeed
	if( .not. newang ) d = d - cosdeg( dvec+rollam ) * dspeed
	if( abs(e) .gt. 90 )  rollam = rollam + 180
	if( abs(e) .gt. 90 )  d = d + 180
	if( e .gt. 90 )  e = 180-e
	if( e .lt. -90 )  e = -180-e
C	END NEWANG WORK
	rollam = rollam + roll
	call inrang( d )
	call inrang( rollam )
	call updscr( x, y, z, d, e, rollam, ichar, iplayr )
	if( ospeed .eq. speed .and. ichar .ne. 78 ) goto 3400
	call colcur( 6, 4 )
	call number(2, speed, 3 )
	ospeed = speed
3400	if( odvec .eq. ifix(dvec) .and. ichar .ne. 78 ) goto 3500
	call colcur( 16, 4 )
	call number(2, ifix(dvec), 3 )
	odvec = dvec
3500	if( odspee .eq. dspeed .and. ichar .ne. 78 ) goto 3600
	call colcur( 26, 4 )
	call number(2, dspeed, 3 )
	odspee = dspeed
3600	if( oroll .eq. roll .and. ichar .ne. 78 ) goto 3700
	call colcur( 36, 4 )
	call number(2, roll, 3 )
	oroll = roll
3700	call getval(5, 0,1134,  3, 3, iuser )
	if( iuser .eq. ouser .and. ichar .ne. 78 ) goto 4000
	call colcur( 58, 23 )
	do 3800 i = 1, 13
	    call getval(6, 0,1138,  4, i+0, 1, ival )
	    if( ival .eq. 0 ) goto 3800
	    laston = i
	    call chrout( laston+64 )
3800	continue
	call string(1,'   ^E')
	call colcur( 59, 22 )
	do 3900 i = 14, 26
	    call getval(6, 0,1146,  4, i+0, 1, ival )
	    if( ival .eq. 0 ) goto 3900
	    laston = i
	    call chrout( laston+64 )
3900	continue
	call string(1,'   ^E')
	ouser = iuser
4000	call getval(6, 0,1153,  4, iplayr, 2, ival )
	if( ival .ne. 0 )  call explod( x, y, z, 5 )
	if( ival .ne. 0 )  call cease( shipnm,iclred,
     &'******** Ship has been hit *** Ship destroyed ********^G^E')
	if(iplayr.gt.13.or.z.gt.10.or.iran(10).le.1)goto 4400
	if( z .lt. 5 ) goto 4350
	x0 = ifix((x-5)/10.)*10 + 5
	x1 = ifix((x+5)/10.)*10 + 5
	if( mod( x, 10 ) .eq. 5 ) x1 = 101
	y0 = ifix((x-5)/10.)*10 + 5
	y1 = ifix((x+5)/10.)*10 + 5
	if( mod( y, 10 ) .eq. 5 ) y1 = 101
	ival1 = 0
	if( x0 .lt. 1 ) goto 4200
	if( y0 .lt. 1 ) goto 4100
	call getval(7, 0,1168,  1, x0, y0, 6, ival )
	ival1 = ival1 + ival
4100	if( y1 .gt. 100 ) goto 4200
	call getval(7, 0,1171,  1, x0, y1, 6, ival )
	ival1 = ival1 + ival
4200	if( x1 .gt. 100 ) goto 4325
	if( y0 .lt. 1 ) goto 4300
	call getval(7, 0,1175,  1, x1, y0, 6, ival )
	ival1 = ival1 + ival
4300	if( y1 .gt. 100 ) goto 4325
	call getval(7, 0,1178,  1, x1, y1, 6, ival )
	ival1 = ival1 + ival
4325	if( ival1 .eq. 0 ) goto 4350
	do 4330 i = 1, ival1
	    if( iran( z-5 + iabs(speed) ) .le. 1 ) goto 4330
	    call explod( x, y, z, 5 )
	    call cease
     &( shipnm, iclred, '*** Ship hit by heavy laser beam ***^G^E')
4330	call explod( x+iran(5)-3, y+iran(5)-3, z+iran(3)-1, 1 )
	goto 4400

4350	if(x.lt.49.or.x.gt.51.or.y.gt.75.or.z.gt.5.or.iran(5).le.1)
     &goto 4400
	y0 = (y-1)/5*5+1
	ival1 = 0
	call getval(7, 0,1193,  1, 48, y0, 2, ival )
	ival1 = ival1 + ival
	call getval(7, 0,1195,  1, 52, y0, 2, ival )
	ival1 = ival1 + ival
	if( ival1 .eq. 0 ) goto 4400
	do 4355 i = 1, ival1
	    if( iran(iabs(speed)*10) .gt. 1 ) goto 4355
	    call explod( x, y, z, 5 )
	    call cease
     &( shipnm,iclred,'*** Ship hit by light laser beam ***^G^E')
4355	call explod( 48+iran(3), y+iran(3)-2, z+iran(3)-2, 1 )
4400	if( laston .ne. iplayr ) goto 400
	call addval(5, 0,1205,  3, 4, -1 )
	call getval(5, 0,1206,  3, 5, ival )
	if( ival .gt. 0 ) call addval(5, 0,1207,  3, 5, -1 )
	call getval(5, 0,1208,  3, 1, objnum )
	do 4500 i = 1, objnum
	    iobj = i
	    call getval(6, 0,1211,  2, iobj, 4, ival )
	    if( ival .ne. 6 ) goto 4500
	    call addval(6, 0,1213,  2, iobj, 5, -1 )
	    call getval(4, 0,1214,  -2, ival )
	    if( ival .le. 0 )  call delobj( iobj )
4500	continue
	goto 400
C
4600	call cease( shipnm, icllbl, 'You have flown out of range.^E')
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
