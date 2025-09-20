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
/* This is never meant to be executed; we just want to check for the */
/* presence of mkdtemp and mkstemp by whether this links without error. */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 int
#ifdef KR_headers
main(argc, argv) int argc; char **argv;
#else
main(int argc, char **argv)
#endif
{
	char buf[16];
	if (argc < 0) {
#ifndef NO_MKDTEMP
		mkdtemp(buf);
#else
		mkstemp(buf);
#endif
		}
	return 0;
	}
