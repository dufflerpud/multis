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
	subroutine bugmsg( msgara, com, msglen )

	implicit integer ( a - z )

	character msgara( 80 )
	integer com( 80 )

	call select( 0 )
	call string(1,'^M^JFATAL ERROR: ^E')
	call string(1, msgara )
	if( msglen .le. 0 ) goto 200
	call string(1,'  FOUND IN LINE:^M^J^E')
	call string(3, com, 1, msglen )
	goto 300
200	if( msglen .eq. 0 ) goto 300
	call string(1,' = ^E')
	call number(1, com(1) )
300	call grafon
	call cursor( 1, 1 )
	call curbuf
	call nap( 3000, 0 )
	call exprog
	end

	function firstc( sixb )
	implicit integer ( a - z )
	call convrt( sixb, 1, 6, ac, 0 )
	firstc = ac - 32
	return 
	end
C
	subroutine initdb( com, p, lprivd )

	implicit integer ( a - z )

	integer com( 80 ), filesp( 13 ), f(5), t(5), p(20)
	logical stalon, lprivd, lerror, ieof

	common/filcom/filesp

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

C***	DEFINE ARRAY NAMES
	data
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful
     &	    /1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
     &	    18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
     &	    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45/

	data stalon/.false./

	call enable
	if(iserch(p,isxbit('EMPIRE~'),20).ne.0.and.lprivd) goto 45
	if( job(-1) .eq. 0 ) goto 50	! non tops10 do not have upd files
	call ofile( 2, filesp, isxbit('@    ,~') )
	if(lerror(0))call bugmsg('INIT: UPD OPEN FAILURE.^E',0,0)
	filesp(5) = isxbit('UPD~')
	call rfile( 2, filesp )
	if( lerror(0) ) goto 50

C***	UPDATE FILE EXISTS - READ IT INTO HISEGMENT

	call hiprot( 0 )
	begblk = nhiblk(0)
	call filget( 2, toploc, ieof )
	call ccore( 0, toploc )			! read length, inc core
	if(lerror(0)) call bugmsg('INIT: CANNOT ALLOCATE CORE.^E',0,0)
	call d( begblk+3, toploc )
	do 40 i = 1, 490
	    call filget( 2, begadr, ieof )
	    call d( begblk+i+3, begadr )
40	continue
41	continue
	call filget( 2, ival, ieof )
	if( ieof ) goto 42
	call d( begadr, ival )
	begadr = begadr + 1
	goto 41

42	j = 1
	call putval(5, 0,108,  useful, 7, 0 )
43	call getval(5, 0,109,  progs, j, ival )
	if( ival .eq. 0 ) goto 800
	call putval(5, 0,111,  ncstru, j, 63 )
	j = j + 1
	goto 43

C***	NOT READING UPD FILE - GET DATA FILE.

45	stalon = .true.

50	call ofile( 2, filesp, isxbit('@     ~') )
	if( lerror(0) ) call bugmsg('INIT: DAT OPEN FAILURE.^E',0,0)
	filesp(5) = isxbit('DAT~')
	call rfile( 2, filesp )
	if(lerror(0))call bugmsg('INIT: LOOKUP FAILURE.^E',0,0)
	call skpcom( com, len )
	call getnum(16,com, len, numstr,10, npl,10, maxuni,10,
     &	     nprogs,10, maxprg,10, maxmem,10, maxpla,10 )
	if(numstr.le.0)call bugmsg('INIT: NUMSTR<=0.^E',com,len)
	if(npl.lt.numstr)call bugmsg('INIT: NPL<NUMSTR.^E',com,len)
	if(maxuni.le.0)call bugmsg('INIT: MAXUNI<=0.^E',com,len)
	if(nprogs.le.0)call bugmsg('INIT: NPROGS<=0.^E',com,len)
	if(maxprg.le.0)call bugmsg('INIT: MAXPRG<=0.^E',com,len)
	if(maxmem.lt.maxprg)call bugmsg('INIT: MAXMEM<MAXPRG.^E',com,len)
	if(maxpla.le.0)call bugmsg('INIT: MAXPLA<=0.^E',com,len)

C**********************************************************************

	call init(6, 0,137,  name, 36, numstr, 2 )	! init star name array
	call init(6, 0,138,  dest, 12, numstr, 5 )	! possible destinations
						! for hyper jump
	call init(6, 0,140,  time, 7, numstr, 7 )		! time required to jump
						! to each place
	call init(5, 0,142,  wplace, 12, numstr )		! star pointers
	call init(6, 0,143,  restrn, 5, npl, 2 )		! init resource array
						! 1: ore/turn
						! 2: food/turn
	call init(5, 0,146,  wstar, 7, npl )		! what star am i
	call init(5, 0,147,  wplan, 4, npl )		! what planet am i
	call init(5, 0,148,  wmoon, 4, npl )		! what moon am i
	call init(5, 0,149,  ptype, 2, npl )		! planet type:
						! 1: habitable
						! 2: ordinary
						! 3: gasseous
	call init(5, 0,153,  pop, 18, npl )		! population
	call init(5, 0,154,  poporg, 6, npl )		! population allegiance
	call init(5, 0,155,  hunger, 18, npl )		! population hunger
	call init(5, 0,156,  oprind, 9, npl )		! population opression
	call init(6, 0,157,  plcorg, 6, npl, 2 )		! place controlled by
	call init(6, 0,158,  nuaplc, 12, npl, 2 )		! num units at place
	call init(5, 0,159,  org, 6, maxuni )		! origin of ship
	call init(6, 0,160,  res, 6, maxuni, 4 )		! init unit resource:
						! 1: ore
						! 2: food
						! 3: luxury
						! 4: men
	call init(5, 0,165,  type, 3, maxuni )		! unit type:
						! 1: spaceship
						! 2: hypership
						! 3: ground unit
						! 4: ore processor
						! 5: food processor
						! 6: luxury processor
						! 7: port
	call init(5, 0,173,  shiptr, 12, maxuni )		! where is unit?
	call init(5, 0,174,  orbit, 2, maxuni )		! in what orbit?
						! 1: ground
						! 2: low orbit
						! 3: high orbit
	call init(5, 0,178,  hmflag, 2, maxuni )		! 0: normal space
						! 1: hyper space
						! 2: moving
	call init(5, 0,181,  wprogr, 9, maxuni )		! which prog running
	call init(5, 0,182,  pc, 6, maxuni )		! where is it in prog?
	call init(5, 0,183,  onerpc, 6, maxuni )		! go where on lerror
	call init(5, 0,184,  tmtonx, 18, maxuni )		! time to next instr.
	call init(5, 0,185,  prdtim, 18, maxuni )		! time to next prod.
	call init(5, 0,186,  power, 7, maxuni )		! unitns1714132329s tot. power
	call init(7, 0,187,  powdst, 7, maxuni, 3, 2 )	! 1: engine/max
						! 2: shield/max
						! 3: beam/max
	call init(5, 0,190,  progs, 18, nprogs )		! list of players
	call init(5, 0,191,  prgjob, 7, nprogs )		! playerns1714132329s jobs (or 0)
	call init(5, 0,192,  nofuni, 12, nprogs )		! num units for players
	call init(5, 0,193,  empcod, 3, nprogs )		! what kind of message:
						! 1: lerror
						! 2: inform
						! 3: battle
						! 4: revolt
	call init(5, 0,198,  empdst, 12, nprogs )		! which unitns1714132329s lerror
						! which unitns1714132329s inform
						! where is battle
						! where is revolt
C	CALL INIT(5, 0,202,  EMPINF, 18, NPROGS )		! INFORM MESSAGE CODE
	call init(5, 0,203,  empinf, 36, nprogs )		! inform message code
	call init(5, 0,204,  empc, 6, nprogs )		! pc of inform
						! pc of lerror
						! orbit of battle
						! 0
	call init(5, 0,208,  ncstru, 6, nprogs )		! number of total
						! clicks since this
						! prog looped.
	call init(5, 0,211,  nverb, 4, maxmem )		! unitns1714132329s action
	call init(5, 0,212,  ncode, 4, maxmem )		! unitns1714132329s code
C	CALL INIT(5, 0,213,  NDEST, 18, MAXMEM )		! UNIT'S NOUN (DEST)
	call init(5, 0,214,  ndest, 36, maxmem )		! unitns1714132329s noun (dest)
	call init(5, 0,215,  stradr, 12, maxprg )		! where prog begins
	call init(5, 0,216,  lenprg, 6, maxprg )		! length of prog
	call init(5, 0,217,  numusr, 12, maxprg )		! #users using prog
	call init(5, 0,218,  mestrn, 7, 72 )		! message array
	call init(5, 0,219,  ptime, 36, 3 )		! 1: starting date
						! 2: starting time
						! 3: clicks elapsed
	call init(5, 0,222,  useful, 18, 17 )		! miscelanious info:
						! 1: numstr
						! 2: numpla
						! 3: numoon
						! 4: lasplc
						! 5: lunit
						! 6: nprogs
						! 7: whoinl
						! 8: lprogr
						! 9: lmem
						! 10: whoto
						! 11: whofrm
						! 12: maxuni
						! 13: maxprg
						! 14: maxmem
						! 15: maxpla
						! 16: stand alone
						! 17: preserve

C**********************************************************************

	lasplc = numstr
	do 700 k = 1, numstr
	    star = k
	    call skpcom( com, len )
	    do 100 i = 1, 12
		if( icon(com(i)) .le. 32 ) goto 110
100	    continue
	    i = 13
110	    if(len.le.i)call bugmsg('INIT: ISOLATED STAR.^E',com,len)
	    f( 2 ) = 0
	    call convrt( com, i-1, 1, f, 6 )
	    call putval(6, 0,254,  name, star, 1, f(1) )
	    call putval(6, 0,255,  name, star, 2, f(2) )
	    call putval(5, 0,256,  wstar, star, star )
	    call getnum(22, com(i), len-i+1, f(1),10,t(1),10,
     &		f(2),10,t(2),10, f(3),10,t(3),10, f(4),10,t(4),10,
     &		f(5),10,t(5),10 )
	    do 200 i = 1, 5
		call putval(6, 0,261,  dest, star, i+0, f(i) )
		call putval(6, 0,262,  time, star, i+0, t(i) )
200	    continue
300	    planum = 0
400	    call skpcom( com, len )
	    if( com(1) .eq. 42 ) goto 700
	    itype = 0
	    if( com(1) .eq. 72 ) itype = 1
	    if( com(1) .eq. 79 ) itype = 2
	    if( com(1) .eq. 71 ) itype = 3
	    if(itype.eq.0)call bugmsg('INIT: BAD PLANET.^E',com,len)
	    planum = planum + 1
	    numpla = numpla + 1
	    lasplc = lasplc + 1
	    if(lasplc.gt.npl)call bugmsg('INIT: LASPLC>NPL.^E',com,len)
	    if( planum .eq. 1 ) call putval(5, 0,276,  wplace, star, lasplc )
	    call getnum(32, com, len, p(1),10,f(1),10,t(1),10,
     &		p(2),10,f(2),10,t(2),10, p(3),10,f(3),10,t(3),10,
     &		p(4),10,f(4),10,t(4),10, p(5),10,f(5),10,t(5),10 )
	    call putval(5, 0,280,  wstar, lasplc, star )
	    call putval(5, 0,281,  wplan, lasplc, planum )
	    call putval(5, 0,282,  ptype, lasplc, itype )
	    call putval(5, 0,283,  pop, lasplc, p(1) )
	    call putval(6, 0,284,  restrn, lasplc, 1, t(1) )
	    call putval(6, 0,285,  restrn, lasplc, 2, f(1) )

500	    moonum = 0
600	    temp = moonum*12 + 13
	    if( temp .gt. len ) goto 400
	    temp = com( temp )
	    itype = 0
	    if( temp .eq. 72 ) itype = 1
	    if( temp .eq. 79 ) itype = 2
	    if( temp .eq. 71 ) itype = 3
	    if(itype.eq.0)call bugmsg('INIT: BAD MOON.^E',com,len)
	    moonum = moonum + 1
	    lasplc = lasplc + 1
	    numoon = numoon + 1
	    if(lasplc.gt.npl)call bugmsg('INIT: LASPLC>NPL.^E',com,len)
	    call putval(5, 0,300,  wstar, lasplc, star )
	    call putval(5, 0,301,  wplan, lasplc, planum )
	    call putval(5, 0,302,  wmoon, lasplc, moonum )
	    call putval(5, 0,303,  ptype, lasplc, itype )
	    call putval(5, 0,304,  pop, lasplc, p(moonum+1) )
	    call putval(6, 0,305,  restrn, lasplc, 1, t(moonum+1) )
	    call putval(6, 0,306,  restrn, lasplc, 2, f(moonum+1) )
	    goto 600
700	continue
	call mcall1( 12, ival, i )		! get starting date
	call putval(5, 0,310,  ptime, 1, ival )
	call mcall1( 19, ival, i )		! and time
	call putval(5, 0,312,  ptime, 2, ival )
	call putval(5, 0,313,  useful, 1, numstr )
	call putval(5, 0,314,  useful, 2, numpla )
	call putval(5, 0,315,  useful, 3, numoon )
	call putval(5, 0,316,  useful, 4, lasplc )
	call putval(5, 0,317,  useful, 6, nprogs )
	call putval(5, 0,318,  useful, 12, maxuni )
	call putval(5, 0,319,  useful, 13, maxprg )
	call putval(5, 0,320,  useful, 14, maxmem )
	call putval(5, 0,321,  useful, 15, maxpla )
	if( .not. stalon ) goto 800
	call putval(5, 0,323,  useful, 16, 1 )
	call putval(5, 0,324,  useful, 17, 1 )
800	call close( 2 )
	call unlock
	return
	end
C
	subroutine skpcom( com, len )

	integer com( 80 )
	logical ieof

100	call getstr(5, com, 80, len, 2, ieof )
	if(ieof)call bugmsg('INIT: PREMATURE END OF FILE.^E',0,0)
	if( len .eq. 0 ) goto 100
	if( com(1) .eq. 59 ) goto 100
C	CALL ALLCAP( COM, LEN )
	return
	end
C
	subroutine exunit

	implicit integer ( a - z )

	integer team( 2, 50 ), numop(2)
	logical lmove

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

C***	GO INCREMENT ALL PLAYERS TO FIND WHO IS NOT PLAYING

	call getval(5, 0,363,  useful, 5, lunit )
	do 10 i = 1, nprogs
	    call getval(5, 0,365,  ncstru, i+0, ival )
	    if( ival .lt. 63 ) call addval(4, 0,366,  -1, 1 )
	    if( ival .ge. 63 ) call putval(5, 0,367,  prgjob, player, 0 )
10	continue
	call putval(5, 0,369,  ncstru, player, 0 )
	call putval(5, 0,370,  prgjob, player, job(0) )

	call getval(5, 0,372,  useful, 7, whoinl )
	if( whoinl .eq. 0 ) goto 20
	call getval(5, 0,374,  ncstru, whoinl, ival )
	if( ival .lt. 63 ) return
	call putval(5, 0,376,  useful, 7, player )
	call messag('Player #^E')
	call number(2, whoinl, -2 )
	call string(1,' stuck in EXUNIT loop.  Clearing.^G^E')
	goto 30

20	call enable
	call putval(4, 0,383,  -1, player )

30	acplar = player
	call addval(5, 0,386,  ptime, 3, 1 )		! increment time
	call getval(4, 0,387,  -1, ival )			! save world every
	if(mod(ival,1000).eq.0) call savesg	! 1000 cycles

