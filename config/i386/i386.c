/* Subroutines for insn-output.c for Intel X86.
   Copyright (C) 1988, 92, 94, 95, 96, 1997 Free Software Foundation, Inc.

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
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA. */

#include <stdio.h>
#include <setjmp.h>
#include <ctype.h>
#include "config.h"
#include "rtl.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"
#include "conditions.h"
#include "insn-flags.h"
#include "output.h"
#include "insn-attr.h"
#include "tree.h"
#include "flags.h"
#include "except.h"
#include "function.h"

#ifdef EXTRA_CONSTRAINT
/* If EXTRA_CONSTRAINT is defined, then the 'S'
   constraint in REG_CLASS_FROM_LETTER will no longer work, and various
   asm statements that need 'S' for class SIREG will break.  */
 error EXTRA_CONSTRAINT conflicts with S constraint letter
/* The previous line used to be #error, but some compilers barf
   even if the conditional was untrue.  */
#endif

#ifndef CHECK_STACK_LIMIT
#define CHECK_STACK_LIMIT -1
#endif

/* Type of an operand for ix86_{binary,unary}_operator_ok */
enum reg_mem
{
  reg_p,
  mem_p,
  imm_p
};

/* Processor costs (relative to an add) */
struct processor_costs i386_cost = {	/* 386 specific costs */
  1,					/* cost of an add instruction */
  1,					/* cost of a lea instruction */
  3,					/* variable shift costs */
  2,					/* constant shift costs */
  6,					/* cost of starting a multiply */
  1,					/* cost of multiply per each bit set */
  23					/* cost of a divide/mod */
};

struct processor_costs i486_cost = {	/* 486 specific costs */
  1,					/* cost of an add instruction */
  1,					/* cost of a lea instruction */
  3,					/* variable shift costs */
  2,					/* constant shift costs */
  12,					/* cost of starting a multiply */
  1,					/* cost of multiply per each bit set */
  40					/* cost of a divide/mod */
};

struct processor_costs pentium_cost = {
  1,					/* cost of an add instruction */
  1,					/* cost of a lea instruction */
  4,					/* variable shift costs */
  1,					/* constant shift costs */
  11,					/* cost of starting a multiply */
  0,					/* cost of multiply per each bit set */
  25					/* cost of a divide/mod */
};

struct processor_costs pentiumpro_cost = {
  1,					/* cost of an add instruction */
  1,					/* cost of a lea instruction */
  3,					/* variable shift costs */
  1,					/* constant shift costs */
  4,					/* cost of starting a multiply */
  0,					/* cost of multiply per each bit set */
  17					/* cost of a divide/mod */
};

struct processor_costs *ix86_cost = &pentium_cost;

#define AT_BP(mode) (gen_rtx (MEM, (mode), frame_pointer_rtx))

extern FILE *asm_out_file;
extern char *strcat ();

static void ix86_epilogue PROTO((int));
static void ix86_prologue PROTO((int));

char *singlemove_string ();
char *output_move_const_single ();
char *output_fp_cc0_set ();

char *hi_reg_name[] = HI_REGISTER_NAMES;
char *qi_reg_name[] = QI_REGISTER_NAMES;
char *qi_high_reg_name[] = QI_HIGH_REGISTER_NAMES;

/* Array of the smallest class containing reg number REGNO, indexed by
   REGNO.  Used by REGNO_REG_CLASS in i386.h. */

enum reg_class regclass_map[FIRST_PSEUDO_REGISTER] =
{
  /* ax, dx, cx, bx */
  AREG, DREG, CREG, BREG,
  /* si, di, bp, sp */
  SIREG, DIREG, INDEX_REGS, GENERAL_REGS,
  /* FP registers */
  FP_TOP_REG, FP_SECOND_REG, FLOAT_REGS, FLOAT_REGS,
  FLOAT_REGS, FLOAT_REGS, FLOAT_REGS, FLOAT_REGS,       
  /* arg pointer */
  INDEX_REGS
};

/* Test and compare insns in i386.md store the information needed to
   generate branch and scc insns here.  */

struct rtx_def *i386_compare_op0 = NULL_RTX;
struct rtx_def *i386_compare_op1 = NULL_RTX;
struct rtx_def *(*i386_compare_gen)(), *(*i386_compare_gen_eq)();

/* which cpu are we scheduling for */
enum processor_type ix86_cpu;

/* which instruction set architecture to use.  */
int ix86_arch;

/* Strings to hold which cpu and instruction set architecture  to use.  */
char *ix86_cpu_string;		/* for -mcpu=<xxx> */
char *ix86_arch_string;		/* for -march=<xxx> */

/* Register allocation order */
char *i386_reg_alloc_order;
static char regs_allocated[FIRST_PSEUDO_REGISTER];

/* # of registers to use to pass arguments. */
char *i386_regparm_string;

/* i386_regparm_string as a number */
int i386_regparm;

/* Alignment to use for loops and jumps:  */

/* Power of two alignment for loops. */
char *i386_align_loops_string;

/* Power of two alignment for non-loop jumps. */
char *i386_align_jumps_string;

/* Values 1-5: see jump.c */
int i386_branch_cost;
char *i386_branch_cost_string;

/* Power of two alignment for functions. */
int i386_align_funcs;
char *i386_align_funcs_string;

/* Power of two alignment for loops. */
int i386_align_loops;

/* Power of two alignment for non-loop jumps. */
int i386_align_jumps;

/* Sometimes certain combinations of command options do not make
   sense on a particular target machine.  You can define a macro
   `OVERRIDE_OPTIONS' to take account of this.  This macro, if
   defined, is executed once just after all the command options have
   been parsed.

   Don't use this macro to turn on various extra optimizations for
   `-O'.  That is what `OPTIMIZATION_OPTIONS' is for.  */

void
override_options ()
{
  int ch, i, j, regno;
  char *p;
  int def_align;

  static struct ptt
    {
      char *name;		/* Canonical processor name.  */
      enum processor_type processor; /* Processor type enum value.  */
      struct processor_costs *cost; /* Processor costs */
      int target_enable;	/* Target flags to enable.  */
      int target_disable;	/* Target flags to disable.  */
    } processor_target_table[]
      = {{PROCESSOR_I386_STRING, PROCESSOR_I386, &i386_cost, 0, 0},
	   {PROCESSOR_I486_STRING, PROCESSOR_I486, &i486_cost, 0, 0},
	   {PROCESSOR_I586_STRING, PROCESSOR_PENTIUM, &pentium_cost, 0, 0},
	   {PROCESSOR_PENTIUM_STRING, PROCESSOR_PENTIUM, &pentium_cost, 0, 0},
	   {PROCESSOR_I686_STRING, PROCESSOR_PENTIUMPRO, &pentiumpro_cost,
	      0, 0},
	   {PROCESSOR_PENTIUMPRO_STRING, PROCESSOR_PENTIUMPRO,
	      &pentiumpro_cost, 0, 0}};

  int ptt_size = sizeof (processor_target_table) / sizeof (struct ptt);

#ifdef SUBTARGET_OVERRIDE_OPTIONS
  SUBTARGET_OVERRIDE_OPTIONS;
#endif

  /* Validate registers in register allocation order.  */
  if (i386_reg_alloc_order)
    {
      for (i = 0; (ch = i386_reg_alloc_order[i]) != '\0'; i++)
	{
	  switch (ch)
	    {
	    case 'a':	regno = 0;	break;
	    case 'd':	regno = 1;	break;
	    case 'c':	regno = 2;	break;
	    case 'b':	regno = 3;	break;
	    case 'S':	regno = 4;	break;
	    case 'D':	regno = 5;	break;
	    case 'B':	regno = 6;	break;

	    default:	fatal ("Register '%c' is unknown", ch);
	    }

	  if (regs_allocated[regno])
	    fatal ("Register '%c' already specified in allocation order", ch);

	  regs_allocated[regno] = 1;
	}
    }

  if (ix86_arch_string == 0)
    {
      ix86_arch_string = PROCESSOR_PENTIUM_STRING;
      if (ix86_cpu_string == 0)
	ix86_cpu_string = PROCESSOR_DEFAULT_STRING;
    }
  
  for (i = 0; i < ptt_size; i++)
    if (! strcmp (ix86_arch_string, processor_target_table[i].name))
      {
	ix86_arch = processor_target_table[i].processor;
	if (ix86_cpu_string == 0)
	  ix86_cpu_string = processor_target_table[i].name;
	break;
      }

  if (i == ptt_size)
    {
      error ("bad value (%s) for -march= switch", ix86_arch_string);
      ix86_arch_string = PROCESSOR_PENTIUM_STRING;
      ix86_arch = PROCESSOR_DEFAULT;
    }

  if (ix86_cpu_string == 0)
    ix86_cpu_string = PROCESSOR_DEFAULT_STRING;

  for (j = 0; j < ptt_size; j++)
    if (! strcmp (ix86_cpu_string, processor_target_table[j].name))
      {
	ix86_cpu = processor_target_table[j].processor;
	ix86_cost = processor_target_table[j].cost;
	if (i > j && (int) ix86_arch >= (int) PROCESSOR_PENTIUMPRO)
	  error ("-mcpu=%s does not support -march=%s",
		 ix86_cpu_string, ix86_arch_string);

	target_flags |= processor_target_table[j].target_enable;
	target_flags &= ~processor_target_table[j].target_disable;
	break;
      }

  if (j == ptt_size)
    {
      error ("bad value (%s) for -mcpu= switch", ix86_cpu_string);
      ix86_cpu_string = PROCESSOR_DEFAULT_STRING;
      ix86_cpu = PROCESSOR_DEFAULT;
    }

  /* Validate -mregparm= value. */
  if (i386_regparm_string)
    {
      i386_regparm = atoi (i386_regparm_string);
      if (i386_regparm < 0 || i386_regparm > REGPARM_MAX)
	fatal ("-mregparm=%d is not between 0 and %d",
	       i386_regparm, REGPARM_MAX);
    }

  /* The 486 suffers more from non-aligned cache line fills, and the
     larger code size results in a larger cache foot-print and more misses.
     The 486 has a 16 byte cache line, pentium and pentiumpro have a 32 byte
     cache line.  */
  def_align = (TARGET_486) ? 4 : 2;

  /* Validate -malign-loops= value, or provide default.  */
  if (i386_align_loops_string)
    {
      i386_align_loops = atoi (i386_align_loops_string);
      if (i386_align_loops < 0 || i386_align_loops > MAX_CODE_ALIGN)
	fatal ("-malign-loops=%d is not between 0 and %d",
	       i386_align_loops, MAX_CODE_ALIGN);
    }
  else
    i386_align_loops = 2;

  /* Validate -malign-jumps= value, or provide default.  */
  if (i386_align_jumps_string)
    {
      i386_align_jumps = atoi (i386_align_jumps_string);
      if (i386_align_jumps < 0 || i386_align_jumps > MAX_CODE_ALIGN)
	fatal ("-malign-jumps=%d is not between 0 and %d",
	       i386_align_jumps, MAX_CODE_ALIGN);
    }
  else
    i386_align_jumps = def_align;

  /* Validate -malign-functions= value, or provide default. */
  if (i386_align_funcs_string)
    {
      i386_align_funcs = atoi (i386_align_funcs_string);
      if (i386_align_funcs < 0 || i386_align_funcs > MAX_CODE_ALIGN)
	fatal ("-malign-functions=%d is not between 0 and %d",
	       i386_align_funcs, MAX_CODE_ALIGN);
    }
  else
    i386_align_funcs = def_align;

  /* Validate -mbranch-cost= value, or provide default. */
  if (i386_branch_cost_string)
    {
      i386_branch_cost = atoi (i386_branch_cost_string);
      if (i386_branch_cost < 0 || i386_branch_cost > 5)
	fatal ("-mbranch-cost=%d is not between 0 and 5",
	       i386_branch_cost);
    }
  else
    i386_branch_cost = 1;

  /* Keep nonleaf frame pointers.  */
  if (TARGET_OMIT_LEAF_FRAME_POINTER)
    flag_omit_frame_pointer = 1;
}

/* A C statement (sans semicolon) to choose the order in which to
   allocate hard registers for pseudo-registers local to a basic
   block.

   Store the desired register order in the array `reg_alloc_order'.
   Element 0 should be the register to allocate first; element 1, the
   next register; and so on.

   The macro body should not assume anything about the contents of
   `reg_alloc_order' before execution of the macro.

   On most machines, it is not necessary to define this macro.  */

void
order_regs_for_local_alloc ()
{
  int i, ch, order, regno;

  /* User specified the register allocation order.  */

  if (i386_reg_alloc_order)
    {
      for (i = order = 0; (ch = i386_reg_alloc_order[i]) != '\0'; i++)
	{
	  switch (ch)
	    {
	    case 'a':	regno = 0;	break;
	    case 'd':	regno = 1;	break;
	    case 'c':	regno = 2;	break;
	    case 'b':	regno = 3;	break;
	    case 'S':	regno = 4;	break;
	    case 'D':	regno = 5;	break;
	    case 'B':	regno = 6;	break;
	    }

	  reg_alloc_order[order++] = regno;
	}

      for (i = 0; i < FIRST_PSEUDO_REGISTER; i++)
	{
	  if (! regs_allocated[i])
	    reg_alloc_order[order++] = i;
	}
    }

  /* If user did not specify a register allocation order, use natural order. */
  else
    {
      for (i = 0; i < FIRST_PSEUDO_REGISTER; i++)
	reg_alloc_order[i] = i;
    }
}

void
optimization_options (level)
     int level;
{
  /* For -O2 and beyond, turn off -fschedule-insns by default.  It tends to
     make the problem with not enough registers even worse.  */
#ifdef INSN_SCHEDULING
  if (level > 1)
    flag_schedule_insns = 0;
#endif
}

/* Sign-extend a 16-bit constant */

struct rtx_def *
i386_sext16_if_const (op)
     struct rtx_def *op;
{
  if (GET_CODE (op) == CONST_INT)
    {
      HOST_WIDE_INT val = INTVAL (op);
      HOST_WIDE_INT sext_val;
      if (val & 0x8000)
	sext_val = val | ~0xffff;
      else
	sext_val = val & 0xffff;
      if (sext_val != val)
	op = GEN_INT (sext_val);
    }
  return op;
}

/* Return nonzero if the rtx is aligned */

static int
i386_aligned_reg_p (regno)
     int regno;
{
  return (regno == STACK_POINTER_REGNUM
	  || (! flag_omit_frame_pointer && regno == FRAME_POINTER_REGNUM));
}

int
i386_aligned_p (op)
     rtx op;
{
  /* Registers and immediate operands are always "aligned". */
  if (GET_CODE (op) != MEM)
    return 1;

  /* Don't even try to do any aligned optimizations with volatiles. */
  if (MEM_VOLATILE_P (op))
    return 0;

  /* Get address of memory operand. */
  op = XEXP (op, 0);

  switch (GET_CODE (op))
    {
    case CONST_INT:
      if (INTVAL (op) & 3)
	break;
      return 1;

      /* Match "reg + offset" */
    case PLUS:
      if (GET_CODE (XEXP (op, 1)) != CONST_INT)
	break;
      if (INTVAL (XEXP (op, 1)) & 3)
	break;

      op = XEXP (op, 0);
      if (GET_CODE (op) != REG)
	break;

      /* ... fall through ... */

    case REG:
      return i386_aligned_reg_p (REGNO (op));
    }

  return 0;
}

/* Return nonzero if INSN looks like it won't compute useful cc bits
   as a side effect.  This information is only a hint. */

int
i386_cc_probably_useless_p (insn)
     rtx insn;
{
  return ! next_cc0_user (insn);
}

/* Return nonzero if IDENTIFIER with arguments ARGS is a valid machine specific
   attribute for DECL.  The attributes in ATTRIBUTES have previously been
   assigned to DECL.  */

int
i386_valid_decl_attribute_p (decl, attributes, identifier, args)
     tree decl;
     tree attributes;
     tree identifier;
     tree args;
{
  return 0;
}

/* Return nonzero if IDENTIFIER with arguments ARGS is a valid machine specific
   attribute for TYPE.  The attributes in ATTRIBUTES have previously been
   assigned to TYPE.  */

int
i386_valid_type_attribute_p (type, attributes, identifier, args)
     tree type;
     tree attributes;
     tree identifier;
     tree args;
{
  if (TREE_CODE (type) != FUNCTION_TYPE
      && TREE_CODE (type) != FIELD_DECL
      && TREE_CODE (type) != TYPE_DECL)
    return 0;

  /* Stdcall attribute says callee is responsible for popping arguments
     if they are not variable.  */
  if (is_attribute_p ("stdcall", identifier))
    return (args == NULL_TREE);

  /* Cdecl attribute says the callee is a normal C declaration. */
  if (is_attribute_p ("cdecl", identifier))
    return (args == NULL_TREE);

  /* Regparm attribute specifies how many integer arguments are to be
     passed in registers. */
  if (is_attribute_p ("regparm", identifier))
    {
      tree cst;

      if (! args || TREE_CODE (args) != TREE_LIST
	  || TREE_CHAIN (args) != NULL_TREE
	  || TREE_VALUE (args) == NULL_TREE)
	return 0;

      cst = TREE_VALUE (args);
      if (TREE_CODE (cst) != INTEGER_CST)
	return 0;

      if (TREE_INT_CST_HIGH (cst) != 0
	  || TREE_INT_CST_LOW (cst) < 0
	  || TREE_INT_CST_LOW (cst) > REGPARM_MAX)
	return 0;

      return 1;
    }

  return 0;
}

/* Return 0 if the attributes for two types are incompatible, 1 if they
   are compatible, and 2 if they are nearly compatible (which causes a
   warning to be generated).  */

int
i386_comp_type_attributes (type1, type2)
     tree type1;
     tree type2;
{
  return 1;
}


/* Value is the number of bytes of arguments automatically
   popped when returning from a subroutine call.
   FUNDECL is the declaration node of the function (as a tree),
   FUNTYPE is the data type of the function (as a tree),
   or for a library call it is an identifier node for the subroutine name.
   SIZE is the number of bytes of arguments passed on the stack.

   On the 80386, the RTD insn may be used to pop them if the number
     of args is fixed, but if the number is variable then the caller
     must pop them all.  RTD can't be used for library calls now
     because the library is compiled with the Unix compiler.
   Use of RTD is a selectable option, since it is incompatible with
   standard Unix calling sequences.  If the option is not selected,
   the caller must always pop the args.

   The attribute stdcall is equivalent to RTD on a per module basis.  */

int
i386_return_pops_args (fundecl, funtype, size)
     tree fundecl;
     tree funtype;
     int size;
{ 
  int rtd = TARGET_RTD && (!fundecl || TREE_CODE (fundecl) != IDENTIFIER_NODE);

    /* Cdecl functions override -mrtd, and never pop the stack. */
  if (! lookup_attribute ("cdecl", TYPE_ATTRIBUTES (funtype))) {
  
    /* Stdcall functions will pop the stack if not variable args. */
    if (lookup_attribute ("stdcall", TYPE_ATTRIBUTES (funtype)))
      rtd = 1;
  
    if (rtd
        && (TYPE_ARG_TYPES (funtype) == NULL_TREE
	    || (TREE_VALUE (tree_last (TYPE_ARG_TYPES (funtype)))
		== void_type_node)))
      return size;
  }
  
  /* Lose any fake structure return argument.  */
  if (aggregate_value_p (TREE_TYPE (funtype)))
    return GET_MODE_SIZE (Pmode);
  
    return 0;
}


/* Argument support functions.  */

/* Initialize a variable CUM of type CUMULATIVE_ARGS
   for a call to a function whose data type is FNTYPE.
   For a library call, FNTYPE is 0.  */

