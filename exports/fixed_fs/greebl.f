Cindx#	greebl.for - Multi-user game where the ballons are out to get you!
C@HDR@	$Id$
C@HDR@
C@HDR@	Copyright (c) 1982-2026 Christopher Caldwell (Christopher.M.Caldwell0@gmail.com)
C@HDR@
C@HDR@	Permission is hereby granted, free of charge, to any person
C@HDR@	obtaining a copy of this software and associated documentation
C@HDR@	files (the "Software"), to deal in the Software without
C@HDR@	restriction, including without limitation the rights to use,
C@HDR@	copy, modify, merge, publish, distribute, sublicense, and/or
C@HDR@	sell copies of the Software, and to permit persons to whom
C@HDR@	the Software is furnished to do so, subject to the following
C@HDR@	conditions:
C@HDR@	
C@HDR@	The above copyright notice and this permission notice shall be
C@HDR@	included in all copies or substantial portions of the Software.
C@HDR@	
C@HDR@	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
C@HDR@	KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
C@HDR@	WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
C@HDR@	AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
C@HDR@	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
C@HDR@	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
C@HDR@	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
C@HDR@	OTHER DEALINGS IN THE SOFTWARE.
C
Chist#	2026-02-17 - Christopher.M.Caldwell0@gmail.com - Created
C------------------------------------------------------------------------
Cdoc#	greebl.for - Multi-user game where the ballons are out to get you!
Cdoc#	Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC.
C------------------------------------------------------------------------
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

	call init(6, 0,82,  screen, 18, 24, 80 )
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

	call init(5, 0,117,  inuse, 1, 100 )
	do 210 i = 1, 100
	    call putval(5, 0,119,  inuse, i+0, 0 )
210	continue
	call init(6, 0,121,  pos, 7, 100, 2 )
	call init(5, 0,122,  direxn, 7, 100 )
	call init(5, 0,123,  conflg, 1, 100 )
	call init(5, 0,124,  type, 6, 100 )
	call init(5, 0,125,  useful, 36, 3 )
	call putval(5, 0,126,  useful, 1, 0 )
	call putval(5, 0,127,  useful, 2, 0 )
	call putval(5, 0,128,  useful, 3, 0 )
	call init(5, 0,129,  charep, 7, 100 )
	call init(5, 0,130,  recovr, 5, 100 )
	call init(5, 0,131,  whosen, 7, 100 )
	call init(6, 0,132,  score, 18, 100, 2 )
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
	    call getval(5, 0,149,  inuse, i+0, ival )
	    if( ival .eq. 1 ) goto 10023
	    player = i
	    goto 10025

10023	    call getval(5, 0,154,  charep, i+0, ival )
	    if( ival .eq. ichar ) goto 10030
10025	continue
	goto 10040

10030	call unlock
	call string(1,'^M^JCharacter in use.  ^E')
	goto 10020

10040	call putval(5, 0,163,  inuse, player, 1 )
	call putval(5, 0,164,  charep, player, ichar )
	call putval(6, 0,165,  pos, player, 1, 127 )
	call putval(6, 0,166,  pos, player, 2, 127 )
	call putval(5, 0,167,  type, player, 1 )
	call putval(5, 0,168,  direxn, player, 5 )
	call putval(5, 0,169,  conflg, player, 0 )
	call putval(5, 0,170,  recovr, player, 0 )
	call putval(6, 0,171,  score, player, 1, 0 )
	call putval(6, 0,172,  score, player, 2, 0 )
	call unlock
	call setdis( 1 )
	call newscr( screen )
	new = .false.

10050	ix = iran( 80 )
	iy = iran( 20 ) + 3
	if( ichrat( ix, iy ) .ne. 32 ) goto 10050
	call lock
	call cursor( ix, iy )
	call putval(6, 0,183,  pos, player, 1, ix )
	call putval(6, 0,184,  pos, player, 2, iy )
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
	call getval(5, 0,197,  inuse, player, ival )
	if( ival .ne. 1 ) call cease( .true. )
	call setdis( 0 )
	call getval(6, 0,200,  score, player, 1, ival )
	if( ival .eq. igrebl ) goto 10102
	call cursor( 41, 2 )
	call number(1, ival )
	igrebl = ival
10102	call getval(6, 0,205,  score, player, 2, ival )
	if( ival .eq. iplayr ) goto 10103
	call cursor( 65, 2 )
	call number(1, ival )
	iplayr = ival
