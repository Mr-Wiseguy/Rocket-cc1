/* Definitions of target machine for GNU compiler.  Iris version.
   Copyright (C) 1991 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

/*  This file was modified from iris3.h by Martin Day, SN Systems Ltd
    January 1994, to build a little-endian compiler                    */

/* And was then modified from psx.h by Gil Jaysmith, SN Systems Ltd
    August 1996, to build an R4700 compiler (ie R4600, since they're compatible) */
/* GIL: note what it supports:
   - hard floating-point indicated by absence of MASK_SOFT_FLOAT 
   - 32-bit GP registers indicated by absence of MASK_64BIT
   - big-endian code indicated by presence of MASK_BIG_ENDIAN 
   - use of normal assembler code indicated by MASK_GAS */

/* And was then modified from phoenix.h by Gil Jaysmith, SN Systems Ltd,
    October 28 1996, to build an R4300i compiler (ie R4000 big-endian)
    for the Nintendo 64 */
/* GIL: 25.11.97 modified to use R4300 settings */

#define TARGET_DEFAULT (MASK_GAS+MASK_BIG_ENDIAN+MASK_SPLIT_ADDR+MASK_GPOPT)

#define HAS_INIT_SECTION 1      /* GIL: Prevent call to __main, we don't need it */
#define MIPS_DEFAULT_GVALUE 0   /* GIL: Prevent N64 from creating this section unless required */

#define SGI_TARGET 1            /* inform other mips files this is SGI */

/* Names to predefine in the preprocessor for this target machine.  */

/* GIL: hey cpp, this is an ISA 3, R4300i chip (check this works!) */
/* GIL: 25.11.97 change to R4300 defines */
#define CPP_PREDEFINES  "-Dmips=3 -D__mips=3 -DMIPSEB -DR4300 -D_R4300 -DMIPSEB -D_MIPSEB"

#define STARTFILE_SPEC  "%{pg:gcrt1.o%s}%{!pg:%{p:mcrt1.o%s}%{!p:crt1.o%s}}"

#define CPP_SPEC "\
%{!ansi:-D__EXTENSIONS__} -D_MIPSEB \
%{.S:   -D_LANGUAGE_ASSEMBLY %{!ansi:-DLANGUAGE_ASSEMBLY}} \
%{.s:   -D_LANGUAGE_ASSEMBLY %{!ansi:-DLANGUAGE_ASSEMBLY}} \
%{.cc:  -D_LANGUAGE_C_PLUS_PLUS} \
%{.cxx: -D_LANGUAGE_C_PLUS_PLUS} \
%{.C:   -D_LANGUAGE_C_PLUS_PLUS} \
%{.m:   -D_LANGUAGE_OBJECTIVE_C} \
%{!.S: %{!.s: %{!.cc: %{!.cxx: %{!.C: %{!.m: -D_LANGUAGE_C %{!ansi:-DLANGUAGE_C}}}}}}} \
%{mlong64:-D__SIZE_TYPE__=long\\ unsigned\\ int -D__PTRDIFF_TYPE__=long\\ int} \
%{!mlong64:-D__SIZE_TYPE__=unsigned\\ int -D__PTRDIFF_TYPE__=int} \
%{mips3:-U__mips -D__mips=3}"

#define LIB_SPEC	\
	"%{!p:%{!pg:%{!static:%{!g*:-lc_s}} -lc}}%{p:-lc_p}%{pg:-lc_p} crtn.o%s"

/* GIL: name the machine */
#define MACHINE_TYPE    "Nintendo 64"

/* Always use 1 for .file number.  I [meissner@osf.org] wonder why
   IRIS needs this.  */

#define SET_FILE_NUMBER() num_source_filenames = 1

/* Put out a label after a .loc.  I [meissner@osf.org] wonder why
   IRIS needs this.  */

#define LABEL_AFTER_LOC(STREAM) fprintf (STREAM, "LM%d:\n", ++sym_lineno)

#define STACK_ARGS_ADJUST(SIZE)                                         \
{                                                                       \
  SIZE.constant += 4;                                                   \
  if (SIZE.constant < 32)                                               \
    SIZE.constant = 32;                                                 \
}

/* Define this macro to control use of the character `$' in
   identifier names.  The value should be 0, 1, or 2.  0 means `$'
   is not allowed by default; 1 means it is allowed by default if
   `-traditional' is used; 2 means it is allowed by default provided
   `-ansi' is not used.  1 is the default; there is no need to
   define this macro in that case. */

#define DOLLARS_IN_IDENTIFIERS 0

/* Tell G++ not to create constructors or destructors with $'s in them.  */

#define NO_DOLLAR_IN_LABEL 1

/* Specify wchar_t type.  */
#define WCHAR_TYPE      "unsigned char"
#define WCHAR_TYPE_SIZE BITS_PER_UNIT

/* Generate calls to memcpy, etc., not bcopy, etc.  */
#define TARGET_MEM_FUNCTIONS

/* Plain char is unsigned in the SGI compiler.  */
#define DEFAULT_SIGNED_CHAR 0

/* GIL: Machine is big-endian according to Martin */
#define TARGET_ENDIAN_DEFAULT MASK_BIG_ENDIAN

/* GIL: R4000/R4300i machine supports ISA 3 */
#define MIPS_ISA_DEFAULT 3
/* GIL: 25.11.97 - change to r4300 since the source appears to support it */
#define MIPS_CPU_STRING_DEFAULT "R4300"

/* A C statement to output something to the assembler file to switch to section
   NAME for object DECL which is either a FUNCTION_DECL, a VAR_DECL or
   NULL_TREE.  Some target formats do not support arbitrary sections.  Do not
   define this macro in such cases.  */

#define ASM_OUTPUT_SECTION_NAME(F, DECL, NAME) \
do {                                                            \
  extern FILE *asm_out_text_file;                               \
  if ((DECL) && TREE_CODE (DECL) == FUNCTION_DECL)              \
    fprintf (asm_out_text_file, "\t.section %s,\"ax\",@progbits\n", (NAME)); \
  else if ((DECL) && TREE_READONLY (DECL))                      \
    fprintf (F, "\t.section %s,\"a\",@progbits\n", (NAME));     \
  else                                                          \
    fprintf (F, "\t.section %s,\"aw\",@progbits\n", (NAME));    \
} while (0)

#include "mips/mips.h"