void
init_cumulative_args (cum, fntype, libname)
     CUMULATIVE_ARGS *cum;	/* Argument info to initialize */
     tree fntype;		/* tree ptr for function decl */
     rtx libname;		/* SYMBOL_REF of library name or 0 */
{
  static CUMULATIVE_ARGS zero_cum;
  tree param, next_param;

  if (TARGET_DEBUG_ARG)
    {
      fprintf (stderr, "\ninit_cumulative_args (");
      if (fntype)
	fprintf (stderr, "fntype code = %s, ret code = %s",
		 tree_code_name[(int) TREE_CODE (fntype)],
		 tree_code_name[(int) TREE_CODE (TREE_TYPE (fntype))]);
      else
	fprintf (stderr, "no fntype");

      if (libname)
	fprintf (stderr, ", libname = %s", XSTR (libname, 0));
    }

  *cum = zero_cum;

  /* Set up the number of registers to use for passing arguments.  */
  cum->nregs = i386_regparm;
  if (fntype)
    {
      tree attr = lookup_attribute ("regparm", TYPE_ATTRIBUTES (fntype));

      if (attr)
	cum->nregs = TREE_INT_CST_LOW (TREE_VALUE (TREE_VALUE (attr)));
    }

  /* Determine if this function has variable arguments.  This is
     indicated by the last argument being 'void_type_mode' if there
     are no variable arguments.  If there are variable arguments, then
     we won't pass anything in registers */

  if (cum->nregs)
    {
      for (param = (fntype) ? TYPE_ARG_TYPES (fntype) : 0;
	   param != 0; param = next_param)
	{
	  next_param = TREE_CHAIN (param);
	  if (next_param == 0 && TREE_VALUE (param) != void_type_node)
	    cum->nregs = 0;
	}
    }

  if (TARGET_DEBUG_ARG)
    fprintf (stderr, ", nregs=%d )\n", cum->nregs);

  return;
}

/* Update the data in CUM to advance over an argument
   of mode MODE and data type TYPE.
   (TYPE is null for libcalls where that information may not be available.)  */

void
function_arg_advance (cum, mode, type, named)
     CUMULATIVE_ARGS *cum;	/* current arg information */
     enum machine_mode mode;	/* current arg mode */
     tree type;			/* type of the argument or 0 if lib support */
     int named;			/* whether or not the argument was named */
{
  int bytes
    = (mode == BLKmode) ? int_size_in_bytes (type) : GET_MODE_SIZE (mode);
  int words = (bytes + UNITS_PER_WORD - 1) / UNITS_PER_WORD;

  if (TARGET_DEBUG_ARG)
    fprintf (stderr,
	     "function_adv (sz=%d, wds=%2d, nregs=%d, mode=%s, named=%d)\n\n",
	     words, cum->words, cum->nregs, GET_MODE_NAME (mode), named);

  cum->words += words;
  cum->nregs -= words;
  cum->regno += words;

  if (cum->nregs <= 0)
    {
      cum->nregs = 0;
      cum->regno = 0;
    }

  return;
}

/* Define where to put the arguments to a function.
   Value is zero to push the argument on the stack,
   or a hard register in which to store the argument.

   MODE is the argument's machine mode.
   TYPE is the data type of the argument (as a tree).
    This is null for libcalls where that information may
    not be available.
   CUM is a variable of type CUMULATIVE_ARGS which gives info about
    the preceding args and about the function being called.
   NAMED is nonzero if this argument is a named parameter
    (otherwise it is an extra parameter matching an ellipsis).  */

struct rtx_def *
function_arg (cum, mode, type, named)
     CUMULATIVE_ARGS *cum;	/* current arg information */
     enum machine_mode mode;	/* current arg mode */
     tree type;			/* type of the argument or 0 if lib support */
     int named;			/* != 0 for normal args, == 0 for ... args */
{
  rtx ret   = NULL_RTX;
  int bytes
    = (mode == BLKmode) ? int_size_in_bytes (type) : GET_MODE_SIZE (mode);
  int words = (bytes + UNITS_PER_WORD - 1) / UNITS_PER_WORD;

  switch (mode)
    {
      /* For now, pass fp/complex values on the stack. */
    default:
      break;

    case BLKmode:
    case DImode:
    case SImode:
    case HImode:
    case QImode:
      if (words <= cum->nregs)
	ret = gen_rtx (REG, mode, cum->regno);
      break;
    }

  if (TARGET_DEBUG_ARG)
    {
      fprintf (stderr,
	       "function_arg (size=%d, wds=%2d, nregs=%d, mode=%4s, named=%d",
	       words, cum->words, cum->nregs, GET_MODE_NAME (mode), named);

      if (ret)
	fprintf (stderr, ", reg=%%e%s", reg_names[ REGNO(ret) ]);
      else
	fprintf (stderr, ", stack");

      fprintf (stderr, " )\n");
    }

  return ret;
}

/* For an arg passed partly in registers and partly in memory,
   this is the number of registers used.
   For args passed entirely in registers or entirely in memory, zero.  */

int
function_arg_partial_nregs (cum, mode, type, named)
     CUMULATIVE_ARGS *cum;	/* current arg information */
     enum machine_mode mode;	/* current arg mode */
     tree type;			/* type of the argument or 0 if lib support */
     int named;			/* != 0 for normal args, == 0 for ... args */
{
  return 0;
}

/* Output an insn whose source is a 386 integer register.  SRC is the
   rtx for the register, and TEMPLATE is the op-code template.  SRC may
   be either SImode or DImode.

   The template will be output with operands[0] as SRC, and operands[1]
   as a pointer to the top of the 386 stack.  So a call from floatsidf2
   would look like this:

      output_op_from_reg (operands[1], AS1 (fild%z0,%1));

   where %z0 corresponds to the caller's operands[1], and is used to
   emit the proper size suffix.

   ??? Extend this to handle HImode - a 387 can load and store HImode
   values directly. */

void
output_op_from_reg (src, template)
     rtx src;
     char *template;
{
  rtx xops[4];
  int size = GET_MODE_SIZE (GET_MODE (src));

  xops[0] = src;
  xops[1] = AT_SP (Pmode);
  xops[2] = GEN_INT (size);
  xops[3] = stack_pointer_rtx;

  if (size > UNITS_PER_WORD)
    {
      rtx high;

      if (size > 2 * UNITS_PER_WORD)
	{
	  high = gen_rtx (REG, SImode, REGNO (src) + 2);
	  output_asm_insn (AS1 (push%L0,%0), &high);
	}

      high = gen_rtx (REG, SImode, REGNO (src) + 1);
      output_asm_insn (AS1 (push%L0,%0), &high);
    }

  output_asm_insn (AS1 (push%L0,%0), &src);
  output_asm_insn (template, xops);
  output_asm_insn (AS2 (add%L3,%2,%3), xops);
}

/* Output an insn to pop an value from the 387 top-of-stack to 386
   register DEST. The 387 register stack is popped if DIES is true.  If
   the mode of DEST is an integer mode, a `fist' integer store is done,
   otherwise a `fst' float store is done. */

void
output_to_reg (dest, dies, scratch_mem)
     rtx dest;
     int dies;
     rtx scratch_mem;
{
  rtx xops[4];
  int size = GET_MODE_SIZE (GET_MODE (dest));

  if (! scratch_mem)
    xops[0] = AT_SP (Pmode);
  else
    xops[0] = scratch_mem;

  xops[1] = stack_pointer_rtx;
  xops[2] = GEN_INT (size);
  xops[3] = dest;

  if (! scratch_mem)
    output_asm_insn (AS2 (sub%L1,%2,%1), xops);

  if (GET_MODE_CLASS (GET_MODE (dest)) == MODE_INT)
    {
      if (dies)
	output_asm_insn (AS1 (fistp%z3,%y0), xops);
      else
	output_asm_insn (AS1 (fist%z3,%y0), xops);
    }

  else if (GET_MODE_CLASS (GET_MODE (dest)) == MODE_FLOAT)
    {
      if (dies)
	output_asm_insn (AS1 (fstp%z3,%y0), xops);
      else
	{
	  if (GET_MODE (dest) == XFmode)
	    {
	      output_asm_insn (AS1 (fstp%z3,%y0), xops);
	      output_asm_insn (AS1 (fld%z3,%y0), xops);
	    }
	  else
	    output_asm_insn (AS1 (fst%z3,%y0), xops);
	}
    }

  else
    abort ();

  if (! scratch_mem)
    output_asm_insn (AS1 (pop%L0,%0), &dest);
  else
    output_asm_insn (AS2 (mov%L0,%0,%3), xops);


  if (size > UNITS_PER_WORD)
    {
      dest = gen_rtx (REG, SImode, REGNO (dest) + 1);
      if (! scratch_mem)
	output_asm_insn (AS1 (pop%L0,%0), &dest);
      else
	{
	  xops[0] = adj_offsettable_operand (xops[0], 4);	      
	  xops[3] = dest;
	  output_asm_insn (AS2 (mov%L0,%0,%3), xops);
	}

      if (size > 2 * UNITS_PER_WORD)
	{
	  dest = gen_rtx (REG, SImode, REGNO (dest) + 1);
	  if (! scratch_mem)
	    output_asm_insn (AS1 (pop%L0,%0), &dest);
	  else
	    {
	      xops[0] = adj_offsettable_operand (xops[0], 4);	      
	      output_asm_insn (AS2 (mov%L0,%0,%3), xops);
	    }
	}
    }
}

char *
singlemove_string (operands)
     rtx *operands;
{
  rtx x;
  if (GET_CODE (operands[0]) == MEM
      && GET_CODE (x = XEXP (operands[0], 0)) == PRE_DEC)
    {
      if (XEXP (x, 0) != stack_pointer_rtx)
	abort ();
      return "push%L1 %1";
    }
  else if (GET_CODE (operands[1]) == CONST_DOUBLE)
    return output_move_const_single (operands);
  else if (GET_CODE (operands[0]) == REG || GET_CODE (operands[1]) == REG)
    return AS2 (mov%L0,%1,%0);
  else if (CONSTANT_P (operands[1]))
    return AS2 (mov%L0,%1,%0);
  else
    {
      output_asm_insn ("push%L1 %1", operands);
      return "pop%L0 %0";
    }
}

/* Return a REG that occurs in ADDR with coefficient 1.
   ADDR can be effectively incremented by incrementing REG.  */

static rtx
find_addr_reg (addr)
     rtx addr;
{
  while (GET_CODE (addr) == PLUS)
    {
      if (GET_CODE (XEXP (addr, 0)) == REG)
	addr = XEXP (addr, 0);
      else if (GET_CODE (XEXP (addr, 1)) == REG)
	addr = XEXP (addr, 1);
      else if (CONSTANT_P (XEXP (addr, 0)))
	addr = XEXP (addr, 1);
      else if (CONSTANT_P (XEXP (addr, 1)))
	addr = XEXP (addr, 0);
      else
	abort ();
    }

  if (GET_CODE (addr) == REG)
    return addr;
  abort ();
}

/* Output an insn to add the constant N to the register X.  */

static void
asm_add (n, x)
     int n;
     rtx x;
{
  rtx xops[2];
  xops[0] = x;

  if (n == -1)
    output_asm_insn (AS1 (dec%L0,%0), xops);
  else if (n == 1)
    output_asm_insn (AS1 (inc%L0,%0), xops);
  else if (n < 0 || n == 128)
    {
      xops[1] = GEN_INT (-n);
      output_asm_insn (AS2 (sub%L0,%1,%0), xops);
    }
  else if (n > 0)
    {
      xops[1] = GEN_INT (n);
      output_asm_insn (AS2 (add%L0,%1,%0), xops);
    }
}

/* Output assembler code to perform a doubleword move insn
   with operands OPERANDS.  */

char *
output_move_double (operands)
     rtx *operands;
{
  enum {REGOP, OFFSOP, MEMOP, PUSHOP, POPOP, CNSTOP, RNDOP } optype0, optype1;
  rtx latehalf[2];
  rtx middlehalf[2];
  rtx xops[2];
  rtx addreg0 = 0, addreg1 = 0;
  int dest_overlapped_low = 0;
  int size = GET_MODE_SIZE (GET_MODE (operands[0]));

  middlehalf[0] = 0;
  middlehalf[1] = 0;

  /* First classify both operands.  */

  if (REG_P (operands[0]))
    optype0 = REGOP;
  else if (offsettable_memref_p (operands[0]))
    optype0 = OFFSOP;
  else if (GET_CODE (XEXP (operands[0], 0)) == POST_INC)
    optype0 = POPOP;
  else if (GET_CODE (XEXP (operands[0], 0)) == PRE_DEC)
    optype0 = PUSHOP;
  else if (GET_CODE (operands[0]) == MEM)
    optype0 = MEMOP;
  else
    optype0 = RNDOP;

  if (REG_P (operands[1]))
    optype1 = REGOP;
  else if (CONSTANT_P (operands[1]))
    optype1 = CNSTOP;
  else if (offsettable_memref_p (operands[1]))
    optype1 = OFFSOP;
  else if (GET_CODE (XEXP (operands[1], 0)) == POST_INC)
    optype1 = POPOP;
  else if (GET_CODE (XEXP (operands[1], 0)) == PRE_DEC)
    optype1 = PUSHOP;
  else if (GET_CODE (operands[1]) == MEM)
    optype1 = MEMOP;
  else
    optype1 = RNDOP;

  /* Check for the cases that the operand constraints are not
     supposed to allow to happen.  Abort if we get one,
     because generating code for these cases is painful.  */

  if (optype0 == RNDOP || optype1 == RNDOP)
    abort ();

  /* If one operand is decrementing and one is incrementing
     decrement the former register explicitly
     and change that operand into ordinary indexing.  */

  if (optype0 == PUSHOP && optype1 == POPOP)
    {
      /* ??? Can this ever happen on i386? */
      operands[0] = XEXP (XEXP (operands[0], 0), 0);
      asm_add (-size, operands[0]);
      if (GET_MODE (operands[1]) == XFmode)
        operands[0] = gen_rtx (MEM, XFmode, operands[0]);
      else if (GET_MODE (operands[0]) == DFmode)
        operands[0] = gen_rtx (MEM, DFmode, operands[0]);
      else
        operands[0] = gen_rtx (MEM, DImode, operands[0]);
      optype0 = OFFSOP;
    }

  if (optype0 == POPOP && optype1 == PUSHOP)
    {
      /* ??? Can this ever happen on i386? */
      operands[1] = XEXP (XEXP (operands[1], 0), 0);
      asm_add (-size, operands[1]);
      if (GET_MODE (operands[1]) == XFmode)
        operands[1] = gen_rtx (MEM, XFmode, operands[1]);
      else if (GET_MODE (operands[1]) == DFmode)
        operands[1] = gen_rtx (MEM, DFmode, operands[1]);
      else
        operands[1] = gen_rtx (MEM, DImode, operands[1]);
      optype1 = OFFSOP;
    }

  /* If an operand is an unoffsettable memory ref, find a register
     we can increment temporarily to make it refer to the second word.  */

  if (optype0 == MEMOP)
    addreg0 = find_addr_reg (XEXP (operands[0], 0));

  if (optype1 == MEMOP)
    addreg1 = find_addr_reg (XEXP (operands[1], 0));

  /* Ok, we can do one word at a time.
     Normally we do the low-numbered word first,
     but if either operand is autodecrementing then we
     do the high-numbered word first.

     In either case, set up in LATEHALF the operands to use
     for the high-numbered word and in some cases alter the
     operands in OPERANDS to be suitable for the low-numbered word.  */

  if (size == 12)
    {
      if (optype0 == REGOP)
	{
	  middlehalf[0] = gen_rtx (REG, SImode, REGNO (operands[0]) + 1);
	  latehalf[0] = gen_rtx (REG, SImode, REGNO (operands[0]) + 2);
	}
      else if (optype0 == OFFSOP)
	{
	  middlehalf[0] = adj_offsettable_operand (operands[0], 4);
	  latehalf[0] = adj_offsettable_operand (operands[0], 8);
	}
      else
	{
         middlehalf[0] = operands[0];
         latehalf[0] = operands[0];
	}
    
      if (optype1 == REGOP)
	{
          middlehalf[1] = gen_rtx (REG, SImode, REGNO (operands[1]) + 1);
          latehalf[1] = gen_rtx (REG, SImode, REGNO (operands[1]) + 2);
	}
      else if (optype1 == OFFSOP)
	{
          middlehalf[1] = adj_offsettable_operand (operands[1], 4);
          latehalf[1] = adj_offsettable_operand (operands[1], 8);
	}
      else if (optype1 == CNSTOP)
	{
	  if (GET_CODE (operands[1]) == CONST_DOUBLE)
	    {
	      REAL_VALUE_TYPE r; long l[3];

	      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	      REAL_VALUE_TO_TARGET_LONG_DOUBLE (r, l);
	      operands[1] = GEN_INT (l[0]);
	      middlehalf[1] = GEN_INT (l[1]);
	      latehalf[1] = GEN_INT (l[2]);
	    }
	  else if (CONSTANT_P (operands[1]))
	    /* No non-CONST_DOUBLE constant should ever appear here.  */
	    abort ();
        }
      else
	{
	  middlehalf[1] = operands[1];
	  latehalf[1] = operands[1];
	}
    }

  else
    {
      /* Size is not 12. */

      if (optype0 == REGOP)
	latehalf[0] = gen_rtx (REG, SImode, REGNO (operands[0]) + 1);
      else if (optype0 == OFFSOP)
	latehalf[0] = adj_offsettable_operand (operands[0], 4);
      else
	latehalf[0] = operands[0];

      if (optype1 == REGOP)
	latehalf[1] = gen_rtx (REG, SImode, REGNO (operands[1]) + 1);
      else if (optype1 == OFFSOP)
	latehalf[1] = adj_offsettable_operand (operands[1], 4);
      else if (optype1 == CNSTOP)
	split_double (operands[1], &operands[1], &latehalf[1]);
      else
	latehalf[1] = operands[1];
    }

  /* If insn is effectively movd N (sp),-(sp) then we will do the
     high word first.  We should use the adjusted operand 1
     (which is N+4 (sp) or N+8 (sp))
     for the low word and middle word as well,
     to compensate for the first decrement of sp.  */
  if (optype0 == PUSHOP
      && REGNO (XEXP (XEXP (operands[0], 0), 0)) == STACK_POINTER_REGNUM
      && reg_overlap_mentioned_p (stack_pointer_rtx, operands[1]))
    middlehalf[1] = operands[1] = latehalf[1];

  /* For (set (reg:DI N) (mem:DI ... (reg:SI N) ...)),
     if the upper part of reg N does not appear in the MEM, arrange to
     emit the move late-half first.  Otherwise, compute the MEM address
     into the upper part of N and use that as a pointer to the memory
     operand.  */
  if (optype0 == REGOP
      && (optype1 == OFFSOP || optype1 == MEMOP))
    {
      if (reg_mentioned_p (operands[0], XEXP (operands[1], 0))
	  && reg_mentioned_p (latehalf[0], XEXP (operands[1], 0)))
	{
	  /* If both halves of dest are used in the src memory address,
	     compute the address into latehalf of dest.  */
	compadr:
	  xops[0] = latehalf[0];
	  xops[1] = XEXP (operands[1], 0);
	  output_asm_insn (AS2 (lea%L0,%a1,%0), xops);
	  if (GET_MODE (operands[1]) == XFmode)
	    {
	      operands[1] = gen_rtx (MEM, XFmode, latehalf[0]);
	      middlehalf[1] = adj_offsettable_operand (operands[1], size-8);
	      latehalf[1] = adj_offsettable_operand (operands[1], size-4);
	    }
	  else
	    {
	      operands[1] = gen_rtx (MEM, DImode, latehalf[0]);
	      latehalf[1] = adj_offsettable_operand (operands[1], size-4);
	    }
	}

      else if (size == 12
		 && reg_mentioned_p (middlehalf[0], XEXP (operands[1], 0)))
	{
	  /* Check for two regs used by both source and dest. */
	  if (reg_mentioned_p (operands[0], XEXP (operands[1], 0))
		|| reg_mentioned_p (latehalf[0], XEXP (operands[1], 0)))
	    goto compadr;

	  /* JRV says this can't happen: */
	  if (addreg0 || addreg1)
	      abort ();

	  /* Only the middle reg conflicts; simply put it last. */
	  output_asm_insn (singlemove_string (operands), operands);
	  output_asm_insn (singlemove_string (latehalf), latehalf);
	  output_asm_insn (singlemove_string (middlehalf), middlehalf);
	  return "";
	}

      else if (reg_mentioned_p (operands[0], XEXP (operands[1], 0)))
	/* If the low half of dest is mentioned in the source memory
	   address, the arrange to emit the move late half first.  */
	dest_overlapped_low = 1;
    }

  /* If one or both operands autodecrementing,
     do the two words, high-numbered first.  */

  /* Likewise,  the first move would clobber the source of the second one,
     do them in the other order.  This happens only for registers;
     such overlap can't happen in memory unless the user explicitly
     sets it up, and that is an undefined circumstance.  */

#if 0
  if (optype0 == PUSHOP || optype1 == PUSHOP
      || (optype0 == REGOP && optype1 == REGOP
	  && REGNO (operands[0]) == REGNO (latehalf[1]))
      || dest_overlapped_low)
#endif

  if (optype0 == PUSHOP || optype1 == PUSHOP
      || (optype0 == REGOP && optype1 == REGOP
	  && ((middlehalf[1] && REGNO (operands[0]) == REGNO (middlehalf[1]))
	      || REGNO (operands[0]) == REGNO (latehalf[1])))
      || dest_overlapped_low)
    {
      /* Make any unoffsettable addresses point at high-numbered word.  */
      if (addreg0)
	asm_add (size-4, addreg0);
      if (addreg1)
	asm_add (size-4, addreg1);

      /* Do that word.  */
      output_asm_insn (singlemove_string (latehalf), latehalf);

      /* Undo the adds we just did.  */
      if (addreg0)
	asm_add (-4, addreg0);
      if (addreg1)
	asm_add (-4, addreg1);

      if (size == 12)
        {
	  output_asm_insn (singlemove_string (middlehalf), middlehalf);
	  if (addreg0)
	    asm_add (-4, addreg0);
	  if (addreg1)
	    asm_add (-4, addreg1);
	}

      /* Do low-numbered word.  */
      return singlemove_string (operands);
    }

  /* Normal case: do the two words, low-numbered first.  */

  output_asm_insn (singlemove_string (operands), operands);

  /* Do the middle one of the three words for long double */
  if (size == 12)
    {
      if (addreg0)
        asm_add (4, addreg0);
      if (addreg1)
        asm_add (4, addreg1);

      output_asm_insn (singlemove_string (middlehalf), middlehalf);
    }

  /* Make any unoffsettable addresses point at high-numbered word.  */
  if (addreg0)
    asm_add (4, addreg0);
  if (addreg1)
    asm_add (4, addreg1);

  /* Do that word.  */
  output_asm_insn (singlemove_string (latehalf), latehalf);

  /* Undo the adds we just did.  */
  if (addreg0)
    asm_add (4-size, addreg0);
  if (addreg1)
    asm_add (4-size, addreg1);

  return "";
}

