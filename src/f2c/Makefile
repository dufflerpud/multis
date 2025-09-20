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
PROJECTSDIR?=$(shell echo $(CURDIR) | sed -e 's+/projects/.*+/projects+')
YACC = yacc
YFLAGS =

DEBUG_OUT?=	:
ORIG_MAKEFILE?=	makefile.u
INSDIR?=	/usr/local/bin

INCLUDE_DIRS=$(SRCDIR) $(OBJDIR)

include $(PROJECTSDIR)/common/Makefile.std

$(OBJDIR)/%.o:	$(SRCDIR)/%.c $(OBJDIR)
		$(CC) -c $(CFLAGS) -I$(SRCDIR) -I$(OBJDIR) $< -o $@

OBJECTSd=	$(OBJDIR)/main.o $(OBJDIR)/init.o $(OBJDIR)/gram.o	\
		$(OBJDIR)/lex.o $(OBJDIR)/proc.o $(OBJDIR)/equiv.o	\
		$(OBJDIR)/data.o $(OBJDIR)/format.o $(OBJDIR)/expr.o	\
		$(OBJDIR)/exec.o $(OBJDIR)/intr.o $(OBJDIR)/io.o	\
		$(OBJDIR)/misc.o $(OBJDIR)/error.o $(OBJDIR)/mem.o	\
		$(OBJDIR)/names.o $(OBJDIR)/output.o			\
		$(OBJDIR)/p1output.o $(OBJDIR)/pread.o $(OBJDIR)/put.o	\
		$(OBJDIR)/putpcc.o $(OBJDIR)/vax.o			\
		$(OBJDIR)/formatdata.o $(OBJDIR)/parse_args.o		\
		$(OBJDIR)/niceprintf.o $(OBJDIR)/cds.o			\
		$(OBJDIR)/sysdep.o $(OBJDIR)/version.o

MALLOC =
# To use the malloc whose source accompanies the f2c source,
# add $(OBJDIR)/malloc.o
# to the right-hand side of the "MALLOC =" line above, so it becomes
#	MALLOC = $(OBJDIR)/malloc.o
# This gives faster execution on some systems, but some other systems do
# not tolerate replacement of the system's malloc.

OBJECTS =	$(OBJECTSd) $(MALLOC)

foo:
		@echo "Files:"
		@ls -ld $(b)

bins:		$(OBJDIR)/xsum.out $(BINDIR)/f2c

doc:		$(DOCDIR)/f2c.t
		@: Done

$(BINDIR)/f2c:	$(OBJECTS) $(BINDIR)
		ls -ld $(OBJECTS)
		$(CC) $(LDFLAGS) $(OBJECTS) -o $(BINDIR)/f2c

# The following used to be a rule for $(SRCDIR)/gram.c rather than $(OBJDIR)/gram1.c, but
# there are too many broken variants of yacc around, so now we
# distribute a correctly functioning $(SRCDIR)/gram.c (derived with a Unix variant
# of the yacc from plan9).

$(OBJDIR)/gram1.c: $(SRCDIR)/gram.head $(SRCDIR)/gram.dcl $(SRCDIR)/gram.expr $(SRCDIR)/gram.exec $(SRCDIR)/gram.io $(SRCDIR)/defs.h $(OBJDIR)/tokdefs.h
	( sed <$(OBJDIR)/tokdefs.h "s/#define/%token/" ;\
		cat $(SRCDIR)/gram.head $(SRCDIR)/gram.dcl $(SRCDIR)/gram.expr $(SRCDIR)/gram.exec $(SRCDIR)/gram.io ) >$(OBJDIR)/gram.in
	$(YACC) $(YFLAGS) $(OBJDIR)/gram.in
	@echo "(There should be 4 shift/reduce conflicts.)"
	sed 's/^# line.*/\/* & *\//' y.$(SRCDIR)/tab.c >$(SRCDIR)/gram.c
	rm -f $(OBJDIR)/gram.in $(OBJDIR)/y.tab.c

$(OBJECTSd): $(SRCDIR)/defs.h $(SRCDIR)/ftypes.h $(SRCDIR)/defines.h $(SRCDIR)/machdefs.h $(SRCDIR)/sysdep.h

$(OBJDIR)/tokdefs.h: $(SRCDIR)/tokens
	grep -n . <$(SRCDIR)/tokens | sed "s/\([^:]*\):\(.*\)/#define \2 \1/" >$(OBJDIR)/tokdefs.h

