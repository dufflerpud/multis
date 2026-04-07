Cindx#	risk.for - A computerized version of the 1957 Hasbro game of Risk
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
Cdoc#	risk.for - A computerized version of the 1957 Hasbro game of Risk
Cdoc#	Made with Robert Kenney's HIPAK.MAC.
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
	integer chreps( 7 )
	integer lstcom( 22 )
	logical new, privd, iniflg, lerror, eof

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	data new/.true./, strtnm/10/, lstpos/0/, intrvl/200/
	data useful,screen,coord,disto,owner,numat,
     &	contan,conarm,regfrm,regto,amtmov,timlft,whos
     &	/1,2,3,4,5,6,7,8,9,10,11,12,13/

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
	call check( iniflg )
	if( iniflg ) goto 10000
	call defadr( 1, iright(itbadr(screen)) )

20	call getval(5, 0,76,  useful, 1, maxreg )
	call getval(5, 0,77,  useful, 2, maxusr )
	call getval(5, 0,78,  useful, 7, maxcon )
	continue ! call ctrap
c	    call cease( useful )
	call lock
	call addval(5, 0,82,  useful, 3, 1 )
	call getval(4, 0,83,  -1, numusr )
	if( numusr .gt. maxusr ) call pstop
	if( numusr .lt. maxusr ) goto 30
	filspc(5) = isxbit('EXE~')
	call ofile( 2, filspc, 0 )
	if( lerror(0) ) goto 30
	call rfile( 2, filspc )
	if( lerror(0) ) goto 30
	call rnfile( 2, filspc )

30	regnum = iran( 26 )
	call getval(6, 0,94,  coord, regnum, 1, ival )
	if( ival .eq. 0 ) goto 30
	call getval(5, 0,96,  numat, regnum, ival )
	if( ival .ne. 0 ) goto 30
	call putval(4, 0,98,  -1, strtnm )
	call putval(5, 0,99,  owner, regnum, numusr )
	call unlock

35	call nap( 1000, 4 )
	call getval(5, 0,103,  useful, 3, ival )
	if( ival .lt. maxusr ) goto 35

	call grafon
	continue ! call ctrap
c	    call cease( useful )

100	call lock
	call addval(5, 0,111,  useful, 5, 1 )
	call getval(4, 0,112,  -1, ival )
	call unlock
	if( ival .eq. 1 ) goto 20000

110	if( new ) call newscr( 1 )
	if( .not. new ) call update( 1 )
	compos = 0
	numarm = 0
	call getval(5, 0,120,  useful, 4, maxcom )
	do 140 i = 1, maxcom
	    numcom = i
	    if( compos .ge. 22 ) goto 140
	    call getval(5, 0,124,  whos, numcom, ival )
	    if( ival .ne. numusr ) goto 140
	    call getval(5, 0,126,  timlft, numcom, timeto )
	    if( timeto .eq. 0 ) goto 140
	    compos = compos + 1
	    itest = timeto
	    call getval(5, 0,130,  regfrm, numcom, r1 )
	    itest = 4096*itest + r1
	    call getval(5, 0,132,  regto, numcom, r2 )
	    itest = 128*itest + r2
	    call getval(5, 0,134,  amtmov, numcom, numove )
	    itest = 128*itest + numove
	    numarm = numarm + numove
	    if( lstcom(compos) .eq. itest .and. .not. new ) goto 140
	    lstcom(compos) = itest
	    call colcur( 73, 25-compos )
	    if( timeto .eq. 0 ) call irepeat( 32, 8 )
	    if( timeto .eq. 0 ) goto 140
	    call number(2, numove, 2 )
	    call chrout( r1+64 )
	    call chrout( 62 )
	    call chrout( r2+64 )
	    call chrout(58)
	    call lnumbr(2, mod( timeto, 100 ), 2 )
140	continue
	if( lstpos .le. compos ) goto 151
	do 150 i = compos+1, lstpos
	    call colcur( 73, 25-i )
	    call irepeat( 32, 8 )
150	continue
151	continue
	numrgs = 0
	do 160 i = 1, maxreg
	    numreg = i
	    call getval(5, 0,158,  owner, numreg, ival )
	    if( ival .ne. numusr ) goto 160
	    call getval(5, 0,160,  numat, numreg, ival )
	    numarm = numarm + ival
	    if( ival .gt. 0 ) numrgs = numrgs + 1