#define MAX_TMPS 2		/* max temporary registers used */

/* Output the appropriate code to move push memory on the stack */

char *
output_move_pushmem (operands, insn, length, tmp_start, n_operands)
     rtx operands[];
     rtx insn;
     int length;
     int tmp_start;
     int n_operands;
{
  struct
    {
      char *load;
      char *push;
      rtx   xops[2];
    } tmp_info[MAX_TMPS];
  
  rtx src = operands[1];
  int max_tmps = 0;
  int offset = 0;
  int stack_p = reg_overlap_mentioned_p (stack_pointer_rtx, src);
  int stack_offset = 0;
  int i, num_tmps;
  rtx xops[1];

  if (! offsettable_memref_p (src))
    fatal_insn ("Source is not offsettable", insn);

  if ((length & 3) != 0)
    fatal_insn ("Pushing non-word aligned size", insn);

  /* Figure out which temporary registers we have available */
  for (i = tmp_start; i < n_operands; i++)
    {
      if (GET_CODE (operands[i]) == REG)
	{
	  if (reg_overlap_mentioned_p (operands[i], src))
	    continue;

	  tmp_info[ max_tmps++ ].xops[1] = operands[i];
	  if (max_tmps == MAX_TMPS)
	    break;
	}
    }

  if (max_tmps == 0)
    for (offset = length - 4; offset >= 0; offset -= 4)
      {
	xops[0] = adj_offsettable_operand (src, offset + stack_offset);
	output_asm_insn (AS1(push%L0,%0), xops);
	if (stack_p)
	  stack_offset += 4;
      }

  else
    for (offset = length - 4; offset >= 0; )
      {
	for (num_tmps = 0; num_tmps < max_tmps && offset >= 0; num_tmps++)
	  {
	    tmp_info[num_tmps].load    = AS2(mov%L0,%0,%1);
	    tmp_info[num_tmps].push    = AS1(push%L0,%1);
	    tmp_info[num_tmps].xops[0]
	      = adj_offsettable_operand (src, offset + stack_offset);
	    offset -= 4;
	  }

	for (i = 0; i < num_tmps; i++)
	  output_asm_insn (tmp_info[i].load, tmp_info[i].xops);

	for (i = 0; i < num_tmps; i++)
	  output_asm_insn (tmp_info[i].push, tmp_info[i].xops);

	if (stack_p)
	  stack_offset += 4*num_tmps;
      }

  return "";
}

/* Output the appropriate code to move data between two memory locations */

char *
output_move_memory (operands, insn, length, tmp_start, n_operands)
     rtx operands[];
     rtx insn;
     int length;
     int tmp_start;
     int n_operands;
{
  struct
    {
      char *load;
      char *store;
      rtx   xops[3];
    } tmp_info[MAX_TMPS];

  rtx dest = operands[0];
  rtx src  = operands[1];
  rtx qi_tmp = NULL_RTX;
  int max_tmps = 0;
  int offset = 0;
  int i, num_tmps;
  rtx xops[3];

  if (GET_CODE (dest) == MEM
      && GET_CODE (XEXP (dest, 0)) == PRE_INC
      && XEXP (XEXP (dest, 0), 0) == stack_pointer_rtx)
    return output_move_pushmem (operands, insn, length, tmp_start, n_operands);

  if (! offsettable_memref_p (src))
    fatal_insn ("Source is not offsettable", insn);

  if (! offsettable_memref_p (dest))
    fatal_insn ("Destination is not offsettable", insn);

  /* Figure out which temporary registers we have available */
  for (i = tmp_start; i < n_operands; i++)
    {
      if (GET_CODE (operands[i]) == REG)
	{
	  if ((length & 1) != 0 && qi_tmp == 0 && QI_REG_P (operands[i]))
	    qi_tmp = operands[i];

	  if (reg_overlap_mentioned_p (operands[i], dest))
	    fatal_insn ("Temporary register overlaps the destination", insn);

	  if (reg_overlap_mentioned_p (operands[i], src))
	    fatal_insn ("Temporary register overlaps the source", insn);

	  tmp_info[max_tmps++].xops[2] = operands[i];
	  if (max_tmps == MAX_TMPS)
	    break;
	}
    }

  if (max_tmps == 0)
    fatal_insn ("No scratch registers were found to do memory->memory moves",
		insn);

  if ((length & 1) != 0)
    {
      if (qi_tmp == 0)
	fatal_insn ("No byte register found when moving odd # of bytes.",
		    insn);
    }

  while (length > 1)
    {
      for (num_tmps = 0; num_tmps < max_tmps; num_tmps++)
	{
	  if (length >= 4)
	    {
	      tmp_info[num_tmps].load    = AS2(mov%L0,%1,%2);
	      tmp_info[num_tmps].store   = AS2(mov%L0,%2,%0);
	      tmp_info[num_tmps].xops[0]
		= adj_offsettable_operand (dest, offset);
	      tmp_info[num_tmps].xops[1]
		= adj_offsettable_operand (src, offset);

	      offset += 4;
	      length -= 4;
	    }

	  else if (length >= 2)
	    {
	      tmp_info[num_tmps].load    = AS2(mov%W0,%1,%2);
	      tmp_info[num_tmps].store   = AS2(mov%W0,%2,%0);
	      tmp_info[num_tmps].xops[0]
		= adj_offsettable_operand (dest, offset);
	      tmp_info[num_tmps].xops[1]
		= adj_offsettable_operand (src, offset);

	      offset += 2;
	      length -= 2;
	    }
	  else
	    break;
	}

      for (i = 0; i < num_tmps; i++)
	output_asm_insn (tmp_info[i].load, tmp_info[i].xops);

      for (i = 0; i < num_tmps; i++)
	output_asm_insn (tmp_info[i].store, tmp_info[i].xops);
    }

  if (length == 1)
    {
      xops[0] = adj_offsettable_operand (dest, offset);
      xops[1] = adj_offsettable_operand (src, offset);
      xops[2] = qi_tmp;
      output_asm_insn (AS2(mov%B0,%1,%2), xops);
      output_asm_insn (AS2(mov%B0,%2,%0), xops);
    }

  return "";
}

int
standard_80387_constant_p (x)
     rtx x;
{
#if ! defined (REAL_IS_NOT_DOUBLE) || defined (REAL_ARITHMETIC)
  REAL_VALUE_TYPE d;
  jmp_buf handler;
  int is0, is1;

  if (setjmp (handler))
    return 0;

  set_float_handler (handler);
  REAL_VALUE_FROM_CONST_DOUBLE (d, x);
  is0 = REAL_VALUES_EQUAL (d, dconst0) && !REAL_VALUE_MINUS_ZERO (d);
  is1 = REAL_VALUES_EQUAL (d, dconst1);
  set_float_handler (NULL_PTR);

  if (is0)
    return 1;

  if (is1)
    return 2;

  /* Note that on the 80387, other constants, such as pi,
     are much slower to load as standard constants
     than to load from doubles in memory!  */
#endif

  return 0;
}

char *
output_move_const_single (operands)
     rtx *operands;
{
  if (FP_REG_P (operands[0]))
    {
      int conval = standard_80387_constant_p (operands[1]);

      if (conval == 1)
	return "fldz";

      if (conval == 2)
	return "fld1";
    }

  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    {
      REAL_VALUE_TYPE r; long l;

      if (GET_MODE (operands[1]) == XFmode)
	abort ();

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, l);
      operands[1] = GEN_INT (l);
    }

  return singlemove_string (operands);
}

/* Returns 1 if OP is either a symbol reference or a sum of a symbol
   reference and a constant.  */

int
symbolic_operand (op, mode)
     register rtx op;
     enum machine_mode mode;
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
      return 1;

    case CONST:
      op = XEXP (op, 0);
      return ((GET_CODE (XEXP (op, 0)) == SYMBOL_REF
	       || GET_CODE (XEXP (op, 0)) == LABEL_REF)
	      && GET_CODE (XEXP (op, 1)) == CONST_INT);

    default:
      return 0;
    }
}

/* Test for a valid operand for a call instruction.
   Don't allow the arg pointer register or virtual regs
   since they may change into reg + const, which the patterns
   can't handle yet.  */

int
call_insn_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  if (GET_CODE (op) == MEM
      && ((CONSTANT_ADDRESS_P (XEXP (op, 0))
	   /* This makes a difference for PIC.  */
	   && general_operand (XEXP (op, 0), Pmode))
	  || (GET_CODE (XEXP (op, 0)) == REG
	      && XEXP (op, 0) != arg_pointer_rtx
	      && ! (REGNO (XEXP (op, 0)) >= FIRST_PSEUDO_REGISTER
		    && REGNO (XEXP (op, 0)) <= LAST_VIRTUAL_REGISTER))))
    return 1;

  return 0;
}

/* Like call_insn_operand but allow (mem (symbol_ref ...))
   even if pic.  */

int
expander_call_insn_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  if (GET_CODE (op) == MEM
      && (CONSTANT_ADDRESS_P (XEXP (op, 0))
	  || (GET_CODE (XEXP (op, 0)) == REG
	      && XEXP (op, 0) != arg_pointer_rtx
	      && ! (REGNO (XEXP (op, 0)) >= FIRST_PSEUDO_REGISTER
		    && REGNO (XEXP (op, 0)) <= LAST_VIRTUAL_REGISTER))))
    return 1;

  return 0;
}

/* Return 1 if OP is a comparison operator that can use the condition code
   generated by an arithmetic operation. */

int
arithmetic_comparison_operator (op, mode)
     register rtx op;
     enum machine_mode mode;
{
  enum rtx_code code;

  if (mode != VOIDmode && mode != GET_MODE (op))
    return 0;

  code = GET_CODE (op);
  if (GET_RTX_CLASS (code) != '<')
    return 0;

  return (code != GT && code != LE);
}

/* Returns 1 if OP contains a symbol reference */

int
symbolic_reference_mentioned_p (op)
     rtx op;
{
  register char *fmt;
  register int i;

  if (GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF)
    return 1;

  fmt = GET_RTX_FORMAT (GET_CODE (op));
  for (i = GET_RTX_LENGTH (GET_CODE (op)) - 1; i >= 0; i--)
    {
      if (fmt[i] == 'E')
	{
	  register int j;

	  for (j = XVECLEN (op, i) - 1; j >= 0; j--)
	    if (symbolic_reference_mentioned_p (XVECEXP (op, i, j)))
	      return 1;
	}

      else if (fmt[i] == 'e' && symbolic_reference_mentioned_p (XEXP (op, i)))
	return 1;
    }

  return 0;
}

/* Attempt to expand a binary operator.  Make the expansion closer to the
   actual machine, then just general_operand, which will allow 3 separate
   memory references (one output, two input) in a single insn.  Return
   whether the insn fails, or succeeds.  */

int
ix86_expand_binary_operator (code, mode, operands)
     enum rtx_code code;
     enum machine_mode mode;
     rtx operands[];
{
  rtx insn;
  int i;
  int modified;

  /* Recognize <var1> = <value> <op> <var1> for commutative operators */
  if (GET_RTX_CLASS (code) == 'c'
      && (rtx_equal_p (operands[0], operands[2])
	  || immediate_operand (operands[1], mode)))
    {
      rtx temp = operands[1];
      operands[1] = operands[2];
      operands[2] = temp;
    }

  /* If optimizing, copy to regs to improve CSE */
  if (TARGET_PSEUDO && optimize
      && ((reload_in_progress | reload_completed) == 0))
    {
      if (GET_CODE (operands[1]) == MEM
	  && ! rtx_equal_p (operands[0], operands[1]))
	operands[1] = force_reg (GET_MODE (operands[1]), operands[1]);

      if (GET_CODE (operands[2]) == MEM)
	operands[2] = force_reg (GET_MODE (operands[2]), operands[2]);

      if (GET_CODE (operands[1]) == CONST_INT && code == MINUS)
	{
	  rtx temp = gen_reg_rtx (GET_MODE (operands[0]));

	  emit_move_insn (temp, operands[1]);
	  operands[1] = temp;
	  return TRUE;
	}	  
    }

  if (!ix86_binary_operator_ok (code, mode, operands))
    {
      /* If not optimizing, try to make a valid insn (optimize code
	 previously did this above to improve chances of CSE) */

      if ((! TARGET_PSEUDO || !optimize)
	  && ((reload_in_progress | reload_completed) == 0)
	  && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM))
	{
	  modified = FALSE;
	  if (GET_CODE (operands[1]) == MEM
	      && ! rtx_equal_p (operands[0], operands[1]))
	    {
	      operands[1] = force_reg (GET_MODE (operands[1]), operands[1]);
	      modified = TRUE;
	    }

	  if (GET_CODE (operands[2]) == MEM)
	    {
	      operands[2] = force_reg (GET_MODE (operands[2]), operands[2]);
	      modified = TRUE;
	    }

	  if (GET_CODE (operands[1]) == CONST_INT && code == MINUS)
	    {
	      rtx temp = gen_reg_rtx (GET_MODE (operands[0]));

	      emit_move_insn (temp, operands[1]);
	      operands[1] = temp;
	      return TRUE;
	    }	  

	  if (modified && ! ix86_binary_operator_ok (code, mode, operands))
	    return FALSE;
	}
      else
	return FALSE;
    }

  return TRUE;
}

/* Return TRUE or FALSE depending on whether the binary operator meets the
   appropriate constraints.  */

