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
	subroutine fmain

	implicit integer (a-z)
	integer comara( 80 ), par( 20 ), ilen, filspc( 13 )
	integer xpos( 40 ), ypos( 40 ), xdir( 9 ), ydir( 9 )
	integer ddir1( 9 ), ddir2( 9 )
	logical privd

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data xdir/-1,0,1,-1,0,1,-1,0,1/, ydir/-1,-1,-1,0,0,0,1,1,1/
	data ddir1/4,1,2,7,0,3,8,9,6/
	data ddir2/2,3,6,1,0,9,4,7,8/

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
100	call pback( iclbla )
	call pcolor( iclwhi )
	call string(1,'Input snake size (1-40): ^B')
	call getnum(3, 10, isize, 10 )
	if( isize .le. 0 .or. isize .gt. 40 ) goto 100
	do 150 i = 1, 40
	    xpos(i) = 0
150	continue

	call clrscr
	call pback( icllbl )
	do 200 i = 1, 23
	    call cursor( 1, i+1 )
	    call irepeat(79,80)
200	continue
	call pback( iclbla )

	xpos(1) = iran( 80 )
	ypos(1) = iran( 23 ) + 1
300	idir = iran( 9 )
	if( idir .eq. 5 ) goto 300

400	continue
	call nap( 100, 4 )
	call curbuf
	call chrbuf( ichar )
	if( ichar .ne. -1 ) goto 1000
	if( xpos(isize) .eq. 0 ) goto 410
	if( isize .eq. 1 ) goto 406
	do 405 i = 1, isize-1
	    if(xpos(i) .ne. xpos(isize)) goto 405
	    if(ypos(i) .eq. ypos(isize)) goto 410
405	continue
406	continue
	call cursor( xpos(isize), ypos(isize) )
	call chrout(32)
410	if( isize .eq. 1 ) goto 451
	do 450 i = isize, 2, -1
	    xpos(i) = xpos(i-1)
	    ypos(i) = ypos(i-1)
450	continue
451	continue
	i = iran(3)
	if( i .ne. 1 ) goto 500
475	ndir = ddir1( idir )
	if( iran(10) .gt. 5 ) ndir = ddir2( idir )
	idir = ndir

500	if(xpos(1)+xdir(idir).lt.1.or.xpos(1)+xdir(idir).gt.80)goto 475
	if(ypos(1)+ydir(idir).lt.2.or.ypos(1)+ydir(idir).gt.24)goto 475
	xpos(1) = xpos(1) + xdir(idir)
	ypos(1) = ypos(1) + ydir(idir)
	call cursor( xpos(1), ypos(1) )
	if(idir.eq.1) ichar = 43
	if(idir.eq.2) ichar = 94
	if(idir.eq.3) ichar = 43
	if(idir.eq.4) ichar = 62
	if(idir.eq.6) ichar = 60
	if(idir.eq.7) ichar = 43
	if(idir.eq.8) ichar = 118
	if(idir.eq.9) ichar = 43
	call chrout( ichar )
	if( xpos(2) .eq. 0 ) goto 400
	call cursor( xpos(2), ypos(2) )
	call chrout(42)
	goto 400

1000	call clrscr
	call close( 1 )
	call grafof
	call pstop
	end
