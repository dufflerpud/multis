#@HDR@	$Id$
#indx#	Makefile - Build the multi-user games
#@HDR@
#@HDR@	Copyright (c) 2024-2026 Christopher Caldwell (Christopher.M.Caldwell0@gmail.com)
#@HDR@
#@HDR@	Permission is hereby granted, free of charge, to any person
#@HDR@	obtaining a copy of this software and associated documentation
#@HDR@	files (the "Software"), to deal in the Software without
#@HDR@	restriction, including without limitation the rights to use,
#@HDR@	copy, modify, merge, publish, distribute, sublicense, and/or
#@HDR@	sell copies of the Software, and to permit persons to whom
#@HDR@	the Software is furnished to do so, subject to the following
#@HDR@	conditions:
#@HDR@	
#@HDR@	The above copyright notice and this permission notice shall be
#@HDR@	included in all copies or substantial portions of the Software.
#@HDR@	
#@HDR@	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
#@HDR@	KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
#@HDR@	WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
#@HDR@	AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
#@HDR@	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
#@HDR@	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
#@HDR@	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
#@HDR@	OTHER DEALINGS IN THE SOFTWARE.
#
#hist#	2026-02-17 - Christopher.M.Caldwell0@gmail.com - Created
########################################################################
#doc#	Makefile - Build the multi-user games
#doc#	This is more painful than it might first seem since these have
#doc#	been built in many ways over the years as GNU's support for
#doc#	Fortran has changed.
########################################################################
PROJECTSDIR?=$(shell echo $(CURDIR) | sed -e 's+/projects/.*+/projects+')
include $(PROJECTSDIR)/common/Makefile.std

#	2024-01-17	Chris Caldwell, c.m.caldwell@alumni.unh.edu
#
#	Makefile to build multi-user games that used to run on UNH's
#	Decsystem 1090 running Tops10.
#
#	Makefile to build multi-user games that used to run on UNH's
#	Decsystem 1090 running Tops10.
#
#	The multi-user games were written in Fortran-66 hacked up to run on
#	a 36 bit architecture.
#
#	No modern version of Fortran supports 36 bit Fortran primitives,
#	so those have been replaced to string handler calls.
#
#	It used to be easy to get a version of Fortran-77 that could be
#	battered into submission to handle F66, but as of this writing,
#	I can't find any under the GNU/Linux world.  The references to
#	f77 come from when it readily existed.  If a version of F77 does
#	appear in the path, the Makefile will try to build binaries for it.
#
#	Instead, we use f2c, software to convert many versions of Fortran
#	to C, for further compilation.
#
#	hipak.c is a replacement for the old hipak.mac, written by
#	Robert Kenney at UNH.  Tops10 supported a type of shared memory
#	called the "hi segment", but the Linux port just uses the Linux
#	shared memory.
#
#	The export directory is filled with files that can be brought over
#	to other systems and compiled there.  In particular, this creates
#	a Dec10 directory which could be brought back to the original Dec 10
#	(or more realistically, an emulator), and compiled there.  VERY
#	few changes have been made to the original code since UNH days
#	so, it actualy works and includes features added since then
#	(when appropriate for the limited architecture).

TEST=star

HOMEHOST=www.brightsands.com
PROJECT=$(notdir $(shell pwd))
HOMEHOST=www.brightsands.com
SHELL=/bin/sh
CHECKLIBS=/lib /lib64 /usr/lib /usr/lib64 /usr/ccs/lib /usr/ccs/lib64
OS=$(shell uname -o 2>/dev/null || uname -s)
#COMPILER_TARGET=$(shell $(CC) -v 2>&1 | awk '/Target:/ { print $$2 }')
#COMPILER_VERSION=$(shell $(CC) -v 2>&1 | awk '/ version / { print $$3 }')
BUILDFOR=$(COMPILER_TARGET)-$(COMPILER_VERSION)

