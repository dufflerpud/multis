C	@HDR@	$Id$
C	@HDR@		Copyright 1979-2024 by
C	@HDR@		Christopher Caldwell/Brightsands
C	@HDR@		P.O. Box 401, Bailey Island, ME 04003
C	@HDR@		All Rights Reserved
C	@HDR@
C	@HDR@	This software comprises unpublished confidential information
C	@HDR@	of Brightsands and may not be used, copied or made available
C	@HDR@	to anyone, except in accordance with the license under which
C	@HDR@	it is furnished.
C
C
C
C	CREATED DECEMBER 29, 1979
C
C		** OCEAN **
C
C		BY CHRIS CALDWELL
C		  AT THE UNIVERSITY OF NEW HAMPSHIRE
C
C
C

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


	subroutine defcol

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call pcolor( iclwhi )
	call pback( iclbla )
	return
	end

	subroutine displa
     &( shipx, shipy, idepth, degree, ichar, damage, kind, iport )
C
C***	SUBROUTINE UPDATES RADAR AND SONAR
C
	implicit integer( a-z )
	integer abvara(19,19), sidara(10,19,2), damage(8,2)
	logical next
	real smcos, smsin

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla
C
	ibot = 9
	if( kind .eq. 2 ) ibot = 1
	if( kind .eq. 5 ) ibot = 17
	itop = 27
	if( kind .eq. 2 ) itop = 19
	if( kind .eq. 5 ) itop = 35
C
C***	GET INFORMATION ABOUT PORTS
C
	if( ip1c .ne. 0 ) goto 100
	call getval(6, 0,87,  3, 1, 3, ip1x )
	call getval(6, 0,88,  3, 1, 4, ip1y )
	call getval(6, 0,89,  3, 1, 1, ip1cs )
	call convrt( ip1cs, 1, 6, ip1c, 0 )
C	IP1C = SHIFT( IP1C, -30 )
C	IP1C = IP1C + 32
	call getval(6, 0,93,  3, 2, 3, ip2x )
	call getval(6, 0,94,  3, 2, 4, ip2y )
	call getval(6, 0,95,  3, 2, 1, ip2cs )
	call convrt( ip2cs, 1, 6, ip2c, 0 )
C	IP2C = SHIFT( IP2C, -30 )
C	IP2C = IP2C + 32
C
C***	PRINT OUT RADAR
C
100	iposy = 20
	ishipx = shipx + 0.5
	ishipy = shipy + 0.5
	call getval(5, 0,105,  5, 1, iex )
	call getval(5, 0,106,  5, 2, iey )
	call getval(5, 0,107,  5, 3, ied )
	call getval(5, 0,108,  5, 4, ief )
	do 400 iytemp = ishipy+9, ishipy-9, -1
	    next = .false.
	    iy = iytemp
	    iposy = iposy - 1
	    iposx = 0
	    do 400 ixtemp = ishipx-9, ishipx+9
		ix = ixtemp
		iposx = iposx + 1
		if(sqrt((iposx-10+0.)**2+(iposy-10+0.)**2).gt.9.5)goto 400
		if( ichar .eq. 78 )  abvara(iposx,iposy)=32
		if( ix .lt. 1 .or. ix .gt. 120 .or. iy .lt. 1 .or.
     &		    iy .gt. 120 ) goto 200
		call getval(6, 0,121,  1, ix, iy, idep )
		if( iright(idep) .ge. idepth ) goto 150
		ipchar = 32
		ipcolr = iclbla
		goto 160
150		if( iright(idep) .ge. 18 ) goto 155
		ipchar = 45
		ipcolr = icldbl
		goto 160
155		ipchar = 35
		ipcolr = iclgre
160		dist = sqrt((iex-ix+0.)**2+(iey-iy+0.)**2+(ied-idepth+0.)**2)
		if( dist .gt. ief .or. ief .eq. 0 ) goto 165
		ipchar = 34+dist
		ipcolr = iclyel
165		if( ix .eq. ip1x .and. iy .eq. ip1y )  ipchar = ip1c
		if( ix .eq. ip2x .and. iy .eq. ip2y )  ipchar = ip2c
		if( ileft(idep) .eq. 0 ) goto 300
		if( ileft(idep) .eq. 26+iport ) ipchar = 43
		if( ileft(idep) .gt. 26 ) goto 300
		call getval(6, 0,141,  2, ileft(idep), 7, ival )
		if( ival .gt. 5100 ) ipchar = 46
		call getval(6, 0,143,  2, ileft( idep ), 4, ival )
		if( ival .lt. idepth .and. ival .lt. 18 ) goto 300
		ipchar = 64 + ileft( idep )
		goto 300
C
200		ipchar = 35
		ipcolr = iclgre
C
300		if( damage( 3, 1 ) .eq. 0 ) goto 320
		ipchar = 37
		ipcolr = iclpur
320		if( abvara( iposx, iposy ) .ne. ipchar ) goto 350
		next = .false.
		goto 400
350		if( .not. next )call colcur( iposx*2, 4+iposy )
		call pback( ipcolr )
		if( ipchar.eq.32 .or. ipchar.eq.45 .or. ipchar.eq.35 )
     &		    goto 355
		call pcolor( iclwhi )
		goto 360

355		call pcolor( ipcolr )

360		call chrout( ipchar )
		call chrout(32)
		abvara( iposx, iposy ) = ipchar
		next = .true.
400	continue
C
C***	LOAD SONAR ARRAY
C
	do 500 itemp = 1, 10
	    i = itemp
	    ix = shipx + smcos( float(degree) )*float(i-1)+.5
	    iy = shipy + smsin( float(degree) )*float(i-1)+.5
	    ival = 21
	    if( ix .gt. 1 .and. ix .le. 120 .and. iy .gt. 1 .and.
     &		iy .le. 120 ) call getval(6, 0,180,  1, ix, iy, ival )
	    id = ileft( ival )
	    id1 = 0
	    if( id .gt. 26 )goto 480
	    if( id .ne. 0 )  call getval(6, 0,184,  2, id, 4, id1 )
	    ival = iright( ival )
	    goto 490
C
480	    if( 26+iport .ne. id ) ival = iright( ival )
	    if( 26+iport .ne. id ) goto 490
	    id = -21
	    id1 = 18
	    ival = iright( ival )
C
490	    do 500 iztemp = ibot, itop
		iz = iztemp
		iorz = iz - 8
		if( kind .eq. 2 ) iorz = iz
		if( kind .eq. 5 ) iorz = iz - 16
		icol = icllbl
		if( iz .le. 18 ) icol = icldbl
		if( ichar .eq. 78 ) sidara( i, iorz, 2 ) = 32
		ipchar = 32
		dist = sqrt((iex-ix+0.)**2+(iey-iy+0.)**2+(ied-iz+0.)**2)
		if( dist .gt. ief .or. ief .eq. 0 ) goto 495
		ipchar = 34+dist
		icol = iclyel
495		if( ival .ge. iz )  ipchar = 35
		if( id1 .eq. iz )  ipchar = id+64
		if( ipchar .eq. 32 .and. iz .eq. 18 )  ipchar = 44
		ipchar = ipchar + 256 * icol
		if( damage(4,1).ne.0 .or. ichar.eq.78)
     &		    ipchar = 32 + 256 * iclbla
		sidara( i, iorz, 1 ) = ipchar
500	continue

C
C***	PRINT OUT SONAR
C
	do 510 iorz = 19, 1, -1
	    next = .false.
	    do 510 i = 1, 10
		ipchar = sidara( i, iorz, 1 )
		if( ipchar .ne. sidara( i, iorz, 2 ) ) goto 505
		next = .false.
		goto 510
505		if( .not. next ) call colcur( 39+2*i, 4+iorz )
		icol = ipchar / 256
		ipcr = mod( ipchar, 256 )
		if( ipcr .eq. 35 ) icol = iclbla
		call pback( icol )
		if( ipcr.ne.35 .and. ipcr .ne. 32 ) goto 508
		call pcolor( icol )
		call irepeat( ipcr, 2 )
		goto 509

508		call chrout(32)
		call pcolor( iclwhi )
		call chrout( ipcr )
		ipcr = 32

509		if( i .eq. 10 ) call chrout(ipcr)
		iochar = ipchar
		sidara( i, iorz, 2 ) = ipchar
		next = .true.
510	continue
C
C***	PRINT OUT SONAR SCAN DIRECTION
C
	if( degree .eq. odegre .and. ichar .ne. 78 )  return
	call colcur( 55, 24 )
	call number(2, degree, 3 )
	odegre = degree
	return
	end
C
	subroutine initdb( debug, wannam )
C
C***	SET UP DATA BASE
C
	implicit integer( a-z )
C
	integer sname1( 2 ), sname2( 2 ), array( 12 ), comara( 60 )
	logical debug, wannam
C
	if( debug )call clrscr
C
C***	MASTER ARRAY CONSISISTING OF DEPTHS IN RIGHT OF WORDS
C***	AND ZEROS OR SHIP NUMBERS IN LEFT OF WORDS
	call init(6, 0,268,  1, 36, 120, 120 )
C
C***	ARRAY CONTAINING SHIP INFORMATION
C***	WORD		CONTAINING
C***	1		JOB NUMBER
C***	2		X COORDINATE
C***	3		Y COORDINATE
C***	4		DEPTH
C***	5		FIRST 6 CHARACTERS OF SHIP'S NAME
C***	6		LAST 6 CHARACTERS OF SHIP'S NAME
C***	7		SOUND GENERATED BY SHIP
C***	8		PROJECTILE HIT FLAG
C***	9		SHIP'S  AFFILIATION
C***	10		SHIP TYPE
	call init(6, 0,282,  2, 36, 26, 10 )
C
C***	ARRAY CONTAINING PORT INFORMATION
C***	WORD		CONTAINING
C***	1		FIRST 6 LETTERS OF PORT
C***	2		LAST 6 LETTERS OF PORT
C***	3		X COORDINATE OF PORT
C***	4		Y COORDINATE OF PORT
C***	5		NUMBER OF SHIPS PLAYING FOR THAT PORT
C***	6		NUMBER OF HITS ON PORT
	call init(6, 0,292,  3, 36, 2, 6 )
C
C***	ARRAY CONSISTING OF PPNS OF PEOPLE WHO HAVE BEEN KILLED
	call init(5, 0,295,  4, 36, 50 )
C
C***	ARRAY CONSISTING OF EXPLOSION INFORMATION
C***	AND GENERAL NON-ARRAY TYPE INFORMATION
C***	WORD		CONTAINING
C***	1		X COORDINATE OF EXPLOSION
C***	2		Y COORDINATE OF EXPLOSION
C***	3		DEPTH OF EXPLOSION
C***	4		FORCE OF EXPLOSION
C***	5		FLAG INDICATING THAT PORT #1 HAD A PLAYER
C***	6		FLAG INDICATING THAT PORT #2 HAD A PLAYER
	call init(5, 0,306,  5, 18, 6 )
C
C***	ARRAY CONSISTING OF MESSAGE INFO
C***	WORD		CONTAINING
C***	1		WHO TO
C***	2		LENGTH
C***	3		WHO FROM
C***	4-63		MESSAGE
	call init(5, 0,314,  6, 36, 63 )
C
C***	MAKE SURE ALL BORDERS ARE LAND
C
	if( debug )call colcur( 1, 24 )
	if( debug )call string(1,'[Initializing borders]^M^J^E')
	do 100 itemp = 1, 120
	    i = itemp
	    call putval(6, 0,322,  1, i, 1, 20 )
	    call putval(6, 0,323,  1, i, 120, 20 )
	    call putval(6, 0,324,  1, 1, i, 20 )
	    call putval(6, 0,325,  1, 120, i, 20 )
100	continue
C
C***	NOW GENERATE RANDOM DEPTHS EVERY 10 X 10 UNITS
C
	if( debug )call colcur( 1, 23 )
	if( debug )call string(1,'[Random sequence]^M^J^E')
	do 200 xtemp = 10, 110, 10
	    x = xtemp
	    do 200 ytemp = 10, 110, 10
		y = ytemp
		if( debug )call colcur( x/2+1, y/10+9 )
		idepth = iran( 20 )
		if( debug )call number(2, idepth, 2 )
		call putval(6, 0,339,  1, x, y, idepth )
200	continue
C
C***	NOW INTERPOLATE BETWEEN ALL THOSE POINTS
C
	if( debug )call colcur( 1, 22 )
	if( debug )call string(1,'[Generalization sequence]^M^J^E')
	do 700 xtemp = 2, 119
	    x = xtemp
	    xrel = mod( x, 10 )
	    xpos = (x/10)*10
	    xfpos = xpos
	    if( xfpos .eq. 0 )  xfpos = 1
	    do 700 ytemp = 2, 119
		y = ytemp
		yrel = mod( y, 10 )
C
		if( xrel .ne. 0 .or. yrel .ne. 0 ) goto 300
		if( debug )call colcur( x/2+3, y/10+9 )
		if( debug )call chrout(35)
C
300		ypos = (y/10)*10
		yfpos = ypos
		if( yfpos .eq. 0 )  yfpos = 1