160	continue
	if( numarm .ne. 0 .and. numrgs .ne. maxreg ) goto 170
	call setdis( 0 )
	call clrscr
	call colcur( 20, 12 )
	if( numarm .eq. 0 ) call string
     &	(1,'Your entire forces have been destroyed.  You have lost^E')
	if( numrgs .eq. maxreg ) call string
     &	(1,'You have taken over the world.  Congratulations^E')
	call string(1,'.^G^M^J^E')
	call close( 1 )
	call grafof
	call exprog

170	if(oldarm.eq.numarm.and.oldrgs.eq.numrgs.and..not.new) goto 180
	oldarm = numarm
	oldrgs = numrgs
	call colcur( 73, 2 )
	call number(2, numarm, 3 )
	call chrout( numusr+64 )
	call lnumbr(2, -numrgs, 3 )
180	lstpos = compos
	new = .false.
	call comand( ichar, comara, ilen )
	if( ichar .eq. -1 ) goto 100

C***	NEW COMMAND

	if( ichar .ne. 78 ) goto 200
	new = .true.
	lstpos = 0
	goto 100

C***	EXIT COMMAND

200	if( ichar .ne. 69 .or. comara(2) .ne. 88 ) goto 300
	call cease( useful )

C***	MOVE COMMAND

300	call getnum(4, comara, ilen, nummen, 10 )
	i = 1
400	i = i + 1
	if( i .eq. ilen ) goto 800
	r1 = icon( comara(i) ) - 64
	if( r1 .lt. 1 .or. r1 .gt. 26 ) goto 400
450	i = i + 1
	if( i .gt. ilen ) goto 800
	r2 = icon( comara(i) ) - 64
	if( r2 .lt. 1 .or. r2 .gt. 26 ) goto 450
	call lock
	call getval(6, 0,214,  disto, r1, r2, timeto )
	if( timeto .eq. 0 ) goto 520
	call getval(5, 0,216,  owner, r1, ival )
	if( ival .ne. numusr ) goto 520
	call getval(5, 0,218,  numat, r1, ival )
	if( ival .eq. 0 ) goto 520
	nummen = max0( 1, min0( ival, nummen, 127 ) )
	call addval(4, 0,221,  -1, -nummen )
	call getval(5, 0,222,  useful, 4, maxcom )
	if( maxcom .eq. 0 ) goto 501
	do 500 i = 1, maxcom
	    numcom = i
	    call getval(5, 0,226,  timlft, numcom, ival )
	    if( ival .eq. 0 ) goto 510
500	continue
501	continue
	numcom = maxcom + 1
	call putval(5, 0,231,  useful, 4, numcom )
510	call putval(5, 0,232,  regfrm, numcom, r1 )
	call putval(5, 0,233,  regto, numcom, r2 )
	call putval(5, 0,234,  amtmov, numcom, nummen )
	call putval(5, 0,235,  timlft, numcom, ifix(sqrt(float(nummen))*timeto) )
	call putval(5, 0,236,  whos, numcom, numusr )
520	call unlock
	goto 100

800	goto 100
C
10000	call enable
	filspc(5) = isxbit('DAT~')
	call ofile( 2, filspc, 0 )
	if( lerror(0) ) call bug('Cannot open device.^E')
	call rfile( 2, filspc )
	if( lerror(0) ) call bug('Cannot lookup file.^E')

	call init(5, 0,248,  useful, 36, 8 )
	call init(6, 0,249,  screen, 18, 24, 80 )
	call init(6, 0,250,  coord, 7, 26, 2 )
	call init(6, 0,251,  disto, 7, 26, 26 )
	call init(5, 0,252,  owner, 3, 26 )
	call init(5, 0,253,  numat, 36, 26 )
	call init(6, 0,254,  contan, 1, 26, 26 )
C	CALL INIT(6, 0,255,  CONARM, 7, 26, 10 )
	call init(5, 0,256,  conarm, 7, 26 )
	call init(5, 0,257,  regfrm, 5, 100 )
	call init(5, 0,258,  regto, 5, 100 )
	call init(5, 0,259,  amtmov, 7, 100 )
	call init(5, 0,260,  timlft, 12, 100 )
	call init(5, 0,261,  whos, 7, 100 )

	call defadr( 1, iright( itbadr( screen ) ) )
	call setdis( 1 )
	call clrscr
	maxreg = 0
	do 10200 iy1 = 24, 1, -1
	    iy = iy1
	    call getstr(5, comara, 78, ilen, 2, eof )
	    if( eof ) call bug('Found eof reading screen^E')
	    if( ilen .lt. 72 ) call string(1,'^M^JPROBLEM=^E')
	    if( ilen .lt. 72 ) call number(1, ilen )
	    if( ilen .lt. 72 ) call string(1,'.^M^J^B')

	    call cursor( 1, iy )
	    do 10100 ix = 1, 72
		ic = comara(ix)
		regnum = icon( ic ) - 64
		if( ic .ne. 61 ) goto 10010
		call pback( icldbl )
		call pcolor( iclwhi )
		goto 10090
