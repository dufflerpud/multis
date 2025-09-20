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

	subroutine fmain

	implicit integer ( b - w )

	integer comara( 80 ), par( 20 ), filspc( 13 ), screen( 960 )
	integer comlst( 5 )
	real x, y, z, azim, aelv, arol, arng
	logical new, iniflg, newang

	common/nhcom/newang
	common /names/ useful, inuse, coord, size, numobj

	data new/.true./, arng/100.0/, x,y,z/5000.0,5000.0,5000.0/

	if( comlst(1) .ne. 0 ) goto 100
	comlst(1) = isxbit('EXIT~')	! isxbit('EXIT  ~')
	comlst(2) = isxbit('NEW~')	! isxbit('NEW   ~')
	comlst(3) = isxbit('POSITI~')	! isxbit('POSITI~')
	comlst(4) = isxbit('PROJEC~')	! isxbit('PROJEC~')
	comlst(5) = isxbit('RANGE~')	! isxbit('RANGE ~')
100	continue

	call settty( comara, par, ilen, privd, filspc )	! init graphics
	do 105 i=1, ilen
    	    if( par(i) .eq. isxbit('NEWANG~') ) newang=.true.
105	continue

	call check( iniflg )
	if( iniflg ) call initdb
	call defscr( 1, screen )
	continue ! call ctrap
c	    call cease
	call grafon
	call setdis( 1 )

1000	call cube( new, x,y,z, azim,aelv,arol, arng )
	if( new ) call newscr( 1 )
	if( .not. new ) call update( 1 )
	call clrlin
	new = .false.

	call setdis( 0 )
	call comand( ichar, comara, ilen )
	call setdis( 1 )
	if( ichar .eq. -1 .or. ilen .eq. 0 ) goto 1000
	call parse( comara, ilen, par, plen, 20 )
	if( plen .eq. 0 ) goto 1000
	if( plen .lt. 20 ) call arfill( par(plen+1), 20-plen, 0 )
	icom = isrsix( comlst, par(1), 5 )
	if( icom .gt. 0 ) goto( 1100, 1200, 1300, 1400, 1500 ) icom
	if( icom .lt. 0 ) call messag('Ambiguous^E')
	if( icom .eq. 0 ) call messag('Unknown^E')
	call string(1,' command ^E')
	call string(3, par(1), 6, -6 )
	call chrout(46)
	goto 1000

1100	call cease

1200	new = .true.
	goto 1000

1300	call getnum(8, comara, ilen, itorx, 10, itory, 10, itorz, 10 )
	x = itorx
	y = itory
	z = itorz
	goto 1000

1400	call getnum(8, comara, ilen, iazim, 10, iaelv, 10, iarol, 10 )
	axim = iazim
	aelv = iaelv
	arol = iarol
	goto 1000

1500	call getnum(4, comara, ilen, iarng, 10 )
	arng = iarng
	goto 1000

	end
C
	subroutine initdb

	implicit integer ( b - w )

	common /names/ useful, inuse, coord, size, numobj

	data useful, inuse, coord, size/1,2,3,4/
	data numobj/1/
	data nobj/100/

	call init(5, 0,129,  useful, 36, 1 )
	call init(5, 0,130,  inuse, 1, 200 )
	call init(6, 0,131,  coord, 36, 200, 3 )
	call init(5, 0,132,  size, 36, 200 )

	do 100 i = 1, nobj
	    iobj = newobj(.false.)
	    call putval(6, 0,136,  coord, iobj, 1, iran(10000)+0.0 )
	    call putval(6, 0,137,  coord, iobj, 2, iran(10000)+0.0 )
	    call putval(6, 0,138,  coord, iobj, 3, iran(10000)+0.0 )
	    call putval(5, 0,139,  size, iobj, iran(100)+0.0 )
100	continue
	call putval(5, 0,141,  useful, numobj, nobj )
	call unlock
	return
	end
C
	subroutine bug( array )

C***	THIS PROCEDURE PRINTS OUT ERROR MESSAGES IN THE STRING ARRAY.

	integer array( 1 ), value	! array and value to print

	call setdis( 0 )		! make sure normal i/o
	call cursor( 1, 1 )		! message at lower left
	call string(1,'^M^J%BUG ^E')	! print header
	call string(1, array )		! print lerror message
	call string(1,'^M^J^B')		! dump the buffer
	call grafof			! reset the terminal
	call pstop			! and exit
	end
