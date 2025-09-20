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
C	*** CUBIC.FOR ***
	subroutine fmain

	implicit integer ( a - z )

	integer wr(76,4), move(4,4,4), com(60), par(20)
	integer comov( 2 ), moves( 64, 3 ), turn, ipl, player
	logical coord, errflg, privd
	integer filesp(13)

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data ( ( wr(i,j), j=1,4 ), i=1,76 )/
     &111,121,131,141,211,221,231,241,311,321,331,341,411,421,431,441,
     &111,211,311,411,121,221,321,421,131,231,331,431,141,241,341,441,
     &111,221,331,441,411,321,231,141,112,122,132,142,212,222,232,242,
     &312,322,332,342,412,422,432,442,112,212,312,412,122,222,322,422,
     &132,232,332,432,142,242,342,442,112,222,332,442,412,322,232,142,
     &113,123,133,143,213,223,233,243,313,323,333,343,413,423,433,443,
     &113,213,313,413,123,223,323,423,133,233,333,433,143,243,343,443,
     &113,223,333,443,413,323,233,143,114,124,134,144,214,224,234,244,
     &314,324,334,344,414,424,434,444,114,214,314,414,124,224,324,424,
     &134,234,334,434,144,244,344,444,114,224,334,444,414,324,234,144,
     &111,112,113,114,121,122,123,124,131,132,133,134,141,142,143,144,
     &211,212,213,214,221,222,223,224,231,232,233,234,241,242,243,244,
     &311,312,313,314,321,322,323,324,331,332,333,334,341,342,343,344,
     &411,412,413,414,421,422,423,424,431,432,433,434,441,442,443,444,
     &111,122,133,144,114,123,132,141,211,222,233,244,214,223,232,241,
     &311,322,333,344,314,323,332,341,411,422,433,444,414,423,432,441,
     &111,212,313,414,114,213,312,411,121,222,323,424,124,223,322,421,
     &131,232,333,434,134,233,332,431,141,242,343,444,144,243,342,441,
     &111,222,333,444,411,322,233,144,141,232,323,414,114,223,332,441/

	if( iclwhi .ne. 0 ) goto 3
	iclwhi = 1
	icldbl = 2
	iclred = 3
	icllbl = 4
	iclpur = 5
	iclgre = 6
	iclyel = 7
	iclbla = 8

3	call pback( iclbla )
	call pcolor( iclwhi )
	call settty( com, par, ilen, privd, filesp )
	if( ilen.gt.0 .and. iserch( par,isxbit('DEBUG~'),ilen ).ne.0
     & .and. privd ) goto 1000
100	call string(1,'Do you want the computer to go first? ^B')
	call getstr(3, com, 60, ilen )
	if( ilen .eq. 0 ) goto 100
	call allcap( com, ilen )
	if( com(1) .ne. 89 .and. com(1) .ne. 78 ) goto 100
	comov(1) = com(1)

200	call string(1,'Do you want the computer to go second? ^B')
	call getstr(3, com, 60, ilen )
	if( ilen .eq. 0 ) goto 200
	call allcap( com, ilen )
	if( com(1) .ne. 89 .and. com(1) .ne. 78 ) goto 200
	comov(2) = com(1)

250	call string(1,'Do you want the coordinates printed? ^B')
	call getstr(3, com, 60, ilen )
	if( ilen .eq. 0 ) goto 250
	call allcap( com, ilen )
	if( com(1) .ne. 89 .and. com(1) .ne. 78 ) goto 250
	coord = .true.
	if( com(1) .eq. 78 ) coord = .false.

	call updscr( moves, move, .true., coord )
	player = 1

300	call getmov(com,move,wr,player,comov(player),coord,moves,turn)
	call eval( wr, move, ipl )
	call updscr( moves, move, .false., coord )
	player = 3-player
	if( ipl .lt. 0 ) goto 300

400	call cursor( 1, 2 )
	if( ipl .eq. 0 )
     &call string(1,'Stalemate.                             ^M^J^E')
	if( ipl .eq. 1 )
     &call string(1,'X wins.                                ^M^J^E')
	if( ipl .eq. 2 )
     &call string(1,'O wins.                                ^M^J^E')
500	call string(1,'Do you want to play again?  ^B')
	call getstr(3, com, 60, ilen )
	if( ilen .eq. 0 ) goto 500
	call allcap( com, ilen )
	if( com(1) .ne. 89 .and. com(1) .ne. 78 ) goto 500
	if( com(1) .eq. 78 ) goto 1300
	do 600 x = 1, 4
	    do 600 y = 1, 4
		do 600 z = 1, 4
		    move( x, y, z ) = 0
600	continue
	do 650 i = 1, turn
	    moves( i, 1 ) = 0
650	continue
	turn = 0
	goto 100