#OBJS=$(DEP_SYS)/objs
F77S_DIR=$(BINDIR)/f77s
F77S_OBJ=$(OBJDIR)/f77s
F2CS_DIR=$(BINDIR)/f2cs
F2CS_OBJ=$(OBJDIR)/f2cs
UNV_DIR=$(BUILT_HOST)/universes
LOG_DIR=$(BUILT_HOST)/logs
OBJLINKS=objs f77s f2cs universes logs
LINKS=$(OBJLINKS) bin
EXPORTS=exports
F2CCS_DIR=$(EXPORTS)/f2ccs
DEC10_DIR=$(EXPORTS)/dec10
FIXED_FS_DIR=$(EXPORTS)/fixed_fs
TOOLS_DIR=tools
DEFAULT_ARCHIVE=$(PROJECT).tbz2
ARCHIVES=$$HOME/archives
REASON=unknown
#UNIQUE_NAME=$(shell date '+%s$$$$')
UNIQUE_ARCHIVE=$(shell unique_name $(ARCHIVES)/$(PROJECT).%3.$(REASON).tbz2)
#UNIQUE_ARCHIVE=$(shell unique_name $(ARCHIVES)/$(PROJECT).%3.$(REASON).tbz2)
UNIQUE_BASENAME=$(notdir $(UNIQUE_ARCHIVE))
BACKUP_ARCHIVE=$(dir $(UNIQUE_ARCHIVE))$(DEFAULT_ARCHIVE)
TARARGS=projects/$(PROJECT)
INSTALL_DIR=/usr/local/multis
INSTALLED_UNIVERSES=$(INSTALL_DIR)/universes
F77VER=$(shell f77 -v 2>&1 | grep -v f2c | grep version)
F2CVER=$(shell f2c -v 2>&1 | grep version)
ROOT_PRIVS=$(shell id | grep uid=0)

BINARY_FOR_TEST=$(F2CSDIR)/$(TEST)

libsearch = $(firstword $(wildcard $(addsuffix /lib$(1).*,$(CHECKLIBS))))

ifneq ($(call libsearch,ncurses),)
    CURSES=-lncurses
else
    ifneq ($(call libsearch,curses),)
        CURSES=-lcurses
    else
	ifneq ($(shell ldconfig -p | grep ncurses),)
	    CURSES=-lncurses
	else
	    ifneq ($(shell ldconfig -p | grep curses),)
        	CURSES=-lcurses
	    else
		# This should not happen
	    endif
	endif
    endif
endif

#CC=gcc
CFLAGS=-Isrc/shared -g

#FC=g77
FFLAGS=-ff77 -fugly-logint -Wno-globals -fonetrip -finit-local-zero -fno-automatic -C

F2C=f2c
F2CFLAGS=-w -c -kr -NL800 -f -K
F2CCFLAGS=-std=c99 -Isrc/shared

#LD=gcc
ifeq ( $(OS), Cygwin )
    #LDFLAGS=-DLDFLAGS -mswindows
    LDFLAGS=$(LDFLAGS) -mswindows
else
    #LDFLAGS=-DLDFLAGS
endif

REQUIRED_EXTS= dat hlp
WEBSERVER_EXTS= $(REQUIRED_EXTS) html js