10103	call setdis( 1 )
10110	call chrbuf( ichar )
	if( ichar .eq. -1 ) goto 20000
	if( reping .and. ichar .gt. 48 .and. ichar .le. 57 ) goto 10300
	call putval(5, 0,214,  conflg, player, 0 )
	call putval(5, 0,215,  direxn, player, 5 )
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
	call getval(5, 0,233,  recovr, player, ival )
	if( ival .gt. 0 ) goto 10110
	call getval(6, 0,235,  pos, player, 1, ix )
	call getval(6, 0,236,  pos, player, 2, iy )
	idir = ichar-48
	call torp
	call putval(5, 0,239,  whosen, itorp, player )
	call putval(5, 0,240,  recovr, player, 5 )
	goto 10110

10300	continue
	call putval(5, 0,244,  direxn, player, ichar-48 )
	call putval(5, 0,245,  conflg, player, 0 )
	if( reping ) call putval(4, 0,246,  -1, 1 )
	reping = .false.
	goto 10110
C
C****************************** MOVES *******************************

20000	call lock
	call getval(5, 0,252,  useful, 1, ival )
	if( ival .eq. 0 ) goto 20001
	call unlock
	call nap( 250, 4 )
	goto 10100

20001	call putval(5, 0,258,  useful, 1, 1 )
	call unlock
	call nap( 250, 4 )
	call getval(5, 0,261,  useful, 3, ival )
	call addval(4, 0,262,  -1, 1 )
	call colcur( 7, 2 )
	call number(2, ival, -6 )
	if( mod( ival, 250 ) .eq. 0 ) call makmon
	do 20100 i = 1, 100
	    iobj = i
	    call getval(5, 0,268,  inuse, iobj, ival )
	    if( ival .eq. 0 ) goto 20100
	    call getval(5, 0,270,  recovr, iobj, ival )
	    if( ival .le. 0 ) goto 20002
	    call addval(4, 0,272,  -1, -1 )
	    goto 20100

20002	    call getval(5, 0,275,  type, iobj, itype )
	    call getval(5, 0,276,  direxn, iobj, idir )
	    call getval(6, 0,277,  pos, iobj, 1, ix )
	    call getval(6, 0,278,  pos, iobj, 2, iy )
	    if( itype .ne. 2 ) goto 20010
	    jobj = idir
	    ival = 0
	    if( jobj .ne. 0 ) call getval(5, 0,282,  inuse, jobj, ival )
	    if( ival .ne. 0 ) call getval(5, 0,283,  type, jobj, ival )
	    if( ival .eq. 1 ) goto 20005
	    j = 0
20003	    j = j + 1
	    if( j .gt. 30 ) goto 20100
	    jobj = iran( 100 )
	    call getval(5, 0,289,  inuse, jobj, ival )
	    if( ival .eq. 0 ) goto 20003
	    call getval(5, 0,291,  type, jobj, ival )
	    if( ival .ne. 1 ) goto 20003
	    call putval(5, 0,293,  direxn, iobj, jobj )
20005	    call getval(6, 0,294,  pos, jobj, 1, imx )
	    if( imx .gt. 100 ) goto 20003
	    call getval(6, 0,296,  pos, jobj, 2, imy )
	    idir = isgn(imx-ix) + 3*isgn(imy-iy) + 5
	    if( imx.ne.ix .and. imy.ne.iy .and. imx-ix.ne.imy-iy
     &		.and. ix-imx.ne.imy-iy ) goto 20010
	    call torp
	    call putval(5, 0,301,  whosen, itorp, iobj )
	    call putval(5, 0,302,  recovr, iobj, 6 )
	    goto 20100

20010	    if( idir .eq. 5 ) goto 20100
	    call getval(5, 0,306,  charep, iobj, ichar )
	    inx = ix + xdir( idir )
	    iny = iy + ydir( idir )
	    inchar = ichrat( inx, iny )
	    if( inchar .eq. 32 ) goto 20050
	    if( inchar .eq. 42 .and. itype .eq. 2 )
     &		call putval(5, 0,312,  recovr, iobj, 10 )
	    if( inchar .eq. 42 .and. itype .eq. 2 ) goto 20050
	    call putval(5, 0,314,  conflg, iobj, 0 )
	    call putval(5, 0,315,  direxn, iobj, 5 )
	    if( itype .ne. 3 ) goto 20100
	    if( inchar .eq. 42 ) goto 20020
	    if( (inchar.le.64 .or. inchar.ge.91) .and.
     &		inchar.ne.46 .and. inchar.ne.64) goto 20025
	    do 20013 j = 1, 100
		jobj = j
		call getval(5, 0,322,  inuse, jobj, ival )
		if( ival .eq. 0 ) goto 20013
		call getval(6, 0,324,  pos, jobj, 1, ival )
		if( ival .ne. inx ) goto 20013
		call getval(6, 0,326,  pos, jobj, 2, ival )
		if( ival .eq. iny ) goto 20015