C
		if( xrel .eq. 0 .and. yrel .ne. 0 ) goto 400
		if( yrel .eq. 0 .and. xrel .ne. 0 ) goto 500
		if( xrel .eq. 0 .and. yrel .eq. 0 ) goto 700
C
		call getval(6, 0,368,  1, xfpos, yfpos, x0y0 )
		call getval(6, 0,369,  1, xpos+10, yfpos, x1y0 )
		call getval(6, 0,370,  1, xfpos, ypos+10, x0y1 )
		call getval(6, 0,371,  1, xpos+10, ypos+10, x1y1 )
		depth1 = x0y0 + xrel*(x1y0-x0y0)/10
		depth2 = x0y1 + xrel*(x1y1-x0y1)/10
		depth = depth1 + yrel*(depth2-depth1)/10
		goto 600
C
400		call getval(6, 0,377,  1, xfpos, yfpos, x0y0 )
		call getval(6, 0,378,  1, xfpos, ypos+10, x0y1 )
		depth = x0y0 + yrel*(x0y1-x0y0)/10
		goto 600
C
500		call getval(6, 0,382,  1, xfpos, yfpos, x0y0 )
		call getval(6, 0,383,  1, xpos+10, yfpos, x1y0 )
		depth = x0y0 + xrel*(x1y0-x0y0)/10
C
600		call putval(6, 0,386,  1, x, y, depth )
700	continue
C
C***	SET UP PORTS
C
	if( debug )call colcur( 1, 21 )
	if( debug )call string(1,'[Initializing ports]^M^J^E')
C
	if( wannam ) goto 770
C
C***	USER DOESN'T WANT TO SETUP THE NAMES, PUT IN DEFAULTS
C
	call convrt('Ichthyopolis', 12, 5, sname1, 6 )
	call convrt('Oceanus     ', 12, 5, sname2, 6 )
	goto 1000
C
C***	USER IS PRIV'D.  ALLOW HIM TO SET UP PORT NAMES
C
770	if( .not. debug )call clrscr
800	call colcur( 1, 9 )
	call string(1,'Enter name of port #1:                       ^E')
	call colcur( 24, 9 )
	call getstr(3, array, 12, i )
	call colcur( 1, 7 )
	call string(1,'                                      ^E')
	ichar1 = icon( array(1) ) - 64
	if( ichar1 .lt. 1 .or. ichar1 .gt. 26 ) goto 900
	call convrt( array, 12, 1, sname1, 6 )
	call colcur( 1, 8 )
	call string(1,'Enter name of port #2:                       ^E')
	call colcur( 24, 8 )
	call getstr(3, array, 12, i )
	ichar2 = icon( array(1) ) - 64
	if( ichar1 .eq. ichar2 .or. ichar2 .lt.1 .or. ichar2 .gt. 26 )
     & goto 900
	call convrt( array, 12, 1, sname2, 6 )
	goto 1000
C
900	call colcur( 1, 7 )
	call string(1,'Port names must be unique.^E')
	goto 800
C
C***	PUT FIRST PORT IN BASE (MAKE UP ITS COORDINATES)
C
1000	call putval(6, 0,430,  3, 1, 1, sname1( 1 ) )
	call putval(6, 0,431,  3, 1, 2, sname1( 2 ) )
C
1100	y = iran( 100 ) + 10
	call putval(6, 0,434,  3, 1, 4, y )
	do 1200 tempx = 2, 120
	    x = tempx
	    call getval(6, 0,437,  1, x, y, ival )
	    if( ival .lt. 18 .and. x .eq. 2 ) goto 1100
	    if( ival .le. 17 ) goto 1300
1200	continue
1300	x = x - 1
	call putval(6, 0,442,  3, 1, 3, x )
	call getval(6, 0,443,  1, x, y-1, ival )
	if( ival .ge. 18 )  call putval(4, 0,444,  -1, 17 )
	call getval(6, 0,445,  1, x+1, y-1, ival )
	if( ival .ge. 18 )  call putval(4, 0,446,  -1, 17 )
	call getval(6, 0,447,  1, x, y+1, ival )
	if( ival .ge. 18 )  call putval(4, 0,448,  -1, 17 )
	call getval(6, 0,449,  1, x+1, y+1, ival )
	if( ival .ge. 18 )  call putval(4, 0,450,  -1, 17 )
C
C***	PUT SECOND PORT IN DATA BASE (MAKE UP ITS COORDINATES)
C
	call putval(6, 0,454,  3, 2, 1, sname2( 1 ) )
	call putval(6, 0,455,  3, 2, 2, sname2( 2 ) )
C
1400	y = iran( 100 ) + 10
	call putval(6, 0,458,  3, 2, 4, y )
	do 1500 tempx = 119, 1, -1
	    x = tempx
	    call getval(6, 0,461,  1, x, y, ival )
	    if( ival .lt. 18 .and. x .eq. 119 ) goto 1400
	    if( ival .le. 17 ) goto 1600
1500	continue
1600	x = x + 1
	call putval(6, 0,466,  3, 2, 3, x )
	call getval(6, 0,467,  1, x, y-1, ival )
	if( ival .ge. 18 )  call putval(4, 0,468,  -1, 17 )
	call getval(6, 0,469,  1, x-1, y-1, ival )
	if( ival .ge. 18 )  call putval(4, 0,470,  -1, 17 )
	call getval(6, 0,471,  1, x, y+1, ival )
	if( ival .ge. 18 )  call putval(4, 0,472,  -1, 17 )
	call getval(6, 0,473,  1, x-1, y+1, ival )
	if( ival .ge. 18 )  call putval(4, 0,474,  -1, 17 )
C
C***	UNLOCK DATA BASE SO OTHERS MAY PLAY AND RETURN
C
	if( debug )call colcur( 1, 6 )
	if( debug )call string(1,'[Initialization completed]^M^J^E')
	call unlock
	return
	end
C
	subroutine edit( comara, length )
	implicit integer (a-z)
	integer comara( 60 )

	call string(1,'Array #^E')
	if( length .eq. 0 ) goto 100
	call getnum(10, comara, length, i1, 10, i2, 10, i3, 10, i4, 10 )
100	if( i1 .gt. 3 ) goto 200
	call number(1, i1 )
	call chrout(40)
	call number(1, i2 )
	call chrout(44)
	call number(1, i3 )
	call getval(6, 0,496,  i1, i2, i3, ival )
	goto 300
200	call number(1, i1 )
	call chrout(40)
	call number(1, i2 )
	call getval(5, 0,501,  i1, i2, ival )
300	call string(1,') = ^E')
	call number(1, ileft( ival ) )
	call string(1,',,^E')
	call number(1, iright( ival ) )
	call string(1,'  Octal: ^E')
	call number(3, ileft( ival ), 0, 8 )
	call string(1,',,^E')
	call number(3, iright( ival ), 0, 8 )
	call string(1,'  Sixbit: ^E')
	call string(3, ival, 6, 6 )
	if( comara(1) .ne. 67 ) return
	if( i1 .le. 3 ) call putval(4, 0,513,  -i1, i4 )
	if( i1 .gt. 3 ) call putval(4, 0,514,  -i1, i3 )
	return
	end
C
	subroutine map
C
C***	PRINT OUT A GREY-TONE MAP ON THE LINE PRINTER
C
	implicit integer ( a - z )
C
	integer scale1( 20 ), scale2( 20 ), filesp( 13 ), stname(2)
	logical lerror
C
	data scale1/64,35,42,38,61,43,45,44,46,64,
     & 35,42,38,61,43,45,46,32,32,32/
	data scale2/37,37,37,37,64,64,64,64,64,32,
     & 32,32,32,32,32,32,32,32,32,32/
C
C***	FIND OUT WHERE PORTS ARE
C
	call getval(6, 0,533,  3, 1, 3, ip1x )
	call getval(6, 0,534,  3, 1, 4, ip1y )
	call getval(6, 0,535,  3, 1, 1, ip1cs )
	call convrt( ip1cs, 1, 6, ip1c, 0 )
C	IP1C = SHIFT( IP1C, -30 )
C	IP1C = IP1C + 32
	call getval(6, 0,539,  3, 2, 3, ip2x )
	call getval(6, 0,540,  3, 2, 4, ip2y )
	call getval(6, 0,541,  3, 2, 1, ip2cs )
	call convrt( ip2cs, 1, 6, ip2c, 0 )
C	IP2C = SHIFT( IP2C, -30 )
C	IP2C = IP2C + 32
C
C***	FIND OUT WHICH LINE PRINTER THE USER IS CLOSEST TO AND OPEN IT
C
	call nodlin( itty( job(0) ), i, j )
	if( i .lt. 24 )  i = 30
	filesp( 3 )=isxbit('LPT00~')
	filesp( 3 ) = filesp( 3 ) + 4096*(i/8)
	filesp( 3 ) = filesp( 3 ) + 64*mod( i, 8 )
	filesp( 4 ) = isxbit('OCEAN~')
	filesp( 5 ) = isxbit('MAP~')
	filesp( 6 ) = 63
	call ppn( p, pn )
	filesp( 7 ) = p
	filesp( 8 ) = pn
	call ofile( 2, filesp, 0 )
	if( .not. lerror(0) ) goto 200
100	call string(1,'Cannot open ^E')
	call outspc( filesp )
	call crlf
	return
C
200	call wfile( 2, filesp )
	if( lerror(0) ) goto 100
	call string(1,'Generating map on ^E')
	call outspc( filesp )
	call crlf
	call outbuf( 1 )
	call select( 2 )
C
C***	PRINT OUT A HEADING ON THE MAP
C
	do 300 i = 1, 55
	    call chrout(32)
300	continue
	call string(1,'***  O c e a n  ***^M^J^J^S     ^E')
C
C***	NOW PRINT OUT THE MAP
C
	do 400 itemp = 10, 110, 10
	    i = itemp
	    call number(2, i, 10 )
400	continue
	call string(1,'^M^S    ^E')
C
	do 500 itemp = 1, 122
	    i = itemp
	    if( mod( i-1, 10 ) .eq. 0 )  call chrout(43)
	    if( mod( i-1, 10 ) .ne. 0 )  call chrout(45)
500	continue
	call string(1,'^M^E')
C
	do 1600 ytemp = 120, 1, -1
	    y = ytemp
	    if( mod( y, 10 ) .eq. 0 ) goto 600
	    call string(1,'^S    |^E')
	    goto 700
600	    call chrout( 19 )
	    call number(2, y, 3 )
	    call string(1,' +^E')
C
C***	FIRST SCALE
C
700	    do 1000 xtemp = 1, 120
		x = xtemp
		if( x .eq. ip1x .and. y .eq. ip1y ) goto 800
		if( x .eq. ip2x .and. y .eq. ip2y ) goto 900
		call getval(6, 0,611,  1, x, y, depth )
		call chrout( scale1( iright( depth ) ) )
		goto 1000
C
800		call chrout( ip1c )
		goto 1000
C
900		call chrout( ip2c )
1000	    continue
	    if( mod( y, 10 ) .ne. 0 ) goto 1100
	    call string(1,'+ ^E')
	    call number(1, y )
	    goto 1200
C
1100	    call chrout(124)
C
1200	    call string(1,'^M     ^E')
C
C***	SECOND SCALE
C
	    do 1500 xtemp = 1, 120
		x = xtemp
		if( x .eq. ip1x .and. y .eq. ip1y ) goto 1300
		if( x .eq. ip2x .and. y .eq. ip2y ) goto 1400
		call getval(6, 0,635,  1, x, y, depth )
		call chrout( scale2( iright( depth ) ))
		goto 1500
C
1300		call chrout(ip1c)
		goto 1500
C
1400		call chrout(ip2c)
1500	    continue
1600	continue
	call string(1,'^S    ^E')
C
	do 1700 itemp = 1, 122
	    i = itemp
	    if( mod( i-1, 10 ) .eq. 0 )  call chrout(43)
	    if( mod( i-1, 10 ) .ne. 0 )  call chrout(45)
1700	continue
	call string(1,'^M^S     ^E')
C
	do 1800 itemp = 10, 120, 10
	    i = itemp
	    call number(2, i, 10 )