C***	LOOP THROUGH THE SYSTEM FOR BATTLES

	do 60 i = 1, lasplc
	    loc = i
	    call getval(5, 0,394,  pop, loc, j )
	    if( j .eq. 0 ) goto 34
	    call getval(5, 0,396,  hunger, loc, hungfc )
	    hungfc = hungfc + j
	    call getval(6, 0,398,  restrn, loc, 2, ival )
	    hungfc = min0( max0( 0, hungfc - 1000*ival ), 2**18-1 )
	    call putval(5, 0,400,  hunger, loc, hungfc )
	    if( hungfc .gt. 100000 ) call putval(5, 0,401,  pop, loc, 99*j/100 )
	    call getval(5, 0,402,  oprind, loc, ival )
	    call putval(4, 0,403,  -1, 0 )
	    if(iran(50)+50.ge.sqrt(float(j))*hungfc/(1000*(ival+1)))
     &		goto 34
	    call getval(6, 0,406,  plcorg, loc, 1, k )
	    if( k .eq. 0 ) goto 34
	    call putval(5, 0,408,  empcod, k, 4 )
	    call putval(5, 0,409,  empdst, k, loc )
	    do 33 i1 = 1, lunit
		j = i1
		call getval(5, 0,412,  org, j, ival )
		if( ival .ne. k ) goto 33
		call getval(5, 0,414,  shiptr, j, ival )
		if( ival .ne. loc ) goto 33
		call getval(5, 0,416,  orbit, j, ival )
		if( ival .ne. 1 ) goto 33
		call delunt( j )
33	    continue
34	    continue
	    do 60 i1 = 1, 2
		level = i1
		call getval(6, 0,423,  plcorg, loc, level, dorg )
		if( dorg .eq. 0 ) goto 61
		numop(1) = 0
		numop(2) = 0
		do 40 j = 1, lunit
		    enum = j
		    call getval(5, 0,429,  org, enum, torg )
		    if( torg .eq. 0 ) goto 40
		    call getval(5, 0,431,  hmflag, enum, ival )
		    if( ival .ne. 0 ) goto 40
		    call getval(5, 0,433,  shiptr, enum, ival )
		    if( ival .ne. loc ) goto 40
		    call getval(5, 0,435,  orbit, enum, ival )
		    if( ival/3 + 1 .ne. level ) goto 40
		    if( torg .ne. dorg ) goto 35

		    if( numop(1) .ge. 50 ) goto 40
		    numop(1) = numop(1) + 1
		    team(1,numop(1)) = enum
		    goto 40

35		    call putval(5, 0,444,  empcod, torg, 3 )
		    call putval(5, 0,445,  empdst, torg, loc )
		    call putval(5, 0,446,  empinf, torg, level )
		    if( numop(2) .ge. 50 ) goto 40
		    numop(2) = numop(2) + 1
		    team(2,numop(2)) = enum
40		continue

45		if( numop(2) .eq. 0 ) goto 61
		call putval(5, 0,453,  empcod, dorg, 3 )
		call putval(5, 0,454,  empdst, dorg, loc )
		call putval(5, 0,455,  empinf, dorg, level )
		do 60 j = 1, 2
		    do 60 k = 1, numop(j)
			act = team(j,k)
			call getval(5, 0,459,  tmtonx, act, ival )
			if( ival .ne. 0 ) goto 60
			call getval(7, 0,461,  powdst, act, 3, 1, curbem )
			if( curbem .eq. 0 ) goto 60
			if( k .le. numop(3-j) ) goto 54
			call getval(5, 0,464,  pc, act, ival )
			if( ival .ne. 0 ) goto 60
			pas = team(3-j,iran(numop(3-j)))
			goto 56

54			pas = team( 3-j, k )

56			call getval(5, 0,471,  org, pas, ival )
			if( ival .eq. 0 ) goto 60
			call getval(6, 0,473,  powdst, pas, 2, curshd )
			chance=40*alog10(10.0*curbem/(curshd+0.001))+10
			if( iran(100) .lt. chance ) call delunt( pas )
60	continue
61	continue

C***	LOOP THROUGH ALL UNITS AND EXECUTE THEIR PROGRAMS

	do 100 i = 1, lunit
	    unum = i
	    call getval(5, 0,483,  org, unum, player )
	    if( player .eq. 0 ) goto 100
	    call getval(5, 0,485,  type, unum, stype )
	    call getval(5, 0,486,  shiptr, unum, loc )
	    if( stype .lt. 4 .or. stype .eq. 7 ) goto 65
	    call getval(5, 0,488,  prdtim, unum, ival )
	    if( ival .gt. 1 ) call addval(4, 0,489,  -1, -1 )
	    if( ival .ne. 1 ) goto 65
	    if( stype .eq. 6 ) goto 62
	    call getval(6, 0,492,  res, unum, stype-3, ival )
	    if( ival .ge. 63 ) goto 65
	    call addval(4, 0,494,  -1, 1 )
	    call getval(6, 0,495,  restrn, loc, stype-3, nprod )
	    if(iran(500).eq.1.and.nprod.gt.0) call addval(4, 0,496,  -1, -1 )
	    if(nprod.gt.0) call putval(5, 0,497,  prdtim, unum, 793/nprod )
	    if(nprod.eq.0) call putval(5, 0,498,  prdtim, unum, 0 )
	    goto 65

62	    call getval(6, 0,501,  res, unum, 1, ival )
	    if( ival .eq. 0 ) goto 65
	    call getval(6, 0,503,  res, unum, 2, ival )
	    if( ival .eq. 0 ) goto 65
	    call getval(6, 0,505,  res, unum, 3, ival )
	    if( ival .ge. 63 ) goto 65
	    call addval(4, 0,507,  -1, 1 )
	    call addval(6, 0,508,  res, unum, 1, -1 )
	    call addval(6, 0,509,  res, unum, 2, -1 )
	    call putval(5, 0,510,  prdtim, unum, 53 )

65	    if( stype .eq. 3 ) call addval(5, 0,512,  oprind, loc, 1 )
	    call getval(5, 0,513,  tmtonx, unum, ival )
	    if( ival .le. 2 ) call putval(5, 0,514,  hmflag, unum, 0 )
	    if( ival .eq. 0 ) goto 70
	    call addval(5, 0,516,  tmtonx, unum, -1 )
	    goto 100

70	    call getval(5, 0,519,  wprogr, unum, wp )
	    if( wp .eq. 0 ) goto 100
	    call getval(5, 0,521,  lenprg, wp, len )
	    call getval(5, 0,522,  pc, unum, ipc )
	    if( ipc .le. 0 .or. ipc .gt. len ) goto 75
	    call getval(5, 0,524,  stradr, wp, addr )
	    addr = addr + ipc - 1
	    call getval(5, 0,526,  nverb, addr, nv )
	    if( nv .ne. 0 ) goto 80
75	    call putval(5, 0,528,  pc, unum, 0 )
	    goto 100

80	    call getval(5, 0,531,  ncode, addr, nc )
	    call getval(5, 0,532,  ndest, addr, nd )
	    call exins( unum, nv, nc, nd, lmove )
	    if( .not. lmove ) goto 90

85	    if( nv .ne. 9 ) call addval(5, 0,536,  pc, unum, 1 )
	    goto 100

90	    call getval(5, 0,539,  onerpc, unum, ival )
	    if( ival .eq. 63 ) goto 85
	    call putval(5, 0,541,  pc, unum, ival )
	    if( ival .ne. 0 .or. player .eq. 0 ) goto 100
	    call putval(5, 0,543,  empcod, player, 1 )
	    call putval(5, 0,544,  empdst, player, unum )
	    call putval(5, 0,545,  empc, player, ipc )
100	continue

	call putval(5, 0,548,  useful, 7, 0 )
	continue ! call ctrap
c	    call cease
	player = acplar
	return
	end
C
	subroutine exins( ship, iverb, icode, idest, lmove )

	implicit integer ( a - z )

	integer maxres(7,4), timcre(7), oreqir(7), menreq(7), typshd(7)
	logical lmove

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	data typshd/12,10,7,3,3,2,15/
	data timcre/213,402,150,204,201,203,803/
	data oreqir/3,5,1,0,1,1,7/, menreq/1,1,3,0,0,0,5/
	data ((maxres(i,j),j=1,4),i=1,7)/15,10,4,3, 32,21,9,8,
     &0,0,0,0, 63,0,1,1, 0,63,1,1, 63,63,63,1, 63,63,63,63/

	lmove = .true.
	call getval(5, 0,581,  shiptr, ship, loc )
	call getval(5, 0,582,  orbit, ship, orb )
	call getval(5, 0,583,  type, ship, stype )
	goto( 10, 10, 100, 300, 600, 700, 800, 850, 900, 910, 2100,
     &	     2100, 2100, 2100, 950 ) iverb

C***	MOVE & JUMP

10	call getval(7, 0,589,  powdst, ship, 1, 1, ival )
	if( ival .eq. 0 ) goto 2200
	call legtim( loc, orb, idest, icode, lmove, mtime )
	if( .not. lmove ) return
	call getval(5, 0,593,  ptype, loc, ival )
	if( stype.gt.2 .or. (iverb.eq.2 .and.
     & ((orb.ne.icode .and. loc.gt.numstr) .or. stype .ne. 2)) .or.
     &	(icode.eq.1 .and. (loc.le.numstr .or. ival.eq.3) ) ) goto 2200
	level = orb/3 + 1
	call putval(5, 0,598,  shiptr, ship, idest )
	call putval(5, 0,599,  orbit, ship, icode )
	if( loc .eq. idest .and. level .eq. icode/3 + 1 ) goto 30
	call getval(6, 0,601,  plcorg, loc, level, ival )
	if( ival .ne. player ) goto 20
	call addval(6, 0,603,  nuaplc, loc, level, -1 )
	call getval(4, 0,604,  -1, ival )
	if( ival .gt. 0 ) goto 20
	neworg = 0
	numshp = 0
	do 15 i = 1, lunit
	    j = i
	    call getval(5, 0,610,  shiptr, j, ival )
	    if( ival .ne. loc ) goto 15
	    call getval(5, 0,612,  orbit, j, ival )
	    if( ival/3+1 .ne. level ) goto 15
	    call getval(5, 0,614,  org, j, k )
	    if( k.eq.0 .or. (neworg.ne.0 .and. neworg.ne.k) ) goto 15
	    neworg = k
	    numshp = numshp + 1
15	continue
	call putval(6, 0,619,  plcorg, loc, level, neworg )
	call putval(6, 0,620,  nuaplc, loc, level, numshp )

20	call getval(6, 0,622,  plcorg, idest, icode/3+1, ival )
	if( ival .ne. 0 .and. ival .ne. player ) goto 30
	call putval(4, 0,624,  -1, player )
	call addval(6, 0,625,  nuaplc, idest, icode/3+1, 1 )
30	if( iverb .ne. 2 ) goto 35
	mtime = mtime / 764529
	call putval(5, 0,628,  hmflag, ship, 1 )
	goto 2000

35	call putval(5, 0,631,  hmflag, ship, 2 )
	call getval(7, 0,632,  powdst, ship, 1, 1, ival )
	mtime = mtime / ival
	goto 2000

C***	CREATE

100	if( orb .ne. 1 ) goto 2200
	if(stype.eq.1.and.(icode.lt.3.or.icode.gt.6)) goto 2200
	if(stype.eq.2.and.icode.le.3) goto 2200
	if(stype.gt.2.and.stype.lt.7) goto 2200
	if(stype.eq.7.and.icode.gt.3) goto 2200
	if( icode .ne. 4 .and. icode .ne. 5 ) goto 105
	call getval(6, 0,644,  restrn, loc, icode-3, ival )
	if( ival .eq. 0 ) goto 2200
105	call getval(6, 0,646,  res, ship, 1, ival )
	if( oreqir(icode) .gt. ival ) goto 2200
	call getval(6, 0,648,  res, ship, 4, ival )
	if( menreq(icode) .gt. ival ) goto 2200
	if( idest .eq. 0 ) goto 107
	if( idest .gt. lunit ) goto 2200
	call getval(5, 0,652,  org, idest, ival )
	if( ival .ne. player ) goto 2200
	call getval(5, 0,654,  wprogr, idest, ival )
	if( ival .eq. 0 ) goto 2200
107	call addunt( loc, icode, i, lmove )
	if( .not. lmove ) goto 2200
	call addval(6, 0,658,  res, ship, 1, -oreqir(icode) )
	call addval(6, 0,659,  res, ship, 4, -menreq(icode) )
	mtime = timcre(icode)
	call putval(5, 0,661,  tmtonx, i, mtime )
	if( idest .eq. 0 ) goto 2000
	call addval(5, 0,663,  numusr, ival, 1 )
	call putval(5, 0,664,  wprogr, i, ival )
	call putval(5, 0,665,  pc, i, 1 )
	goto 2000

C***	LOAD ON/FROM

300	itype = mod( idest/(2**15), 4 ) + 1
	ift = idest/(2**17)
	ifrom = ship
	ito = mod( idest, 2**15 )
	if( ito .eq. 0 ) goto 350
	if( ito .le. 0 .or. ito .gt. lunit ) goto 2200
	call getval(5, 0,676,  org, ito, ival )
	if( ival .ne. player ) goto 2200
	call getval(5, 0,678,  shiptr, ito, ival )
	if( ival .ne. loc ) goto 2200
	call getval(5, 0,680,  orbit, ito, ival )
	if( ival .ne. orb ) goto 2200

	if( ift .eq. 0 ) goto 305
	ifrom = ito
	ito = ship

305	call getval(6, 0,687,  res, ifrom, itype, ival )
	if( ival .lt. icode ) goto 2200
	call getval(5, 0,689,  type, ito, stype )
	call getval(6, 0,690,  res, ito, itype, ival )
	if( maxres( stype, itype ) - ival .lt. icode ) goto 2200
	call addval(4, 0,692,  -1, icode )
	call addval(6, 0,693,  res, ifrom, itype, -icode )
	mtime = orb*iverb*icode
	goto 2000

C***	LOAD MEN

350	if( itype .ne. 4 ) goto 2200
	call getval(6, 0,700,  res, ship, 4, ival )
	if( maxres( stype, itype ) - ival .lt. icode ) goto 2200
	if( orb .ne. 1 ) goto 2200
	call getval(5, 0,703,  pop, loc, ival )
	if( ival .eq. 0 ) goto 2200
	call addval(6, 0,705,  res, ship, 4, icode )
	mtime = icode*7
	goto 2000

C***	TACTIC

600	ival = idest
	j = 0
	do 605 i = 1, 3
	    j = j + mod( ival, 32 )
	    ival = ival / 32
605	continue
	call getval(5, 0,717,  power, ship, ival )
	if( ival .lt. j ) goto 2200
	ival = idest
	do 610 i = 3, 1, -1
	    call getval(7, 0,721,  powdst, ship, i+0, 2, j )
	    call putval(7, 0,722,  powdst, ship, i+0, 1, min0(mod(ival,32),j) )
	    ival = ival / 32
610	continue
	goto 2100

C***	INFORM

700	call putval(5, 0,729,  empcod, player, 2 )
	call putval(5, 0,730,  empc, player, icode )
	call putval(5, 0,731,  empdst, player, ship )
	call putval(5, 0,732,  empinf, player, idest )
	goto 2100

C***	SKIP

800	call getval(6, 0,737,  res, ship, icode, nres )
	cmp = idest/(2**15)
	ncomp = mod( idest, 2**15 )
	goto( 810, 812, 814, 816, 818, 820 ) cmp

810	if( nres .lt. ncomp ) goto 830
	goto 2100
812	if( nres .le. ncomp ) goto 830
	goto 2100
814	if( nres .eq. ncomp ) goto 830
	goto 2100
816	if( nres .ne. ncomp ) goto 830
	goto 2100
