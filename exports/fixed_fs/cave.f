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

	logical function streq( six1, six2 )

	implicit integer ( a - z )
	integer chk1(6), chk2(6)


	streq = ( six1 .eq. six2 )
	if( job(-1) .ne. 0 ) return
	call convrt( six1, 6, 6, chk1, 1 )
	call allcap( chk1, 6 )
	call convrt( six2, 6, 6, chk2, 1 )
	call allcap( chk2, 6 )
	do 100 i = 1, 6
	    streq = ( chk1(i) .eq. chk2(i) )
	    if( chk1(i) .eq. 0 .or. .not. streq ) return
100	continue
	return
	end


	subroutine initdb( comara, parara, filesp )

	implicit integer ( a - z )

	integer comara(80), parara(40), filesp(13), sixara(4)
	logical lerror, ieof
	integer maxwsz

	data numbrm/1250/
	data maxwsz/6/

	if( job(-1) .eq. 0 ) maxwsz = 20

C	OPEN UP THE VOCABULARY DATA FILE
	filesp( 5 ) = isxbit('DAT~')
	call ofile( 2, filesp, 0 )
	if( lerror(0) )  call exprog
	call rfile( 2, filesp )
	if( lerror(0) )  call exprog
100	call getstr(5, comara, 80, ilen, 2, ieof )
	if( ieof )  call exprog
	if( ilen .le. 0 .or. comara(1) .eq. 59 ) goto 100
	call getnum(6, comara, ilen, nverbs, 10, nobj, 10 )

C	ARRAY #1 IS THE MASTER ARRAY WITH ALL THE PTR'S TO ARRAY #2
C	VALUE		MEANS
C	0		ROCK
C	1-510		POINTERS
C	511		NOTHING
	call init(7, 0,70,  1, 9, 50, 50, 4 )
C
C	ARRAY #2 CONSISTS OF A LIST OF POINTERS AND CONTAINS
C	ALL THE THINGS STORED AT A LOCATION (AT MOST 10)
	call init(6, 0,74,  2, 9, 510, 11 )
C
C	ARRAY #3 CONSISTS OF THE NAMES OF THE ITEMS
	call init(5, 0,77,  3, 36, 100 )
C
C	ARRAY #4 CONSISTS OF THE WEIGHTS OF THE ITEMS
	call init(5, 0,80,  4, 18, 510 )
C
C	ARRAY #5 CONSISTS OF POINTERS FOR ITEMS THAT STORE THINGS
C	OR A 511 IF IT CAN'T BE USED TO STORE THINGS
	call init(5, 0,84,  5, 9, 510 )
C
C	ARRAY #6 DAMAGE ARRAY
	call init(6, 0,87,  6, 10, 52, 4 )
C
C	ARRAY #7 CONTAINS JOB NUMBERS AND EXPERIENCE FOR PLAYERS
	call init(6, 0,90,  7, 18, 26, 2 )
C
C	ARRAY #8 CONTAINS WHICH DIRECTION PLAYER IS POINTING
	call init(5, 0,93,  8, 3, 52 )
C
C	ARRAY #9 CONTAINS ALL VERBS
	call init(5, 0,96,  9, 36, 3*nverbs/2 )
C
C	ARRAY #10 TELLS IF INDEX IS IN USE
	call init(5, 0,99,  10, 1, 510 )
C
C	ARRAY #11 CONSISTS OF THE INDICES TO STUFF IN THE STORE
	call init(5, 0,102,  11, 9, 80 )
C
C	ARRAY #12 CONSISTS OF THE POINTERS TO THE NAMES OF INDICES
	call init(5, 0,105,  12, 7, 510 )
C
C	ARRAY #13 CONSISTS OF COST OF EACH KIND OF ITEM
	call init(5, 0,108,  13, 12, 100 )
C
C	ARRAY #14 CONSISTS OF WEIGHT TYPE OF ITEM CAN CARRY
	call init(5, 0,111,  14, 18, 100 )
C
C	ARRAY #15 CONSISTS OF ITEM TYPE (WHERE IT GOES)
	call init(5, 0,114,  15, 3, 100 )
C
C	ARRAY #16 CONTAINS FLAGS (1 = STAIRWAY BETWEEN FLOORS)
	call init(7, 0,117,  16, 1, 50, 50, 4 )
C
C	ARRAY #17 CONTAINS DAMAGE FACTOR FOR EACH TYPE OF ITEM
	call init(5, 0,120,  17, 7, 100 )
C
C	ARRAY #18 CONTAINS STRENGTH REQUIRED TO USE OBJECT
	call init(5, 0,123,  18, 4, 100 )
C
C	ARRAY #19 CONTAINS X, Y AND Z POSITION OF PLAYER
	call init(6, 0,126,  19, 6, 52, 3 )
C
C	ARRAY #20 CONTAINS SOURCE, VOLUME, LENGTH AND MESSAGE
C	AND WHO WON THE GAME.
	call init(5, 0,130,  20, 7, 75 )
C
C	ARRAY #21 FLAG INDICATING SUCCESS OF ATTACK
	call init(5, 0,133,  21, 3, 52 )
C
C	ARRAY #22 IS A LIST OF PROGRAMMER NUMBERS AND
C	THE AMOUNT OF MONEY THEY HAVE LEFT TO SPEND.
	call init(6, 0,137,  22, 18, 100, 2 )
C
C	ARRAY #23 CONTAINS DESIRED ALLY SETUPS
	call init(6, 0,140,  23, 1, 26, 26 )
C
C	ARRAY #24 CONTAINS WHAT TYPE WEAPON (HIT, THROWN, FIRED)
	call init(5, 0,143,  24, 2, 100 )
C
C	ARRAY #25 CONTAINS STANDARD WEIGHT FOR MONSTERS
	call init(5, 0,146,  25, 18, 26 )
C
C	ARRAY #26 CONTAINS STANDARD DEXTERITY FOR MONSTERS
	call init(5, 0,149,  26, 6, 26 )
C
C	ARRAY #27 CONTAINS STANDARD & ACTUAL STRENGTH FOR MONSTERS
	call init(6, 0,152,  27, 6, 26, 2 )
C
C	ARRAY #28 CONTAINS PERCENTAGE OF
C	BITING, CLAWING, BURNING, HITTING AND SMOTHERING ATTACKS / 5
	call init(6, 0,156,  28, 5, 26, 5 )
C
C	ARRAY #29 CONTAINS NUMBER OF HEXES THAT MONSTER OCCUPIES
	call init(5, 0,159,  29, 5, 26 )
C
C	ARRAY #30 CONTAINS THE MONSTER'S PREFERENCE OF FLOORS - 1
	call init(5, 0,162,  30, 2, 26 )
C
C	ARRAY #31 CONTAINS THE DIRECTION TO THE CURRENT HEX OF MONSTER
	call init(6, 0,165,  31, 3, 26, 20 )
C
C	ARRAY #32 CONTAINS AMOUNT OF TIME TO RECOVER
	call init(5, 0,168,  32, 6, 52 )
C
C	ARRAY #33 CONTAINS NUMBER TIMES DISI HAS BEEN HANDLED
	call init(5, 0,171,  33, 36, 1 )

	do 400 z = 1, 4
	    x = iran( 48 ) + 1
	    y = iran( 48 ) + 1
	    dir = iran( 6 )
	    ipass = 1
	    do 400 i = 1, numbrm
		if( ipass .gt. 0 )  dir = iran( 6 )
200		call newxy( x, y, dir, nx, ny )
		if( nx .gt. 1 .and. nx .lt. 50 .and. ny .gt. 1 .and.
     &			ny .lt. 50 ) goto 300
		ipass = 1
		goto 400
300		x = nx
		y = ny
		call putval(7, 0,187,  1, x, y, z+0, 511 )
		if( iran(10) .eq. 1 )  ipass = -ipass
400	continue

	do 600 ztemp = 1, 4
	    z = ztemp
500	    x = iran( 50 )
	    y = iran( 50 )
	    call getval(7, 0,195,  1, x, y, z, ival )
	    if( ival .eq. 0 ) goto 500
	    if( z .ne. 4 )call getval(7, 0,197,  1, x, y, z+1, ival )
	    if( ival .eq. 0 ) goto 500
	    call putval(7, 0,199,  16, x, y, z, 1 )
600	continue

	i = 0
700	call getstr(5, comara, 80, ilen, 2, ieof )
	    if( ieof )  call exprog
	    if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 700
	    call parse( comara, ilen, parara, length, 40 )
	    if( length .eq. 0 ) goto 700
	    do 800 j = 1, length
		if( parara(j) .eq. isxbit('-~') ) goto 700
		if( parara(j) .eq. isxbit('.~') ) goto 900
		i = i + 1
		call putval(5, 0,212,  9, i, parara(j) )
800	    continue
	    i = i + 1
	    call putval(5, 0,215,  9, i, -1 )
	goto 700

900	i = 52
	j = 52
1000	call getstr(5, comara, 80, ilen, 2, ieof )
	if( ieof )  call exprog
	if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 1000
	if( comara(1) .eq. 46 ) goto 1400
C	CALL ALLCAP( COMARA, ILEN )
	i = i + 1
	do 1100 i1 = 1, maxwsz 
	    if( icon(comara(i1)) .le. 32 ) goto 1105
1100	continue
	i1 = maxwsz
1105	call convrt( comara, i1, 1, sixara, 6 )
	call putval(5, 0,231,  3, i, sixara(1) )
	call getnum(18, comara,ilen, type,10, cancar,10, weighs,10,
     & numobj,10, ocost,10, idam,10, streng,10, itweap,10 )
	call putval(5, 0,234,  13, i, ocost )
	call putval(5, 0,235,  14, i, cancar )
	call putval(5, 0,236,  15, i, type )
	call putval(5, 0,237,  17, i, idam )
	call putval(5, 0,238,  18, i, streng )
	if( itweap .gt. 0 ) call putval(5, 0,239,  24, i, itweap )
1200	if( numobj .eq. 0 ) goto 1000
	numobj = numobj - 1
	j = j + 1
	if( cancar .eq. 0 )  call putval(5, 0,243,  5, j, 511 )
	call putval(5, 0,244,  4, j, weighs )
	call putval(5, 0,245,  10, j, 1 )
	call putval(5, 0,246,  12, j, i )
	if( j .gt. 132 ) goto 1300
	call putval(5, 0,248,  11, j-52, j )
	goto 1200

1300	x = iran( 50 )
	y = iran( 50 )
	z = -itweap
	if( z .le. 0 )  z = iran( 4 )
	call getval(7, 0,255,  1, x, y, z, ival )
	if( ival .ne. 511 ) goto 1300
	call drop( failed, .false., x, y, z, j )
	goto 1200

1400	i = 0
1500	call getstr(5, comara, 80, ilen, 2, ieof )
	if( ieof ) call exprog
	if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 1500
	if( comara(1) .eq. 46 ) goto 1700
C	CALL ALLCAP( COMARA, ILEN )
	i = i + 1
	do 1600 i1 = 1, maxwsz
	    if( icon(comara(i1)) .le. 32 ) goto 1605
1600	continue
	i1 = maxwsz
1605	call convrt( comara, i1, 1, ival, 6 )
	call putval(5, 0,272,  3, i+26, ival )
	call getnum(22, comara,ilen, weighs,10, dex,10, streng,10,
     & bite,10, claw,10, burn,10, hit,10, smothr,10, nhex,10,
     & ifloor,10 )
	call putval(5, 0,276,  25, i, weighs )
	call putval(5, 0,277,  26, i, dex )
	call putval(6, 0,278,  27, i, 1, streng )
	call putval(6, 0,279,  28, i, 1, bite/5 )
	call putval(6, 0,280,  28, i, 2, claw/5 )
	call putval(6, 0,281,  28, i, 3, burn/5 )
	call putval(6, 0,282,  28, i, 4, hit/5 )
	call putval(6, 0,283,  28, i, 5, smothr/5 )
	call putval(5, 0,284,  29, i, nhex )
	call putval(5, 0,285,  30, i, ifloor-1 )
	goto 1500

1700	call close( 2 )
	call unlock
	return
	end
C
	subroutine newxy( ox, oy, dir, nx, ny )

	implicit integer ( a - z )

	integer xdir(6), ydir(6)
	data xdir/0,1,1,0,-1,-1/, ydir/-1,0,1,1,1,0/

	x = ox
	y = oy
	nx = x + xdir( dir )
	if( nx .lt. 1 .or. nx .gt. 50 )  nx = 0
	ny = y + ydir( dir )
	if( mod( x, 2 ) .ne. 0 .and. xdir( dir ) .ne. 0 )  ny = ny - 1
	if( ny .lt. 1 .or. ny .gt. 50 )  nx = 0
	return
	end
C
	integer function newdir( dir, inc )

	implicit integer ( a - z )

	newdir = 0
	if( dir .eq. 0 )  return
	newdir = dir + inc
	if( newdir .lt. 1 )  newdir = newdir + 6
	if( newdir .gt. 6 )  newdir = newdir - 6
	return
	end

	function ichcod( ichar, ifg, ibg )
	if( ichar .lt. 0 .or. ichar .gt. 256 ) ichar = icon( ichar )
	ichcod = ifg*256*256 + ibg*256 + ichar
	return
	end

C
	subroutine updscr(player,newscr,streng,dexter,cansee,disind)

	implicit integer ( a - z )

	integer scrara( 54, 21 ), oldara( 54, 21 )
	logical cansee( 52 ), newscr, change, next
	integer toload( 4 )

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call getval(6, 0,337,  19, player, 1, x )
	call getval(6, 0,338,  19, player, 2, y )
	call getval(6, 0,339,  19, player, 3, z )
	call getval(5, 0,340,  8, player, dir )

	do 100 index = 1, 52
	    cansee( index ) = .false.
	    if( index .gt. 26 ) goto 100
	    call getval(5, 0,345,  10, index+0, ival )
	    if( ival .eq. 0 ) goto 100
	    call getval(5, 0,347,  8, index+0, ival )
	    if( ival .lt. 7 ) lplayr = index