$(OBJDIR)/cds.o: $(SRCDIR)/sysdep.h
$(OBJDIR)/exec.o: $(SRCDIR)/p1defs.h $(SRCDIR)/names.h
$(OBJDIR)/expr.o: $(SRCDIR)/output.h $(SRCDIR)/niceprintf.h $(SRCDIR)/names.h
$(OBJDIR)/format.o: $(SRCDIR)/p1defs.h $(SRCDIR)/format.h $(SRCDIR)/output.h $(SRCDIR)/niceprintf.h $(SRCDIR)/names.h $(SRCDIR)/iob.h
$(OBJDIR)/formatdata.o: $(SRCDIR)/format.h $(SRCDIR)/output.h $(SRCDIR)/niceprintf.h $(SRCDIR)/names.h
$(OBJDIR)/gram.o: $(SRCDIR)/p1defs.h
$(OBJDIR)/init.o: $(SRCDIR)/output.h $(SRCDIR)/niceprintf.h $(SRCDIR)/iob.h
$(OBJDIR)/intr.o: $(SRCDIR)/names.h
$(OBJDIR)/io.o: $(SRCDIR)/names.h $(SRCDIR)/iob.h
$(OBJDIR)/lex.o : $(OBJDIR)/tokdefs.h $(SRCDIR)/p1defs.h
$(OBJDIR)/main.o: $(SRCDIR)/parse.h $(SRCDIR)/usignal.h
$(OBJDIR)/mem.o: $(SRCDIR)/iob.h
$(OBJDIR)/names.o: $(SRCDIR)/iob.h $(SRCDIR)/names.h $(SRCDIR)/output.h $(SRCDIR)/niceprintf.h
$(OBJDIR)/niceprintf.o: $(SRCDIR)/defs.h $(SRCDIR)/names.h $(SRCDIR)/output.h $(SRCDIR)/niceprintf.h
$(OBJDIR)/output.o: $(SRCDIR)/output.h $(SRCDIR)/niceprintf.h $(SRCDIR)/names.h
$(OBJDIR)/p1output.o: $(SRCDIR)/p1defs.h $(SRCDIR)/output.h $(SRCDIR)/niceprintf.h $(SRCDIR)/names.h
$(OBJDIR)/parse_args.o: $(SRCDIR)/parse.h
$(OBJDIR)/proc.o: $(OBJDIR)/tokdefs.h $(SRCDIR)/names.h $(SRCDIR)/niceprintf.h $(SRCDIR)/output.h $(SRCDIR)/p1defs.h
$(OBJDIR)/put.o: $(SRCDIR)/names.h $(SRCDIR)/pccdefs.h $(SRCDIR)/p1defs.h
$(OBJDIR)/putpcc.o: $(SRCDIR)/names.h
$(OBJDIR)/vax.o: $(SRCDIR)/defs.h $(SRCDIR)/output.h $(SRCDIR)/pccdefs.h
$(SRCDIR)/output.h: $(SRCDIR)/niceprintf.h
$(OBJDIR)/sysdep.o: $(SRCDIR)/sysdep.c $(OBJDIR)/sysdep.hd

$(OBJDIR)/put.o $(OBJDIR)/putpcc.o: $(SRCDIR)/pccdefs.h

$(OBJDIR)/sysdep.hd:
	if $(CC) $(SRCDIR)/sysdeptest.c -o $(OBJDIR)/sysdep_test; then echo '/*OK*/' > $(OBJDIR)/sysdep.hd;\
	elif $(CC) -DNO_MKDTEMP $(SRCDIR)/sysdeptest.c -o $(OBJDIR)/sysdep_test; then echo '#define NO_MKDTEMP' >$(OBJDIR)/sysdep.hd;\
	else echo '#define NO_MKDTEMP' >$(OBJDIR)/sysdep.hd; echo '#define NO_MKSTEMP' >>$(OBJDIR)/sysdep.hd; fi
	rm -f $(OBJDIR)/sysdep_test

$(DOCDIR)/f2c.t: $(SRCDIR)/f2c.1t $(DOCDIR)
	troff -man < $< > $@

#f2c.1: f2c.1t
#	nroff -man f2c.1t | col -b | uniq >f2c.1

#std_clean is good enough, so don't need these.
#clean:
#rm -f $(OBJDIR)/*.o f2c $(OBJDIR)/sysdep.hd $(OBJDIR)/tokdefs.h f2c.t

