/*
#@HDR@	$Id$
#@HDR@		Copyright 2024 by
#@HDR@		Christopher Caldwell/Brightsands
#@HDR@		P.O. Box 401, Bailey Island, ME 04003
#@HDR@		All Rights Reserved
#@HDR@
#@HDR@	This software comprises unpublished confidential information
#@HDR@	of Brightsands and may not be used, copied or made available
#@HDR@	to anyone, except in accordance with the license under which
#@HDR@	it is furnished.
*/
/* niceprintf.h -- contains constants and macros from the output filter
   for the generated C code.  We use macros for increased speed, less
   function overhead.  */

#define MAX_OUTPUT_SIZE 6000	/* Number of chars on one output line PLUS
				   the length of the longest string
				   printed using   nice_printf   */



#define next_tab(fp) (indent += tab_size)

#define prev_tab(fp) (indent -= tab_size)



