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
C	*** LIFE.FOR ***
	subroutine fmain

	implicit integer ( a - z )
	integer cells( 80, 20, 2 ), xdir(9), ydir(9)
	integer comara(60), parara(20), filesp(13)
	integer celchr( 26, 4 )
	integer cmds(17)
	logical newflg, lerror, eof, change

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data spe/79/, naptim/1000/, mut/79/
	data xdir/-1,0,1,-1,0,1,-1,0,1/
	data ydir/-1,-1,-1,0,0,0,1,1,1/
	data ((celchr( i, j ), i=1, 26 ), j=1,4)/26*2,26*3,26*3,26*3/

	cmds( 1) = isxbit('CLEAR~')
	cmds( 2) = isxbit('INPUT~')
	cmds( 3) = isxbit('EXIT~')
	cmds( 4) = isxbit('KILL~')
	cmds( 5) = isxbit('READ~')
	cmds( 6) = isxbit('SAVE~')
	cmds( 7) = isxbit('DELETE~')
	cmds( 8) = isxbit('NEW~')
	cmds( 9) = isxbit('GENERATION~')
	cmds(10) = isxbit('GO~')
	cmds(11) = isxbit('CENTER~')
	cmds(12) = isxbit('SET~')
	cmds(13) = isxbit('EDIT~')
	cmds(14) = isxbit('TIME~')
	cmds(15) = isxbit('STATUS~')
	cmds(16) = isxbit('CROSSBREED~')
	cmds(17) = isxbit('HELP~')

	iclwhi = 1
	icldbl = 2
	iclred = 3
	icllbl = 4
	iclpur = 5
	iclgre = 6
	iclyel = 7
	iclbla = 8

	call settty( comara, parara, ilen, privd, filesp )
	call defcol

100	call clrscr
	call cursor( 1, 4 )
	call colstr(icllbl,'Generation:    0^E')
	gen = 0
	iar = 1
	minx = 80
	maxx = 1
	miny = 20
	maxy = 1
	call erase( cells, iar, minx, maxx, miny, maxy )

200	call cursor( 1, 2 )
	call colstr(icllbl,'Command:^E')
	call irepeat(32,52)
	call cursor( 10, 2 )
	call curbuf
	call getstr(3, comara, 60, ilen )
	if( .not. newflg ) goto 205
	call new( cells, iar, minx, maxx, miny, maxy, gen )
	newflg = .false.
	goto 208
205	call cursor( 1, 1 )
	call irepeat(32,79)
208	if( ilen .eq. 0 ) goto 200
	call allcap( comara, ilen )
	parara( 2 ) = 0
	call parse( comara, ilen, parara, ipmax, 20 )
	if( ipmax .eq. 0 ) goto 200
	icom1 = isrsix( cmds, parara(1), 17 )

	if( icom1 .lt. 0 .or. icom1 .gt. 17 ) goto 209

	call convrt( parara(2), 1, 6, icom2, 0 )
	goto(100,300,400,500,600,700,800,900,1000,1100,1200,
     & 1300,1400,1500,1600,1690,220) icom1

209	call cursor( 1, 1 )
	call colstr(iclyel,'Illegal command.  Type help for help.^E')
	goto 200