1000	call updscr( moves, move, .true., .true. )
	do 1200 i = 1, 76
	    call cursor( 1, 2 )
	    call number(2, i+0, 2 )
	    call chrout(58)
	    do 1150 j = 1, 4
		ival = wr( i, j )
		call number(2, ival, 4 )
		x = ival/100
		y = ival/10 - 10*x
		z = mod( ival, 10 )
		move( x, y, z ) = 3
1150	    continue
	    call updscr( moves, move, .false., .true. )
	    call cursor( 22, 2 )
	    call string(1,'Go: ^B')
	    call chrwat( ichar )
	    do 1170 j = 1, 4
		x = wr( i, j )/100
		y = wr( i, j )/10 - 10*x
		z = mod( wr( i, j ), 10 )
		move( x, y, z ) = 0
1170	    continue
1200	continue

1300	call close( 1 )
	call grafof
	call pstop
	end
C
	subroutine updscr( moves, move, newscr, coord )

	implicit integer ( a - z )

	integer move( 4, 4, 4 ), oldmov( 4, 4, 4 ), moves( 64, 3 )
	logical newscr, coord, used(64)
	integer pieces(5), colors(5)

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data pieces/46,88,79,43,64/

	if( colors(1) .ne. 0 ) goto 3
	colors(1) = iclwhi
	colors(2) = iclyel
	colors(3) = icllbl
	colors(4) = iclred
	colors(5) = iclpur

3	if( .not. newscr ) goto 50
	call clrscr
	call cursor( 3, 24 )
	call string(1,'X moves^M^J-------------^E')
	call cursor( 63, 24 )
	call string(1,'O moves^E')
	call cursor( 61, 23 )
	call string(1,'-------------^E')
	if( .not. coord ) goto 50
	do 10 y = 1, 4
	    do 10 z = 1, 4
		call cursor( 28-y, 5*z+y-2 )
		call number(1, y*10+z )
		call cursor( 51-y, 5*z+y-2 )
		call number(1, y*10+z )
10	continue
	call cursor( 31, 3 )
	do 20 x = 1, 4
	    call number(2, x+0, 4 )
20	continue
	call cursor( 26, 23 )
	do 30 x = 1, 4
	    call number(2, x+0, 4 )
30	continue

50	do 100 x = 1, 4
	    do 100 y = 1, 4
		do 100 z = 1, 4
		    if( .not. newscr .and.
     &			move(x,y,z) .eq. oldmov(x,y,z) ) goto 100
			oldmov(x,y,z) = move(x,y,z)
			call cursor( 30+4*x-y, 5*z+y-2 )
			call pcolor( colors(move(x,y,z)+1) )
			call chrout( pieces(move(x,y,z)+1) )
100	continue

	do 200 i = 1, 64
	    if( newscr ) used(i) = .false.
	    if( (moves(i,1) .ne. 0 ) .eq. used(i) ) goto 200
	    used(i) = (moves(i,1).ne.0)
	    iv = (i+1)/2
	    call cursor(mod(i+1,2)*60+(iv/17)*8+1,22-mod(iv-1,16))
	    if( moves(i,1).eq.0) call string(1,'     ^E')
	    if( moves(i,1).eq.0) goto 200
	    call number(1, moves( i, 1 ) )
	    call number(1, -moves( i, 2 ) )
	    call number(1, -moves( i, 3 ) )
200	continue
	call pcolor( iclwhi )
	if( job(-1) .ne. 0 ) return
	call update
	call nap( 500, 12 )
	return
	end
C
	subroutine getmov(com,move,wr,ipl,ichar,coord,moves,turn)

	implicit integer ( a - z )

	integer move( 4, 4, 4 ), wr( 76, 4 ), com( 60 ), moves( 64, 3 )
	integer turn, ipl
	logical coord, errflg

	call cursor( 1, 1 )
	call string(1,'                  ^E')