818	if( nres .gt. ncomp ) goto 830
	goto 2100
820	if( nres .ge. ncomp ) goto 830
	goto 2100

830	call addval(5, 0,755,  pc, ship, 1 )
	goto 2100

C***	ERROR

850	call putval(5, 0,760,  onerpc, ship, idest )
	goto 2100

C***	GOTO

900	call putval(5, 0,765,  pc, ship, idest )
	goto 2100

C***	BUILD COMMAND

910	call getval(6, 0,770,  res, ship, 3, ival )
	if( ival .lt. idest ) goto 2200
	if( icode .lt. 4 ) call getval(7, 0,772,  powdst, ship, icode, 2, ival )
	if( icode .eq. 4 ) call getval(5, 0,773,  power, ship, ival )
	if( ival+idest .gt. 31 ) goto 2200
	call addval(4, 0,775,  -1, idest )
	call addval(6, 0,776,  res, ship, 3, -idest )
	mtime = 37*idest*icode
	goto 2000

C***	NO ARGUMENT COMMANDS

950	goto( 960, 970, 975, 990 ) icode

C***	RANDOM JUMP

960	if( orb .eq. 3 ) goto 962
	iverb = 2
	if( loc .gt. numstr ) iverb = 1
	icode = orb + 1
	idest = loc
	goto 10

962	iverb = 2
	icode = 3
	if( loc .gt. numstr ) goto 966
964	i = iran( 5 )
	call getval(6, 0,797,  dest, loc, i, idest )
	if( idest .eq. 0 ) goto 964
	goto 10

966	call getval(5, 0,801,  wstar, loc, s )
	call getval(5, 0,802,  wplan, loc, p )
	call getval(5, 0,803,  wmoon, loc, m )
	idest = loc
968	idest = idest - 1
	call getval(5, 0,806,  wstar, idest, ival )
	if( ival .ne. s ) goto 968
	call getval(5, 0,808,  wplan, idest, ival )
	if( ival .ne. 0 .and. ival .ne. p ) goto 968
	call getval(5, 0,810,  wmoon, idest, ival )
	if( ival .ne. 0 ) goto 968
	goto 10

C***	PRODUCE

970	if( stype .lt. 4 .or. stype .eq. 7 ) goto 2200
	call getval(5, 0,817,  prdtim, ship, ival )
	if( ival .ne. 0 ) goto 2200
	call putval(4, 0,819,  -1, 793 )
	goto 2100

C***	CEASE PRODUCTION

975	call getval(5, 0,824,  prdtim, ship, ival )
	if( ival .eq. 0 ) goto 2200
	call putval(4, 0,826,  -1, 0 )
	goto 2100

C***	SELF DESTRUCT

990	call delunt( ship )
	goto 2100

2000	continue
	call putval(5, 0,835,  tmtonx, ship, mtime )
2100	return

2200	lmove = .false.
	return
	end
C
	subroutine legtim( cl, co, nl, no, lmove, mtime )

	implicit integer ( a - z )
	logical lmove

	integer par( 19 ), pn( 6 )

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	lmove = .false.
	mtime = 0
	call getval(5, 0,863,  wstar, cl, curs )
	call getval(5, 0,864,  wplan, cl, curp )
	call getval(5, 0,865,  wmoon, cl, curm )
	call getval(5, 0,866,  wstar, nl, news )
	call getval(5, 0,867,  wplan, nl, newp )
	call getval(5, 0,868,  wmoon, nl, newm )
	if( co .ne. no ) goto 100
	if( no .ne. 3 ) return
	if(news.ne.curs.and.(newp.ne.curp.or.newm.ne.curm)) return
	if(newp.ne.curp.and.newm.ne.curm) return
	if( news .eq. curs ) goto 200
	do 50 i = 1, 5
	    call getval(6, 0,875,  dest, curs, i+0, ival )
	    if( ival .ne. news ) goto 50
	    call getval(6, 0,877,  time, curs, i+0, mtime )
	    mtime = mtime*764529
	    goto 200
50	continue
	return

100	if(news.ne.curs .or. newp.ne.curp .or. newm.ne.curm .or.
     &	    iabs(no-co).gt.1) return
	optr = 0
	if( newm .eq. 0 ) optr = 1
	if( newp .eq. 0 ) optr = 2
	if( no+co .gt. 3 ) optr = optr + 1
	mtime = mtime + 13**optr

200	if( newp .ne. curp ) mtime = mtime + (newp + curp)*3167
	if( newm .ne. curm ) mtime = mtime + (newm + curm)*98
	lmove = .true.
	return
	end
C
	subroutine addunt( loc, stype, shpnum, lmove )

	implicit integer ( a - z )

	integer typowr(7), maxpow(7,3)
	logical lmove

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	data typowr/7,4,2,1,1,1,7/
	data ((maxpow(i,j),i=1,7),j=1,3)/
     & 7,4,2,1,1,1,7,	12,10,7,3,3,2,15,	5,4,2,1,1,0,7/

	lmove = .false.
	call getval(5, 0,921,  useful, 5, lunit )
	if( lunit .ge. maxuni ) return
	call getval(5, 0,923,  nofuni, player, ival )
	if( ival .ge. maxpla ) return
	call addval(4, 0,925,  -1, 1 )
	if( lunit .le. 1 ) goto 101
	do 100 shpnum = 1, lunit-1
	    call getval(5, 0,928,  org, shpnum+0, ival )
	    if( ival .eq. 0 ) goto 200
100	continue
101	continue
	lunit = lunit + 1
	call putval(5, 0,933,  useful, 5, lunit )
	shpnum = lunit
200	call putval(5, 0,935,  org, shpnum, player )
	do 300 i = 1, 4
	    call putval(6, 0,937,  res, shpnum, i+0, 0 )
300	continue
	call putval(5, 0,939,  type, shpnum, stype )
	call putval(5, 0,940,  shiptr, shpnum, loc )
	call putval(5, 0,941,  orbit, shpnum, 1 )
	call putval(5, 0,942,  hmflag, shpnum, 0 )
	call putval(5, 0,943,  wprogr, shpnum, 0 )
	call putval(5, 0,944,  pc, shpnum, 0 )
	call putval(5, 0,945,  onerpc, shpnum, 0 )
	call putval(5, 0,946,  tmtonx, shpnum, 0 )
	call putval(5, 0,947,  prdtim, shpnum, 0 )
	call putval(5, 0,948,  power, shpnum, typowr(stype) )
	do 400 i = 1, 3
	    call putval(7, 0,950,  powdst, shpnum, i+0, 2, maxpow(stype,i) )
	    call putval(7, 0,951,  powdst, shpnum, i+0, 1, 0 )
400	continue
	call getval(6, 0,953,  plcorg, loc, 1, ival )
	if( ival .eq. 0 ) call putval(4, 0,954,  -1, player )
	if(ival.eq.player.or.ival.eq.0) call addval(6, 0,955, nuaplc,loc,1,1)
	lmove = .true.
	return
	end
C
	subroutine delunt( shpnum )

	implicit integer ( a - z )

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	call getval(5, 0,976,  useful, 5, lunit )
	call getval(5, 0,977,  org, shpnum, dplayr )
	call putval(4, 0,978,  -1, 0 )
	call addval(5, 0,979,  nofuni, dplayr, -1 )
	call getval(5, 0,980,  wprogr, shpnum, ival )
	if( ival .ne. 0 ) call addval(5, 0,981,  numusr, ival, -1 )
	call getval(5, 0,982,  shiptr, shpnum, loc )
	call getval(5, 0,983,  orbit, shpnum, orb )
	level = orb/3 + 1
	call getval(6, 0,985,  plcorg, loc, level, ival )
	if( ival .ne. dplayr ) goto 100
	call getval(6, 0,987,  nuaplc, loc, level, ival )
	call addval(4, 0,988,  -1, -1 )
	if( ival .gt. 1 ) goto 100
	neworg = 0
	numshp = 0
	do 50 i = 1, lunit
	    j = i
	    call getval(5, 0,994,  shiptr, j, ival )
	    if( ival .ne. loc ) goto 50
	    call getval(5, 0,996,  orbit, j, ival )
	    if( ival/3 + 1 .ne. level ) goto 50
	    call getval(5, 0,998,  org, j, k )
	    if( k.eq.0 .or. (neworg.ne.0 .and. k.ne.neworg) ) goto 50
	    neworg = k
	    numshp = numshp + 1
50	continue
	call putval(6, 0,1003,  plcorg, loc, level, neworg )
	call putval(6, 0,1004,  nuaplc, loc, level, numshp )

100	if( lunit .gt. shpnum ) return
	lunit = lunit - 1
	if( lunit .le. 0 ) goto 150
	call getval(5, 0,1009,  org, lunit, ival )
	if( ival .eq. 0 ) goto 100
150	call putval(5, 0,1011,  useful, 5, lunit )
	return
	end
C
	subroutine disens( new, ship, xtr )

	implicit integer ( a - z )

	integer newara(13,13), oldara(13,13), tc(7), letter(6)
	real class, zmass, zrad, zlumen, temp
	integer threat, twoats, onestr, thrshr, onedot, thrstr
	logical new, xtr, line
	integer bldtok(3)

C	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT
C	INTEGER COLOR(6,2)

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

C	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT
C	DATA ((COLOR(I,J),J=1,2),I=1,6)/'DEEP-BLUE ','BLUE-WHITE',
C     & 'WHITE     ','YELLOW    ','LIGHT-RED ','DEEP-RED  '/

	data tc/83,72,71,79,70,76,80/
	data letter/66,65,70,71,75,77/

	if( threat .ne. 0 ) goto 5
	threat = 1
	twoats = 2
	onestr = 3
	thrshr = 4
	onedot = 5
	thrstr = 6
5	continue

	call getval(5, 0,1059,  hmflag, ship, hypmov )
	if( .not. xtr ) goto 10
	if( .not. new ) return
	call cursor( 20, 12 )
	call pcolor( icllbl )
	call string(1, '*** ^E')
	call punit( ship )
	if( hypmov .eq. 1 ) call string(1,'in hyperspace ***^E')
	if( hypmov .eq. 2 ) call string(1,'in transit ***^E')
	call pcolor( iclwhi )
	return

10	call getval(5, 0,1071,  shiptr, ship, loc )
	call getval(5, 0,1072,  orbit, ship, orb )
	call getval(5, 0,1073,  ptype, loc, itype )
	iatmos = iclbla
	if( itype .eq. 1 .and. orb .eq. 1 ) iatmos = icllbl
	if( .not. new .and. loc .eq. oloc .and. orb .eq. oorb ) goto 50
	oloc = loc
	oorb = orb
	call cursor( 1, 24 )
	call string(1,'Sensor scan from ^E')
	call punit( ship )
	call string(1,' at ^E')
	call ploc( loc, orb )
50	if( .not. new ) goto 1000
	call getval(5, 0,1085,  wplan, loc, planum )
	call getval(5, 0,1086,  wmoon, loc, moonum )
	call string(1,'^M^J^JCat. code: ^E')
	call number(1, loc )
	call chrout(47)
	if( loc .gt. numstr ) goto 200
	call getval(5, 0,1091,  wplace, loc, ival )
	call number(1, ival )
	call string(1,'^M^JSpectral class: ^E')
	class = iqran(loc,60) - 1
	call chrout( letter(ifix(class/10.0)+1) )
	call number(1, mod(ifix(class),10) )
	call string(1,'.^M^JMass: ^E')
	zmass = -4.9775*10.0**25*(class-20)/30.0 + 2.9855*10.0**27
	powert = alog10( zmass )
	call number(4, zmass/(10.0**powert), 0, 10, 3 )
	call chrout(69)
	call number(1, powert )
	call string(1,' MT.^M^JRadius: ^E')
	zrad = -15660*(class-20)/30.0 + 974400
	call number(4, zrad, 0, 10, 3 )
	call string(1,' km.^M^JDensity: ^E')
	call number(4, 2.39*(class-20)/30.0 + 0.791, 0, 10, 3 )
	call string(1,' G/CM3.^M^JLuminosity: ^E')
	zlumen = -4.458*(class-20)/30.0 + 4.78
	call number(4, zlumen, 0, 10, 3 )
	call string(1,' AL.^M^JSurface temperature: ^E')
	temp = -3340*(class-20)/30.0 + 7060
	call number(4, temp, 0, 10, 3 )
	call string(1,'K.^M^JWave length: ^E')
	call number(4, 4100 + 351*class, 0, 10, 2 )
	call string(1,' microns.^M^JColor: ^E')

C	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT
	goto( 61, 62, 63, 64, 65, 66 ) ifix(class/10)+1
61	call string(1,'deep-blue^E')
	istarc = icldbl
	goto 100
62	call string(1,'blue-white^E')
	istarc = icllbl
	goto 100
63	call string(1,'white^E')
	istarc = iclwhi
	goto 100
64	call string(1,'yellow^E')
	istarc = iclyel
	goto 100
65	call string(1,'light-red^E')
	istarc = iclpur
	goto 100
66	call string(1,'deep-red^E')
	istarc = iclred
	goto 100
C	CALL STRING(3, COLOR(CLASS/10+1,1), 5, 5 )
C	CALL STRING(3, COLOR(CLASS/10+1,2), 5, 5 )

100	call string(1,'^M^JPolar spin: ^E')
	call number(1, iqran(loc,4975)+10 )
	call string(1,' days/rot.^M^JDegrees off ecliptic: ^E')
	call number(1, iqran(loc,91)-1 )
	call string(1,'^M^JSolar activity: ^E')
	call number(1, iqran(loc,101)-1 )
	call chrout(37)
	goto 1000

200	call number(4, (planum*1000 + moonum*10 + itype)/10.0, 0, 10, 3 )
	ival = iqran(loc,2724)
	zrad = ival + 4969
	if( moonum .ne. 0 ) zrad = zrad / 6
	if( itype .eq. 3 ) zrad = zrad * iqran(loc,50)
	call string(1,'^M^JMass: ^E')
	zmass = 1.4045*10.0**22 + ival*4.2783*10.0**18
	if( moonum .ne. 0 ) zmass = zmass / 123
	powert = alog10( zmass )
	call number(4, zmass/(10.0**powert), 0, 10, 3 )
	call chrout( 69 )
	call number(1, powert )
	call string(1,' MT.^M^JRadius: ^E')
	call number(4, zrad, 0, 10, 3 )
	call string(1,' km.^M^JDistance from primary: ^E')
	if( moonum .ne. 0 ) goto 210
	zrad = 5.79*10.0**7 + iqran(loc,1234567)
	if( planum .gt. 1 ) zrad = zrad + 4.46*10.0**7*(2.0**planum)
	goto 220
210	zrad = iqran(loc,9862)*100.0
220	powert = alog10( zrad )
	call number(4, zrad/(10.0**powert), 0, 10, 3 )
	call chrout(69)
	call number(1, powert )
	call string(1,' km.^M^JDays/orbit: ^E')
	if(moonum.eq.0)call number(4, 365.0*(zrad/(1.495*10.0**8)+0.0)**2,
     & 0,10,3 )
	if(moonum.ne.0)call number(4, 28.0*(zrad/(3.844*10.0**5)+0.0)**2,
     & 0,10,3 )
	call string(1,'^M^JPolar spin: ^E')
	call number(4, iqran(loc,2561)/100.0, 0, 10, 2 )
	call string(1,' days/rot.^M^JDegrees spin off ecliptic: ^E')
	call number(1, iqran(loc+1,91)-1 )
	call string(1,'^M^JDegrees off ecliptic: ^E')
	call number(1, iqran(loc+2,91)-1 )
	call string(1,'^M^JAtm: ^E')
	goto( 222, 223, 224 ) itype