10010		if( ic .ne. 32 ) goto 10020
		call pcolor( iclwhi )
		call pback( iclwhi )
		goto 10090
10020		if( ic .ne. 44 ) goto 10030
		call pback( icldbl )
		call pcolor( icldbl )
		goto 10090
10030		if( ic .ge. 65 .and. ic .le. 90 ) goto 10040
		call pback( iclbla )
		call pcolor( iclbla )
		goto 10090
10040		call pback( iclwhi )
		call pcolor( icldbl )
10090		call chrout( ic )
		if( regnum .lt. 1 .or. regnum .gt. 26 ) goto 10100
		if( ix .gt. 68 )call bug('Region mark out of bounds.^E')
		call getval(6, 0,300,  coord, regnum, 1, ival )
		if( ival .ne. 0 )call bug('Two regions with same name.^E')
		maxreg = maxreg + 1
		call putval(4, 0,303,  -1, ix+1 )
		call putval(6, 0,304,  coord, regnum, 2, iy )
10100	    continue
10200	continue
	call putval(5, 0,307,  useful, 1, maxreg )

	do 10400 i = 1, maxreg
	    call getaln( comara, ilen, eof )
	    if( eof ) call bug('Premature eof reading distances.^E')
	    regnum = icon( comara(1) ) - 64
	    if( regnum .lt. 1 .or. regnum .gt. 26 )
     &		call bug('Illegal region name in distances.^E')
	    call getval(6, 0,315,  coord, regnum, 1, ival )
	    if( ival .eq. 0 ) call bug('Unknown region name.^E')
	    do 10300 cpos = 2, ilen-1
		if( icon(comara(cpos)) .lt. 64 ) goto 10300
		reginq = icon( comara( cpos ) ) - 64
		if( reginq .lt. 1 .or. reginq .gt. 26 )
     &			call bug('Illegal region name in list.^E')
		call getval(6, 0,322,  coord, reginq, 1, ival )
		if( ival .eq. 0 )
     &			call bug('Illegal region name in list.^E')
		call getval(6, 0,325,  disto, regnum, reginq, ival )
		if( ival .ne. 0 ) call bug('Distance defined.^E')
		call getnum(4, comara(cpos), ilen-cpos+1, ival, 10 )
		if( ival .lt. 1 ) call bug('Invalid destance.^E')
		call putval(4, 0,329,  -1, ival )
10300	    continue
10400	continue

	maxcon = 0
10500	call getaln( comara, ilen, eof )
	if( eof ) goto 10700
	    maxcon = maxcon + 1
	    i = iserch( comara, 32, ilen )
	    if( i .eq. 0 ) i = iserch( comara, icon(9), ilen )
	    if( i .eq. 0 ) call bug('Illegal format for continent.^E')
	    do 10600 j = 1, i-1
		regnum = icon( comara(j) ) - 64
		if( regnum .lt. 1 .or. regnum .gt. 26 )
     &		call bug('Illegal region in continent.^E')
		call getval(6, 0,344,  coord, regnum, 1, ival )
		if( ival .eq. 0 )
     &		call bug('Illegal region in continent.^E')
		call getval(6, 0,347,  contan, maxcon, regnum, ival )
		if( ival .ne. 0 ) call bug('Repeated region.^E')
		call putval(4, 0,349,  -1, 1 )
10600	    continue
	    call getnum(4, comara(i), ilen-i+1, ival, 10 )
	    if( ival .lt. 0 )call bug('Illegal content-army number.^E')
	    call putval(5, 0,353,  conarm, maxcon, ival )
	goto 10500

10700	call close( 2 )
	call setdis( 0 )
	call putval(5, 0,358,  useful, 7, maxcon )
