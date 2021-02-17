#  GNU Objective C Runtime Makefile
#  Copyright (C) 1993, 1995, 1996, 1997 Free Software Foundation, Inc.
#
#  This file is part of GNU CC.
#
#  GNU CC is free software; you can redistribute it and/or modify it under the
#  terms of the GNU General Public License as published by the Free Software
#  Foundation; either version 2, or (at your option) any later version.
#
#  GNU CC is distributed in the hope that it will be useful, but WITHOUT ANY
#  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
#  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
#  details.
#
#  You should have received a copy of the GNU General Public License along with
#  GNU CC; see the file COPYING.  If not, write to the Free Software
#  Foundation, 59 Temple Place - Suite 330,
#  Boston, MA 02111-1307, USA.

#  This makefile is run by the parent dir's makefile.
#  thisdir1=`pwd`;  #  srcdir1=`cd $(srcdir); pwd`;  #  cd objc;  #  $(MAKE) $(MAKEFLAGS) -f $$srcdir1/objc/Makefile libobjc.a  #    srcdir=$$srcdir1 tooldir=$(tooldir) AR="$(AR)" AR_FLAGS="$(AR_FLAGS)"  #    GCC_FOR_TARGET="$$thisdir1/xgcc.exe -B$$thisdir1/"  #    GCC_CFLAGS="$(GCC_CFLAGS)" incinstalldir=$$thisdir1/include
#    OBJC_THREAD_FILE="$(OBJC_THREAD_FILE)"
#  Two targets are used by ../Makefile: `all' and `mostlyclean'.

SHELL=/bin/sh

.SUFFIXES: .m

OPTIMIZE= -O

srcdir = .
VPATH = $(srcdir)

AR = ar
AR_FLAGS = rc

# Define this as & to perform parallel make on a Sequent.
# Note that this has some bugs, and it seems currently necessary 
# to compile all the gen* files first by hand to avoid erroneous results.
P =

# Definition of `all' is here so that new rules inserted by sed
# do not specify the default target.
all: all.indirect

# sed inserts variable overrides after the following line.
CC = cl 
CLIB = libc.lib kernel32.lib 
CFLAGS = -Di386 -DWIN32 -D_WIN32 -D_M_IX86=300 -D_X86_=1   -DALMOST_STDC -D_MSC_VER=800 -D__MSDOS__ -Ox -Fo$@

LDFLAGS = -align:0x1000 -subsystem:console -entry:mainCRTStartup   -stack:1000000,1000 

EXTRA_OBJS=winnt.o 
winnt.o: $(srcdir)/config/i386/winnt.c 
	$(CC) $(CFLAGS)   	-I. -I$(srcdir) -I$(srcdir)/config -c $(srcdir)/config/i386/winnt.c 

STMP_FIXPROTO = 
OTHER_FIXINCLUDES_DIRS=. 
RANLIB = : 
RANLIB_TEST = false 
OLDCC = cl 
MAKE = nmake 
SYMLINK = copy 
INSTALL = $(srcdir)/install.sh -c 
exeext = .exe 
objext = .o 
oldobjext = .o 

EXTRA_PROGRAMS=ld.exe 

ld.o: $(srcdir)/config/winnt/ld.c 
	$(CC) $(CFLAGS)   	-I. -I$(srcdir) -I$(srcdir)/config -c $(srcdir)/config/winnt/ld.c 

ld.exe: ld.o 
        link -out:ld.exe ld.o $(LDFLAGS) $(CLIB) 

EXTRA_GCC_OBJS=spawnv.o oldnames.o 
spawnv.o: $(srcdir)/config/winnt/spawnv.c 
	$(CC) $(CFLAGS)   	-I. -I$(srcdir) -I$(srcdir)/config -c $(srcdir)/config/winnt/spawnv.c 

oldnames.o: $(srcdir)/config/winnt/oldnames.c 
	$(CC) $(CFLAGS)   	-I. -I$(srcdir) -I$(srcdir)/config -c $(srcdir)/config/winnt/oldnames.c
####target overrides
####host overrides
####cross overrides
####build overrides
#


OBJC_H = hash.h objc-list.h sarray.h objc.h objc-api.h    NXConstStr.h Object.h Protocol.h encoding.h typedstream.h thr.h

# Now figure out from those variables how to compile and link.
all.indirect: Makefile compiler objc-runtime

compiler:
	cd ..; $(MAKE) cc1obj.exe

objc-runtime:
	cd ..; $(MAKE) libobjc.a

# copy objc headers to installation include directory
copy-headers: 
	-delr $(incinstalldir)/objc
	-mkdir $(incinstalldir)/objc
	for file in $(OBJC_H); do  	  realfile=$(srcdir)/$${file};  	  cp $${realfile} $(incinstalldir)/objc;  	  chmod a+r $(incinstalldir)/objc/$${file};  	done