100	call cursor( 1, 2 )
	if( ipl .eq. 1 ) call chrout(88)
	if( ipl .eq. 2 ) call chrout(79)
	call string(1,'''s move:                           ^E')
	if( ichar .eq. 89 ) goto 400
	call cursor( 12, 2 )
	call curbuf
	call getstr(3, com, 60, ilen )
	if( ilen .eq. 0 ) goto 100
	call allcap( com, ilen )
	if( com(1) .eq. 71 ) ichar = 89
	if( com(1) .eq. 71 .or. com(1) .eq. 77 ) goto 400
	if( com(1) .eq. 85 ) goto 1100
	if( com(1) .ne. 69 ) goto 105
	call grafof
	call tstop
	call grafon
105	if( com(1) .eq. 69 .or. com(1) .eq. 78 )
     &		call updscr( moves, move, .true., coord )
	if( com(1) .eq. 69 .or. com(1) .eq. 78 ) goto 100
	call getnum(8, com, ilen, x, 10, y, 10, z, 10 )
	y = iabs( y )
	z = iabs( z )
	if( x.lt.111 .or. x.gt.444 .or. y.ne.0 .or. z.ne.0 ) goto 125
	z = mod( x, 10 )
	y = x/10 - 10*(x/100)
	x = x/100
125	if(x.ge.1 .and. x.le.4 .and. y.ge.1 .and. y.le.4
     &.and. z.ge.1 .and. z.le.4) goto 150
	call cursor( 1, 1 )
	call string(1,'^GIllegal move.     ^E')
	goto 100

150	if( move(x,y,z) .eq. 0 ) goto 1000
	call cursor( 1, 1 )
	call string(1,'^GAlready occupied. ^E')
	goto 100

400	ibest = -99999999
	call cursor( 12, 2 )
	call string(1,' * Working *^B')
	do 500 mx = 1, 4
	    do 500 my = 1, 4
		do 500 mz = 1, 4
		    ich = ivalue( mx+0, my+0, mz+0, move, wr, ipl )
		    if( ich .le. ibest ) goto 500
		    ibest = ich
		    x = mx
		    y = my
		    z = mz
500	continue

1000	turn = turn + 1
	moves( turn, 1 ) = x
	moves( turn, 2 ) = y
	moves( turn, 3 ) = z
	move( x, y, z ) = ipl
	return

1100	if( turn .eq. 0 ) goto 1200
	move( moves(turn,1), moves(turn,2), moves(turn,3) ) = 0
	moves( turn, 1 ) = 0
	turn = turn - 1
	ipl = 3-ipl
	call updscr( moves, move, .false., coord )
	goto 100

1200	call cursor( 1, 1 )
	call string(1,'^GNo previous moves.^E')
	goto 100
	end
C
	subroutine eval( wr, move, rowtyp )

	implicit integer ( a - z )

	integer wr( 76, 4 ), move( 4, 4, 4 ), win(4,3)
	logical nostal

	nostal = .false.
	do 100 i = 1, 76
	    rowtyp = 0
	    rowval = 0
	    do 50 j = 1, 4
		ival = wr( i, j )
		win(j,1) = ival/100
		win(j,2) = ival/10 - 10*win(j,1)
		win(j,3) = mod( ival, 10 )
		ival = move( win(j,1), win(j,2), win(j,3) )
		if( ival .eq. 3-rowtyp ) goto 100
		if( ival .gt. 0 ) rowtyp = ival
		if( ival .gt. 0 ) rowval = rowval + 1
50	    continue
	    if( rowval .ge. 4 ) goto 200
	    nostal = .true.
100	continue
	rowtyp = 0
	if( nostal ) rowtyp = -1
	return

200	do 300 i = 1, 4
	    move( win(i,1), win(i,2), win(i,3) ) = rowtyp + 2
300	continue
	return
	end
C
	integer function ivalue( x, y, z, move, wr, ipl )

	implicit integer ( a - z )

	integer x, y, z, wr( 76, 4 ), move( 4, 4, 4 ), rowtyp
	logical danger, win, toinro

	danger = .false.
	win = .false.
	ivalue = -99999999
	if( move( x, y, z ) .ne. 0 ) return
	ivalue = 0
	xyz = x*100+y*10+z
	do 1000 i = 1, 76
	    toinro = .false.
	    do 100 j = 1, 4
		if( wr( i, j ) .eq. xyz ) goto 200
100	    continue
	    goto 1000

200	    mycont = 0
	    hscont = 0
	    do 300 j1 = 1, 4
		ival = wr( i, j1 )
		mx = ival/100
		my = ival/10 - 10*mx
		mz = mod( ival, 10 )
		ival = move( mx, my, mz )
		if( ival .eq. ipl ) mycont = mycont + 1
		if( ival .eq. 3-ipl ) hscont = hscont + 1
		if( mycont*hscont .ne. 0 ) goto 1000
300	    continue
	    if( mycont .eq. 3 ) ivalue = 999999999
	    if( hscont .eq. 3 ) ivalue = ivalue + 9999999
	    if( hscont .eq. 0 .and. mycont .eq. 2 ) toinro = .true.
	    if( win .and. toinro ) ivalue = ivalue + 10000
	    if( toinro ) win = .true.
	    if( mycont .eq. 0 ) ivalue = ivalue + (hscont*10)**3
	    if( hscont .eq. 0 ) ivalue = ivalue  + (mycont*10)**3
	    if( danger .and. mycont .eq. 0 ) ivalue = ivalue + 10000
	    if( mycont .eq. 0 .and. hscont .ge. 2 ) danger = .true.
1000	continue
	return
	end