int
ix86_binary_operator_ok (code, mode, operands)
     enum rtx_code code;
     enum machine_mode mode;
     rtx operands[3];
{
  return (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
    && (GET_CODE (operands[1]) != CONST_INT || GET_RTX_CLASS (code) == 'c');
}

/* Attempt to expand a unary operator.  Make the expansion closer to the
   actual machine, then just general_operand, which will allow 2 separate
   memory references (one output, one input) in a single insn.  Return
   whether the insn fails, or succeeds.  */

int
ix86_expand_unary_operator (code, mode, operands)
     enum rtx_code code;
     enum machine_mode mode;
     rtx operands[];
{
  rtx insn;

  /* If optimizing, copy to regs to improve CSE */
  if (TARGET_PSEUDO
      && optimize
      && ((reload_in_progress | reload_completed) == 0)
      && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (GET_MODE (operands[1]), operands[1]);

  if (! ix86_unary_operator_ok (code, mode, operands))
    {
      if ((! TARGET_PSEUDO || optimize == 0)
	  && ((reload_in_progress | reload_completed) == 0)
	  && GET_CODE (operands[1]) == MEM)
	{
	  operands[1] = force_reg (GET_MODE (operands[1]), operands[1]);
	  if (! ix86_unary_operator_ok (code, mode, operands))
	    return FALSE;
	}
      else
	return FALSE;
    }

  return TRUE;
}

/* Return TRUE or FALSE depending on whether the unary operator meets the
   appropriate constraints.  */

int
ix86_unary_operator_ok (code, mode, operands)
     enum rtx_code code;
     enum machine_mode mode;
     rtx operands[2];
{
  return TRUE;
}

static rtx pic_label_rtx;
static char pic_label_name [256];
static int pic_label_no = 0;

/* This function generates code for -fpic that loads %ebx with
   with the return address of the caller and then returns.  */

void
asm_output_function_prefix (file, name)
     FILE *file;
     char *name;
{
  rtx xops[2];
  int pic_reg_used = flag_pic && (current_function_uses_pic_offset_table
				  || current_function_uses_const_pool);
  xops[0] = pic_offset_table_rtx;
  xops[1] = stack_pointer_rtx;

  /* Deep branch prediction favors having a return for every call. */
  if (pic_reg_used && TARGET_DEEP_BRANCH_PREDICTION)
    {
      tree prologue_node;

      if (pic_label_rtx == 0)
	{
	  pic_label_rtx = gen_label_rtx ();
	  sprintf (pic_label_name, "LPR%d", pic_label_no++);
	  LABEL_NAME (pic_label_rtx) = pic_label_name;
	}

      prologue_node = make_node (FUNCTION_DECL);
      DECL_RESULT (prologue_node) = 0;
#ifdef ASM_DECLARE_FUNCTION_NAME
      ASM_DECLARE_FUNCTION_NAME (file, pic_label_name, prologue_node);
#endif
      output_asm_insn ("movl (%1),%0", xops);
      output_asm_insn ("ret", xops);
    }
}

/* Generate the assembly code for function entry.
   FILE is an stdio stream to output the code to.
   SIZE is an int: how many units of temporary storage to allocate. */

void
function_prologue (file, size)
     FILE *file;
     int size;
{
  if (TARGET_SCHEDULE_PROLOGUE)
    {
      pic_label_rtx = 0;
      return;
    }
  
  ix86_prologue (0);
}

/* Expand the prologue into a bunch of separate insns. */

void
ix86_expand_prologue ()
{
  if (! TARGET_SCHEDULE_PROLOGUE)
      return;
 
  ix86_prologue (1);
}

void
load_pic_register (do_rtl)
     int do_rtl;
{
  rtx xops[4];

  if (TARGET_DEEP_BRANCH_PREDICTION)
    {
      xops[0] = pic_offset_table_rtx;
      if (pic_label_rtx == 0)
	{
	  pic_label_rtx = gen_label_rtx ();
	  sprintf (pic_label_name, "LPR%d", pic_label_no++);
	  LABEL_NAME (pic_label_rtx) = pic_label_name;
	}

      xops[1] = gen_rtx (MEM, QImode,
			 gen_rtx (SYMBOL_REF, Pmode,
				  LABEL_NAME (pic_label_rtx)));

      if (do_rtl)
	{
	  emit_insn (gen_prologue_get_pc (xops[0], xops[1]));
	  emit_insn (gen_prologue_set_got (xops[0], 
					   gen_rtx (SYMBOL_REF, Pmode,
						    "$_GLOBAL_OFFSET_TABLE_"), 
					   xops[1]));
	}
      else
	{
	  output_asm_insn (AS1 (call,%P1), xops);
	  output_asm_insn ("addl $_GLOBAL_OFFSET_TABLE_,%0", xops);
	  pic_label_rtx = 0;
	}
    }

  else
    {
      xops[0] = pic_offset_table_rtx;
      xops[1] = gen_label_rtx ();
 
      if (do_rtl)
	{
	  /* We can't put a raw CODE_LABEL into the RTL, and we can't emit
	     a new CODE_LABEL after reload, so we need a single pattern to
	     emit the 3 necessary instructions.  */
	  emit_insn (gen_prologue_get_pc_and_set_got (xops[0]));
	}
      else
	{
	  output_asm_insn (AS1 (call,%P1), xops);
	  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L", 
				     CODE_LABEL_NUMBER (xops[1]));
	  output_asm_insn (AS1 (pop%L0,%0), xops);
	  output_asm_insn ("addl $_GLOBAL_OFFSET_TABLE_+[.-%P1],%0", xops);
	}
    } 

  /* When -fpic, we must emit a scheduling barrier, so that the instruction
     that restores %ebx (which is PIC_OFFSET_TABLE_REGNUM), does not get
     moved before any instruction which implicitly uses the got.   */

  if (do_rtl)
    emit_insn (gen_blockage ());
}

static void
ix86_prologue (do_rtl)
     int do_rtl;
{
  register int regno;
  int limit;
  rtx xops[4];
  int pic_reg_used = flag_pic && (current_function_uses_pic_offset_table
				  || current_function_uses_const_pool);
  long tsize = get_frame_size ();
  rtx insn;
  int cfa_offset = INCOMING_FRAME_SP_OFFSET, cfa_store_offset = cfa_offset;
  
  xops[0] = stack_pointer_rtx;
  xops[1] = frame_pointer_rtx;
  xops[2] = GEN_INT (tsize);

  if (frame_pointer_needed)
    {
      if (do_rtl)
	{
	  insn = emit_insn (gen_rtx (SET, VOIDmode,
				     gen_rtx (MEM, SImode,
					      gen_rtx (PRE_DEC, SImode,
						       stack_pointer_rtx)),
				     frame_pointer_rtx));

	  RTX_FRAME_RELATED_P (insn) = 1;
	  insn = emit_move_insn (xops[1], xops[0]);
	  RTX_FRAME_RELATED_P (insn) = 1;
	}

      else
	{
	  output_asm_insn ("push%L1 %1", xops); 
#ifdef INCOMING_RETURN_ADDR_RTX
 	  if (dwarf2out_do_frame ())
 	    {
 	      char *l = dwarf2out_cfi_label ();

 	      cfa_store_offset += 4;
 	      cfa_offset = cfa_store_offset;
 	      dwarf2out_def_cfa (l, STACK_POINTER_REGNUM, cfa_offset);
 	      dwarf2out_reg_save (l, FRAME_POINTER_REGNUM, - cfa_store_offset);
 	    }
#endif

	  output_asm_insn (AS2 (mov%L0,%0,%1), xops); 
#ifdef INCOMING_RETURN_ADDR_RTX
 	  if (dwarf2out_do_frame ())
 	    dwarf2out_def_cfa ("", FRAME_POINTER_REGNUM, cfa_offset);
#endif
	}
    }

  if (tsize == 0)
    ;
  else if (! TARGET_STACK_PROBE || tsize < CHECK_STACK_LIMIT)
    {
      if (do_rtl)
	{
	  insn = emit_insn (gen_prologue_set_stack_ptr (xops[2]));
	  RTX_FRAME_RELATED_P (insn) = 1;
	}
      else 
	{
	  output_asm_insn (AS2 (sub%L0,%2,%0), xops);
#ifdef INCOMING_RETURN_ADDR_RTX
 	  if (dwarf2out_do_frame ())
 	    {
 	      cfa_store_offset += tsize;
 	      if (! frame_pointer_needed)
 		{
 		  cfa_offset = cfa_store_offset;
 		  dwarf2out_def_cfa ("", STACK_POINTER_REGNUM, cfa_offset);
 		}
 	    }
#endif
	}
    }
  else 
    {
      xops[3] = gen_rtx (REG, SImode, 0);
      if (do_rtl)
      emit_move_insn (xops[3], xops[2]);
      else
	output_asm_insn (AS2 (mov%L0,%2,%3), xops);

      xops[3] = gen_rtx (MEM, FUNCTION_MODE,
			 gen_rtx (SYMBOL_REF, Pmode, "_alloca"));

      if (do_rtl)
	emit_call_insn (gen_rtx (CALL, VOIDmode, xops[3], const0_rtx));
      else
	output_asm_insn (AS1 (call,%P3), xops);
    }

  /* Note If use enter it is NOT reversed args.
     This one is not reversed from intel!!
     I think enter is slower.  Also sdb doesn't like it.
     But if you want it the code is:
     {
     xops[3] = const0_rtx;
     output_asm_insn ("enter %2,%3", xops);
     }
     */

  limit = (frame_pointer_needed ? FRAME_POINTER_REGNUM : STACK_POINTER_REGNUM);
  for (regno = limit - 1; regno >= 0; regno--)
    if ((regs_ever_live[regno] && ! call_used_regs[regno])
	|| (regno == PIC_OFFSET_TABLE_REGNUM && pic_reg_used))
      {
	xops[0] = gen_rtx (REG, SImode, regno);
	if (do_rtl)
	  {
	    insn = emit_insn (gen_rtx (SET, VOIDmode,
				       gen_rtx (MEM, SImode,
						gen_rtx (PRE_DEC, SImode,
							 stack_pointer_rtx)),
				       xops[0]));

	    RTX_FRAME_RELATED_P (insn) = 1;
	  }
	else
	  {
	    output_asm_insn ("push%L0 %0", xops);
#ifdef INCOMING_RETURN_ADDR_RTX
 	    if (dwarf2out_do_frame ())
 	      {
 		char *l = dwarf2out_cfi_label ();

 		cfa_store_offset += 4;
 		if (! frame_pointer_needed)
 		  {
 		    cfa_offset = cfa_store_offset;
 		    dwarf2out_def_cfa (l, STACK_POINTER_REGNUM, cfa_offset);
 		  }

 		dwarf2out_reg_save (l, regno, - cfa_store_offset);
 	      }
#endif
 	  }
      }

  if (pic_reg_used)
    load_pic_register (do_rtl);

  /* If we are profiling, make sure no instructions are scheduled before
     the call to mcount.  However, if -fpic, the above call will have
     done that.  */
  if ((profile_flag || profile_block_flag)
      && ! pic_reg_used && do_rtl)
    emit_insn (gen_blockage ());
}

/* Return 1 if it is appropriate to emit `ret' instructions in the
   body of a function.  Do this only if the epilogue is simple, needing a
   couple of insns.  Prior to reloading, we can't tell how many registers
   must be saved, so return 0 then.  Return 0 if there is no frame 
   marker to de-allocate.

   If NON_SAVING_SETJMP is defined and true, then it is not possible
   for the epilogue to be simple, so return 0.  This is a special case
   since NON_SAVING_SETJMP will not cause regs_ever_live to change
   until final, but jump_optimize may need to know sooner if a
   `return' is OK.  */

int
ix86_can_use_return_insn_p ()
{
  int regno;
  int nregs = 0;
  int reglimit = (frame_pointer_needed
		  ? FRAME_POINTER_REGNUM : STACK_POINTER_REGNUM);
  int pic_reg_used = flag_pic && (current_function_uses_pic_offset_table
				  || current_function_uses_const_pool);

#ifdef NON_SAVING_SETJMP
  if (NON_SAVING_SETJMP && current_function_calls_setjmp)
    return 0;
#endif

  if (! reload_completed)
    return 0;

  for (regno = reglimit - 1; regno >= 0; regno--)
    if ((regs_ever_live[regno] && ! call_used_regs[regno])
	|| (regno == PIC_OFFSET_TABLE_REGNUM && pic_reg_used))
      nregs++;

  return nregs == 0 || ! frame_pointer_needed;
}

/* This function generates the assembly code for function exit.
   FILE is an stdio stream to output the code to.
   SIZE is an int: how many units of temporary storage to deallocate. */

void
function_epilogue (file, size)
     FILE *file;
     int size;
{
    return;
}

/* Restore function stack, frame, and registers. */ 

void
ix86_expand_epilogue ()
{
  ix86_epilogue (1);
}

static void
ix86_epilogue (do_rtl)
     int do_rtl;
{
  register int regno;
  register int nregs, limit;
  int offset;
  rtx xops[3];
  int pic_reg_used = flag_pic && (current_function_uses_pic_offset_table
				  || current_function_uses_const_pool);
  long tsize = get_frame_size ();

  /* Compute the number of registers to pop */

  limit = (frame_pointer_needed ? FRAME_POINTER_REGNUM : STACK_POINTER_REGNUM);

  nregs = 0;

  for (regno = limit - 1; regno >= 0; regno--)
    if ((regs_ever_live[regno] && ! call_used_regs[regno])
	|| (regno == PIC_OFFSET_TABLE_REGNUM && pic_reg_used))
      nregs++;

  /* sp is often  unreliable so we must go off the frame pointer.

     In reality, we may not care if sp is unreliable, because we can restore
     the register relative to the frame pointer.  In theory, since each move
     is the same speed as a pop, and we don't need the leal, this is faster.
     For now restore multiple registers the old way. */

  offset = - tsize - (nregs * UNITS_PER_WORD);

  xops[2] = stack_pointer_rtx;

  /* When -fpic, we must emit a scheduling barrier, so that the instruction
     that restores %ebx (which is PIC_OFFSET_TABLE_REGNUM), does not get
     moved before any instruction which implicitly uses the got.  This
     includes any instruction which uses a SYMBOL_REF or a LABEL_REF.

     Alternatively, this could be fixed by making the dependence on the
     PIC_OFFSET_TABLE_REGNUM explicit in the RTL.  */

  if (flag_pic || profile_flag || profile_block_flag)
    emit_insn (gen_blockage ());

  if (nregs > 1 || ! frame_pointer_needed)
    {
      if (frame_pointer_needed)
	{
	  xops[0] = adj_offsettable_operand (AT_BP (QImode), offset);
	  if (do_rtl)
	    emit_insn (gen_movsi_lea (xops[2], XEXP (xops[0], 0)));
	  else
	    output_asm_insn (AS2 (lea%L2,%0,%2), xops);
	}

      for (regno = 0; regno < limit; regno++)
	if ((regs_ever_live[regno] && ! call_used_regs[regno])
	    || (regno == PIC_OFFSET_TABLE_REGNUM && pic_reg_used))
	  {
	    xops[0] = gen_rtx (REG, SImode, regno);

	    if (do_rtl)
	      emit_insn (gen_pop (xops[0]));
	    else
	      output_asm_insn ("pop%L0 %0", xops);
	  }
    }

  else
    for (regno = 0; regno < limit; regno++)
      if ((regs_ever_live[regno] && ! call_used_regs[regno])
	  || (regno == PIC_OFFSET_TABLE_REGNUM && pic_reg_used))
	{
	  xops[0] = gen_rtx (REG, SImode, regno);
	  xops[1] = adj_offsettable_operand (AT_BP (Pmode), offset);

	  if (do_rtl)
	    emit_move_insn (xops[0], xops[1]);
	  else
	    output_asm_insn (AS2 (mov%L0,%1,%0), xops);

	  offset += 4;
	}

  if (frame_pointer_needed)
    {
      /* If not an i386, mov & pop is faster than "leave". */

      if (TARGET_USE_LEAVE)
	{
	  if (do_rtl)
	    emit_insn (gen_leave());
	  else
	    output_asm_insn ("leave", xops);
	}
      else
	{
	  xops[0] = frame_pointer_rtx;
	  xops[1] = stack_pointer_rtx;

	  if (do_rtl)
	    {
	      emit_insn (gen_epilogue_set_stack_ptr());
	      emit_insn (gen_pop (xops[0]));
	    }
	  else
	    {
	      output_asm_insn (AS2 (mov%L2,%0,%2), xops);
	      output_asm_insn ("pop%L0 %0", xops);
	    }
	}
    }

  else if (tsize)
    {
      /* If there is no frame pointer, we must still release the frame. */
      xops[0] = GEN_INT (tsize);

      if (do_rtl)
	emit_insn (gen_rtx (SET, VOIDmode, xops[2],
			    gen_rtx (PLUS, SImode, xops[2], xops[0])));
      else
	output_asm_insn (AS2 (add%L2,%0,%2), xops);
    }

#ifdef FUNCTION_BLOCK_PROFILER_EXIT
  if (profile_block_flag == 2)
    {
      FUNCTION_BLOCK_PROFILER_EXIT(file);
    }
#endif

  if (current_function_pops_args && current_function_args_size)
    {
      xops[1] = GEN_INT (current_function_pops_args);

      /* i386 can only pop 32K bytes (maybe 64K?  Is it signed?).  If
	 asked to pop more, pop return address, do explicit add, and jump
	 indirectly to the caller. */

      if (current_function_pops_args >= 32768)
	{
	  /* ??? Which register to use here? */
	  xops[0] = gen_rtx (REG, SImode, 2);

	  if (do_rtl)
	    {
	      emit_insn (gen_pop (xops[0]));
	      emit_insn (gen_rtx (SET, VOIDmode, xops[2],
				  gen_rtx (PLUS, SImode, xops[1], xops[2])));
	      emit_jump_insn (xops[0]);
	    }
	  else
	    {
	      output_asm_insn ("pop%L0 %0", xops);
	      output_asm_insn (AS2 (add%L2,%1,%2), xops);
	      output_asm_insn ("jmp %*%0", xops);
	    }
	}
      else 
	{
	  if (do_rtl)
	    emit_jump_insn (gen_return_pop_internal (xops[1]));
	  else
	    output_asm_insn ("ret %1", xops);
	}
    }
  else
    {
      if (do_rtl)
	emit_jump_insn (gen_return_internal ());
      else
	output_asm_insn ("ret", xops);
    }
}

/* GO_IF_LEGITIMATE_ADDRESS recognizes an RTL expression
   that is a valid memory address for an instruction.
   The MODE argument is the machine mode for the MEM expression
   that wants to use this address.

   On x86, legitimate addresses are:
	base				movl (base),reg
	displacement			movl disp,reg
	base + displacement		movl disp(base),reg
	index + base			movl (base,index),reg
	(index + base) + displacement	movl disp(base,index),reg
	index*scale			movl (,index,scale),reg
	index*scale + disp		movl disp(,index,scale),reg
	index*scale + base 		movl (base,index,scale),reg
	(index*scale + base) + disp	movl disp(base,index,scale),reg

	In each case, scale can be 1, 2, 4, 8.  */

/* This is exactly the same as print_operand_addr, except that
   it recognizes addresses instead of printing them.

   It only recognizes address in canonical form.  LEGITIMIZE_ADDRESS should
   convert common non-canonical forms to canonical form so that they will
   be recognized.  */

#define ADDR_INVALID(msg,insn)						\
do {									\
  if (TARGET_DEBUG_ADDR)						\
    {									\
      fprintf (stderr, msg);						\
      debug_rtx (insn);							\
    }									\
} while (0)

int
legitimate_address_p (mode, addr, strict)
     enum machine_mode mode;
     register rtx addr;
     int strict;
{
  rtx base  = NULL_RTX;
  rtx indx  = NULL_RTX;
  rtx scale = NULL_RTX;
  rtx disp  = NULL_RTX;

  if (TARGET_DEBUG_ADDR)
    {
      fprintf (stderr,
	       "\n======\nGO_IF_LEGITIMATE_ADDRESS, mode = %s, strict = %d\n",
	       GET_MODE_NAME (mode), strict);

      debug_rtx (addr);
    }

  if (GET_CODE (addr) == REG || GET_CODE (addr) == SUBREG)
      base = addr;

  else if (GET_CODE (addr) == PLUS)
    {
      rtx op0 = XEXP (addr, 0);
      rtx op1 = XEXP (addr, 1);
      enum rtx_code code0 = GET_CODE (op0);
      enum rtx_code code1 = GET_CODE (op1);

      if (code0 == REG || code0 == SUBREG)
	{
	  if (code1 == REG || code1 == SUBREG)
	    {
	      indx = op0;	/* index + base */
	      base = op1;
	    }

	  else
	    {
	      base = op0;	/* base + displacement */
	      disp = op1;
	    }
	}

      else if (code0 == MULT)
	{
	  indx  = XEXP (op0, 0);
	  scale = XEXP (op0, 1);

	  if (code1 == REG || code1 == SUBREG)
	    base = op1;		/* index*scale + base */

	  else
	    disp = op1;		/* index*scale + disp */
	}

      else if (code0 == PLUS && GET_CODE (XEXP (op0, 0)) == MULT)
	{
	  indx  = XEXP (XEXP (op0, 0), 0);	/* index*scale + base + disp */
	  scale = XEXP (XEXP (op0, 0), 1);
	  base  = XEXP (op0, 1);
	  disp  = op1;
	}

      else if (code0 == PLUS)
	{
	  indx = XEXP (op0, 0);	/* index + base + disp */
	  base = XEXP (op0, 1);
	  disp = op1;
	}

      else
	{
	  ADDR_INVALID ("PLUS subcode is not valid.\n", op0);
	  return FALSE;
	}
    }

  else if (GET_CODE (addr) == MULT)
    {
      indx  = XEXP (addr, 0);	/* index*scale */
      scale = XEXP (addr, 1);
    }

  else
    disp = addr;		/* displacement */

  /* Allow arg pointer and stack pointer as index if there is not scaling */
  if (base && indx && !scale
      && (indx == arg_pointer_rtx || indx == stack_pointer_rtx))
    {
      rtx tmp = base;
      base = indx;
      indx = tmp;
    }

  /* Validate base register:

     Don't allow SUBREG's here, it can lead to spill failures when the base
     is one word out of a two word structure, which is represented internally
     as a DImode int.  */

  if (base)
    {
      if (GET_CODE (base) != REG)
	{
	  ADDR_INVALID ("Base is not a register.\n", base);
	  return FALSE;
	}

      if ((strict && ! REG_OK_FOR_BASE_STRICT_P (base))
	  || (! strict && ! REG_OK_FOR_BASE_NONSTRICT_P (base)))
	{
	  ADDR_INVALID ("Base is not valid.\n", base);
	  return FALSE;
	}
    }

  /* Validate index register:

     Don't allow SUBREG's here, it can lead to spill failures when the index
     is one word out of a two word structure, which is represented internally
     as a DImode int.  */
  if (indx)
    {
      if (GET_CODE (indx) != REG)
	{
	  ADDR_INVALID ("Index is not a register.\n", indx);
	  return FALSE;
	}

      if ((strict && ! REG_OK_FOR_INDEX_STRICT_P (indx))
	  || (! strict && ! REG_OK_FOR_INDEX_NONSTRICT_P (indx)))
	{
	  ADDR_INVALID ("Index is not valid.\n", indx);
	  return FALSE;
	}
    }
  else if (scale)
    abort ();			/* scale w/o index invalid */

  /* Validate scale factor: */
  if (scale)
    {
      HOST_WIDE_INT value;

      if (GET_CODE (scale) != CONST_INT)
	{
	  ADDR_INVALID ("Scale is not valid.\n", scale);
	  return FALSE;
	}

      value = INTVAL (scale);
      if (value != 1 && value != 2 && value != 4 && value != 8)
	{
	  ADDR_INVALID ("Scale is not a good multiplier.\n", scale);
	  return FALSE;
	}
    }

  /* Validate displacement
     Constant pool addresses must be handled special.  They are
     considered legitimate addresses, but only if not used with regs.
     When printed, the output routines know to print the reference with the
     PIC reg, even though the PIC reg doesn't appear in the RTL. */
  if (disp)
    {
      if (GET_CODE (disp) == SYMBOL_REF
	  && CONSTANT_POOL_ADDRESS_P (disp)
	  && base == 0
	  && indx == 0)
	;

      else if (!CONSTANT_ADDRESS_P (disp))
	{
	  ADDR_INVALID ("Displacement is not valid.\n", disp);
	  return FALSE;
	}

      else if (GET_CODE (disp) == CONST_DOUBLE)
	{
	  ADDR_INVALID ("Displacement is a const_double.\n", disp);
	  return FALSE;
	}

      else if (flag_pic && SYMBOLIC_CONST (disp)
	       && base != pic_offset_table_rtx
	       && (indx != pic_offset_table_rtx || scale != NULL_RTX))
	{
	  ADDR_INVALID ("Displacement is an invalid pic reference.\n", disp);
	  return FALSE;
	}

      else if (HALF_PIC_P () && HALF_PIC_ADDRESS_P (disp)
	       && (base != NULL_RTX || indx != NULL_RTX))
	{
	  ADDR_INVALID ("Displacement is an invalid half-pic reference.\n",
			disp);
	  return FALSE;
	}
    }

  if (TARGET_DEBUG_ADDR)
    fprintf (stderr, "Address is valid.\n");

  /* Everything looks valid, return true */
  return TRUE;
}

/* Return a legitimate reference for ORIG (an address) using the
   register REG.  If REG is 0, a new pseudo is generated.

   There are three types of references that must be handled:

   1. Global data references must load the address from the GOT, via
      the PIC reg.  An insn is emitted to do this load, and the reg is
      returned.

   2. Static data references must compute the address as an offset
      from the GOT, whose base is in the PIC reg.  An insn is emitted to
      compute the address into a reg, and the reg is returned.  Static
      data objects have SYMBOL_REF_FLAG set to differentiate them from
      global data objects.

   3. Constant pool addresses must be handled special.  They are
      considered legitimate addresses, but only if not used with regs.
      When printed, the output routines know to print the reference with the
      PIC reg, even though the PIC reg doesn't appear in the RTL.

   GO_IF_LEGITIMATE_ADDRESS rejects symbolic references unless the PIC
   reg also appears in the address (except for constant pool references,
   noted above).

   "switch" statements also require special handling when generating
   PIC code.  See comments by the `casesi' insn in i386.md for details.  */

rtx
legitimize_pic_address (orig, reg)
     rtx orig;
     rtx reg;
{
  rtx addr = orig;
  rtx new = orig;

  if (GET_CODE (addr) == SYMBOL_REF || GET_CODE (addr) == LABEL_REF)
    {
      if (GET_CODE (addr) == SYMBOL_REF && CONSTANT_POOL_ADDRESS_P (addr))
	reg = new = orig;
      else
	{
	  if (reg == 0)
	    reg = gen_reg_rtx (Pmode);

	  if ((GET_CODE (addr) == SYMBOL_REF && SYMBOL_REF_FLAG (addr))
	      || GET_CODE (addr) == LABEL_REF)
	    new = gen_rtx (PLUS, Pmode, pic_offset_table_rtx, orig);
	  else
	    new = gen_rtx (MEM, Pmode,
			   gen_rtx (PLUS, Pmode, pic_offset_table_rtx, orig));

	  emit_move_insn (reg, new);
	}
      current_function_uses_pic_offset_table = 1;
      return reg;
    }

  else if (GET_CODE (addr) == CONST || GET_CODE (addr) == PLUS)
    {
      rtx base;

      if (GET_CODE (addr) == CONST)
	{
	  addr = XEXP (addr, 0);
	  if (GET_CODE (addr) != PLUS)
	    abort ();
	}

      if (XEXP (addr, 0) == pic_offset_table_rtx)
	return orig;

      if (reg == 0)
	reg = gen_reg_rtx (Pmode);

      base = legitimize_pic_address (XEXP (addr, 0), reg);
      addr = legitimize_pic_address (XEXP (addr, 1),
				     base == reg ? NULL_RTX : reg);

      if (GET_CODE (addr) == CONST_INT)
	return plus_constant (base, INTVAL (addr));

      if (GET_CODE (addr) == PLUS && CONSTANT_P (XEXP (addr, 1)))
	{
	  base = gen_rtx (PLUS, Pmode, base, XEXP (addr, 0));
	  addr = XEXP (addr, 1);
	}

      return gen_rtx (PLUS, Pmode, base, addr);
    }
  return new;
}

/* Emit insns to move operands[1] into operands[0].  */

void
emit_pic_move (operands, mode)
     rtx *operands;
     enum machine_mode mode;
{
  rtx temp = reload_in_progress ? operands[0] : gen_reg_rtx (Pmode);

  if (GET_CODE (operands[0]) == MEM && SYMBOLIC_CONST (operands[1]))
    operands[1] = force_reg (SImode, operands[1]);
  else
    operands[1] = legitimize_pic_address (operands[1], temp);
}

/* Try machine-dependent ways of modifying an illegitimate address
   to be legitimate.  If we find one, return the new, valid address.
   This macro is used in only one place: `memory_address' in explow.c.

   OLDX is the address as it was before break_out_memory_refs was called.
   In some cases it is useful to look at this to decide what needs to be done.

   MODE and WIN are passed so that this macro can use
   GO_IF_LEGITIMATE_ADDRESS.

   It is always safe for this macro to do nothing.  It exists to recognize
   opportunities to optimize the output.

   For the 80386, we handle X+REG by loading X into a register R and
   using R+REG.  R will go in a general reg and indexing will be used.
   However, if REG is a broken-out memory address or multiplication,
   nothing needs to be done because REG can certainly go in a general reg.

   When -fpic is used, special handling is needed for symbolic references.
   See comments by legitimize_pic_address in i386.c for details.  */

rtx
legitimize_address (x, oldx, mode)
     register rtx x;
     register rtx oldx;
     enum machine_mode mode;
{
  int changed = 0;
  unsigned log;

  if (TARGET_DEBUG_ADDR)
    {
      fprintf (stderr, "\n==========\nLEGITIMIZE_ADDRESS, mode = %s\n",
	       GET_MODE_NAME (mode));
      debug_rtx (x);
    }

  if (flag_pic && SYMBOLIC_CONST (x))
    return legitimize_pic_address (x, 0);

  /* Canonicalize shifts by 0, 1, 2, 3 into multiply */
  if (GET_CODE (x) == ASHIFT
      && GET_CODE (XEXP (x, 1)) == CONST_INT
      && (log = (unsigned)exact_log2 (INTVAL (XEXP (x, 1)))) < 4)
    {
      changed = 1;
      x = gen_rtx (MULT, Pmode, force_reg (Pmode, XEXP (x, 0)),
		   GEN_INT (1 << log));
    }

  if (GET_CODE (x) == PLUS)
    {
      /* Canonicalize shifts by 0, 1, 2, 3 into multiply. */

      if (GET_CODE (XEXP (x, 0)) == ASHIFT
	  && GET_CODE (XEXP (XEXP (x, 0), 1)) == CONST_INT
	  && (log = (unsigned)exact_log2 (INTVAL (XEXP (XEXP (x, 0), 1)))) < 4)
	{
	  changed = 1;
	  XEXP (x, 0) = gen_rtx (MULT, Pmode,
				 force_reg (Pmode, XEXP (XEXP (x, 0), 0)),
				 GEN_INT (1 << log));
	}

      if (GET_CODE (XEXP (x, 1)) == ASHIFT
	  && GET_CODE (XEXP (XEXP (x, 1), 1)) == CONST_INT
	  && (log = (unsigned)exact_log2 (INTVAL (XEXP (XEXP (x, 1), 1)))) < 4)
	{
	  changed = 1;
	  XEXP (x, 1) = gen_rtx (MULT, Pmode,
				 force_reg (Pmode, XEXP (XEXP (x, 1), 0)),
				 GEN_INT (1 << log));
	}

      /* Put multiply first if it isn't already. */
      if (GET_CODE (XEXP (x, 1)) == MULT)
	{
	  rtx tmp = XEXP (x, 0);
	  XEXP (x, 0) = XEXP (x, 1);
	  XEXP (x, 1) = tmp;
	  changed = 1;
	}

      /* Canonicalize (plus (mult (reg) (const)) (plus (reg) (const)))
	 into (plus (plus (mult (reg) (const)) (reg)) (const)).  This can be
	 created by virtual register instantiation, register elimination, and
	 similar optimizations.  */
      if (GET_CODE (XEXP (x, 0)) == MULT && GET_CODE (XEXP (x, 1)) == PLUS)
	{
	  changed = 1;
	  x = gen_rtx (PLUS, Pmode,
		       gen_rtx (PLUS, Pmode, XEXP (x, 0),
				XEXP (XEXP (x, 1), 0)),
		       XEXP (XEXP (x, 1), 1));
	}

      /* Canonicalize
	 (plus (plus (mult (reg) (const)) (plus (reg) (const))) const)
	 into (plus (plus (mult (reg) (const)) (reg)) (const)).  */
      else if (GET_CODE (x) == PLUS && GET_CODE (XEXP (x, 0)) == PLUS
	       && GET_CODE (XEXP (XEXP (x, 0), 0)) == MULT
	       && GET_CODE (XEXP (XEXP (x, 0), 1)) == PLUS
	       && CONSTANT_P (XEXP (x, 1)))
	{
	  rtx constant, other;

	  if (GET_CODE (XEXP (x, 1)) == CONST_INT)
	    {
	      constant = XEXP (x, 1);
	      other = XEXP (XEXP (XEXP (x, 0), 1), 1);
	    }
	  else if (GET_CODE (XEXP (XEXP (XEXP (x, 0), 1), 1)) == CONST_INT)
	    {
	      constant = XEXP (XEXP (XEXP (x, 0), 1), 1);
	      other = XEXP (x, 1);
	    }
	  else
	    constant = 0;

	  if (constant)
	    {
	      changed = 1;
	      x = gen_rtx (PLUS, Pmode,
			   gen_rtx (PLUS, Pmode, XEXP (XEXP (x, 0), 0),
				    XEXP (XEXP (XEXP (x, 0), 1), 0)),
			   plus_constant (other, INTVAL (constant)));
	    }
	}

      if (changed && legitimate_address_p (mode, x, FALSE))
	return x;

      if (GET_CODE (XEXP (x, 0)) == MULT)
	{
	  changed = 1;
	  XEXP (x, 0) = force_operand (XEXP (x, 0), 0);
	}

      if (GET_CODE (XEXP (x, 1)) == MULT)
	{
	  changed = 1;
	  XEXP (x, 1) = force_operand (XEXP (x, 1), 0);
	}

      if (changed
	  && GET_CODE (XEXP (x, 1)) == REG
	  && GET_CODE (XEXP (x, 0)) == REG)
	return x;

      if (flag_pic && SYMBOLIC_CONST (XEXP (x, 1)))
	{
	  changed = 1;
	  x = legitimize_pic_address (x, 0);
	}

      if (changed && legitimate_address_p (mode, x, FALSE))
	return x;

      if (GET_CODE (XEXP (x, 0)) == REG)
	{
	  register rtx temp = gen_reg_rtx (Pmode);
	  register rtx val  = force_operand (XEXP (x, 1), temp);
	  if (val != temp)
	    emit_move_insn (temp, val);

	  XEXP (x, 1) = temp;
	  return x;
	}

      else if (GET_CODE (XEXP (x, 1)) == REG)
	{
	  register rtx temp = gen_reg_rtx (Pmode);
	  register rtx val  = force_operand (XEXP (x, 0), temp);
	  if (val != temp)
	    emit_move_insn (temp, val);

	  XEXP (x, 0) = temp;
	  return x;
	}
    }

  return x;
}

/* Print an integer constant expression in assembler syntax.  Addition
   and subtraction are the only arithmetic that may appear in these
   expressions.  FILE is the stdio stream to write to, X is the rtx, and
   CODE is the operand print code from the output string.  */

static void
output_pic_addr_const (file, x, code)
     FILE *file;
     rtx x;
     int code;
{
  char buf[256];

  switch (GET_CODE (x))
    {
    case PC:
      if (flag_pic)
	putc ('.', file);
      else
	abort ();
      break;

    case SYMBOL_REF:
    case LABEL_REF:
      if (GET_CODE (x) == SYMBOL_REF)
	assemble_name (file, XSTR (x, 0));
      else
	{
	  ASM_GENERATE_INTERNAL_LABEL (buf, "L",
				       CODE_LABEL_NUMBER (XEXP (x, 0)));
	  assemble_name (asm_out_file, buf);
	}

      if (GET_CODE (x) == SYMBOL_REF && CONSTANT_POOL_ADDRESS_P (x))
	fprintf (file, "@GOTOFF(%%ebx)");
      else if (code == 'P')
	fprintf (file, "@PLT");
      else if (GET_CODE (x) == LABEL_REF)
	fprintf (file, "@GOTOFF");
      else if (! SYMBOL_REF_FLAG (x))
	fprintf (file, "@GOT");
      else
	fprintf (file, "@GOTOFF");

      break;

    case CODE_LABEL:
      ASM_GENERATE_INTERNAL_LABEL (buf, "L", CODE_LABEL_NUMBER (x));
      assemble_name (asm_out_file, buf);
      break;

    case CONST_INT:
      fprintf (file, "%d", INTVAL (x));
      break;

    case CONST:
      /* This used to output parentheses around the expression,
	 but that does not work on the 386 (either ATT or BSD assembler).  */
      output_pic_addr_const (file, XEXP (x, 0), code);
      break;

    case CONST_DOUBLE:
      if (GET_MODE (x) == VOIDmode)
	{
	  /* We can use %d if the number is <32 bits and positive.  */
	  if (CONST_DOUBLE_HIGH (x) || CONST_DOUBLE_LOW (x) < 0)
	    fprintf (file, "0x%x%08x",
		     CONST_DOUBLE_HIGH (x), CONST_DOUBLE_LOW (x));
	  else
	    fprintf (file, "%d", CONST_DOUBLE_LOW (x));
	}
      else
	/* We can't handle floating point constants;
	   PRINT_OPERAND must handle them.  */
	output_operand_lossage ("floating constant misused");
      break;

    case PLUS:
      /* Some assemblers need integer constants to appear first.  */
      if (GET_CODE (XEXP (x, 0)) == CONST_INT)
	{
	  output_pic_addr_const (file, XEXP (x, 0), code);
	  if (INTVAL (XEXP (x, 1)) >= 0)
	    fprintf (file, "+");
	  output_pic_addr_const (file, XEXP (x, 1), code);
	}
      else
	{
	  output_pic_addr_const (file, XEXP (x, 1), code);
	  if (INTVAL (XEXP (x, 0)) >= 0)
	    fprintf (file, "+");
	  output_pic_addr_const (file, XEXP (x, 0), code);
	}
      break;

    case MINUS:
      output_pic_addr_const (file, XEXP (x, 0), code);
      fprintf (file, "-");
      output_pic_addr_const (file, XEXP (x, 1), code);
      break;

    default:
      output_operand_lossage ("invalid expression as operand");
    }
}

/* Append the correct conditional move suffix which corresponds to CODE.  */

static void
put_condition_code (code, reverse_cc, mode, file)
     enum rtx_code code;
     int  reverse_cc;
     enum mode_class mode;
     FILE * file;
{
  int ieee = (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
	      && ! (cc_prev_status.flags & CC_FCOMI));
  if (reverse_cc && ! ieee)
    code = reverse_condition (code);

  if (mode == MODE_INT)
    switch (code)
      {
      case NE: 
	if (cc_prev_status.flags & CC_Z_IN_NOT_C)
	  fputs ("b", file);
	else
	  fputs ("ne", file);
	return;

      case EQ:
	if (cc_prev_status.flags & CC_Z_IN_NOT_C)
	  fputs ("ae", file);
	else
	  fputs ("e", file);
	return;

      case GE:
	fputs ("ge", file);
	return;

      case GT:
	fputs ("g", file);
	return;

      case LE:
	fputs ("le", file);
	return;

      case LT:
	fputs ("l", file);
	return;

      case GEU:
	fputs ("ae", file);
	return;

      case GTU:
	fputs ("a", file);
	return;

      case LEU:
	fputs ("be", file);
	return;

      case LTU:
	fputs ("b", file);
	return;

      default:
	output_operand_lossage ("Invalid %%C operand");
      }

  else if (mode == MODE_FLOAT)
    switch (code)
      {
      case NE: 
	fputs (ieee ? (reverse_cc ? "ne" : "e") : "ne", file);
	return;
      case EQ: 
	fputs (ieee ? (reverse_cc ? "ne" : "e") : "e", file);
	return;
      case GE: 
	fputs (ieee ? (reverse_cc ? "ne" : "e") : "nb", file);
	return;
      case GT: 
	fputs (ieee ? (reverse_cc ? "ne" : "e") : "nbe", file);
	return;
      case LE: 
	fputs (ieee ? (reverse_cc ? "nb" : "b") : "be", file);
	return;
      case LT: 
	fputs (ieee ? (reverse_cc ? "ne" : "e") : "b", file);
	return;
      case GEU: 
	fputs (ieee ? (reverse_cc ? "ne" : "e") : "nb", file);
	return;
      case GTU: 
	fputs (ieee ? (reverse_cc ? "ne" : "e") : "nbe", file);
	return;
      case LEU: 
	fputs (ieee ? (reverse_cc ? "nb" : "b") : "be", file);
	return;
      case LTU: 
	fputs (ieee ? (reverse_cc ? "ne" : "e") : "b", file);
	return;
      default:
	output_operand_lossage ("Invalid %%C operand");
    }
}

/* Meaning of CODE:
   L,W,B,Q,S,T -- print the opcode suffix for specified size of operand.
   C -- print opcode suffix for set/cmov insn.
   c -- like C, but print reversed condition
   F -- print opcode suffix for fcmov insn.
   f -- like C, but print reversed condition
   R -- print the prefix for register names.
   z -- print the opcode suffix for the size of the current operand.
   * -- print a star (in certain assembler syntax)
   w -- print the operand as if it's a "word" (HImode) even if it isn't.
   c -- don't print special prefixes before constant operands.
   J -- print the appropriate jump operand.
   s -- print a shift double count, followed by the assemblers argument
	delimiter.
   b -- print the QImode name of the register for the indicated operand.
	%b0 would print %al if operands[0] is reg 0.
   w --  likewise, print the HImode name of the register.
   k --  likewise, print the SImode name of the register.
   h --  print the QImode name for a "high" register, either ah, bh, ch or dh.
   y --  print "st(0)" instead of "st" as a register.
   P --  print as a PIC constant */

void
print_operand (file, x, code)
     FILE *file;
     rtx x;
     int code;
{
  if (code)
    {
      switch (code)
	{
	case '*':
	  if (USE_STAR)
	    putc ('*', file);
	  return;

	case 'L':
	  PUT_OP_SIZE (code, 'l', file);
	  return;

	case 'W':
	  PUT_OP_SIZE (code, 'w', file);
	  return;

	case 'B':
	  PUT_OP_SIZE (code, 'b', file);
	  return;

	case 'Q':
	  PUT_OP_SIZE (code, 'l', file);
	  return;

	case 'S':
	  PUT_OP_SIZE (code, 's', file);
	  return;

	case 'T':
	  PUT_OP_SIZE (code, 't', file);
	  return;

	case 'z':
	  /* 387 opcodes don't get size suffixes if the operands are
	     registers. */

	  if (STACK_REG_P (x))
	    return;

	  /* this is the size of op from size of operand */
	  switch (GET_MODE_SIZE (GET_MODE (x)))
	    {
	    case 1:
	      PUT_OP_SIZE ('B', 'b', file);
	      return;

	    case 2:
	      PUT_OP_SIZE ('W', 'w', file);
	      return;

	    case 4:
	      if (GET_MODE (x) == SFmode)
		{
		  PUT_OP_SIZE ('S', 's', file);
		  return;
		}
	      else
		PUT_OP_SIZE ('L', 'l', file);
	      return;

	    case 12:
		  PUT_OP_SIZE ('T', 't', file);
		  return;

	    case 8:
	      if (GET_MODE_CLASS (GET_MODE (x)) == MODE_INT)
		{
#ifdef GAS_MNEMONICS
		  PUT_OP_SIZE ('Q', 'q', file);
		  return;
#else
		  PUT_OP_SIZE ('Q', 'l', file);	/* Fall through */
#endif
		}

	      PUT_OP_SIZE ('Q', 'l', file);
	      return;
	    }

	case 'b':
	case 'w':
	case 'k':
	case 'h':
	case 'y':
	case 'P':
	  break;

	case 'J':
	  switch (GET_CODE (x))
	    {
	      /* These conditions are appropriate for testing the result
		 of an arithmetic operation, not for a compare operation.
	         Cases GE, LT assume CC_NO_OVERFLOW true. All cases assume
		 CC_Z_IN_NOT_C false and not floating point.  */
	    case NE:  fputs ("jne", file); return;
	    case EQ:  fputs ("je",  file); return;
	    case GE:  fputs ("jns", file); return;
	    case LT:  fputs ("js",  file); return;
	    case GEU: fputs ("jmp", file); return;
	    case GTU: fputs ("jne",  file); return;
	    case LEU: fputs ("je", file); return;
	    case LTU: fputs ("#branch never",  file); return;

	    /* no matching branches for GT nor LE */
	    }
	  abort ();

	case 's':
	  if (GET_CODE (x) == CONST_INT || ! SHIFT_DOUBLE_OMITS_COUNT)
	    {
	      PRINT_OPERAND (file, x, 0);
	      fputs (AS2C (,) + 1, file);
	    }

	  return;

	  /* This is used by the conditional move instructions.  */
	case 'C':
	  put_condition_code (GET_CODE (x), 0, MODE_INT, file);
	  return;

	  /* Like above, but reverse condition */
	case 'c':
	  put_condition_code (GET_CODE (x), 1, MODE_INT, file); return;

	case 'F':
	  put_condition_code (GET_CODE (x), 0, MODE_FLOAT, file);
	  return;

	  /* Like above, but reverse condition */
	case 'f':
	  put_condition_code (GET_CODE (x), 1, MODE_FLOAT, file);
	  return;

	default:
	  {
	    char str[50];

	    sprintf (str, "invalid operand code `%c'", code);
	    output_operand_lossage (str);
	  }
	}
    }

  if (GET_CODE (x) == REG)
    {
      PRINT_REG (x, code, file);
    }

  else if (GET_CODE (x) == MEM)
    {
      PRINT_PTR (x, file);
      if (CONSTANT_ADDRESS_P (XEXP (x, 0)))
	{
	  if (flag_pic)
	    output_pic_addr_const (file, XEXP (x, 0), code);
	  else
	    output_addr_const (file, XEXP (x, 0));
	}
      else
	output_address (XEXP (x, 0));
    }

  else if (GET_CODE (x) == CONST_DOUBLE && GET_MODE (x) == SFmode)
    {
      REAL_VALUE_TYPE r;
      long l;

      REAL_VALUE_FROM_CONST_DOUBLE (r, x);
      REAL_VALUE_TO_TARGET_SINGLE (r, l);
      PRINT_IMMED_PREFIX (file);
      fprintf (file, "0x%x", l);
    }

 /* These float cases don't actually occur as immediate operands. */
 else if (GET_CODE (x) == CONST_DOUBLE && GET_MODE (x) == DFmode)
    {
      REAL_VALUE_TYPE r;
      char dstr[30];

      REAL_VALUE_FROM_CONST_DOUBLE (r, x);
      REAL_VALUE_TO_DECIMAL (r, "%.22e", dstr);
      fprintf (file, "%s", dstr);
    }

  else if (GET_CODE (x) == CONST_DOUBLE && GET_MODE (x) == XFmode)
    {
      REAL_VALUE_TYPE r;
      char dstr[30];

      REAL_VALUE_FROM_CONST_DOUBLE (r, x);
      REAL_VALUE_TO_DECIMAL (r, "%.22e", dstr);
      fprintf (file, "%s", dstr);
    }
  else 
    {
      if (code != 'P')
	{
	  if (GET_CODE (x) == CONST_INT || GET_CODE (x) == CONST_DOUBLE)
	    PRINT_IMMED_PREFIX (file);
	  else if (GET_CODE (x) == CONST || GET_CODE (x) == SYMBOL_REF
		   || GET_CODE (x) == LABEL_REF)
	    PRINT_OFFSET_PREFIX (file);
	}
      if (flag_pic)
	output_pic_addr_const (file, x, code);
      else
	output_addr_const (file, x);
    }
}

/* Print a memory operand whose address is ADDR.  */

void
print_operand_address (file, addr)
     FILE *file;
     register rtx addr;
{
  register rtx reg1, reg2, breg, ireg;
  rtx offset;

  switch (GET_CODE (addr))
    {
    case REG:
      ADDR_BEG (file);
      fprintf (file, "%se", RP);
      fputs (hi_reg_name[REGNO (addr)], file);
      ADDR_END (file);
      break;

    case PLUS:
      reg1 = 0;
      reg2 = 0;
      ireg = 0;
      breg = 0;
      offset = 0;
      if (CONSTANT_ADDRESS_P (XEXP (addr, 0)))
	{
	  offset = XEXP (addr, 0);
	  addr = XEXP (addr, 1);
	}
      else if (CONSTANT_ADDRESS_P (XEXP (addr, 1)))
	{
	  offset = XEXP (addr, 1);
	  addr = XEXP (addr, 0);
	}

      if (GET_CODE (addr) != PLUS)
	;
      else if (GET_CODE (XEXP (addr, 0)) == MULT)
	reg1 = XEXP (addr, 0), addr = XEXP (addr, 1);
      else if (GET_CODE (XEXP (addr, 1)) == MULT)
	reg1 = XEXP (addr, 1), addr = XEXP (addr, 0);
      else if (GET_CODE (XEXP (addr, 0)) == REG)
	reg1 = XEXP (addr, 0), addr = XEXP (addr, 1);
      else if (GET_CODE (XEXP (addr, 1)) == REG)
	reg1 = XEXP (addr, 1), addr = XEXP (addr, 0);

      if (GET_CODE (addr) == REG || GET_CODE (addr) == MULT)
	{
	  if (reg1 == 0)
	    reg1 = addr;
	  else
	    reg2 = addr;

	  addr = 0;
	}

      if (offset != 0)
	{
	  if (addr != 0)
	    abort ();
	  addr = offset;
	}

      if ((reg1 && GET_CODE (reg1) == MULT)
	  || (reg2 != 0 && REGNO_OK_FOR_BASE_P (REGNO (reg2))))
	{
	  breg = reg2;
	  ireg = reg1;
	}
      else if (reg1 != 0 && REGNO_OK_FOR_BASE_P (REGNO (reg1)))
	{
	  breg = reg1;
	  ireg = reg2;
	}

      if (ireg != 0 || breg != 0)
	{
	  int scale = 1;

	  if (addr != 0)
	    {
	      if (flag_pic)
		output_pic_addr_const (file, addr, 0);
	      else if (GET_CODE (addr) == LABEL_REF)
		output_asm_label (addr);
	      else
		output_addr_const (file, addr);
	    }

  	  if (ireg != 0 && GET_CODE (ireg) == MULT)
	    {
	      scale = INTVAL (XEXP (ireg, 1));
	      ireg = XEXP (ireg, 0);
	    }

	  /* The stack pointer can only appear as a base register,
	     never an index register, so exchange the regs if it is wrong. */

	  if (scale == 1 && ireg && REGNO (ireg) == STACK_POINTER_REGNUM)
	    {
	      rtx tmp;

	      tmp = breg;
	      breg = ireg;
	      ireg = tmp;
	    }

	  /* output breg+ireg*scale */
	  PRINT_B_I_S (breg, ireg, scale, file);
	  break;
	}

    case MULT:
      {
	int scale;

	if (GET_CODE (XEXP (addr, 0)) == CONST_INT)
	  {
	    scale = INTVAL (XEXP (addr, 0));
	    ireg = XEXP (addr, 1);
	  }
	else
	  {
	    scale = INTVAL (XEXP (addr, 1));
	    ireg = XEXP (addr, 0);
	  }

	output_addr_const (file, const0_rtx);
	PRINT_B_I_S (NULL_RTX, ireg, scale, file);
      }
      break;

    default:
      if (GET_CODE (addr) == CONST_INT
	  && INTVAL (addr) < 0x8000
	  && INTVAL (addr) >= -0x8000)
	fprintf (file, "%d", INTVAL (addr));
      else
	{
	  if (flag_pic)
	    output_pic_addr_const (file, addr, 0);
	  else
	    output_addr_const (file, addr);
	}
    }
}

/* Set the cc_status for the results of an insn whose pattern is EXP.
   On the 80386, we assume that only test and compare insns, as well
   as SI, HI, & DI mode ADD, SUB, NEG, AND, IOR, XOR, ASHIFT,
   ASHIFTRT, and LSHIFTRT instructions set the condition codes usefully.
   Also, we assume that jumps, moves and sCOND don't affect the condition
   codes.  All else clobbers the condition codes, by assumption.

   We assume that ALL integer add, minus, etc. instructions effect the
   condition codes.  This MUST be consistent with i386.md.

   We don't record any float test or compare - the redundant test &
   compare check in final.c does not handle stack-like regs correctly. */

void
notice_update_cc (exp)
     rtx exp;
{
  if (GET_CODE (exp) == SET)
    {
      /* Jumps do not alter the cc's.  */
      if (SET_DEST (exp) == pc_rtx)
	return;

      /* Moving register or memory into a register:
	 it doesn't alter the cc's, but it might invalidate
	 the RTX's which we remember the cc's came from.
	 (Note that moving a constant 0 or 1 MAY set the cc's).  */
      if (REG_P (SET_DEST (exp))
	  && (REG_P (SET_SRC (exp)) || GET_CODE (SET_SRC (exp)) == MEM
	      || GET_RTX_CLASS (GET_CODE (SET_SRC (exp))) == '<'))
	{
	  if (cc_status.value1
	      && reg_overlap_mentioned_p (SET_DEST (exp), cc_status.value1))
	    cc_status.value1 = 0;

	  if (cc_status.value2
	      && reg_overlap_mentioned_p (SET_DEST (exp), cc_status.value2))
	    cc_status.value2 = 0;

	  return;
	}

      /* Moving register into memory doesn't alter the cc's.
	 It may invalidate the RTX's which we remember the cc's came from.  */
      if (GET_CODE (SET_DEST (exp)) == MEM
	  && (REG_P (SET_SRC (exp))
	      || GET_RTX_CLASS (GET_CODE (SET_SRC (exp))) == '<'))
	{
	  if (cc_status.value1
	      && reg_overlap_mentioned_p (SET_DEST (exp), cc_status.value1))
	    cc_status.value1 = 0;
	  if (cc_status.value2
	      && reg_overlap_mentioned_p (SET_DEST (exp), cc_status.value2))
	    cc_status.value2 = 0;

	  return;
	}

      /* Function calls clobber the cc's.  */
      else if (GET_CODE (SET_SRC (exp)) == CALL)
	{
	  CC_STATUS_INIT;
	  return;
	}

      /* Tests and compares set the cc's in predictable ways.  */
      else if (SET_DEST (exp) == cc0_rtx)
	{
	  CC_STATUS_INIT;
	  cc_status.value1 = SET_SRC (exp);
	  return;
	}

      /* Certain instructions effect the condition codes. */
      else if (GET_MODE (SET_SRC (exp)) == SImode
	       || GET_MODE (SET_SRC (exp)) == HImode
	       || GET_MODE (SET_SRC (exp)) == QImode)
	switch (GET_CODE (SET_SRC (exp)))
	  {
	  case ASHIFTRT: case LSHIFTRT: case ASHIFT:
	    /* Shifts on the 386 don't set the condition codes if the
	       shift count is zero. */
	    if (GET_CODE (XEXP (SET_SRC (exp), 1)) != CONST_INT)
	      {
		CC_STATUS_INIT;
		break;
	      }

	    /* We assume that the CONST_INT is non-zero (this rtx would
	       have been deleted if it were zero. */

	  case PLUS: case MINUS: case NEG:
	  case AND: case IOR: case XOR:
	    cc_status.flags = CC_NO_OVERFLOW;
	    cc_status.value1 = SET_SRC (exp);
	    cc_status.value2 = SET_DEST (exp);
	    break;

	  default:
	    CC_STATUS_INIT;
	  }
      else
	{
	  CC_STATUS_INIT;
	}
    }
  else if (GET_CODE (exp) == PARALLEL
	   && GET_CODE (XVECEXP (exp, 0, 0)) == SET)
    {
      if (SET_DEST (XVECEXP (exp, 0, 0)) == pc_rtx)
	return;
      if (SET_DEST (XVECEXP (exp, 0, 0)) == cc0_rtx)

	{
	  CC_STATUS_INIT;
          if (stack_regs_mentioned_p (SET_SRC (XVECEXP (exp, 0, 0))))
	    {
              cc_status.flags |= CC_IN_80387;
	      if (TARGET_CMOVE && stack_regs_mentioned_p
		  (XEXP (SET_SRC (XVECEXP (exp, 0, 0)), 1)))
		cc_status.flags |= CC_FCOMI;
	    }
	  else
	    cc_status.value1 = SET_SRC (XVECEXP (exp, 0, 0));
	  return;
	}

      CC_STATUS_INIT;
    }
  else
    {
      CC_STATUS_INIT;
    }
}

/* Split one or more DImode RTL references into pairs of SImode
   references.  The RTL can be REG, offsettable MEM, integer constant, or
   CONST_DOUBLE.  "operands" is a pointer to an array of DImode RTL to
   split and "num" is its length.  lo_half and hi_half are output arrays
   that parallel "operands". */

void
split_di (operands, num, lo_half, hi_half)
     rtx operands[];
     int num;
     rtx lo_half[], hi_half[];
{
  while (num--)
    {
      if (GET_CODE (operands[num]) == REG)
	{
	  lo_half[num] = gen_rtx (REG, SImode, REGNO (operands[num]));
	  hi_half[num] = gen_rtx (REG, SImode, REGNO (operands[num]) + 1);
	}
      else if (CONSTANT_P (operands[num]))
	split_double (operands[num], &lo_half[num], &hi_half[num]);
      else if (offsettable_memref_p (operands[num]))
	{
	  lo_half[num] = operands[num];
	  hi_half[num] = adj_offsettable_operand (operands[num], 4);
	}
      else
	abort();
    }
}

/* Return 1 if this is a valid binary operation on a 387.
   OP is the expression matched, and MODE is its mode. */

int
binary_387_op (op, mode)
    register rtx op;
    enum machine_mode mode;
{
  if (mode != VOIDmode && mode != GET_MODE (op))
    return 0;

  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      return GET_MODE_CLASS (GET_MODE (op)) == MODE_FLOAT;

    default:
      return 0;
    }
}