1800	continue
C
C***	PRINT OUT KEY INFORMATION
C
	call string(1,'^M^S^S
     &                                                         ^E')
	call string(1,'76543210987654321012^M^S    ^E')
C
C***	PRINT OUT NAME OR PORT # 1 AND ITS COORDINATE
C
	call getval(6, 0,667,  3, 1, 1, stname(1) )
	call getval(6, 0,668,  3, 1, 2, stname(2) )
	call string(3, stname, 6, 12 )
	call string(1,'  ^E')
	call number(2, ip1x, -3 )
	call chrout(45)
	call number(2, ip1y, -3 )
C
C***	PRINT OUT KEY
C
	call string(1,'                           Key: ^E')
	do 1900 itemp = 1, 20
	    i = itemp
	    call chrout( scale1(i) )
1900	continue
	call string(1,'^M
     &                                                         ^E')
	do 2000 itemp = 1, 20
	    i = itemp
	    call chrout( scale2(i) )
2000	continue
C
C***	PRINT OUT NAME OF SECOND PORT AND ITS COORDINATES
C
	call string(1,'                            ^E')
	call getval(6, 0,692,  3, 2, 1, stname(1) )
	call getval(6, 0,693,  3, 2, 2, stname(2) )
	call string(3, stname, 6, 12 )
	call string(1,'  ^E')
	call number(2, ip2x, -3 )
	call chrout(45)
	call number(2, ip2y, -3 )
C
C***	CLOSE FILE AND RETURN
C
	call close( 2 )
	call select( 1 )
	return
	end
C
	subroutine print( kind )

	integer stname(2)
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla
C
C***	PRINT OUT ALL INITIAL INFORMATION FOR USER
C
	if( iclwhi .ne. 0 ) goto 3
	iclwhi = 1
	icldbl = 2
	iclred = 3
	icllbl = 4
	iclpur = 5
	iclgre = 6
	iclyel = 7
	iclbla = 8

3	call clrscr
C
	call usrset( 1026, 1 )
C
	call cursor( 1, 24 )
	call pback( iclwhi )
	call pcolor( iclwhi )
	call irepeat(45,44)
	call defcol
	call string(1,' Azimuth:     ^E')
	call pback( iclwhi )
	call pcolor( iclwhi )
	call string(1,'----^E')
	do 100 iy = 1, 19
	    call cursor( 1, 24-iy )
	    call chrout(124)
	    ix = 20 - 2 * ifix( sqrt(100.-(iy-10+0.)**2) + 0.5 )
	    if( ix .eq. 0 ) goto 51
	    do 50 i = 1, ix
		call chrout(64)
50	    continue
51	    continue
	    ix1 = 19 + 2 * ifix( sqrt(100.-(iy-10+0.)**2) + 0.5 )
	    if( ix1 .ge. 38 ) ix1 = 39
	    if( ix .ge. ix1-1 ) goto 59
	    call pback( iclbla )
	    do 58 i = ix, ix1-3
		call chrout( 32 )
58	    continue
	    call pback( iclwhi )
59	    if( ix1 .eq. 39 ) goto 61
	    do 60 i = ix1, 38
		call chrout(64)
60	    continue
61	    continue
	    call string(1,'||^E')
	    call pback( iclbla )
	    call string(1,'                     ^E')
	    call pback( iclwhi )
	    call chrout(124)
100	continue
	call cursor( 1, 4 )
	call irepeat( 45, 62 )
	call colcur( 1, 3 )
	if( kind .eq. 5 ) call string(1,'Eng:            Rdr:
     &    Gtr:                    Msl:                    Sfg:^E')
	if( kind .eq. 5 ) goto 105
	call string(1,'Eng:    Hlm:    Rdr:    Snr:    ^E')
	if( kind .eq. 1 ) call string(1,'
     &Com:            Msl:    Dep:            Sfg:^E')
	if( kind .eq. 2 ) call string(1,'
     &Tp1:    Tp2:    Msl:    Dcl:    Bal:    Lsp:^E')
	if( kind .eq. 3 ) call string(1,'
     &                Msl:    Dep:    Min:    Sfg:^E')
	if( kind .eq. 4 ) call string(1,'
     &Tp1:    Tp2:                            Sfg:^E')
C
105	call colcur( 64, 24 )
	call string(1,'Time:^E')
	call colcur( 64, 23 )
	call string(1,'Sector:    -^E')
	call colcur( 64, 21 )
	call string(1,'Speed:    (   )^E')
	call colcur( 64, 20 )
	call string(1,'Azimuth:    (   )^E')
	call colcur( 64, 17 )
	call string(1,'Vol:       (   )^E')
C
C***	PRINT OUT INFORMATION ON PORTS
C
	call colcur( 64, 12 )
	call getval(6, 0,795,  3, 1, 1, stname(1) )
	call getval(6, 0,796,  3, 1, 2, stname(2) )
	call string(3, stname, 6, 12 )
	call colcur( 64, 11 )
	call getval(6, 0,799,  3, 1, 3, ix )
	call number(2, ix, -3 )
	call chrout( 45 )
	call getval(6, 0,802,  3, 1, 4, iy )
	call number(2, iy, -3 )
	call string(1,' State:^E')
	call colcur( 64, 9 )
	call getval(6, 0,806,  3, 2, 1, stname(1) )
	call getval(6, 0,807,  3, 2, 2, stname(2) )
	call string(3, stname, 6, 12 )
	call colcur( 64, 8 )
	call getval(6, 0,810,  3, 2, 3, ix )
	call number(2, ix, -3 )
	call chrout( 45 )
	call getval(6, 0,813,  3, 2, 4, iy )
	call number(2, iy, -3 )
	call string(1,' State:^E')
C
	call colcur( 1, 1 )
	call string(1,'Command:^E')
C
200	if( kind .ne. 1 ) goto 250
	call colcur( 64, 18 )
	call string(1,'Charges:^E')
	call colcur( 64, 16 )
	call string(1,'Missiles:^E')
	call colcur( 64, 15 )
	call string(1,'Auto fire:^E')
	goto 999
C
250	if( kind .ne. 2 ) goto 300
	call colcur( 64, 22 )
	call string(1,'Depth:^E')
	call colcur( 64, 19 )
	call string(1,'Pitch:     (   )^E')
	call colcur( 64, 18 )
	call string(1,'Ballast:    %^E')
	call colcur( 64, 16 )
	call string(1,'Missiles:^E')
	call colcur( 64, 15 )
	call string(1,'Torpedos:^E')
	call colcur( 64, 14 )
	call string(1,'Hull:    %^E')
	call colcur( 64, 13 )
	call string(1,'Water:    %^E')
	call colcur( 64, 5 )
	call string(1,'Torp. 1:^E')
	call colcur( 64, 4 )
	call string(1,'Torp. 2:^E')
	goto 999
C
300	if( kind .ne. 3 ) goto 400
	call colcur( 64, 19 )
	call string(1,'Mines:^E')
	call colcur( 64, 18 )
	call string(1,'Charges:^E')
	call colcur( 64, 16 )
	call string(1,'Missiles:^E')
	goto 999
C
400	if( kind .ne. 4 ) goto 500
	call colcur( 64, 15 )
	call string(1,'Torpedos:^E')
	call colcur( 64, 5 )
	call string(1,'Torp. 1:^E')
	call colcur( 64, 4 )
	call string(1,'Torp. 2:^E')
	goto 999
C
500	if( kind .ne. 5 ) goto 999
	call colcur( 64, 22 )
	call string(1,'Altitude:^E')
	call colcur( 64, 19 )
	call string(1,'Pitch:     (   )^E')
	call colcur( 64, 16 )
	call string(1,'Missiles:^E')
999	return
	end
C
	subroutine comand( ichar, comara, arrind )
C
C  --	ROUTINE GET COMMAND FROM USER IF ONE PRESENT.
C
	integer comara(61), index, arrind, ichar
	data index/0/
C
C  --	IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR
C  --	0.5 SECONDS OR UNTIL ONE IS.
C
10	call nap( 500, 12 )
	call chrbuf( ichar )
	if( ichar .eq. -1 ) return
	if( ichar .eq. 8 .or. ichar .eq. 127 ) goto 20
	if( ichar .eq. 21 ) goto 40
	if( ichar .eq. 13 ) goto 45
	if( ichar .eq. 27 .and. index .eq. 0 ) goto 15
	if( ichar .lt. 32 ) goto 10
	if( index .ge. 60 ) goto 50
C
C  --	NOT SPECIAL CHARACTER, PUT IN ARRAY
C
	index = index + 1
	call colcur( 9 + index, 1 )
	call chrout( ichar )
	call outbuf( 1 )
	comara(index) = icon( ichar )
	goto 10
C
C  --	ESCAPE:  REPEAT LAST COMMAND
C
15	if( comara(1) .eq. 82 ) indstr = 0
	index = indstr
	call colcur( 10, 1 )
	if( index .ne. 0 )call string(3, comara, 1, index )

	goto 45
C
C  --	DELETE CHARACTER
C
20	call colcur( 9 + index, 1 )
	call chrout( 32 )
	call outbuf( 1 )
	index = index - 1
	if( index .lt. 0 ) index = 0
	goto 10
C
C  --	DELETE LINE
C
40	call colcur( 10, 1 )
	do 43 i = 1, index
	    call chrout(32)
43	continue
	call outbuf( 1 )
	index = 0
	goto 10
C
C  --	CARRIAGE RETURN TYPED
C
45	if( index .ne. 0 ) goto 50
	ichar = -1
	goto 70
50	comara(index + 1) = 0
	call colcur( 10, 1 )
	do 60 i = 1, index
	call chrout(32)
60	continue
	call allcap( comara, 2 )
	ichar = comara(1)
70	arrind = index
	indstr = index
	index = 0
	call outbuf( 1 )
	call nap( 500, 4 )
	return
	end
C
	subroutine cease( ix, iy, iplayr )
C
C***	DELETE USER FROM THE DATA BASE
C
	call unlock
	call lock
	call explod( ix, iy, 18, 0, ival )
	call addval(6, 0,960,  1, ix, iy, -262144*iplayr )
	call putval(6, 0,961,  2, iplayr, 1, 0 )
	call getval(6, 0,962,  2, iplayr, 9, ival )
	call addval(6, 0,963,  3, ival, 5, -1 )
	call getval(6, 0,964,  2, iplayr, 10, ival )
	if( ival .eq. 5 ) goto 10
	call getval(5, 0,966,  4, 1, ival )
	call addval(4, 0,967,  -4, 1 )
	call ppn( i, ipn )
	ival = ival + 1
	call putval(5, 0,970,  4, ival+1, ipn )
10	call usrset( 1031, 0 )
	call usrset( 1026, 0 )
	call usrset( 1041, 1 )
	call colcur( 1, 1 )
	call close( 1 )
	call unlock
	call exprog
	end
C
	subroutine clrlin
C
C***	CLEAR THE INFORMATION LINE AND PREPARE TO PRINT ON IT
C
	call colcur( 1, 2 )
	do 100 i = 1, 79
	    call chrout(32)
100	continue
	call colcur( 1, 2 )
	return
	end
C
	subroutine hurt( kind, ihfac, imuch, damage )
C
C***	DAMAGE THE USER ACCORDING TO IMUCH
C
	integer damage( 10, 2 ), odds( 50 )
	data odds/	1, 1, 2, 5, 5, 5, 3, 4, 0, 5,
     &			1, 1, 2, 4, 3, 5, 3, 2, 2, 1,
     &			1, 1, 2, 5, 0, 0, 3, 3, 3, 5,
     &			1, 1, 2, 5, 5, 5, 0, 0, 0, 6,
     &			2, 0, 2, 5, 0, 0, 3, 0, 0, 5 /
C
	imuch = iabs( imuch )
	do 200 itemp = 1, imuch
	    ithru = 0
100	    i = iran( 10 )
	    if( iran( 8 ) .gt. odds( 10*(kind-1)+i ) ) goto 100
	    ithru = ithru + 1
	    if( damage( i, 1 ) .eq. -1 .and. ithru .lt. 10 ) goto 100
	    if( damage( i, 1 ) .eq. -1 ) goto 200
	    damage( i, 1 ) = damage( i, 1 ) + 1
	    if( damage(i,1) .gt. 9 )  damage( i, 1 ) = -1
200	continue
	ihfac = ihfac - imuch
	if( ihfac .lt. 0 )  ihfac = 0
	return
	end
C
	subroutine endhim( victim )
C
C***	ROUTINE REMOVES DETACHED JOB FROM DATABASE
C
	integer victim
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call lock
	call getval(6, 0,1025,  2, victim, 2, isx )
	call getval(6, 0,1026,  2, victim, 3, isy )
	call getval(6, 0,1027,  1, isx, isy, ival )
	call putval(4, 0,1028,  -1, iright( ival ) )
	call getval(6, 0,1029,  2, victim, 9, iport )
	call addval(6, 0,1030,  3, iport, 5, -1 )
	call putval(6, 0,1031,  2, victim, 1, 0 )
	call addusr( -1 )
	call unlock
	call clrlin
	call colstr(iclyel,'*** Job ^E')
	call number(1, ival )
	call chrout(40)
	call chrout( ival + 64 )
	call string(1,') removed from data base ***^E')
	victim = 0
	return
	end
C
	subroutine explod( ix, iy, iz, iforce, iflag )
C
C***	SET UP AN EXPLOSION
C
	call putval(5, 0,1047,  5, 1, ix )
	call putval(5, 0,1048,  5, 2, iy )
	call putval(5, 0,1049,  5, 3, iz )
	call putval(5, 0,1050,  5, 4, iforce )
	iflag = 3
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
C	CALL STRING(1,' line ^E')
C	CALL NUMBER(3, IL, 0, 8 )
C	CALL CHROUT(' ')
C	CALL STRING(3, JSTAT( IJOB ), 6, 2 )
	return
	end
C
	subroutine who( icchar )
C
C***	SUBROUTINE PRINTS OUT STATISTICS ON USER
C
	integer uname(2)
	call chrout(32)
	call chrout( icchar+64 )
	call string(1,': ^E')
	call getval(6, 0,1090,  2, icchar, 10, ival )
	call pkind( ival )
	if( ival .gt. 1 .and. ival .lt. 5 ) call chrout(32)
	call chrout(32)
	call getval(6, 0,1094,  2, icchar, 5, uname(1) )
	call getval(6, 0,1095,  2, icchar, 6, uname(2) )
	call string(3, uname, 6, 12 )
	call getval(6, 0,1097,  2, icchar, 1, ijob )
	call chrout(32)
	call syswho( ijob )
	call crlf
	return
	end
C
	subroutine pkind( kind )
C
C***	PRINTS OUT KIND OF SHIP
C
	if( kind .eq. 1 ) call string(1,'Battleship^E')
	if( kind .eq. 2 ) call string(1,'Submarine^E')
	if( kind .eq. 3 ) call string(1,'Destroyer^E')
	if( kind .eq. 4 ) call string(1,'P.T. boat^E')
	if( kind .eq. 5 ) call string(1,'Helicopter^E')
	return
	end
C
	subroutine nowait
	call addusr( -1 )
10	call tstop
	goto 10
	end
C
	subroutine fmain
C
	logical iniflg, selprt, eot, wanmap, debug, wannam, atofir, ofire
	logical notfrs, lprivd, lerror, idock
	integer comara(60), stname(2), damage(10,2)
	integer parara(20), filspc(13)
	logical logdin, newang
	real smsin, smcos

	common/nhcom/newang
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data itorp/20/, ichar/78/, iradr/-1/, ihfac/100/
	data idc/20/, imine/10/, imissl/5/

C
C***	CHECK USER TO SEE IF HE'S WELCOME, SET UP SWITCHES,
C***	INITIALIZE DATABASE AND OPEN TTY
C
	call ppn( i, ipn )
	call usrset( 536, ttyspd )
	call settty( comara, parara, length, lprivd, filspc )
	newang = .true.
	if( length .eq. 0 ) goto 100
	if(iserch(parara,isxbit('MAP~'),length).ne.0) wanmap = .true.
	if(iserch(parara,isxbit('OLDANG~'),length).ne.0) newang = .false.
	if(iserch(parara,isxbit('DEBUG~'),length).ne.0 .and. lprivd )
     &	debug = .true.
	if(iserch(parara,isxbit('NAME~'),length).ne.0 .and. lprivd )
     &	debug = .true.

C***	DEFINED KINDS OF CRAFT AND THEIR POWERS ARE:
C
C***	KIND	MAXSPEED	TYPE		WEAPONS
C***	1	10		BATTLESHIP (2*GS, 20TRP, 20DC, 10MIS)
C***	2	20		SUBMARINE  (20TRP, 5MIS)
C***	3	30		DESTROYER  (1G, 20DC, 5MIS, 5MIN)
C***	4	40		P.T. BOAT  (1G, 4TRP)
C***	5	50		HELICOPTER (1G, 15MIS)
C
	if(iserch(parara,isxbit('BATTLE~'),length).ne.0) kind = 1
	if(iserch(parara,isxbit('SUBMAR~'),length).ne.0) kind = 2
	if(iserch(parara,isxbit('DESTRO~'),length).ne.0) kind = 3
	if(iserch(parara,isxbit('PT~'),length).ne.0) kind = 4
	if(iserch(parara,isxbit('HELICO~'),length).ne.0) kind = 5
	if(iserch(parara,isxbit('PORT~'),length).ne.0)selprt = .true.
100	continue ! call ctrap
c	call nowait
	call check( iniflg )
	if( .not. iniflg ) goto 150
	continue ! call ctrap
c	call string(1,'^M^JPlease wait for initialization^M^J^E')
	call initdb( debug, wannam )
C
150	notfrs = .false.
	call getval(5, 0,1175,  4, 1, ival )
	if(ival.eq.0 .or. ipn.eq.7963 ) goto 201
	do 200 i = 1, ival
	    call getval(5, 0,1178,  4, i+1, icpn )
	    if( icpn .eq. ipn ) notfrs = .true.
200	continue
201	continue
C
	call ofile( 1, isxbit('TTY~'), 8 )
	if( lerror(0) )  return
	call select( 1 )
C
C***	IF THE USER WANTS A MAP, GIVE IT TO HIM
C
	call enable
	if( wanmap ) call map
C
C***	SET UP USER'S PORT OR ASK HIM WHO'S SIDE HE'S ON
C
	if( selprt ) goto 210
	call getval(6, 0,1195,  3, 1, 5, ip1 )
	call getval(6, 0,1196,  3, 2, 5, ip2 )
	if( ip1 .lt. ip2 )  iport = 1
	if( ip2 .lt. ip1 )  iport = 2
	if( ip1 .eq. ip2 )  iport = iran( 2 )
	goto 290
C
210	call string(1,'1: ^E')
	call getval(6, 0,1203,  3, 1, 1, stname(1) )
	call getval(6, 0,1204,  3, 1, 2, stname(2) )
	call string(3, stname, 6, 12 )
	call crlf
	do 220 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,1209,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 220
	    call getval(6, 0,1211,  2, i, 9, ival )
	    if( ival .eq. 1 ) call who(i)
220	continue
C
	call string(1,'2: ^E')
	call getval(6, 0,1216,  3, 2, 1, stname(1) )
	call getval(6, 0,1217,  3, 2, 2, stname(2) )
	call string(3, stname, 6, 12 )
	call crlf
	do 230 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,1222,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 230
	    call getval(6, 0,1224,  2, i, 9, ival )
	    if( ival .eq. 2 ) call who(i)
230	continue
C
240	call string(1,'^MPort (1 or 2):        ^MPort (1 or 2): ^E')
	call outbuf( 1 )
	call chrwat( iport )
	iport = iport - 48
	if( iport .ne. 1 .and. iport .ne. 2 ) goto 240
	call crlf
C
C***	IF USER HASN'T CHOSEN HIS TYPE OF SHIP, ASK HIM
C
290	if( notfrs ) kind = 5
	if( kind .ne. 0 ) goto 400
	do 300 itemp = 1, 5
	    i = itemp
	    call number(1, i )
	    call string(1,': ^E')
	    call pkind( i )
	    call crlf
300	continue
301	continue
	call string(1,'^MEnter ship type ( 1, 2, 3, 4 or 5 ):        ^M
     &Enter ship type ( 1, 2, 3, 4 or 5 ): ^E')
	call outbuf( 1 )
	call chrwat( kind )
	kind = kind - 48
	if( kind .gt. 5 .or. kind .lt. 1 ) goto 301
	call crlf
C
C***	GET SHIP'S NAME
C
400	call pkind( kind )
	call string(1,'''s name: ^E')
	call outbuf( 1 )
	call getstr(3, comara, 12, length )
	call convrt( comara, 12, 1, stname, 6 )
	do 500 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,1264,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 500
	    call getval(6, 0,1266,  2, i, 5, name1 )
	    call getval(6, 0,1267,  2, i, 6, name2 )
	    if(stname(1).ne.name1 .or. stname(2).ne.name2) goto 500
	    call string(1,'Craft name is already in use.  ^E')
	    goto 400
500	continue
C
C***	GET SHIP'S SCAN CHARACTER
C
600	call string(1,'^MInput character to represent the "^E')
	if( length .gt. 0 )call string(3, comara, 1, length )
	call string(1,'" in scan:    ^E')
	call string(1,'^MInput character to represent the "^E')
	if( length .gt. 0 ) call string(3, comara, 1, length )
	call string(1,'" in scan: ^E')
	call outbuf( 1 )
	call chrwat( iplayr )
	if( iplayr .gt. 91 ) iplayr = iplayr - 32
	iplayr = iplayr - 64
	if( iplayr .lt. 1 .or. iplayr .gt. 26 ) goto 600
	call getval(6, 0,1286,  2, iplayr, 1, i )
	if( i .ne. 0 ) goto 600
	call crlf
C
	call putval(6, 0,1290,  2, iplayr, 5, stname(1) )
	call putval(6, 0,1291,  2, iplayr, 6, stname(2) )
	call putval(6, 0,1292,  2, iplayr, 1, job(0) )
	call addval(6, 0,1293,  3, iport, 5, 1 )
	call putval(6, 0,1294,  2, iplayr, 9, iport )
	if( kind .lt. 4 ) call putval(5, 0,1295,  5, 4+iport, 1 )
	call putval(6, 0,1296,  2, iplayr, 10, kind )
	if( kind .eq. 1 ) imissl = 12
	if( kind .eq. 4 ) itorp = 4
	if( kind .eq. 5 ) imissl = 15
C
C***	FIND OUT WHERE THE PORTS ARE
C
	call getval(6, 0,1303,  3, 1, 3, iprtx1 )
	call getval(6, 0,1304,  3, 1, 4, iprty1 )
	call getval(6, 0,1305,  3, 2, 3, iprtx2 )
	call getval(6, 0,1306,  3, 2, 4, iprty2 )
C
C***	MAKE UP SHIP COORDINATES
C
1000	ishipx = iran( 120 )
	ishipy = iran( 120 )
	idepth = 18
	if( kind .eq. 2 ) idepth = iran( 17 ) + 1
	if( kind .eq. 5 ) idepth = iran( 16 ) + 18
	call getval(6, 0,1315,  1, ishipx, ishipy, ival )
	if( ival .ge. idepth ) goto 1000
	if(( iport .eq. 1 .and.
     &	sqrt((ishipx-iprtx2+0.)**2+(ishipy-iprty2+0.)**2) .le. 25 ) .or.
     &	(iport .eq. 2 .and.
     &	sqrt((ishipx-iprtx1+0.)**2+(ishipy-iprty1+0.)**2) .le. 25 ))
     & goto 1000
	shipx = ishipx
	shipy = ishipy
	depth = idepth
	call addval(4, 0,1325,  -1, iplayr*262144 )
	call putval(6, 0,1326,  2, iplayr, 2, ishipx )
	call putval(6, 0,1327,  2, iplayr, 3, ishipy )
	call putval(6, 0,1328,  2, iplayr, 4, idepth )
	call putval(6, 0,1329,  2, iplayr, 8, 0 )
	iaz = iran( 360 )
	itaz = iaz
C
C***	SET UP TERMINAL CHARACTERISTICS
C
	call usrset( 1030, 1 )
	call usrset( 1045, 0 )
	call usrset( 1031, 1 )
	call usrset( 1032, 1 )
	call usrset( 1041, 0 )
C
C***	AND SET IT UP SO THE USER CAN ^C OUT IF HE WANTS
C
	continue ! call ctrap
c	call cease( ishipx, ishipy, iplayr )
C
C*************************************
C***	BEGINNING OF GAME LOOP    ****
C*************************************
C
1100	if(igtab(44,9)*100/igtab(40,9).le.85.or.ipn.eq.7963)
     &	goto 1101
	call clrscr
	call colcur( 20, 1 )
	call string(1,'^I^I** EMERGENCY **^M^J^JCRITICAL:^M^J^J^E')
	call string(1,'As you stare out to sea, you notice a^M^J^J
     &large dotted white line labeled "S T Y X L I N E".  When^M^J^J
     &your vessel crosses it, you exit to the monitor.^M^J^J^E')
	call cease( ishipx, ishipy, iplayr )
C
1101	call usrset( 1048, ttyspd )
	call usrset( 1049, ttyspd )
	if( ichar .eq. 78 )  call print( kind )
	if(damage(5,1).eq.0.and.damage(10,1).eq.0)goto 1103
	if( .not. atofir .or. kind .ne. 1 ) goto 1103
	atofir = .false.
C
C***	CHECK TO SEE IF THE GAME HAS ENDED (A PORT HAS BEEN DESTROYED)
C
1103	call getval(6, 0,1369,  3, iport, 6, ival )
	if( ival .lt. 7 ) goto 1200
	call clrlin
	call colstr
     &(iclred,'***** Your port has been destroyed *****^G^E')
	call cease( ishipx, ishipy, iplayr )
C
1200	call getval(6, 0,1376,  3, 3-iport, 6, ival )
	if( ival .lt. 7 ) goto 1300
	call clrlin
	call colstr
     &(icllbl,'***** The enemy port has been destroyed *****^G^E')
	call cease( ishipx, ishipy, iplayr )
C
C***	CHECK TO SEE IF ALL THE OPPONENTS ARE GONE
C
1300	call getval(5, 0,1385,  5, 7-iport, ival )
	if( ival .eq. 0 ) goto 1350
	do 1330 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,1389,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 1330
	    call getval(6, 0,1391,  2, i, 9, ival )
	    if( ival .eq. iport ) goto 1330
	    call getval(6, 0,1393,  2, i, 10, ival )
	    if( ival .ne. 0 .and. ival .lt. 5 ) goto 1350
1330	continue
	call clrlin
	call colstr(icllbl,
     &'*** There are no more major opponents. ***^G^E')
	call cease( ishipx, ishipy, iplayr )
C
C***	IF USER IS DAMAGED BEYOND REPAIR (OR HOPES OF GETTING TO
C***	PORT) DESTROY HIM
C
1350	if( damage(1,1) .eq. -1 .or. damage(2,1) .eq. -1 ) goto 1360
	if( kind .eq. 5 .and. damage(1,1) .ne. 0 ) goto 1360
	if( kind .ne. 2 .or. ( damage(10,1) .ne. -1 .and.
     &( damage(8,1) .ne. -1 .or. damage(9,1) .ne. -1 .or.
     & idepth .eq. 18 ) ) ) goto 1400
1360	call clrlin
	call colstr(iclred,'*** Fatal damage to ship.  You lose ***^E')
	call cease( ishipx, ishipy, iplayr )
C
C***	CHECK TO SEE IF SHIP WAS HIT BY SOMETHING
C
1400	call getval(6, 0,1415,  2, iplayr, 8, ival )
	if( ival .eq. 0 ) goto 1500
	call putval(4, 0,1417,  -1, 0 )
	call clrlin
	call colstr(iclred,'*** ^E')
	call pkind( kind )
	call string(1,' struck by a ^E')
	if( ival .eq. 5 ) call string(1,'ATS missile^E')
	if( ival .eq. 10 )  call string(1,'torpedo ***^E')
	if( ival .eq. 11 ) call string(1,'shell ***^E')
	if( ival .eq. 15 ) call string(1,'battleship shell ***^E')
	if( ival .eq. 20 )  call string(1,'STP missile ***^E')
	call hurt( kind, ihfac, ival, damage )
C
C***	CHECK TO SEE IF THERE WAS AN EXPLOSION AROUND
C
1500	call getval(5, 0,1431,  5, 1, iex )
	call getval(5, 0,1432,  5, 2, iey )
	call getval(5, 0,1433,  5, 3, ied )
	call getval(5, 0,1434,  5, 4, ief )
	dist=sqrt((iex-ishipx+0.)**2+(iey-ishipy+0.)**2+(ied-idepth+0.)**2)
	if( dist .gt. ief .or. ief .eq. 0 ) goto 1600
	call clrlin
	call colstr(iclred,'*** ^E')
	call pkind( kind )
	call string(1,' experiences explosive turbulance ***^E')
	call hurt( kind, ihfac, ifix( ief*4./(dist+1.) ), damage )
C
C***	CHECK TO SEE IF THE HULL HAS CRACKED
C
1600	if( ihfac .ge. idfac ) goto 1700
	if( iran( 100*idfac/ihfac ) .lt. 97 ) goto 1700
	call clrlin
	call colstr(iclred,
     & '*** Water pressure has cracked the hull ***^E')
	call cease( ishipx, ishipy, iplayr )
C
C***	MOVE THE SHIP USING HOME MADE TRIGONOMETRY
C
1700	call addval(6, 0,1454,  1, ishipx, ishipy, -iplayr*262144 )
	oshipx = shipx
	oshipy = shipy
	odepth = depth
1750	shipx = shipx + smcos(float(iaz))*cosdeg(float(ipitch))
     & *float(ispeed)/30.0
	if( shipx .lt. 0.5 .or. shipx .gt. 120.5 ) shipx = oshipx
	ishipx = shipx + 0.5
	shipy = shipy + smsin(float(iaz))*cosdeg(float(ipitch))
     & *float(ispeed)/30.0
	if( shipy .lt. 0.5 .or. shipy .gt. 120.5 ) shipy = oshipy
	ishipy = shipy + 0.5
	depth = depth + sindeg(float(ipitch))*float(ispeed)/30.0
	dfactr = (18.0-16.0*float(ibal)/100.0-depth)*0.014
	depth = depth + dfactr
	if( kind .eq. 2 .and. depth .gt. 18 ) depth = 18
	if( kind .eq. 5 .and. depth .gt. 35.5 ) depth = 35.0
	if( kind .ne. 2 .and. kind .ne. 5 ) depth = 18
	idepth = depth + 0.5
	if( damage( 9, 1 ) .ne. 0 .or. kind .ne. 2 )
     & ibal = -100.*(depth-18.)/16.
	if( ibal .lt. 0 .and. kind .ne. 5 ) ibal = 0
C
C***	CHECK TO SEE IF SHIP HIT SOMETHING
C
	call getval(6, 0,1479,  1, ishipx, ishipy, ival )
	if( kind .ne. 5 .or. idepth .gt. 18 .or.
     & iright(ival) .eq. 18 ) goto 1760
	call clrlin
	call colstr(iclred,
     & '*** Helicopter has hit water and sunk ***^E')
	call cease( ishipx, ishipy, iplayr )
C
1760	if( ileft( ival ) .ne. 0 .and. iright( ival ) .lt. idepth )
     &	    goto 2100
	if( iright(ival) .lt. idepth ) goto 2200
C
C***	HE EITHER HIT A ROCK OR HE IS DOCKING
C
	idock = ispeed .gt. 0 .and. ispeed .lt. 6 .and. (
     & ( ishipx .eq. iprtx1 .and. ishipy .eq. iprty1 ) .or.
     & ( ishipx .eq. iprtx2 .and. ishipy .eq. iprty2 ) )
	if( .not. idock ) goto 1762
	iaz = iaz + 180
	if( iaz .gt. 359 ) iaz = iaz - 360
	itaz = iaz
	
1762	if( .not. idock )
     &call hurt( kind, ihfac, iabs(ispeed)-ifix(dfactr*200.), damage )
	shipx = oshipx
	ishipx = shipx + .5
	shipy = oshipy
	ishipy = shipy + .5
	if( kind .eq. 5 .and. odepth .lt. 18.9 ) odepth = 19.
	depth = odepth
	idepth = depth + 0.5
	ibal = -100.*(depth-18.)/16.
	ispeed = 0
	itspd = 0
	call clrlin
	if( idock ) goto 1800
	call colstr(iclred,'*** ^E')
	call pkind( kind )
	call string(1,' hits a rock ***^E')
	goto 2200
C
C***	IF USER IS IN OPPONENTS PORT, DEFECT HIM
C
1800	if( ( iport .eq. 1 .and. iabs( ishipx-iprtx1 )
     & .lt. 2 .and. iabs( ishipy-iprty1 ) .lt. 2 )
     & .or. ( iport .eq. 2 .and. iabs( ishipx-iprtx2 )
     & .lt. 2 .and. iabs( ishipy-iprty2 ) .lt. 2 ) ) goto 1900
	idfect = idfect + 1
	if( idfect .gt. 1 ) goto 9100
	call colstr(iclred,'*** You have defected ^E')
	call addval(6, 0,1529,  3, iport, 5, -1 )
	iport =3-iport
	call addval(6, 0,1531,  3, iport, 5, 1 )
	call putval(6, 0,1532,  2, iplayr, 9, iport )
C
C***	IF CRAFT IS IN PORT, REPAIR AND RESUPPLY SHIP
C
1900	if( nkind .eq. 0 ) goto 1902
	kind = nkind
	call print( kind )
	ichar = 78
	call colcur( 1, 2 )
1902	call putval(6, 0,1541,  2, iplayr, 10, kind )
	call colstr(icllbl,'*** ^E')
	call pkind( kind )
	call string(1,' is in port ***^E')
	call getval(6, 0,1545,  3, iport, 6, ival )
	if( ival .ge. 2 ) goto 2200
	call string(1,' Supplies boarding ***^E')
	itorp = 20
	if( kind .eq. 4 ) itorp = 4
	imissl = 5
	if( kind .eq. 1 ) imissl = 12
	if( kind .eq. 5 ) imissl = 15
	idc = 20
	imine = 10
	do 2000 i = 1, 10
	    damage( i, 1 ) = 0
2000	continue
	ihfac = 100
	goto 2200
C
C***	****** KLUGE ****** SHIP CANNOT BE AT SAME X-Y AS ANOTHER
C***	SHIP.  ( UNFORTUNATE RESULT OF 2-DIMENSIONAL ARRAYS )
C
2100	if( ileft( ival ) .gt. 26 ) goto 2150
	call getval(6, 0,1565,  2, ileft( ival ), 4, itdep )
	if( itdep .ne. idepth ) goto 1750
C
	call hurt( kind,ihfac,iabs(ispeed)-ifix(dfactr*200.),damage )
	shipx = oshipx
	ishipx = shipx + .5
	shipy = oshipy
	ishipy = shipy + .5
	depth = odepth
	idepth = depth + 0.5
	ibal = -100.*(depth-18.)/16.
	ispeed = 0
	itspd = 0
	call clrlin
	call string(1,'Collision with the ^E')
	call getval(6, 0,1580,  2, ileft( ival ), 5, stname(1) )
	call getval(6, 0,1581,  2, ileft( ival ), 6, stname(2) )
	call string(3, stname, 6, 12 )
	goto 1750
C
2150	if( idepth .gt. 18 ) goto 1750
	call clrlin
	call colstr(iclred,'*** ^E')
	call pkind( kind )
	call string(1,' has hit a mine ***^E')
	call explod( ishipx, ishipy, 18, 5, iexflg )
	call putval(6, 0,1591,  1, ishipx, ishipy, iright( ival ) )
C
C***	PLACE SHIP IN HISEGMENT
C
2200	call addval(6, 0,1595,  1, ishipx, ishipy, iplayr*262144 )
	if( kind.lt.5 )
     & call putval(6, 0,1597,  2, iplayr, 7, iabs(ispeed)*5000/kind+100)
	if(kind.eq.5)call putval(6, 0,1598, 2,iplayr,7,iabs(ispeed)/10+1)
	call putval(6, 0,1599,  2, iplayr, 2, ishipx )
	call putval(6, 0,1600,  2, iplayr, 3, ishipy )
	call putval(6, 0,1601,  2, iplayr, 4, idepth )
C
C***	CHECK TO SEE IF SHIP WAS HIT BY A PORT-TO-SHIP MISSILE
C
	if( iport .eq. 1 )
     & idist = sqrt( (ishipx-iprtx2+0.)**2 + (ishipy-iprty2+0.)**2 )
	if( iport .eq. 2 )
     & idist = sqrt( (ishipx-iprtx1+0.)**2 + (ishipy-iprty1+0.)**2 )
	if( idist .ge. 25 ) goto 2300
	if( idepth .lt. 18 ) idist = idist ** ( 19-idepth )
	call getval(6, 0,1611,  3, 3-iport, 6, ival )
	if( ival .ge. 5 .or. iran(idist*3) .ne. 1 ) goto 2300
	call clrlin
	call colstr(iclred,'*** Ship hit by PTS missile ***^E')
	call hurt( kind, ihfac, 15, damage )
C
C***	INCREMENT TORPEDO & TIME COUNTERS
C
2300	if( i1torp .gt. 0 .and. damage( 5, 1 ) .eq. 0 )
     & i1torp = i1torp - 1
	if( i2torp .gt. 0 .and. damage( 6, 1 ) .eq. 0 )
     & i2torp = i2torp - 1
	iturn = iturn + 1
	iexflg = iexflg - 1
	if( iexflg .eq. 0 ) call putval(5, 0,1625,  5, 4, 0 )
2400	if( iturn .ne. 15 ) goto 2501
	iturn = 0
	eot = .not. ( eot )
C
C***	IF THE SECOND HAND IS ON THE ZERO, DECREMENT DAMAGE
C***	(INCIDENTLY, THERE ARE 15 SECONDS TO A MINUTE AROUND HERE)
C
	do 2500 i = 1, 10
	    if( damage( i, 1 ) .gt. 0 )
     &		damage( i, 1 ) = damage( i, 1 ) - 1
2500	continue
2501	continue
C
C***	UPDATE SPEED, AZIMUTH & PITCH INCREMENTS
C
	if( ispeed .gt. itspd )  ispeed = ispeed - kind
	if( ispeed .lt. itspd )  ispeed = ispeed + kind
	if( iabs(ispeed-itspd) .lt. kind ) ispeed = itspd
	inc = 2**kind
	if( ispeed .eq. 0 .and. kind .ne. 5 ) inc = 0
	if( .not. ((itaz-iaz.gt.0.and.itaz-iaz.lt.180) .or.
     & (itaz-iaz.gt.-360.and.itaz-iaz.lt.-180)) )  inc = -inc
	iaz = iaz + inc
	iaz = mod( iaz, 360 )
	if( iaz .lt. 0 )  iaz = iaz + 360
	if(iabs(iaz-itaz).lt.iabs(inc)+1.or.
     &iabs(iaz-360-itaz).lt.iabs(inc)+1) iaz = itaz
	inc = 0
	if( kind .eq. 2 .and. ispeed .ne. 0 ) inc = 10
	if( kind .eq. 5 ) inc = 20
	if( ipitch .lt. itptch ) ipitch = ipitch + inc
	if( ipitch .gt. itptch ) ipitch = ipitch - inc
	if( iabs(ipitch-itptch) .lt. inc ) ipitch = itptch
C
C***	GET ANY MESSAGES FOR THE SHIP
C
	call getval(5, 0,1662,  6, 1, ival )
	if( ival .ne. iplayr ) goto 2700
	call lock
	call putval(4, 0,1665,  -6, 0 )
	call clrlin
	call getval(5, 0,1667,  6, 3, ival )
	call chrout( ival+64 )
	call string(1,': - ^G^E')
	call getval(5, 0,1670,  6, 2, ival )
	if( ival .eq. 0 ) goto 2601
	do 2600 i = 1, ival
	    call getval(5, 0,1673,  6, i+3, icchar )
	    call chrout( icchar )
2600	continue
2601	continue
	call unlock
C
C***	DECREMENT HULL-STRESS FACTOR IF DEEP (SUBMARINE)
C
2700	if( idepth .lt. 5 .and. ihfac .ne. 100 )
     & ihfac = ihfac - 5 + idepth
	if( ihfac .lt. 0 )  ihfac = 0
	idfac = (18.0-depth) * 5.0
	if( idfac .lt. 0 )  idfac = 0
C
C********************************************************
C***	UPDATE ALL SENSORS AND SCREEN INFORMATION    ****
C********************************************************
C
C***	UPDATE TIME OF DAY
C
	call datime( i, i, i, ihour, imin, isec, i )
	call colcur( 70, 24 )
	call number(2, ihour, -2 )
	call chrout(58)
	call number(2, imin, -2 )
	call chrout(58)
	call number(2, isec, -2 )
C
C***	UPDATE SECTOR (X)
C
	if( ishipx .eq. ioshpx .and. ichar .ne. 78 ) goto 2800
	call colcur( 72, 23 )
	call number(2, ishipx, -3 )
	ioshpx = ishipx
C
C***	UPDATE SECTOR (Y)
C
2800	if( ishipy .eq. ioshpy .and. ichar .ne. 78 ) goto 2900
	call colcur( 76, 23 )
	call number(2, ishipy, -3 )
	ioshpy = ishipy
C
C***	UPDATE DEPTH (SUBMARINE,HELICOPTER)
C
2900	if((idepth.eq.iodep .and. ichar.ne.78) .or.
     & kind.ne.2 .and. kind.ne.5)goto 3000
	if( kind .eq. 2 ) call colcur( 70, 22 )
	if( kind .eq. 5 ) call colcur( 74, 22 )
	if( kind .eq. 2 ) call number(2, 18-idepth, 4 )
	if( kind .eq. 5 ) call number(2, idepth-18, 4 )
	iodep = idepth
C
C***	UPDATE RADAR AND SONAR
C
3000	if( iradr .lt. 0 ) goto 3005
	iradr = iradr + iradnc
	if( iradr .lt. 0 ) iradr = iradr + 360
	if( iradr .gt. 360 ) iradr = iradr - 360
	if( iradto .lt. 0 .or. iradnc .eq. 0 ) goto 3002
	if( iabs( iradr-iradto ) .lt. iabs(iradnc) ) iradr = iradto
	if( iabs( iradr-iradto ) .gt. 360-iabs(iradnc) ) iradr = iradto
	if( iradr .eq. iradto ) iradnc = 0
3002	call displa(ishipx,ishipy,idepth,iradr,ichar,damage,kind,iport)
	goto 3006
3005	call displa(ishipx,ishipy,idepth,iaz,ichar,damage,kind,iport)
C
C***	UPDATE SPEED
C
3006	if( ispeed .eq. iosped .and. ichar .ne. 78 ) goto 3100
	call colcur( 71, 21 )
	call number(2, ispeed, 3 )
	iosped = ispeed
C
C***	UPDATE DESIRED SPEED
C
3100	if( itspd .eq. iotspd .and. ichar .ne. 78 ) goto 3200
	call colcur( 75, 21 )
	call number(2, itspd, 3 )
	iotspd = itspd
C
C***	UPDATE AZIMUTH
C
3200	if( iaz .eq. ioaz .and. ichar .ne. 78 ) goto 3300
	call colcur( 73, 20 )
	call number(2, iaz, 3 )
	ioaz = iaz
C
C***	UPDATE DESIRED AZIMUTH
C
3300	if( itaz .eq. iotaz .and. ichar .ne. 78 ) goto 3400
	call colcur( 77, 20 )
	call number(2, itaz, 3 )
	iotaz = itaz
C
C***	UPDATE PITCH (SUBMARINE,HELICOPTER)
C
3400	if((ipitch.eq.ioptch .and. ichar.ne.78) .or.
     & (kind.ne.2 .and. kind.ne.5))goto 3450
	call colcur( 71, 19 )
	call number(2, ipitch, 3 )
	ioptch = ipitch
C
C***	UPDATE DESIRED PITCH (SUBMARINE,HELICOPTER)
C
3450	if((itptch.eq.iotpch .and. ichar.ne.78) .or.
     & (kind.ne.2 .and. kind.ne.5))goto 3500
	call colcur( 76, 19 )
	call number(2, itptch, 3 )
	iotpch = itptch
C
C***	UPDATE MINES (DESTROYER)
C
3500	if((imine.eq.iomine.and.ichar.ne.78).or.kind.ne.3)goto 3550
	call colcur( 71, 19 )
	call number(2, imine, 2 )
	iomine = imine
C
C***	UPDATE BALLAST (SUBMARINE)
C
3550	if((ibal.eq.iobal.and.ichar.ne.78).or.kind.ne.2)goto 3600
	call colcur( 73, 18 )
	call number(2, ibal, 3 )
	iobal = ibal
C
C***	UPDATE DEPTH CHARGES (DESTROYER,BATTLESHIP)
C
3600	if((idc.eq.iodc .and. ichar.ne.78) .or.
     &	(kind.ne.1 .and. kind.ne.3))goto 3650
	call colcur( 73, 18 )
	call number(2, idc, 2 )
	iodc = idc
C
C***	UPDATE MISSILE COUNT (ALL EXCEPT P.T. BOAT)
C
3650	if((imissl.eq.iomssl.and.ichar.ne.78).or.kind.eq.4)goto 3700
	call colcur( 74, 16 )
	call number(2, imissl, 2 )
	iomssl = imissl
C
C***	UPDATE TORPEDO COUNT (SUBMARINE,P.T. BOAT)
C
3700	if((itorp.eq.iotorp .and. ichar.ne.78) .or.
     &  ( kind.ne.2 .and. kind.ne.4 ))goto 3750
	call colcur( 73, 15 )
	call number(2, itorp, 3 )
	iotorp = itorp
C
C***	UPDATE AUTO FIRE SURFACE FLAG
C
3750	if((atofir.eq.ofire.and.ichar.ne.78).or.kind.ne.1) goto 3800
	call colcur( 75, 15 )
	if( atofir ) call string(1,'On ^E')
	if( .not. atofir ) call string(1,'Off^E')
	ofire = atofir
C
C***	UPDATE SOUND LEVEL
C
3800	islvl = 0
	highst = 0
	do 3900 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,1834,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 3900
	    call getval(6, 0,1836,  2, i, 2, isx )
	    call getval(6, 0,1837,  2, i, 3, isy )
	    call getval(6, 0,1838,  2, i, 4, isd )
	    dist =
     & sqrt((ishipx-isx+0.)**2 + (ishipy-isy+0.)**2 +
     & (idepth-isd+0.)**2)
	    call getval(6, 0,1842,  2, i, 7, ival )
	    sound = float(ival)/((dist+1.)**2)
	    islvl = islvl + sound
	    if( dist .eq. 0 ) goto 3900
	    if( dist .le. 5 .and. atofir .and. isd .ge. 18 )
     &		call putval(6, 0,1847,  2, i, 8, 11 )
	    if( sound .le. highst ) goto 3900
	    ideg = 90
	    if( ishipx .eq. isx .and. isy .lt. ishipy ) ideg = 270
	    if( ishipx .ne. isx ) ideg =
     &		180.*atan(1.*(ishipy-isy)/(1.*(ishipx-isx)))/3.14159
	    if( ishipx .gt. isx ) ideg = ideg + 180
	    ideg = mod( ideg, 360 )
	    if( ideg .lt. 0 ) ideg = ideg + 360
	    highst = sound
3900	continue
	if( iabs(ispeed)*2 .ge. ifix(highst)) ideg = 100000
C
	if( islvl .eq. ioslvl .and. ichar .ne. 78 ) goto 3950
	call colcur( 69, 17 )
	call number(2, islvl, 5 )
	ioslvl = islvl
C
3950	if( ideg .eq. iodeg .and. ichar .ne. 78 ) goto 4000
	call colcur( 76, 17 )
	call number(2, ideg, 3 )
	iodeg = ideg
C
C***	UPDATE HULL-STRESS FACTOR (SUBMARINE)
C
4000	if((ihfac.eq.iohfac.and.ichar.ne.78).or.kind.ne.2)goto 4100
	call colcur( 70, 14 )
	call number(2, ihfac, 3 )
	iohfac = ihfac
C
C***	UPDATE STRESS WATER IS EXERTING (SUBMARINE)
C
4100	if((idfac.eq.iodfac.and.ichar.ne.78).or.kind.ne.2)goto 4200
	call colcur( 71, 13 )
	call number(2, idfac, 3 )
	iodfac = idfac
C
C***	UPDATE NUMBER OF HITS ON PORT # 1
C
4200	call getval(6, 0,1886,  3, 1, 6, ipk1 )
	if( ipk1 .eq. iopk1 .and. ichar .ne. 78 ) goto 4300
	call colcur( 79, 11 )
	call number(2, ipk1, 1 )
	if( iport .ne. 1 .or. ipk1 .le. iopk1 ) goto 4250
	call clrlin
	call colstr(iclred,'*** EMERGENCY:  Port has been hit ***^E')
4250	iopk1 = ipk1
C
C***	UPDATE SHIPS BELONGING TO PORT # 1
C
4300	call getval(6, 0,1897,  3, 1, 5, ip1 )
	if( ip1 .eq. iop1 .and. ichar .ne. 78 ) goto 4500
	call colcur( 64, 10 )
	do 4400 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,1902,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 4400
	    call getval(6, 0,1904,  2, i, 9, ival )
	    if( ival .ne. 1 ) goto 4400
	    call chrout( i+64 )
4400	continue
	if( ip1 .lt. iop1 )  call string(1,'  ^E')
	iop1 = ip1
C
C***	UPDATE NUMBER OF HITS ON PORT # 2
C
4500	call getval(6, 0,1913,  3, 2, 6, ipk2 )
	if( ipk2 .eq. iopk2 .and. ichar .ne. 78 ) goto 4600
	call colcur( 79, 8 )
	call number(2, ipk2, 1 )
	if( iport .ne. 2 .or. ipk1 .le. iopk1 ) goto 4550
	call clrlin
	call colstr(iclred,'*** EMERGENCY:  Port has been hit ***^E')
4550	iopk2 = ipk2
C
C***	UPDATE SHIPS BELONGING TO PORT # 2
C
4600	call getval(6, 0,1924,  3, 2, 5, ip2 )
	if( ip2 .eq. iop2 .and. ichar .ne. 78 ) goto 4800
	call colcur( 64, 7 )
	do 4700 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,1929,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 4700
	    call getval(6, 0,1931,  2, i, 9, ival )
	    if( ival .ne. 2 ) goto 4700
	    call chrout( i+64 )
4700	continue
	if( ip2 .lt. iop2 )  call string(1,'  ^E')
	iop2 = ip2
C
C***	DECREMENT PORT REPAIR STATES IF THIS IS THE LAST JOB PLAYING
C
4800	do 4900 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,1942,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 4900
	    lastjb = i
	    if( .not. logdin(ival) ) goto 4850
	    if( job(-1) .eq. 0 ) goto 4900
	    if( jstat( ival ) .eq. isxbit('^C~') ) goto 4850
	    if(	itty( ival ) .ge. 0 ) goto 4900
4850	    call endhim( i )
4900	continue
	if( iturn .ne. 0 .or. lastjb .ne. iplayr .or. eot ) goto 5000
	call getval(6, 0,1952,  3, 1, 6, ival )
	if( ival .ne. 0 )  call addval(4, 0,1953,  -3, -1 )
	call getval(6, 0,1954,  3, 2, 6, ival )
	if( ival .ne. 0 )  call addval(4, 0,1955,  -3, -1 )
C
C***	UPDATE DAMAGE
C
5000	do 5100 i = 1, 10
	    if( kind .eq. 1 .and. (i .eq. 6 .or. i .eq. 9 )) goto 5100
	    if( kind .eq. 3 .and. (i .eq. 5 .or. i .eq. 6 ) ) goto 5100
	    if( kind .eq. 4 .and. i .gt. 6 .and. i .lt. 10 ) goto 5100
	    if( kind .eq. 5 .and. i .ne. 1 .and. i .ne. 3 .and.
     &		i .ne. 4 .and. i .ne. 7 .and. i .ne. 10 ) goto 5100
	    if(damage(i,1).eq.damage(i,2) .and. ichar.ne.78)goto 5100
	    call colcur( -2+i*8, 3 )
	    if( damage( i, 1 ) .ne. 0 ) goto 5050
	    call pcolor( iclgre )
	    call chrout(79)
	    goto 5090
5050	    if( damage( i, 1 ) .ne. -1 ) goto 5060
	    call pcolor( iclpur )
	    call chrout(80)
	    goto 5090
5060	    if( damage( i, 1 ) .gt. 1 ) call pcolor( iclred )
	    if( damage( i, 1 ) .eq. 1 ) call pcolor( iclyel )
	    call number(2, damage( i, 1 ), 1 )
	    goto 5090
5090	    damage( i, 2 ) = damage( i, 1 )
5100	continue
C
C***	UPDATE NUMBER OF SECONDS UNTIL TORPEDOS ARE READY
C***	(SUBMARINE,P.T. BOAT)
C
	if((i1torp.eq.io1trp .and. ichar.ne.78) .or.
     & ( kind.ne.2 .and. kind.ne.4 ))goto 5200
	call colcur( 73, 5 )
	if( i1torp .gt. 0 )  call number(2, i1torp, 3 )
	if( i1torp .gt. 0 )  call string(1,'  ^E')
	if( i1torp .eq. 0 )  call string(1,'Ready^E')
	io1trp = i1torp
C
5200	if((i2torp.eq.io2trp .and. ichar.ne.78) .or.
     & ( kind.ne.2 .and. kind.ne.4 ))goto 5300
	call colcur( 73, 4 )
	if( i2torp .gt. 0 )  call number(2, i2torp, 3 )
	if( i2torp .gt. 0 )  call string(1,'  ^E')
	if( i2torp .eq. 0 )  call string(1,'Ready^E')
	io2trp = i2torp
C
C***	CHECK TO SEE IF THIS JOB IS STILL IN THE DATA BASE
C***	IF IT ISN'T, THEN SOMETHING IS VERY WRONG ... EXIT
C
5300	call getval(6, 0,2004,  2, iplayr, 1, ijob )
	if( ijob .eq. job(0) ) goto 5400
	call clrscr
	call string
     & (1,'Your job has been removed from the database.^M^J^E')
	call close( 1 )
	call pstop
C
C
C*********************************
C***	GET USER'S COMMAND    ****
C*********************************
C
5400	call outbuf( 1 )
	call comand( ichar, comara, index )
C
	if( ichar .eq. -1 ) goto 1100
C
	call clrlin
C
C***	GET ANY NUMBERS THERE MAY BE IN IT
C
	call getnum
     &(10, comara, index, ifac1, 10, ifac2, 10, ifac3, 10, ifac4, 10 )
C
C***	EXIT (USEFULL)
C
	if( ichar .ne. 69 .or. comara(2) .ne. 88 ) goto 5500
	call cease( ishipx, ishipy, iplayr )
C
C***	NEW SCREEN (NO-OP)
C
5500	if( ichar .eq. 78 .and. index .le. 1 ) goto 1100
C
C***	ALLOW USER TO CHANGE SHIP NAME
C
	if( ichar .ne. 78 ) goto 5550
	stname(1) = 0
	stname(2) = 0
	call convrt( comara(2), index-1, 1, stname, 6 )
	call putval(6, 0,2043,  2, iplayr, 5, stname(1) )
	call putval(6, 0,2044,  2, iplayr, 6, stname(2) )
	ichar = 0
	goto 1100
C
C***	ALLOW USER TO SET KIND IF HE ENTERS A PORT.
C
5550	if(ichar.ne.75.or.notfrs.or.ifac1.lt.1.or.ifac1.gt.5)goto 5600
	if( kind .eq. ifac1 ) goto 1100
	if( kind .eq. 5 .or. ifac1 .eq. 5 ) goto 5551
	nkind = ifac1
	goto 1100
C
5551	call clrlin
	call string(1,'*** ^E')
	call pkind( kind )
	call string(1,' may not become a ^E')
	call pkind( ifac1 )
	call string(1,' ***^E')
	goto 1100
C
C***	SONAR CONTROL
C
5600	if( ichar .ne. 83 .or. comara(2) .ne. 67 ) goto 5650
	iradr = mod( mod( ifac1, 360 )+360, 360 )
	if( index .eq. 2 ) iradr = -1
	iradnc = 0
	goto 1100
C
5650	if( ichar .ne. 83 .or. comara(2) .ne. 87 ) goto 5700
	iradto = mod( mod( ifac1, 360 )+360, 360 )
	if( iradr .lt. 0 ) iradr = iaz
	call allcap( comara, 3 )
	if( comara(3) .eq. 67 ) iradnc = ifac1
	if( comara(3) .ne. 67 ) iradnc = ifac2
	if( iradnc .eq. 0 ) iradnc = 3
	if( iabs( iradnc ) .gt. 359 ) iradnc = mod( iradnc, 360 )
	if( comara(3) .eq. 67 ) iradto = -1
	goto 1100
C
C***	HELM CONTROL
C
5700	if( ichar .ne. 65 ) goto 5900
	if( damage( 2, 1 ) .ne. 0 ) goto 5800
	itaz = mod( ifac1, 360 )
	if( itaz .lt. 0 )  itaz = itaz + 360
	goto 1100
C
5800	call colstr(iclyel,'*** Helm does not respond ***^E')
	goto 1100
C
C***	PITCH CONTROL (SUBMARINE, HELICOPTER)
C
5900	if( ichar .ne. 80 .or. (kind.ne.2.and.kind.ne.5)) goto 6100
	if( damage( 8, 1 ) .ne. 0 ) goto 6000
	itptch = ifac1
	if( iabs(itptch) .gt. 90 ) itptch = sign(1.,itptch*1.)*90.
	if( iabs(itptch) .gt. 45 .and. kind .ne. 5 )
     & itptch = sign(1.,itptch*1.)*45.
	goto 1100
C
6000	call colstr(iclyel,'*** Pitch control does not respond ***^E')
	goto 1100
C
C***	BALLAST CONTROL (SUBMARINE)
C
6100	if( ichar .ne. 66 .or. kind .ne. 2 ) goto 6300
	if( damage( 9, 1 ) .ne. 0 ) goto 6200
	ibal = ifac1
	if( index .eq. 1 )  ibal = -100.*(depth-18.)/16.
	if( ibal .lt. 0 )  ibal = 0
	if( ibal .gt. 100 )  ibal = 100
	goto 1100
C
6200	call colstr(iclyel,
     & '*** Ballast control does not respond ***^E')
	goto 1100
C
C***	SPEED CONTROL
C
6300	if( ichar .ne. 83 ) goto 6500
	if( damage( 1, 1 ) .ne. 0 ) goto 6400
	itspd = ifac1
	if( itspd .gt. 10*kind ) itspd = 10*kind
	if( itspd .lt. -5*kind )  itspd = -5*kind
	goto 1100
C
6400	call colstr(iclyel,'*** Engines do not respond ***^E')
	goto 1100
C
C***	GET INFORMATION ABOUT OTHER USERS
C
6500	if( ichar .ne. 87 ) goto 6700
	if( index .eq. 1 ) goto 6550
	icchar = icon( comara(2) ) - 64
	if( icchar .lt. 1 .or. icchar .gt. 26 ) goto 6600
	call getval(6, 0,2139,  2, icchar, 1, ival )
	if( ival .eq. 0 ) goto 6600
	call who( icchar )
	goto 1100
C
6550	do 6560 itemp = 1, 26
	    i = itemp
	    call getval(6, 0,2146,  2, i, 1, ival )
	    if( ival .eq. 0 ) goto 6560
	    call getval(6, 0,2148,  2, i, 9, ival )
	    if( ival .ne. iport ) goto 6560
	    call chrout( i+64 )
	    call chrout(47)
	    call getval(6, 0,2152,  2, i, 10, ival )
	    if( ival .eq. 1 ) call chrout(66)
	    if( ival .eq. 2 ) call chrout(83)
	    if( ival .eq. 3 ) call chrout(68)
	    if( ival .eq. 4 ) call chrout(80)
	    if( ival .eq. 5 ) call chrout(72)
	    call chrout(58)
	    call getval(6, 0,2159,  2, i, 2, ix )
	    call number(2, ix, -3 )
	    call chrout(45)
	    call getval(6, 0,2162,  2, i, 3, iy )
	    call number(2, iy, -3 )
	    call chrout(59)
	    call getval(6, 0,2165,  2, i, 4, id )
	    call number(1, id-18 )
	    call chrout(32)
6560	continue
	goto 1100
C
6600	call colstr(iclyel,'Ship does not exist.^E')
	goto 1100
C
C***	GAG USER
C
6700	if( ichar .ne. 71 ) goto 6800
	call usrset( 1035, 0 )
	goto 1100
C
C***	TORPEDO CONTROL
C
6800	if( ichar.ne.84 .or. ( kind.ne.2 .and. kind.ne.4 )) goto 7500
	if( itorp .eq. 0 ) goto 7300
	inc = 1
	if( damage( 5, 1 ) .ne. 0 .or. i1torp .ne. 0 ) inc = -1
	if( damage( 6, 1 ) .ne. 0 .and. inc .eq. -1 ) goto 7200
	if( inc .lt. 0 .and. i2torp .ne. 0 ) goto 7100
	if( inc .lt. 0 )  i2torp = 10
	if( inc .gt. 0 )  i1torp = 10
	itorp = itorp - 1
	torpx = shipx
	torpy = shipy
	torpd = depth
	itp = ipitch
	iter = 0
6900	iter = iter + 1
	if( iter .gt. 25 ) goto 7450
	torpx = torpx + smcos(float(iaz))*cosdeg(float(itp))
	itorpx = torpx + 0.5
	torpy = torpy + smsin(float(iaz))*cosdeg(float(itp))
	itorpy = torpy + 0.5
	torpd = torpd + sindeg(float(itp))
	if( torpd .gt. 18 )  itp = 0
	if( torpd .gt. 18 )  torpd = 18
	itorpd = torpd + 0.5
	if( kind .eq. 2 ) itp = itp - inc
	if( itorpx .eq. ishipx .and. itorpy .eq. ishipy ) goto 6900
	call getval(6, 0,2208,  1, itorpx, itorpy, ival )
	if( iright( ival ) .ge. itorpd ) goto 7400
	if( ileft( ival ) .eq. 0 .or. ileft( ival ) .gt. 26 ) goto 6900
	call getval(6, 0,2211,  2, ileft( ival ), 4, ival1 )
	if( itorpd .ne. ival1 ) goto 6900
	call string(1,'Torpedo at ^E')
	call number(2, itorpx, -3 )
	call chrout(45)
	call number(2, itorpy, -3 )
	call string(1,' at depth ^E')
	call number(1, 18-itorpd )
	call string(1,' strikes the ^E')
	call getval(6, 0,2220,  2, ileft( ival ), 5, stname(1) )
	call getval(6, 0,2221,  2, ileft( ival ), 6, stname(2) )
	call string(3, stname, 6, 12 )
	call explod( itorpx, itorpy, itorpd, 3, iexflg )
	call putval(6, 0,2224,  2, ileft( ival ), 8, 10 )
	goto 1100
C
7100	call colstr(iclyel,'*** Torpedo is not ready for firing ***^E')
	goto 1100
C
7200	call colstr(iclyel,'*** Torpedo tube does not respond ***^E')
	goto 1100
C
7300	call colstr(iclyel,'*** All torpedos are expended. ***^E')
	goto 1100
C
7400	call colstr(icllbl,'Torpedo at ^E')
	call number(2, itorpx, -3 )
	call chrout(45)
	call number(2, itorpy, -3 )
	call string(1,' at depth ^E')
	call number(1, 18-itorpd )
	call string(1,' strikes rock^E')
7450	call explod( itorpx, itorpy, itorpd, 3, iexflg )
	goto 1100
C
C***	COMMUNICATIONS CONTROL
C
7500	if( ichar .ne. 82 ) goto 7850
	irec = icon( comara(2) ) - 64
	if( irec .lt. 1 .or. irec .gt. 26 ) goto 7800
	call getval(6, 0,2251,  2, irec, 1, ival )
	if( ival .eq. 0 ) goto 7800
	iterat = 0
7600	call getval(5, 0,2254,  6, 1, ival )
	if( ival .ne. 0 ) call nap( 1000, 4 )
	call unlock
	call lock
	call putval(4, 0,2258,  -6, irec )
	call putval(5, 0,2259,  6, 2, index-2 )
	if( index .gt. 60 )  call putval(5, 0,2260,  6, 2, 60 )
	call putval(5, 0,2261,  6, 3, iplayr )
	if( index .lt. 3 ) goto 7701
	do 7700 i = 1, index-2
	    if( i .le. 60 )  call putval(5, 0,2264,  6, 3+i, comara(i+2) )
7700	continue
7701	continue
	call unlock
	goto 1100
C
7800	call colstr(iclyel,
     & '*** Frequency is not known for that ship ***^E')
	goto 1100
C
C***	COMPUTER CONTROL (BATTLESHIPS)
C
7850	if( ichar .ne. 67 .or. kind .ne. 1 ) goto 7900
	if( damage( 5, 1 ) .ne. 0 ) goto 7890
	call string(1,'Computer:  ^E')
	if( comara(2) .ne. 71 ) goto 7860
	if( damage( 10, 1 ) .ne. 0 ) goto 7855
	atofir = (.not. atofir)
	if( atofir ) call string(1,'Automatic fire initiated^E')
	if( .not. atofir ) call string(1,'Automatic fire halted^E')
	goto 1100
C
7855	call colstr(iclyel,'*** Surface guns do not respond ***^E')
	goto 1100
C
7860	call number(2, ifac1, -3 )
	call chrout(45)
	call number(2, ifac2, -3 )
	call string(1,' Alt: ^E')
	call number(1, ifac3 )
	ifac3 = ifac3 + 18
	degree = 90.
	if( ishipx .eq. ifac1 .and. ishipy .gt. ifac2 ) degree = 270.
	if( ishipx .ne. ifac1 )
     & degree=180.*atan(1.*(ishipy-ifac2)/(1.*(ishipx-ifac1)))/3.14159
	if( ishipx .gt. ifac1 ) degree = degree + 180.
	if( newang ) degree = 90 - degree
7862	if( degree.lt.360 .and. degree.ge. 0 ) goto 7865
	if( degree .ge. 360 ) degree = degree - 360.
	if( degree .lt.   0 ) degree = degree + 360.
	goto 7862
7865	call string(1,'  Azim: ^E')
	call number(4, degree, 3, 10, 0 )
	call string(1,'  Elev: ^E')
	if( ishipx .eq. ifac1 .and. ishipy .eq. ifac2 ) goto 7870
	dist = sqrt((ishipx-ifac1+0.)**2 + (ishipy-ifac2+0.)**2)
	a = -0.05
	v = 1.
	radicl =
     & 1-4.*(.5*a*dist/(v**2))*(.5*a*dist/(v**2)-(idepth-ifac3)/dist)
	if( radicl .lt. 0 ) goto 7880
	atarg1 = ( -1. + sqrt(radicl))/(a*dist/(v**2))
	atarg2 = ( -1. - sqrt(radicl))/(a*dist/(v**2))
	elev1 = 180.*atan( atarg1 )/3.14159 + .5
	elev2 = 180.*atan( atarg2 )/3.14159 + .5
	call number(4, elev1, 4, 10, 1 )
	if( ifix(elev1) .eq. ifix(elev2) ) goto 7885
	call string(1,' or ^E')
	call number(4, elev2, 4, 10, 1 )
	goto 7885
C
7870	call string(1,'90.00^E')
	goto 7885
C
7880	call string(1,'Unknown^E')
C
7885	call string(1,'  Dist: ^E')
	dist =
     & sqrt((ishipx-ifac1+0.)**2+(ishipy-ifac2+0.)**2
     & +(idepth-ifac3+0.)**2)
	call number(4, dist, 6, 10, 1 )
	goto 1100
C
7890	call colstr(iclred,'%Battle computer being reloaded^E')
	goto 1100
C
C***	MISSILE CONTROL (ALL EXCEPT P.T. BOAT)
C
7900	if( ichar .ne. 77 .or. kind .eq. 4 ) goto 8910
	if( imissl .eq. 0 ) goto 8600
	if( damage( 7, 1 ) .lt. 0 ) goto 8900
	if( damage( 7, 1 ) .gt. 0 ) goto 8700
	if(kind.ne.5.and.(ifac2.lt.1.or.ifac2.gt.89))goto 8800
	if( ifac2 .gt. 89 .or. ifac2 .lt. -89 ) goto 8800
	if( index .eq. 1 ) ifac1 = iaz
	if( index .eq. 1 ) ifac2 = -89
	imissl = imissl - 1
	damage( 7, 1 ) = 1
	xmissl = shipx
	ymissl = shipy
	dmissl = depth
	xvel = smcos(float(ifac1))*cos(0.017453293 * ifac2)
	yvel = smsin(float(ifac1))*cos(0.017453293 * ifac2)
	zvel = sindeg(float(ifac2))
C
8000	xmissl = xmissl + xvel
	misslx = xmissl + 0.5
	ymissl = ymissl + yvel
	missly = ymissl + 0.5
	dmissl = dmissl + zvel
	missld = dmissl + 0.5
	zvel = zvel - 0.05
C
	if(misslx.lt.1.or.misslx.gt.120.or.missly.lt.1.or.
     & missly.gt.120) goto 8500
	call getval(6, 0,2369,  1, misslx, missly, ival )
	if( iright( ival ) .ge. missld ) goto 8100
	if( ileft( ival ) .eq. 0 .or. ileft( ival ) .eq. iplayr .or.
     & ileft( ival ) .gt. 26 ) goto 8000
	call getval(6, 0,2373,  2, ileft( ival ), 4, ival1 )
	if( missld .ne. ival1 ) goto 8000
	call string(1,'Missile at ^E')
	call number(2, misslx, -3 )
	call chrout(45)
	call number(2, missly, -3 )
	call string(1,' at altitude ^E')
	call number(1, missld-18 )
	call colstr(icllbl,' strikes the ^E')
	call getval(6, 0,2382,  2, ileft( ival ), 5, stname(1) )
	call getval(6, 0,2383,  2, ileft( ival ), 6, stname(2) )
	call string(3, stname, 6, 12 )
	if(kind.ne.5)call putval(6, 0,2385,  2, ileft( ival ), 8, 20 )
	if(kind.eq.5)call putval(6, 0,2386,  2, ileft( ival ), 8, 5 )
	if(kind.ne.5)call explod( misslx, missly, missld, 6, iexflg )
	if(kind.eq.5)call explod( misslx, missly, missld, 2, iexflg )
	goto 1100
C
8100	call string(1,'Missile at ^E')
	call number(2, misslx, -3 )
	call chrout(45)
	call number(2, missly, -3 )
	call string(1,' at altitude ^E')
	call number(1, missld-18 )
	if( misslx .eq. iprtx1 .and. missly .eq. iprty1 ) goto 8200
	if( misslx .eq. iprtx2 .and. missly .eq. iprty2 ) goto 8300
	call colstr(iclyel,' pulverizes a rock^E')
	if(kind.ne.5)call explod( misslx, missly, missld, 6, iexflg )
	if(kind.eq.5)call explod( misslx, missly, missld, 2, iexflg )
	goto 1100
C
8200	if(kind.ne.5)call addval(6, 0,2404,  3, 1, 6, 1 )
	call colstr(icllbl,' strikes the port of ^E')
	call getval(6, 0,2406,  3, 1, 1, stname(1) )
	call getval(6, 0,2407,  3, 1, 2, stname(2) )
	call string(3, stname, 6, 12 )
	if(kind.ne.5)call explod( misslx, missly, missld, 6, iexflg )
	if(kind.eq.5)call explod( misslx, missly, missld, 2, iexflg )
	if( iport .eq. 1 ) goto 8400
	goto 1100
C
8300	if(kind.ne.5)call addval(6, 0,2414,  3, 2, 6, 1 )
	call colstr(iclred,' strikes the port of ^E')
	call getval(6, 0,2416,  3, 2, 1, stname(1) )
	call getval(6, 0,2417,  3, 2, 2, stname(2) )
	call string(3, stname, 6, 12 )
	if(kind.ne.5)call explod( misslx, missly, missld, 6, iexflg )
	if(kind.eq.5)call explod( misslx, missly, missld, 2, iexflg )
	if( iport .ne. 2 ) goto 1100
C
8400	idfect = idfect + 1
	if( idfect .gt. 1 ) goto 9100
	call clrlin
	call colstr(icllbl,'**** You have defected ****^E')
	call addval(6, 0,2427,  3, iport, 5, -1 )
	iport =3-iport
	call addval(6, 0,2429,  3, iport, 5, 1 )
	call putval(6, 0,2430,  2, iplayr, 9, iport )
	goto 1100
C
8500	call string(1,'Missile at ^E')
	call number(2, misslx, -3 )
	call chrout(45)
	call number(2, missly, -3 )
	call string(1,' at altitude ^E')
	call number(1, missld-18 )
	call string(1,' leaves radar range^E')
	goto 1100
C
8600	call colstr(iclyel,'*** All missiles are expended ***^E')
	goto 1100
C
8700	call colstr(iclyel,'*** Missile station not armed ***^E')
	goto 1100
C
8800	call colstr(iclyel,
     & '*** Cannot launch missile on extreme elevation ***^E')
	goto 1100
C
8900	call colstr(iclyel,
     & '*** Missile launcher does not respond ***^E')
	goto 1100
C
C***	MINE CONTROL (DESTROYER)
C
8910	if( ichar .ne. 76 .or. kind .ne. 3 ) goto 9000
	if( imine .eq. 0 ) goto 8980
	if( damage( 9, 1 ) .ne. 0 ) goto 8970
	imine = imine - 1
	ix = shipx - smcos( float(iaz) ) + 0.5
	iy = shipy - smsin( float(iaz) ) + 0.5
	if
     &( ix .lt. 1 .or. ix .gt. 120 .or. iy .lt. 1 .or. iy .gt. 120 )
     & goto 8960
	call getval(6, 0,2467,  1, ix, iy, ival )
	if( ival .gt. 17 ) goto 8960
	call putval(6, 0,2469,  1, ix, iy, icomb( 26+iport, ival ) )
	goto 1100
C
8960	call explod( ix, iy, 18, 3, iexflg )
	goto 1100
C
8970	call colstr(iclyel,'*** Mine control does not respond ***^E')
	goto 1100
C
8980	call colstr(iclyel,'*** All mines are expended. ***^E')
	goto 1100
C
C***	DEPTH CHARGE CONTROL (DESTROYER,BATTLESHIP)
C
9000	if( ichar .ne. 68 .or.
     & ( kind.ne.1 .and. kind .ne. 3 )) goto 9050
	if( idc .eq. 0 ) goto 9040
	if( damage( 8, 1 ) .ne. 0 ) goto 9030
	inc = 3
	if( comara( 2 ) .eq. 83 ) inc = -3
	idc = idc - 1
	ifac1 = 18 - ifac1
	if( ifac1 .ge. 18 .or. ifac1 .lt. 1 ) ifac1 = 1
	ix = shipx + smcos( float(iaz) )*inc + 0.5
	iy = shipy + smsin( float(iaz) )*inc + 0.5
	call getval(6, 0,2494,  1, ix, iy, ival )
	if( iright( ival ) .ge. ifac1 ) ifac1 = iright( ival )
	call explod( ix, iy, ifac1, 4, iexflg )
	goto 1100
C
9030	call colstr(iclyel,
     & '*** Depth charge control does not respond ***^E')
	goto 1100
C
9040	call colstr(iclyel,
     & '*** All depth charges are expended. ***^E')
	goto 1100
C
C***	GUN CONTROL (BATTLESHIP,DESTROYER,P.T. BOAT,HELICOPTER)
C
9050	if(ichar.ne.70 .or. kind .eq. 2 ) goto 9090
	if( damage( 10, 1 ) .ne. 0 ) goto 9080
C
	gx = smcos( float(ifac1) )
	gy = smsin( float(ifac1) )
C
	itemp = 5
	if( kind .eq. 1 ) itemp = 7
	if( kind .eq. 5 ) itemp = 3
9060	do 9070 i = 1, itemp
	    ix = float(ishipx) + gx*i + 0.5
	    iy = float(ishipy) + gy*i + 0.5
	    if( ix.lt.1 .or. ix.gt.120 .or. iy.lt.1 .or. iy.gt.120 ) 
     &		goto 9070
	    call getval(6, 0,2523,  1, ix, iy, ival )
	    ival = ileft( ival )
	    if( ival .ne. 0 .and. ival .ne. iplayr .and. ival .le. 26 )
     &	    goto 9075
9070	continue
	call string(1,'*** Shells fall harmlessly ***^E')
	goto 1100
C
9075	call getval(6, 0,2531,  2, ival, 4, ifac2 )
	if( ifac2 .lt. 18 ) goto 9070
	if( kind .eq. 5 .and. iabs( ifac2-idepth ) .gt. 1 ) goto 9070
	call string(1,'Shells strike the ^E')
	call getval(6, 0,2535,  2, ival, 5, stname(1) )
	call getval(6, 0,2536,  2, ival, 6, stname(2) )
	call string(3, stname, 6, 12 )
	call putval(6, 0,2538,  2, ival, 8, itemp*2+1 )
	goto 1100
C
9080	call colstr(iclyel,'*** Surface guns do not respond ***^E')
	goto 1100
C
C***	DEBUGGING FEATURES (EXPLODE, EDIT)
C
9090	if( ichar .ne. 69 .or. .not. debug ) goto 9095
	if( comara(2) .eq. 68 ) call edit( comara(3), index-2 )
	if( comara(2) .eq. 68 ) goto 1100
	ifac3 = ifac3 + 18
	call allcap( comara, 3 )
	ivic = icon( comara(3) ) - 64
	if( ivic .lt. 1 .or. ivic .gt. 26 ) goto 9094
	call getval(6, 0,2553,  2, ivic, 2, inc )
	ifac1 = ifac1 + inc
	call getval(6, 0,2555,  2, ivic, 3, inc )
	ifac2 = ifac2 + inc
	call getval(6, 0,2557,  2, ivic, 4, inc )
	ifac3 = ifac3 + inc - 18
9094	call explod( ifac1, ifac2, ifac3, ifac4, iexflg )
	goto 1100
C
C***	IF NONE OF THE ABOVE, COMMAND IS ILLEGAL
C
9095	call colcur( 1, 2 )
	call colstr(iclyel,'*** Illegal command "^E')
	call chrout( ichar )
	call string(1,'" ***^E')
	goto 1100
C
C***	USER HAS DEFECTED TWICE.  KILL HIM
C
9100	call clrlin
	call colstr(iclred,
     & '*** You have been exterminated by your past allies
     & for defecting ***^E')
	call cease( ishipx, ishipy, iplayr )
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
