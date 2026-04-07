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
	subroutine rplay( r, rtdec )
	integer len, base, rtdec
	real r

	base = 10
	len = 10

	call chrout(91)
	call number(4, r, len, base, rtdec )
	call string(1,'][^E')
	call number(4, r, -len, base, rtdec )
	call string(1,'][^E')
	call lnumbr(4, r, len, base, rtdec )
	call string(1,'][^E')
	call lnumbr(4, r, -len, base, rtdec )
	call string(1,']^M^J^E')
	return
	end

	subroutine iplay( i )
	integer i, len, base

	base = 10
	len = 10

	call chrout(91)
	call number(3, i, len, base )
	call string(1,'][^E')
	call number(3, i, -len, base )
	call string(1,'][^E')
	call lnumbr(3, i, len, base )
	call string(1,'][^E')
	call lnumbr(3, i, -len, base )
	call string(1,']^M^J^E')
	return
	end

	subroutine fmain

	integer n0, n1, n2
	real r0, r1, r2
	logical l0
	integer inara(80)

	call clrscr

	call string(1,'Welcome to the regression test.^M^J^J^E')

	call hprintf('Should be [   123.450][456       ]\n^E')
	call hprintf('          [%10.3f][%-10d]\n^E',123.45,456)
	l0 = .false.
	call string(1,'Should be  0:      ^E')
	call iplay( l0 )

	l0 = .true.
	call string(1,'Should be -1:      ^E')
	call iplay( l0 )

	call string(1,'Should be 123456:  ^E')
	call iplay( 123456 )

	call string(1,'Should be 123456.7:^E')
	call rplay( 123456.7, 1 )

	n0 = 2
	n1 = 3
	n3 = n0**n1
	call string(1,'Should be 8:       ^E')
	call iplay( n3 )

	r0 = 2.0
	n0 = 3
	r1 = r0 ** n0
	call string(1,'Should be 8:       ^E')
	call rplay( r1, 0 )

	r0 = 2050.0
	r1 = alog10(r0)
	call string(1,'Should be 3.3:     ^E')
	call rplay( r1, 1 )

	call string(1,'Should be -2.00:   ^E')
	call rplay( sign(-2.0,-3.0), 2 )

	call string(1,'Should be 2.000:   ^E')
	call rplay( sign(-2.0,3.0), 3 )

	call string(1,'Should be -2.0000: ^E')
	call rplay( sign(2.0,-3.0), 4 )

	call string(1,'Should be 2.00000: ^E')
	call rplay( sign(2.0,3.0), 5 )

	do 1000 i=2,20
	    do 900 j=1,20
	        call hprintf(' %,*d\0',i,j)
900	    continue
	    call hprintf('\n\0')
1000	continue

	call string(1,'^M^J^JEnter a string of characters:  ^E')
	call getstr(3, inara, 70, n0 )

	call string(1,'You typed:  [^E')
	call string(3, inara, 1, n0 )
	call string(1,']  This had N1=^E')
	call getnum(6, inara, n0, n1, 10, n2, 10 )
	call number(1, n1 )
	call string(1,' and ^E')
	call number(1, n2 )
	n0 = 70
	call string(1,', N0=^E')
	call number(1, n0 )
	call string(1,' (should be 70).  Job=^E')
	call number(1, job(0) )
	call string(1,'.^E')

	call string(1,'^M^J^JType any character to exit:  ^E')
	call chrwat( n0 )
	return
	end