/* Return 1 if this is a valid shift or rotate operation on a 386.
   OP is the expression matched, and MODE is its mode. */

int
shift_op (op, mode)
    register rtx op;
    enum machine_mode mode;
{
  rtx operand = XEXP (op, 0);

  if (mode != VOIDmode && mode != GET_MODE (op))
    return 0;

  if (GET_MODE (operand) != GET_MODE (op)
      || GET_MODE_CLASS (GET_MODE (op)) != MODE_INT)
    return 0;

  return (GET_CODE (op) == ASHIFT
	  || GET_CODE (op) == ASHIFTRT
	  || GET_CODE (op) == LSHIFTRT
	  || GET_CODE (op) == ROTATE
	  || GET_CODE (op) == ROTATERT);
}

/* Return 1 if OP is COMPARE rtx with mode VOIDmode.
   MODE is not used.  */

int
VOIDmode_compare_op (op, mode)
    register rtx op;
    enum machine_mode mode;
{
  return GET_CODE (op) == COMPARE && GET_MODE (op) == VOIDmode;
}

/* Output code to perform a 387 binary operation in INSN, one of PLUS,
   MINUS, MULT or DIV.  OPERANDS are the insn operands, where operands[3]
   is the expression of the binary operation.  The output may either be
   emitted here, or returned to the caller, like all output_* functions.

   There is no guarantee that the operands are the same mode, as they
   might be within FLOAT or FLOAT_EXTEND expressions. */

