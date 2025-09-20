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