100	continue
	if( lplayr .eq. player ) call monstr

	yc = -1
	yc = 0 - mod( x+1, 2 )
	do 901 ytemp = y-4, y+4
	    y1 = ytemp
	    yc = yc + 2
	    if( y1 .lt. 1 .or. y1 .gt. 50 ) goto 901
	    xc = -3
	    do 900 xtemp = x-6, x+6
		x1 = xtemp
		xc = xc + 4
		if( x1 .lt. 1 .or. x1 .gt. 50 ) goto 900
		if( x1 .eq. x .and. y1 .eq. y ) goto 300
		ndir = findir( x, y, x1+0, y1+0 )
		call newxy( x, y, ndir, x2, y2 )
		if( x1 .eq. x2 .and. y1 .eq. y2 ) goto 300
		if(.not.(ndir.eq.newdir(dir,1).or.ndir.eq.
     &		    newdir(dir,-1) .or. ndir .eq. dir) ) goto 900
		x2 = x
		y2 = y
200		ndir = findir( x2, y2, x1+0, y1+0 )
		call newxy( x2, y2, ndir, x2, y2 )
		if( x1 .eq. x2 .and. y1 .eq. y2 ) goto 300
		call getval(7, 0,374,  1, x2, y2, z, ival )
		if( ival .eq. 0 ) goto 900
		goto 200

300		ya = yc + mod( x1+1, 2 )
		call load(scrara,icllbl,icldbl,xc,ya,62,45,45,60)
		scrara( xc, ya+1 ) = ichcod(60,icllbl,icldbl)
		scrara( xc+5, ya+1 ) = ichcod(62,icllbl,icldbl)
		call load(scrara,icllbl,icldbl,xc,ya+2,62,45,45,60)
		call getval(7, 0,383,  1, x1+0, y1+0, z, ival )
		if( ival .ne. 0 ) goto 400
		call load(scrara,iclgre,icldbl,xc,ya+1,35,35,35,35)
		goto 900

400		if( ival .ne. 511 ) goto 600
		call load(scrara,icllbl,icldbl,xc,ya+1,32,32,32,32)
		if( z .eq. 1 ) goto 500
		call getval(7, 0,391,  16, x1+0, y1+0, z-1, ival )
		if( ival .eq. 0 ) goto 500
		scrara( xc+2, ya+1 ) = ichcod(68,iclred,iclwhi)
		scrara( xc+3, ya+1 ) = ichcod(78,iclred,iclwhi)

500		call getval(7, 0,396,  16, x1+0, y1+0, z, ival )
		if( ival .eq. 0 ) goto 900
		scrara( xc+2, ya+1 ) = ichcod(85,icldbl,iclwhi)
		if( mod(scrara(xc+3,ya+1),256) .eq. icon(78) ) goto 505
		scrara( xc+3, ya+1 ) = ichcod(80,icldbl,iclwhi)
		goto 900
505		scrara( xc+3, ya+1 ) = ichcod(68,icldbl,iclwhi)
		goto 900

600		best = 0
		do 700 ival1 = 1, 10
		    call getval(6, 0,407,  2, ival, ival1+0, index )
		    if( index .eq. 0 ) goto 700
		    if( index .le. 52 ) cansee(index) = .true.
		    ival2 = weight( index )
		    if( ival2 .lt. best ) goto 700
		    best = ival2
		    bindex = index
		    if( index .gt. 52 ) goto 700
		    call getval(6, 0,415,  19, index, 1, ax )
		    call getval(6, 0,416,  19, index, 2, ay )
		    if( ax .ne. x1 .or. ay .ne. y1 ) bindex = -index
700		continue
		if( bindex .lt. 0 .or. bindex .gt. 52 ) goto 800
		call getval(5, 0,420,  8, bindex, ival )
		scrara( xc+1, ya+1 ) = ichcod(32,icllbl,icldbl)
		scrara( xc+4, ya+1 ) = ichcod(32,icllbl,icldbl)
		icol = iclpur
		if( bindex .gt. 26 ) icol = iclred
		if( bindex .eq. player ) icol = iclwhi
		if( bindex .gt. 26 .and. ival .lt. 4 )
     &		    scrara( xc+1, ya+1 ) = ichcod(77,icol,icldbl)
		if( bindex .gt. 26 .and. ival .ge. 4 )
     &		    scrara( xc+3, ya+1 ) = ichcod(77,icol,icldbl)
		if(bindex.le.26)
     &		    ival1=ichcod(icon(bindex+64),icol,icldbl)
		if(bindex.gt.26)
     &		    ival1=ichcod(icon(bindex+38),icol,icldbl)
		if( ival .lt. 4 )  scrara( xc+2, ya+1 ) = ival1
		if( ival .ge. 4 .and. bindex .le. 26 )
     &		    scrara( xc+3, ya+1 ) = ival1
		if( ival .ge. 4 .and. bindex .gt. 26 )
     &			scrara( xc+4, ya+1 ) = ival1
		if(ival.eq.0)scrara(xc+3,ya+1)=ichcod(61,icol,icldbl)
		if(ival.eq.1)scrara(xc+3,ya+1)=ichcod(46,icol,icldbl)
		if(ival.eq.2)scrara(xc+3,ya+1)=ichcod(92,icol,icldbl)
		if(ival.eq.3)scrara(xc+3,ya+1)=ichcod(47,icol,icldbl)
		if(ival.eq.4)scrara(xc+2,ya+1)=ichcod(94,icol,icldbl)
		if(ival.eq.5)scrara(xc+2,ya+1)=ichcod(92,icol,icldbl)
		if(ival.eq.6)scrara(xc+2,ya+1)=ichcod(47,icol,icldbl)
		goto 900

800		icol = iclwhi
		iback = icldbl
		if( bindex .lt. 0 ) icol = iclred
		bindex = iabs(bindex)
		call getval(5, 0,452,  12, bindex, tindex )
		call getval(5, 0,453,  13, tindex, ocost )
		if( ocost .le. 500 .and. tindex .ne. disind ) goto 850
		icol = iclbla
		iback = iclyel
850		call getval(5, 0,457,  3, tindex, i1 )
		call convrt( i1, 4, 6, toload, 0 )
		call load(scrara,icol,iback,xc,ya+1,
     &		    toload(1),toload(2),toload(3),toload(4))
900	continue
901	continue

	if( .not. newscr ) goto 1000
	call clrscr
	call colcur( 55, 23 )
	call string(1,'Head:^E')
	call cursor( 55, 22 )
	call string(1,'Body:^E')
	call cursor( 55, 21 )
	call string(1,'Back:^E')
	call cursor( 55, 20 )
	call string(1,'Weapon arm:^E')
	call cursor( 55, 19 )
	call string(1,'Shield arm:^E')
	call cursor( 55, 18 )
	call string(1,'Belt:^E')
	call cursor( 55, 12 )
	call string(1,'Strength:^E')
	call cursor( 55, 11 )
	call string(1,'Dexterity: ^E')
	call cursor( 67, 8 )
	call chrout(52)
	call cursor( 63, 7 )
	call chrout(53)
	call cursor( 71, 7 )
	call chrout(51)
	call cursor( 67, 6 )
	call chrout( player+64 )
	call cursor( 63, 5 )
	call chrout(54)
	call cursor( 71, 5 )
	call chrout(50)
	call cursor( 67, 4 )
	call chrout(49)
	call cursor( 1, 1 )
	call chrout(62)

1000	change = .false.
	iunsen = ichcod(32,iclwhi,iclbla)
	lastbg=0
	lastfg=0
	do 1200 y1 = 1, 20
	    next = .false.
	    do 1200 x1 = 1, 54
		if( newscr ) oldara(x1,y1) = ichcod(32,iclwhi,iclbla)
		item = scrara(x1,y1)
		if( item .ne. 0 ) goto 1050
		item = iunsen
		scrara(x1,y1) = item
1050		if( scrara( x1, y1 ) .eq. oldara( x1, y1 ) ) goto 1100
		change = .true.
		if( .not. next )  call cursor( x1+0, y1+4 )
		next = .true.
		ichar = mod( item, 256 )
		ibg = mod( item/256, 256 )
		ifg = item / 256 / 256
		if( lastbg .ne. ibg ) call pback( ibg )
		if( lastfg .ne. ifg ) call pcolor( ifg )
		call chrout( ichar )
		lastbg = ibg
		lastfg = ifg
		oldara( x1, y1 ) = scrara( x1, y1 )
1100		scrara( x1, y1 ) = iunsen
		next = .false.
1200	continue

	if( change .and. .not. newscr .and. dir .eq. 0 ) call chrout(7)

	if( streng .eq. ostren .and. .not. newscr ) goto 1300
	call colcur( 67, 12 )
	call number(2, streng, 2 )
	ostren = streng
1300	if( dexter .eq. odextr .and. .not. newscr )  return
	call colcur( 67, 11 )
	call number(2, dexter, 2 )
	odextr = dexter
	return
	end
C
	function findir( x1, y1, x2, y2 )

	implicit integer ( a - z )

	if( x1 .ne. x2 ) goto 100
	findir = 1
	if( y1 .lt. y2 )  findir = 4
	return

100	if( x1 .gt. x2 ) goto 200
	if( y1 .gt. y2 )  findir = 2
	if( y1 .eq. y2 )  findir = 2 + mod( x1, 2 )
	if( y1 .lt. y2 )  findir = 3
	return

200	if( y1 .lt. y2 )  findir = 5
	if( y1 .eq. y2 )  findir = 6 - mod( x1, 2 )
	if( y1 .gt. y2 )  findir = 6
	return
	end
C
	subroutine load( scrara, ifg, ibg, x, y, i1, i2, i3, i4 )

	implicit integer ( a - z )

	integer scrara( 54, 21 )

	scrara(x+1,y) = ichcod(i1,ifg,ibg)
	scrara(x+2,y) = ichcod(i2,ifg,ibg)
	scrara(x+3,y) = ichcod(i3,ifg,ibg)
	scrara(x+4,y) = ichcod(i4,ifg,ibg)
	return
	end
C
	subroutine comand( ichar, comara, arrind )
C
C  --	ROUTINE GET COMMAND FROM USER IF ONE PRESENT.
C
	integer comara(81), index, arrind, ichar
	data index/0/
C
C  --	IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR
C  --	0.5 SECONDS OR UNTIL ONE IS.
C
100	call curbuf
	call nap( 500, 12 )
	call chrbuf( ichar )
	if( ichar .eq. -1 )  return
	if( ichar .eq. 8 .or. ichar .eq. 127 ) goto 300
	if( ichar .eq. 21 ) goto 400
	if( ichar .eq. 27 .and. index .eq. 0 ) goto 200
	if( ichar .lt. 32 ) goto 600
	if( index .ge. 78 ) goto 700
C
C  --	NOT SPECIAL CHARACTER, PUT IN ARRAY
C
	index = index + 1
	call colcur( 1 + index, 1 )
	call chrout( ichar )
	comara(index) = icon( ichar )
	goto 100
C
C  --	ESCAPE:  REPEAT LAST COMMAND
C
200	index = indstr
	call colcur( 2, 1 )
	if( index .ne. 0 )call string(3, comara, 1, index )

	goto 600
C
C  --	DELETE CHARACTER
C
300	index = index - 1
	if( index .lt. 0 )  index = 0
	call colcur( 2 + index, 1 )
	call chrout( 32 )
	goto 100
C
C  --	DELETE LINE
C
400	call colcur( 2, 1 )
	do 500 i = 1, index
	    call chrout(32)
500	continue
	index = 0
	goto 100
C
C  --	CARRIAGE RETURN TYPED
C
600	if( index .ne. 0 ) goto 700
	ichar = -1
	goto 900
700	comara(index + 1) = 0
	call colcur( 2, 1 )
	do 800 i = 1, index
	call chrout(32)
800	continue
C	CALL ALLCAP( COMARA, INDEX )
	ichar = comara(1)
900	arrind = index
	indstr = index
	index = 0
	call nap( 500, 4 )
	return
	end
C
	subroutine bugmsg( msgara, n1, n2, n3, n4 )

	implicit integer ( a - z )

	character msgara( 80 )

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call clrscr
	call colcur( 1, 12 )
	call colstr(iclred,'FATAL ERROR: ^E')
	call string(1, msgara )
	call string(1,' ( ^E')
	call outnum(4, n1, n2, n3, n4 )
	call string(1,' ).^M^J^E')
	call close( 1 )
	call usrset( 1031, 0 )
	call usrset( 1026, 0 )
	call usrset( 1041, 1 )
	call exprog
	end
C
	subroutine cease( x, y, z, iplayr )

	implicit integer ( a - z )
	logical failed

	player = iabs( iplayr )
	call getval(5, 0,671,  5, player, ival )
	if( ival .eq. 0 ) goto 101
	do 100 i = 1, 10
	    call getval(6, 0,674,  2, ival, i+0, ival1 )
	    if( ival1 .eq. 0 ) goto 100
	    call takout( ival1, player, failed )
	    call drop( failed, .true., x, y, z, ival1 )
100	continue
101	continue
	call remove( x, y, z, player, failed )
	if(failed)call bugmsg('CEASE: REMOVE#1^E',x,y,z,player)
	call putval(5, 0,682,  10, player, 0 )
	call putval(6, 0,683,  7, player, 1, 0 )
	call usrset( 1031, 0 )
	call usrset( 1026, 0 )
	call usrset( 1041, 1 )
	if( nuser(0) .le. 1 .or. iplayr .gt. 0 )goto 200
	call close( 1 )
	call addusr( -1 )
	call qgone