char *
output_387_binary_op (insn, operands)
     rtx insn;
     rtx *operands;
{
  rtx temp;
  char *base_op;
  static char buf[100];

  switch (GET_CODE (operands[3]))
    {
    case PLUS:
      if (GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_INT
	  || GET_MODE_CLASS (GET_MODE (operands[2])) == MODE_INT)
	base_op = "fiadd";
      else
	base_op = "fadd";
      break;

    case MINUS:
      if (GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_INT
	  || GET_MODE_CLASS (GET_MODE (operands[2])) == MODE_INT)
	base_op = "fisub";
      else
	base_op = "fsub";
      break;

    case MULT:
      if (GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_INT
	  || GET_MODE_CLASS (GET_MODE (operands[2])) == MODE_INT)
	base_op = "fimul";
      else
	base_op = "fmul";
      break;

    case DIV:
      if (GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_INT
	  || GET_MODE_CLASS (GET_MODE (operands[2])) == MODE_INT)
	base_op = "fidiv";
      else
	base_op = "fdiv";
      break;

    default:
      abort ();
    }

  strcpy (buf, base_op);

  switch (GET_CODE (operands[3]))
    {
    case MULT:
    case PLUS:
      if (REG_P (operands[2]) && REGNO (operands[0]) == REGNO (operands[2]))
	{
	  temp = operands[2];
	  operands[2] = operands[1];
	  operands[1] = temp;
	}

      if (GET_CODE (operands[2]) == MEM)
	return strcat (buf, AS1 (%z2,%2));

      if (NON_STACK_REG_P (operands[1]))
	{
	  output_op_from_reg (operands[1], strcat (buf, AS1 (%z0,%1)));
	  return "";
	}

      else if (NON_STACK_REG_P (operands[2]))
	{
	  output_op_from_reg (operands[2], strcat (buf, AS1 (%z0,%1)));
	  return "";
	}

      if (find_regno_note (insn, REG_DEAD, REGNO (operands[2])))
	return strcat (buf, AS2 (p,%2,%0));

      if (STACK_TOP_P (operands[0]))
	return strcat (buf, AS2C (%y2,%0));
      else
	return strcat (buf, AS2C (%2,%0));

    case MINUS:
    case DIV:
      if (GET_CODE (operands[1]) == MEM)
	return strcat (buf, AS1 (r%z1,%1));

      if (GET_CODE (operands[2]) == MEM)
	return strcat (buf, AS1 (%z2,%2));

      if (NON_STACK_REG_P (operands[1]))
	{
	  output_op_from_reg (operands[1], strcat (buf, AS1 (r%z0,%1)));
	  return "";
	}

      else if (NON_STACK_REG_P (operands[2]))
	{
	  output_op_from_reg (operands[2], strcat (buf, AS1 (%z0,%1)));
	  return "";
	}

      if (! STACK_REG_P (operands[1]) || ! STACK_REG_P (operands[2]))
	abort ();

      if (find_regno_note (insn, REG_DEAD, REGNO (operands[2])))
	return strcat (buf, AS2 (rp,%2,%0));

      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return strcat (buf, AS2 (p,%1,%0));

      if (STACK_TOP_P (operands[0]))
	{
	  if (STACK_TOP_P (operands[1]))
	    return strcat (buf, AS2C (%y2,%0));
	  else
	    return strcat (buf, AS2 (r,%y1,%0));
	}
      else if (STACK_TOP_P (operands[1]))
	return strcat (buf, AS2C (%1,%0));
      else
	return strcat (buf, AS2 (r,%2,%0));

    default:
      abort ();
    }
}