C
	integer function newobj( lockit )

	implicit integer ( a - z )

	logical lockit

	common /names/ useful, inuse, coord, size, numobj

	if( lockit ) call lock
	call getval(5, 0,168,  useful, numobj, maxobj )
	if( lockit ) goto 101
	do 100 i = 1, maxobj
	    iobj = i
	    call getval(5, 0,172,  inuse, iobj, ival )
	    if( ival .eq. 0 ) goto 200
100	continue
101	continue
	iobj = maxobj + 1
	call putval(5, 0,177,  useful, numobj, iobj )
200	call putval(5, 0,178,  inuse, iobj, 1 )
	newobj = iobj
	return
	end
C
	subroutine messag( array )

	integer array( 7 ), numthr

	if( numthr .le. 0 ) goto 100
	call cursor( 45, 2 )
	call irepeat( 32, 35 )
100	call cursor( 45, 2 )
	call string(1, array )
	numthr = 10
	return

	entry clrlin

	numthr = numthr - 1
	if( numthr .ne. 0 ) return
	call cursor( 45, 2 )
	call irepeat( 32, 35 )
	return
	end
C
	subroutine cease

	call grafof
	call setdis( 0 )
	call clrscr
	call close( 1 )
	call exprog
	end
C
	subroutine comand( ichar, comara, arrind )
C***
C***	ROUTINE GET COMMAND FROM USER IF ONE PRESENT.
C***
	integer comara(80), index, arrind, ichar, numtim
	data index/0/
C***
C***	IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR
C***	0.5 SECONDS OR UNTIL ONE IS.
C***
	numtim = 0
100	ichar = -1
	if( numtim .gt. 10 ) return
	numtim = numtim + 1
	call curbuf
	call nap( 1000, 12 )     
	call chrbuf( ichar )
	if( ichar .eq. -1 )  return
	if( ichar .eq. 8 .or. ichar .eq. 127 )  goto 300
	if( ichar .eq. 21 )  goto 400
	if( ichar .eq. 27 .and. index .eq. 0 )  goto 200
	if( ichar .lt. 32 )  goto 600
	if( index .ge. 78 )  goto 700
C***
C***	NOT SPECIAL CHARACTER, PUT IN ARRAY
C***
	index = index + 1
	call cursor( 1 + index, 1 )
	call chrout( ichar )
	comara(index) = icon( ichar )
	goto 100
C***
C***	ESCAPE:  REPEAT LAST COMMAND
C***
200	index = indstr
	call cursor( 2, 1 )
	if( index .ne. 0 )call string(3, comara, 1, index )
	goto 600
C***
C***	DELETE CHARACTER
C***
300	if( index .eq. 0 ) goto 600
	index = index - 1
	call cursor( 2 + index, 1 )
	call chrout( 32 )
	goto 100
C***
C***	DELETE LINE
C***
400	if( index .eq. 0 ) goto 600
	call cursor( 2, 1 )
	call irepeat( 32, index )
	index = 0
	goto 100
C***
C***	CARRIAGE RETURN TYPED
C***
600	if( index .ne. 0 )  goto 700
	ichar = -1
	goto 900

700	comara(index + 1) = 0
	call cursor( 2, 1 )
	call irepeat( 32, index )
	call allcap( comara, index )
	ichar = comara(1)
900	arrind = index
	indstr = index
	index = 0
	call nap( 1000, 4 )
	return
	end
C
	subroutine cube( new, xview,yview,zview, azim,aelv,arol, arng )

	implicit integer ( b - w )

	integer dirs(30), scanx
	logical new
	real xview, yview, zview, azim, aelv, arol, arng, x, y, z, radius
	real xva, xvb, xvc, xvd, xvs
	real yva, yvb, yvc, yvd, yvs, yscan
	real zva, zvb, zvc, zvd, zvs, zscan
	real smcos, smsin, cosdeg, sindeg

	common /names/ useful, inuse, coord, size, numobj

	data dirs/
     &	5050,4950,5150,5049,5051,4949,5151,4951,5149,5250,
     &	4850,5250,5048,5052,4849,5251,4851,5249,4948,5152,
     &	4952,5148,4750,5350,5047,5053,4848,5252,4852,5248 /

	if( .not. new ) goto 20
	call clrscr
	call cursor( 1, 24 )
	call chrout( 47 )
	call irepeat( 45, 41 )
	call chrout( 92 )
	call crlf
	do 10 iy = 1, 21
	    call chrout(124)
	    call cursor( 43, 24-iy )
	    call chrout(124)
	    call crlf
10	continue
	call chrout( 92 )
	call string(1,'- Ber:___/___ --- Rol:___ --- Ran:_____ -^E')
	call chrout( 47 )
	call cursor( 45, 24 )
	call string(1,'Bearing Range    Velocity^E')
	call cursor( 1, 1 )
	call chrout(62)

