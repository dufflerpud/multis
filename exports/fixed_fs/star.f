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
C		** STAR **
C
C		BY CHRIS CALDWELL
C		  AT THE UNIVERSITY OF NEW HAMPSHIRE
C
C
C
	subroutine defcol

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call pcolor( iclwhi )
	call pback( iclbla )
	return
	end

	real function smcos( deg )
	logical newang
	common/nhcom/newang
	d = deg
	if( newang ) d = 90.0 - d
	smcos = cos( d * 3.141592654/180.0 )
	end

	real function smsin( deg )
	logical newang
	common/nhcom/newang
	d = deg
	if( newang ) d = 90.0 - d
	smsin = sin( d * 3.141592654/180.0 )
	return
	end

	subroutine updscr
     & ( iqx, iqy, isx, isy, ichar, damage, iplayr, hyper )
C
C  --	ROUTINE UPDATE SENSORS
C
	integer quad(3,3), sector(11,11), iolist(6), damage(7,2)
	integer xbord(11,2), ybord(11,2), iqx, iqy, isx, isy, i
	integer iox, ioy, iosx, iosy, ival, ixq, iyq, iqxinc, iqyinc
	integer ichar, iplayr, isx1, isy1, ix, iy
	real rtemp
	logical hyper
	integer ifgcol(6)

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data iolist/0,42,43,32,45,46/
	ifgcol(1) = iclbla
	ifgcol(2) = iclyel
	ifgcol(3) = icllbl
	ifgcol(4) = iclbla
	ifgcol(5) = iclwhi
	ifgcol(6) = iclred

C
C  --	UPDATE QUADRANT POSITION
C
	if( (iqx .eq. iox) .and. (ichar .ne. 78) )goto 15
	call colcur( 48, 16 )
	do 10 i= -1, 1
	    call number(2, mod( iqx + i + 9, 10 ) + 1, 8 )
10	continue
	call colcur( 36, 20 )
	call number(2, iqx, 2 )
C
15	if( (iqy .eq. ioy) .and. (ichar .ne. 78) ) goto 30
	do 20 i= -1, 1
	    call colcur( 47, 20 + i*2 )
	    call number(2, mod( iqy + i + 9, 10 ) + 1, 2 )
20	continue
	call colcur( 42, 20 )
	call number(2, iqy, 2 )
30	iox = iqx
	ioy = iqy
C
C  --	UPDATE SECTOR POSITION
C
	if( isx .eq. iosx .and. ichar .ne. 78 ) goto 40
	call colcur( 34, 21 )
	call number(2, isx, 2 )
	if( 6-iosx .lt. 1 ) goto 35
	call cursor( (6-iosx)*2 + 1, 12 )
	call pcolor( iclwhi )
	call pback( iclwhi )
	call chrout(45)
35	if( 16-iosx .gt. 11 ) goto 37
	call cursor( (16-iosx)*2 + 1, 12 )
	call pcolor( iclwhi )
	call pback( iclwhi )
	call chrout(45)
37	if( 6-isx .lt. 1 ) goto 39
	call cursor( (6-isx)*2 + 1, 12 )
	call pcolor( icldbl )
	call pback( iclwhi )
	call chrout(124)
39	if( 16-isx .gt. 11 ) goto 40
	call cursor( (16-isx)*2 + 1, 12 )
	call pcolor( icldbl )
	call pback( iclwhi )
	call chrout(124)
40	iosx = isx
C
	if( isy .eq. iosy .and. ichar .ne. 78 ) goto 49
	call colcur( 39, 21 )
	call number(2, isy, 2 )
43	if( 6-iosy .lt. 1 ) goto 45
	call cursor( 24, (6-iosy) + 12 )
	call pcolor( iclwhi )
	call pback( iclwhi )
	call chrout(124)
45	if( 16-iosy .gt. 11 ) goto 47
	call cursor( 24, (16-iosy) + 12 )
	call pcolor( iclwhi )
	call pback( iclwhi )
	call chrout(124)
47	if( 6-isy .lt. 1 ) goto 48
	call cursor( 24, (6-isy) + 12 )
	call pcolor( icldbl )
	call pback( iclwhi )
	call chrout(95)
48	if( 16-isy .gt. 11 ) goto 49
	call cursor( 24, (16-isy) + 12 )
	call pcolor( icldbl )
	call pback( iclwhi )
	call chrout(95)
49	iosy = isy
C
C  --	UPDATE L.R. SENSOR
C
	do 50 iqxinc = -1, 1
	    do 50 iqyinc = -1, 1
		ixq = mod( iqx + iqxinc + 9, 10 ) + 1
		iyq = mod( iqy + iqyinc + 9, 10 ) + 1
		call getval(6, 0,153,  2, ixq, iyq, ival )
		if( iqxinc.eq.0 .and. iqyinc.eq.0 ) ival=ival-1000
		if( damage(3,1) .ne. 0 ) ival = 100000
		if( quad( iqxinc+2, iqyinc+2 ) .eq. ival .and.
     &		ichar .ne. 78 ) goto 50
		quad( iqxinc+2, iqyinc+2 ) = ival
		call colcur( iqxinc*8 + 59, iqyinc*2 + 20 )
		if( ival .le. 9999 ) goto 41
		call pback( iclwhi )
		call pcolor( iclbla )
		call string(1,' -----  ^E')
		goto 50

41		ifg = iclwhi
		if( ival .gt.    0 ) ifg = iclyel
		if( ival .ge.   10 ) ifg = icllbl
		if( ival .ge.  100 ) ifg = iclpur
		if( ival .ge. 1000 ) ifg = iclred
		call pback( iclbla )
		call pcolor( ifg )
		call chrout(32)
		call number(2, ival, 5 )
		call chrout(32)
50	continue
C
C  --	UPDATE S.R. SENSOR
C
	do 60 ix = -5, 5
	    iqxinc = iqx
	    rtemp = sqwrap( iqxinc, isx1, float(ix+isx) )
	    do 60 iy = -5, 5
		if( ix .eq. 0 .and. iy .eq. 0 ) goto 60
		iqyinc = iqy
		rtemp = sqwrap( iqyinc, isy1, float(iy+isy) )
		call getval(8, 0,187,  1, iqxinc, iqyinc, isx1, isy1, ival )
		if( damage( 2,1 ) .ne. 0 .or. hyper ) ival = 0

		iback = iclwhi
		ifore = iclred
		if( ival .ge. 6 ) goto 56

		if( ival .lt. 0 ) ival = 5
		iback = iclbla
		ifore= ifgcol( ival + 1 )
		ival = iolist( ival + 1 )

56		continue

		if(( ichar .ne. 78 .and.
     &		ival .eq. sector(6+ix,6+iy)) .or.
     &		( ichar .eq. 78 .and. ival .eq. 0 )) goto 60

		call cursor( 13+2*ix, 18+iy )
		call pback( iback )
		call pcolor( ifore )
		if( ival .eq. 0 ) call chrout( 32 )
		if( ival .ne. 0 ) call chrout( ival )
		sector( 6+ix, 6+iy ) = ival
60	continue
	return
	end
C
	real function rbound ( rnum )
C
C  --	ROUTINE LIMITS RNUM WITHIN 360.0
C
	real rnum
C
	rbound = rnum
C
10	if( rbound .ge. 0.0 ) goto 20
	rbound = rbound + 360.0
	goto 10
C
20	if( rbound .lt. 360.0 ) return
	rbound = rbound - 360.0
	goto 20
	end
C
	subroutine damagm( damage, much, isheld )
C
C  --	ROUTINE DOES AS MUCH DAMAGE AS IS SUITABLE FOR MUCH
C
	integer damage( 7, 2 ), much, isheld, iprio( 7 ), left
	integer i, j, j1
	data iprio/3,4,5,2,1,6,7/
C
	if( much .gt. isheld ) goto 5
	isheld = isheld - much
	return
C
5	left = much - isheld
	isheld = 0
	i = iran( 7 )
	do 10 j = 1, i
7	    j1 = iran( 7 )
	    if( iprio(j1) .lt. iran( 7 ) ) goto 7
	    damage(j1,1) = damage(j1,1) + 1231*left/iran(i)
	    damage(j1,2) = max0( 0, damage(j1,2) - iran(40)*left/i )
10	continue
	return
	end
C
	subroutine print
C
C  --	OUTPUTS SCREEN CHARACTERS THAT ARE NOT UPDATED
C
	integer i

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla
C
	call usrset(1026,1)
C
C  --	DRAW S.R. SENSOR GRID
C
	call clrscr
	call cursor( 1, 24 )
	call pcolor( iclwhi )
	call pback( iclwhi )
	call string
     &(1,'+----------------------+^M^J^E')
	do 5 i = 1, 11
	    call chrout(124)
	    call pback( iclbla )
	    call string(1,'                      ^E')
	    call pback( iclwhi )
	    call string(1,'|^M^J^E')
5	continue
	call string(1,'+----------------------+^E')
C
C  --	PUT USEFUL INFORMATION BESIDE IT
C
	call colcur( 26, 23 )
	call string(1,'Stardate:^E')
	call colcur( 26, 22 )
	call string(1,'Energy:    %^E')
	call colcur( 26, 21 )
	call string(1,'Sector:    -^E')
	call colcur( 26, 20 )
	call string(1,'Quadrant:    -^E')
	call colcur( 26, 19 )
	call string(1,'Torpedos:^E')
	call colcur( 26, 18 )
	call string(1,'Shields:    %^E')
	call colcur( 26, 17 )
	call string(1,'Degrees:^E')
	call colcur( 26, 16 )
	call string(1,'Bearing:^E')
	call colcur( 26, 15 )
	call string(1,'Warp:^E')
	call colcur( 26, 14 )
	call string(1,'To warp:^E')
	call colcur( 26, 13 )
	call string(1,'Banks:^E')