/* Output code for INSN to convert a float to a signed int.  OPERANDS
   are the insn operands.  The output may be SFmode or DFmode and the
   input operand may be SImode or DImode.  As a special case, make sure
   that the 387 stack top dies if the output mode is DImode, because the
   hardware requires this.  */

char *
output_fix_trunc (insn, operands)
     rtx insn;
     rtx *operands;
{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;
  rtx xops[2];

  if (! STACK_TOP_P (operands[1])
      || (GET_MODE (operands[0]) == DImode && ! stack_top_dies))
    abort ();

  xops[0] = GEN_INT (12);
  xops[1] = operands[4];

  output_asm_insn (AS1 (fnstc%W2,%2), operands);
  output_asm_insn (AS2 (mov%L2,%2,%4), operands);
  output_asm_insn (AS2 (mov%B1,%0,%h1), xops);
  output_asm_insn (AS2 (mov%L4,%4,%3), operands);
  output_asm_insn (AS1 (fldc%W3,%3), operands);

  if (NON_STACK_REG_P (operands[0]))
    output_to_reg (operands[0], stack_top_dies, operands[3]);

  else if (GET_CODE (operands[0]) == MEM)
    {
      if (stack_top_dies)
	output_asm_insn (AS1 (fistp%z0,%0), operands);
      else
	output_asm_insn (AS1 (fist%z0,%0), operands);
    }
  else
    abort ();

  return AS1 (fldc%W2,%2);
}

/* Output code for INSN to compare OPERANDS.  The two operands might
   not have the same mode: one might be within a FLOAT or FLOAT_EXTEND
   expression.  If the compare is in mode CCFPEQmode, use an opcode that
   will not fault if a qNaN is present. */

char *
output_float_compare (insn, operands)
     rtx insn;
     rtx *operands;
{
  int stack_top_dies;
  rtx body = XVECEXP (PATTERN (insn), 0, 0);
  int unordered_compare = GET_MODE (SET_SRC (body)) == CCFPEQmode;
  rtx tmp;

  if (TARGET_CMOVE && STACK_REG_P (operands[1]))
    {
      cc_status.flags |= CC_FCOMI;
      cc_prev_status.flags &= ~CC_TEST_AX;
    }

  if (! STACK_TOP_P (operands[0]))
    {
      tmp = operands[0];
      operands[0] = operands[1];
      operands[1] = tmp;
      cc_status.flags |= CC_REVERSED;
    }
    
  if (! STACK_TOP_P (operands[0]))
    abort ();

  stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  if (STACK_REG_P (operands[1])
      && stack_top_dies
      && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
      && REGNO (operands[1]) != FIRST_STACK_REG)
    {
      /* If both the top of the 387 stack dies, and the other operand
	 is also a stack register that dies, then this must be a
	 `fcompp' float compare */

      if (unordered_compare)
	{
	  if (cc_status.flags & CC_FCOMI)
	    {
	      output_asm_insn (AS2 (fucomip,%y1,%0), operands);
	      output_asm_insn (AS1 (fstp, %y0), operands);
	      return "";
	    }
	  else
	    output_asm_insn ("fucompp", operands);
	}
      else
	{
	  if (cc_status.flags & CC_FCOMI)
	    {
	      output_asm_insn (AS2 (fcomip, %y1,%0), operands);
	      output_asm_insn (AS1 (fstp, %y0), operands);
	      return "";
	    }
	  else
	    output_asm_insn ("fcompp", operands);
	}
    }
  else
    {
      static char buf[100];

      /* Decide if this is the integer or float compare opcode, or the
	 unordered float compare. */

      if (unordered_compare)
	strcpy (buf, (cc_status.flags & CC_FCOMI) ? "fucomi" : "fucom");
      else if (GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_FLOAT)
	strcpy (buf, (cc_status.flags & CC_FCOMI) ? "fcomi" : "fcom");
      else
	strcpy (buf, "ficom");

      /* Modify the opcode if the 387 stack is to be popped. */

      if (stack_top_dies)
	strcat (buf, "p");

      if (NON_STACK_REG_P (operands[1]))
	output_op_from_reg (operands[1], strcat (buf, AS1 (%z0,%1)));
      else if (cc_status.flags & CC_FCOMI) 
	{
	  output_asm_insn (strcat (buf, AS2 (%z1,%y1,%0)), operands);
	  return "";
	}
      else
        output_asm_insn (strcat (buf, AS1 (%z1,%y1)), operands);
    }

  /* Now retrieve the condition code. */

  return output_fp_cc0_set (insn);
}

/* Output opcodes to transfer the results of FP compare or test INSN
   from the FPU to the CPU flags.  If TARGET_IEEE_FP, ensure that if the
   result of the compare or test is unordered, no comparison operator
   succeeds except NE.  Return an output template, if any.  */

char *
output_fp_cc0_set (insn)
     rtx insn;
{
  rtx xops[3];
  rtx unordered_label;
  rtx next;
  enum rtx_code code;

  xops[0] = gen_rtx (REG, HImode, 0);
  output_asm_insn (AS1 (fnsts%W0,%0), xops);

  if (! TARGET_IEEE_FP)
    {
      if (!(cc_status.flags & CC_REVERSED))
        {
          next = next_cc0_user (insn);
        
          if (GET_CODE (next) == JUMP_INSN
              && GET_CODE (PATTERN (next)) == SET
              && SET_DEST (PATTERN (next)) == pc_rtx
              && GET_CODE (SET_SRC (PATTERN (next))) == IF_THEN_ELSE)
	    code = GET_CODE (XEXP (SET_SRC (PATTERN (next)), 0));
          else if (GET_CODE (PATTERN (next)) == SET)
	    code = GET_CODE (SET_SRC (PATTERN (next)));
          else
	    return "sahf";

	  if (code == GT || code == LT || code == EQ || code == NE
	      || code == LE || code == GE)
	    {
	      /* We will test eax directly. */
              cc_status.flags |= CC_TEST_AX;
	      return "";
            }
        }

      return "sahf";
    }

  next = next_cc0_user (insn);
  if (next == NULL_RTX)
    abort ();

  if (GET_CODE (next) == JUMP_INSN
      && GET_CODE (PATTERN (next)) == SET
      && SET_DEST (PATTERN (next)) == pc_rtx
      && GET_CODE (SET_SRC (PATTERN (next))) == IF_THEN_ELSE)
    code = GET_CODE (XEXP (SET_SRC (PATTERN (next)), 0));
  else if (GET_CODE (PATTERN (next)) == SET)
    {
      if (GET_CODE (SET_SRC (PATTERN (next))) == IF_THEN_ELSE)
	code = GET_CODE (XEXP (SET_SRC (PATTERN (next)), 0));
      else
	code = GET_CODE (SET_SRC (PATTERN (next)));
    }

  else if (GET_CODE (PATTERN (next)) == PARALLEL
	   && GET_CODE (XVECEXP (PATTERN (next), 0, 0)) == SET)
    {
      if (GET_CODE (SET_SRC (XVECEXP (PATTERN (next), 0, 0))) == IF_THEN_ELSE)
	code = GET_CODE (XEXP (SET_SRC (XVECEXP (PATTERN (next), 0, 0)), 0));
      else
	code = GET_CODE (SET_SRC (XVECEXP (PATTERN (next), 0, 0)));
    }
  else
    abort ();

  xops[0] = gen_rtx (REG, QImode, 0);

  switch (code)
    {
    case GT:
      xops[1] = GEN_INT (0x45);
      output_asm_insn (AS2 (and%B0,%1,%h0), xops);
      /* je label */
      break;

    case LT:
      xops[1] = GEN_INT (0x45);
      xops[2] = GEN_INT (0x01);
      output_asm_insn (AS2 (and%B0,%1,%h0), xops);
      output_asm_insn (AS2 (cmp%B0,%2,%h0), xops);
      /* je label */
      break;

    case GE:
      xops[1] = GEN_INT (0x05);
      output_asm_insn (AS2 (and%B0,%1,%h0), xops);
      /* je label */
      break;

    case LE:
      xops[1] = GEN_INT (0x45);
      xops[2] = GEN_INT (0x40);
      output_asm_insn (AS2 (and%B0,%1,%h0), xops);
      output_asm_insn (AS1 (dec%B0,%h0), xops);
      output_asm_insn (AS2 (cmp%B0,%2,%h0), xops);
      /* jb label */
      break;

    case EQ:
      xops[1] = GEN_INT (0x45);
      xops[2] = GEN_INT (0x40);
      output_asm_insn (AS2 (and%B0,%1,%h0), xops);
      output_asm_insn (AS2 (cmp%B0,%2,%h0), xops);
      /* je label */
      break;

    case NE:
      xops[1] = GEN_INT (0x44);
      xops[2] = GEN_INT (0x40);
      output_asm_insn (AS2 (and%B0,%1,%h0), xops);
      output_asm_insn (AS2 (xor%B0,%2,%h0), xops);
      /* jne label */
      break;

    case GTU:
    case LTU:
    case GEU:
    case LEU:
    default:
      abort ();
    }

  return "";
}

#define MAX_386_STACK_LOCALS 2

static rtx i386_stack_locals[(int) MAX_MACHINE_MODE][MAX_386_STACK_LOCALS];

/* Define the structure for the machine field in struct function.  */
struct machine_function
{
  rtx i386_stack_locals[(int) MAX_MACHINE_MODE][MAX_386_STACK_LOCALS];
};

/* Functions to save and restore i386_stack_locals.
   These will be called, via pointer variables,
   from push_function_context and pop_function_context.  */

void
save_386_machine_status (p)
     struct function *p;
{
  p->machine = (struct machine_function *) xmalloc (sizeof i386_stack_locals);
  bcopy ((char *) i386_stack_locals, (char *) p->machine->i386_stack_locals,
	 sizeof i386_stack_locals);
}

void
restore_386_machine_status (p)
     struct function *p;
{
  bcopy ((char *) p->machine->i386_stack_locals, (char *) i386_stack_locals,
	 sizeof i386_stack_locals);
  free (p->machine);
}

/* Clear stack slot assignments remembered from previous functions.
   This is called from INIT_EXPANDERS once before RTL is emitted for each
   function.  */

void
clear_386_stack_locals ()
{
  enum machine_mode mode;
  int n;

  for (mode = VOIDmode; (int) mode < (int) MAX_MACHINE_MODE;
       mode = (enum machine_mode) ((int) mode + 1))
    for (n = 0; n < MAX_386_STACK_LOCALS; n++)
      i386_stack_locals[(int) mode][n] = NULL_RTX;

  /* Arrange to save and restore i386_stack_locals around nested functions.  */
  save_machine_status = save_386_machine_status;
  restore_machine_status = restore_386_machine_status;
}

/* Return a MEM corresponding to a stack slot with mode MODE.
   Allocate a new slot if necessary.

   The RTL for a function can have several slots available: N is
   which slot to use.  */

rtx
assign_386_stack_local (mode, n)
     enum machine_mode mode;
     int n;
{
  if (n < 0 || n >= MAX_386_STACK_LOCALS)
    abort ();

  if (i386_stack_locals[(int) mode][n] == NULL_RTX)
    i386_stack_locals[(int) mode][n]
      = assign_stack_local (mode, GET_MODE_SIZE (mode), 0);

  return i386_stack_locals[(int) mode][n];
}

int is_mul(op,mode)
    register rtx op;
    enum machine_mode mode;
{
  return (GET_CODE (op) == MULT);
}

int is_div(op,mode)
    register rtx op;
    enum machine_mode mode;
{
  return (GET_CODE (op) == DIV);
}

#ifdef NOTYET
/* Create a new copy of an rtx.
   Recursively copies the operands of the rtx,
   except for those few rtx codes that are sharable.
   Doesn't share CONST  */

rtx
copy_all_rtx (orig)
     register rtx orig;
{
  register rtx copy;
  register int i, j;
  register RTX_CODE code;
  register char *format_ptr;

  code = GET_CODE (orig);

  switch (code)
    {
    case REG:
    case QUEUED:
    case CONST_INT:
    case CONST_DOUBLE:
    case SYMBOL_REF:
    case CODE_LABEL:
    case PC:
    case CC0:
    case SCRATCH:
      /* SCRATCH must be shared because they represent distinct values. */
      return orig;

#if 0
    case CONST:
      /* CONST can be shared if it contains a SYMBOL_REF.  If it contains
	 a LABEL_REF, it isn't sharable.  */
      if (GET_CODE (XEXP (orig, 0)) == PLUS
	  && GET_CODE (XEXP (XEXP (orig, 0), 0)) == SYMBOL_REF
	  && GET_CODE (XEXP (XEXP (orig, 0), 1)) == CONST_INT)
	return orig;
      break;
#endif
      /* A MEM with a constant address is not sharable.  The problem is that
	 the constant address may need to be reloaded.  If the mem is shared,
	 then reloading one copy of this mem will cause all copies to appear
	 to have been reloaded.  */
    }

  copy = rtx_alloc (code);
  PUT_MODE (copy, GET_MODE (orig));
  copy->in_struct = orig->in_struct;
  copy->volatil = orig->volatil;
  copy->unchanging = orig->unchanging;
  copy->integrated = orig->integrated;
  /* intel1 */
  copy->is_spill_rtx = orig->is_spill_rtx;
  
  format_ptr = GET_RTX_FORMAT (GET_CODE (copy));

  for (i = 0; i < GET_RTX_LENGTH (GET_CODE (copy)); i++)
    {
      switch (*format_ptr++)
	{
	case 'e':
	  XEXP (copy, i) = XEXP (orig, i);
	  if (XEXP (orig, i) != NULL)
	    XEXP (copy, i) = copy_rtx (XEXP (orig, i));
	  break;

	case '0':
	case 'u':
	  XEXP (copy, i) = XEXP (orig, i);
	  break;

	case 'E':
	case 'V':
	  XVEC (copy, i) = XVEC (orig, i);
	  if (XVEC (orig, i) != NULL)
	    {
	      XVEC (copy, i) = rtvec_alloc (XVECLEN (orig, i));
	      for (j = 0; j < XVECLEN (copy, i); j++)
		XVECEXP (copy, i, j) = copy_rtx (XVECEXP (orig, i, j));
	    }
	  break;

	case 'w':
	  XWINT (copy, i) = XWINT (orig, i);
	  break;

	case 'i':
	  XINT (copy, i) = XINT (orig, i);
	  break;

	case 's':
	case 'S':
	  XSTR (copy, i) = XSTR (orig, i);
	  break;

	default:
	  abort ();
	}
    }
  return copy;
}


/* Try to rewrite a memory address to make it valid */

