Cindx#	settty.for - Software to check if we're runnable and get terminal type from user
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
Cdoc#	settty.for - Software to check if we're runnable and get terminal type from user
Cdoc#	Made with Robert Kenney's HIPAK.MAC.
C------------------------------------------------------------------------
	SUBROUTINE SETTTY( COMARA, PARARA, ILEN, PRIVD, FILESP )

	IMPLICIT INTEGER ( A - Z )

	INTEGER COMARA(80),PARARA(20),FULNAM(2,11),TTYNAM(11),TNAM(2)
	INTEGER FILESP(13)

	DATA NUMTRM/11/
	DATA ( ( FULNAM( I, J ), I = 1, 2 ), J = 1, 11 ) /
     &	'ADDS5','80   ', 'ADM3A','     ', 'VT52 ','     ',
     &	'ISC  ','     ', 'ISCBI','G    ', 'PE550','     ',
     &	'ADDS9','80   ', 'ACTV ','     ', 'VT100','     ',
     &	'ADVAN','TAGE ', 'ANSI ','     '/
	DATA TTYNAM/ "414444632530, "414455234100, "666425220000, 
     & "516343000000, "516343425147, "604525252000, "414444633130,
     & "414364660000, "666421202000, "414466415664, "415663510000 /

	IJOB = JOB(0)
	FILESP(3) = IGTAB( IJOB, "135 )		! DEVICE RUN FROM
	FILESP(6) = "077			! PROTECTION
	FILESP(7) = ILEFT(IGTAB(IJOB,"136))	! PROJECT
	FILESP(8) = IRIGHT(IGTAB(IJOB,"136))	! PROGRAMMER NUMBER
	DO 5 I = 9, 13				! SFD'S
	    FILESP(I) = IGTAB(IJOB,"134+I)
5	CONTINUE
	CALL PPN( I, IVAL )
	IF( IVAL .EQ. FILESP(8) )  PRIVD = .TRUE.
	IF( PRIVD ) GOTO 40
	IF( IRIGHT(IGTAB(IJOB,"40)) .EQ. 0 ) GOTO 10
	CALL STRING('Do not run with a time limit set.^M^J^E')
	CALL QGONE

10	COMARA( 1 ) = "22
	COMARA( 2 ) = ITTY(IJOB) + "200000
	CALL MCALL2( "116, I, ERRFLG, 2, COMARA )
	IF( ERRFLG ) GOTO 20
	CALL STRING('Do not run under mic control.^M^J^E')
	CALL PSTOP

20	IF( ICJOB(IJOB) .LE. 0 ) GOTO 40
	CALL STRING('Do not run on a pty.^M^J^E')
	CALL PSTOP

40	CALL RSCAN
	IF( ERROR(0) )  GOTO 400
	CALL GETSTR( COMARA, 60, LENGTH )
100	IF( LENGTH .EQ. 0 )  GOTO 400
	CALL ALLCAP( COMARA, LENGTH )
	DASH = ISERCH( COMARA, '-', LENGTH )
	IF( DASH .LE. 0 .OR. DASH .GE. LENGTH )  GOTO 400
	CALL PARSE( COMARA( DASH+1 ), LENGTH-DASH, PARARA, ILEN, 20 )
	IF( ILEN .EQ. 0 )  GOTO 400
	DO 200 I = 1, NUMTRM
	    IF( ISERCH( PARARA,TTYNAM(I),ILEN ) .NE. 0 )  GOTO 300
200	CONTINUE
	GOTO 400

300	CALL MAKTMP( ISXBIT('TTY'), 2, FULNAM(1,I) )
	CALL TTYTYP( I - 1 )
	CALL CLRSCR
	CALL STRING('[Setting terminal type to ^E')
	CALL STRING( FULNAM( 1, I ), 5, -10 )
	CALL STRING(']^M^J^E')
	GOTO 600

400	CALL GETEMP( ISXBIT('TTY'), 2, TNAM )
	IF( ERROR(0) )  GOTO 500
	TSTNAM = ISXBIT( TNAM )
	I = ISERCH( TTYNAM, TSTNAM, NUMTRM )
	IF( I .EQ. 0 )  GOTO 500
	GOTO 300

500	COMARA(1) = '-'
	CALL STRING('Known terminal types are:^E')
	DO 550 I = 1, NUMTRM
	CALL STRING('^M^J    ^E')
	CALL STRING( FULNAM(1,I), 5, -10 )
550	CONTINUE
	CALL STRING('^M^JTerminal type: ^E')
	CALL GETSTR( COMARA(2), 59, LENGTH )
	LENGTH = LENGTH + 1
	GOTO 100

600	CALL OFILE( 1, ISXBIT('TTY'), "400000000010 )
	IF( .NOT. ERROR(0) ) GOTO 700
	CALL STRING('Terminal error.  No output possible.^M^J^E')
	CALL PSTOP

700	CALL SELECT( 1 )
	FILESP(4) = ISXBIT('MULTIS')
	FILESP(5) = ISXBIT('HLP')
	CALL OFILE( 2, FILESP, 0 )
	IF( ERROR(0) ) GOTO 800
	CALL RFILE( 2, FILESP )
	IF( ERROR(0) ) GOTO 800
	CALL XFER( 2, 1 )
	CALL STRING('^M^JType a space to continue: ^B')
	CALL CHRWAT( ICHAR )
	CALL CRLF
	CALL CURBUF
	CALL CLOSE( 2 )

800	FILESP(4) = IGTAB( IJOB, "137 )		! GET ORIGINAL PROG
	RETURN
	END
