Cindx#	regres.for - A regression test for multi-user games
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
Cdoc#	regres.for - A regression test for multi-user games
Cdoc#	Made Robert Kenney's HIPAK.MAC.
C------------------------------------------------------------------------
	SUBROUTINE RPLAY( R, RTDEC )
	INTEGER LEN, BASE, RTDEC
	REAL R

	BASE = 10
	LEN = 10

	CALL CHROUT('[')
	CALL NUMBER( R, LEN, BASE, RTDEC )
	CALL STRING('][^E')
	CALL NUMBER( R, -LEN, BASE, RTDEC )
	CALL STRING('][^E')
	CALL LNUMBR( R, LEN, BASE, RTDEC )
	CALL STRING('][^E')
	CALL LNUMBR( R, -LEN, BASE, RTDEC )
	CALL STRING(']^M^J^E')
	RETURN
	END

	SUBROUTINE IPLAY( I )
	INTEGER I, LEN, BASE

	BASE = 10
	LEN = 10

	CALL CHROUT('[')
	CALL NUMBER( I, LEN, BASE )
	CALL STRING('][^E')
	CALL NUMBER( I, -LEN, BASE )
	CALL STRING('][^E')
	CALL LNUMBR( I, LEN, BASE )
	CALL STRING('][^E')
	CALL LNUMBR( I, -LEN, BASE )
	CALL STRING(']^M^J^E')
	RETURN
	END

	SUBROUTINE FMAIN

	INTEGER N0, N1, N2
	REAL R0, R1, R2
	LOGICAL L0
	INTEGER INARA(80)

	CALL CLRSCR

	CALL STRING('Welcome to the regression test.^M^J^J^E')

	CALL HPRINTF('Should be [   123.450][456       ]\n^E')
	CALL HPRINTF('          [%10.3f][%-10d]\n^E',123.45,456)
	L0 = .FALSE.
	CALL STRING('Should be  0:      ^E')
	CALL IPLAY( L0 )

	L0 = .TRUE.
	CALL STRING('Should be -1:      ^E')
	CALL IPLAY( L0 )

	CALL STRING('Should be 123456:  ^E')
	CALL IPLAY( 123456 )

	CALL STRING('Should be 123456.7:^E')
	CALL RPLAY( 123456.7, 1 )

	N0 = 2
	N1 = 3
	N3 = N0^N1
	CALL STRING('Should be 8:       ^E')
	CALL IPLAY( N3 )

	R0 = 2.0
	N0 = 3
	R1 = R0 ^ N0
	CALL STRING('Should be 8:       ^E')
	CALL RPLAY( R1, 0 )

	R0 = 2050.0
	R1 = ALOG10(R0)
	CALL STRING('Should be 3.3:     ^E')
	CALL RPLAY( R1, 1 )

	CALL STRING('Should be -2.00:   ^E')
	CALL RPLAY( SIGN(-2.0,-3.0), 2 )

	CALL STRING('Should be 2.000:   ^E')
	CALL RPLAY( SIGN(-2.0,3.0), 3 )

	CALL STRING('Should be -2.0000: ^E')
	CALL RPLAY( SIGN(2.0,-3.0), 4 )

	CALL STRING('Should be 2.00000: ^E')
	CALL RPLAY( SIGN(2.0,3.0), 5 )

	DO 1000 I=2,20
	    DO 900 J=1,20
	        CALL HPRINTF(' %,*d\0',I,J)
900	    CONTINUE
	    CALL HPRINTF('\n\0')
1000	CONTINUE

	CALL STRING('^M^J^JEnter a string of characters:  ^E')
	CALL GETSTR( INARA, 70, N0 )

	CALL STRING('You typed:  [^E')
	CALL STRING( INARA, 1, N0 )
	CALL STRING(']  This had N1=^E')
	CALL GETNUM( INARA, N0, N1, 10, N2, 10 )
	CALL NUMBER( N1 )
	CALL STRING(' and ^E')
	CALL NUMBER( N2 )
	N0 = 'F'
	CALL STRING(', N0=^E')
	CALL NUMBER( N0 )
	CALL STRING(' (should be 70).  Job=^E')
	CALL NUMBER( JOB(0) )
	CALL STRING('.^E')

	CALL STRING('^M^J^JType any character to exit:  ^E')
	CALL CHRWAT( N0 )
	RETURN
	END