200	call colcur( 1, 1 )
	call close( 1 )
	call exprog
	end
C
	subroutine drop( failed, lockit, x1, y1, z, index )

	implicit integer ( a - z )

	logical replac, failed, lockit

	failed = .true.
	if( lockit ) call lock
	x = x1
	y = y1
	index1 = index
	call getval(7, 0,706,  1, x, y, z, index2 )

100	if( index2 .lt. 511 ) goto 300
	do 200 index2 = 1, 510
	    call getval(6, 0,710,  2, index2+0, 11, index3 )
	    if( index3 .eq. 0 ) goto 300
200	continue
	if( lockit ) call unlock
	return

300	call getval(6, 0,716,  2, index2, 11, ival )
	replac = .false.
	if( ival .eq. 10 )  replac = .true.
	if( ival .lt. 10 )  call addval(4, 0,719,  -2, 1 )
	call putval(7, 0,720,  1, x, y, z, index2 )
	do 400 index3 = 1, 10
	    call getval(6, 0,722,  2, index2, index3+0, index4 )
	    if( replac .and. index4 .gt. 52 ) goto 500
	    if( index4 .eq. 0 ) goto 700
400	continue
	if( lockit ) call unlock
	return

500	call putval(4, 0,729,  -2, index1 )
	index1 = index4
600	dir = iran( 6 )
	call newxy( x, y, dir, nx, ny )
	if( nx .eq. 0 ) goto 600
	call getval(7, 0,734,  1, nx, ny, z, index2 )
	if( index2 .eq. 0 ) goto 600
	x = nx
	y = ny
	goto 100

700	call putval(4, 0,740,  -2, index1 )
	if( lockit ) call unlock
	failed = .false.
	return
	end
C
	subroutine remove( x, y, z, index1, failed )

	implicit integer ( a - z )
	logical failed

	call lock
	failed = .true.
	call getval(7, 0,752,  1, x, y, z, index2 )
	if( index2 .eq. 0 .or. index2 .eq. 511 ) goto 300
	do 100 index3 = 1, 10
	    call getval(6, 0,755,  2, index2, index3+0, index4 )
	    if( index4 .eq. index1 ) goto 200
100	continue
	call unlock
	return

200	call putval(6, 0,761,  2, index2, index3+0, 0 )
	call addval(6, 0,762,  2, index2, 11, -1 )
	call getval(4, 0,763,  -2, index3 )
	if( index3 .eq. 0 )  call putval(7, 0,764,  1, x, y, z, 511 )
	failed = .false.
300	call unlock
	return
	end
C

	subroutine wrdprb( word, msgara )
	implicit integer ( a - z )

	character msgara( 80 )

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla
	call messag( iclyel, '"^E' )
	call string(3, word, 6, 0 )
	call string(1,'" ^E')
	call string(1, msgara )
	return
	end

	subroutine addwrd( isix, ityp, ind )
	integer wrdlst(400), wrdtyp(400), wrdind(400)
	common /wrdcom/ wrdlst, wrdtyp, wrdind, numwds
	wrdlst(numwds) = isix
	wrdtyp(numwds) = ityp
	wrdind(numwds) = ind
	numwds = numwds + 1
	return
	end

	integer function wrdsrc( srch4 )
	implicit integer ( a - z )
	integer wrdlst(400), wrdtyp(400), wrdind(400)
	common /wrdcom/ wrdlst, wrdtyp, wrdind, numwds

        wrdsrc = isrsix( wrdlst, srch4, numwds )
	if( wrdsrc .gt. 0 ) return
	if( wrdsrc .lt. 0 ) call wrdprb(srch4,'is ambiguous.^E')
	if( wrdsrc .eq. 0 )
     &	    call wrdprb(srch4,'is not in my vocabulary.^E')
	return
	end

	subroutine wrdnum( parara, wrdptr, verb, word1, word2, length )

	implicit integer ( a - z )
	integer parara( 40 ), wrdlst(400), wrdtyp(400), wrdind(400)
	integer cvt(3)

	common /wrdcom/ wrdlst, wrdtyp, wrdind, numwds
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	verb = 0
	word1 = 0
	word2 = 0

	if( scomma .ne. 0 ) goto 50
	scomma    = isxbit(',~')					! isxbit(',     ~')
	squote    = isxbit('"~')					! isxbit('"     ~')
50	continue

	numwds = 1
	call addwrd( isxbit('the~'              ), 0, 0 )	! isxbit('THE   ~')
	call addwrd( isxbit('in~'               ), 0, 0 )	! isxbit('IN    ~')
	call addwrd( isxbit('on~'               ), 0, 0 )	! isxbit('ON    ~')
	call addwrd( isxbit('to~'               ), 0, 0 )	! isxbit('TO    ~')
	call addwrd( isxbit('from~'             ), 0, 0 )	! isxbit('FROM  ~')
	call addwrd( isxbit('with~'             ), 0, 0 )	! isxbit('WITH  ~')
	call addwrd( isxbit('at~'               ), 0, 0 )	! isxbit('AT    ~')

	do 80 i = 1, 6
	    cvt(1) = i + 48
	    call convrt( cvt, 1, 0, nname, 6 )
	    call addwrd( nname, 1, i+0 )
80	continue
	call addwrd( isxbit('right~'            ), 1, 7 )	! direction
	call addwrd( isxbit('clockwise~'        ), 1, 7 )	! direction
	call addwrd( isxbit('left~'             ), 1, 8 )	! direction
	call addwrd( isxbit('counterclockwise~' ), 1, 8 )	! direction
	i = 0
	j = 0
100	i = i + 1
200	    j = j + 1
	    call getval(5, 0,848,  9, j, isxvrb )
	    if( isxvrb .eq. -1 ) goto 100
	    if( isxvrb .eq. 0 ) goto 250
	    call addwrd( isxvrb, 2, i )
	goto 200

250	do 280 i = 1, 100
	    call getval(5, 0,855,  10, i+0, ival )
	    if( ival .eq. 0 ) goto 280
	    call getval(5, 0,857,  3, i+0, nname )		! add full name
	    call addwrd( nname, 3, i+0 )
	    if( i .gt. 26 ) goto 260
	    cvt(1) = i + 64
	    call convrt( cvt, 1, 0, nname, 6 )		! add single letter
	    call addwrd( nname, 3, i+0 )		! for another player
	    goto 280
260	    if( i .gt. 52 ) goto 280
	    cvt(1) = icon(77)				! add mx for
	    cvt(2) = i + 64 - 26			! a monster
	    call convrt( cvt, 2, 0, nname, 6 )
	    call addwrd( nname, 3, i+0 )
280	continue

290	wrdptr = wrdptr + 1
	if(parara(wrdptr).eq.scomma .or. parara(wrdptr)
     &	    .eq.squote .or.wrdptr.gt.length)goto 800
        i = wrdsrc( parara(wrdptr) )
	if( i .le. 0 ) goto 900				! die if unknown word
	if( wrdtyp(i) .eq. 0 ) goto 290			! skip noise words
	if( wrdtyp(i) .ne. 1 ) goto 295
	verb = 17
	word1 = -wrdind(i)
	goto 300

295	if( wrdtyp(i) .ne. 2 ) goto 297
	verb = wrdind(i)
	goto 300

297	call wrdprb( wrdlst(i), 'is not a verb or a direction.^E')
	goto 900

300	wrdptr = wrdptr + 1
	if(parara(wrdptr).eq.scomma .or. parara(wrdptr)
     &	    .eq.squote .or.wrdptr.gt.length)goto 800
	i = wrdsrc( parara(wrdptr) )
	if( i .le. 0 ) goto 900				! die if unknown word
	if( wrdtyp(i) .eq. 0 ) goto 300			! skip noise words
	if( wrdtyp(i) .ne. 1 ) goto 400
	word1 = -wrdind(i)
	goto 500

400	if( wrdtyp(i) .ne. 3 ) goto 450
	word1 = wrdind(i)
	goto 500

450	call wrdprb( wrdlst(i), 'is not a noun or a direction.^E')
	goto 900

500	wrdptr = wrdptr + 1
	if(parara(wrdptr).eq.scomma .or. parara(wrdptr)
     &	    .eq.squote .or.wrdptr.gt.length)goto 800
        i = wrdsrc( parara(wrdptr) )
	if( i .le. 0 ) goto 900				! die if unknown word
	if( wrdtyp(i) .eq. 0 ) goto 500			! skip noise words
	if( wrdtyp(i) .ne. 3 ) goto 550
	word2 = wrdind(i)
	goto 800

550	call wrdprb( wrdlst(i), 'is not a noun.^E')
	goto 900

800	if( wrdptr .gt. length )  wrdptr = 0
	return

900	verb = 0
	noun1 = 0
	noun2 = 0
	return
	end

C
	subroutine messag(icol, msgara )

	character msgara( 80 )

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call colcur( 1, 2 )
	do 100 i = 1, 79
	    call chrout(32)
100	continue
	call chrout( 13 )
	call colstr( icol, msgara )
	return
	end
C
	subroutine putin( index1, index2, failed )

	implicit integer ( a - z )
	logical failed

	call lock
	failed = .true.
	call getval(5, 0,950,  5, index2, ival )
	if( ival .ne. 0 ) goto 300
	do 100 ival = 1, 510
	    call getval(6, 0,953,  2, ival+0, 11, ival1 )
	    if( ival1 .eq. 0 ) goto 200
100	continue
200	call putval(5, 0,956,  5, index2, ival )

300	call getval(6, 0,958,  2, ival, 11, ival1 )
	if( ival1 .ge. 10 ) goto 600
	call addval(4, 0,960,  -2, 1 )

	do 400 ival1 = 1, 10
	    call getval(6, 0,963,  2, ival, ival1+0, ival2 )
	    if( ival2 .eq. 0 ) goto 500
400	continue
500	call putval(4, 0,966,  -2, index1 )
	failed = .false.
600	call unlock
	return
	end
C
	subroutine phold( index1, iplayr, failed )

	implicit integer ( a - z )
	logical failed

	call lock
	player = iabs( iplayr )
	failed = .false.
	call getval(5, 0,979,  5, player, index2 )
	if( index2 .ne. 0 ) goto 300
	do 100 index2 = 1, 510
	    call getval(6, 0,982,  2, index2+0, 11, index3 )
	    if( index3 .eq. 0 ) goto 200
100	continue
200	call putval(5, 0,985,  5, player, index2 )

300	call getval(6, 0,987,  2, index2, 11, numuse )
	if( numuse .ge. 10 ) goto 600
	call addval(4, 0,989,  -2, 1 )

	call getval(5, 0,991,  12, index1, index3 )
	call getval(5, 0,992,  15, index3, type )
	if( type .eq. 0 ) goto 400
	call getval(6, 0,994,  2, index2, type, index3 )
	if( iplayr .lt. 0 .and. index3 .ne. 0 ) goto 400
	call putval(4, 0,996,  -2, index1 )
	if( index3 .eq. 0 ) goto 700
	index1 = index3

400	index3 = 6
500	    call getval(6, 0,1001,  2, index2, index3, index4 )
	    if( index4 .ne. 0 .and. iplayr .lt. 0 ) goto 550
	    call putval(4, 0,1003,  -2, index1 )
	    if( index4 .eq. 0 ) goto 700
	    index1 = index4
550	    index3 = index3 + 1
	if( index3 .lt. 11 ) goto 500

600	failed = .true.
700	call unlock
	return

	end
C
	subroutine takout( index1, index2, failed )

	implicit integer ( a - z )
	logical failed

	call lock
	failed = .true.
	call getval(5, 0,1021,  5, index2, ival )
	if( ival .eq. 0 ) goto 300

	do 100 ival1 = 1, 10
	    call getval(6, 0,1025,  2, ival, ival1+0, ival2 )
	    if( ival2 .ne. index1 ) goto 100
	    failed = .false.
	    call putval(4, 0,1028,  -2, 0 )
	    goto 200

100	continue
	goto 300

200	call addval(6, 0,1034,  2, ival, 11, -1 )
	call getval(6, 0,1035,  2, ival, 11, ival1 )
	if( ival1 .gt. 0 ) goto 300
	call putval(5, 0,1037,  5, index2, 0 )
300	call unlock
	return
	end
C
	subroutine pname( index, ilen )

	implicit integer ( a - z )

	call getval(5, 0,1045,  12, index, index1 )
	call getval(5, 0,1046,  3, index1, name )
	uselen = ilen
	if( job(-1) .eq. 0 ) goto 100
	if( uselen .lt. -6 ) uselen = -6
	if( uselen .gt. 6 ) uselen = 6

100	call string(3, name, 6, uselen )
	return
	end
C
	integer function weight( index1 )

	implicit integer ( a - z )
	logical pdlerr

	weight = 0

100	call getval(5, 0,1062,  4, index1, dummy )
	weight = weight + dummy
	call getval(5, 0,1064,  5, index1, index2 )
	if( index2 .eq. 0 .or. index2 .eq. 511 ) goto 300
	index3 = 0

200	if( index3 .eq. 10 ) goto 300
	index3 = index3 + 1
	call getval(6, 0,1070,  2, index2, index3, index4 )
	if( index4 .eq. 0 .or. index4 .eq. 511 ) goto 200
	call pushvl( index1, pdlerr )
	call pushvl( index2, pdlerr )
	call pushvl( index3, pdlerr )
	index1 = index4
	goto 100

300	call popval( index3, pdlerr )
	if( pdlerr )  return
	call popval( index2, pdlerr )
	call popval( index1, pdlerr )
	goto 200

	end
C
	integer function cost( index1 )

	implicit integer ( a - z )
	logical pdlerr

	cost = 0

100	call getval(5, 0,1092,  12, index1, index5 )
	call getval(5, 0,1093,  13, index5, dummy )
	cost = cost + dummy
	call getval(5, 0,1095,  5, index1, index2 )
	if( index2 .eq. 0 .or. index2 .eq. 511 ) goto 300
	index3 = 0

