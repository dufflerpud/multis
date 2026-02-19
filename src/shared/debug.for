Cindx#	debug.for - Routines to compile multi-user games against for debugging
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
Cdoc#	debug.for - Routines to compile multi-user games against for debugging
Cdoc#	Made with Robert Kenney's HIPAK.MAC.
C------------------------------------------------------------------------
	SUBROUTINE DUMP36( IV )
	CALL NUMBER( ILEFT(IV), -6, 8 )
	CALL STRING(',,^E')
	CALL NUMBER( IRIGHT(IV), -6, 8 )
	RETURN
	END

	SUBROUTINE DUMPC( IV )
	CALL NUMBER( IV )
	IF( IV .LT. 32 .OR. IV .GE. "177 ) RETURN
	CALL CHROUT('(')
	CALL CHROUT( IV )
	CALL CHROUT(')')
	RETURN
	END

	SUBROUTINE DUMPV( IVAL )
	CALL NUMBER( IVAL )
	CALL STRING('=F^E')
	CALL NUMBER( (IVAL/256)/8 )
	CALL STRING('+B^E')
	CALL NUMBER( MOD(IVAL/256,8) )
	CALL STRING('+C^E')
	CALL DUMPC( MOD( IVAL, 256 ) )
	RETURN
	END

	SUBROUTINE DUMP( ISCR, FILSPC )
	INTEGER FILSPC(13), ISCR
	FILSPC(5) = ISXBIT('DMP')
	CALL OFILE( 5, FILSPC, 0 )
	CALL WFILE( 5, FILSPC )
	CALL SELECT( 5 )
	DO 200 IY=24, 1, -1
	    DO 100 IX=1, 80
	    	CALL GETVAL( ISCR+0, IY+0, IX+0, IVAL )
		CALL DEBVAL( ISCR+0, IY+0, IX+0, IB0 )
		CALL SETDIS(1)
		IAT = ICHRAT(IX+0,IY+0)
		IB1 = IBPTR(0)
		CALL SETDIS(0)
		CALL OUTNUM( IX+0, IY+0 )
		CALL STRING('  VA=^E')
		CALL DUMP36( IB0 )
		CALL CHROUT(':')
		CALL DUMPV( IVAL )
		CALL STRING(' vs. CA=^E')
		CALL DUMP36( IB1 )
		CALL CHROUT(':')
		CALL DUMPC( IAT )
     		CALL CRLF
100	    CONTINUE
200	CONTINUE
	CALL STRING('------------^M^J^E')
	IBASE = IRIGHT(ITBADR(ISCR))
	DO 300 IADDR=0,959
	    CALL NUMBER( IADDR+IBASE, -6, 8 )
	    CALL CHROUT('/')
	    CALL NUMBER( IADDR+0, -3 )
	    CALL CHROUT('=')
	    CALL E(IADDR+0,IVAL)
	    CALL DUMPV( ILEFT(IVAL) )
	    CALL STRING(',,^E')
	    CALL DUMPV( IRIGHT(IVAL) )
	    CALL CRLF
300	CONTINUE
	CALL CLOSE( 5 )
	CALL SELECT( 0 )
	RETURN
	END
