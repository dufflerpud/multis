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
#define CONST_IDENT_MAX 30
#define IO_IDENT_MAX 30
#define ARGUMENT_MAX 30
#define USER_LABEL_MAX 30

#define EQUIV_INIT_NAME "equiv"

#define write_nv_ident(fp,a) wr_nv_ident_help ((fp), (struct Addrblock *) (a))
#define nv_type(x) nv_type_help ((struct Addrblock *) x)

extern char *c_keywords[];

char*	c_type_decl Argdcl((int, int));
void	declare_new_addr Argdcl((Addrp));
char*	new_arg_length Argdcl((Namep));
char*	new_func_length Argdcl((void));
int	nv_type_help Argdcl((Addrp));
char*	temp_name Argdcl((char*, int, char*));
char*	user_label Argdcl((long int));