BASIC_PROGS=$(foreach F,$(wildcard src/*/*.hlp),$(notdir $(subst .hlp,,$(F))))

VPATH=$(foreach F, $(BASIC_PROGS),src/$F) src/shared

vars:
		echo "Variables:"
		@echo "TEST			$(TEST)"
		@echo "HOMEHOST			$(HOMEHOST)"
		@echo "PROJECT			$(PROJECT)"
		@echo "HOMEHOST			$(HOMEHOST)"
		@echo "SHELL			$(SHELL)"
		@echo "CHECKLIBS		$(CHECKLIBS)"
		@echo "OS			$(OS)"
		@echo "BUILDFOR			$(BUILDFOR)"
		@echo "F77S_DIR			$(F77S_DIR)"
		@echo "F77S_OBJ			$(F77S_OBJ)"
		@echo "F2CS_DIR			$(F2CS_DIR)"
		@echo "F2CS_OBJ			$(F2CS_OBJ)"
		@echo "UNV_DIR			$(UNV_DIR)"
		@echo "LOG_DIR			$(LOG_DIR)"
		@echo "OBJLINKS			$(OBJLINKS)"
		@echo "LINKS			$(LINKS)"
		@echo "EXPORTS			$(EXPORTS)"
		@echo "F2CCS_DIR		$(F2CCS_DIR)"
		@echo "DEC10_DIR		$(DEC10_DIR)"
		@echo "FIXED_FS_DIR		$(FIXED_FS_DIR)"
		@echo "TOOLS_DIR		$(TOOLS_DIR)"
		@echo "DEFAULT_ARCHIVE		$(DEFAULT_ARCHIVE)"
		@echo "ARCHIVES			$(ARCHIVES)"
		@echo "UNIQUE_NAME		$(UNIQUE_NAME)"
		@echo "UNIQUE_ARCHIVE		$(UNIQUE_ARCHIVE)"
		@echo "UNIQUE_BASENAME		$(UNIQUE_BASENAME)"
		@echo "BACKUP_ARCHIVE		$(BACKUP_ARCHIVE)"
		@echo "TARARGS			$(TARARGS)"
		@echo "INSTALL_DIR		$(INSTALL_DIR)"
		@echo "INSTALLED_UNIVERSES	$(INSTALLED_UNIVERSES)"
		@echo "F77VER			$(F77VER)"
		@echo "F2CVER			$(F2CVER)"
		@echo "ROOT_PRIVS		$(ROOT_PRIVS)"
		@echo "BINARY_FOR_TEST		$(BINARY_FOR_TEST)"
		@echo "CURSES			$(CURSES)"
		@echo "CFLAGS			$(CFLAGS)"
		@echo "FFLAGS			$(FFLAGS)"
		@echo "F2C			$(F2C)"
		@echo "F2CFLAGS			$(F2CFLAGS)"
		@echo "F2CCFLAGS		$(F2CCFLAGS)"
		@echo "LDFLAGS			$(LDFLAGS)"
		@echo "REQUIRED_EXTS		$(REQUIRED_EXTS)"
		@echo "WEBSERVER_EXTS		$(WEBSERVER_EXTS)"
		@echo "BASIC_PROGS		$(BASIC_PROGS)"
		@echo "VPATH			$(VPATH)"

bins:		fixed_fs f77s f2cs f2ccs dec10 links
		@: Done

all:		bins
		@: Done

again:
		make spotless
		make all

ifneq ($(F77VER),)
    INSTALL_DEPS=f77s
    INSTALL_FROM=$(F77S_DIR)
else
ifneq ($(F2CVER),)
    INSTALL_DEPS=f2cs
    INSTALL_FROM=$(F2CS_DIR)
endif
endif

ifeq ($(F77VER),)
    f77s:;		@echo "Cannot create $@ on $(OS) (no f77)."
else
    f77s:
			@echo "Attempting to build $@:"
			$(MAKE) $(foreach F,$(BASIC_PROGS),$(F77S_DIR)/$(F).cluster)
endif

ifeq ($(F2CVER),)
    f2cs:;		@echo "Cannot create $@ on $(OS) (no f2c)."
    f2ccs:;		@echo "Cannot create $@ on $(OS) (no f2c)."
else
    f2cs:
			@echo "Attempting to build $@:"
			$(MAKE) $(foreach F,$(BASIC_PROGS),$(F2CS_DIR)/$(F).cluster)

    f2ccs:
			date
			@echo "Attempting to build $@:"
			$(MAKE) $(foreach F,$(BASIC_PROGS),$(F2CCS_DIR)/$(F).cluster)
endif

dec10:
			@echo "Attempting to build $@:"
			$(MAKE) $(foreach F,$(BASIC_PROGS),$(DEC10_DIR)/$(F).cluster)

fixed_fs:
			@echo "Attempting to build $@:"
			$(MAKE) $(foreach F,$(BASIC_PROGS),$(FIXED_FS_DIR)/$(F).f)

links:
			@$(RM) -f $(LINKS)
			$(LN) -s $(BINDIR) bin
			$(LN) -s $(F77S_DIR) f77s
			$(LN) -s $(F2CS_DIR) f2cs
			$(LN) -s $(UNV_DIR) universes
			$(LN) -s $(LOG_DIR) logs

clean_tmps:
			$(RM) -f $(UNV_DIR)/* $(LOG_DIR)/*

clean:			clean_tmps
			$(RM) -rf $(OBJDIR)

spotless:		clean_tmps
			$(RM) -rf $(BUILDFOR) $(EXPORTS) $(LINKS)

#.SUFFIXES:		.c .o .obj .f .for .hlp .dat .html .js
#.PRECIOUS:		%.for %.c %.h %.dat %.html %.hlp %.js
#.PRECIOUS:		%.f %.c %.o

# Because we need to add a .o file for the binaries we need to build
# we eliminate the automatic rule.
%:			%.f	# Can't use default
%:			%.c	# Because we link with other things
%:			%.o
%.o:			%.c

.PRECIOUS:		$(F2CS_OBJ)/%.o
.PRECIOUS:		$(F77S_OBJ)/%.o
.PRECIOUS:		$(F2CS_DIR)/%
.PRECIOUS:		$(F77S_DIR)/%
.PRECIOUS:		$(F2CCS_DIR)/%.c
.PRECIOUS:		$(F2CCS_DIR)/%
.PRECIOUS:		$(DEC10_DIR)/%
.PRECIOUS:		$(FIXED_FS_DIR)/%

$(F77S_OBJ)/hipak.o:	src/shared/hipak.c
			@$(MKDIR) -p $(dir $@) $(UNV_DIR) $(LOG_DIR)
			$(CC) $(CFLAGS) -g -c \
			    $< \
			    -o $@

$(F77S_OBJ)/%.o:		$(FIXED_FS_DIR)/%.f
			@$(MKDIR) -p $(dir $@)
			$(FC) $(FFLAGS) -g -c \
			    $< \
			    -o $@

define support_rule
    $(2)/$(1).support: $(foreach extra,$(4),$(2)/$(extra)) \
	    $(foreach EXT,$(3), \
		$(foreach FIL,$(wildcard src/$(1)/*.$(EXT)), \
		    $(2)/$(notdir $(FIL)) \
		) \
	    ); @true
endef

define support_rules
    $(foreach PROG,$(BASIC_PROGS), \
        $(eval $(call support_rule,$(PROG),$(1),$(2),$(3))) \
    )
endef

$(F77S_DIR)/%:		%
			@$(MKDIR) -p $(dir $@)
			$(CP) $^ $@

$(F77S_DIR)/%:		$(F77S_OBJ)/%.o $(F77S_OBJ)/hipak.o
			@$(MKDIR) -p $(dir $@)
			$(CC) $(LDFLAGS) \
			    $(F77S_OBJ)/hipak.o \
			    $(F77S_OBJ)/$(notdir $@).o \
			    $(CURSES) -lm \
			    -o $@
			@$(RM) -f $(UNV_DIR)/$(notdir $@).memory $(LOG_DIR)/$(notdir $@).log

$(call support_rules,$(F77S_DIR),$(WEBSERVER_EXTS), multis.js multis.html )

$(F77S_DIR)/%.cluster:	$(F77S_DIR)/% $(F77S_DIR)/%.support
			@true

$(F2CS_OBJ)/hipak.o:	hipak.c f2c.h
			@$(MKDIR) -p $(dir $@)
			$(CC) $(CFLAGS) -DF2C -g -c \
			    $< \
			    -o $@

$(F2CS_OBJ)/%.o:	$(F2CCS_DIR)/%.c
			@$(MKDIR) -p $(dir $@)
			$(CC) $(F2CCFLAGS) -g -c \
			    $< \
			    -o $@

$(call support_rules,$(F2CS_DIR),$(WEBSERVER_EXTS), multis.js multis.html )

$(F2CS_DIR)/%.cluster:	$(F2CS_DIR)/% $(F2CS_DIR)/%.support
			@true

$(F2CS_DIR)/%:		$(F2CS_OBJ)/hipak.o $(F2CS_OBJ)/%.o
			@$(MKDIR) -p $(dir $@)
			$(CC) $(LDFLAGS) \
			    $(F2CS_OBJ)/hipak.o \
			    $(F2CS_OBJ)/$(notdir $@).o \
			    $(CURSES) -lm \
			    -o $@
			@$(RM) -f $(UNV_DIR)/$(notdir $@).memory $(LOG_DIR)/$(notdir $@).log

$(F2CS_DIR)/%:		%
			@$(MKDIR) -p $(dir $@)
			$(CP) $^ $@

$(call support_rules,$(F2CCS_DIR),$(WEBSERVER_EXTS), multis.js multis.html \
			hipak.c f2c.h )

$(F2CCS_DIR)/%.cluster:	$(F2CCS_DIR)/%.c $(F2CCS_DIR)/%.support
			@true

$(F2CCS_DIR)/%.c:	$(FIXED_FS_DIR)/%.f
			@$(MKDIR) -p $(dir $@)
			$(F2C) $(F2CFLAGS) < $< \
			    > $@

$(F2CCS_DIR)/%:		%
			@$(MKDIR) -p $(dir $@)
			$(CP) $^ $@


$(FIXED_FS_DIR)/%.f:	%.for $(TOOLS_DIR)/fix_keywords
			@$(MKDIR) -p $(dir $@)
			$(TOOLS_DIR)/fix_keywords < $< > $@ \
			    || ($(RM) -f $@;false)

$(DEC10_DIR)/make.mic:	$(TOOLS_DIR)/make_mic
			@$(MKDIR) -p $(dir $@)
			$< > $@

$(DEC10_DIR)/usrpak.mac:	hipak.mac
			@$(MKDIR) -p $(dir $@)
			sed -e 's/%HISEG==0/%HISEG==1/' < $< > $@

$(DEC10_DIR)/%:		%
			@$(MKDIR) -p $(dir $@)
			$(CP) $^ $@

$(call support_rules,$(DEC10_DIR),$(REQUIRED_EXTS),\
    hipak.mac usrpak.mac make.mic settty.for )

$(DEC10_DIR)/%.cluster:	$(DEC10_DIR)/%.for $(DEC10_DIR)/%.support
			@true

# These three don't work because VPATH doesn't include $(OBJDIR) etc.
objs/%.o:		links $(F77S_OBJ)/%.o
bin/%:			links $(F77S_DIR)/%
f2cs/%:			links $(F2CS_DIR)/%

%.dump:			%
			./$< dump > $@

%.man:			%.rnh
			rnh < $< > $@

backup:			spotless
			(cd $(HOME); $(TAR) cf - $(TARARGS) | bzip2 -9 > $(PROJECT).tbz2)

upload:			backup
			scp $(HOME)/$(PROJECT).tbz2 $(HOMEHOST):

uploadlive:		upload
			ssh $(HOMEHOST) "makelive $(PROJECT)"

export:			clean
			make f2ccs
			(cd $(HOME); $(TAR) cf - $(TARARGS) | bzip2 -9 > export.tbz2)

download:
			scp $(HOMEHOST):$(PROJECT).tbz2 $(HOME)
			(cd $(HOME); $(TAR) xjf $(PROJECT).tbz2)

archive:
			@[ -n "$(REASON)" ] || \
			    (echo "Must specify REASON=something for archive." && false)
			$(TAR) cCf $$HOME - $(TARARGS) | bzip2 -9 > $(UNIQUE_ARCHIVE)
			$(RM) -f $(BACKUP_ARCHIVE) && $(LN) -s $(UNIQUE_BASENAME) $(BACKUP_ARCHIVE)

clean_prog:
			@$(RM) -f $(UNV_DIR)/$(TEST).memory $(LOG_DIR)/$(TEST).log

standalone:		clean_prog $(BINARY_FOR_TEST).cluster \
			    $(TOOLS_DIR)/standalone
			gdb $(BINARY_FOR_TEST) -x $(TOOLS_DIR)/standalone

daemon:			clean_prog $(BINARY_FOR_TEST).cluster \
			    $(TOOLS_DIR)/daemon
			gdb $(BINARY_FOR_TEST) -x $(TOOLS_DIR)/daemon

client:			$(BINARY_FOR_TEST).cluster $(TOOLS_DIR)/client
			gdb $(BINARY_FOR_TEST) -x $(TOOLS_DIR)/client

webserver:		clean_prog $(BINARY_FOR_TEST).cluster \
			    $(TOOLS_DIR)/webserver
			gdb $(BINARY_FOR_TEST) -x $(TOOLS_DIR)/webserver

build:			clean_prog $(BINARY_FOR_TEST).cluster
			gdb $(BINARY_FOR_TEST)

ifeq ($(INSTALL_DEPS),)
install:
			@echo "No binaries built on $(OS) (no f77 or f2c)."
			@false
else

install:		$(INSTALL_DEPS)
ifeq ($(ROOT_PRIVS),)
			sudo $(MAKE) $@
else
			$(RM) -rf $(INSTALL_DIR)
			$(MKDIR) -p $(INSTALL_DIR) $(INSTALLED_UNIVERSES)
			cd $(INSTALL_FROM); $(CP) * $(INSTALL_DIR)
			cd $(INSTALL_DIR); \
			    chown -R root:wheel .; \
			    $(CHMOD) 644 *; \
			    $(CHMOD) 777 .; \
			    $(CHMOD) 4755 $(BASIC_PROGS); \
			    $(CHMOD) 666 cave.dat
			cd $(INSTALLED_UNIVERSES); \
			    for i in $(BASIC_PROGS); do \
			        echo "" > $${i}_All_play.description; \
			    done; \
			    $(CHMOD) 666 *; \
			    $(CHMOD) 777 .
endif
endif

#########################################################################
# Everything else goes to the usage message.				#
#########################################################################
%:
		@echo ""
		@echo 'project/$(PROJECT)/Makefile does not support "make $@".'
		@echo ""
		@grep "^usage:" Makefile >/dev/null && make usage MAKELEVEL=0

%:
		@echo "Invoking std_$@ rule:"
		@$(MAKE) std_$@ ORIGINAL_TARGET=$@