C
C  --	DRAW L.R. SENSOR GRID
C
	call pcolor( iclwhi )
	do 10 i= 0, 2
	    call cursor( 50, 17 + i*2 )
	    call pback( iclwhi )
	    call string(1,'+-------+-------+-------+^E')
	    call cursor( 50, 18 + i*2 )
	    call chrout(124)
	    do 9 j = 1, 3
	        call pback( iclbla )
	        call string(1,'       ^E')
		call pback( iclwhi )
		call chrout(124)
9	    continue
10	continue
	call cursor( 50, 23 )
	call string(1,'+-------+-------+-------+^E')
C
C  --	MAKE DAMAGE REPORT
C
	call colcur( 1,11 )
	call string(1,'Device        Repair state (Time)   Crew
     &^M^J------        -------------------   ----
     &^M^JWarp engines
     &^M^JS.R. sensors
     &^M^JL.R. sensors
     &^M^JTorpedos
     &^M^JPhasers
     &^M^JShields
     &^M^JLife support
     &^M^J^JCommand:^E')
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
10	call nap( 500, 12 )
	call chrbuf( ichar )
	if( ichar .eq. -1 ) return
	if( ichar .eq. 8 .or. ichar .eq. 127 ) goto 20
	if( ichar .eq. 21 ) goto 40
	if( ichar .eq. 27 .and. index .eq. 0 ) goto 15
	if( ichar .lt. 32 ) goto 45
	if( index .ge. 80 ) goto 50
C
C  --	NOT SPECIAL CHARACTER, PUT IN ARRAY
C
	index = index + 1
	call colcur( 9 + index, 1 )
	call chrout( ichar )
	call curbuf
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
	call curbuf
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
	call curbuf
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
	call allcap( comara, 2 )	! rest of cmd is numbers or message
	ichar = comara(1)
70	arrind = index
	indstr = index
	index = 0
	call curbuf
	call nap( 500, 4 )
	return
	end
C
	subroutine initdb
C
C  -	INITIALIZE HISEGMENT
C
	integer inmlst(3), iqx, iqy, isx, isy, ival, i, i1, j
	data inmlst/ 200, 5, 4 /
C
C  --	CREATE NEEDED CORE
C
C	ARRAY #1 CONTAINS EVERYTHING IN THE GALAXY
	call init(8, 0,425, 1,36,10,10,10,10)
C	ARRAY #2 CONTAINS L.R. INFORMATION FOR THE ENIRE GALAXY
	call init(6, 0,427, 2,36,10,10)
C	ARRAY #3 CONTAINS GENERAL INFORMATION
C	ITEM	CONTAINS
C	1	# OF PLAYERS
C	2	CURRENT DATE
C	3	DESTINATION OF LAST SEND
C	4	VICTIM OF AXIS
C	5	CURRENT ENERGY OF AXIS
	call init(5, 0,435, 3,36,10)
C	ARRAY #4 CONTAINS INFORMATION ABOUT EACH PLAYER
C	ITEM	CONTAINS
C	1	JOB (OR IF AXIS, CONTAINS NEGATIVE OF CONTROLLER)
C	2-3	PLAYER'S NAME
C	4	PHOTON TORPEDO AND PHASER FLAGS
C	5	HOW FAST SHIP MOVES
C	6	IF HIT, WHO HIT ME
C	7	IF HIT, HOW FAST HE WAS MOVING
C	8	DEGREE HEADING OF SHIP
C	9,10	QUADRANT LOCATION OF SHIP
C	11,12	SECTOR LOCATION OF SHIP
C	13	DOCKING ENERGY
C	14	DOCKING TORPEDOS
C	15	DOCKING CREW
C	16	#KILLS FOR PLAYER
C	17	WHO SHOT AT ME
	call init(6, 0,452, 4,36,26,17)
C	ARRAY #5 CONTAINS INFORMATION FOR COMMUNICATION
C	ITEM	CONTAINS
C	1	LENGTH OF MESSAGE
C	2	SOURCE OF MESSAGE
C	3-71	MESSAGE
	call init(5, 0,458, 5,7,71)
C
C  --	CREATE A FEW STORMS
C
	ival = iran(8)
	do 10 i=1, ival
	    iqx = iran(10)
	    iqy = iran(10)
	    isx = iran(10)
	    isy = iran(10)
	    call nova( iqx, iqy, isx, isy )
10	continue
C
C  --	CREATE A RANDOM STARDATE
C
	call putval(5, 0,473,  3, 2, iran(4999999)+1000000 )
C
C  --	CREATE STARS, STARBASES AND BLACK HOLES
C
	do 40 i1 = 1, 3
	    i=i1
	    do 40 j=1, inmlst(i)
20		iqx = iran( 10 )
		iqy = iran( 10 )
		call getval(6, 0,482,  2, iqx, iqy, ival )
		if( ival .ge. 9 ) goto 20
		call addval(4, 0,484,  -2, 10**(i-1) )
30		isx = iran( 10 )
		isy = iran( 10 )
		call getval(8, 0,487,  1, iqx, iqy, isx, isy, ival )
		if( ival .ne. 0 ) goto 30
		call putval(4, 0,489,  -1, i )
		if( i1 .eq. 3 ) call nova( iqx, iqy, isx, isy )
40	continue
	call unlock
	return
	end
C
	subroutine nova( iqx, iqy, isx, isy )
C
C  --	ROUTINE CREATES NOVAE FOR ANY NUMBER OF REASONS
C
	integer i, iqx, iqy, iqx1, iqy1, isx, isy, isx1, isy1
	integer ival, inox(21), inoy(21)
	real sx, sy
	data inox/-1,0,1,-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2,
     & -1,0,1/
	data inoy/-2,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,0,1,1,1,1,1,
     & 2,2,2/
C
	do 10 i = 1, 21
	    iqx1 = iqx
	    iqy1 = iqy
	    sx = sqwrap( iqx1, isx1, float( isx+inox(i) ) )
	    sy = sqwrap( iqy1, isy1, float( isy+inoy(i) ) )
	    call getval(8, 0,512,  1, iqx1, iqy1, isx1, isy1, ival )
	    if( ival .ne. 0 ) goto 5
	    if( iran(10) .lt. 4 ) goto 10
	    call putval(4, 0,515,  -1, 4 )
	    goto 10
5	    if( ival .lt. 7 ) goto 8
	    call putval(6, 0,518,  4, ival-64, 7, -0.6 )
	    goto 10
8	    if( ival .ne. 1 ) goto 10
	    call putval(4, 0,521,  -1, 0 )
	    call addval(6, 0,522,  2, iqx1, iqy1, -1 )
	    call secnov( iqx1, iqy1, isx1, isy1, inox, inoy )
10	continue
	return
	end
C
C
	subroutine secnov( iqx, iqy, isx, isy, inox, inoy )
C
C  --	ROUTINE PERFORMS A SECONDARY NOVA
C
	integer i, iqx, iqy, iqx1, iqy1, isx, isy, isx1, isy1
	integer ival, inox(21), inoy(21)
	real sx, sy
C
	do 10 i = 1, 21
	    iqx1 = iqx
	    iqy1 = iqy
	    sx = sqwrap( iqx1, isx1, float( isx+inox(i) ) )
	    sy = sqwrap( iqy1, isy1, float( isy+inoy(i) ) )
	    call getval(8, 0,541,  1, iqx1, iqy1, isx1, isy1, ival )
	    if( ival .ne. 0 ) goto 5
	    if( iran(10) .lt. 4 ) goto 10
	    call putval(4, 0,544,  -1, 4 )
	    goto 10
5	    if( ival .le. 6 ) goto 10
	    call putval(6, 0,547,  4, ival-64, 7, -0.6 )
10	continue
	return
	end
C
	real function sqwrap( iq, is, s )
C
C  --	CONTROLS WRAP AROUND AND QS LOCATION
C
	integer iq, is
	real s
C
	sqwrap = s
C
10	if( sqwrap .ge. 0.5 )goto 20
	sqwrap = sqwrap + 10.0
	iq = iq - 1
	goto 10
C
20	if( sqwrap .lt. 10.5 )goto 30
	sqwrap = sqwrap - 10.0
	iq = iq + 1
	goto 20
C
30	iq = mod( iq + 9, 10 ) + 1
	is = sqwrap + 0.5
	return
	end
C
	subroutine cease( iplayr, iqx, iqy, isx, isy, fault )
C
C  --	ROUTINE GETS RID OF SHIP ON ^C OR EXIT COMMAND
C
	integer iplayr, iqx, iqy, isx, isy, ival, fault
	logical been
C
	if( been ) return
	been = .true.
	call unlock
	if( fault .ne. 0 ) call addval(6, 0,584,  4, fault, 16, 1 )
	call addval(5, 0,585,  3, 1, -1 )
	call getval(8, 0,586,  1, iqx, iqy, isx, isy, ival )
	if( ival .eq. iplayr+64 ) call putval(4, 0,587,  -1, 0 )
	call addval(6, 0,588,  2, iqx, iqy, -1000 )
	call putval(6, 0,589,  4, iplayr, 1, 0 )
	call nova( iqx, iqy, isx, isy )
	call usrset(1031,0)
	call usrset(1026,0)
	call usrset(1041,1)
	call colcur(1,1)
	call close( 1 )
	call exprog
	end
C
	subroutine upship( iplayr, ichar )
C
C  --	ROUTINE UPDATES SHIP ROSTER
C
	integer ship(18), s(18), icnt, iocnt, i, i1, score
	integer ival, iplayr, iship, ichar, iqx, iqy, isx, isy
	logical run, orun, logdin

C
	icnt = 0
	do 20 i1=1,26
	    i=i1
C	    IMVAL = MOD( I, 7 ) + 1
	    call getval(6, 0,611,  4, i, 1, ival )
	    if( ival .eq. 0 ) goto 20
	    if( ival .lt. 0 ) goto 10
	    if( .not. logdin(ival) ) goto 8
	    if( job(-1) .eq. 0 ) goto 10
	    if((jstat(ival).ne.isxbit('^C~' )).and.(itty(ival).ne.-1))
     &	    goto 10
8	    call putval(4, 0,618,  -4, 0 )
	    call addval(5, 0,619,  3, 1, -1 )
	    call putval(5, 0,620,  3, 3, 0 )
	    call getval(6, 0,621,  4, i, 9, iqx )
	    call getval(6, 0,622,  4, i, 10, iqy )
	    call addval(6, 0,623,  2, iqx, iqy, -1000 )
	    call getval(6, 0,624,  4, i, 11, isx )
	    call getval(6, 0,625,  4, i, 12, isy )
	    call putval(8, 0,626,  1, iqx, iqy, isx, isy, 0 )
	    goto 20

10	    icnt = icnt + 1
	    iship = i
	    call getval(6, 0,631,  4, i, 16, score )
	    if(ship(icnt).eq.i.and.ichar.ne.78.and.score.eq.s(icnt))
     &		goto 19
	    if( icnt .le. 9 ) call colcur( 43, 12-icnt )
	    if( icnt .gt. 9 ) call colcur( 62, 21-icnt )
	    call chrout( i+64 )
	    call chrout(32)
	    call number(1, score )
	    call string(1,': ^E')
	    s(icnt) = score
	    call getval(6, 0,641,  4, i, 2, ival )
	    call string(3, ival, 6, 6 )
	    call getval(6, 0,643,  4, i, 3, ival )
	    call string(3, ival, 6, 6 )
19	    ship(icnt) = i
20	continue
C
	if( icnt .ge. iocnt .or. ichar .eq. 78 ) goto 31
	do 30 i= icnt+1, iocnt
	    if( i .le. 9 ) call colcur( 43, 12-i )
	    if( i .gt. 9 ) call colcur( 62, 21-i )
	    call string(1,'                  ^E')
	    ship(i) = 0
30	continue
31	continue
	iocnt = icnt
C
	if( iplayr .ne. iship ) return
	call getval(5, 0,659,  3, 2, itim )
	itim = itim + 1
	call addval(4, 0,661,  -3, 1 )
C
C
C**********************************************************
C***                 AXIS CONTROLLER                    ***
C**********************************************************
C
	call getval(5, 0,667,  3, 3, ival )
	if( ival .ne. 1 ) goto 45
	call getval(5, 0,669,  3, 4, ivictm )
	call getval(5, 0,670,  5, 2, ival )
	call getval(6, 0,671,  4, ival, 1, ivjob )
	ipn = iright( igtab( ivjob, 2 ) )
	call getval(5, 0,673,  5, 3, ijunk )
	if( ijunk .ne. 64 .or. ipn .ne. 7963 ) goto 41
	call getval(5, 0,675,  5, 4, ijunk )
	if( ijunk .lt. 66 .or. ijunk .gt. 91 ) goto 41
	ival = ijunk - 64
	call axisnd( ival, 13, 'You will die.' )
	goto 42
	
41	if( ivictm .ne. 0 ) goto 43
	call axisnd( ival, 60,
     &'For your impertinence, you will be exterminated by the Axis.')
42	call putval(5, 0,684,  3, 4, ival )
	goto 45

43	if( ival .ne. ivictm )
     &call axisnd( ival, 29, 'You will be eliminated later.')
	if( ival .eq. ivictm )
     &call axisnd( ival, 28, 'Be silent before your death.')

45	call getval(6, 0,692,  4, 1, 1, ival )
	if( ival .ne. 0 ) goto 100
C
C  --	CREATE THE AXIS
C
	call putval(6, 0,697,  4, 1, 2, isxbit('Axis~') )
	call putval(6, 0,698,  4, 1, 3, 0 )
	call putval(5, 0,699,  3, 5, 100 )
C
50	iqx = iran( 10 )
	iqy = iran( 10 )
	isx = iran( 10 )
	isy = iran( 10 )
	call getval(8, 0,705,  1, iqx, iqy, isx, isy, ival1 )
	if( ival1 .ne. 0 ) goto 50
	call putval(4, 0,707,  -1, 65 )
	call addval(6, 0,708,  2, iqx, iqy, 1000 )
	goto 110

100	if( ival .eq. -iplayr ) goto 120
	call getval(6, 0,712,  4, 1, 9, iqx )
	call getval(6, 0,713,  4, 1, 10, iqy )
	call getval(6, 0,714,  4, 1, 11, isx )
	call getval(6, 0,715,  4, 1, 12, isy )
	call getval(8, 0,716,  1, iqx, iqy, isx, isy, ival1 )
110	sx = isx + .5
	sy = isy + .5
	call putval(6, 0,719,  4, 1, 1, -iplayr )

120	call getval(5, 0,721,  3, 5, inergy )
	call getval(5, 0,722,  3, 4, ivictm )
	if( ivictm .eq. 0 ) goto 147
	call getval(6, 0,724,  4, ivictm, 1, ival )
	if( ival .eq. 0 ) goto 147

	call getval(6, 0,727,  4, ivictm, 9, ivqx )
	call getval(6, 0,728,  4, ivictm, 10, ivqy )
	call getval(6, 0,729,  4, ivictm, 11, ivsx )
	call getval(6, 0,730,  4, ivictm, 12, ivsy )
	ix = iqx*10 + isx - 11
	iy = iqy*10 + isy - 11
	ivx = ivqx*10 + ivsx - 11
	ivy = ivqy*10 + ivsy - 11
	if( iabs( ivx-ix ) .gt. iabs( ivx+100-ix ) ) ivx = ivx + 100
	if( iabs( ivy-iy ) .gt. iabs( ivy+100-iy ) ) ivy = ivy + 100
	if( iabs( ivx-ix ) .gt. iabs( ivx-100-ix ) ) ivx = ivx - 100
	if( iabs( ivy-iy ) .gt. iabs( ivy-100-iy ) ) ivy = ivy - 100
	adist = sqrt((ivx-ix+0.0)**2+(ivy-iy+0.0)**2)
	if( adist .gt. 5 ) goto 135
	call getval(8, 0,741,  1, ivqx, ivqy, ivsx, ivsy, ival )
	if( ival .ne. ivictm+64 ) goto 135
	if( adist.gt.1.6 .or. inergy.lt.25 .or. iran(3).ne.1 ) goto 132
	inergy = inergy - 10
	call putval(6, 0,745,  4, ivictm, 4, -20 )
	call putval(6, 0,746,  4, ivictm, 17, 1 )
	goto 135
132	if( inergy .lt. 20 .or. iran(5) .ne. 1 ) goto 135
	inergy = inergy / 2
	call putval(6, 0,750,  4, ivictm, 4, ifix(inergy/sqrt(adist)) )
	call putval(6, 0,751,  4, ivictm, 17, 1 )
135	if( ix .ne. ivx ) goto 140
	ibear = 90
	if( iy .gt. ivy ) ibear = 270
	goto 145
140	ibear = ifix(atan( float(ix-ivx)/float(iy-ivy) ) * 180./3.14159)
	if( ix .gt. ivx ) ibear = ibear + 180
145	run = .false.
	if( inergy .lt. 10 ) run = .true.
	if( run ) ibear = ibear - 180
	if( run .and. .not. orun ) call axisnd( ivictm, 40,
     &'I shall return to destroy your ship yet.')
	if( orun .and. .not. run ) call axisnd( ivictm, 15,
     &'Prepare to die.')
	orun = run
	goto 150
C
147	if( mod( itim, 20 ) .eq. 0 ) ibear = iran( 360 )
	call putval(5, 0,769,  3, 4, 0 )
C
150	call getval(6, 0,771,  4, 1, 8, degree )
	degi = 12.34
	if( mod( ifix(ibear-degree)+720, 360 ) .gt. 180 ) degi = -degi
	degree = degree + degi
	if(mod(ifix(abs(ibear-degree))+720,360).lt.abs(degi))
     &degree=ibear
	degree = rbound( degree )
	call putval(6, 0,778,  4, 1, 8, rbound( degree ) )
	call putval(8, 0,779,  1, iqx, iqy, isx, isy, 0 )
	call addval(6, 0,780,  2, iqx, iqy, -1000 )
160	sx = sqwrap( iqx, isx, sx+smcos(degree)/2. )
	sy = sqwrap( iqy, isy, sy+smsin(degree)/2. )
	call getval(8, 0,783,  1, iqx, iqy, isx, isy, ival )
	if( ival .gt. 0 ) goto 160
	if( ival .lt. 0 ) inergy = inergy - 20
	call putval(4, 0,786,  -1, 65 )
	call addval(6, 0,787,  2, iqx, iqy, 1000 )
	call putval(6, 0,788,  4, 1, 9, iqx )
	call putval(6, 0,789,  4, 1, 10, iqy )
	call putval(6, 0,790,  4, 1, 11, isx )
	call putval(6, 0,791,  4, 1, 12, isy )
	call getval(6, 0,792,  4, 1, 4, idam )
	call putval(4, 0,793,  -4, 0 )
	inergy = inergy - iabs( idam ) + 2
	if( inergy .gt. 100 ) inergy = 100
	call putval(5, 0,796,  3, 5, inergy )
	if( inergy .gt. 0 ) goto 200
	call putval(8, 0,798,  1, iqx, iqy, isx, isy, 0 )
	call addval(6, 0,799,  2, iqx, iqy, -1000 )
	call nova( iqx, iqy, isx, isy )
	call putval(6, 0,801,  4, 1, 16, 0 )
	call getval(6, 0,802,  4, 1, 17, ival )
	call addval(6, 0,803,  4, ival, 16, 1 )
	call putval(6, 0,804,  4, 1, 1, 0 )
	call putval(5, 0,805,  3, 4, 0 )
	return

200	if( idam .eq. 0 ) return
	call getval(6, 0,809,  4, 1, 17, ival )
	if( ival .eq. ivictm ) return
	call axisnd( ival, 48,
     &'Your attack on the axis will cost you your life.')
	call putval(5, 0,813,  3, 4, ival )
	return
	end
C
	subroutine axisnd( idest, length, messag )
C
C  --	SUBROUTINE SENDS A MESSAGE FROM THE AXIS SHIP
C
	integer idest, messag( length ), length, sara( 80 )
C
	call putval(5, 0,822,  3, 3, idest )
	call putval(5, 0,823,  5, 1, length+2 )
	call putval(5, 0,824,  5, 2, 1 )
	call convrt( messag, length, 5, sara, 0 )
	do 20 i = 1, length
	    call putval(5, 0,827,  5, i+2, sara(i) )
20	continue
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
C
	subroutine fmain
C
	integer comara( 81 ), sname( 2 ), damage( 7,2 ), filesp( 13 )
	integer dam1( 7,2 ), commar( 61 ), objval( 6 )
	integer itx( 25 ), ity( 25 ), itdist( 25 ), maxval( 12 )
	integer ntorp, nnergy, itorp, inergy, i, j, i1, i2, iplayr
	integer ichar, ival, iqx, iqy, isx, isy, index, fault
	integer ix1, iy1, ix2, iy2, ioqx, ioqy, iosx, iosy, ix, iy
	integer idat, iodat, iongry, iotorp, isheld, ishold, iship
	integer denrgy, dtorp, dcrew, ocrew, ncrew, icrew
	integer odn, odt, odc, crwnum, ilnum, ilmax
	real degi, dinc, spdi, sinc, sx, sy, degree, bearin
	real speed, aspeed, deciml, unitx, unity, dist, pdist
	real osx, osy, odegre, obearn, ospeed, opeed, othspd
	real torpx( 25 ), torpy( 25 ), torpxs( 25 ), torpys( 25 )
	real strtlp
	logical erase1,erase2,erase3,hyper,ohyper,iniflg,oarmed,armed,lprivd
	logical lerror, newang

	common/nhcom/newang
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data degi/6.17/, spdi/0.047/,crwnum/70/
	data ntorp/15/,nnergy/100/,ncrew/490/,itorp/15/,inergy/100/
	data ichar/78/
	data objval/32,42,43,64,45,46/
	data maxval/18,18,18,18,18,12,7,3,0,0,0,0/
C
C  --	SET UP TTY, GET SHIP'S NAME AND SCAN CHARACTER
C
	iclwhi = 1
	icldbl = 2
	iclred = 3
	icllbl = 4
	iclpur = 5
	iclgre = 6
	iclyel = 7
	iclbla = 8

	newang = .true.

	call settty( comara, commar, i2, lprivd, filesp )
	if( i2 .eq. 0 ) goto 7
	do 6 i=1,i2
	    if( commar(i) .eq. isxbit('MAP~') .and. lprivd ) goto 800
	    if( commar(i) .eq. isxbit('NAME~') ) erase1 = .true.
	    if( commar(i) .eq. isxbit('OLDANG~') ) newang = .false.
6	continue
7	continue
	call enable
	i1 = 12
	sname(1) = igtab( job(0), 25 )
	sname(2) = igtab( job(0), 26 )
	call check( iniflg )
	if( iniflg ) call initdb
	continue ! call ctrap
c	    call exprog

	call grafon
	call defcol
	call clrscr

	if( .not. erase1 ) goto 10
	call string(1,'Input ship''s name (12 characters): ^E')
	call curbuf
	call getstr(3, comara, 12, i1 )
	if( i1 .eq. 0 ) goto 10
	call convrt( comara, 12, 1, sname, 6 )
	erase1 = .false.
10	call string(1,'Input character to represent the "^E')
	if( i1 .eq. 0 ) i1 = 12
	call string(3, sname, 6, i1 )
	call string(1,'" in scan: ^E')
	call curbuf
	call chrwat( iplayr )
	if( iplayr .gt. 91 ) iplayr = iplayr - 32
	iplayr = iplayr - 64
C
C  --	CHECK IF IT IS LEGAL AND IF THERE IS ONE ALREADY PRESENT
C
	if( iplayr .lt. 2 .or. iplayr .gt. 26 ) goto 15
	call getval(6, 0,942,  4, iplayr, 1, ival )
	if( ival .eq. 0 ) goto 20
	call string
     &(1,'^M^JSomebody is already using that symbol.^M^J^E')
	goto 10
15	call string(1,'^M^JIllegal scan symbol.  Try again.^M^J^E')
	goto 10
C
C  --	UPDATE SHIP ROSTER.
C
20	continue
	call enable
	call lock
	call putval(6, 0,955,  4, iplayr, 1, job(0) )
	call putval(6, 0,956,  4, iplayr, 2, sname(1) )
	call putval(6, 0,957,  4, iplayr, 3, sname(2) )
	call putval(6, 0,958,  4, iplayr, 4, 0 )
	call putval(6, 0,959,  4, iplayr, 7, 0 )
	call putval(6, 0,960,  4, iplayr, 16, 0 )
	call addval(5, 0,961,  3, 1, 1 )
	do 59 j = 1, 7
	    damage( j, 2 ) = crwnum
59	continue
	degree = iran( 360 )
	bearin = degree
C
C  --	MAKE UP COORDINATES FOR SHIP
C
60	continue
	    isx = iran(10)
	    sx=isx
	    isy = iran(10)
	    sy=isy
	    iqx = iran(10)
	    iqy = iran(10)
	    call getval(8, 0,977,  1, iqx, iqy, isx, isy, ival )
	if( ival .ne. 0 )goto 60
C
C  --	PLACE FINAL RESULTS IN HISEGMENT
C
	call putval(4, 0,982,  -1, iplayr+64 )
	call unlock
	call addval(6, 0,984,  2, iqx, iqy, 1000 )
	continue ! call ctrap
c	call cease( iplayr, iqx, iqy, isx, isy, fault )
	if( ichar .ne. 78 ) goto 65
C
C  --	SET ALL THE TERMINAL CHARACTERISTICS NEEDED
C
	call usrset(1030,1)
	call usrset(1045,0)
	call usrset(1031,1)
	call usrset(1032,1)
	call usrset(1041,0)
	call usrset(536,ttyspd)
	goto 75
C
C  --	OOPS, HE HIT A BLACK HOLE !!
C
65	call cursor( 26, 24 )
	call pback( iclbla )
	call colstr(iclred,'*** --::-- Space-time wrinkle --::-- ***^E')
	erase1 = .true.
	erase2 = .true.
	call cursor( 1, 2 )
	call string(1,'*** --::-- Relocation to quadrant ^E')
	call number(1,iqx)
	call chrout(45)
	call number(1,iqy)
	call string(1,', sector ^E')
	call number(1, isx )
	call chrout(45)
	call number(1, isy )
	call string(1,'. --::-- ***^E')
	erase3 = .true.
	degree = iran( 360 )
	bearin = iran( 360 )
	speed = iran( 80 ) / 10.0
	aspeed = iran( 80 ) / 10.0
C
C *******************************************************************
C
C  --	GAME HAS ALREADY BEGUN, ALL PARAMETERS SET UP
C
C  --	CHECK FOR SPEED CHANGES AND GET USER'S COMMAND
C
70	call usrset(1048,ttyspd)
	call usrset(1049,ttyspd)
	ilmax = igtab( 40, 9 )
	ilnum = igtab( 44, 9 )
	call ppn( ip, ipn )
	if( ilnum*100/ilmax .le. 86 .or. ipn .eq. 7963 ) goto 71
	call clrscr
	call cursor( 20, 1 )
	call colstr(iclred,'^I^I^I***** EMERGENCY *****^M^J^J^E')
	call colstr(iclwhi,'
     &A large dotted white line appears in front of your ship^M^J^J
     &labeled "S T Y X L I N E".  As your ship passes over it^M^J^J
     &you exit to the monitor.^M^J^J^E')
	call cease( iplayr, iqx, iqy, isx, isy, fault )
C
71	if( damage(1,1) .gt. 0 ) aspeed = speed
	if( damage(1,1) .le. 0 .and. inergy+isheld+denrgy .lt. 100 )
     &		inergy = inergy + 1
	call curbuf
	call comand( ichar, comara, index )
C
C  --	CLEAN UP ERASE1, ERASE2, AND ERASE3 FLAGS
C
75	if( ichar .eq. -1 ) goto 440

	if( .not. erase2 ) goto 80
	call colcur( 26, 12 )
	call irepeat(32,35)
	erase2 = .false.
C
80	if( .not. erase1 ) goto 90
	call colcur( 26, 24 )
	call irepeat(32,54)
	erase1 = .false.
C
90	if( .not. erase3 ) goto 100
	call colcur( 1, 2 )
	call irepeat(32,79)
	erase3 = .false.
C
C  --	GET NUMBERS OUT OF STRING
C
100	call getnum(8, comara, index, i1, 10, i2, 10, j, 10 )
	deciml = i1
	idot = iserch( comara, 46, index )
	if( idot .ge. 0 ) deciml = i1 + i2/10.0	! just so we can say warp 0.x
105	if( i2 .lt. 0 ) i2 = 0
C
C  --	WARP CONTROL
C
	if( ichar .ne. 87 ) goto 120
	if( damage(1,1) .ne. 0 ) goto 110
	if( deciml .lt. 0 ) deciml = 0.0
	aspeed = deciml
	goto 440
C
110	call cursor( 26, 12 )
	call colstr(iclyel,'Warp drive inoperative.            ^E')
	erase2 = .true.
	goto 440
C
C  --	DEGREE CONTROL
C
120	if( ichar .ne. 68 ) goto 140
	if( inergy .lt. 8 ) goto 440
	bearin = rbound( deciml )
	inergy = inergy - 4
	goto 440
C
C  --	IMPULSE ENGINES CONTROL
C
140	if( ichar .ne. 73 ) goto 145
	if( inergy .lt. 1 .or. inergy+isheld .lt. 2 ) goto 143
	inergy = inergy - 1
	if( speed .eq. 0.1 ) goto 142
	if( abs(speed-0.1) .gt. 0.1 )goto 143
	speed = 0.1
	aspeed = 0.1
	goto 440
C
142	speed = 0.0
	aspeed = 0.0
	goto 440
C
143	call cursor( 26, 12 )
	call colstr(iclyel,'Impulse engines not effective.     ^E')
	erase2 = .true.
	goto 440
	if( speed .eq. 0.1 ) goto 142
C
C  --	HYPERSPACE CONTROL
C
145	if( ichar .ne. 74 ) goto 160
	if( speed .lt. 1.0 ) goto 150
	hyper = (.not. hyper )
	goto 440
C
150	call cursor( 1, 2 )
	call string(2,iclyel,
     & 'Warp factor less than 1.0.  Cannot make hyperspace jump.^E')
	erase3 = .true.
	goto 440
C
C  --	PRINT OUT NEW SCREEN
C
160	if( ichar .ne. 78 ) goto 170
	call print
	call cursor( 13, 18 )
	call pback( icldbl )
	call pcolor( iclwhi )
	call chrout( iplayr+64 )
	goto 440
C
C  --	PRINT OUT "WHO"
C
170	if( ichar .ne. 70 ) goto 175
	i = icon( comara(2) ) - 64
	if( i .lt. 1 .or. i .gt. 26 ) goto 174
	call getval(6, 0,1146,  4, i, 1, j )
	if( j .eq. 0 ) goto 174
	call colcur( 1, 2 )
	if( i .ne. 1 ) goto 171
	call string(1,'Computer controlled ship Axis^E')
	erase3 = .true.
	goto 440
171	call syswho(j)
	erase3 = .true.
	goto 440
C
174	call cursor( 26, 12 )
	call colstr(iclyel,'No such ship.                      ^E')
	erase2 = .true.
	goto 440
C
C  --	RADIO CONTROL
C
175	if( ichar .ne. 82 ) goto 220
	call getval(5, 0,1165,  3, 3, ival )
	if( ival .eq. 0 ) goto 180
	call nap( 1000, 4 )
	call unlock
180	j = icon( comara(2) ) - 64
	if( j .lt. 1 .or. j .gt. 26 ) goto 220
	call getval(6, 0,1171,  4, j, 1, ival )
	if( ival .ne. 0 ) goto 200
	call cursor( 26, 12 )
	call colstr(iclyel,'No frequency found for that ship.  ^E')
	erase2 = .true.
	goto 440
C
200	call lock
	call putval(5, 0,1179,  3, 3, j )
	call putval(5, 0,1180,  5, 1, index )
	do 210 i1= 2, index
	    i = i1
	    call putval(5, 0,1183,  5, i, icon(comara(i)) )
210	continue
	call putval(5, 0,1185,  5, 2, iplayr )
	call unlock
	goto 440
C
C  --	GAG TERMINAL
C
220	if( ichar .ne. 71 ) goto 225
	call usrset(1035,0)
	goto 440
C
C  --	UNSET GAG
C
225	if( ichar .ne. 85 ) goto 227
	call usrset(1035,1)
	goto 440
C
C  --	SET UP DOCKING BANKS
C
227	if( ichar .ne. 66 ) goto 229
	i1 = iabs( i1 )
	i2 = iabs( i2 )
	j = iabs( j )
	if(i1.gt.inergy.or.i2.gt.itorp.or.j.gt.damage(1,2)) goto 228
	denrgy = denrgy + i1
	inergy = inergy - i1
	dtorp = dtorp + i2
	itorp = itorp - i2
	dcrew = dcrew + j
	damage( 1, 2 ) = damage( 1, 2 ) - j
	goto 440
C
228	call cursor( 26, 12 )
	call colstr(iclyel,'Not enough supplies for docking    ^E')
	erase2 = .true.
	goto 440
C
C  --	ZERO DOCKING BANKS
C
229	if( ichar .ne. 90 ) goto 230
	inergy = inergy + denrgy
	if( inergy+isheld .gt. 100 ) inergy = 100-isheld
	denrgy = 0
	itorp = itorp + dtorp
	dtorp = 0
	damage( 1, 2 ) = damage( 1, 2 ) + dcrew
	dcrew = 0
	goto 440
C
C  --	EXIT
C
230	if( comara(1) .ne. 69 .or. comara(2) .ne. 88 ) goto 240
	call cease( iplayr, iqx, iqy, isx, isy, fault )
C
C  --	TORPEDO CONTROL
C
240	if( ichar .ne. 84 ) goto 300
	if( damage(4,1) .ne. 0 )goto 280
	if( comara(2) .ne. 65 ) goto 245
	if( armed ) goto 287
	if( itorp .eq. 0 ) goto 290
	if( inergy .le. 10 ) goto 282
	inergy = inergy - 10
	itorp = itorp - 1
	armed = .true.
	goto 440

245	if( .not. armed ) goto 285
	armed = .false.
	if( hyper ) goto 270
	do 250 i= 1, 25
	    if( torpx(i) .eq. 0.0 ) goto 260
250	continue
C
	call cursor( 26, 12 )
	call colstr(iclyel,'** Too many torpedos are active ** ^E')
	erase2 = .true.
	goto 440
C
260	torpx(i) = sx
	torpy(i) = sy
	itx(i) = iqx
	ity(i) = iqy
	torpxs(i) = unitx*speed + smcos( deciml )/2.
	torpys(i) = unity*speed + smsin( deciml )/2.
	itdist(i) = 0
	goto 440
C
270	call cursor( 26, 12 )
	call colstr(iclyel,'Cannot use torpedos in hyperspace. ^E') 
	erase2 = .true.
	goto 440
C
280	call cursor( 26, 12 )
	call colstr(iclred,'Photon torpedos inoperative.       ^E')
	erase2 = .true.
	goto 440
C
282	call cursor( 26, 12 )
	call colstr(iclred,'Not enough energy to arm torpedo.  ^E')
	erase2 = .true.
	goto 440
C
285	call cursor( 26, 12 )
	call colstr(iclred,'Torpedo is not armed.              ^E')
	erase2 = .true.
	goto 440
C
287	call cursor( 26, 12 )
	call colstr(iclyel,'Torpedo is already armed.          ^E')
	erase2 = .true.
	goto 440
C
290	call colstr( 26, 12 )
	call colstr(iclyel,'All photon torpedos are expended.  ^E')
C
C	This will never work anyplace other than Tops10.
	call execut( isxbit('%,@   ~') )
C
	erase2 = .true.
	goto 440
C
C  --	PHASER CONTROL
C
300	if( ichar .ne. 80 ) goto 400
	if( damage(5,1) .ne. 0 ) goto 380
	i1 = iabs( i1 )
	if( i1 .gt. inergy ) goto 390
	if( hyper ) goto 360
	i = icon( comara(2) ) - 64
	if( i .lt. 1 .or. i .gt. 26 ) goto 370
	call getval(6, 0,1315,  4, i, 1, ival )
	if( ival .eq. 0 .or. i .eq. iplayr ) goto 395
	call getval(6, 0,1317,  4, i, 9, ix1 )
	call getval(6, 0,1318,  4, i, 10, iy1 )
	call getval(6, 0,1319,  4, i, 11, ix2 )
	call getval(6, 0,1320,  4, i, 12, iy2 )
	call getval(8, 0,1321,  1, ix1, iy1, ix2, iy2, ival )
	if( ival .ne. i+64 ) goto 395
	if( ix1-iqx .gt. 5 ) ix1 = ix1 - 10
	if( iqx-ix1 .gt. 5 ) ix1 = ix1 + 10
	if( iy1-iqy .gt. 5 ) iy1 = iy1 - 10
	if( iqy-iy1 .gt. 5 ) iy1 = iy1 + 10
	dist = sqrt(float((iqx*10+isx-ix1*10-ix2)**2 +
     & (iqy*10+isy-iy1*10-iy2)**2))
	if( dist .gt. 7.0 ) goto 395
	inergy = inergy - i1
C	IVAL = I1 / (DIST^0.25)
	ival = i1 / sqrt(sqrt(dist))
	call colcur( 26, 12 )
	call number(2, ival, 3 )
	call string(1,'% hit on the ^E')
	call getval(6, 0,1336,  4, i, 2, iship )
	call string(3, iship, 6, 6 )
	call getval(6, 0,1338,  4, i, 3, iship )
	call string(3, iship, 6, 6 )
	call string(1,'       ^E')
	call putval(6, 0,1341,  4, i, 4, ival )
	call putval(6, 0,1342,  4, i, 17, iplayr )
	erase2 = .true.
	goto 440
C
360	call cursor( 26, 12 )
	call colstr(iclyel,'Cannot use phasers in hyperspace.  ^E')
	erase2 = .true.
	goto 440
C
370	call cursor( 26, 12 )
	call colstr(iclyel,'No such ship.                      ^E')
	erase2 = .true.
	goto 440
C
380	call cursor( 26, 12 )
	call colstr(iclred,'Phasers inoperative.               ^E')
	erase2 = .true.
	goto 440
C
390	call cursor( 26, 12 )
	call colstr(iclred,'Not enough energy.                 ^E')
	erase2 = .true.
	goto 440
C
395	call cursor( 26, 12 )
	call colstr(iclred,'Cannot lock phasers on target      ^E')
	erase2 = .true.
	goto 440
C
C  --	MOVE MEN
C
400	if( ichar .ne. 77 ) goto 405
	if( i2 .lt. 1 .or. i2 .gt. 7 ) goto 403
	if( j .lt. 1 .or. j .gt. 7 ) goto 403
	i1 = iabs( i1 )
	if( i1 .gt. damage( i2, 2 ) ) goto 404
	damage( i2, 2 ) = damage( i2, 2 ) - i1
	damage( j, 2 ) = damage( j, 2 ) + i1
	goto 440
403	call cursor( 26, 12 )
	call colstr(iclyel,'Non existant device                ^E')
	erase2 = .true.
	goto 440
404	call cursor( 26, 12 )
	call colstr(iclyel,'Not enough men at that device      ^E')
	erase2 = .true.
	goto 440
C
C***	SHIELD CONTROL
C
405	if( ichar .ne. 83 ) goto 430
	if( damage(6,1) .ne. 0 ) goto 410
	if((i1.gt.0.and.inergy.lt.i1).or.(i1.lt.0.and.isheld.lt.-i1))
     & goto 420
	inergy = inergy - i1
	isheld = isheld + i1
	goto 440
C
410	call cursor( 26, 12 )
	call colstr(iclred,'Shields inoperative.               ^E')
	erase2 = .true.
	goto 440
C
420	call cursor( 26, 12 )
	call colstr(iclred,'Insufficient energy.               ^E')
	erase2 = .true.
	if( i1 .lt. 0 ) goto 425
	isheld = isheld + inergy
	inergy = 0
	goto 440
425	inergy = inergy + isheld
	isheld = 0
	goto 440
C
430	call cursor( 26, 12 )
	call colstr(iclyel,'*** Illegal command: ^E')
	call chrout( ichar )
	call string(1,' ***         ^E')
	erase2 = .true.
C
C
C ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
C
C	DISCOVER IF WE HIT ANY SPACESHIPS FLOATING BY
C
440	continue
	if( inergy .ne. 0 .or. isheld .ne. 0 ) goto 450
	call colcur( 1, 2 )
	call string
     &(1,'Out of energy!!  You lost.                      
     &                             ^E')
	call cease( iplayr, iqx, iqy, isx, isy, fault )
C
450	call getval(6, 0,1434,  4, iplayr, 7, othspd )
	if( othspd .eq. 0 ) goto 460
	call putval(4, 0,1436,  -4, 0 )
	call colcur( 26, 12 )
	erase2 = .true.
	if( othspd .lt. 0 ) goto 455
	othspd = othspd + speed
	if( othspd .gt. 0.2 )
     &	    call colstr(iclred,'* Collision with the ^E')
	if( othspd .le. 0.2 )
     &	    call colstr(icllbl,'* Docking with the ^E')
	call getval(6, 0,1445,  4, iplayr, 6, j )
	call getval(6, 0,1446,  4, j, 2, iship )
	call string(3, iship, 6, 6 )
	call getval(6, 0,1448,  4, j, 3, iship )
	call string(3, iship, 6, 6 )
	if( othspd .gt. 0.2 ) call string(1,' *^E')
	if( othspd .le. 0.2 ) call string(1,' *  ^E')
	speed = 0
	if( othspd .gt. 0.2 ) fault = j
	if( othspd .gt. 0.2 ) goto 456
	call putval(6, 0,1455,  4, j, 13, denrgy )
	denrgy = 0
	call putval(6, 0,1457,  4, j, 14, dtorp )
	dtorp = 0
	call putval(6, 0,1459,  4, j, 15, dcrew )
	dcrew = 0
	inergy = inergy + isheld
	isheld = 0
	goto 460
C
455	call colstr(iclred,'**** Explosive force ion storm ****^E')
	fault = 0
456	call damagm( damage, iabs( ifix( othspd*30.2 ) ), isheld )
	denrgy = 0
	dtorp = 0
	dcrew = 0
C
C  --	UPDATE DOCKING INFORMATION
C
460	call getval(6, 0,1474,  4, iplayr, 13, i1 )
	call putval(4, 0,1475,  -4, 0 )
	call getval(6, 0,1476,  4, iplayr, 14, i2 )
	call putval(4, 0,1477,  -4, 0 )
	call getval(6, 0,1478,  4, iplayr, 15, j )
	call putval(4, 0,1479,  -4, 0 )
	if( i1 + i2 + j .eq. 0 ) goto 466
	isheld = 0
	denrgy = 0
	dtorp = 0
	dcrew = 0
	call cursor( 1, 2 )
	call colstr(icllbl,'Taking ^E')
	inergy = inergy + i1
	if( inergy .gt. nnergy ) inergy = nnergy
	call number(1, i1 )
	call string(1,'% energy, ^E')
	itorp = itorp + i2
	if( itorp .gt. ntorp ) itorp = ntorp
	call number(1, i2 )
	call string(1,' torpedos and ^E')
	if( icrew+j .gt. ncrew ) j = ncrew-icrew
	damage( 1, 2 ) = damage( 1, 2 ) + j
	call number(1, j )
	call string(1,' crew members on board.^E')
	erase3 = .true.
C
C  --	UPDATE SHIP SPEED AND INC
C
466	if( hyper .and. inergy .lt. 4 ) hyper = .false.
	if( hyper ) inergy = inergy - 4
	if( speed .lt. aspeed ) sinc = spdi
	if( speed .gt. aspeed ) sinc = -spdi
	if( inergy .lt. 9 ) sinc = 0
	if( sinc .ne. 0 ) inergy = inergy - 2
	if( abs(speed-aspeed) .lt. spdi ) speed = aspeed
	if( speed .eq. aspeed ) sinc = 0.0
	speed = speed + sinc
	if( speed .lt. 1.0 ) hyper = .false.
C
C  --	UPDATE SHIP DEGREE AND INC
C
	dinc=-degi
	if ( (bearin-degree.gt.0 .and. bearin-degree.lt.180) .or.
     &(bearin-degree.gt.-360 .and. bearin-degree.lt.-180) ) dinc = degi
	degree = rbound( degree + dinc )
	if( abs( bearin-degree ) .lt. degi*1.1 .or.
     & abs( bearin-degree+360) .lt. degi*1.1 ) degree = bearin
C
C  --	GET UNITS
C
	unitx = smcos( degree ) / 2.
	unity = smsin( degree ) / 2.
	ioqx = iqx
	ioqy = iqy
	iosx = isx
	iosy = isy
	osx = sx
	osy = sy
	pdist = 0.0
	dist = speed
C
C  --	LOOP THROUGH SHIP'S JOURNEY TO SEE IF IT HITS ANYTHING
C
	call getval(6, 0,1538,  4, iplayr, 1, ival )
	if( ival .eq. 0 ) call exprog
	call lock
C
C	FIXED LOGIC TO RUN ON MODERN COMPILERS
	strtlp = dist
	if( int(speed) .gt. 0 ) strtlp = 1.0
	do 480 dist = strtlp, speed
470	    iqx = ioqx
	    iqy = ioqy
	    sx = sqwrap( iqx, isx, osx + dist*unitx )
	    sy = sqwrap( iqy, isy, osy + dist*unity )
	    if( hyper ) goto 480
	    call getval(8, 0,1551,  1, iqx, iqy, isx, isy, ival )
	    if( ival .eq. 0 .or. ival .eq. iplayr+64 .or.
     & ival .eq. -iplayr) goto 480
	    if( ival .ne. 4 ) goto 490
	    fault = 0
	    call damagm( damage, 5, isheld )
	    if( erase2 ) goto 480
	    call colcur( 26, 12 )
	    call colstr(iclred,':: Undergoing ionic bombardment :: ^E')
	    erase2 = .true.
480	pdist = dist
	goto 560
C
C  --	SHIP JUST HIT SOMETHING
C
490	call colcur( 26, 12 )
	if( ival .gt. 5 ) goto 530
	if( speed .gt. 0.1 .or. ival .ne. 2 ) goto 510
	call colstr(icllbl,'* Docking with starbase *          ^E')
	itorp = ntorp
	do 491 i = 1, 7
	    damage(i,2) = crwnum
491	continue
	armed = .false.
	degree = rbound( degree+180. )
	bearin = degree
	inergy = inergy + isheld
	isheld = 0
	denrgy = 0
	dtorp = 0
	dcrew = 0
	pdist = -0.9
	do 500 i=1,7
	    damage(i,1) = 0
500	continue
	goto 550
C
510	call colstr(iclred,'Collision with ^E')
	index = 0
	if( ival .lt. 0 ) goto 520
	if( ival .eq. 1 ) call string(1,'a star.             ^E')
	if( ival .eq. 2 ) call string(1,'a starbase.         ^E')
	if( ival .eq. 3 ) call string(1,'a black hole.       ^E')
	if( ival .eq. 3 ) speed = iran( 80 ) / 10.0
	fault = 0
	goto 540
520	call string(1,'a photon torpedo.   ^E')
	erase2 = .true.
	fault = -ival
	call damagm( damage, 20, isheld )
	goto 480
C
530	ival1 = ival - 64
	call getval(6, 0,1604,  4, ival1, 5, othspd )
	othspd = othspd + speed
	if( othspd .gt. 0.2 )
     &	    call colstr(iclred,'* Collision with the ^E')
	if( othspd .le. 0.2 )
     &	    call colstr(icllbl,'* Docking with the ^E')
	call getval(6, 0,1610,  4, ival1, 2, iship )
	call string(3, iship, 6, 6 )
	call getval(6, 0,1612,  4, ival1, 3, iship )
	call string(3, iship, 6, 6 )
	call putval(6, 0,1614,  4, ival1, 6, iplayr )
	call putval(6, 0,1615,  4, ival1, 7, speed )
	if( othspd .gt. 0.3 ) goto 539
	call string(1,' *  ^E')
	call putval(6, 0,1618,  4, ival1, 13, denrgy )
	call putval(6, 0,1619,  4, ival1, 14, dtorp )
	call putval(6, 0,1620,  4, ival1, 15, dcrew )
	inergy = inergy + isheld
	isheld = 0
	pdist = -0.9
	denrgy = 0
	dtorp = 0
	dcrew = 0
	goto 550
539	call string(1,' *^E')
	fault = ival1
	speed = othspd
540	if( ohyper ) ival = 3
	degree = iran(360)
	call damagm( damage, ifix(speed*30.2), isheld )
C
C  --	IF HE HIT A BLACK HOLE, DISORIENT HIM.
C
	if( ival .ne. 3 ) goto 550
	call getval(8, 0,1638,  1, ioqx, ioqy, iosx, iosy, ival )
	if( ival .eq. iplayr+64 ) call putval(4, 0,1639,  -1, 0 )
	call addval(6, 0,1640,  2, ioqx, ioqy, -1000 )
	goto 60
C
C  --	UPDATE CRASH POSITION
C
550	erase2 = .true.
	iqx = ioqx
	iqy = ioqy
	sx = sqwrap( iqx, isx, osx + pdist*unitx )
	sy = sqwrap( iqy, isy, osy + pdist*unity )
	aspeed = 0.
	speed = 0.
C
C  --	PUT NEW POSITION IN HISEGMENT
C
560	call getval(8, 0,1655,  1, ioqx, ioqy, iosx, iosy, ival )
	if( ival .eq. iplayr+64 ) call putval(4, 0,1656,  -1, 0 )
	if( .not. hyper )
     &call putval(8, 0,1658,  1, iqx, iqy, isx, isy, iplayr+64 )
C
C  --	UPDATE SHIP'S ROSTER
C
	call upship( iplayr, ichar )
	call unlock
	call addval(6, 0,1664,  2, ioqx, ioqy, -1000 )
	call addval(6, 0,1665,  2, iqx, iqy, 1000 )
	call putval(6, 0,1666,  4, iplayr, 9, iqx )
	call putval(6, 0,1667,  4, iplayr, 10, iqy )
	call putval(6, 0,1668,  4, iplayr, 11, isx )
	call putval(6, 0,1669,  4, iplayr, 12, isy )
C
C  --	UPDATE HYPERSPACE FLAG
C
	if( hyper .eq. ohyper .and. ichar .ne. 78 ) goto 570
	call cursor( 52, 14 )
	if( hyper ) call colstr(icllbl,'::: HYPERSPACE :::^E')
	if( .not. hyper ) call colstr (icllbl,'                   ^E')
	ohyper = hyper
C
C  --	UPDATE DATE
C
570	call getval(5, 0,1681,  3, 2, idat )
	if( idat .eq. iodat )goto 580
	iodat = idat
	call colcur( 37, 23 )
	call number(4, idat/100.0, 8, 10, 2 )
C
C  --	UPDATE ENERGY
C
580	if( inergy .eq. iongry .and. ichar .ne. 78 ) goto 590
	iongry = inergy
	call colcur( 34, 22 )
	call number(2, inergy, 3 )
C
C  --	UPDATE LONG AND SHORT RANGE SENSORS AND QS COORDINATES
C
590	call updscr
     &( iqx, iqy, isx, isy, ichar, damage, iplayr, hyper )
C
C  --	UPDATE TORPEDOS
C
	if(itorp.eq.iotorp .and. armed.eq.oarmed .and. ichar.ne.78)
     & goto 600
	iotorp = itorp
	oarmed = armed
	call colcur( 37, 19 )
	call number(2, itorp, 2 )
	if( armed ) call string(1,' + A^E')
	if( .not. armed ) call string(1,'    ^E')
C
C  --	UPDATE SHIELD
C
600	if( isheld .eq. ishold .and. ichar .ne. 78 ) goto 610
	ishold = isheld
	call colcur( 35, 18 )
	call number(2, isheld, 3 )
C
C  --	UPDATE DEGREE
C
610	call putval(6, 0,1719,  4, iplayr, 8, degree )
	if( int( degree*100. ) .eq. int( odegre*100. ) .and.
     & ichar .ne. 78 ) goto 620
	odegre = degree
	call colcur( 36, 17 )
	call number(2, ifix(degree), 3 )
C
C  --	UPDATE BEARING
C
620	if( int( bearin*100. ) .eq. int( obearn*100. ) .and.
     & ichar .ne. 78 ) goto 630
	obearn = bearin
	call colcur( 36, 16 )
	call number(2, ifix(bearin), 3 )
C
C  --	UPDATE SPEED
C
630	call putval(6, 0,1736,  4, iplayr, 5, speed )
	if( int( speed*100. ) .eq. int( ospeed*100. ) .and.
     & ichar .ne. 78 ) goto 640
	ospeed = speed
	call colcur( 32, 15 )
	call number(4, speed, 4, 10, 1 )
C
C  --	UPDATE NEW SPEED
C
640	if( aspeed .gt. 8.0 ) aspeed = 8.0
	if( speed .gt. 8.0 ) speed = 8.0
	if( int( aspeed*100. ) .eq. int( opeed*100. ) .and.
     & ichar .ne. 78 ) goto 641
	opeed = aspeed
	call colcur( 35, 14 )
	call number(4, opeed, 4, 10, 1 )
C
C  --	UPDATE DOCKING BANKS
C
641	if
     &(odn.eq.denrgy.and.odt.eq.dtorp.and.odc.eq.dcrew.and.
     &ichar.ne.78) goto 650
	call colcur( 34, 13 )
	call number(2, denrgy, 5 )
	odn = denrgy
	call chrout(32)
	call number(2, dtorp, 2 )
	odt = dtorp
	call chrout(32)
	call number(2, dcrew, 3 )
	odc = dcrew
C
C  --	UPDATE DAMAGE REPORT
C
650	icrew = 0
	do 680 i=1,7
	    if( damage(7,1) .gt. 0 ) damage(i,2)=max0(0,damage(i,2)-1)
	    if( damage(i,1) .gt. 0 )damage(i,1)=damage(i,1)-damage(i,2)
	    if( damage(i,1) .lt. 0 ) damage(i,1) = 0
	    if( damage(i,2) .eq. 0 ) i1 = -1
	    if( damage(i,2) .ne. 0 ) i1 = damage(i,1)/damage(i,2)
	    icrew = icrew + damage(i,2)
	    if( i1 .eq. dam1(i,1) .and. ichar .ne. 78 ) goto 670
	    dam1(i,1) = i1
	    call colcur( 18, 10-i )
	    if( i1 .ne. 0 ) goto 660
	    if( i .ne. 7 ) call colstr(iclgre,' Operational^E')
	    if( i .eq. 7 ) call colstr(iclgre,'Green:   ^E')
	    goto 670
C
660	    if( i .eq. 7 ) goto 665
	    if( i1 .lt. 0 ) call colstr(iclpur,' * No crew *^E')
	    if( damage(i,1) .eq. 0 .and. i1 .lt. 0 ) damage(i,1)=1
	    if( i1 .lt. 0 ) goto 670
	    call pcolor(iclyel)
	    call number(2, i1, 4 )
	    call string(1,' minutes^E')
	    goto 670
C
665	    if( i1 .lt. 100 .or. damage(7,2) .eq. 0 )
     &		call colstr(iclyel,'Yellow:  ^E')
	    if(i1.ge.100.and.i1.lt.200.and.damage(7,2).ne.0)
     &		call colstr(iclred,'Red:     ^E')
	    if( i1 .ge. 200 .and. damage(7,2) .ne. 0 )
     &		call colstr(iclred,'Critical:^E')
C
670	    if(i.ne.7.or.(ichar.ne.78.and.icrew.eq.ocrew)) goto 675
	    call colcur( 28, 10-i )
	    call number(2, icrew, 3 )
	    ocrew = icrew
675	    if( damage(i,2) .eq. dam1(i,2) .and. ichar .ne. 78 )
     &	    goto 680
	    call colcur( 36, 10-i )
	    call number(2, damage(i,2), 5 )
	    dam1(i,2)=damage(i,2)
680	continue
	if( icrew .gt. 0 ) goto 681
	call colcur( 1, 2 )
	call colstr(iclred,'The entire crew has been killed.^E')
	call cease( iplayr, iqx, iqy, isx, isy, fault )
C
C  --	REMOVE A FEW IONS FROM THE GALAXY
C
681	do 682 i = 1, 10
	    ix = iran( 10 )
	    iy = iran( 10 )
	    call getval(6, 0,1822,  2, ix, iy, ival1 )
	    call getval(8, 0,1823,  1, ix, iy, iran(10), iran(10), ival )
	    if( ival .eq. 4 .and. ival1 .le. 99 ) call putval(4, 0,1824,  -1, 0 )
682	continue
C
C  --	UPDATE ANY TORPEDOS UNDER SHIPS CONTROL
C
	call lock
	do 750 i= 1,25
	    if( torpx(i) .eq. 0.0 ) goto 750
	    call getval
     &(8, 0,1833, 1, itx(i), ity(i), int(torpx(i)+0.5),
     &int(torpy(i)+0.5), ival)
	    if( ival .eq. -iplayr ) call putval(4, 0,1835,  -1, 0 )
	    itdist(i) = itdist(i) + 1
	    if( ( ival .gt. 0 .and. ival .ne. iplayr+64 ) .or.
     &	    itdist(i) .gt. 40 ) goto 740
	    torpx(i) = sqwrap( itx(i), ix1, torpxs(i)+torpx(i) )
	    torpy(i) = sqwrap( ity(i), iy1, torpys(i)+torpy(i) )
	    call getval(8, 0,1841,  1, itx(i), ity(i), ix1, iy1, ival )
C
	    if( ival .gt. 0 .and. ival .ne. -iplayr .and. ival .ne. 4 )
     & goto 690
	    call putval(4, 0,1845,  -1, -iplayr )
	    goto 750
C
690	if( ival .eq. -iplayr .or. ival .eq. iplayr+64 ) goto 750
	    if( ival .eq. 3 .or. ival .eq. 4 .or. ival .lt. 0 )
     &	    goto 740
C
	    if( ival .ne. 1 .and. ival .ne. 2 ) goto 730
	    if( iran(10) .gt.3 ) goto 740
	    call putval(4, 0,1854,  -1, 0 )
	    call nova( itx(i), ity(i), ix1, iy1 )
	    if( ival .eq. 1 ) call addval(6, 0,1856,  2, itx(i), ity(i), -1 )
	    if( ival .eq. 2 ) call addval(6, 0,1857,  2, itx(i), ity(i), -10 )
	    if( ival .eq. 1 ) goto 740
725	    istx = iran(10)
	    isty = iran(10)
	    call getval(6, 0,1861,  2, istx, isty, ival1 )
	    if( ival1 .gt. 9 ) goto 725
	    call addval(4, 0,1863,  -2, 10 )
726	    istx1 = iran(10)
	    isty1 = iran(10)
	    call getval(8, 0,1866,  1, istx, isty, istx1, isty1, ival1 )
	    if( ival1 .ne. 0 ) goto 726
	    call addval(4, 0,1868,  -1, 2 )
	    goto 740
C
730	    call putval(6, 0,1871,  4, ival-64, 4, -20 )
	    call putval(6, 0,1872,  4, ival-64, 17, iplayr )
C
740	    torpx(i) = 0.0
C
750	continue
	call unlock
C
C  --	FIND OUT IF HIT BY ENEMY
C
	call getval(6, 0,1881,  4, iplayr, 4, i1 )
	call putval(4, 0,1882,  -4, 0 )
	if( i1 .eq. 0 ) goto 780
	call colcur( 26, 12 )
	if( i1 .lt. 0 ) goto 760
	call colstr(iclred,'Ship hit with ^E')
	call number(2, i1, 3 )
	call string(1,'% phaser bolt.     ^E')
	goto 770
C
760	call colstr(iclred,'Ship hit by photon torpedo.        ^E')
C
770	call getval(6, 0,1893,  4, iplayr, 17, ival )
	fault = ival
	call damagm( damage, iabs(i1), isheld )
	erase2 = .true.
C
C  --	GET ANY MESSAGES
C
780	call getval(5, 0,1900,  3, 3, ival )
	if( ival .ne. iplayr ) goto 70
	call colcur( 1, 2 )
	call irepeat(32,78)
        call cursor( 1, 2 )
	call getval(5, 0,1905,  5, 1, index )
	do 790 i1= 2, index
	    i = i1
	    call getval(5, 0,1908,  5, i, commar(i-1) )
790	continue
	call putval(5, 0,1910,  3, 3, 0 )
	call chrout( commar(1)+64 )
	call chrout(40)
	call getval(6, 0,1913,  4, commar(1), 9, ival )
	call number(1, ival )
	call chrout(44)
	call getval(6, 0,1916,  4, commar(1), 10, ival )
	call number(1, ival )
	call string(1,'): - ^E')
	if( index-2 .gt. 0 )call string(3, commar(2), 0, index-2 )
	erase3 = .true.
	goto 70
C
C  --	GAME ENDED FOR SOME REASON (PROBABLY TOO MANY PEOPLE)
C
792	call colstr(icllbl,'I am sorry, too many people are playing.
     &  Try again later.^M^J^E')
	call curbuf
	call exprog
C
C  --	PRIVILEDGED:  MAKE MAP AND PRINT OUT STATISTICS
C
C  --	IF THERE IS A NOT A GALAXY, SET ONE UP TO MAP.
C  --	IN ANY CASE, GET OUTPUT FILE SPECIFICATION
C
800	call check( iniflg )
	if(iniflg) call initdb
803	call string(1,'^M^JOutput file specification: ^E')
	call curbuf
	call getstr(3, comara, 60, i )
C
C  --	ATTEMPT TO OPEN FILE
C
	call iscan( 1, i, comara, filesp )
	call ofile( 2, filesp, 0 )
	if( lerror(0) ) goto 805
	call wfile( 2, filesp )
	if( .not. lerror(0) ) goto 808
C
C  --	HE MADE AN ERROR:  TELL HIM WHAT IT LOOKED LIKE AND GO BACK
C
	call string(1,'Cannot open file for:^M^J    ^E')
	call outspc( filesp )
	goto 803

805	call string(1,'Cannot open device for:^M^J    ^E')
	call outspc( filesp )
	goto 803
C
C  --	SELECT CHANNEL, PRINT OUT HEADER AND START MAIN MAP LOOP
C
808	call select( 2 )
	call string(1,'
     &                                                  Stardate: ^E')
	call getval(5, 0,1964,  3, 2, idat )
	call number(4, idat/100.0, 8, 10, 2 )
	call string(1,'^M^J^J^J^E')
	do 820 i1 = 10, 1, -1
	    iqy = i1
	    call string(1,'       ^E')
	    do 809 i2 = 1, 111
		call chrout(45)
809	    continue
	    call string(1,'^M^J       ^E')
	    do 810 i2 = 1, 10
		iqx = i2
		call string(1,':::^E')
		call getval(6, 0,1977,  2, iqx, iqy, ival )
		call number(2, ival, 5 )
		call string(1,' ::^E')
810	    continue
	    call string(1,':^M^J       ^E')
	    do 811 i2 = 1, 111
		call chrout(45)
811	    continue
	    call crlf
	    do 820 i2 = 10, 1, -1
		    isy = i2
		    if( isy .eq. 5 ) call number(2, iqy, 5 )
		    if( isy .ne. 5 ) call string(1,'     ^E')
		    call string(1,'  ^E')
		    do 815 j = 1, 10
			iqx = j
			call chrout(58)
			do 815 i = 1, 10
			    isx = i
			    call getval(8, 0,1996,  1, iqx, iqy, isx, isy, ival )
			    if( ival .lt. 0 ) ival = 5
			    if( ival .le. 6 ) ival = objval( ival+1 )
			    call chrout( ival )
C
815			continue
	    call string(1,':^M^J^E')
820	continue
	call string(1,'       ^E')
	do 821 i = 1, 111
	    call chrout(45)
821	continue
	call string(1,'^M^J^J    ^E')
	do 825 i1 = 1, 10
	    iqx = i1
	    call number(2, iqx, 11 )
825	continue
	call string(1,'^M^J^J^J^J^E')
C
C  --	MAP DONE, PRINT OUT SHIP STATISTICS
C
	do 900 i1 = 1, 26
	    i = i1
	    call getval(6, 0,2019,  4, i, 1, j )
	    if( j .eq. 0 ) goto 900
	    call chrout( i+64 )
	    call string(1,' - ^E')
	    call getval(6, 0,2023,  4, i, 2, ival )
	    call string(3, ival, 6, 6 )
	    call getval(6, 0,2025,  4, i, 3, ival )
	    call string(3, ival, 6, 6 )
	    if( i .ne. 1 ) goto 899
	    call string(1,'  Computer controlled ship^M^J^E')
	    goto 900
899	    call string(1,'  J^E')
	    call number(2, j, 3 )
	    call string(1,'   ^E')
	    sname(1) = igtab( j, 25 )
	    sname(2) = igtab( j, 26 )
	    call string(3, sname, 6, 12 )
	    call string(1,'  [^E')
	    call number(3, ileft( igtab( j, 2 ) ), 5, 8 )
	    call chrout(44)
	    call number(3, iright( igtab( j, 2 ) ), 5, 8 )
	    call string(1,']  TTY^E')
	    call number(3, itty( j ), 3, 8 )
	    call string(1,'  at ^E')
	    call nodlin( itty( j ), inode, iline )
	    call string(3, node( inode ), 6, 6 )
	    call crlf
900	continue
C
C  --	FINISHED, NOW CLOSE FILES AND EXIT
C
	call close( 1 )
	call close( 2 )
	call exprog
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