220	call clrscr
	call string(1,'Commands are:^M^J
     &CLEAR                                    Kill everything^M^J
     &INPUT <SPECIES> <X> <Y>                  Put species at X-Y^M^J
     &KILL <SPECIES>                           Kill all species^M^J
     &READ <FILESPEC>                          Read cells from file^M^J
     &SAVE <FILESPEC>                          Save cells on file^M^J
     &DELETE <FILESPEC>                        Delete file^M^J
     &NEW                                      Reprint screen^M^J
     &GENERATION                               Reset generation^M^J
     &GO <GEN>                                 Grow until GEN^M^J
     &CENTER                                   Center cell pattern^M^J
     &TIME <MILLISECONDS>                      Set interval time^M^J
     &CROSSBREED <SPECIES>                     Set cross breed^M^J
     &STATUS                                   Print out status^M^J
     &EDIT                                     Enter edit mode^M^J
     &                  A - Z                  Input cell^M^J
     &                 <SPACE>                 Kill cell^M^J
     &                    0                    Exit edit mode^M^J
     &                  1 - 9                  Move cursor^M^J
     &SET <SPECIES MNLIV MXLIV MNBRN MXBRN>    Set parameters:^M^J
     &                                         Minimum & maximum^M^J
     &                                         to live & be born^E')
	newflg = .true.
	goto 200

225	call cursor( 1, 1 )
	call colstr(iclyel,'Illegal argument for ^E')
	call netsix( parara(1) )
	goto 200

300	if( icom2 .ge. 65 .and. icom2 .le. 91 ) spe = icom2
	call getnum(6, comara, ilen, x, 10, y, 10 )
	if(x.lt.1.or.x.gt.80.or.y.lt.1.or.y.gt.20) goto 225
	if( x .lt. minx ) minx = x
	if( x .gt. maxx ) maxx = x
	if( y .lt. miny ) miny = y
	if( y .gt. maxy ) maxy = y
	cells( x, y, iar ) = spe
	call cursor( x, y+4 )
	call chrout( spe )
	goto 200

400	call curbuf
	call grafof
	call tstop
	call grafon
	goto 900

500	call getnum(6, comara, ilen, x, 10, y, 10 )
	if(x.lt.1.or.x.gt.80.or.y.lt.1.or.y.gt.20) goto 510
	call cursor( x, y+4 )
	call chrout( 32 )
	cells( x, y, iar ) = 32
	goto 200

510	if( icom2 .lt. 65 .or. icom2 .gt. 91 ) goto 225
	if( maxx .lt. minx ) goto 200
	do 520 x = minx, maxx
	do 520 y = miny, maxy
	    if( cells( x, y, iar ) .ne. icom2 )goto 520
	    cells( x, y, iar ) = 32
	    call cursor( x+0, y+4 )
	    call chrout( 32 )
520	continue
	goto 200

600	ispac = iserch( comara, 32, ilen )
	if( ispac .eq. 0 .or. ispac .eq. ilen ) goto 225
	call iscan( ispac, ilen, comara, filesp )
	if( lerror(0) ) goto 225
	call ofile( 2, filesp, 0 )
	if( lerror(0) ) goto 225
	call rfile( 2, filesp )
	if( lerror(0) ) goto 225
	call outspl( parara(1), filesp )
610	call getstr(5, comara, 60, ilen, 2, eof )
	if( eof ) goto 711
	if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 610
	temp = icon( comara(1) )
	if( temp .lt. 65 .or. temp .gt. 91 ) goto 620
	call getnum(6, comara, ilen, x, 10, y, 10 )
	if(x.lt.1.or.x.gt.80.or.y.lt.1.or.y.gt.20) goto 630
	if( x .lt. minx ) minx = x
	if( x .gt. maxx ) maxx = x
	if( y .lt. miny ) miny = y
	if( y .gt. maxy ) maxy = y
	cells( x, y, iar ) = temp
	call cursor( x, y+4 )
	call chrout( temp )
	goto 610

615	call cursor( 1, 1 )
	call colstr(iclred,'Cannot read ^E')
	call outspc( filesp )
	goto 200

620	call cursor( 1, 1 )
	call colstr(iclyel,'Unknown species: ^E')
	goto 640

630	call cursor( 1, 1 )
	call colstr(iclyel,'Bad coordinates: ^E')

640	call string(3, comara, 1, 43 )
	goto 711

700	ispac = iserch( comara, 32, ilen )
	if( ispac .eq. 0 .or. ispac .eq. ilen ) goto 225
	call iscan( ispac, ilen, comara, filesp )
	if( lerror(0) ) goto 225
	call ofile( 2, filesp, 0 )
	if( lerror(0) ) goto 750
	call wfile( 2, filesp )
	if( lerror(0) ) goto 750
	call outspl( parara(1), filesp )
	if( maxx .lt. minx ) goto 200
	call select( 2 )
	do 710 x = minx, maxx
	do 710 y = miny, maxy
	    if( cells( x, y, iar ) .le. 32 ) goto 710
	    call chrout( cells( x, y, iar ) )
	    call string(1,'  (^E')
	    call number(2, x+0, 2 )
	    call chrout(44)
	    call number(2, y+0, 2 )
	    call string(1,')^M^J^E')
710	continue
711	call close( 2 )
	call select( 0 )
	goto 200

750	call cursor( 1, 1 )
	call colstr(iclred,'Cannot write ^E')
	call outspc( filesp )
	goto 200

800	ispac = iserch( comara, 32, ilen )
	if( ispac .eq. 0 .or. ispac .eq. ilen ) goto 225
	call iscan( ispac, ilen, comara, filesp )
	if( lerror(0) ) goto 225
	call ofile( 2, filesp, 0 )
	if( lerror(0) ) goto 225
	call rfile( 2, filesp )
	if( lerror(0) ) goto 225
	call outspl( parara(1), filesp )
	filesp( 4 ) = 0
	call rnfile( 2, filesp )
	goto 200

900	call new( cells, iar, minx, maxx, miny, maxy, gen )
	goto 200

1000	call getnum(4, comara, ilen, gen, 10 )
	if( gen .lt. 0 .or. gen .gt. 9999 ) gen = 0
	call cursor( 1, 4 )
	call colstr(icllbl,'Generation: ^E')
	call number(2, gen, 4 )
	goto 200

1100	call getnum(4, comara, ilen, gento, 10 )
	if( gento .le. gen .or. gento .gt. 9999 ) gento = 9999
	call erase( cells, iar, minx, maxx, miny, maxy )
1150	gen = gen + 1
	call cursor( 1, 4 )
	call colstr(icllbl,'Generation: ^E')
	call number(2, gen, 4 )
	call curbuf
	newar = 3-iar
	change = .false.
	if( maxx .lt. minx ) goto 1191
	minxs = max0( minx-1, 1 )
	maxxs = min0( maxx+1, 80 )
	minys = max0( miny-1, 1 )
	maxys = min0( maxy+1, 20 )
	do 1190 x = minxs, maxxs
	do 1190 y = minys, maxys
	    cells( x, y, newar ) = 32
	    celcnt = 0
	    it =32 
	    do 1165 lx = x-1, x+1
	    if( lx .lt. minxs .or. lx .gt. maxxs ) goto 1165
	    do 1160 ly = y-1, y+1
		if( ly .lt. minys .or. ly .gt. maxys ) goto 1160
		if( cells( lx, ly, iar ) .le. 32 ) goto 1160
		celcnt = celcnt + 1
		if(it.ne.32.and.it.ne.cells(lx,ly,iar)) goto 1155
		it = cells( lx, ly, iar )
		goto 1160
1155		it = mut
1160	    continue
1165	    continue
	    temp = cells( x, y, iar )
	    if( temp .le. 32 ) goto 1170
	    it = temp - 64
	    celcnt = celcnt - 1
	    if(celcnt.lt.celchr(it,1).or.celcnt.gt.celchr(it,2))
     &		goto 1180
	    cells( x, y, newar ) = cells( x, y, iar )
	    goto 1180
1170	    if(celcnt.lt.celchr(it-64,3).or.celcnt.gt.celchr(it-64,4))
     &		goto 1180
	    cells( x, y, newar ) = it
	    if( x .lt. minx ) minx = x
	    if( x .gt. maxx ) maxx = x
	    if( y .lt. miny ) miny = y
	    if( y .gt. maxy ) maxy = y
1180	    if( cells( x, y, newar ) .eq. cells( x, y, iar ) )
     &		goto 1190
	    change = .true.
	    call cursor( x+0, y+4 )
	    it = cells( x, y, newar )
	    call pcolor( mod(it,7)+1 )
	    call chrout( it )
1190	continue
1191	iar = newar
	call curbuf
	call nap( naptim, 12 )
	call chrbuf( ichar )
	if( ichar .eq. -1 .and. gen .lt. gento .and. change ) goto 1150
	if( change ) goto 200
	call cursor( 1, 1 )
	call colstr(icllbl,'*** Culture has stabilized ***^E')
	goto 200

1200	newar = 3-iar
	if( maxx .lt. minx ) goto 200
	call erase( cells, iar, minx, maxx, miny, maxy )
	minxs = minx
	minx = 80
	maxxs = maxx
	maxx = 1
	minys = miny
	miny = 20
	maxys = maxy
	maxy = 1
	do 1250 x = minxs, maxxs
	do 1250 y = minys, maxys
	    if( cells( x, y, iar ) .eq. 32 ) goto 1250
	    if( x .lt. minx ) minx = x
	    if( x .gt. maxx ) maxx = x
	    if( y .lt. miny ) miny = y
	    if( y .gt. maxy ) maxy = y
1250	continue
	if( maxx .lt. minx ) goto 200
	xadd = 40 - (maxx-minx)/2 - minx
	yadd = 10 - (maxy-miny)/2 - miny
	if( xadd .eq. 0 .and. yadd .eq. 0 ) goto 200
	do 1275 x = minx, maxx
	do 1275 y = miny, maxy
	    cells( x+xadd, y+yadd, newar ) = cells( x, y, iar )
	    cells( x, y, iar ) = 32
1275	continue
	iar = newar
	minx = minx + xadd
	maxx = maxx + xadd
	miny = miny + yadd
	maxy = maxy + yadd
	goto 900

1300	if( icom2 .lt. 65 .or. icom2 .gt. 91 ) goto 1350
	spe = icom2
	temp = icom2 - 64
	call getnum(10, comara, ilen, celchr(temp,1), 10,
     &celchr(temp,2), 10, celchr(temp,3), 10, celchr(temp,4), 10 )
	if(celchr(temp,1).lt.1.or.celchr(temp,1).gt.8)celchr(temp,1)=2
	if(celchr(temp,2).lt.1.or.celchr(temp,2).gt.8)celchr(temp,2)=3
	if( celchr(temp,2) .lt. celchr(temp,1) )
     &		celchr(temp,2) = celchr(temp,1)
	if(celchr(temp,3).lt.1.or.celchr(temp,3).gt.8)celchr(temp,3)=3
	if(celchr(temp,4).lt.1.or.celchr(temp,4).gt.8)celchr(temp,4)=3
	if( celchr(temp,4) .lt. celchr(temp,3) )
     &		celchr(temp,4) = celchr(temp,3)
	goto 200

1350	do 1360 i = 1, 26
	    celchr( i, 1 ) = 2
	    celchr( i, 2 ) = 3
	    celchr( i, 3 ) = 3
	    celchr( i, 4 ) = 3
1360	continue
	call cursor( 1, 1 )
	call colstr(icllbl,'Cell characteristics reset.^E')
	goto 200

1400	if( job(-1) .ne. 0 ) call usrset( 1031, 1 )
	x = (minx+maxx)/2
	y = (miny+maxy)/2
1450	call cursor( x, y+4 )
	call pcolor( mod( cells( x, y, iar ), 7 ) + 1 )
	call chrout( cells( x, y, iar ) )
	call cursor( x, y+4 )
	call curbuf
	call chrwat( ichar )
	if( ichar .ne. 48 ) goto 1460
	if( job(-1) .ne. 0 ) call usrset( 1031, 0 )
	goto 200
1460	if( ichar .ne. 53 ) goto 1470
	cells( x, y, iar ) = 32
	goto 1450
1470	if( ichar .lt. 65 ) goto 1475
	if( ichar .gt. 91 ) ichar = ichar - 32
	if( ichar .lt. 65 .or. ichar .gt. 91 ) goto 1480
	cells( x, y, iar ) = ichar
	spe = ichar
	if( x .lt. minx ) minx = x
	if( x .gt. maxx ) maxx = x
	if( y .lt. miny ) miny = y
	if( y .gt. maxy ) maxy = y
	goto 1450
1475	ichar = ichar - 48
	if( ichar .lt. 1 .or. ichar .gt. 9 ) goto 1480
	x = x + xdir( ichar )
	y = y + ydir( ichar )
	if( x .lt. 1 ) x = 1
	if( x .gt. 80 ) x = 80
	if( y .lt. 1 ) y = 1
	if( y .gt. 20 ) y = 20
	goto 1450
1480	call chrout( 7 )
	goto 1450

1500	call getnum(4, comara, ilen, naptim, 10 )
	if( naptim .le. 0 ) naptim = 1
	goto 200

1600	if( icom2 .lt. 65 .or. icom2 .gt. 91 ) goto 1605
	call cursor( 1, 1 )
	call colstr(icllbl,'Status-^E')
	call chrout( icom2 )
	call string(1,':  MnLiv: ^E')
	call number(1, celchr( icom2-64, 1 ) )
	call string(1,'   MxLiv: ^E')
	call number(1, celchr( icom2-64, 2 ) )
	call string(1,'   MnBrn: ^E')
	call number(1, celchr( icom2-64, 3 ) )
	call string(1,'   MxBrn: ^E')
	call number(1, celchr( icom2-64, 4 ) )
	goto 200

1605	newflg = .true.
	call clrscr
	call string(1,'Cell characteristics:^M^J        A B C D E F G H
     & I J K L M N O P Q R S T U V W X Y Z^M^JMnLiv: ^E')
	do 1610 i = 1, 26
	    call number(2, celchr( i, 1 ), 2 )
1610	continue
	call string(1,'^M^JMxLiv: ^E')
	do 1620 i = 1, 26
	    call number(2, celchr( i, 2 ), 2 )
1620	continue
	call string(1,'^M^JMnBrn: ^E')
	do 1630 i = 1, 26
	    call number(2, celchr( i, 3 ), 2 )
1630	continue
	call string(1,'^M^JMxBrn: ^E')
	do 1640 i = 1, 26
	    call number(2, celchr( i, 4 ), 2 )
1640	continue
	if( maxx .lt. minx ) call colstr(iclyel,
     &	    '^M^J^JRanges undefined.^E')
	if( maxx .lt. minx ) goto 1650
	call colstr(icllbl,'^M^J^JX-range: ^E')
	call number(2, minx, 2 )
	call string(1,' - ^E')
	call number(2, maxx, 2 )
	call string(1,'   Y-range: ^E')
	call number(2, miny, 2 )
	call string(1,' - ^E')
	call number(2, maxy, 2 )
1650	call string(1,'^M^JInterval: ^E')
	call number(1, naptim )
	call string(1,'^M^JCross breed: ^E')
	call chrout( mut )
	call string(1,'^M^JCurrent species: ^E')
	call chrout( spe )
	goto 200

1690	if( icom2 .lt. 65 .or. icom2 .gt. 91 ) goto 225
	mut = icom2
	goto 200

	end
C
	subroutine outspl( ic, filesp )
	implicit integer ( a - z )
	integer filesp(13)

	call cursor( 1, 1 )
	call netsix( ic )
	call chrout(32)
	call outspc( filesp )
	call curbuf
	return
	end
C
	subroutine netsix( iword )
	implicit integer ( a - z )
	integer wrdara( 6 )

	call convrt( iword, 6, 6, wrdara, 1 )
	ispac = iserch( wrdara, 32, 6 ) - 1
	if( ispac .eq. -1 ) ispac = 6
	if( ispac .eq. 0 ) return
	call string(3, wrdara, 1, ispac )
	return
	end
C
	subroutine erase( cells, iar, minx, maxx, miny, maxy )
	implicit integer ( a - z )

	integer cells( 80, 20, 2 )

	newar = 3-iar
	do 100 x = 1, 80
	do 100 y = 1, 20
	    cells( x, y, newar ) = 32
	    if( x.lt.minx.or.x.gt.maxx.or.y.lt.miny.or.y.gt.maxy )
     &		cells( x, y, iar ) = 32
100	continue
	return
	end
C
	subroutine new( cells, iar, minx, maxx, miny, maxy, gen )
	implicit integer ( a - z )

	integer cells( 80, 20, 2 )

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call clrscr
	if( maxx .lt. minx ) goto 105
	do 100 x = minx, maxx
	do 100 y = miny, maxy
	    if( cells( x, y, iar ) .le. 32 ) goto 100
	    call cursor( x+0, y+4 )
	    call chrout( cells( x, y, iar ) )
100	continue
105	call cursor( 1, 4 )
	call colstr(icllbl,'Generation: ^E')
	call number(2, gen, 4 )
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

    	subroutine defcol

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call pback( iclbla )
	call pcolor( iclwhi )
	return
	end