200	if( index3 .eq. 10 ) goto 300
	index3 = index3 + 1
	call getval(6, 0,1101,  2, index2, index3, index4 )
	if( index4 .eq. 0 ) goto 200
	call pushvl( index1, pdlerr )
	call pushvl( index2, pdlerr )
	call pushvl( index3, pdlerr )
	index1 = index4
	goto 100

300	call popval( index3, pdlerr )
	if( pdlerr )  return
	call popval( index2, pdlerr )
	call popval( index1, pdlerr )
	goto 200

	end
C
	integer function holds( index, name )

	implicit integer ( a - z )

	holds = 0
	call getval(5, 0,1121,  5, index, index1 )
	if( index1 .eq. 0 .or. index1 .eq. 511 )  return
	do 100 itemp = 1, 10
	    index2 = itemp
	    call getval(6, 0,1125,  2, index1, index2, index3 )
	    if( index3 .eq. 0 ) goto 100
	    call getval(5, 0,1127,  12, index3, index4 )
	    if( name .eq. index4 ) goto 200
100	continue
	return

200	holds = index3
	return
	end
C
	integer function at( x, y, z, name )

	implicit integer ( a - z )

	at = 0
	call getval(7, 0,1140,  1, x, y, z, index1 )
	if( index1 .eq. 0 .or. index1 .eq. 511 )  return
	do 100 itemp = 1, 10
	    index2 = itemp
	    call getval(6, 0,1144,  2, index1, index2, index3 )
	    if( index3 .eq. 0 .or. index3 .eq. 511 ) goto 100
	    call getval(5, 0,1146,  12, index3, index4 )
	    if( name .eq. index4 ) goto 200
100	continue
	return

200	at = index3
	return
	end
C
	integer function canhld( index1 )

	implicit integer ( a - z )

	call getval(5, 0,1158,  12, index1, index2 )
	call getval(5, 0,1159,  14, index2, canhld )
	canhld = canhld - weight( index1 )
	if( canhld .lt. 0 )  canhld = 0
	return
	end
C
	logical function enemy( x, y, z, player, dexter )

	implicit integer ( a - z )

	dice1 = 0
	do 100 itemp = 1, 52
	    if( itemp .eq. player ) goto 100
	    iplayr = itemp
	    call getval(5, 0,1172,  10, iplayr, ival )
	    if( ival .eq. 0 ) goto 100
	    ival = 0
	    if(iplayr.le.26)call getval(6, 0,1175,  23, iplayr, player, ival )
	    if( ival .eq. 1 ) goto 100
	    call getval(6, 0,1177,  19, iplayr, 1, ax )
	    if( ax .ne. x ) goto 100
	    call getval(6, 0,1179,  19, iplayr, 2, ay )
	    if( ay .ne. y ) goto 100
	    call getval(6, 0,1181,  19, iplayr, 3, az )
	    if( az .ne. z ) goto 100
	    dice1 = dice1 + iran( 18 )
100	continue

	enemy = .false.
	if( dice1 .gt. dexter )  enemy = .true.
	return
	end