veryclean: clean
	rm -f xsum

b =		Notice README $(SRCDIR)/cds.c $(SRCDIR)/data.c		\
		$(SRCDIR)/defines.h $(SRCDIR)/defs.h			\
		$(SRCDIR)/equiv.c $(SRCDIR)/error.c			\
		$(SRCDIR)/exec.c $(SRCDIR)/expr.c $(SRCDIR)/f2c.1	\
		$(SRCDIR)/f2c.1t $(SRCDIR)/f2c.h $(SRCDIR)/format.c	\
		$(SRCDIR)/format.h $(SRCDIR)/formatdata.c		\
		$(SRCDIR)/ftypes.h $(SRCDIR)/gram.c			\
		$(SRCDIR)/gram.dcl $(SRCDIR)/gram.exec			\
		$(SRCDIR)/gram.expr $(SRCDIR)/gram.head			\
		$(SRCDIR)/gram.io					\
		$(SRCDIR)/init.c $(SRCDIR)/intr.c			\
		$(SRCDIR)/io.c $(SRCDIR)/iob.h $(SRCDIR)/lex.c		\
		$(SRCDIR)/machdefs.h $(SRCDIR)/main.c			\
		$(SRCDIR)/makefile.u $(SRCDIR)/makefile.vc		\
		$(SRCDIR)/malloc.c $(SRCDIR)/mem.c			\
		$(SRCDIR)/memset.c $(SRCDIR)/misc.c			\
		$(SRCDIR)/names.c $(SRCDIR)/names.h			\
		$(SRCDIR)/niceprintf.c $(SRCDIR)/niceprintf.h		\
		$(SRCDIR)/output.c $(SRCDIR)/output.h			\
		$(SRCDIR)/p1defs.h $(SRCDIR)/p1output.c			\
		$(SRCDIR)/parse.h $(SRCDIR)/parse_args.c		\
		$(SRCDIR)/pccdefs.h $(SRCDIR)/pread.c			\
		$(SRCDIR)/proc.c $(SRCDIR)/put.c			\
		$(SRCDIR)/putpcc.c $(SRCDIR)/sysdep.c			\
		$(SRCDIR)/sysdep.h $(SRCDIR)/sysdeptest.c		\
		$(SRCDIR)/tokens $(SRCDIR)/usignal.h $(SRCDIR)/vax.c	\
		$(SRCDIR)/version.c $(SRCDIR)/xsum.c			\

$(BINDIR)/xsum:	$(SRCDIR)/xsum.c $(BINDIR)
		$(CC) $(CFLAGS) $< -o $@

		#Check validity of transmitted source...
$(OBJDIR)/xsum.out: $(BINDIR)/xsum $b $(OBJDIR)
		$(BINDIR)/xsum $b >$(OBJDIR)/xsum1.out
		- cmp $(SRCDIR)/xsum0.out $(OBJDIR)/xsum1.out && mv $(OBJDIR)/xsum1.out $(OBJDIR)/xsum.out

#On non-Unix systems that end lines with carriage-return/newline pairs,
#use "make $(OBJDIR)/xsumr.out" rather than "make $(OBJDIR)/xsum.out".  The -r flag ignores
#carriage-return characters.
$(OBJDIR)/xsumr.out: $(BINDIR)/xsum $b $(OBJDIR)
		$(BINDIR)/xsum -r $b >$(OBJDIR)/xsum1.out
		cmp $(SRCDIR)/xsum0.out $(OBJDIR)/xsum1.out && mv $(OBJDIR)/xsum1.out $(OBJDIR)/xsumr.out

usage:
		@echo "Possible targets:"
		@echo "	usage		This message"
		@echo "	clean		Remove rebuildable files"
		@echo "	bins		Build binary"


all:		bins

orig_clean:
		$(MAKE) -f $(ORIG_MAKEFILE) clean

orig_bins:
		$(MAKE) -f $(ORIG_MAKEFILE) all CC=$(CC)

backup:
		$(MAKE) clean
		@mkdir -p $(BUPDIR)
		tar cCf .. - $(PROJECT) | bzip2 -9 > $(BUPDIR)/$(NOW).tbz2

install:	bins
		cp f2c $(INSDIR)

%:
		@echo "Invoking std_$@ rule:"
		@$(MAKE) std_$@ ORIGINAL_TARGET=$@