20	do 30 iy = 1, 21
	    call cursor( 2, 24-iy )
	    call irepeat( 32, 41 )
30	continue
	call cursor( 8, 2 )
	call number(4, azim, 3, 10, -1 )
	call chrout(47)
	call lnumbr(4, aelv, 3, 10, -1 )
	call cursor( 24, 2 )
	call number(4, arol, 3, 10, -1 )
	call cursor( 36, 2 )
	call number(4, arng, 5, 10, -1 )
	call chrout( 32 )

	xva = smcos( azim ) * cosdeg(aelv)
	xvb = smsin( azim ) * cosdeg(aelv)
	xvc = sindeg(aelv )
	xvd = -(xva*xview + xvb*yview + xvc*zview)
	xvs = sqrt( xva*xva + xvb*xvb + xvc*xvc )

	yva = smcos( azim+90.0 ) * cosdeg(aelv+arol)
	yvb = smsin( azim+90.0 ) * cosdeg(aelv+arol)
	yvc = sindeg(aelv+arol)
	yvd = -(yva*xview + yvb*yview + yvc*zview)
	yvs = sqrt( yva*yva + yvb*yvb + yvc*yvc )

	zva = smcos( azim+90.0 ) * cosdeg((aelv+arol+90.0) )
	zvb = smsin( azim+90.0 ) * cosdeg((aelv+arol+90.0) )
	zvc = sindeg(aelv+arol+90.0)
	zvd = -(zva*xview + zvb*yview + zvc*zview)
	zvs = sqrt( zva*zva + zvb*zvb + zvc*zvc )

	nobjds = 23
	call getval(5, 0,355,  useful, numobj, maxobj )
	do 300 i = 1, maxobj
	    iobj = i
	    call getval(5, 0,358,  inuse, iobj, ival )
	    if( ival .eq. 0 ) goto 300
	    call getval(6, 0,360,  coord, iobj, 1, x )
	    call getval(6, 0,361,  coord, iobj, 2, y )
	    call getval(6, 0,362,  coord, iobj, 3, z )
	    call carpol( xview,yview,zview, x,y,z, az,ae,ar )
	    if( ar .gt. arng ) goto 100
	    if( nobjds .lt. 3 ) goto 100
	    call cursor( 45, nobjds )
	    call number(4, az, 3, 10, -1 )
	    call chrout( 47 )
	    call lnumbr(4, ae, 3, 10, -1 )
	    call chrout( 32 )
	    call number(4, ar, 5, 10, -1 )
	    nobjds = nobjds - 1
100	    continue
	    
	    scanx = ( xva*x+xvb*y+xvc*z+xvd ) / ( arng*xvs ) + 0.5
	    yscan = ( yva*x+yvb*y+yvc*z+yvd ) / ( arng*yvs )
	    zscan = ( zva*x+zvb*y+zvc*z+zvd ) / ( arng*zvs )
	    if( iabs(scanx).gt.10 .or. abs(yscan).gt.10 .or.
     &		abs(zscan).gt.10 ) goto 300
	    if( scanx .lt. 0 ) ichar = 47-scanx
	    if( scanx .ge. 0 ) ichar = 64+scanx
	    call getval(5, 0,382,  size, iobj, radius )
	    irad = min0( ifix(4*radius/arng)+1, 30 )
	    do 200 index = 1, irad
		ix = ifix(2*yscan) + dirs(index)/100 - 28
		if( ix .lt. 2 .or. ix .gt. 42 ) goto 200
		iy = ifix(zscan) + mod(dirs(index),100) - 37
		if( iy .lt. 3 .or. iy .gt. 23 ) goto 200
		call cursor( ix, iy )
		call chrout( ichar )
200	    continue
300	continue
	if( nobjds .le. 2 ) return
	call cursor( 45, nobjds )
	call irepeat( 32, 13 )
	nobjds = nobjds - 1
	goto 300
	end
C
	subroutine carpol( x0,y0,z0, x1,y1,z1, az,ae,ar )

	implicit integer ( b - w )
	logical newang
	common/nhcom/newang

	xd = x1 - x0
	yd = y1 - y0
	zd = z1 - z0
C	NEWANG LOGIC NOT TESTED AT ALL!
	az = atan( yd/(xd+0.0001) ) / 0.017453293
	if( x1 .lt. x0 ) az = az + 180.0
	if( newang ) az = 90 - az
	apartd = sqrt( xd*xd + yd*yd )
	ae = atan( zd/(apartd+0.0001) ) / 0.017453293
C	END NEWANG LOGIC
	ar = sqrt( apartd*apartd + zd*zd )
	return
	end