20013	    continue
20015	    continue
	    call putval(5, 0,330,  inuse, jobj, 0 )
	    if( inchar .eq. 46 ) goto 20020
	    call getval(5, 0,332,  whosen, iobj, jobj )
	    call getval(5, 0,333,  inuse, jobj, ival )
	    if( ival .eq. 0 ) goto 20020
	    call getval(5, 0,335,  type, jobj, ival )
	    if( ival .ne. 1 ) goto 20020
	    if( inchar .eq. 64 ) call addval(6, 0,337,  score, jobj, 1, 1 )
	    if( inchar .ne. 64 ) call addval(6, 0,338,  score, jobj, 2, 1 )
20020	    call cursor( inx, iny )
	    call pback( iclbla )
	    call chrout(32)
	    if( inchar .ne. 64 ) goto 20025
	    call addval(5, 0,343,  useful, 2, -1 )
	    if( nuser(0) .le. 1 ) call makmon
20025	    call putval(5, 0,345,  inuse, iobj, 0 )
	    if( ichrat( ix, iy ) .ne. ichar ) goto 20100
	    call cursor( ix, iy )
	    call pback( iclbla )
	    call chrout(32)
	    goto 20100

20050	    call cursor( ix, iy )
	    if(ichrat(ix,iy).ne.ichar) goto 20055
	    call pback( iclbla )
	    call chrout(32)
20055	    call putval(6, 0,356,  pos, iobj, 1, inx )
	    call putval(6, 0,357,  pos, iobj, 2, iny )
	    call cursor( inx, iny )
	    call pback( iclbla )
	    if( ichar .eq. 46 ) call pcolor( iclred )
	    if( ichar .eq. 64 ) call pcolor( iclyel )
	    if( ichar.gt.65 .and. ichar.le.90 ) call pcolor(iclwhi)
	    call chrout( ichar )
	    call getval(5, 0,364,  conflg, iobj, ival )
	    if( ival .eq. 0 ) call putval(5, 0,365,  direxn, iobj, 5 )
20100	continue
	call putval(5, 0,367,  useful, 1, 0 )
	goto 10100
C
	entry torph

	itorp = ifind(0)
	if( itorp .eq. 0 ) goto 30290

	call putval(6, 0,374,  pos, itorp, 1, ix )
	call putval(6, 0,375,  pos, itorp, 2, iy )
	call putval(5, 0,376,  type, itorp, 3 )
	call putval(5, 0,377,  charep, itorp, 46 )
	call putval(5, 0,378,  direxn, itorp, idir )
	call putval(5, 0,379,  conflg, itorp, 1 )
30290	call unlock
	return
C
	entry ifindr( iobjp )

	call lock
	do 40100 iobjp = 1, 100
	    call getval(5, 0,386,  inuse, iobjp+0, ival )
	    if( ival .eq. 0 ) goto 40200
40100	continue
	iobjp = 0
	return

40200	call putval(4, 0,392,  -1, 1 )
	call putval(5, 0,393,  recovr, iobjp, 0 )
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
	call putval(6, 0,407,  pos, imon, 1, imx )
	call putval(6, 0,408,  pos, imon, 2, imy )
	call putval(5, 0,409,  direxn, imon, 0 )
	call putval(5, 0,410,  conflg, imon, 0 )
	call putval(5, 0,411,  type, imon, 2 )
	call putval(5, 0,412,  charep, imon, 64 )
	call addval(5, 0,413,  useful, 2, 1 )
	call unlock
	return
C
	entry kilchr

	call unlock
	call lock
	call getval(6, 0,420,  pos, player, 1, ix )
	call getval(6, 0,421,  pos, player, 2, iy )
	call cursor( ix, iy )
	call chrout(32)
	call putval(5, 0,424,  inuse, player, 0 )
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