void 
rewrite_address (mem_rtx)
     rtx mem_rtx;
{
  rtx index_rtx, base_rtx, offset_rtx, scale_rtx, ret_rtx;
  int scale = 1;
  int offset_adjust = 0;
  int was_only_offset = 0;
  rtx mem_addr = XEXP (mem_rtx, 0);
  char *storage = oballoc (0);
  int in_struct = 0;
  int is_spill_rtx = 0;

  in_struct = MEM_IN_STRUCT_P (mem_rtx);
  is_spill_rtx = RTX_IS_SPILL_P (mem_rtx);

  if (GET_CODE (mem_addr) == PLUS
      && GET_CODE (XEXP (mem_addr, 1)) == PLUS
      && GET_CODE (XEXP (XEXP (mem_addr, 1), 0)) == REG)
    {
      /* This part is utilized by the combiner. */
      ret_rtx
	= gen_rtx (PLUS, GET_MODE (mem_addr),
		   gen_rtx (PLUS, GET_MODE (XEXP (mem_addr, 1)),
			    XEXP (mem_addr, 0), XEXP (XEXP (mem_addr, 1), 0)),
		   XEXP (XEXP (mem_addr, 1), 1));

      if (memory_address_p (GET_MODE (mem_rtx), ret_rtx))
	{
	  XEXP (mem_rtx, 0) = ret_rtx;
	  RTX_IS_SPILL_P (ret_rtx) = is_spill_rtx;
	  return;
	}

      obfree (storage);
    }

  /* This part is utilized by loop.c.  
     If the address contains PLUS (reg,const) and this pattern is invalid
     in this case - try to rewrite the address to make it valid. */
  storage = oballoc (0);
  index_rtx = base_rtx = offset_rtx = NULL;

  /* Find the base index and offset elements of the memory address. */
  if (GET_CODE (mem_addr) == PLUS)
    {
      if (GET_CODE (XEXP (mem_addr, 0)) == REG)
	{
	  if (GET_CODE (XEXP (mem_addr, 1)) == REG)
	    base_rtx = XEXP (mem_addr, 1), index_rtx = XEXP (mem_addr, 0);
	  else
	    base_rtx = XEXP (mem_addr, 0), offset_rtx = XEXP (mem_addr, 1);
	}

      else if (GET_CODE (XEXP (mem_addr, 0)) == MULT)
	{
	  index_rtx = XEXP (mem_addr, 0);
	  if (GET_CODE (XEXP (mem_addr, 1)) == REG)
	    base_rtx = XEXP (mem_addr, 1);
	  else
	    offset_rtx = XEXP (mem_addr, 1);
	}

      else if (GET_CODE (XEXP (mem_addr, 0)) == PLUS)
	{
	  if (GET_CODE (XEXP (XEXP (mem_addr, 0), 0)) == PLUS
	      && GET_CODE (XEXP (XEXP (XEXP (mem_addr, 0), 0), 0)) == MULT
	      && (GET_CODE (XEXP (XEXP (XEXP (XEXP (mem_addr, 0), 0), 0), 0))
		  == REG)
	      && (GET_CODE (XEXP (XEXP (XEXP (XEXP (mem_addr, 0), 0), 0), 1))
		  == CONST_INT)
	      && (GET_CODE (XEXP (XEXP (XEXP (mem_addr, 0), 0), 1))
		  == CONST_INT)
	      && GET_CODE (XEXP (XEXP (mem_addr, 0), 1)) == REG
	      && GET_CODE (XEXP (mem_addr, 1)) == SYMBOL_REF)
	    {
	      index_rtx = XEXP (XEXP (XEXP (mem_addr, 0), 0), 0);
	      offset_rtx = XEXP (mem_addr, 1);
	      base_rtx = XEXP (XEXP (mem_addr, 0), 1);
	      offset_adjust = INTVAL (XEXP (XEXP (XEXP (mem_addr, 0), 0), 1));
	    }
	  else
	    {
	      offset_rtx = XEXP (mem_addr, 1);
	      index_rtx = XEXP (XEXP (mem_addr, 0), 0);
	      base_rtx = XEXP (XEXP (mem_addr, 0), 1);
	    }
	}

      else if (GET_CODE (XEXP (mem_addr, 0)) == CONST_INT)
	{
	  was_only_offset = 1;
	  index_rtx = NULL;
	  base_rtx = NULL;
	  offset_rtx = XEXP (mem_addr, 1);
	  offset_adjust = INTVAL (XEXP (mem_addr, 0));
	  if (offset_adjust == 0)
	    {
	      XEXP (mem_rtx, 0) = offset_rtx;
	      RTX_IS_SPILL_P (XEXP (mem_rtx, 0)) = is_spill_rtx;
	      return;
	    }
	}
      else
	{
	  obfree (storage);
	  return;
	}
    }
  else if (GET_CODE (mem_addr) == MULT)
    index_rtx = mem_addr;
  else
    {
      obfree (storage);
      return;
    }

  if (index_rtx != 0 && GET_CODE (index_rtx) == MULT)
    {
      if (GET_CODE (XEXP (index_rtx, 1)) != CONST_INT)
	{
	  obfree (storage);
	  return;
	}

      scale_rtx = XEXP (index_rtx, 1);
      scale = INTVAL (scale_rtx);
      index_rtx = copy_all_rtx (XEXP (index_rtx, 0));
    }

  /* Now find which of the elements are invalid and try to fix them. */
  if (index_rtx && GET_CODE (index_rtx) == CONST_INT && base_rtx == NULL)
    {
      offset_adjust = INTVAL (index_rtx) * scale;

      if (offset_rtx != 0 && CONSTANT_P (offset_rtx))
	offset_rtx = plus_constant (offset_rtx, offset_adjust);
      else if (offset_rtx == 0)
	offset_rtx = const0_rtx;

      RTX_IS_SPILL_P (XEXP (mem_rtx, 0)) = is_spill_rtx;
      XEXP (mem_rtx, 0) = offset_rtx;
      return;
    }

  if (base_rtx && GET_CODE (base_rtx) == PLUS
      && GET_CODE (XEXP (base_rtx, 0)) == REG
      && GET_CODE (XEXP (base_rtx, 1)) == CONST_INT)
    {
      offset_adjust += INTVAL (XEXP (base_rtx, 1));
      base_rtx = copy_all_rtx (XEXP (base_rtx, 0));
    }

  else if (base_rtx && GET_CODE (base_rtx) == CONST_INT)
    {
      offset_adjust += INTVAL (base_rtx);
      base_rtx = NULL;
    }

  if (index_rtx && GET_CODE (index_rtx) == PLUS
      && GET_CODE (XEXP (index_rtx, 0)) == REG
      && GET_CODE (XEXP (index_rtx, 1)) == CONST_INT)
    {
      offset_adjust += INTVAL (XEXP (index_rtx, 1)) * scale;
      index_rtx = copy_all_rtx (XEXP (index_rtx, 0));
    }

  if (index_rtx)
    {
      if (! LEGITIMATE_INDEX_P (index_rtx)
	  && ! (index_rtx == stack_pointer_rtx && scale == 1
		&& base_rtx == NULL))
	{
	  obfree (storage);
	  return;
	}
    }

  if (base_rtx)
    {
      if (! LEGITIMATE_INDEX_P (base_rtx) && GET_CODE (base_rtx) != REG)
	{
	  obfree (storage);
	  return;
	}
    }

  if (offset_adjust != 0)
    {
      if (offset_rtx != 0 && CONSTANT_P (offset_rtx))
	offset_rtx = plus_constant (offset_rtx, offset_adjust);
      else
	offset_rtx = const0_rtx;

      if (index_rtx)
	{
	  if (base_rtx)
	    {
	      if (scale != 1)
		{
		  ret_rtx = gen_rtx (PLUS, GET_MODE (base_rtx),
				     gen_rtx (MULT, GET_MODE (index_rtx),
					      index_rtx, scale_rtx),
				     base_rtx);

		  if (GET_CODE (offset_rtx) != CONST_INT
		      || INTVAL (offset_rtx) != 0)
		    ret_rtx = gen_rtx (PLUS, GET_MODE (ret_rtx),
				       ret_rtx, offset_rtx);
		}
	      else
		{
		  ret_rtx = gen_rtx (PLUS, GET_MODE (index_rtx),
				     index_rtx, base_rtx);

		  if (GET_CODE (offset_rtx) != CONST_INT
		      || INTVAL (offset_rtx) != 0)
		    ret_rtx = gen_rtx (PLUS, GET_MODE (ret_rtx),
				       ret_rtx, offset_rtx);
		}
	    }
	  else
	    {
	      if (scale != 1)
		{
		  ret_rtx = gen_rtx (MULT, GET_MODE (index_rtx),
				     index_rtx, scale_rtx);

		  if (GET_CODE (offset_rtx) != CONST_INT
		      || INTVAL (offset_rtx) != 0)
		    ret_rtx = gen_rtx (PLUS, GET_MODE (ret_rtx),
				       ret_rtx, offset_rtx);
		}
	      else
		{
		  if (GET_CODE (offset_rtx) == CONST_INT
		      && INTVAL (offset_rtx) == 0)
		    ret_rtx = index_rtx;
		  else
		    ret_rtx = gen_rtx (PLUS, GET_MODE (index_rtx),
				       index_rtx, offset_rtx);
		}
	    }
	}
      else
	{
	  if (base_rtx)
	    {
	      if (GET_CODE (offset_rtx) == CONST_INT
		  && INTVAL (offset_rtx) == 0)
		ret_rtx = base_rtx;
	      else
		ret_rtx = gen_rtx (PLUS, GET_MODE (base_rtx), base_rtx,
				   offset_rtx);
	    }
	  else if (was_only_offset)
	    ret_rtx = offset_rtx;
	  else
	    {
	      obfree (storage);
	      return;
	    }
	}

      XEXP (mem_rtx, 0) = ret_rtx;
      RTX_IS_SPILL_P (XEXP (mem_rtx, 0)) = is_spill_rtx;
      return;
    }
  else
    {
      obfree (storage);
      return;
    }
}
#endif /* NOTYET */

/* Return 1 if the first insn to set cc before INSN also sets the register
   REG_RTX; otherwise return 0. */
int
last_to_set_cc (reg_rtx, insn)
     rtx reg_rtx, insn;
{
  rtx prev_insn = PREV_INSN (insn);

  while (prev_insn)
    {
      if (GET_CODE (prev_insn) == NOTE)
	;

      else if (GET_CODE (prev_insn) == INSN)
	{
	  if (GET_CODE (PATTERN (prev_insn)) != SET)
	    return (0);

	  if (rtx_equal_p (SET_DEST (PATTERN (prev_insn)), reg_rtx))
	    {
	      if (sets_condition_code (SET_SRC (PATTERN (prev_insn))))
		return (1);

	      return (0);
	    }

	  else if (! doesnt_set_condition_code (SET_SRC (PATTERN (prev_insn))))
	    return (0);
	}

      else
	return (0);

      prev_insn = PREV_INSN (prev_insn);
    }

  return (0);
}

int
doesnt_set_condition_code (pat)
     rtx pat;
{
  switch (GET_CODE (pat))
    {
    case MEM:
    case REG:
      return 1;

    default:
      return 0;

    }
}

int
sets_condition_code (pat)
     rtx pat;
{
  switch (GET_CODE (pat))
    {
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
    case NOT:
    case NEG:
    case MULT:
    case DIV:
    case MOD:
    case UDIV:
    case UMOD:
      return 1;

    default:
      return (0);
    }
}

int
str_immediate_operand (op, mode)
     register rtx op;
     enum machine_mode mode;
{
  if (GET_CODE (op) == CONST_INT && INTVAL (op) <= 32 && INTVAL (op) >= 0)
    return 1;

  return 0;
}

int
is_fp_insn (insn)
     rtx insn;
{
  if (GET_CODE (insn) == INSN && GET_CODE (PATTERN (insn)) == SET
      && (GET_MODE (SET_DEST (PATTERN (insn))) == DFmode
	  || GET_MODE (SET_DEST (PATTERN (insn))) == SFmode
	  || GET_MODE (SET_DEST (PATTERN (insn))) == XFmode))
    return 1;

  return 0;
}

/* Return 1 if the mode of the SET_DEST of insn is floating point
   and it is not an fld or a move from memory to memory.
   Otherwise return 0 */

int
is_fp_dest (insn)
     rtx insn;
{
  if (GET_CODE (insn) == INSN && GET_CODE (PATTERN (insn)) == SET
      && (GET_MODE (SET_DEST (PATTERN (insn))) == DFmode
	  || GET_MODE (SET_DEST (PATTERN (insn))) == SFmode
	  || GET_MODE (SET_DEST (PATTERN (insn))) == XFmode)
      && GET_CODE (SET_DEST (PATTERN (insn))) == REG
      && REGNO (SET_DEST (PATTERN (insn))) >= FIRST_FLOAT_REG
      && GET_CODE (SET_SRC (insn)) != MEM)
    return 1;

  return 0;
}

/* Return 1 if the mode of the SET_DEST of INSN is floating point and is
   memory and the source is a register.  */

int
is_fp_store (insn)
     rtx insn;
{
  if (GET_CODE (insn) == INSN && GET_CODE (PATTERN (insn)) == SET
      && (GET_MODE (SET_DEST (PATTERN (insn))) == DFmode
	  || GET_MODE (SET_DEST (PATTERN (insn))) == SFmode
	  || GET_MODE (SET_DEST (PATTERN (insn))) == XFmode)
      && GET_CODE (SET_DEST (PATTERN (insn))) == MEM
      && GET_CODE (SET_SRC (PATTERN (insn))) == REG)
    return 1;

  return 0;
}

/* Return 1 if DEP_INSN sets a register which INSN uses as a base
   or index to reference memory.
   otherwise return 0 */

int
agi_dependent (insn, dep_insn)
     rtx insn, dep_insn;
{
  if (GET_CODE (dep_insn) == INSN
      && GET_CODE (PATTERN (dep_insn)) == SET
      && GET_CODE (SET_DEST (PATTERN (dep_insn))) == REG)
    return reg_mentioned_in_mem (SET_DEST (PATTERN (dep_insn)), insn);

  if (GET_CODE (dep_insn) == INSN && GET_CODE (PATTERN (dep_insn)) == SET
      && GET_CODE (SET_DEST (PATTERN (dep_insn))) == MEM
      && push_operand (SET_DEST (PATTERN (dep_insn)),
                       GET_MODE (SET_DEST (PATTERN (dep_insn)))))
    return reg_mentioned_in_mem (stack_pointer_rtx, insn);

  return 0;
}

/* Return 1 if reg is used in rtl as a base or index for a memory ref
   otherwise return 0. */

int
reg_mentioned_in_mem (reg, rtl)
     rtx reg, rtl;
{
  register char *fmt;
  register int i, j;
  register enum rtx_code code;

  if (rtl == NULL)
    return 0;

  code = GET_CODE (rtl);

  switch (code)
    {
    case HIGH:
    case CONST_INT:
    case CONST:
    case CONST_DOUBLE:
    case SYMBOL_REF:
    case LABEL_REF:
    case PC:
    case CC0:
    case SUBREG:
      return 0;
    }

  if (code == MEM && reg_mentioned_p (reg, rtl))
    return 1;

  fmt = GET_RTX_FORMAT (code);
  for (i = GET_RTX_LENGTH (code) - 1; i >= 0; i--)
    {
      if (fmt[i] == 'E')
	for (j = XVECLEN (rtl, i) - 1; j >= 0; j--)
	  if (reg_mentioned_in_mem (reg, XVECEXP (rtl, i, j)))
	    return 1;

      else if (fmt[i] == 'e' && reg_mentioned_in_mem (reg, XEXP (rtl, i)))
	return 1;
    }

  return 0;
}

/* Output the appropriate insns for doing strlen if not just doing repnz; scasb

   operands[0] = result, initialized with the startaddress
   operands[1] = alignment of the address.
   operands[2] = scratch register, initialized with the startaddress when
   		 not aligned, otherwise undefined

   This is just the body. It needs the initialisations mentioned above and
   some address computing at the end.  These things are done in i386.md.  */

char *
output_strlen_unroll (operands)
     rtx operands[];
{
  rtx xops[18];

  xops[0] = operands[0];		/* Result */
  /*        operands[1];                 * Alignment */
  xops[1] = operands[2];		/* Scratch */
  xops[2] = GEN_INT (0);
  xops[3] = GEN_INT (2);
  xops[4] = GEN_INT (3);
  xops[5] = GEN_INT (4);
  /* xops[6] = gen_label_rtx ();	 * label when aligned to 3-byte */
  /* xops[7] = gen_label_rtx ();	 * label when aligned to 2-byte */
  xops[8] = gen_label_rtx ();		/* label of main loop */

  if (TARGET_USE_Q_REG && QI_REG_P (xops[1]))
    xops[9] = gen_label_rtx ();		/* pentium optimisation */

  xops[10] = gen_label_rtx ();		/* end label 2 */
  xops[11] = gen_label_rtx ();		/* end label 1 */
  xops[12] = gen_label_rtx ();		/* end label */
  /* xops[13]				 * Temporary used */
  xops[14] = GEN_INT (0xff);
  xops[15] = GEN_INT (0xff00);
  xops[16] = GEN_INT (0xff0000);
  xops[17] = GEN_INT (0xff000000);

  /* Loop to check 1..3 bytes for null to get an aligned pointer.  */

  /* Is there a known alignment and is it less than 4?  */
  if (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) < 4)
    {
      /* Is there a known alignment and is it not 2? */
      if (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) != 2)
	{
	  xops[6] = gen_label_rtx (); /* Label when aligned to 3-byte */
	  xops[7] = gen_label_rtx (); /* Label when aligned to 2-byte */

	  /* Leave just the 3 lower bits.
	     If this is a q-register, then the high part is used later
	     therefore use andl rather than andb. */
	  output_asm_insn (AS2 (and%L1,%4,%1), xops);

	  /* Is aligned to 4-byte address when zero */
	  output_asm_insn (AS1 (je,%l8), xops);

	  /* Side-effect even Parity when %eax == 3 */
	  output_asm_insn (AS1 (jp,%6), xops);

	  /* Is it aligned to 2 bytes ? */
	  if (QI_REG_P (xops[1]))
	    output_asm_insn (AS2 (cmp%L1,%3,%1), xops);
	  else
	    output_asm_insn (AS2 (cmp%L1,%3,%1), xops);

	  output_asm_insn (AS1 (je,%7), xops);
	}
      else
        {
	  /* Since the alignment is 2, we have to check 2 or 0 bytes;
	     check if is aligned to 4 - byte.  */
	  output_asm_insn (AS2 (and%L1,%3,%1), xops);

	  /* Is aligned to 4-byte address when zero */
	  output_asm_insn (AS1 (je,%l8), xops);
        }

      xops[13] = gen_rtx (MEM, QImode, xops[0]);

      /* Now compare the bytes; compare with the high part of a q-reg
	 gives shorter code. */
      if (QI_REG_P (xops[1]))
        {
	  /* Compare the first n unaligned byte on a byte per byte basis. */
          output_asm_insn (AS2 (cmp%B1,%h1,%13), xops);

	  /* When zero we reached the end. */
          output_asm_insn (AS1 (je,%l12), xops);

	  /* Increment the address. */
          output_asm_insn (AS1 (inc%L0,%0), xops);

	  /* Not needed with an alignment of 2 */
	  if (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) != 2)
	    {
	      ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
					 CODE_LABEL_NUMBER (xops[7]));
	      output_asm_insn (AS2 (cmp%B1,%h1,%13), xops);
	      output_asm_insn (AS1 (je,%l12), xops);
	      output_asm_insn (AS1 (inc%L0,%0), xops);

	      ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
					 CODE_LABEL_NUMBER (xops[6]));
	    }

          output_asm_insn (AS2 (cmp%B1,%h1,%13), xops);
        }
      else
        {
          output_asm_insn (AS2 (cmp%B13,%2,%13), xops);
          output_asm_insn (AS1 (je,%l12), xops);
          output_asm_insn (AS1 (inc%L0,%0), xops);

	  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
				     CODE_LABEL_NUMBER (xops[7]));
          output_asm_insn (AS2 (cmp%B13,%2,%13), xops);
          output_asm_insn (AS1 (je,%l12), xops);
          output_asm_insn (AS1 (inc%L0,%0), xops);

	  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
				     CODE_LABEL_NUMBER (xops[6]));
          output_asm_insn (AS2 (cmp%B13,%2,%13), xops);
        }

      output_asm_insn (AS1 (je,%l12), xops);
      output_asm_insn (AS1 (inc%L0,%0), xops);
    }

    /* Generate loop to check 4 bytes at a time.  It is not a good idea to
       align this loop.  It gives only huge programs, but does not help to
       speed up.  */
  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L", CODE_LABEL_NUMBER (xops[8]));

  xops[13] = gen_rtx (MEM, SImode, xops[0]);
  output_asm_insn (AS2 (mov%L1,%13,%1), xops);

  if (QI_REG_P (xops[1]))
    {
      /* On i586 it is faster to combine the hi- and lo- part as
	 a kind of lookahead.  If anding both yields zero, then one
	 of both *could* be zero, otherwise none of both is zero;
	 this saves one instruction, on i486 this is slower
	 tested with P-90, i486DX2-66, AMD486DX2-66  */
      if (TARGET_PENTIUM)
        {
	  output_asm_insn (AS2 (test%B1,%h1,%b1), xops);
	  output_asm_insn (AS1 (jne,%l9), xops);
        }

      /* Check first byte. */
      output_asm_insn (AS2 (test%B1,%b1,%b1), xops);
      output_asm_insn (AS1 (je,%l12), xops);

      /* Check second byte. */
      output_asm_insn (AS2 (test%B1,%h1,%h1), xops);
      output_asm_insn (AS1 (je,%l11), xops);

      if (TARGET_PENTIUM)
	ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
				   CODE_LABEL_NUMBER (xops[9]));
    }

  else
    {
      /* Check first byte. */
      output_asm_insn (AS2 (test%L1,%14,%1), xops);
      output_asm_insn (AS1 (je,%l12), xops);

      /* Check second byte. */
      output_asm_insn (AS2 (test%L1,%15,%1), xops);
      output_asm_insn (AS1 (je,%l11), xops);
    }

  /* Check third byte. */
  output_asm_insn (AS2 (test%L1,%16,%1), xops);
  output_asm_insn (AS1 (je,%l10), xops);
  
  /* Check fourth byte and increment address. */
  output_asm_insn (AS2 (add%L0,%5,%0), xops);
  output_asm_insn (AS2 (test%L1,%17,%1), xops);
  output_asm_insn (AS1 (jne,%l8), xops);

  /* Now generate fixups when the compare stops within a 4-byte word. */
  output_asm_insn (AS2 (sub%L0,%4,%0), xops);

  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L", CODE_LABEL_NUMBER (xops[10]));
  output_asm_insn (AS1 (inc%L0,%0), xops);

  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L", CODE_LABEL_NUMBER (xops[11]));
  output_asm_insn (AS1 (inc%L0,%0), xops);

  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L", CODE_LABEL_NUMBER (xops[12]));

  return "";
}