10800	call string(1,'Input number of players: ^B')
	call getnum(3, 10, maxusr, 10 )
	if( maxusr .lt. 1 .or. maxusr .gt. 6 ) goto 10800
	call putval(5, 0,362,  useful, 2, maxusr )
	call putval(5, 0,363,  useful, 3, 0 )
	call putval(5, 0,364,  useful, 8, 0 )
	if( maxusr .gt. 1 ) goto 11000
	call putval(4, 0,366,  -1, 1 )
	call addval(5, 0,367,  useful, 2, 1 )
	call addval(5, 0,368,  useful, 3, 1 )
	i = iran( maxreg )
	call putval(5, 0,370,  owner, i, 1 )
	call putval(5, 0,371,  numat, i, 10 )
11000	call unlock
	goto 20
C
20000	call getval(5, 0,374,  useful, 4, maxcom )
	if( maxcom .eq. 0 ) goto 20101
	do 20100 i = 1, maxcom
	    numcom = i
	    call getval(5, 0,378,  timlft, numcom, ival )
	    if( ival .gt. 0 ) call addval(4, 0,379,  -1, -1 )
	    if( ival .ne. 1 ) goto 20100
	    call getval(5, 0,381,  whos, numcom, invadr )
	    call getval(5, 0,382,  amtmov, numcom, numinv )
	    call getval(5, 0,383,  regto, numcom, r2 )
	    call getval(5, 0,384,  owner, r2, defndr )
	    call getval(5, 0,385,  numat, r2, numdef )

C	    IF THE ARMIES INCOMING BELONG TO SOMEONE OTHER THAN THE
C	    THE ARMIES ALREADY THERE, WE HAVE A BATTLE.  SKIP TO BATTLE
C	    LOOP, OTHERWISE SIMPLY INCREASE THE NUMBER AT THE LOCATION.
	    if( invadr .ne. defndr .and. numdef .gt. 0 ) goto 20010
	    numdef = numdef + numinv
	    goto 20030

20010	    if( iran(11) .le. 6 ) goto 20020	! roll dice, invader died?
	    numinv = numinv - 1			! yup, decrement invaders
	    if( numinv .gt. 0 ) goto 20010	! more invaders?  more battle
	    goto 20040

20020	    numdef = numdef - 1			! decrement defenders
	    if( numdef .gt. 0 ) goto 20010	! more defenders?  more battle
	    numdef = numinv			! defenders gone, switch sides
20030	    call putval(5, 0,402,  owner, r2, invadr )

20040	    call putval(5, 0,404,  numat, r2, numdef )

20100	continue
20101	continue

	call addval(5, 0,409,  useful, 6, 1 )
	call getval(4, 0,410,  -1, curtim )
	if( curtim .le. intrvl ) goto 20150
	call putval(4, 0,412,  -1, 0 )
	do 20110 regnum = 1, maxreg
	    call getval(5, 0,414,  numat, regnum+0, ival )
	    if( ival .ge. 1 ) call addval(4, 0,415,  -1, 1 )
20110	continue

	do 20140 i = 1, maxcon
	    numcon = i
	    conown = 0
	    do 20120 j = 1, 26
		r1 = j
		call getval(6, 0,423,  contan, numcon, r1, ival )
		if( ival .eq. 0 ) goto 20120
		call getval(5, 0,425,  numat, r1, ival )
		if( ival .eq. 0 ) goto 20140
		call getval(5, 0,427,  owner, r1, ival )
		if( conown .eq. 0 ) conown = ival
		if( ival .ne. conown ) goto 20140
20120	    continue
	    call getval(5, 0,431,  conarm, numcon, numarm )
	    do 20130 j = 1, numarm
20125		r1 = iran( maxreg )
		call getval(6, 0,434,  contan, numcon, r1, ival )
		if( ival .eq. 0 ) goto 20125
		call addval(5, 0,436,  numat, r1, 1 )
20130	    continue
20140	continue

20150	numcom = 0
	if( mod( curtim, 10 ) .ne. 0 ) goto 20181
	call getval(5, 0,442,  useful, 8, ival )
	if( ival .eq. 0 ) goto 20181
	do 20180 i = 1, maxreg
	    numreg = i
	    call getval(5, 0,446,  owner, numreg, ival )
	    if( ival .ne. 1 ) goto 20180
	    call getval(5, 0,448,  numat, numreg, nmfreg )
	    if( nmfreg .eq. 0 ) goto 20180
	    best = nmfreg
	    do 20160 j = 1, maxreg
		reginq = j
		call getval(6, 0,453,  disto, numreg, reginq, dist )
		if( dist .eq. 0 ) goto 20160
		call getval(5, 0,455,  owner, reginq, ownerq )
		call getval(5, 0,456,  numat, reginq, numatq )
		if( ownerq .ne. 1 ) numatq = -numatq
		if( numatq .ge. best ) goto 20160
		best = numatq
		bestrg = reginq
		bestds = dist