C
	subroutine map( failed )

	implicit integer ( a - z )

	integer filesp( 13 )
	logical failed, lerror

	i = itty( job(0) )
	call nodlin( i, in, il )
	filesp( 3 ) = isxbit('LPT00~') + (in/8)*4096 + mod(in,8)*64
	filesp( 4 ) = igtab(job(0),95)
	filesp( 5 ) = isxbit('MAP~')
	call ofile( 10, filesp, 0 )
	if( lerror(0) )  return
	call wfile( 10, filesp )
	if( lerror(0) )  return
	call select( 10 )

	do 400 ztemp = 4, 1, -1
	    z = ztemp
	    call chrout( 12 )
	    call string
     &(1,'^M^S^S^S^I^I^I^I^I^I    * * * C a v e  m a p * * *
     &^M^S^I^I^I^I^I^I^I      Floor ^E')
	    call number(1, z )
	    call string(1,'^M^S^S^S^I^I    ^E')
	    do 50 i = 1, 25
		call number(2, i*2, 4 )
50	    continue
	    call string(1,'^M^S^E')
	    do 300 ytemp = 50, 1, -1
		y = ytemp
		call string(1,'^I^I    >^E')
		do 100 xtemp = 2, 50, 2
		    ival1 = 0
		    call getval(7, 0,1225,  16, xtemp+0, y, z, ival1 )
		    call getval(7, 0,1226,  1, xtemp+0, y, z, ival )
		    call phex( ival, ival1 )
100		continue
		call number(2, y, 3 )
		call string(1,'^M^S^I^I^E')
		call number(2, y, 2 )
		call chrout(32)
		do 200 xtemp = 1, 49, 2
		    ival1 = 0
		    call getval(7, 0,1235,  16, xtemp+0, y, z, ival1 )
		    call getval(7, 0,1236,  1, xtemp+0, y, z, ival )
		    call phex( ival, ival1 )
200		continue
		call string(1,'<^M^S^E')
300	    continue
	    call string(1,'^I^I  ^E')
	    do 350 i = 1, 25
		call number(2, i*2-1, 4 )
350	    continue
400	continue

	call string(1,'^LMap indices:^M^S^S^S^E')
	ipos = 0
	do 500 z = 4, 1, -1
	    do 500 y = 50, 1, -1
		do 500 x = 1, 50
		    call getval(7, 0,1252,  1, x+0, y+0, z+0, ival )
		    if( ival .eq. 0 .or. ival .eq. 511 ) goto 500
		    ipos = ipos + 1
		    call string(1,'       ^E')
		    call chrout(40)
		    call number(2, x+0, -2 )
		    call chrout(44)
		    call number(2, y+0, -2 )
		    call chrout(44)
		    call number(1, z+0 )
		    call string(1,'):  ^E')
		    call number(2, ival, 3 )
		    call number(3, ival, 4, 36 )
		    if( mod( ipos, 4 ) .eq. 0 )  call string(1,'^M^S^E')
500	continue

	call string(1,'^LGroup indices:^M^S^S^S^E')
	do 700 itemp = 1, 510
	    ind = itemp
	    call getval(6, 0,1271,  2, ind, 11, ival )
	    if( ival .eq. 0 ) goto 700
	    call string(1,'       ^E')
	    call number(2, ind, 3 )
	    call number(3, -ind, 3, 36 )
	    call string(1,'  Length:^E')
	    call number(2, ival, 2 )
	    do 600 j = 1, 10
		call getval(6, 0,1279,  2, ind, j+0, ival )
		if( ival .eq. 0 ) goto 600
		call string(1,'   ^E')
		call number(2, j+0, 2 )
		call chrout(58)
		call number(2, ival, 3 )
600	    continue
	    call string(1,'^M^S^E')
700	continue

	call string
     &(1,'^LObject indices:^M^S^S^SIndex^IName^IWeight^IHolds^I
     &IS^IDamage^ISuccess^IJob^IDir^ICoordinate^I^IAllies^M^S^E')
	do 1100 itemp = 1, 510
	    ind = itemp
	    call getval(5, 0,1294,  10, ind, ival )
	    if( ival .eq. 0 ) goto 1100
	    call number(2, ind, 3 )
	    call chrout( 9 )
	    call pname( ind, 4 )
	    call chrout( 9 )
	    call getval(5, 0,1300,  4, ind, ival )
	    call number(1, ival )
	    call chrout(58)
	    call number(1, weight(ind) )
	    call chrout(9)
	    call getval(5, 0,1305,  5, ind, ival )
	    if( ival .eq. 511 ) goto 800
	    call number(1, ival )
	    call number(3, -ival, 0, 36 )
800	    call chrout( 9 )
	    call getval(5, 0,1310,  12, ind, ival )
	    call number(1, ival )
	    if( ind .gt. 52 ) goto 1000
	    call chrout( 9 )
	    call getval(6, 0,1314,  6, ind, 1, ival )
	    call number(1, ival )
	    call chrout(44)
	    call getval(6, 0,1317,  6, ind, 2, ival )
	    call number(1, ival )
	    call chrout(44)
	    call getval(6, 0,1320,  6, ind, 3, ival )
	    call number(1, ival )
	    call chrout( 9 )
	    call getval(5, 0,1323,  21, ind, ival )
	    call number(1, ival )
	    call chrout( 9 )
	    if( ind .le. 26 )call getval(6, 0,1326,  7, ind, 1, ival )
	    if( ind .le. 26 )call number(1, ival )
	    call chrout( 9 )
	    call getval(5, 0,1329,  8, ind, ival )
	    call number(1, ival )
	    call chrout( 9 )
	    call getval(6, 0,1332,  19, ind, 1, x )
	    call getval(6, 0,1333,  19, ind, 2, y )
	    call getval(6, 0,1334,  19, ind, 3, z )
	    call outnum(3, x, y, z )
	    if( ind .gt. 26 ) goto 901
	    call chrout( 9 )
	    call chrout( 9 )
	    do 900 ptemp = 1, 26
		p = ptemp
		call getval(6, 0,1341,  23, ind, p, ival )
		if( ival .ne. 0 )  call chrout( p+64 )
900	    continue
901	    continue
1000	    call string(1,'^M^S^E')
1100	continue

	call string(1,'^LInformation for item types:^M^S^S^SIndex^IName
     &^ICost^ICarries^IWhere^IDamage^IStren^IType^M^S^E')
	do 1300 itemp = 1, 100
	    ind = itemp
	    call getval(5, 0,1352,  3, ind, ival )
	    if( ival .eq. 0 ) goto 1300
	    call number(2, ind, 3 )
	    call chrout( 9 )
	    call string(3, ival, 6, 4 )
	    call chrout( 9 )
	    call getval(5, 0,1358,  13, ind, ival )
	    call chrout(36)
	    call number(1, ival )
	    call chrout( 9 )
	    call getval(5, 0,1362,  14, ind, ival )
	    call number(1, ival )
	    call chrout( 9 )
	    call getval(5, 0,1365,  15, ind, ival )
	    call number(1, ival )
	    call chrout( 9 )
	    call getval(5, 0,1368,  17, ind, ival )
	    call number(1, ival/10 )
	    call chrout(32)
	    call number(1, mod(ival,10)-5 )
	    call chrout( 9 )
	    call getval(5, 0,1373,  18, ind, ival )
	    call number(1, ival )
	    call chrout( 9 )
	    call getval(5, 0,1376,  24, ind, ival )
	    call number(1, ival )
	    call string(1,'^M^S^E')
1300	continue

	call string(1,'^LStore indices:^M^S^S^S^E')
	ipos = 0
	do 1400 itemp = 1, 80
	    ind = itemp
	    call getval(5, 0,1385,  11, ind, ival )
	    if( ival .eq. 0 ) goto 1400
	    call string(1,'                  ^E')
	    call number(2, ind, 2 )
	    call string(1,'  -  ^E')
	    call number(2, ival, 3 )
	    ipos = ipos + 1
	    if( mod( ipos, 4 ) .eq. 0 ) call string(1,'^M^S^E')
1400	continue
	failed = .false.
	call close( 10 )
	call select( 0 )
	return
	end
C
	subroutine phex( ival, ival1 )

	if( ival1 .eq. 0 )call chrout(60)
	if( ival1 .ne. 0 )call chrout(91)
	if( ival .eq. 0 )  call string(1,'##^E')
	if( ival .eq. 511 )  call string(1,'  ^E')
	if( ival .gt. 0 .and. ival .lt. 511 )call number(3, ival, 2, 36 )
	if( ival1 .eq. 0 )call chrout(62)
	if( ival1 .ne. 0 )call chrout(93)

	return
	end
C
	subroutine monstr

C****** SUBROUTINE CONTROLS ALL MONSTERS ************************

	implicit integer ( a - z )
	logical failed

	do 1000 i = 1, 26
	    mindex = i
	    tindex = mindex + 26
	    call getval(5, 0,1421,  10, tindex, ival )
	    if( ival .ne. 0 ) goto 100

C****** MONSTER MUST BE (RE) CREATED ****************************

	    call putval(4, 0,1426,  -10, 1 )
	    call getval(5, 0,1427,  25, mindex, ival )
	    call putval(5, 0,1428,  4, tindex, ival )
	    call getval(6, 0,1429,  27, mindex, 1, ival )
	    call putval(6, 0,1430,  27, mindex, 2, ival )
	    call putval(5, 0,1431,  12, tindex, tindex )
	    call putval(5, 0,1432,  8, tindex, iran(6) )
	    call getval(5, 0,1433,  30, mindex, z )
	    z = iran( z+1 )
50	    x = iran( 49 ) + 1
	    y = iran( 49 ) + 1
	    call getval(7, 0,1437,  1, x, y, z, ival )
	    if( ival .eq. 0 ) goto 50
	    call drop( failed, .true., x, y, z, tindex )
	    call putval(6, 0,1440,  19, tindex, 1, x )
	    call putval(6, 0,1441,  19, tindex, 2, y )
	    call putval(6, 0,1442,  19, tindex, 3, z )
	    call getval(5, 0,1443,  29, mindex, nhex )
	    if( nhex .le. 1 ) goto 71
	    do 70 ihex= 1, nhex-1
60		idir = iran(6)
		call newxy( x, y, idir, nx, ny )
		if( nx .eq. 0 ) goto 60
		call getval(7, 0,1449,  1, nx, ny, z, ival )
		if( ival .eq. 0 ) goto 60
		call putval(6, 0,1451,  31, mindex, ihex+0, idir )
		call drop( failed, .true., nx, ny, z, tindex )
		x = nx
		y = ny
70	    continue
71	    continue

C****** MOVE MONSTER ********************************************

100	    call getval(6, 0,1460,  27, mindex, 2, streng )
	    call getval(5, 0,1461,  26, mindex, dexter )
	    call getval(6, 0,1462,  19, tindex, 1, x )
	    call getval(6, 0,1463,  19, tindex, 2, y )
	    call getval(6, 0,1464,  19, tindex, 3, z )
	    call getval(5, 0,1465,  32, tindex, recovr )
	    if( recovr .gt. 0 ) call addval(4, 0,1466,  -32, -1 )
	    call getval(6, 0,1467,  6, tindex, 1, hoatme )
	    if( hoatme .eq. 0 ) goto 105
	    call putval(4, 0,1469,  -6, 0 )
	    call getval(6, 0,1470,  6, tindex, 3, force )
C	    IF( IRAN(6)+IRAN(6)+IRAN(6).LT.DEXTER.AND.RECOVR.LE.0 )
C     & GOTO 104
	    streng = streng - force
	    call putval(5, 0,1474,  21, hoatme, 2 )
	    call putval(6, 0,1475,  27, mindex, 2, streng )
	    if( streng .gt. 0 ) goto 105
	    call putval(6, 0,1477,  6, hoatme, 4, tindex )
	    call remove( x, y, z, tindex, failed )
	    if(failed)call bugmsg('MONSTR: REMOVE#1^E',x,y,z,tindex)
	    call getval(5, 0,1480,  29, mindex, nhex )
	    if( nhex .le. 1 ) goto 103
	    do 102 ihex = 1, nhex-1
		call getval(6, 0,1483,  31, mindex, ihex+0, idir )
		call newxy( x, y, idir, nx, ny )
		call remove( nx, ny, z, tindex, failed )
		if(failed)call bugmsg('MONSTR: REMOVE#2^E',nx,ny,z,tindex)
		x = nx
		y = ny
102	    continue
103	    continue
	    call putval(5, 0,1491,  10, tindex, 0 )
	    goto 1000
104	    call putval(5, 0,1493,  21, hoatme, 3 )

C****** FIND OUT IF ANY ENEMY IS PRESENT, IF SO, ATTACK *********

105	    if( recovr .gt. 0 ) goto 1000
	    bstdst = 100.
	    do 150 a = 1, 26
		aindex = a
		call getval(5, 0,1501,  10, aindex, ival )
		if( ival .eq. 0 ) goto 150
		call getval(6, 0,1503,  19, aindex, 3, az )
		if( az .ne. z ) goto 150
		call getval(6, 0,1505,  19, aindex, 1, ax )
		call getval(6, 0,1506,  19, aindex, 2, ay )
		dist = sqrt((x-ax+0.0)**2 + (y-ay+0.0)**2)
		if( dist .gt. bstdst ) goto 150
		bstdst = dist
		bindex = aindex
		dir = findir( x, y, ax, ay )
150	    continue
	    if( bstdst .gt. 10 ) dir = iran( 6 )
	    monctr = 0
	    goto 170

160	    monctr = monctr + 1
	    if( monctr .eq. 10 ) goto 1000
	    dir = newdir( dir, iran(3)-2 )

170	    call putval(5, 0,1521,  8, tindex, dir )
	    call newxy( x, y, dir, nx, ny )
	    if( nx .eq. 0 ) goto 160
	    call getval(7, 0,1524,  1, nx, ny, z, ival )
	    if( ival .eq. 0 ) goto 160
	    if( bstdst.le.2.0 .and. at(nx,ny,z,bindex).ne.0 ) goto 600
	    call drop( failed, .true., nx, ny, z, tindex )
	    if( failed ) goto 160
	    call remove( x, y, z, tindex, failed )
	    if(failed)call bugmsg('MONSTR: REMOVE#3^E',x,y,z,tindex)
	    call putval(6, 0,1531,  19, tindex, 1, nx )
	    call putval(6, 0,1532,  19, tindex, 2, ny )
	    call getval(5, 0,1533,  29, mindex, nhex )
	    if( nhex .le. 1 ) goto 301
	    dir = newdir( dir, 3 )
	    do 300 ihex = 1, nhex-1
		call getval(6, 0,1537,  31, mindex, ihex+0, idir )
		call newxy( x, y, idir, nx, ny )
		call putval(6, 0,1539,  31, mindex, ihex+0, dir )
		dir = idir
		call remove( nx, ny, z, tindex, failed )
		call drop( failed, .true., x, y, z, tindex )
		x = nx
		y = ny
300	    continue
301	    continue
	    if( 20-dexter .gt. 0 ) call putval(5, 0,1547,  32, tindex, 20-dexter )
	    goto 1000

C****** MONSTER IS ATTACKING ************************************

600	    method = iran( 20 )
	    do 700 j = 1, 5
		call getval(6, 0,1554,  28, mindex, j+0, ival )
		if( ival .ge. method ) goto 800
		method = method - ival
700	    continue
800	    call putval(6, 0,1558,  6, bindex, 1, tindex )
	    call putval(6, 0,1559,  6, bindex, 2, 511+j )
	    call putval(6, 0,1560,  6, bindex, 3, iran( streng*j/5 ) )
	    if( 33-dexter.gt.0 )call putval(5, 0,1561,  32, tindex, 33-dexter )
1000	continue
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
C	CALL CHROUT(' ')
C	CALL STRING(3, JSTAT( IJOB ), 6, 2 )
	return
	end

	subroutine finwrd( word, ind )
	implicit integer ( a - z )
	logical streq

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla
	do 100 ind = 1, 100
	    call getval(5, 0,1602,  10, ind+0, ival )
	    if( ival .eq. 0 ) goto 100
	    call getval(5, 0,1604,  3, ind+0, nname )
	    if( streq( nname, word ) ) return
100	continue
	return
	end

C
	subroutine fmain

	implicit integer ( a - z )

	logical enemy, iniflg, lprivd, failed, parry, lerror
	integer comara( 80 ), parara( 40 ), body( 10 ), month(12)
	integer filesp( 13 )
	logical cansee( 52 ), newscr, streq

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data newscr/.true./, imoney/500/, nitem/10/, elevel/25/
	data month/'JAN','FEB','MAR','APR','MAY','JUN','JUL',
     &'AUG','SEP','OCT','NOV','DEC'/

	iclwhi = 1
	icldbl = 2
	iclred = 3
	icllbl = 4
	iclpur = 5
	iclgre = 6
	iclyel = 7
	iclbla = 8
	call pback( iclbla )
	call pcolor( iclwhi )

	call settty( comara, parara, ilen, lprivd, filesp )
	call enable
	call check( iniflg )
	if( iniflg )  call initdb( comara, parara, filesp )
	call clrscr
	call finwrd( isxbit('disintegrator~'), disind )

	call colcur( 1, 24 )
	call string(1,'Your name?^E')
100	call colcur( 12, 24 )
	call string(1,'               ^E')
	call colcur( 12, 24 )
	call curbuf
	call getstr(3, comara, 15, ilen )
	if( job(-1) .ne. 0 .and. ilen .gt. 6 ) ilen = 6
	call colcur( 1, 10 )
	if( ilen .eq. 0 ) goto 100
	call allcap( comara, 1 )
	player = icon(comara(1))-64
	if( player.lt.1 .or. player.gt.52 ) goto 100
	call convrt( comara, ilen, 1, name, 6 )
	do 300 i = 1, 100
	    call getval(5, 0,1659,  3, i+0, ival )
	    if( streq(ival,name) ) goto 100
300	continue
	call getval(5, 0,1662,  10, player, ival )
	if( ival .ne. 0 ) goto 100
	call putval(4, 0,1664,  -10, 1 )
	call putval(5, 0,1665,  8, player, 7 )
	call lock
	do 350 i = 1, 26
	    call putval(6, 0,1668,  23, player, i+0, 0 )
350	continue
	call putval(6, 0,1670,  7, player, 1, job(0) )
	call putval(6, 0,1671,  7, player, 2, 0 )
	call putval(5, 0,1672,  3, player, name )
	call putval(5, 0,1673,  12, player, player )
	inplay = player
	call putval(5, 0,1675,  4, player, 70 )
	call unlock
	call colcur( 1, 23 )
	call string
     &(1,'How many extra points do you wish to allocate to strength?^E')
500	call colcur( 60, 23 )
	call string(1,'          ^E')
	call colcur( 60, 23 )
	call curbuf
	call getnum(3, 10, diff, 10 )
	if( diff .lt. 0 .or. diff .gt. 8 ) goto 500
	ustren = diff + 8
	streng = ustren
	udex = 24 - ustren
	dexter = udex
	call putval(5, 0,1690,  14, player, 6*streng + 70 )
600	do 700 i = 1, 80
	    comara( i ) = 0
700	continue
	call ppn( i, ipn1 )
	do 800 ppnind = 1, 100
	    call getval(6, 0,1696,  22, ppnind+0, 1, ipn2 )
	    if( ipn2 .eq. ipn1 .or. ipn2 .eq. 0 ) goto 900
800	continue
900	call putval(4, 0,1699,  -21, ipn1 )
	if( ipn2 .eq. 0 )  call putval(6, 0,1700,  22, ppnind+0, 2, imoney )
1000	do 1200 itemp = 1, 80
	    i = itemp
	    call getval(5, 0,1703,  11, i, index1 )
C	    IF( (INDEX1 .EQ. 0) .XOR. (COMARA( I ) .NE. 0) ) GOTO 1200
	    call colcur( ((i-1)/20)*20+1, 22-mod((i-1),20) )
	    if( index1 .eq. 0 ) goto 1100
C	    CALL GETVAL(5, 0,1707,  12, INDEX1, INDEX2 )
	    call number(2, i, 2 )
C	    CALL NUMBER(2, WEIGHT( INDEX1 ), 3 )
	    call string(1,' $^E')
	    call number(2, cost( index1 ), 3 )
	    call chrout(32)
	    call pname( index1, -17 )
	    comara( i ) = 1
	    goto 1200

1100	    comara( i ) = 0
	    call string(1,'                 ^E')

1200	continue
	call getval(6, 0,1721,  22, ppnind, 2, money )
	if( money .eq. 0 .or. nitem .eq. 0 ) goto 1400
	call colcur( 1, 2 )
	call string(1,'Enter number of item you want (-1 to stop):
     &            ^M^J$^E')
	call getval(6, 0,1726,  22, ppnind, 2, money )
	call number(1, money )
	call string(1,' left.  Can carry ^E')
	call number(1, canhld( player ) )
	call string(1,' Kilogram(s) in ^E')
	call number(1, nitem )
	call string(1,' item(s).       ^E')
	call colcur( 45, 2 )
	call curbuf
	call getnum(3, 10, item, 10 )
	call colcur( 1, 10 )
	if( item .eq. -1 ) goto 1400
	if( item .eq. 0 ) goto 1000
	if( item .lt. 1 .or. item .gt. 80 ) goto 1300
	call getval(5, 0,1740,  11, item, index1 )
	if( index1 .eq. 0 ) goto 1300
	i = cost( index1 )
	call getval(6, 0,1743,  22, ppnind, 2, money )
	if( money .lt. i ) goto 1300
	call phold( index1, -player, failed )
	if( failed ) goto 1300
	call update(0)
	money = money - i
	call update(0)
	call putval(6, 0,1750,  22, ppnind, 2, money )
	call update(0)
	call putval(5, 0,1752,  11, item, 0 )
	call update(0)
	nitem = nitem - 1
	call update(0)
	goto 1000

1300	call clrscr
	call colcur( 45, 2 )
	call string(1,'* Invalid *^E')
	goto 600

1400	call putval(6, 0,1763,  22, ppnind, 2, money )
	x = iran( 50 )
	y = iran( 50 )
	z = 4
	call getval(7, 0,1767,  1, x, y, z, ival )
	if( ival .eq. 0 ) goto 1400
	call putval(5, 0,1769,  13, player, money )
	dir = iran( 6 )
	call putval(5, 0,1771,  8, player, dir )
	call drop( failed, .true., x, y, z, player )
	call usrset( 1030, 1 )
	call usrset( 1045, 0 )
	call usrset( 1031, 1 )
	call usrset( 1032, 1 )
	call usrset( 1041, 0 )
	call usrset( 536, ttyspd )
	goto 1600

C****************************************************************
C****** GAME LOOP ***********************************************
C****************************************************************

1500	call messag(icllbl,'Ok.^E')

1600	if(100*igtab(44,9)/igtab(40,9).le.85.or.lprivd) goto 1625
	call messag(iclpur,
     &	    'It is over styxline.  The game must cease.^M^J^E')
	call cease( x, y, z, player )

1625	call getval(5, 0,1792,  20, 75, ival )
	if( ival .eq. 0 ) goto 1650
	call clrscr
	call colcur( 5, 10 )
	call colstr(iclred,'^G^GYou have failed. ^E')
	call pname( ival, -17 )
	call string(1,' Has left the cave with the disintegrator.^M^J^E')
	call cease( x, y, z, player )

1650	call usrset( 1048, ttyspd )
	call usrset( 1049, ttyspd )
	call usrset( 1026, 1 )
	runing = 0
	call putval(6, 0,1805,  19, player, 1, x )
	call putval(6, 0,1806,  19, player, 2, y )
	call putval(6, 0,1807,  19, player, 3, z )
	call putval(5, 0,1808,  14, player, 6*streng + 70 )
	call getval(6, 0,1809,  7, player, 2, ival )
	if( ival .lt. elevel ) goto 1675
	elevel = 2*elevel
	ival = iran(2) - 1
	streng = streng + ival
	ustren = ustren + ival
	udex = udex + 1 - ival
1675	if( dir .ne. 0 ) goto 1700
	restr = restr + 1
	if( mod( restr, 25 ) .eq. 0 )  streng = streng + 1
	if( streng .gt. ustren )  streng = ustren

C****** CHECK FOR ANY MESSAGES **********************************

1700	call getval(5, 0,1823,  20, 1, isourc )
	if( isourc .eq. 0 ) goto 2101
	call getval(5, 0,1825,  20, 4, iuser )
	if( iuser .lt. nuser(0) ) goto 1800
	call putval(5, 0,1827,  20, 1, 0 )
	goto 2101
1800	call addval(4, 0,1829,  -20, 1 )
	if( isourc .eq. player ) goto 2101
	call getval(6, 0,1831,  19, isourc, 3, nz )
	if( nz .ne. z ) goto 2101
	call getval(6, 0,1833,  19, isourc, 1, nx )
	call getval(6, 0,1834,  19, isourc, 2, ny )
	dfac = sqrt( (x-nx+0.0)**2 + (y-ny+0.0)**2 )
	call getval(5, 0,1836,  20, 2, vol )
	vol = 20*(6**vol) / (dfac+1)
	if( vol .lt. 2 ) goto 2101
	vdir = 0
	if( dfac .ne. 0 )  vdir = findir( x, y, nx, ny )
	if( vol .gt. 10 ) goto 1900
	call messag(iclwhi,'You hear a voice^E')
	if( vol .lt. 5 )  call chrout(46)
	if( vol .lt. 5 ) goto 2101
	call string(1,' from direction ^E')
	call number(1, vdir )
	call chrout(46)
	goto 2101
1900	if( vol .ge. 15 ) goto 2000
	call messag(iclwhi,'You hear ^E')
	call pname( isourc, -17 )
	call string(1,' from direction ^E')
	call number(1, vdir )
	call chrout(46)
	goto 2101
2000	call messag(iclwhi,'^G^E')
	call pname( isourc, -17 )
	call chrout(40)
	call number(1, vdir )
	call string(1,'): ^E')
	call getval(5, 0,1861,  20, 3, length )
	do 2100 i = 1, length
	    call getval(5, 0,1863,  20, i+4, ival )
	    call chrout( ival )
2100	continue
2101	continue

C******	HAS ANYONE TOUCHED THE DISI SINCE LAST CLICK *************

	call getval(5, 0,1870,  33, 1, ival )
	if( ival .eq. olndst ) goto 2110
	call messag(iclred,'^GThe disintegrator has been picked up.^E')
	olndst = ival

C****** WHAT DID THE OTHER GUY DO TO OUR ATTACK *****************

2110	call getval(5, 0,1877,  21, player, ival )
	if( ival .eq. 0 ) goto 2150
	call putval(4, 0,1879,  -21, 0 )
	if( ival .eq. 1 ) call messag(iclred,'You hit him on the head.^E')
	if( ival .eq. 2 ) call messag(icllbl,'You hit him.^E')
	if( ival .eq. 3 ) call messag(iclwhi,'He parried.^E')
	if( ival .eq. 4 )
     &	    call messag(iclwhi,'His shield blocked the blow.^E')
	if( ival .eq. 5 )
     &	    call messag(icllbl,'He parried but he lost his weapon.^E')

2150	call getval(6, 0,1888,  6, player, 4, ival )
	if( ival .eq. 0 ) goto 2200
	call putval(4, 0,1890,  -6, 0 )
	if( ival .le. 26 )call messag(iclwhi,'^G^E')
	if( ival .gt. 26 )call messag(icllbl,'^GThe ^E')
	call pname( ival, -17 )
	call string(1,' is dead.^E')

C****** FIND OUT PLAYER'S CURRENT DEXTERITY *********************


2200	dexter = udex
	call getval(5, 0,1900,  5, player, index1 )
	if( index1 .eq. 0 ) goto 2400
	call getval(6, 0,1902,  2, index1, 3, index2 )
	if( index2 .ne. 0 )  dexter = dexter - 1
	call getval(6, 0,1904,  2, index1, 2, index2 )
	if( index2 .eq. 0 ) goto 2300
	call getval(5, 0,1906,  12, index2, index3 )
	call getval(5, 0,1907,  18, index3, imod )
	dexter = dexter - imod
2300	call getval(6, 0,1909,  2, index1, 5, index2 )
	if( index2 .eq. 0 ) goto 2400
	call getval(5, 0,1911,  12, index2, index3 )
	call getval(5, 0,1912,  18, index3, imod )
	dexter = dexter - imod/2

C****** UPDATE THE SCREEN ***************************************

2400	call updscr( player, newscr, streng, dexter, cansee, disind )
	if( .not. cansee(inplay) )  inplay = player
	if( inplay .eq. olplay .and. .not. newscr ) goto 2500
	call colcur( 62, 24 )
	call pname( inplay, 4 )
	olplay = inplay
2500	call getval(5, 0,1923,  5, inplay, index1 )
	do 2600 itemp = 1, 10
	    index2 = itemp
	    if( index1 .eq. 0 )  index3 = 0
	    if( index1 .ne. 0 )call getval(6, 0,1927,  2, index1, index2, index3 )
	    if( index3 .eq. body(index2) .and. .not. newscr ) goto 2600
	    call colcur( 67, 24-index2 )
	    call irepeat(32,13)
	    call cursor( 67, 24-index2 )
	    body( index2 ) = index3
	    if( index3 .ne. 0 ) goto 2550
	    if( index2.le.2 .or. index2.eq.4 .or. index2.eq.5 )
     &		call pcolor(iclred)
	    call string(1,'Nothing^E')
	    call pcolor( iclwhi )
	    goto 2600
2550	    if( index3 .eq. 511 ) call colstr(iclgre,'Oddness^E')
	    if( index3 .eq. 511 ) goto 2600
	    call getval(5, 0,1941,  12, index3, index4 )
	    call getval(5, 0,1942,  13, index4, ocost )
	    if( ocost .le. 500 .and. index4 .ne. disind ) goto 2560
	    call pback( iclyel )
	    call pcolor( icldbl )
2560	    call pname( index3, -17 )
	    call pback( iclbla )
	    call pcolor( iclwhi )
2600	continue
	call putval(5, 0,1950,  32, player, recovr )
	call getval(5, 0,1951,  32, inplay, trecvr )
	if( trecvr .eq. orecvr ) goto 2700
	call colcur( 55, 10 )
	if( trecvr .eq. 0 )  call string(1,'             ^E')
	if( trecvr .gt. 0 )  call string(1,'Recovery: ^E')
	if( trecvr .gt. 0 )  call number(2, trecvr, 3 )
	orecvr = trecvr
2700	newscr = .false.

C****** CHECK TO SEE IF HE IS BEING ATTACKED ********************

	call getval(6, 0,1962,  6, player, 1, atackr )
	if( atackr .eq. 0 ) goto 3500
	call putval(4, 0,1964,  -6, 0 )
	if( atackr .ne. 1023 ) goto 2710
	call messag(iclred,
     &	    'You have been disintegrated.  You are dead.^E')
	call cease( x, y, z, player )
2710	call getval(6, 0,1969,  6, player, 2, iweapn )
	if( iweapn .gt. 511 ) goto 2760
	call messag(iclred,'^E')
	call pname( atackr, -17 )
	if( iweapn .eq. 0 ) goto 2750
	call string(1,' attacks with ^E')
	call pname( iweapn, -17 )
	goto 2800

2750	call string(1,' hits you^E')
	goto 2800

2760	call messag(iclred,'The ^E')
	call pname( atackr, -17 )
	if( iweapn .eq. 512 ) call string(1,' bites you^E')
	if( iweapn .eq. 513 ) call string(1,' claws you^E')
	if( iweapn .eq. 514 ) call string(1,' burns you^E')
	if( iweapn .eq. 515 ) call string(1,' hits you^E')
	if( iweapn .eq. 516 ) call string(1,' smothers you^E')

C****** CAN I PARRY IT? *****************************************

2800	call getval(6, 0,1991,  6, player, 3, iforce )
	call getval(5, 0,1992,  5, player, index1 )
	if( iweapn.eq.0 .or. .not. parry .or. index1.eq.0 .or.
     &	recovr .gt. 0 ) goto 3200
	call getval(6, 0,1995,  19, atackr, 1, ax )
	call getval(6, 0,1996,  19, atackr, 2, ay )
	adir = findir( x, y, ax, ay )
	if( adir .ne. dir .and. adir .ne. newdir( dir, 1 )
     & .and.adir .ne. newdir( dir, -1 ) )goto 3200
	call getval(6, 0,2000,  2, index1, 4, index2 )
	if( index2 .eq. 0 ) goto 3000
	recovr = max0( 18 - dexter, 0 )
	dice1 = 0
	do 2900 i = 1, 3
	    dice1 = dice1 + iran(6)
2900	continue
	if( dice1 .gt. dexter ) goto 3000
	call putval(5, 0,2008,  21, atackr, 3 )
	call getval(5, 0,2009,  12, index2, index3 )
	call getval(5, 0,2010,  17, index3, idam )
	idam = iforce - (6*(idam/10) + mod( idam,10 ) - 5)
	if( idam .lt. 0 .or. idam .gt. (iran(6)+iran(6)) ) goto 3400
	call putval(5, 0,2013,  21, atackr, 5 )
	ival = iran( 2 )
	if( ival .eq. 1 )  call string(1,'.  Your weapon broke^E')
	if( ival .eq. 2 )  call string(1,'.  You dropped your weapon^E')
	call takout( index2, player, failed )
	call getval(5, 0,2018,  4, index2, gweigh )
	if( ival .eq. 1 )call putval(5, 0,2019,  10, index2, 0 )
	goto 3400

C****** HOW MUCH DOES SHIELD DETRACT FROM BLOW? *****************

3000	call getval(6, 0,2024,  2, index1, 5, index2 )
	if( index2 .eq. 0 ) goto 3200
	call getval(5, 0,2026,  12, index2, index3 )
	call getval(5, 0,2027,  18, index3, imod )
	dice1 = 0
	do 3100 i = 1, 4-imod
	    dice1 = dice1 + iran(6)
3100	continue
	if( dice1 .gt. dexter ) goto 3200
	iforce = iforce - imod
	if( iforce .gt. 0 ) goto 3200
	call putval(5, 0,2035,  21, atackr, 4 )
	call string(1,'.  Shield absorbs blow.^E')
	goto 3500

C****** NOW FIND OUT WHERE IT HIT HIM ***************************

3200	index2 = iran( 4 )
	if( index2 .gt. 1 )  index2 = 2
	if(index2.eq.1)call string(1,'.  Hit on the head with force ^E')
	if(index2.ne.1)call string(1,'.  Hit with force ^E')

C****** WHAT EFFECT DOES ARMOR HAVE? ****************************

	if( index1 .eq. 0 ) goto 3300
	call getval(6, 0,2049,  2, index1, index2, index3 )
	if( index3 .eq. 0 ) goto 3300
	call getval(5, 0,2051,  12, index3, index4 )
	if( index3 .eq. 0 ) goto 3300
	if( index2 .eq. 1 )  imod = 5
	if( index2 .ne. 1 )  call getval(5, 0,2054,  18, index4, imod )
	iforce = iforce - imod
	if( iforce .lt. 0 )  iforce = 0
3300	call number(1, iforce )
	streng = streng - iforce
	call chrout(46)
	call putval(5, 0,2060,  21, atackr, index2 )
	goto 3500

3400	call string(1,'.^E')
	call colstr(icllbl,'  You parried.^E')

3500	if( streng .gt. 0 ) goto 3600
	call putval(6, 0,2067,  6, atackr, 4, player )
	call string(1,'  You are dead.^E')
	call cease( x, y, z, player )
C
C****** INTERPRET COMMAND ***************************************

3600	if( recovr .gt. 0 )  recovr = recovr - 1
	if( wrdptr .gt. 0 ) goto 3700
	call curbuf
	call comand( ichar, comara, index )
	if( ichar .eq. -1 .or. index .eq. 0 ) goto 1600
	call parse( comara, index, parara, length, 40 )
	if( length .eq. 0 ) goto 1600
	wrdptr = 0
3700	call wrdnum( parara, wrdptr, verb, name1, name2, length )
	if( verb .eq. 0 ) goto 1600
	if( verb .le. 16 .or. recovr .le. 0 ) goto 3800
	call messag(iclyel,'You must recover.^E')
	goto 1600

3800	goto( 3900, 4000, 4100, 4200, 4300, 4600, 4700, 4800, 5010,
     &		5025, 5030, 5035, 5040, 5045, 5060, 5070, 5100, 5300,
     &		5350, 5500, 5700, 5800, 6600, 7300, 7400, 7900, 9000,
     &		10000, 10600, 11300, 11400, 11600, 12100, 12500 ) verb

C****** EXIT ****************************************************

3900	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	call cease( x, y, z, player )

C****** MAP *****************************************************

4000	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	if( .not. lprivd ) goto 7200
	call map( failed )
	if( .not. failed ) goto 1500
	call messag(iclyel,'Cannot create map.  Sorry.^E')
	goto 1600

C****** CLEAR SCREEN ********************************************

4100	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	newscr = .true.
	goto 1600

C****** GAG *****************************************************

4200	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	call usrset( 1035, 0 )
	goto 1500

C****** WHO *****************************************************

4300	if( name1 .lt. 0 ) goto 6500
	if( name2 .ne. 0 ) goto 8500
	if( name1 .gt. 0 ) goto 4500
	call messag(iclwhi,'Players: ^E')
	do 4400 itemp = 1, 26
	    index1 = itemp
	    call getval(5, 0,2125,  10, index1, ival )
	    if( ival .eq. 0 ) goto 4400
	    call chrout(32)
	    call pname( index1, -17 )
	    call chrout(58)
	    call getval(6, 0,2130,  7, index1, 2, ival )
	    call number(1, ival )
4400	continue
	goto 1600

4500	if( name1 .gt. 52 ) goto 7200
	if( name1 .gt. 26 ) goto 4550
	call getval(6, 0,2137,  7, name1, 1, ijob )
	if( ijob .eq. 0 ) goto 7200
	call messag(iclwhi,'Player ^E')
	call pname( name1, -17 )
	call string(1,' is ^E')
	call syswho( ijob )
	goto 1600

4550	call messag(iclwhi,'Monster ^E')
	call pname( name1, -17 )
	call chrout(46)
	goto 1600

C****** WHISPER ************************************************

4600	vol = 0
	goto 4900

C****** SAY ****************************************************

4700	vol = 1
	goto 4900

C****** SHOUT **************************************************

4800	vol = 2
4900	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	wrdptr = 0
	iquote = iserch( comara, 34, index )
	if( iquote .eq. 0 )  iquote = iserch( comara, 44, index )
	if( iquote .eq. 0 .or. iquote .eq. index ) goto 7200
	ilen = index - iquote
	if( ilen .gt. 70 )  ilen = 70
	call lock
	call putval(5, 0,2171,  20, 1, player )
	call putval(5, 0,2172,  20, 2, vol )
	call putval(5, 0,2173,  20, 3, ilen )
	call putval(5, 0,2174,  20, 4, 0 )
	comara( iquote ) = 32
	do 5000 i = 1, ilen
	    call putval(5, 0,2177,  20, i+4, icon( comara( iquote+i ) ) )
	    if( comara( iquote+i ) .eq. 34 )  call putval(4, 0,2178,  -20, 32 )
	    comara( iquote+i ) = 32
5000	continue
	call unlock
	goto 1500

C****** LOOK ****************************************************

5010	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	call messag(iclwhi,'Hex contains:^E')
	call getval(7, 0,2188,  1, x, y, z, index1 )
	do 5020 index2 = 1, 10
	    call getval(6, 0,2190,  2, index1, index2+0, index3 )
	    if( index3 .eq. 0 ) goto 5020
	    call string(1,'  ^E')
	    call pname( index3, -17 )
5020	continue
	ival = 0
	if( z .gt. 1 )  call getval(7, 0,2196,  16, x, y, z-1, ival )
	if( ival .ne. 0 )  call string(1,'  down-stair^E')
	ival = 0
	call getval(7, 0,2199,  16, x, y, z, ival )
	if( ival .ne. 0 )  call string(1,'  up-stair^E')
	goto 1600

C****** STATUS **************************************************

5025	if( name2 .lt. 0 ) goto 6500
	if( name2 .ne. 0 ) goto 8500
	if( name1 .eq. 0 )  index1 = player
	if( name1 .ne. 0 )  index1 = holds( player, name1 )
	if( index1 .eq. 0 ) goto 6900
	call messag(iclwhi,'Status of ^E')
	call pname( index1, -17 )
	call string(1,':  weight: ^E')
	call number(1, weight( index1 ) )
	call string(1,'  holds: ^E')
	call number(1, canhld( index1 ) )
	call string(1,'  value: $^E')
	call number(1, cost( index1 ) )
	if( name1 .ne. 0 ) goto 5027
	call string(1,' at (^E')
	call number(1, x )
	call chrout(44)
	call number(1, y )
	call chrout(44)
	call number(1, z )
	call string(1,') pointing ^E')
	call number(1, dir )
5027	call chrout(46)
	goto 1600

C****** ALLIES **************************************************

5030	if( name1 .ne. 0 ) goto 7200
	if( name2 .le. 0 .or. name2 .gt. 26 ) goto 7200
	call putval(6, 0,2234,  23, player, name2, 1 )
	goto 1500

C****** ENEMIES *************************************************

5035	if( name1 .ne. 0 ) goto 7200
	if( name2 .le. 0 .or. name2 .gt. 26 ) goto 7200
	call putval(6, 0,2241,  23, player, name2, 0 )
	goto 1500

C****** TIME ****************************************************

5040	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	call messag(iclwhi,'Time:  ^E')
	call datime( ival, ival, ival, index1, index2, index3, ival )
	call number(2, index1, -2 )
	call chrout(58)
	call number(2, index2, -2 )
	call chrout(58)
	call number(2, index3, -2 )
	call string(1,'    Cycles left:  ^E')
	call number(1, 25 - mod( restr, 25 ) )
	call string(1,'    LOGNUM/LOGMAX:  ^E')
	ilnum = igtab( 44, 9 )
	call number(1, ilnum )
	call chrout(47)
	ilmax = igtab( 40, 9 )
	call number(1, ilmax )
	call string(1,' = ^E')
	call number(1, 100*ilnum/ilmax )
	call chrout(37)
	goto 1600

C****** SWEAR ***************************************************

5045	numwrn = numwrn + 1
	if( numwrn .gt. 1 ) goto 5050
	call messag(iclred,
     & 'This is your first and last warning.  Do not swear.^G^E')
	goto 1600

5050	call clrscr
	call colcur( 30, 10 )
	call string(1,'You were warned.^E')
	call cease( x, y, z, -player )

C****** PARRY ***************************************************

5060	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	parry = .true.
	goto 1500

C****** NO PARRY ************************************************

5070	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	parry = .false.
	goto 1500

C****** TURN ****************************************************

5100	if( name1 .ge. 0 .or. name2 .ne. 0 ) goto 5200
	if( dir .eq. 0 ) goto 11500
	if( dir .eq. -name1 ) goto 5500
	if( name1 .gt. -7 )  dir = -name1
	if( name1 .eq. -7 )  dir = newdir( dir, -1 )
	if( name1 .eq. -8 )  dir = newdir( dir, 1 )
	call putval(5, 0,2300,  8, player, dir )
	goto 1500

5200	call messag(iclyel,'Which way?^E')
	goto 1600

C****** RUN *****************************************************

5300	runing = 3
	goto 5400

C****** JOG *****************************************************

5350	runing = 2

5400	runing = runing - 1

C****** WALK ****************************************************

5500	if( name1 .gt. 0 .or. name2 .ne. 0 ) goto 5200
	if( dir .eq. 0 ) goto 11500
	if( name1 .eq. 0 .or. dir .eq. -name1 ) goto 5600
	recovr = recovr + max0(16-dexter,0)/4
	if( dir .eq. 0 )  recovr = recovr + max0(16-dexter,0)
	if( name1 .gt. -7 )  dir = -name1
	if( name1 .eq. -7 )  dir = newdir( dir, -1 )
	if( name1 .eq. -8 )  dir = newdir( dir, 1 )
	call putval(5, 0,2327,  8, player, dir )

5600	call newxy( x, y, dir, nx, ny )
	nz = z
	if( nx .eq. 0 ) goto 6100
	goto 5900

C****** DECEND **************************************************

5700	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	nx = x
	ny = y
	nz = z - 1
	if( nz .lt. 1 ) goto 6100
	call getval(7, 0,2341,  16, nx, ny, nz, ival )
	if( ival .eq. 0 ) goto 6100
	goto 5900

C****** ASCEND **************************************************

5800	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	nx = x
	ny = y
	nz = z + 1
	call getval(7, 0,2351,  16, nx, ny, nz-1, ival )
	if( ival .eq. 0 ) goto 6100
	if( nz .eq. 5 ) goto 13000

5900	if( canhld(player) .eq. 0 ) goto 6000
	if( dir .eq. 0 ) goto 11500
	recovr = recovr + 20/canhld(player)
	if( enemy( x, y, z, player, dexter ) ) goto 6200
	if( enemy( nx, ny, nz, player, dexter ) ) goto 6300
	call getval(7, 0,2360,  1, nx, ny, nz, ival )
	if( ival .eq. 0 ) goto 6100
	call remove( x, y, z, player, failed )
	if( failed ) call bugmsg('FMAIN: REMOVE#1^E',x,y,z,player)
	x = nx
	y = ny
	if( z .ne. nz )  recovr = recovr + max0(16-dexter,0)/2
	z = nz
	call drop( failed, .true., x, y, z, player )
	if( runing .gt. 0 ) goto 5400
	goto 1500

6000	call messag(iclred,'You are not strong enough to move.^E')
	goto 1600

6100	call messag(iclred,'You have just bumped into a rock.^E')
	runing = 0
	recovr = max0( recovr + 20 - dexter, 0 )
	goto 1600

6200	call messag(iclred,'You couldn''t escape.^E')
	goto 1600

6300	call messag(iclred,'You are blocked.^E')
	goto 1600

6400	call messag(iclyel,'Nouns do not apply here.^E')
	goto 1600

6500	call messag(iclyel,'A direction does not apply here.^E')
	goto 1600

C****** GET *****************************************************

6600	if( name1 .lt. 0 .or. name2 .lt. 0 ) goto 6500
	if( name1 .eq. 0 ) goto 7200
	if( dir .eq. 0 ) goto 11500
	if( name2 .eq. 0 ) goto 6800
	if( name2 .le. 52 ) goto 6850
	index2 = holds( player, name2 )
	if( index2 .eq. 0 ) goto 7100
	index1 = holds( index2, name1 )
	if( index1 .eq. 0 ) goto 6900
	call takout( index1, index2, failed )
	if( failed ) goto 6900
	if( canhld(player) .lt. weight(index2) ) goto 6700
	call phold( index1, player, failed )
	if( .not. failed ) goto 1500

6700	call messag(iclyel,'Carrying too much.  An item dropped.^E')
	call drop( failed, .true., x, y, z, index1 )
	goto 1600

6800	index1 = at( x, y, z, name1 )
	if( index1 .eq. 0 ) goto 7000
	if( index1 .le. 52 ) goto 7800
	call remove( x, y, z, index1, failed )
	if( failed ) call bugmsg('FMAIN: REMOVE#2^E',x,y,z,index1)
	if( name1 .eq. disind ) call addval(5, 0,2418,  33, 1, 1 )
	if( canhld(player) .lt. weight(index1) ) goto 6700
	call phold( index1, player, failed )
	if( failed ) goto 6700
	goto 1500

6850	index1 = at( x, y, z, name2 )
	if( index1 .eq. 0 ) goto 10300
	call getval(5, 0,2426,  5, name2, index1 )
	if( index1 .eq. 0 .or. index1 .eq. 511 ) goto 6861
	do 6860 itemp = 1, 5
	    call getval(6, 0,2429,  2, index1, itemp+5, index2 )
	    if( index2 .eq. 0 ) goto 6860
	    call getval(5, 0,2431,  12, index2, index3 )
	    if( index3 .eq. name1 ) goto 6870
6860	continue
6861	continue
	call messag(iclyel,'That is not in his belt.^E')
	goto 1600

6870	if( 5*iran(6) .gt. dexter ) goto 6880
	call takout( index2, name2, failed )
	call phold( index2, player, failed )
	if( failed ) goto 6700
	recovr = max0( 40 - 2*dexter, 0 )
	goto 1600

6880	call messag(iclred, 'You couldn''t grab it.^E' )
	recovr = max0( 40 - 2*dexter, 0 )
	goto 1600

6900	call messag(iclyel,'You don''t have that.^E')
	goto 1600

7000	call messag(iclyel,'You can''t see one here.^E')
	goto 1600

7100	call messag(iclyel,'You aren''t carrying that container.^E')
	goto 1600

7200	call messag(iclyel,'What?^E')
	goto 1600

7300	if( name1 .le. 0 ) goto 7200
	if( name2 .ne. 0 ) goto 8500
	index1 = holds( player, name1 )
	if( index1 .eq. 0 ) goto 6900
	call takout( index1, player, failed )
	call phold( index1, player, failed )
	goto 1500

C****** PUT *****************************************************

7400	if( name1 .lt. 0 .or. name2 .lt. 0 ) goto 6500
	if( name1 .eq. 0 ) goto 7200
	if( dir .eq. 0 ) goto 11500
	index1 = holds( player, name1 )
	if( name1 .eq. disind .and. name2 .ne. 0 ) goto 7800
	if( index1 .eq. 0 ) goto 6900
	call takout( index1, player, failed )
	if( failed ) goto 6900
	if( name2 .eq. 0 ) goto 7500
	index2 = holds( player, name2 )
	if( index1 .eq. index2 ) goto 7700
	if( index2 .eq. 0 ) goto 7600
	call getval(5, 0,2483,  5, index2, index3 )
	if( index3 .eq. 511 ) goto 7700
	if( canhld(index2) .lt. weight(index1) ) goto 6700
	call putin( index1, index2, failed )
	if( failed ) goto 6700
	goto 1500

7500	call drop( failed, .true., x, y, z, index1 )
	goto 1500

7600	call phold( index1, player, failed )
	goto 7100

7700	call phold( index1, player, failed )
7800	call messag(iclyel,'That would be *VERY* difficult.^E')
	goto 1600

C****** INVENT **************************************************

7900	if( name1 .lt. 0 ) goto 6500
	if( name2 .ne. 0 ) goto 8500
	if( name1 .lt. 0 ) goto 6500
	if( name1 .le. 52 ) goto 8300
	index1 = holds( player, name1 )
	if( index1 .eq. 0 ) goto 6900
8000	call getval(5, 0,2508,  5, index1, index2 )
	if( index2 .eq. 511 ) goto 7800
	call messag(iclwhi,'Inventory: ^E')
	if( index2 .eq. 0 ) goto 8200
	do 8100 index3 = 1, 10
	    call getval(6, 0,2513,  2, index2, index3+0, index4 )
	    if( index4 .eq. 0 ) goto 8100
	    call chrout(32)
	    call pname( index4, -17 )
8100	continue
	goto 1600

8200	call string(1,'Nothing.^E')
	goto 1600

8300	if( name1 .eq. 0 )  name1 = player
	if( .not. cansee(name1) ) goto 8400
	inplay = name1
	goto 1500

8400	call messag(iclyel,'You can''t see him.^E')
	goto 1600

8500	call messag(iclyel,'Second noun does not apply here.^E')
	goto 1600

C****** ATTACK **************************************************

9000	if( dir .eq. 0 ) goto 11500
	if( name1 .eq. 0 )  name1 = oldnm1
	if( name2 .eq. 0 )  name2 = oldnm2
	if( name1 .le. 0 .or. name1 .gt. 52 ) goto 7800
	if( name2 .le. 52 ) goto 7800
	oldnm1 = name1
	oldnm2 = name2
	call getval(5, 0,2543,  24, name2, ival )
	if( ival .gt. 1 ) goto 11900
	index1 = holds( player, name2 )
	if( index1 .eq. 0 ) goto 6900
	call getval(5, 0,2547,  5, player, index2 )
	call getval(6, 0,2548,  2, index2, 4, index3 )
	if( index3 .eq. index1 ) goto 9200
9100	call messag(iclyel,'That is not in weapon arm.^E')
	goto 1600

9200	do 9300 i = -1, 1
	    call newxy( x, y, newdir( dir, i+0 ), nx, ny )
	    if( nx .eq. 0 ) goto 9300
	    index2 = at( nx, ny, z, name1 )
	    if( index2 .ne. 0 ) goto 9400
9300	continue
	call messag(iclyel,'He is not attackable.^E')
	goto 1600

9400	recovr = max0( 20-dexter, 0 )
	dice1 = 0
	do 9500 i = 1, 3
	    dice1 = dice1 + iran(6)
9500	continue
	if( dice1 .ne. 17 ) goto 9600
	call messag(iclred,'You fool, you dropped your weapon.^E')
	call takout( index1, player, failed )
	call drop( failed, .true., x, y, z, index1 )
	goto 1600

9600	if( dice1 .ne. 18 ) goto 9700
	call messag(iclred,'^GYou clod, you broke your weapon.^E')
	call takout( index1, player, failed )
	call putval(5, 0,2576,  10, index1, 0 )
	goto 1600

9700	call getval(5, 0,2579,  12, index1, index2 )
	call getval(5, 0,2580,  17, index2, idam )
	call getval(5, 0,2581,  18, index2, istr )
	imod = ustren - istr
	recovr = max0( 0, recovr-imod*2 )
	if( imod .gt. 0 )  imod = 0
	call messag(icllbl,'Effective dexterity: ^E')
	call number(1, dexter+imod )
	if( dice1 .gt. dexter+imod ) goto 9900
	indice = idam/10
	dice2 = 0
	do 9800 i = 1, indice
	    dice2 = dice2 + iran(6)
9800	continue
	dice2 = dice2 + mod( idam, 10 ) - 5 + imod
	if( dice2 .lt. 0 )  dice2 = 0
	if( dice1 .eq. 3 )  dice2 = dice2 * 3
	if( dice1 .eq. 4 )  dice2 = dice2 * 2
	if( dice1 .le. 4 )
     &  call string(1,'.  Critical hit.  Possible damage: ^E')
	if( dice1 .ge. 5 )
     &  call string(1,'.  Attack accurate.  Possible damage: ^E')
	call number(1, dice2 )
	call putval(6, 0,2602,  6, name1, 1, player )
	call putval(6, 0,2603,  6, name1, 2, index1 )
	call putval(6, 0,2604,  6, name1, 3, dice2 )
	if( name1 .gt. 26 )call addval(6, 0,2605,  7, player, 2, dice2 )
	call chrout(46)
	goto 1600

9900	call string(1,'.  You missed.^E')
	goto 1600

C****** HIT *****************************************************

10000	if( dir .eq. 0 ) goto 11500
	if( name1 .eq. 0 )  name1 = oldnm1
	if( name1 .le. 0 .or. name1 .gt. 52 ) goto 7800
	if( name2 .ne. 0 ) goto 8500
	oldnm1 = name1
	if( at( x, y, z, name1 ) .eq. 0 ) goto 10300
	recovr = max0( 16 - dexter, 0 )
	dice1 = 0
	do 10100 i = 1, 3
	    dice1 = dice1 + iran(6)
10100	continue
	if( dexter .le. dice1 ) goto 10200
	hit = streng - 8
	if( hit .lt. 1 )  hit = 1
	call putval(6, 0,2628,  6, name1, 1, player )
	call putval(6, 0,2629,  6, name1, 2, 0 )
	call putval(6, 0,2630,  6, name1, 3, hit )
	if( name1 .gt. 26 )call addval(6, 0,2631,  7, player, 2, 1 )
	goto 1600

10200	call messag(iclyel,'Your blow missed.^E')
	goto 1600

10300	call messag(iclyel,'He is not in this hex.^E')
	goto 1600

C****** THROW ***************************************************

10600	if( name1 .le. 52 ) goto 7800
	if( name2 .eq. 0 )  name2 = oldnm1
	oldnm1 = name2
	if( name2 .le. 0 .or. name2 .gt. 52 ) goto 11200
	if( dir .eq. 0 ) goto 11500
	if( .not. cansee(name2) ) goto 11100
	index1 = holds( player, name1 )
	call getval(5, 0,2649,  24, name1, ival )
	if( ival .ne. 0 .and. ival .ne. 2 ) goto 11900
	if( index1 .eq. 0 ) goto 6900
	call getval(5, 0,2652,  5, player, index2 )
	call getval(6, 0,2653,  2, index2, 4, index3 )
	if( index3 .ne. index1 ) goto 9100
	call getval(5, 0,2655,  4, index1, gweigh )
	dgo = streng - gweigh
	call getval(6, 0,2657,  19, name2, 1, ax )
	call getval(6, 0,2658,  19, name2, 2, ay )
	if( ax .eq. x .and. ay .eq. y ) goto 10750
	nx = x
	ny = y
	dist = 0
	recovr = max0( 18 - dexter, 0 )
	call takout( index1, player, failed )
10700	if( dgo .lt. dist ) goto 11000
	dist = dist + 1
	adir = findir( nx, ny, ax, ay )
	call newxy( nx, ny, adir, nx, ny )
	if( nx .eq. ax .and. ny .eq. ay ) goto 10800
	goto 10700

10750	call messag(iclyel,'You can''t when he is in your hex.^E')
	goto 1600

10800	dice1 = 0
	do 10900 i = 1, 3
	    dice1 = dice1 + iran(6)
10900	continue
	if( dice1 .gt. dexter - dist/3 ) goto 11000
	call drop( failed, .true., ax, ay, z, index1 )
	name1 = name2
	goto 9700

11000	call messag(iclyel,'You missed.^E')
	call drop( failed, .true., nx, ny, z, index1 )
	goto 1600

11100	call messag(iclyel,'You can''t see him here.^E')
	goto 1600

11200	call messag(iclyel,'That is pure idiocy.^E')
	goto 1600

C****** REST ****************************************************

11300	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	dir = 0
	call putval(5, 0,2698,  8, player, dir )
	goto 1500

C****** WAKE ****************************************************

11400	if( name1 .ne. 0 .or. name2 .ne. 0 ) goto 6400
	dir = iran( 6 )
	call putval(5, 0,2705,  8, player, dir )
	recovr = max0( 20 - dexter, 0 )
	goto 1500

11500	call messag(iclyel,'You can''t while you''re on the ground.^E')
	goto 1600

C****** FIRE ****************************************************

11600	if( name1 .eq. 0 )  name1 = oldnm2
	if( name2 .eq. 0 )  name2 = oldnm1
	oldnm1 = name2
	oldnm2 = name1
	if( dir .eq. 0 ) goto 11500
	if( name1 .le. 52 ) goto 7800
	call getval(5, 0,2720,  24, name1, ival )
	if( ival .ne. 3 ) goto 11900
	if( name2 .le. 0 .or. name2 .gt. 52 ) goto 7800
	if( .not. cansee(name2) ) goto 8400
	index1 = holds( player, name1 )
	if( index1 .eq. 0 ) goto 6900
	call getval(5, 0,2726,  5, player, index2 )
	call getval(6, 0,2727,  2, index2, 4, index3 )
	if( index1 .ne. index3 ) goto 9100
	if( quiver .eq. 0 )call finwrd( isxbit('quiver~'), quiver )
	index2 = holds( player, quiver )
	if( index2 .eq. 0 ) goto 11800
	call getval(5, 0,2732,  4, index2, gweigh )
	call addval(4, 0,2733,  -4, -1 )
	if( gweigh .gt. 1 ) goto 11650
	call putval(4, 0,2735,  -4, 10 )
	call takout( index2, player, failed )
11625	i = iran( 80 )
	call getval(5, 0,2738,  11, i, ival )
	if( ival .ne. 0 ) goto 11625
	call putval(4, 0,2740,  -11, index2 )
11650	call getval(5, 0,2741,  18, name1, istr )
	recovr = max0( 5*istr - 25 - dexter, 0 )
	name1 = name2
	call getval(6, 0,2744,  19, name1, 1, ax )
	call getval(6, 0,2745,  19, name1, 2, ay )
	if( ax .eq. x .and. ay .eq. y ) goto 10750
	dice1 = 0
	do 11700 i = 1, 3
	    dice1 = dice1 + iran( 6 )
11700	continue
	goto 9700

11800	call messag(iclyel,'You don''t have a quiver.^E')
	goto 1600

11900	call messag(iclyel,'It would be very difficult to use the weapon
     & that way.^E')
	goto 1600

C****** DESTROY *************************************************

12100	if( name1 .ge. 0 .or. name2 .ne. 0 ) goto 5200
	index1 = holds( player, disind )
	if( index1 .eq. 0 ) goto 12150
	call newxy( x, y, -name1, nx, ny )
	if( nx .lt. 2 .or. nx .gt. 48 .or. ny .lt. 2 .or. ny .gt. 48 )
     & goto 5200
	call getval(5, 0,2768,  4, index1, gweigh )
	if( gweigh .le. 3 ) goto 12125
	call addval(4, 0,2770,  -4, -1 )
	call getval(7, 0,2771,  1, nx, ny, z, ival )
	if( ival .eq. 0 ) call putval(4, 0,2772,  -1, 511 )
	if( gweigh .gt. 4 ) goto 1500
	call messag(iclred,'The disintegrator is glowing red.^G^E')
	goto 1600

12125	do 12135 ddir = 1, 6
	    call newxy( x, y, ddir+0, nx, ny )
	    if( nx.lt.2.or.nx.gt.48.or.ny.lt.2.or.ny.gt.48 ) goto 12135
	    call getval(7, 0,2780,  1, nx, ny, z, ival )
	    if( ival .eq. 511 ) goto 12135
	    if( ival .eq. 0 ) call putval(4, 0,2782,  -1, 511 )
	    if( ival .eq. 0 ) goto 12135
	    do 12134 index1 = 1, 10
		call getval(6, 0,2785,  2, ival, index1+0, index2 )
		if( index2 .lt. 1 .or. index2 .gt. 52 ) goto 12134
		call putval(6, 0,2787,  6, index2, 1, 1023 )
		call putval(6, 0,2788,  6, index2, 3, 1023 )
12134	    continue
12135	continue
	call messag(iclred,'The disintegrator has reached critical mass.
     &  You are dead.^G^E')
	call cease( x, y, z, player )
	goto 1600

12150	call messag(iclyel,'You need the disintegrator.^E')
	goto 1600

C****** CAST ****************************************************

12500	if( name1.lt.52 .or. name2.lt.1 .or. name2.gt.52 ) goto 7800
	call messag(icllbl,'Casting spell ^E')
	call pname( name1, -17 )
	call string(1,' at ^E')
	call pname( name2, -17 )
	goto 1600

13000	call clrscr
	call colcur( 5, 10 )
	call string(1,'You have left the dungeon with^E')
	if( holds( player, disind ) .ne. 0 ) goto 13100
	call string(1,'out the disintegrator.  You have failed.^M^J^E')
	call cease( x, y, z, player )

13100	call string(1,' the disintegrator and $^E')
	ival = cost( player )
	call number(1, ival )
	call string(1,' to your credit.^G^G^E')
	call colcur( 32, 8 )
	call string(1,'Congratulations.^M^J^B')
	call putval(5, 0,2821,  20, 75, player )
	call ofile( 2, filesp, 0 )
	if( lerror(0) ) goto 13200
	filesp( 5 ) = isxbit('DAT~')
	call rfile( 2, filesp )
	if( lerror(0) ) goto 13200
	call ofile( 3, filesp, 0 )
	if( lerror(0) ) goto 13200
	filesp( 5 ) = isxbit('TMP~')
	call wfile( 3, filesp )
	if( lerror(0) ) goto 13200
	call xfer( 2, 3 )
	call select( 3 )
	call datime(index1,index2,index3,index4,index5,index6,ival)
	call number(1, index1 )
	call chrout(45)
	call string(3, month( index2 ), 5, 3 )
	call chrout(45)
	call number(1, index3 )
	call chrout(32)
	call number(2, index4, -2 )
	call chrout(58)
	call number(2, index5, -2 )
	call chrout(58)
	call number(2, index6, -2 )
	call string(1,'  "^E')
	call pname( player, -17 )
	call string(1,'"  Exp:^E')
	call getval(6, 0,2849,  7, player, 2, ival )
	call number(1, ival )
	call string(1,'   Str: ^E')
	call number(1, streng )
	call chrout(40)
	call number(1, ustren )
	call string(1,')  Dex: ^E')
	call number(1, dexter )
	call chrout(40)
	call number(1, udex )
	call string(1,')  Val: $ ^E')
	call number(1, cost( player ) )
	call string(1,'^M^J^I^E')
	call getval(6, 0,2862,  7, player, 1, ival )
	call syswho( ival )
	call string(1,'^M^J^B')
	ival = filesp( 4 )
	filesp( 4 ) = 0
	call rnfile( 2, filesp )
	filesp( 4 ) = ival
	filesp( 5 ) = isxbit('DAT~')
	call rnfile( 3, filesp )
	call select( 0 )
13200	call cease( x, y, z, player )
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