222	i1 = iqran( loc, 10 ) + 15
	call number(1, i1 )
	call string(1,'%O2, ^E')
	i2 = iqran( loc+1, 25 ) + 49
	call number(1, i2 )
	call string(1,'%N2, ^E')
	i3 = iqran( loc+2, 100-i1-i2 )
	call number(1, i3 )
	call string(1,'%CO2, ^E')
	call number(1, 100-i1-i2-i3 )
	goto 225

223	if( zmass .lt. 10.0**21 ) call string(1,'None^E')
	if( zmass .lt. 10.0**21 ) goto 226
224	i1 = iqran( loc, 90 )
	call number(1, i1 )
	call string(1,'%H2, ^E')
	i2 = iqran( loc+1, 100-i1 )
	call number(1, i2 )
	call string(1,'%HE, ^E')
	call number(1, 100-i1-i2 )

225	call string(1,'%Trace^E')
226	call string(1,'^M^JPopulation:        mil.^M^J
     &Ore density:^M^JFood density:^M^JHunger:^E')

1000	if( planum .eq. 0 ) goto 1100
	call getval(5, 0,1214,  pop, loc, ival )
	if( ival .eq. oldpop .and. .not. new ) goto 1005
	call cursor( 13, 13 )
	call number(2, ival, 6 )
	oldpop = ival
1005	call getval(6, 0,1219,  restrn, loc, 1, ival )
	if( ival .eq. oldore .and. .not. new ) goto 1010
	call cursor( 14, 12 )
	call number(2, ival, 2 )
	oldore = ival
1010	call getval(6, 0,1224,  restrn, loc, 2, ival )
	if( ival .eq. oldfod .and. .not. new ) goto 1020
	call cursor( 15, 11 )
	call number(2, ival, 2 )
	oldfod = ival
1020	call getval(5, 0,1229,  hunger, loc, ival )
	if( ival .eq. oldhun .and. .not. new ) goto 1030
	call cursor( 9, 10 )
	call number(2, ival, 8 )
	oldhun = ival
1030	do 1070 j = 1, 3
	    if( orb .lt. j ) goto 1070
	    do 1040 i = orb+j*2-2, 16-orb-j*2
		newara(i,j) = thrshr
1040	    continue
1070	continue
	if( moonum .eq. 0 ) goto 1201

	newara( 12, 13 ) = threat
	newara( 13, 13 ) = threat
	newara( 12, 12 ) = threat
	newara( 13, 12 ) = threat
	newara( 12, 11 ) = twoat
	newara( 13, 11 ) = threat
	newara( 13, 10 ) = twoat
	goto 1201

1100	if( orb .eq. 3 ) newara( 7, 7 ) = onestr
	if( orb .eq. 3 ) goto 1201
	do 1200 i = 1, 13
	    do 1200 j = 1, 13
		newara(i,j) = thrstr
1200	continue
1201	continue

	if( loc .le. numstr ) goto 1246
	do 1245 i = 1, lunit
	    j = i
	    call getval(5, 0,1262,  org, j, ival )
	    if( ival .eq. 0 ) goto 1245
	    call getval(5, 0,1264,  shiptr, j, ival )
	    if( ival .ne. loc .or. j .eq. ship ) goto 1245
	    call getval(5, 0,1266,  hmflag, j, ival )
	    if( ival .ne. 0 ) goto 1245
	    call getval(5, 0,1268,  orbit, j, sorb )
	    i3 = 0
	    if( sorb .ne. 1 ) goto 1230
1220	    i3 = i3 + 1
	    i2 = 0
	    i1 = iqran( loc+j+i3, 13 )
1225	    i2 = i2 + 1
	    if( newara(i1,i2) .eq. thrshr ) goto 1225
	    if( iqran( loc+j-i3, 25 ) .lt. 4 ) goto 1245
	    if( newara(i1,i2) .ne. 0 ) goto 1220
	    goto 1240

1230	    i3 = i3 + 1
	    i1 = iqran( loc+j+i3, 13 )
	    i2 = iqran( loc-j+i3, 4 ) + sorb**2
	    if( iqran( loc+j-i3, 25 ) .lt. 2 ) goto 1245
	    if( newara(i1,i2) .ne. 0 ) goto 1230

1240	    call getval(5, 0,1286,  type, j, stype )
	    call getval(5, 0,1287,  org, j, sorg )
	    newara(i1,i2) = -(stype * 10000 + sorg)

1245	continue
1246	continue

	do 1247 ival = 1, 12
	    i = iqran(loc+ival*orb,13)
	    j = iqran(loc-ival*orb,13)
	    if( newara(i,j) .eq. 0 ) newara(i,j) = onedot
1247	continue

	if( .not. new ) goto 1249
	call pback( iclwhi )
	call cursor( 39, 22 )
	call chrout(47)
	call irepeat(45,39)
	call chrout(92)
	call cursor( 39, 8 )
	call chrout(92)
	call irepeat(45,39)
	call chrout(47)
	do 1248 i = 1, 13
	    call cursor( 39, i+8 )
	    call chrout(124)
	    call cursor( 79, i+8 )
	    call chrout(124)
1248	continue
	call pback(iclbla)

1249	do 1300 j = 1, 13
	    line = .false.
	    do 1300 i = 1, 13
		if( new ) oldara(i,j) = -1
		iv = newara(i,j)
		if( iv.eq.oldara(i,j) .and. iatmos.eq.natmos
     &		    .and. ship.eq.oship ) goto 1269
		if( .not. line )call cursor( 37+3*i, j+8 )
		if( iv .ne. 0 ) goto 1250
		call pback( iatmos )
		call string(1,'   ^E')
		goto 1258
1250		if( iv .ne. threat ) goto 1251
		call pcolor( iclyel )
		call pback( iclyel )
		call string(1,'@@@^E')
		goto 1258
1251		if( iv .ne. twoats ) goto 1252
		call pcolor( iclyel )
		call pback( iatmos )
		call chrout(32)
		call pback( iclyel )
		call string(1,'@@^E')
		goto 1258
1252		if( iv .ne. onestr ) goto 1253
		call pcolor( istarc )
		call pback( iatmos )
		call string(1,' * ^E')
		goto 1258
1253		if( iv .ne. thrshr ) goto 1254
		call pcolor( iclgre )
		call pback( iclgre )
		call string(1,'###^E')
		goto 1258
1254		if( iv .ne. onedot ) goto 1255
		call pcolor( iclwhi )
		call pback( iatmos )
		call string(1,' . ^E')
		goto 1258
1255		if( iv .ne. thrstr ) goto 1256
		call pcolor( istarc )
		call pback( iclwhi )
		call string(1,'###^E')
		goto 1258
1256		call pback( iatmos )
		splayr = mod( -iv, 10000 )
		if( splayr.eq.player .and. iatmos .ne. iclbla )
     &		    call pcolor( iclbla )
		if( splayr.eq.player .and. iatmos .eq. iclbla )
     &		    call pcolor( iclwhi )
		if( splayr .ne. player ) call pcolor( iclred )
		call chrout( tc( (-iv)/10000 ) )
		call number(3, splayr, -2, 10 )
1258		oldara(i,j) = newara(i,j)
		line = .true.
		goto 1270

1269		line = .false.

1270		newara(i,j) = 0

1300	continue
	natmos = iatmos
	oship = ship
	call pcolor( iclwhi )
	call pback( iclbla )
	return
	end
C
	integer function iqran( seed, range )
C	TWEAKED TO BE 32 BIT SAFE

	integer seed, range, i

	iqran = seed
C	DO 10 I = 1, 9
	do 10 i = 1, 8
	    iqran = ishift( iqran, 4 )
	    iqran = iqran + seed
10	continue
C	IQRAN = IQRAN .XOR. "761345243571
	iqran = xor(iqran,626693556)
	iqran = mod( iabs(iqran), range ) + 1
	return
	end
C
	subroutine punit( shpnum )

	implicit integer ( a - z )

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	call chrout(35)
	call number(1, shpnum )
	call getval(5, 0,1420,  type, shpnum, stype )
	call putype( stype )

	return
	end
C
	subroutine putype( stype )

	implicit integer ( a - z )

	integer uname( 4, 7 )

C	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT
C	DATA ((UNAME(J,I),J=1,4),I=1,7)/' SPACESHIP          ',
C     &' HYPERSHIP          ',' GROUND UNIT        ',
C     &' ORE PROCESSOR      ',' FOOD PROCESSOR     ',
C     &' LUXURY PROCESSOR   ',' PORT               '/
C	CALL STRING(3, UNAME(1,STYPE), 5, 17 )
	
	if( stype .eq. 1 ) call string(1,' Spaceship       ^E')
	if( stype .eq. 2 ) call string(1,' Hypership       ^E')
	if( stype .eq. 3 ) call string(1,' Ground unit     ^E')
	if( stype .eq. 4 ) call string(1,' Ore Processor   ^E')
	if( stype .eq. 5 ) call string(1,' Food Processor  ^E')
	if( stype .eq. 6 ) call string(1,' Luxury Processor^E')
	if( stype .eq. 7 ) call string(1,' Port            ^E')
	return
	end
C
	subroutine ploc( loc, orb )

	implicit integer ( a - z )

	integer stname(2)

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	call getval(5, 0,1466,  wstar, loc, s )
	call getval(6, 0,1467,  name, s, 1, stname(1) )
	call getval(6, 0,1468,  name, s, 2, stname(2) )
	call string(3, stname, 6, 12 )
	call getval(5, 0,1470,  wplan, loc, p )
	if( p .eq. 0 ) call string(1,'         ^E')
	if( p .eq. 0 ) goto 100
	call string(1,'  P^E')
	call number(2, p, -2 )
	call getval(5, 0,1475,  wmoon, loc, m )
	if( m .eq. 0 ) call string(1,'    ^E')
	if( m .eq. 0 ) goto 100
	call string(1,'  M^E')
	call number(1, m )

100	if( orb .eq. 1 ) call string(1,' Ground^E')
	if( orb .eq. 2 ) call string(1,' Low   ^E')
	if( orb .eq. 3 ) call string(1,' High  ^E')
	end
C
	subroutine disys( new, ship, xtr )

	implicit integer ( a - z )

	integer oldaan(10), letter(6), stname(2)
	logical new, xtr

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	data letter/66,65,70,71,75,77/

	call getval(5, 0,1507,  hmflag, ship, hypmov )
	if( .not. xtr ) goto 10
	if( .not. new ) return
	call cursor( 20, 12 )
	call string(1,'*** ^E')
	call punit( ship )
	if( hypmov .eq. 1 ) call string(1,'in hyperspace ***^E')
	if( hypmov .eq. 2 ) call string(1,'in transit ***^E')
	return

10	call getval(5, 0,1517,  shiptr, ship, loc )
	call getval(5, 0,1518,  orbit, ship, orb )
	if( .not. new .and. loc .eq. oloc .and. orb .eq. oorb ) goto 50
	oloc = loc
	oorb = orb
	call cursor( 1, 24 )
	call string(1,'System report from ^E')
	call punit( ship )
	call string(1,' at ^E')
	call ploc( loc, orb )
50	if( .not. new ) goto 300
	call cursor( 1, 20 )
	call string(1,'Hyper time/jump:^M^J^E')
	call getval(5, 0,1530,  wstar, loc, s )
	do 100 i = 1, 5
	    call getval(6, 0,1532,  time, s, i+0, t )
	    if( t .eq. 0 ) goto 110
	    call number(2, t, 3 )
	    call chrout(47)
	    call getval(6, 0,1536,  dest, s, i+0, s1 )
	    call getval(6, 0,1537,  name, s1, 1, stname(1) )
	    call getval(6, 0,1538,  name, s1, 2, stname(2) )
	    call string(3, stname, 6, 12 )
100	continue

110	call cursor( 1, 16 )
	call string(1,'Satellite:         Type
     &     Allegiance   Low/Num   High/Num^M^J^E')
	call getval(6, 0,1545,  name, s, 1, ival )
	call string(3, ival, 6, 6 )
	call getval(6, 0,1547,  name, s, 2, ival )
	call string(3, ival, 6, 6 )
	call string(1,'     ^E')
	class = iqran( s, 60 ) - 1
	call chrout( letter(class/10 + 1) )
	call number(1, mod(class,10) )
	call crlf
	call getval(5, 0,1554,  wplace, s, tloc )
	if( tloc .eq. 0 ) goto 300
200	call getval(5, 0,1556,  wstar, tloc, ival )
	if( ival .ne. s ) goto 300
	call getval(5, 0,1558,  wplan, tloc, p )
	call getval(5, 0,1559,  wmoon, tloc, m )
	if( m .eq. 0 ) call string(1,'  Planet #^E')
	if( m .ne. 0 ) call string(1,'    Moon #^E')
	if( m .eq. 0 ) call number(2, p, -2 )
	if( m .ne. 0 ) call number(2, m, -2 )
	call getval(5, 0,1564,  ptype, tloc, ival )
	if( ival .eq. 1 ) call string(1,'     Habitable^M^J^E')
	if( ival .eq. 2 ) call string(1,'     Ordinary^M^J^E')
	if( ival .eq. 3 ) call string(1,'     Gasseous^M^J^E')
	tloc = tloc + 1
	goto 200

300	if( loc .eq. -1 ) return
	call getval(5, 0,1572,  poporg, s, borg )
	if( borg .eq. 0 ) borg = 100
	magicn = borg
	call getval(6, 0,1575,  plcorg, s, 1, blorg )
	if( blorg .eq. 0 ) blorg = 100
	magicn = blorg + magicn*101
	call getval(6, 0,1578,  nuaplc, s, 1, blnum )
	if( blnum .eq. 0 ) blnum = 1000
	magicn = blnum + magicn*1001
	call getval(6, 0,1581,  plcorg, s, 2, bhorg )
	if( bhorg .eq. 0 ) bhorg = 100
	magicn = bhorg + magicn*101
	call getval(6, 0,1584,  nuaplc, s, 2, bhnum )
	if( bhnum .eq. 0 ) bhnum = 1000
	magicn = bhnum + magicn*1001
	if( magicn .eq. osornm .and. .not. new ) goto 310
	call cursor( 33, 15 )
	call number(2, borg, -2 )
	call string(1,'        ^E')
	call number(2, blorg, -2 )
	call chrout(32)
	call number(2, blnum, 3 )
	call string(1,'     ^E')
	call number(2, bhorg, -2 )
	call chrout(32)
	call number(2, bhnum, 3 )
	osornm = magicn

310	call getval(5, 0,1600,  wplace, s, tloc )
	if( tloc .eq. 0 ) return
	ibod = 0
400	call getval(5, 0,1603,  wstar, tloc, ival )
	if( ival .ne. s ) return
	ibod = ibod + 1
	if( new ) oldaan(ibod) = 0
	call getval(5, 0,1607,  poporg, tloc, borg )
	if( borg .eq. 0 ) borg = 100
	magicn = borg
	call getval(6, 0,1610,  plcorg, tloc, 1, blorg )
	if( blorg .eq. 0 ) blorg = 100
	magicn = blorg + magicn*101
	call getval(6, 0,1613,  nuaplc, tloc, 1, blnum )
	if( blnum .eq. 0 ) blnum = 1000
	magicn = blnum + magicn*1001
	call getval(6, 0,1616,  plcorg, tloc, 2, bhorg )
	if( bhorg .eq. 0 ) bhorg = 100
	magicn = bhorg + magicn*101
	call getval(6, 0,1619,  nuaplc, tloc, 2, bhnum )
	if( bhnum .eq. 0 ) bhnum = 1000
	magicn = bhnum + magicn*1001
	if( magicn .eq. oldaan(ibod) .and. .not. new ) goto 500
	call cursor( 33, 15-ibod )
	call number(2, borg, -2 )
	call string(1,'        ^E')
	call number(2, blorg, -2 )
	call chrout(32)
	call number(2, blnum, 3 )
	call string(1,'     ^E')
	call number(2, bhorg, -2 )
	call chrout(32)
	call number(2, bhnum, 3 )
	oldaan(ibod) = magicn

500	tloc = tloc + 1
	goto 400
	end
C
	subroutine distat( new, ship )

	implicit integer ( a - z )

	integer reso(4), oldpds(3,2), maxres(7,4)
	logical new

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	data ((maxres(i,j),j=1,4),i=1,7)/15,10,4,3, 32,21,9,8,
     &0,0,0,0, 63,0,1,1, 0,63,1,1, 63,63,63,1, 63,63,63,63/

	if( .not. new ) goto 100
	call cursor( 1, 24 )
	call string
     &(1,'Position:^M^JType:^M^JResources:^M^J   Ore:     (^E')
	call getval(5, 0,1665,  type, ship, ival )
	call number(2, maxres( ival, 1 ), 2 )
	call string(1,')^M^J   Food:    (^E')
	call number(2, maxres( ival, 2 ), 2 )
	call string(1,')^M^J   Lux:     (^E')
	call number(2, maxres( ival, 3 ), 2 )
	call string(1,')^M^J   Men:     (^E')
	call number(2, maxres( ival, 4 ), 2 )
	call string(1,')^M^JTotal power:^M^JPower distribution
     &^M^J   Engines:^M^J   Shields:^M^J   Beam:^M^JPC:^M^J^E')
100	call getval(5, 0,1675,  shiptr, ship, loc )
	call getval(5, 0,1676,  orbit, ship, orb )
	call getval(5, 0,1677,  hmflag, ship, ival )
	magicn = loc + orb*2**12 + ival*2**16
	if( magicn .eq. pos .and. .not. new ) goto 200
	call cursor( 11, 24 )
	call ploc( loc, orb )
	if( ival .eq. 0 ) call string(1,'           ^E')
	if( ival .eq. 1 ) call string(1,' Hyperspace^E')
	if( ival .eq. 2 ) call string(1,' Transit   ^E')
	pos = magicn
200	if( ship .eq. oship .and. .not. new ) goto 300
	call cursor( 7, 23 )
	call punit( ship )
	oship = ship
300	do 400 i = 1, 4
	    j = i
	    call getval(6, 0,1692,  res, ship, j, ival )
	    if( ival .eq. reso(i) .and. .not. new ) goto 400
	    call cursor( 10, 22-i )
	    call number(2, ival, 2 )
	    reso(i) = ival
400	continue
	call getval(5, 0,1698,  power, ship, ival )
	if( ival .eq. pow .and. .not. new ) goto 500
	call cursor( 14, 17 )
	call number(2, ival, 2 )
	pow = ival
500	do 600 i = 1, 3
	    do 600 j = 1, 2
		call getval(7, 0,1705,  powdst, ship, i+0, j+0, ival )
		if( ival .eq. oldpds(i,j) .and. .not. new ) goto 600
		call cursor( 11+4*j, 16-i )
		call number(2, ival, 2 )
		oldpds(i,j) = ival
600	continue

700	call getval(5, 0,1712,  pc, ship, ival )
	if( ival .eq. opc .and. .not. new ) goto 800
	call cursor( 5, 12 )
	call number(2, ival, -2 )
	opc = ival

800	return
	end
C
	subroutine disunt( new, untloc, untype )

	implicit integer ( a - z )

	integer oldstf(200), sflag(4)
	integer tc(7), oc(3)
	logical new

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	data tc/83,72,71,79,70,76,80/, oc/46,45,94/
	data sflag/32,42,64,35/

	if( .not. new ) goto 50
	call cursor( 1, 24 )
	if( untype .ne. 0 ) call putype( untype )
	if( untype .eq. 0 ) call string(1,'units^E')
	if( untloc .ne. 0 ) call string(1,' at ^E')
	if( untloc .ne. 0 ) call ploc( untloc, 0 )
	if( untloc .eq. 0 ) call string(1,' in the entire system^E')
	call cursor( 60, 24 )
	call string(1,'Total: ^E')
50	scptr = 0
	do 100 i = 1, lunit
	    unit = i
	    call getval(5, 0,1756,  org, unit, ival )
	    if( ival .ne. player ) goto 100
	    call getval(5, 0,1758,  shiptr, unit, sloc )
	    call getval(5, 0,1759,  type, unit, stype )
	    if( ( untloc .ne. 0 .and. sloc .ne. untloc ) .or.
     &		( untype .ne. 0 .and. stype .ne. untype ) ) goto 100
	    scptr = scptr + 1
	    if( scptr .gt. 200 ) goto 100
	    if( new ) oldstf( scptr ) = 0
	    magicn = unit
	    magicn = magicn*8 + stype
	    call getval(5, 0,1767,  orbit, unit, sorb )
	    magicn = magicn*4 + sorb
	    call getval(5, 0,1769,  tmtonx, unit, ival )
	    if( ival .eq. 0 ) goto 55
	    call getval(5, 0,1771,  hmflag, unit, ival )
	    ival = ival + 1
55	    magicn = magicn*4 + ival
	    if( magicn .eq. oldstf( scptr ) ) goto 100
	    call cursor( mod(scptr-1,10)*8+1, 23-(scptr-1)/10 )
	    call number(2, unit, 4 )
	    call chrout( tc(stype) )
	    call chrout( oc(sorb) )
	    call chrout( sflag(ival+1) )
	    oldstf( scptr ) = magicn
100	continue

	if( scptr .ge. oscptr .or. new ) goto 201
	do 200 i = scptr, oscptr
	    if( i .lt. 1 .or. i .gt. 200 ) goto 200
	    if( oldstf(i) .eq. 0 ) goto 200
	    call cursor( mod(i-1,10)*8+1, 23-(i-1)/10 )
	    call irepeat(32,7)
	    oldstf( i ) = 0
200	continue
201	continue
	if( scptr .eq. oscptr .and. .not. new ) return
	call cursor( 67, 24 )
	call number(2, scptr, 4 )
	oscptr = scptr
	return
	end
C
	subroutine disedt( new, cverb, ccode, cdest )

	implicit integer ( a - z )

	integer cverb( 40 ), ccode( 40 ), cdest( 40 )
	integer old(40)
	logical new

	do 100 i = 1, 40
	    if( new ) old( i ) = 0
	    magicn = cverb(i) + ccode(i)*16 + cdest(i)*256
	    if( magicn .eq. old(i) ) goto 100
	    old(i) = magicn
	    call cursor( 40*((i-1)/20)+1, 24-mod(i-1,20) )
	    if( cverb(i) .eq. 0 ) call irepeat( 32, 37 )
	    if( cverb(i) .ne. 0 )
     &		call prinst( i+0, cverb(i), ccode(i), cdest(i) )
100	continue
	return
	end
C
	subroutine prinst( ipc, iverb, icode, idest )

	implicit integer ( a - z )

	integer skpcod(6), prcode(4), util(4)

C	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT
C	INTEGER COMCOD(4,4),
C	DATA ((COMCOD(J,I),J=1,4),I=1,4)/
C     &	'RANDOM JUMP         ','PRODUCE             ',
C     &	'CEASE PRODUCTION    ','SELF DESTRUCT       '/

	data skpcod/'LT','LE','EQ','NE','GT','GE'/
	data prcode/'ORE','FOOD','LUX','MEN'/

	if( util(1) .ne. 0 ) goto 2
	util(1) = isxbit('Engine~')	! isxbit('ENGINE~')
	util(2) = isxbit('Shield~')	! isxbit('SHIELD~')
	util(3) = isxbit('Beam~')	! isxbit('BEAM  ~')
	util(4) = isxbit('Power~')	! isxbit('POWER ~')
2	continue

	call number(2, ipc, -2 )
	call string(1,': ^E')
	goto(5,7,20,25,50,55,80,85,90,100,3,3,3,3,110) iverb

3	return

5	call string(1,'Move ^E')
	goto 9

7	call string(1,'Jump ^E')

9	call ploc( idest, icode )
	return

20	call string(1,'Create ^E')
	call putype( icode )
	if( idest .eq. 0 ) call string(1,'     ^E')
	if( idest .gt. 0 ) call number(2, idest, 5 )
	call string(1,'    ^E')
	return

25	itype = idest/(2**15)
	id = mod( idest, 2**15 )
	call string(1,'Load^E')
	call number(2, icode, 5 )
	call chrout(32)
	call string(3, prcode( mod( itype, 4 )+1 ), 5, 4 )
	if( itype .lt. 4 ) call string(1,' on   ^E')
	if( itype .ge. 4 ) call string(1,' from ^E')
	if( id .gt. 0 ) call number(2, id, 8 )
	if( id .le. 0 ) call string(1,' surface^E')
	call string(1,'      ^E')
	return

50	call string(1,'Tactics     ^E')
	ival = idest
	do 52 i = 2, 0, -1
	    call number(2, mod( ival/(32**i), 32 ), 7 )
52	continue
	return

55	call string(1,'Inform^E')
	call string(3, idest, 6, 6 )
	if( icode .eq. 0 ) call string(1,'     ^E')
	if( icode .ne. 0 ) call number(2, icode, 5 )
	call irepeat( 32, 16 )
	return

80	call string(1,'Skip ^E')
	itype = idest/(2**15)
	call string(3, skpcod(itype), 5, 2 )
	call chrout(32)
	call string(3, prcode(icode), 5, 4 )
	call chrout(32)
	call number(2, mod( idest, 2**15 ), 6 )
	call irepeat( 32, 15 )
	return

85	call string(1,'Error ^E')
	if( idest .eq. 0 ) call string(1,'stop^E')
	if( idest .eq. 63 ) call string(1,'next^E')
	if( idest .gt. 0 .and. idest .lt. 63 ) call number(2, idest, 4 )
	call irepeat( 32, 23 )
	return

90	if( idest .eq. 0 ) call string(1,'Stop    ^E')
	if( idest .ne. 0 ) call string(1,'Goto^E')
	if( idest .ne. 0 ) call number(2, idest, 4 )
	call irepeat( 32, 25 )
	return

100	call string(1,'Build ^E')
	call string(3, util(icode), 6, 6 )
	call number(2, idest, 4 )
	call string(1,' units^E')
	call irepeat( 32, 11 )
	return

110	continue

C	MODIFIED TO NOT DEPEND ON 36 BIT WORD WITH 5 CHARS IN IT
C	CALL STRING(3, COMCOD(1,ICODE), 5, 20 )
	if( icode .eq. 1 ) call string(1,'Random jump         ^E')
	if( icode .eq. 2 ) call string(1,'Produce             ^E')
	if( icode .eq. 3 ) call string(1,'Cease production    ^E')
	if( icode .eq. 4 ) call string(1,'Self destruct       ^E')

	call irepeat( 32, 13 )
	return
	end
C
	subroutine dispos( new )

	implicit integer ( a - z )

	integer nminlo( 500 )			! or lasplc
	logical new

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	if( .not. new ) return
	do 100 i = 1, lunit
	    unum = i
	    call getval(5, 0,1953,  org, unum, ival )
	    if( ival .ne. player ) goto 100
	    call getval(5, 0,1955,  shiptr, unum, ival )
	    nminlo( ival ) = nminlo( ival ) + 1
100	continue
	curptr = 0
	do 200 loc = 1, lasplc
	    if( nminlo(loc) .eq. 0 ) goto 200
	    curptr = curptr + 1
	    call cursor( 40*((curptr-1)/20)+1, 24-mod(curptr-1,20) )
	    call number(2, nminlo(loc), 4 )
	    nminlo(loc) = 0
	    call string(1,' at ^E')
	    call ploc( loc+0, 0 )
200	continue
	return
	end
C
	subroutine displa( new )

	implicit integer ( a - z )

	integer untime( 20 ), month(12), filesp( 13 )
	logical new

	common/filcom/filesp

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	data month/'JAN','FEB','MAR','APR','MAY','JUN',
     &		   'JUL','AUG','SEP','OCT','NOV','DEC'/

	if( .not. new ) goto 100
	call cursor( 25, 2 )
	filesp(5) = 0
	filesp(6) = 63
	call outspc( filesp )
	call cursor( 2, 24 )
	call string(1,'Pl   Prog Units   NCSTRU^E')
	call cursor( 35, 24 )
	call string(1,'Elapsed:           Started: ^E')
	call getval(5, 0,2004,  ptime, 1, ival )
	call number(1, mod( ival, 31 ) + 1 )
	ival = ival/31
	call chrout(45)
	call string(3, month( mod( ival, 12 ) + 1 ), 5, 3 )
	call chrout(45)
	ival = ival/12
	call number(1, ival+64 )
	call chrout(32)
	call getval(5, 0,2013,  ptime, 2, ival )
	call number(2, ival/3600000, -2 )
	call chrout(58)
	call number(2, mod( ival/60000, 60 ), -2 )
100	call getval(5, 0,2017,  ptime, 3, ival )
	call cursor( 45, 24 )
	call number(1, ival )
	do 400 i = 1, 20
	    plynum = i
	    if( new ) untime(plynum) = 0
	    call getval(5, 0,2023,  progs, plynum, ival )
	    if( ival .eq. 0 ) goto 410
	    call getval(5, 0,2025,  nofuni, plynum, ival1 )
	    ival1 = ival1 + 1
	    if( ival1 .eq. ileft( untime(plynum) ) ) goto 350
	    call cursor( 40*((i-1)/20)+2, 23-mod(i-1,20) )
	    call number(2, plynum, -2 )
	    if( ival .ne. 262143 ) call number(3, ival, 7, 8 )
	    if( ival .eq. 262143 ) call string(1,' empire^E')
	    call number(2, ival1-1, 6 )
350	    call getval(5, 0,2033,  ncstru, plynum, ival2 )
	    ival2 = ival2 + 1
	    if( ival2 .eq. iright( untime(plynum) ) ) goto 370
	    call cursor( 40*((i-1)/20)+22, 23-mod(i-1,20) )
	    if( ival2 .eq. 64 ) call string(1,'Auto^E')
	    if( ival2 .ne. 64 ) call number(2, ival2, 4 )
370	    untime(plynum) = 262144*ival1 + ival2
400	continue

410	call getval(5, 0,2042,  useful, 7, whoinl )
	if( .not. new .and. whoinl .eq. oldinl ) return
	if( whoinl .eq. 0 ) goto 500
	call cursor( 40*((whoinl-1)/20)+1, 23-mod(whoinl-1,20) )
	call chrout(42)
500	if( oldinl .eq. 0 ) goto 600
	call cursor( 40*((oldinl-1)/20)+1, 23-mod(oldinl-1,20) )
	call chrout(32)
600	oldinl = whoinl
	return
	end
C
	subroutine disdbg( new )

	implicit integer ( a - z )

	integer oldprg( 20 ), oldmem( 40 )
	logical new

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	if( .not. new ) goto 100
	call cursor( 1, 4 )
	call string(1,'LUnit:     /^E')
	call number(2, maxuni, -4 )
	call string(1,'    LProgr:     /^E')
	call number(2, maxprg, -4 )
	call string(1,'    LMem:     /^E')
	call number(2, maxmem, -4 )
100	if( lunit .eq. olunit .and. .not. new ) goto 105
	call cursor( 8, 4 )
	call number(2, lunit, -4 )
	olunit = lunit
105	call getval(5, 0,2085,  useful, 8, lprogr )
	if( lprogr .eq. olprgr .and. .not. new ) goto 110
	call cursor( 29, 4 )
	call number(2, lprogr, -4 )
	olprgr = lprogr
110	call getval(5, 0,2090,  useful, 9, lmem )
	if( lmem .eq. olmem .and. .not. new ) goto 120
	call cursor( 48, 4 )
	call number(2, lmem, -4 )
	olmem = lmem
120	do 200 i = 1, 20
	    prgnum = i
	    call getval(5, 0,2097,  stradr, prgnum, addr )
	    call getval(5, 0,2098,  lenprg, prgnum, len )
	    call getval(5, 0,2099,  numusr, prgnum, num )
	    magicn = addr + len*2**12 + num*2**18
	    if( new ) oldprg(i) = 0
	    if( magicn .eq. oldprg(i) ) goto 200
	    oldprg(i) = magicn
	    call cursor( 1, 25-i )
	    if( magicn .eq. 0 ) call string(1,'                ^E')
	    if( magicn .eq. 0 ) goto 200
	    call number(2, prgnum, -2 )
	    call chrout(58)
	    call number(2, addr, -4 )
	    call chrout(32)
	    call number(2, len, -2 )
	    call chrout(32)
	    call number(2, num, -4 )
200	continue
	do 300 i = 1, 40
	    addr = i
	    call getval(5, 0,2117,  nverb, addr, iv )
	    call getval(5, 0,2118,  ncode, addr, ic )
	    call getval(5, 0,2119,  ndest, addr, id )
	    magicn = id + ic*2**12 + iv*2**16
	    if( new ) oldmem(i) = 0
	    if( magicn .eq. oldmem(i) ) goto 300
	    oldmem(i) = magicn
	    call cursor( 20*((i-1)/20)+30, 24-mod(i-1,20) )
	    if( magicn .eq. 0 ) call string(1,'                 ^E')
	    if( magicn .eq. 0 ) goto 300
	    call number(2, addr, -4 )
	    call chrout(58)
	    call number(2, iv, -2 )
	    call chrout(32)
	    call number(2, ic, -2 )
	    call chrout(32)
	    call number(2, id, -6 )
300	continue
	return
	end
C
	subroutine comand( ichar, comara, arrind, lcara )
C***
C***	ROUTINE GET COMMAND FROM USER IF ONE PRESENT.
C***
	integer comara(81), lcara(81), index, arrind, ichar
	data index/0/
C***
C***	IF THERE IS A CHARACTER OUT GET IT, ELSE, SLEEP FOR
C***	0.5 SECONDS OR UNTIL ONE IS.
C***
100	call curbuf
	call nap( 500, 12 )
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
	do 500 i = 1, index
	    call chrout(32)
500	continue
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
	do 800 i = 1, index
	    call chrout(32)
800	continue
	do 850 i=1, index+1
	    lcara(i) = comara(i)
850	continue
	call allcap( comara, index )
	ichar = comara(1)
900	arrind = index
	indstr = index
	index = 0
C	CALL NAP( 10, 4 )
	call nap( 1000, 4 )
	return
	end
C
	subroutine messag( msgara )

	implicit integer ( a - z )

	character msgara( 80 )

	common/mescom/mesflg

	if( mesflg .le. 0 ) goto 100
	call cursor( 1, 3 )
	call irepeat( 32, 80)
100	call cursor( 1, 3 )
	call string(1, msgara )
	mesflg = 10
	return
	end
C
	subroutine cease

	call enable
	call grafof
	call setdis( 0 )
	call cursor( 1, 1 )
	call close( 1 )
	if( nuser(0) .le. 1 ) call savesg
	call exprog
	end
C
	subroutine genins( par, l1, o1, l2, o2, iv, ic, id )

	implicit integer ( a - z )

	integer par(19), insnam(13), insnum(13), siname(4), sinum(4)
	integer skpcod(6), rtype(4), utype(7), parnum(6), util(4)
	logical jmperr

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

C***	DEFINE UNIT TYPE CODES: S, H, G, O, F, L, P
	data utype/51,40,39,47,38,44,48/

C***	DEFINE RESOURCE TYPES: O(RE), F(OOD), L(UX), M(EN)
	data rtype/47,38,44,45/

C***	DEFINE UTILITIES: E(NGINE) S(HIELD) B(EAM) P(OWER)
	data util/37,51,34,48/

	data insnum/1,2,3,4,4,4,5,6,7,8,9,9,10/
	data sinum/1,2,3,4/

	if( insnam(1) .ne. 0 ) goto 50

C***	DEFINE INSTRUCTIONS: MOVE,MOV,JUMP,JUM,CREATE,CRE
C***	LOAD,TRANSF,PUT,TACTIC,TAC,INFORM,INF
C***	SKIP,ERROR,ERR,GOTO,STOP,BUILD,BUI
	insnam(1)  = isxbit('Move~')		! isxbit('MOVE  ~')
	insnam(2)  = isxbit('Jump~')		! isxbit('JUMP  ~')
	insnam(3)  = isxbit('Create~')		! isxbit('CREATE~')
	insnam(4)  = isxbit('Load~')		! isxbit('LOAD  ~')
	insnam(5)  = isxbit('Transfer~')		! isxbit('TRANSF~')
	insnam(6)  = isxbit('Put~')		! isxbit('PUT   ~')
	insnam(7)  = isxbit('Tactic~')		! isxbit('TACTIC~')
	insnam(8)  = isxbit('Inform~')		! isxbit('INFORM~')
	insnam(9)  = isxbit('Skip~')		! isxbit('SKIP  ~')
	insnam(10) = isxbit('Error~')		! isxbit('ERROR ~')
	insnam(11) = isxbit('Goto~')		! isxbit('GOTO  ~')
	insnam(12) = isxbit('Stop~')		! isxbit('STOP  ~')
	insnam(13) = isxbit('Build~')		! isxbit('BUILD ~')

C***	NOARG INSTRUCTION: RANDOM,RAN,PRODUC,PRO,CEASE,CEA,SELF
	siname(1) = isxbit('Random~')		! isxbit('RANDOM~')
	siname(2) = isxbit('Produce~')		! isxbit('PRODUC~')
	siname(3) = isxbit('Cease~')		! isxbit('CEASE ~')
	siname(4) = isxbit('Selfdestruct~')	! isxbit('SELF  ~')

	skpcod(1) = isxbit('LT~')		! isxbit('LT    ~')
	skpcod(2) = isxbit('LE~')		! isxbit('LE    ~')
	skpcod(3) = isxbit('EQ~')		! isxbit('EQ    ~')
	skpcod(4) = isxbit('NE~')		! isxbit('NE    ~')
	skpcod(5) = isxbit('GT~')		! isxbit('GT    ~')
	skpcod(6) = isxbit('GE~')		! isxbit('GE    ~')
50	continue

	ic = 0
	id = 0
	l2 = l1
	o2 = o1
	iv = isrsix( insnam, par(1), 13 )
	if( iv .eq. 0 ) goto 1100
	iv = insnum( iv )
	goto(100,100,200,300,400,750,800,900,900,1000) iv

100	call parloc( par(2), l1, o1, jmperr, id, ic )
	if( jmperr ) goto 1200
	l2 = id
	o2 = ic
150	return

200	ic = iserch( utype, firstc( par(2) ), 7 )
	if( ic .eq. 0 ) goto 1200
	call convrt( par(3), 6, 6, parnum, 1 )
	call getnum(4, parnum, 6, id, 10 )
	if( id .lt. 0 ) goto 1200
	return

300	call convrt( par(2), 6, 6, parnum, 1 )
	call getnum(4, parnum, 6, ic, 10 )
	if( ic .lt. 0 ) ic = 0
	call convrt( par(5), 6, 6, parnum, 1 )
	call getnum(4, parnum, 6, id, 10 )
	if( par(4) .eq. isxbit('FROM~') ) id = id + 2**17
	ival = firstc( par(3) )
	if( ival .eq. 38 ) id = id + 2**15
	if( ival .eq. 44 ) id = id + 2*2**15
	if( ival .eq. 45 ) id = id + 3*2**15
350	return

400	id = 31
	do 405 i = 2, 4
	    call convrt( par(i), 6, 6, parnum, 1 )
	    call getnum(4, parnum, 6, ival, 10 )
	    id = 32*id + ival
405	continue
	return

750	id = par(2)
C	ZERO = 0
C	CALL SHIFTC( ID, ZERO, -18 )
C	IF( ZERO .NE. 0 ) GOTO 1200
	call convrt( par(3), 6, 6, parnum, 1 )
	call getnum(4, parnum, 6, ic, 10 )
	if( ic .gt. 15 ) goto 1200
	return

800	ival = iserch( skpcod, par(2), 6 )
	if( ival .eq. 0 ) goto 1200
	ic = iserch( rtype, firstc(par(3)), 4 )
	if( ic .eq. 0 ) goto 1200
	call convrt( par(4), 6, 6, parnum, 1 )
	call getnum(4, parnum, 6, id, 10 )
	if( id .lt. 0 .or. id .ge. 2**15 ) goto 1200
	id = id + ival*2**15
	return

900	if( par(2) .eq. isxbit('NEXT~') ) goto 910
	call convrt( par(2), 6, 6, parnum, 1 )
	call getnum(4, parnum, 2, id, 10 )
	if( id .lt. 0 .or. id .gt. 40 ) id = 0
	return

910	id = 63
	return

1000	ic = iserch( util, firstc(par(2)), 4 )
	if( ic .eq. 0 ) goto 1200
	call convrt( par(3), 6, 6, parnum, 1 )
	call getnum(4, parnum, 6, id, 10 )
	if( id .le. 0 ) goto 1200
	return

1100	ic = iserch( siname, par(1), 7 )
	if( ic .eq. 0 ) goto 1200
	ic = sinum( ic )
	iv = 15
	return

1200	call messag('Illegal instruction.^E')
	iv = -1
	return
	end
C
	subroutine parloc( par, cloc, corb, jmperr, loc, orb )

	implicit integer ( a - z )

	integer par( 10 ), pn( 6 ), orbcod( 3 )
	logical jmperr

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	if( orbcod(1) .ne. 0 ) goto 10
	orbcod(1) = isxbit('Ground~')		! isxbit('GROUND~')
	orbcod(2) = isxbit('Low~')		! isxbit('LOW   ~')
	orbcod(3) = isxbit('High~')		! isxbit('HIGH  ~')
10	continue

	jmperr = .true.
	loc = cloc
	orb = corb
	call getval(5, 0,2421,  wstar, loc, s )
	call getval(5, 0,2422,  wplan, loc, p )
	call getval(5, 0,2423,  wmoon, loc, m )
	do 100 i = 1, 10
	    if( par(i) .eq. 0 ) goto 110
	    if( (par(1).eq.isxbit('TO~') .or. par(1).eq.isxbit('AT~'))
     &		.and. i .eq. 1 ) goto 100
	    k = isrsix( orbcod, par(i), 3 )
	    if( k .eq. 0 ) goto 30
	    orb = k
	    goto 100

30	    do 50 j = 1, numstr
		call getval(6, 0,2434,  name, j+0, 1, ival )
		if( ival .ne. par(i) ) goto 50
		s = j
		p = 0
		m = 0
		orb = 3
		goto 100
50	    continue
	    call convrt( par(i), 6, 6, pn, 1 )
	    call getnum(4, pn, 6, ival, 10 )
	    if( pn(1) .ne. 83 ) goto 60
	    s = ival
	    p = 0
	    m = 0
	    orb = 3
	    goto 100
60	    if( pn(1) .ne. 80 ) goto 70
	    p = ival
	    m = 0
	    orb = 3
	    goto 100
70	    if( pn(1) .ne. 77 ) return
	    m = ival
	    orb = 3
100	continue

110	do 200 i = 1, lasplc
	    loc = i
	    call getval(5, 0,2462,  wstar, loc, ival )
	    if( ival .ne. s ) goto 200
	    call getval(5, 0,2464,  wplan, loc, ival )
	    if( ival .ne. p ) goto 200
	    call getval(5, 0,2466,  wmoon, loc, ival )
	    if( ival .eq. m ) goto 250
200	continue
	return

250	jmperr = .false.
	return
	end
C
	subroutine savesg

	implicit integer ( a - z )
	logical lerror

	integer filesp(13)

	common/filcom/filesp

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	if( job(-1) .eq. 0 ) return	! savesg not useful unless tops10
	call getval(5, 0,2497,  useful, 17, ival )
	if( ival .eq. 0 ) return
	call enable
	call ofile( 2, filesp, isxbit('@    ,~') )
	if( lerror(0) ) call bugmsg('INIT: UPD OPEN FAILURE.^E',0,0)
	filesp(5) = isxbit('UPD~')
	call wfile( 2, filesp )
	if( lerror(0) ) call bugmsg('INIT: UPD ENTER FAILURE.^E',0,0)

	begblk = nhiblk(0)
	call e( begblk+3, toploc )
	call filput( 2, toploc )
	do 100 i = 1, 490
	    call e( begblk+i+3, begadr )
	    call filput( 2, begadr )
100	continue
	do 200 i = begadr, toploc
	    call e( i+0, ival )
	    call filput( 2, ival )
200	continue
	call close( 2 )
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
	subroutine fmain

	implicit integer ( a - z )

	integer com(81), par(20), everb(40), ecode(40), edest(40)
	integer lcara(81)
	integer comnam(25), filesp(13), tc(7), fpar(7), disnam(8)
	integer tac(3)
	integer loopen
	integer sname(2)
	logical new, lprivd, iniflg, lmove, xtr1, xtr2, oxtr1, oxtr2
	logical jmperr, mltisp, jflag

	common/filcom/filesp
	common /col/iclwhi,icldbl,iclred,icllbl,
     &			iclpur,iclgre,iclyel,iclbla

	common/arrcom/
     &	    name,dest,time,wplace,
     &	    restrn,wstar,wplan,wmoon,ptype,
     &	    pop,poporg,hunger,oprind,plcorg,nuaplc,
     &	    org,res,type,shiptr,orbit,hmflag,
     &	    wprogr,pc,onerpc,tmtonx,prdtim,power,powdst,
     &	    progs,prgjob,nofuni,empcod,empdst,empc,empinf,ncstru,
     &	    nverb,ncode,ndest,stradr,lenprg,numusr,
     &	    mestrn,ptime,useful

	common/usrcom/lasplc,numstr,nprogs,lunit,player,
     & maxuni,maxprg,maxmem,maxpla

	common/mescom/mesflg


C***	DEFINE SHIP TYPE CHARACTERS
	data tc/83,72,71,79,70,76,80/

C***	START HIM ON DISPLAY #1 (SENSOR DISPLAY)
	data dtype/1/, new/.true./

	if( disnam(1) .ne. 0 ) goto 5

	iclwhi = 1
	icldbl = 2
	iclred = 3
	icllbl = 4
	iclpur = 5
	iclgre = 6
	iclyel = 7
	iclbla = 8

C***	DISPLAY TYPES: SENSOR, SEN, SYSTEM, SYS, STATUS, STA,
C***	UNITS, UNI, EDIT, EDI, POSITI, POS, PLAYER, PLA, DEBUG, DEB
	disnam(1) =  isxbit('sensors~')	! isxbit('SENSOR~')
	disnam(2) =  isxbit('systems~')	! isxbit('SYSTEM~')
	disnam(3) =  isxbit('status~')	! isxbit('STATUS~')
	disnam(4) =  isxbit('units~')	! isxbit('UNITS ~')
	disnam(5) =  isxbit('edit~')	! isxbit('EDIT  ~')
	disnam(6) = isxbit('positions~')! isxbit('POSITI~')
	disnam(7) = isxbit('players~')	! isxbit('PLAYER~')
	disnam(8) = isxbit('debug~')	! isxbit('DEBUG ~')

C***	DEFINED COMMANDS:
C***	DISPLA,DIS,NEW,MISSION,MIS,CLEAR,CLE,STAND,WAIT,SAVE,DONE,EXIT,
C***	GAG,UNGAG,INSERT,INS,I,REPLAC,REP,R,DELETE,DEL,D,TRANSF,TRA,T,
C***	NEWTAC,NEWPC,SENORD,ORDER,ORD,SENTAC,SENPC,WHO
	comnam( 1) = isxbit('Display~')		! isxbit('DISPLA~')
	comnam( 2) = isxbit('New~')		! isxbit('NEW   ~')
	comnam( 3) = isxbit('Mission~')		! isxbit('MISSIO~')
	comnam( 4) = isxbit('Clear~')		! isxbit('CLEAR ~')
	comnam( 5) = isxbit('Stand~')		! isxbit('STAND ~')
	comnam( 6) = isxbit('Wait~')		! isxbit('WAIT  ~')
	comnam( 7) = isxbit('Save~')		! isxbit('SAVE  ~')
	comnam( 8) = isxbit('Done~')		! isxbit('DONE  ~')
	comnam( 9) = isxbit('Exit~')		! isxbit('EXIT  ~')
	comnam(10) = isxbit('Gag~')		! isxbit('GAG   ~')
	comnam(11) = isxbit('Ungag~')		! isxbit('UNGAG ~')
	comnam(12) = isxbit('Insert~')		! isxbit('INSERT~')
	comnam(13) = isxbit('Replace~')		! isxbit('REPLAC~')
	comnam(14) = isxbit('Delete~')		! isxbit('DELETE~')
	comnam(15) = isxbit('Transfer~')		! isxbit('TRANSF~')
	comnam(16) = isxbit('Newtactic~')	! isxbit('NEWTAC~')
	comnam(17) = isxbit('Newpc~')		! isxbit('NEWPC ~')
	comnam(18) = isxbit('Sendorder~')	! isxbit('SENORD~')
	comnam(19) = isxbit('Senorder~')		! isxbit('SENORD~')
	comnam(20) = isxbit('Order~')		! isxbit('ORDER ~')
	comnam(21) = isxbit('Sendtactic~')	! isxbit('SENTAC~')
	comnam(22) = isxbit('Sentactic~')	! isxbit('SENTAC~')
	comnam(23) = isxbit('Sendpc~')		! isxbit('SENPC ~')
	comnam(24) = isxbit('Senpc~')		! isxbit('SENPC ~')
	comnam(25) = isxbit('Who~')		! isxbit('WHO   ~')
5	continue

C***	****************************
C***	****** BEGIN MAINLINE ******
C***	****************************

	call pback( iclbla )
	call pcolor( iclwhi )
	call settty( com, par, len, lprivd, filesp )
	call check( iniflg )
	if( iniflg ) call initdb( com, par, lprivd )
	call getval(5, 0,2650,  useful, 16, ival )
	if( ival .eq. 0 .or. lprivd ) goto 10
	call string(1,'Stand alone.  Try again later.^M^J^B')
	call exprog

10	continue ! call ctrap
c	    call cease

	call getval(5, 0,2658,  useful, 1, numstr )
	call getval(5, 0,2659,  useful, 4, lasplc )
	call getval(5, 0,2660,  useful, 5, lunit )
	call getval(5, 0,2661,  useful, 6, nprogs )
	call getval(5, 0,2662,  useful, 12, maxuni )
	call getval(5, 0,2663,  useful, 13, maxprg )
	call getval(5, 0,2664,  useful, 14, maxmem )
	call getval(5, 0,2665,  useful, 15, maxpla )
	call ppn( i, ival )
	do 50 player = 1, nprogs
	    call getval(5, 0,2668,  progs, player+0, j )
	    if( j .eq. ival ) goto 60
	    if( j .eq. 0 ) goto 70
50	continue
55	continue
	call string(1,'There are too many people in the system.^M^J^B')
	call exprog

60	call putval(5, 0,2676,  empcod, player, 0 )
	do 64 ship = 1, lunit
	    call getval(5, 0,2678,  org, ship+0, ival )
	    if( ival .eq. player ) goto 67
64	continue
65	continue
	call clrscr
	call cursor( 23, 14 )
	call string(1,'Your forces have been destroyed.^E')
	call cursor( 23, 10 )
	call string(1,'Do you wish to start again (Y/N)? ^B')
	call chrwat( ichar )
	if( ichar .gt. 91 ) ichar = ichar - 32
	ichar = icon( ichar )
	if( ichar .eq. 78 ) call exprog
	if( ichar .ne. 89 ) goto 65
	goto 72

67	call getval(5, 0,2694,  shiptr, ship, eloc )
	call getval(5, 0,2695,  orbit, ship, eorb )
	goto 90

70	call putval(5, 0,2698,  progs, player, ival )
72	eloc = iran( lasplc-numstr ) + numstr
	call getval(5, 0,2700,  ptype, eloc, ival )
	if( ival .eq. 3 ) goto 72
	eorb = 1
	call addunt( eloc, 2, ship, lmove )
	if( .not. lmove ) goto 55

90	call grafon
	call usrset( 536, ttyspd )

C***	*****************************
C***	****** BEGIN GAME LOOP ******
C***	*****************************

100	call usrset( 1048, ttyspd )
	call usrset( 1049, ttyspd )
	if(100*igtab(44,9)/igtab(40,9).le.85.or.lprivd) goto 101
	call clrscr
	call cursor( 21, 12 )
	call string(1,'It is over styxline.  Try again later.^E')
	call cease

101	call getval(5, 0,2721,  useful, 16, ival )
	if( lprivd .or. ival .eq. 0 ) goto 102
	call clrscr
	call cursor( 25, 12 )
	call string(1,'Stand alone.  Try again later.^E')
	call cease

102	call exunit
	call getval(5, 0,2729,  org, ship, ival )
	if( ival .eq. player ) goto 105
	do 103 ship = 1, lunit
	    call getval(5, 0,2732,  org, ship+0, ival )
	    if( ival .eq. player ) goto 104
103	continue
	call clrscr
	call cursor( 24, 12 )
	call string(1,'Your forces have been destroyed.^E')
	call cease

104	new = .true.

105	call getval(5, 0,2742,  shiptr, ship, cloc )
	call getval(5, 0,2743,  shiptr, ship, corb )
	call getval(5, 0,2744,  wstar, cloc, cstar )
	call getval(5, 0,2745,  hmflag, ship, hypmov )
	xtr1 = .false.
	xtr2 = .false.
	if( cloc .ne. oloc .and. hypmov .ne. 0 ) xtr1 = .true.
	if( cstar .ne. ostar .and. hypmov .ne. 0 ) xtr2 = .true.
	if( dtype .eq. 1 .and. xtr1 .ne. oxtr1 ) new = .true.
	if( dtype .eq. 2 .and. xtr2 .ne. oxtr2 ) new = .true.
	oxtr1 = xtr1
	oxtr2 = xtr2
	if( xtr1 .or. xtr2 ) goto 106
	oloc = cloc
	ostar = cstar
106	if( .not. new ) goto 110
	mesflg = 0
	call usrset( 1026, 1 )
	call clrscr
	call cursor( 1, 2 )
	call string(1,'ET for ^E')
	call getval(5, 0,2763,  type, ship, ival )
	call chrout( tc(ival) )
	call number(1, ship )
	call string(1,':^M^J>^E')

110	call getval(5, 0,2768,  tmtonx, ship, timeto )
	if( .not. new .and. timeto .eq. otimet ) goto 120
	otimet = timeto
	call cursor( 14, 2 )
	if( timeto .eq. 0 ) call string(1,'Ready^E')
	if( timeto .gt. 0 ) call number(2, timeto, 5 )

120	if( dtype .eq. 1 ) call disens( new, ship, xtr1 )
	if( dtype .eq. 2 ) call disys( new, ship, xtr2 )
	if( dtype .eq. 3 ) call distat( new, ship )
	if( dtype .eq. 4 ) call disunt( new, untloc, untype )
	if( dtype .eq. 5 ) call disedt( new, everb, ecode, edest )
	if( dtype .eq. 6 ) call dispos( new )
	if( dtype .eq. 7 ) call displa( new )
	if( dtype .eq. 8 ) call disdbg( new )

	call getval(5, 0,2784,  useful, 10, whoto )
	if( whoto .ne. player ) goto 126
	call putval(4, 0,2786,  -1, 0 )
	call getval(5, 0,2787,  useful, 11, whofrm )
	call messag('^G^E')
	call number(2, whofrm, -2 )
	call string(1,': ^E')
	do 125 i = 1, 72
	    call getval(5, 0,2792,  mestrn, i+0, ival )
	    call putval(4, 0,2793,  -1, 0 )
	    if( ival .eq. 0 ) goto 126
	    call chrout( ival )
125	continue
126	continue

	if( mesflg .le. 0 ) goto 130
	mesflg = mesflg - 1
	if( mesflg .gt. 0 ) goto 130
	oblorn = 0
	call cursor( 1, 3 )
	call irepeat( 32, 80 )

130	call getval(5, 0,2806,  empcod, player, ival )
	if( ival .eq. 0 ) goto 139
	call putval(4, 0,2808,  -1, 0 )
	call getval(5, 0,2809,  empdst, player, blorun )
	call getval(5, 0,2810,  empc, player, ipc )
	goto( 137, 138, 131, 136 ) ival

131	if( blorun .eq. oblorn ) goto 139
	do 133 i = 1, 7
	    fpar(i) = 0
133	continue
	call messag('Battle at ^E')
	call ploc( blorun, ipc )
	call string(1,' Engaged:^E')
	do 134 i = 1, lunit
	    unum = i
	    call getval(5, 0,2822,  shiptr, unum, ival )
	    if( ival .ne. blorun ) goto 134
	    call getval(5, 0,2824,  org, unum, ival )
	    if( ival .ne. player ) goto 134
	    call getval(5, 0,2826,  type, unum, ival )
	    fpar(ival) = fpar(ival) + 1
134	continue
	do 135 i = 1, 7
	    if( fpar(i) .eq. 0 ) goto 135
	    call number(2, fpar(i), 5 )
	    call chrout( tc(i) )
135	continue
	oblorn = blorun
	goto 139

136	if( blorun .eq. oblorn ) goto 139
	call messag('^G*********** Revolt at ^E')
	call ploc( blorun, 0 )
	call string(1,' ***********^E')
	oblorn = blorun
	goto 139

137	call messag('Error ^E')
	call punit( blorun )
	call string(1,' @ Ins. #^E')
	call getval(5, 0,2847,  wprogr, blorun, wp )
	call getval(5, 0,2848,  stradr, wp, addr )
	addr = addr + ipc - 1
	call getval(5, 0,2850,  nverb, addr, iv )
	call getval(5, 0,2851,  ncode, addr, ic )
	call getval(5, 0,2852,  ndest, addr, id )
	call prinst( ipc, iv, ic, id )
	goto 139

138	call messag('Inform ^E')
	call getval(5, 0,2857,  empinf, player, ival )
	call string(3, ival, 6, 6 )
	if( ipc .ne. 0 ) call number(2, ipc, 3 )
	call string(1,' from ^E')
	call number(1, blorun )
	call getval(5, 0,2862,  type, blorun, ival )
	call chrout(tc(ival))
	call string(1,' at ^E')
	call getval(5, 0,2865,  shiptr, blorun, ival )
	call getval(5, 0,2866,  orbit, blorun, i )
	call ploc( ival, i )

139	new = .false.
	tmtowa = max0( tmtowa-1, 0 )
	if( tmtowa .gt. 0 ) goto 100
	call outbuf( 1 )
	call comand( ichar, com, len, lcara )
	if( ichar .eq. -1 ) goto 100
	call parse( com, len, par, itoks, 20 )
	if( itoks .eq. 0 ) goto 100
	if( itoks .eq. 20 ) goto 141
	do 140 j = itoks+1, 20
	    par(j) = 0
140	continue
141	continue
	icom = isrsix( comnam, par(1), 25 )
	if( icom .eq. 0 ) goto 200
	goto( 145,145, 150,150, 157, 158, 160,  161, 162,
     &		164, 166, 170,170, 180,
     &		184, 190, 195, 250,250,250, 1102,1102, 1104,1104, 1300
     &		) icom

C***	DISPLA COMMAND

145	if( par(2) .eq. 0 ) new = .true.
	if( par(2) .eq. 0 ) goto 100
	idtype = isrsix( disnam, par(2), 8 )
	if( idtype .eq. 8 .and. .not. lprivd ) idtype = 0
	if( idtype .ne. 0 ) goto 146
	call messag('Unknown display type: ^E')
	call string(3, par(2), 6, 6 )
	goto 100

146	if( idtype .ne. 4 ) goto 147
	i = 3
	untype = par(3)
	ival = firstc(untype)
	untype = iserch( tc, icon( untype+32+ival ), 7 )
	if( untype .ne. 0 ) i = i + 1
	untloc = 0
	if( par(i) .eq. isxbit('ALL   ~') ) goto 148
	call parloc( par(i), cloc, corb, jmperr, untloc, ival )
	if( jmperr ) untloc = 0
	goto 148

147	i = 0
	if( itoks .ge. 3 ) call getnum(4, com, len, i, 10 )
	if( i .lt. 0 .or. i .gt. lunit ) goto 149
	if( i.eq.0 .and. idtype.eq.4 .and. par(3).ne.0 ) goto 147
	if( i .eq. 0 ) i = ship
	call getval(5, 0,2917,  org, i, ival )
	if( ival .ne. player ) goto 149
	ship = i
148	dtype = idtype
	new = .true.
	goto 100

149	call messag('Unit is not in fleet.^E')
	new = .false.
	goto 100

C***	MISSION COMMAND

150	do 155 i = 1, 40
	    everb(i) = 0
	    ecode(i) = 0
	    edest(i) = 0
155	continue
	if( dtype .eq. 5 ) new = .true.
	call getval(5, 0,2936,  shiptr, ship, eloc )
	call getval(5, 0,2937,  orbit, ship, eorb )
	call getnum(4, com, len, miss, 10 )
	if( miss .le. 0 .or. miss .gt. lunit ) goto 100
	call getval(5, 0,2940,  org, miss, ival )
	if( ival .ne. player ) goto 100
	call getval(5, 0,2942,  shiptr, miss, eloc )
	call getval(5, 0,2943,  shiptr, miss, eorb )
	call getval(5, 0,2944,  wprogr, miss, ival )
	if( ival .eq. 0 ) goto 100
	call getval(5, 0,2946,  stradr, ival, addr )
	call getval(5, 0,2947,  lenprg, ival, len )
	if( len .eq. 0 .or. addr .eq. 0 ) goto 100
	do 156 i = 1, len
	    call getval(5, 0,2950,  nverb, addr, everb(i) )
	    call getval(5, 0,2951,  ncode, addr, ecode(i) )
	    call getval(5, 0,2952,  ndest, addr, edest(i) )
	    addr = addr + 1
156	continue
	goto 100

C***	STAND ALONE COMMAND	(KICK EVERYBODY ELSE OUT OF GAME)

157	if( .not. lprivd ) goto 200
	call getval(5, 0,2960,  useful, 16, ival )
	call putval(5, 0,2961,  useful, 16, 1-ival )
	goto 100

C***	WAIT COMMAND	(TO HELP CREATE THE EMPIRE)

158	if( .not. lprivd ) goto 200
	call getval(5, 0,2967,  useful, 16, ival )
	if( ival .eq. 0 ) goto 200
	call getval(5, 0,2969,  useful, 17, ival )
	if( ival .eq. 0 ) goto 200
	call getnum(4, com, len, tmtowa, 10 )
	if( tmtowa .le. 0 ) tmtowa = 1
	goto 100

C***	SAVE COMMAND	(ALLOW A NON-EMPIRE GAME TO BE SAVED)

160	if( .not. lprivd ) goto 200
	call getval(5, 0,2978,  useful, 17, ival )
	if( ival .eq. 0 ) call putval(5, 0,2979,  useful, 17, 1 )
	goto 100

C***	DONE COMMAND	(SAVE EMPIRE GAME, LET USERS IN)

161	call getval(5, 0,2984,  useful, 16, ival )
	if( ival .eq. 0 ) goto 162
	call getval(5, 0,2986,  useful, 17, ival )
	if( ival .eq. 0 ) goto 162
	call putval(4, 0,2988,  -1, 2 )
	call putval(5, 0,2989,  progs, player, 262143 )

C***	EXIT COMMAND

162	call putval(5, 0,2993,  ncstru, player, 63 )
	call cease
	goto 100

C***	GAG COMMAND

164	call usrset( 1035, 0 )
	call messag('Terminal is now gagged.^E')
	goto 100

C***	UNGAG COMMAND

166	call usrset( 1035, 1 )
	call messag('Terminal is no longer gagged.^E')
	goto 100

C***	INSERT COMMAND

170	call getnum(4, com, len, line, 10 )
	if( line .lt. 1 .or. line .gt. 40 ) goto 175
	call genins( par(3), eloc, eorb, enloc, enorb, ev, ec, ed )
	if( ev .lt. 0 ) goto 100
	everb(line) = ev
	ecode(line) = ec
	edest(line) = ed
	eloc = enloc
	eorb = enorb
	goto 100

175	call messag('Line out of bounds.^E')
	goto 100

C***	DELETE COMMAND

180	call getnum(42, com,len, par(1),10, par(2),10, par(3),10,
     & par(4),10, par(5),10, par(6),10, par(7),10, par(8),10,
     & par(9),10, par(10),10, par(11),10, par(12),10, par(13),10,
     & par(14),10, par(15),10, par(16),10, par(17),10, par(18),10,
     & par(19),10, par(20),10 )
	do 181 i = 1, 20
	    line = par(i)
	    if( line .eq. 0 ) goto 100
	    if( line .lt. 1 .or. line .gt. 40 ) goto 175
	    everb(line) = 0
	    ecode(line) = 0
	    edest(line) = 0
181	continue
	goto 100

C***	TRANSFER COMMAND

184	call getnum(8, com, len, par(1),10, par(2),10, par(3),10 )
	if( par(3) .eq. 0 ) par(3) = par(2)
	if(par(1).ge.1.and.par(1).le.40.and.par(1)+par(3)-par(2).le.40
     &	.and.par(2).ge.0.and.par(2).le.par(3).and.par(3).le.40)goto 185
	call messag('Transfer line numbers out of range.^E')
	goto 100

185	if( par(1) .gt. par(2) ) goto 186
	j = par(2)
	k = par(3)
	line = par(1)
	ival = 1
	goto 187

186	j = par(3)
	k = par(2)
	line = par(1) + par(3) - par(2)
	ival = -1

187	do 188 i = j, k, ival
	    everb(line) = everb(i)
	    everb(i) = 0
	    ecode(line) = ecode(i)
	    ecode(i) = 0
	    edest(line) = edest(i)
	    edest(i) = 0
	    line = line + ival
188	continue

	do 189 i = 1, 40
	    if( (everb(i) .eq. 8 .or. everb(i) .eq. 9)
     &		.and. edest(i).ge.par(2) .and. edest(i).le.par(3))
     &		edest(i) = edest(i) - par(2) + par(1)
189	continue
	goto 100

C***	NEWTAC COMMAND

190	call getnum(8, com, len, tac(1),10, tac(2),10, tac(3),10 )
	do 192 i = 1, 3
	    tac(i) = max0( 0, tac(i) )
192	continue
	goto 100

C***	NEWPC COMMAND

195	call getnum(4, com, len, newpcv, 10 )
	if( newpcv .lt. 0 .or. newpcv .gt. 40 ) newpcv = 0
	goto 100

C***	NOT IN COMMAND LIST.  EITHER SNN, CNNNN OR DIRECT COMMAND

200	call convrt( par(1), 6, 6, fpar, 1 )
	call getnum(4, fpar(2), 5, unum, 10 )

C***	TRY SNN (SEND) COMMAND

	if( fpar(1).ne.83.or.unum.lt.1.or.unum.gt.nprogs) goto 210
	i = iserch( com, 32, len )
	if( i .eq. 0 .or. i .ge. len ) goto 100
	if( len-i .gt. 71 ) len = i+71
	do 205 j = i, len
	    call putval(5, 0,3106,  mestrn, j-i+1, icon(lcara(j)) )
205	continue
	call putval(5, 0,3108,  useful, 10, unum )
	call putval(5, 0,3109,  useful, 11, player )
	com(1) = 42
	goto 100

C***	TRY CNNNN (COMMAND COMMAND)

210	if( fpar(1) .ne. 67 .or. unum .eq. 0 ) goto 220
	if( unum .lt. 0 .or. unum .gt. lunit ) goto 149
	call getval(5, 0,3117,  org, unum, ival )
	if( ival .ne. player ) goto 149
	i = 2
	goto 230

C***	TRY DIRECT COMMAND

220	unum = ship
	i = 1

230	call getval(5, 0,3127,  shiptr, unum, sloc )
	call getval(5, 0,3128,  shiptr, unum, sorb )
	call genins( par(i), sloc, sorb, i, j, ev, ec, ed )
	if( ev .lt. 0 ) goto 100
	mltisp = .false.
	ilen = 1
	goto 1000

C***	ORDER COMMAND

250	ilen = 0
	do 275 i = 1, 40
	    if( everb(i) .ne. 0 ) ilen = i
275	continue
	mltisp = .true.

1000	icom = 10000			! icom = ns1714132329sordns1714132329
	call messag('Orders sent to: ^E')

1010	call getval(5, 0,3146,  useful, 7, whoinl )
	if( whoinl .eq. 0 )  goto 1030
	call getval(5, 0,3148,  ncstru, whoinl, ival )
	if( ival .eq. 63 )  goto 1030
	call addval(4, 0,3150,  -1, 1 )
	call putval(5, 0,3151,  ncstru, player, 0 )
	call nap( 500, 4 )
	goto 1010

1030	call putval(5, 0,3155,  useful, 7, player )
	call getval(5, 0,3156,  useful, 8, lprogr )
	prgnum = 0
	addr = 0
	if( lprogr .eq. 0 )  goto 1061
	do 1060 i = 1, lprogr
	    fpnum = i
	    call getval(5, 0,3162,  stradr, fpnum, addr )
	    call getval(5, 0,3163,  lenprg, fpnum, nlen )
	    if( nlen .lt. ilen ) goto 1060
	    if( nlen .gt. ilen ) goto 1050
	    if( ilen .eq. 0 )  goto 1041
	    do 1040 j = 1, ilen
		call getval(5, 0,3168,  nverb, addr, ival )
		if( mltisp .and. ival .ne. everb(j) )  goto 1050
		if( .not. mltisp .and. ival .ne. ev )  goto 1050
		call getval(5, 0,3171,  ncode, addr, ival )
		if( mltisp .and. ival .ne. ecode(j) )  goto 1050
		if( .not. mltisp .and. ival .ne. ec )  goto 1050
		call getval(5, 0,3174,  ndest, addr, ival )
		if( mltisp .and. ival .ne. edest(j) )  goto 1050
		if( .not. mltisp .and. ival .ne. ed )  goto 1050
		addr = addr + 1
1040	    continue
1041	    continue
	    prgnum = fpnum
	    goto 1101

1050	    call getval(5, 0,3183,  numusr, fpnum, ival )
	    if( ival .gt. 0 ) goto 1060
	    if( prgnum .gt. 0 ) goto 1060
	    prgnum = fpnum
	    if( nlen .ne. ilen ) prgnum = -prgnum
	    flen = nlen
1060	continue
1061	continue

	if( prgnum .ne. 0 )  goto 1070
	call addval(5, 0,3193,  useful, 8, 1 )
	prgnum = lprogr + 1
	if( prgnum .gt. maxprg ) call bugmsg('LPROGR>MAXPRG^E',0,0)
	call putval(5, 0,3196,  lenprg, prgnum, ilen )
	call getval(5, 0,3197,  useful, 9, lmem )
	if(lmem+ilen.gt.maxmem) call bugmsg('LMEM>MAXMEM^E',0,0)
	call addval(4, 0,3199,  -1, ilen )
	call putval(5, 0,3200,  stradr, prgnum, lmem+1 )
1070	call getval(5, 0,3201,  stradr, iabs(prgnum), addr )
	if( ilen .eq. 0 ) goto 1101
	do 1100 i = 1, ilen
	    if( .not. mltisp )  goto 1080
	    call putval(5, 0,3205,  nverb, addr, everb(i) )
	    call putval(5, 0,3206,  ncode, addr, ecode(i) )
	    call putval(5, 0,3207,  ndest, addr, edest(i) )
	    goto 1090
1080	    call putval(5, 0,3209,  nverb, addr, ev )
	    call putval(5, 0,3210,  ncode, addr, ec )
	    call putval(5, 0,3211,  ndest, addr, ed )
1090	    addr = addr + 1
1100	continue
1101	continue
	if( prgnum .gt. 0 ) goto 1105

	prgnum = -prgnum
	call putval(5, 0,3218,  lenprg, prgnum, ilen )
	lprogr = lprogr + 1
	call addval(5, 0,3220,  useful, 8, 1 )
	call putval(5, 0,3221,  stradr, lprogr, addr )
	call putval(5, 0,3222,  lenprg, lprogr, flen-ilen )
	goto 1105

C***	SENTAC COMMAND

1102	icom = 10001			! icom = ns1714132329stacns1714132329
	mltisp = .true.
	call messag('Tactics sent to: ^E')
	goto 1105

C***	SENPC COMMAND

1104	icom = 10002			! icom = ns1714132329spcns1714132329
	mltisp = .true.
	call messag('PC sent to: ^E')

1105	do 1106 i = 1, 7
	    fpar(i) = 0
1106	continue
	jflag = ( par(2).eq.isxbit('UNITS~') .or. par(2).eq.isxbit('UNI~') )
	loopen=1

C	Added because commands with no destination were falling to "no unit"
C	instead of the ship in view. (Linux port)
	par(1) = ship
	if( .not. mltisp ) goto 1119
	call getnum(42, com,len, par(1),10, par(2),10, par(3),10,
     & par(4),10, par(5),10, par(6),10, par(7),10, par(8),10,
     & par(9),10, par(10),10, par(11),10, par(12),10, par(13),10,
     & par(14),10, par(15),10, par(16),10, par(17),10, par(18),10,
     & par(19),10, par(20),10 )
	if( jflag )  goto 1130
	if( par(1) .eq. 0 ) par(1) = ship
	loopen=20

1119	continue
	do 1120 i = 1, loopen
	    unum = par(i)
1110	    if( unum .lt. 1 .or. unum .gt. lunit )  goto 1120
	    call getval(5, 0,3261,  org, unum, ival )
	    if( ival .ne. player )  goto 1120
	    call getval(5, 0,3263,  hmflag, unum, ival )
	    if( ival .eq. 1 ) goto 1120
	    call getval(5, 0,3265,  type, unum, ival )
	    fpar(ival) = fpar(ival) + 1
	    if( icom .ne. 10000 ) goto 1113
	    call getval(5, 0,3268,  wprogr, unum, curprg )
	    call putval(4, 0,3269,  -1, prgnum )
	    if( curprg .ne. 0 )  call addval(5, 0,3270,  numusr, curprg, -1 )
	    call addval(5, 0,3271,  numusr, prgnum, 1 )
	    call putval(5, 0,3272,  pc, unum, 1 )
	    call putval(5, 0,3273,  onerpc, unum, 0 )
	    goto 1120

1113	    continue
	    if( icom .ne. 10001 ) goto 1117
	    call getval(5, 0,3278,  power, unum, ival )
	    if( tac(1)+tac(2)+tac(3) .gt. ival ) goto 1120
	    do 1115 j = 1, 3
		call getval(7, 0,3281,  powdst, unum, j+0, 2, ival )
		call putval(7, 0,3282,  powdst, unum, j+0, 1, min0(tac(j),ival) )
1115	    continue
	    goto 1120

1117	    call putval(5, 0,3286,  pc, unum, newpcv )
	    call putval(5, 0,3287,  onerpc, unum, 0 )

1120	continue
	goto 1141

1130	i = par(1)
	if( i .lt. 1 .or. i .gt. lunit )  i = 1
	j = par(2)
	if( j .lt. 1 .or. j .gt. lunit )  j = lunit
	do 1140 k = i, j
	    unum = k
	    call getval(5, 0,3298,  org, unum, ival )
	    if( ival .ne. player )  goto 1140
	    call getval(5, 0,3300,  shiptr, unum, ival )
	    if( untloc .ne. 0 .and. ival .ne. untloc ) goto 1140
	    call getval(5, 0,3302,  hmflag, unum, ival )
	    if( ival .eq. 1 ) goto 1140
	    call getval(5, 0,3304,  type, unum, ival )
	    if( untype .ne. 0 .and. ival .ne. untype ) goto 1140
	    fpar(ival) = fpar(ival) + 1
	    if( icom .ne. 10000 ) goto 1133
	    call getval(5, 0,3308,  wprogr, unum, curprg )
	    call putval(4, 0,3309,  -1, prgnum )
	    if( curprg .ne. 0 )  call addval(5, 0,3310,  numusr, curprg, -1 )
	    call addval(5, 0,3311,  numusr, prgnum, 1 )
	    call putval(5, 0,3312,  pc, unum, 1 )
	    call putval(5, 0,3313,  onerpc, unum, 0 )
	    goto 1140

1133	    continue
	    if( icom .ne. 10001 ) goto 1137
	    call getval(5, 0,3318,  power, unum, ival )
	    if( tac(1)+tac(2)+tac(3) .gt. ival ) goto 1140
	    do 1135 j = 1, 3
		call getval(7, 0,3321,  powdst, unum, j+0, 2, ival )
		call putval(7, 0,3322,  powdst, unum, j+0, 1, min0(tac(j),ival) )
1135	    continue
	    goto 1140

1137	    call putval(5, 0,3326,  pc, unum, newpcv )
	    call putval(5, 0,3327,  onerpc, unum, 0 )

1140	continue
1141	continue

	if( icom .eq. 10000 ) call putval(5, 0,3332,  useful, 7, 0 )
	jflag = .false.
	do 1200 i = 1, 7
	    if( fpar(i) .eq. 0 ) goto 1200
	    call number(2, fpar(i), 5 )
	    call chrout( tc(i) )
	    jflag = .true.
1200	continue
	if( jflag ) goto 100
	call string(1,' No unit.^E')
	goto 100

C***	WHO COMMAND

1300	call getnum(4, com, len, empnum, 10 )
	if( empnum .gt. 0 .and. empnum .le. nprogs ) goto 1305
	call messag('Illegal player number.^E')
	goto 100

1305	call messag('Player #^E')
	call number(2, empnum, -2 )
	call getval(5, 0,3353,  ncstru, empnum, ival )
	if( ival .lt. 63 ) goto 1310
	call getval(5, 0,3355,  progs, empnum, ival )
	call string(1,' is running automatically for ^E')
	if( ival .eq. 262143 ) call string(1,'the empire.^E')
	if( ival .eq. 262143 ) goto 100
	call string(1,'[*,^E')
	call number(3, ival, 0, 8 )
	call string(1,'].^E')
	goto 100

1310	call string(1,' is ^E')
	call getval(5, 0,3365,  prgjob, empnum, j )
	call syswho(j)
	goto 100

	end