20160	    continue
	    if( best .ge. nmfreg-1 ) goto 20180
	    nummen = min0( nmfreg-1, nmfreg-best, 127 )
	    call addval(5, 0,465,  numat, numreg, -nummen )
20170	    numcom = numcom + 1
	    call getval(5, 0,467,  timlft, numcom, ival )
	    if( ival .ne. 0 ) goto 20170
	    call putval(4, 0,469,  -1, ifix( sqrt(float(nummen))*bestds) )
	    call putval(5, 0,470,  whos, numcom, 1 )
	    call putval(5, 0,471,  regfrm, numcom, numreg )
	    call putval(5, 0,472,  regto, numcom, bestrg )
	    call putval(5, 0,473,  amtmov, numcom, nummen )
20180	continue
20181	continue
	call getval(5, 0,476,  useful, 4, maxcom )
	if( numcom .gt. maxcom ) call putval(4, 0,477,  -1, numcom )

	call setdis( 1 )
	call pback( iclwhi )
	call pcolor( iclred )
	do 20200 i = 1, maxreg
	    regnum = i
	    call getval(6, 0,484,  coord, regnum, 1, ix )
	    call getval(6, 0,485,  coord, regnum, 2, iy )
	    call getval(5, 0,486,  numat, regnum, ival )
	    call cursor( ix, iy )
	    if( ival .eq. 0 ) goto 20190
	    call number(2, ival, -2 )
	    call getval(5, 0,490,  owner, regnum, ival )
	    call chrout( ival+64 )
	    goto 20200

20190	    call string(1,'   ^E')
20200	continue
	call setdis( 0 )
	call putval(5, 0,497,  useful, 5, 0 )
	goto 110
	end
C
	subroutine bug( array )

C***	THIS PROCEDURE PRINTS OUT ERROR MESSAGES IN THE STRING ARRAY.

	integer array( 1 ), value	! array and value to print

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	call setdis( 0 )			! make sure normal i/o
	call colcur( 1, 1 )			! message at lower left
	call colstr(iclred,'^M^J%BUG ^E')	! print header
	call string(1, array )			! print lerror message
	call string(1,'^M^J^B')			! dump the buffer
	call nap(3000)				! make sure he sees the message
	call grafof				! reset the terminal
	call pstop				! and exit
	end
C
	subroutine getaln( comara, ilen, eof )

C***	THIS PROCEDURE RETURNS AN UPPER CASE STRING OF CHARACTERS
C***	READ FROM THE FILE OPENED ON CHANNEL #2 OR EOF WHEN FOUND.
C***	IT WILL IGNORE COMMENTS (STUFF PRECEDED WITH A ;) AND NULL
C***	LINES (ILEN = 0).

	integer comara( 80 ), ilen	! string read and its length
	logical eof			! true on end of file

100	call getstr(5, comara, 80, ilen, 2, eof )	! get string from file
	if( eof ) return
	if( ilen .eq. 0 .or. comara(1) .eq. 59 ) goto 100
	call allcap( comara, ilen )	! insure that its upper case
	return
	end
C
	subroutine comand( ichar, comara, arrind )
C***
C***	ROUTINE GET COMMAND FROM USER IF ONE PRESENT.
C***
	integer comara(81), index, arrind, ichar, numtim
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
	if( index .ge. 7 )  goto 700
C***
C***	NOT SPECIAL CHARACTER, PUT IN ARRAY
C***
	index = index + 1
	call colcur( 72 + index, 1 )
	call chrout( ichar )
	comara(index) = icon( ichar )
	goto 100
C***
C***	ESCAPE:  REPEAT LAST COMMAND
C***
200	index = indstr
	call colcur( 73, 1 )
	if( index .ne. 0 )call string(3, comara, 1, index )
	goto 600
C***
C***	DELETE CHARACTER
C***
300	if( index .eq. 0 ) goto 600
	index = index - 1
	call colcur( 73 + index, 1 )
	call chrout( 32 )
	goto 100
C***
C***	DELETE LINE
C***
400	if( index .eq. 0 ) goto 600
	call colcur( 73, 1 )
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
	call colcur( 73, 1 )
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
	subroutine cease( useful )

	call addval(5, 0,608,  useful, 3, -1 )
	call grafof
	call setdis( 0 )
	call clrscr
	call close( 1 )
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
