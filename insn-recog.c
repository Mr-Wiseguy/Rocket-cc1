/* Generated automatically by the program `genrecog'
from the machine description file `md'.  */

#include "config.h"
#include <stdio.h>
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"

extern rtx gen_split_6 ();
extern rtx gen_split_7 ();
extern rtx gen_split_9 ();
extern rtx gen_split_10 ();
extern rtx gen_split_19 ();
extern rtx gen_split_20 ();
extern rtx gen_split_22 ();
extern rtx gen_split_23 ();
extern rtx gen_split_98 ();
extern rtx gen_split_101 ();
extern rtx gen_split_105 ();
extern rtx gen_split_108 ();
extern rtx gen_split_112 ();
extern rtx gen_split_165 ();
extern rtx gen_split_169 ();
extern rtx gen_split_198 ();
extern rtx gen_split_202 ();
extern rtx gen_split_209 ();
extern rtx gen_split_210 ();
extern rtx gen_split_212 ();
extern rtx gen_split_213 ();
extern rtx gen_split_219 ();
extern rtx gen_split_220 ();
extern rtx gen_split_222 ();
extern rtx gen_split_223 ();
extern rtx gen_split_229 ();
extern rtx gen_split_230 ();
extern rtx gen_split_232 ();
extern rtx gen_split_233 ();
extern rtx gen_split_261 ();
extern rtx gen_split_263 ();
extern rtx gen_split_268 ();
extern rtx gen_split_270 ();
extern rtx gen_split_276 ();
extern rtx gen_split_278 ();
extern rtx gen_split_286 ();
extern rtx gen_split_288 ();
extern rtx gen_split_294 ();
extern rtx gen_split_296 ();
extern rtx gen_split_304 ();
extern rtx gen_split_306 ();

/* `recog' contains a decision tree
   that recognizes whether the rtx X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.
   If the rtx is valid, recog returns a nonnegative number
   which is the insn code number for the pattern that matched.
   This is the same as the order in the machine description of
   the entry that matched.  This number can be used as an index into
   entry that matched.  This number can be used as an index into various
   insn_* tables, such as insn_templates, insn_outfun, and insn_n_operands
   (found in insn-output.c).

   The third argument to recog is an optional pointer to an int.
   If present, recog will accept a pattern if it matches except for
   missing CLOBBER expressions at the end.  In that case, the value
   pointed to by the optional pointer will be set to the number of
   CLOBBERs that need to be added (it should be initialized to zero by
   the caller).  If it is set nonzero, the caller should allocate a
   PARALLEL of the appropriate size, copy the initial entries, and call
   add_clobbers (found in insn-emit.c) to fill in the CLOBBERs.

   The function split_insns returns 0 if the rtl could not
   be split or the split rtl in a SEQUENCE if it can be.*/

rtx recog_operand[MAX_RECOG_OPERANDS];

rtx *recog_operand_loc[MAX_RECOG_OPERANDS];

rtx *recog_dup_loc[MAX_DUP_OPERANDS];

char recog_dup_num[MAX_DUP_OPERANDS];

#define operands recog_operand

int
recog_1 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DFmode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L597;
    case MINUS:
      goto L611;
    case MULT:
      goto L159;
    case NEG:
      goto L625;
    case DIV:
      goto L665;
    case SQRT:
      goto L923;
    case ABS:
      goto L951;
    case FLOAT_EXTEND:
      goto L1203;
    case FLOAT:
      goto L1255;
    case MEM:
      goto L1323;
    case IF_THEN_ELSE:
      goto L2264;
    }
  goto ret0;

  L597:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L598;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L4;
    }
  goto ret0;

  L598:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L599;
    }
  goto ret0;

  L599:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L600;
    }
  goto ret0;

  L600:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 56;
      }
  goto ret0;

  L4:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 0;
      }
  goto ret0;

  L611:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L612;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L642;
    }
  goto ret0;

  L612:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L613;
    }
  goto ret0;

  L613:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L614;
    }
  goto ret0;

  L614:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 58;
      }
  goto ret0;

  L642:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L643;
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 13;
      }
  goto ret0;

  L643:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L644;
    }
  goto ret0;

  L644:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 62;
      }
  goto ret0;

  L159:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L160;
    }
  goto ret0;

  L160:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    goto L166;
  goto ret0;

  L166:
  ro[2] = x2;
  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && mips_cpu != PROCESSOR_R4300)
    return 27;
  L167:
  ro[2] = x2;
  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && mips_cpu == PROCESSOR_R4300)
    return 28;
  goto ret0;

  L625:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == PLUS && 1)
    goto L626;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 94;
      }
  goto ret0;

  L626:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode && GET_CODE (x3) == MULT && 1)
    goto L627;
  goto ret0;

  L627:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      ro[1] = x4;
      goto L628;
    }
  goto ret0;

  L628:
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      ro[2] = x4;
      goto L629;
    }
  goto ret0;

  L629:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 60;
      }
  goto ret0;

  L665:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == CONST_DOUBLE && const_float_1_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L932;
    }
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L656;
    }
  goto ret0;

  L932:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == SQRT && 1)
    goto L933;
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && flag_fast_math)
	return 66;
      }
  goto ret0;

  L933:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && flag_fast_math)
	return 82;
      }
  goto ret0;

  L656:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 64;
      }
  goto ret0;

  L923:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && HAVE_SQRT_P() && TARGET_DOUBLE_FLOAT)
	return 80;
      }
  goto ret0;

  L951:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 86;
      }
  goto ret0;

  L1203:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 143;
      }
  goto ret0;

  L1255:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	    return 148;
	  }
      break;
    case DImode:
      if (se_nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    return 149;
	  }
    }
  goto ret0;

  L1323:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != PLUS)
    goto ret0;
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L1324;
    case DImode:
      goto L1330;
    }
  goto ret0;

  L1324:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1325;
    }
  goto ret0;

  L1325:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 179;
      }
  goto ret0;

  L1330:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1331;
    }
  goto ret0;

  L1331:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 180;
      }
  goto ret0;

  L2264:
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2265;
    }
  L2272:
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2273;
    }
  goto ret0;

  L2265:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2266;
    }
  goto L2272;

  L2266:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2267;
  goto L2272;

  L2267:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      goto L2268;
    }
  x2 = XEXP (x1, 0);
  goto L2272;

  L2268:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 366;
      }
  x2 = XEXP (x1, 0);
  goto L2272;

  L2273:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[4] = x3;
      goto L2274;
    }
  goto ret0;

  L2274:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2275;
  goto ret0;

  L2275:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L2276;
    }
  goto ret0;

  L2276:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 367;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_2 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SFmode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L604;
    case MINUS:
      goto L618;
    case MULT:
      goto L171;
    case NEG:
      goto L633;
    case DIV:
      goto L670;
    case SQRT:
      goto L927;
    case ABS:
      goto L955;
    case FLOAT_TRUNCATE:
      goto L1096;
    case FLOAT:
      goto L1263;
    case MEM:
      goto L1311;
    case IF_THEN_ELSE:
      goto L2248;
    }
  goto ret0;

  L604:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L605;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L9;
    }
  goto ret0;

  L605:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L606;
    }
  goto ret0;

  L606:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L607;
    }
  goto ret0;

  L607:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 57;
      }
  goto ret0;

  L9:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 1;
      }
  goto ret0;

  L618:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L619;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L649;
    }
  goto ret0;

  L619:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L620;
    }
  goto ret0;

  L620:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L621;
    }
  goto ret0;

  L621:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 59;
      }
  goto ret0;

  L649:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L650;
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 14;
      }
  goto ret0;

  L650:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L651;
    }
  goto ret0;

  L651:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 63;
      }
  goto ret0;

  L171:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L172;
    }
  goto ret0;

  L172:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    goto L178;
  goto ret0;

  L178:
  ro[2] = x2;
  if (TARGET_HARD_FLOAT && mips_cpu != PROCESSOR_R4300)
    return 30;
  L179:
  ro[2] = x2;
  if (TARGET_HARD_FLOAT && mips_cpu == PROCESSOR_R4300)
    return 31;
  goto ret0;

  L633:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == PLUS && 1)
    goto L634;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 95;
      }
  goto ret0;

  L634:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode && GET_CODE (x3) == MULT && 1)
    goto L635;
  goto ret0;

  L635:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      ro[1] = x4;
      goto L636;
    }
  goto ret0;

  L636:
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      ro[2] = x4;
      goto L637;
    }
  goto ret0;

  L637:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 61;
      }
  goto ret0;

  L670:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == CONST_DOUBLE && const_float_1_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L938;
    }
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L661;
    }
  goto ret0;

  L938:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == SQRT && 1)
    goto L939;
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && flag_fast_math)
	return 67;
      }
  goto ret0;

  L939:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && flag_fast_math)
	return 83;
      }
  goto ret0;

  L661:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 65;
      }
  goto ret0;

  L927:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && HAVE_SQRT_P())
	return 81;
      }
  goto ret0;

  L955:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 87;
      }
  goto ret0;

  L1096:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 113;
      }
  goto ret0;

  L1263:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    return 150;
	  }
      break;
    case DImode:
      if (se_nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    return 151;
	  }
    }
  goto ret0;

  L1311:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != PLUS)
    goto ret0;
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L1312;
    case DImode:
      goto L1318;
    }
  goto ret0;

  L1312:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1313;
    }
  goto ret0;

  L1313:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 177;
      }
  goto ret0;

  L1318:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1319;
    }
  goto ret0;

  L1319:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 178;
      }
  goto ret0;

  L2248:
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2249;
    }
  L2256:
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2257;
    }
  goto ret0;

  L2249:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2250;
    }
  goto L2256;

  L2250:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2251;
  goto L2256;

  L2251:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      goto L2252;
    }
  x2 = XEXP (x1, 0);
  goto L2256;

  L2252:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 364;
      }
  x2 = XEXP (x1, 0);
  goto L2256;

  L2257:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[4] = x3;
      goto L2258;
    }
  goto ret0;

  L2258:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2259;
  goto ret0;

  L2259:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L2260;
    }
  goto ret0;

  L2260:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 365;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_3 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L477;
    case MINUS:
      goto L91;
    case MULT:
      goto L195;
    case TRUNCATE:
      goto L342;
    case DIV:
      goto L799;
    case MOD:
      goto L833;
    case UDIV:
      goto L867;
    case UMOD:
      goto L901;
    case ABS:
      goto L943;
    case FFS:
      goto L968;
    case NEG:
      goto L985;
    case NOT:
      goto L1008;
    case AND:
      goto L1075;
    case IOR:
      goto L1040;
    case XOR:
      goto L1055;
    case ZERO_EXTEND:
      goto L1130;
    case SIGN_EXTEND:
      goto L1187;
    case UNSPEC:
      if (XINT (x1, 1) == 0 && XVECLEN (x1, 0) == 1 && 1)
	goto L1271;
      break;
    case HIGH:
      goto L1279;
    case LO_SUM:
      goto L1283;
    case ASHIFT:
      goto L1482;
    case ASHIFTRT:
      goto L1554;
    case LSHIFTRT:
      goto L1626;
    case EQ:
      goto L1746;
    case NE:
      goto L1776;
    case GT:
      goto L1806;
    case GE:
      goto L1816;
    case LT:
      goto L1836;
    case LE:
      goto L1846;
    case GTU:
      goto L1876;
    case GEU:
      goto L1886;
    case LTU:
      goto L1906;
    case LEU:
      goto L1916;
    case IF_THEN_ELSE:
      goto L2200;
    }
  goto ret0;

  L477:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MULT && 1)
    goto L478;
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L14;
    }
  goto ret0;

  L478:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L479;
    }
  goto ret0;

  L479:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L480;
    }
  goto ret0;

  L480:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && pnum_clobbers != 0 && 1)
    if (TARGET_MAD || GENERATE_MADD)
      {
	*pnum_clobbers = 2;
	return 50;
      }
  L593:
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (GENERATE_MADD)
	{
	  *pnum_clobbers = 3;
	  return 55;
	}
      }
  goto ret0;

  L14:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768)
	return 3;
      }
  goto ret0;

  L91:
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L92;
    }
  goto ret0;

  L92:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768)
	return 16;
      }
  goto ret0;

  L195:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L196;
    }
  goto ret0;

  L196:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L212;
  L230:
  if (register_operand (x2, SImode))
    goto L250;
  goto ret0;

  L212:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (GENERATE_MULT3)
	{
	  *pnum_clobbers = 3;
	  return 33;
	}
      }
  L213:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (mips_cpu != PROCESSOR_R4000)
	{
	  *pnum_clobbers = 2;
	  return 34;
	}
      }
  goto L230;

  L250:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (mips_cpu == PROCESSOR_R4000)
	{
	  *pnum_clobbers = 3;
	  return 35;
	}
      }
  L251:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (TARGET_MAD)
	{
	  *pnum_clobbers = 3;
	  return 36;
	}
      }
  goto ret0;

  L342:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LSHIFTRT:
      goto L343;
    case ASHIFTRT:
      goto L1113;
    case ASHIFT:
      goto L1125;
    case SUBREG:
    case REG:
    case SIGN_EXTEND:
      if (se_register_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 114;
	  }
    }
  goto ret0;

  L343:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  if (GET_CODE (x3) == MULT && 1)
    goto L344;
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1120;
    }
  goto ret0;

  L344:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != DImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L345;
    case ZERO_EXTEND:
      goto L408;
    }
  goto ret0;

  L345:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L346;
    }
  goto ret0;

  L346:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L347;
  goto ret0;

  L347:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L348;
    }
  goto ret0;

  L348:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 2;
      return 43;
    }
  goto ret0;

  L408:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L409;
    }
  goto ret0;

  L409:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L410;
  goto ret0;

  L410:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L411;
    }
  goto ret0;

  L411:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 2;
      return 47;
    }
  goto ret0;

  L1120:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	return 118;
      }
  goto ret0;

  L1113:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1114;
    }
  goto ret0;

  L1114:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	return 117;
      }
  goto ret0;

  L1125:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1126;
    }
  goto ret0;

  L1126:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	return 119;
      }
  goto ret0;

  L799:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L800;
    }
  goto ret0;

  L800:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 3;
	  return 72;
	}
      }
  goto ret0;

  L833:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L834;
    }
  goto ret0;

  L834:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 3;
	  return 74;
	}
      }
  goto ret0;

  L867:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L868;
    }
  goto ret0;

  L868:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 3;
	  return 76;
	}
      }
  goto ret0;

  L901:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L902;
    }
  goto ret0;

  L902:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 3;
	  return 78;
	}
      }
  goto ret0;

  L943:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 84;
    }
  goto ret0;

  L968:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 2;
      return 88;
    }
  goto ret0;

  L985:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 90;
    }
  goto ret0;

  L1008:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 96;
    }
  goto ret0;

  L1075:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L1076;
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1021;
    }
  goto ret0;

  L1076:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1077;
    }
  goto ret0;

  L1077:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L1078;
  goto ret0;

  L1078:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      return 110;
    }
  goto ret0;

  L1021:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 99;
    }
  goto ret0;

  L1040:
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1041;
    }
  goto ret0;

  L1041:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 103;
    }
  goto ret0;

  L1055:
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1056;
    }
  goto ret0;

  L1056:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 106;
    }
  goto ret0;

  L1130:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (GET_CODE (x2) == TRUNCATE && 1)
	goto L1131;
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 125;
	}
      break;
    case QImode:
      if (GET_CODE (x2) == TRUNCATE && 1)
	goto L1136;
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 128;
	}
    }
  goto ret0;

  L1131:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT)
	return 120;
      }
  goto ret0;

  L1136:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT)
	return 121;
      }
  goto ret0;

  L1187:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 136;
	}
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 140;
	}
    }
  goto ret0;

  L1271:
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, BLKmode))
    {
      ro[1] = x2;
      return 159;
    }
  goto ret0;

  L1279:
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      ro[1] = x2;
      if (mips_split_addresses)
	return 161;
      }
  goto ret0;

  L1283:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1284;
    }
  goto ret0;

  L1284:
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      ro[2] = x2;
      if (mips_split_addresses)
	return 162;
      }
  goto ret0;

  L1482:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1483;
    }
  goto ret0;

  L1483:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 205;
    }
  goto ret0;

  L1554:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1555;
    }
  goto ret0;

  L1555:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 215;
    }
  goto ret0;

  L1626:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1627;
    }
  goto ret0;

  L1627:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 225;
    }
  goto ret0;

  L1746:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1747;
    }
  goto ret0;

  L1747:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 258;
  L1757:
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 260;
      }
  goto ret0;

  L1776:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1777;
    }
  goto ret0;

  L1777:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 265;
  L1787:
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 267;
      }
  goto ret0;

  L1806:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1807;
    }
  goto ret0;

  L1807:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      return 272;
    }
  goto ret0;

  L1816:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1817;
    }
  goto ret0;

  L1817:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 275;
      }
  goto ret0;

  L1836:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1837;
    }
  goto ret0;

  L1837:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 280;
    }
  goto ret0;

  L1846:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1857;
    }
  goto ret0;

  L1857:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 285;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      if (INTVAL (operands[2]) < 32767)
	return 283;
      }
  goto ret0;

  L1876:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1877;
    }
  goto ret0;

  L1877:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      return 290;
    }
  goto ret0;

  L1886:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1887;
    }
  goto ret0;

  L1887:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 293;
      }
  goto ret0;

  L1906:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1907;
    }
  goto ret0;

  L1907:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 298;
    }
  goto ret0;

  L1916:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1927;
    }
  goto ret0;

  L1927:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 303;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      if (INTVAL (operands[2]) < 32767)
	return 301;
      }
  goto ret0;

  L2200:
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2201;
    }
  L2216:
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2217;
    }
  goto ret0;

  L2201:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      if (register_operand (x3, SImode))
	{
	  ro[1] = x3;
	  goto L2202;
	}
      break;
    case DImode:
      if (se_register_operand (x3, DImode))
	{
	  ro[1] = x3;
	  goto L2210;
	}
    }
  goto L2216;

  L2202:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2203;
  goto L2216;

  L2203:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2204;
    }
  x2 = XEXP (x1, 0);
  goto L2216;

  L2204:
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 358;
      }
  x2 = XEXP (x1, 0);
  goto L2216;

  L2210:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2211;
  goto L2216;

  L2211:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2212;
    }
  x2 = XEXP (x1, 0);
  goto L2216;

  L2212:
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 359;
      }
  x2 = XEXP (x1, 0);
  goto L2216;

  L2217:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[4] = x3;
      goto L2218;
    }
  goto ret0;

  L2218:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2219;
  goto ret0;

  L2219:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2220;
    }
  goto ret0;

  L2220:
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 360;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_4 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L496;
    case SIGN_EXTEND:
      goto L75;
    case MINUS:
      goto L148;
    case MULT:
      goto L299;
    case TRUNCATE:
      goto L430;
    case DIV:
      goto L816;
    case MOD:
      goto L850;
    case UDIV:
      goto L884;
    case UMOD:
      goto L918;
    case ABS:
      goto L947;
    case FFS:
      goto L981;
    case NEG:
      goto L996;
    case NOT:
      goto L1012;
    case AND:
      goto L1082;
    case IOR:
      goto L1045;
    case XOR:
      goto L1060;
    case ZERO_EXTEND:
      goto L1145;
    case ASHIFT:
      goto L1549;
    case ASHIFTRT:
      goto L1621;
    case LSHIFTRT:
      goto L1693;
    case EQ:
      goto L1751;
    case NE:
      goto L1781;
    case GT:
      goto L1811;
    case GE:
      goto L1826;
    case LT:
      goto L1841;
    case LE:
      goto L1851;
    case GTU:
      goto L1881;
    case GEU:
      goto L1896;
    case LTU:
      goto L1911;
    case LEU:
      goto L1921;
    case IF_THEN_ELSE:
      goto L2224;
    }
  goto ret0;

  L496:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MULT && 1)
    goto L497;
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L71;
    }
  goto ret0;

  L497:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L498;
    case ZERO_EXTEND:
      goto L544;
    }
  goto ret0;

  L498:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L499;
    }
  goto ret0;

  L499:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == SIGN_EXTEND && 1)
    goto L500;
  goto ret0;

  L500:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L501;
    }
  goto ret0;

  L501:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L525;
  goto ret0;

  L525:
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD && ! TARGET_64BIT)
      {
	*pnum_clobbers = 1;
	return 51;
      }
  L526:
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD && TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 52;
      }
  goto ret0;

  L544:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L545;
    }
  goto ret0;

  L545:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L546;
  goto ret0;

  L546:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L547;
    }
  goto ret0;

  L547:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L571;
  goto ret0;

  L571:
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD && ! TARGET_64BIT)
      {
	*pnum_clobbers = 1;
	return 53;
      }
  L572:
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD && TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 54;
      }
  goto ret0;

  L71:
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 11;
      }
  goto ret0;

  L75:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case PLUS:
	  goto L76;
	case MINUS:
	  goto L154;
	case SUBREG:
	  if (XINT (x2, 1) == 0 && 1)
	    goto L1170;
	}
    L1179:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 132;
	  }
      break;
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 134;
	  }
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 142;
	  }
    }
  goto ret0;

  L76:
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L77;
    }
  goto ret0;

  L77:
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 12;
      }
  goto ret0;

  L154:
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L155;
    }
  goto ret0;

  L155:
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 25;
      }
  goto ret0;

  L1170:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case HImode:
      if (memory_operand (x3, HImode))
	{
	  ro[1] = x3;
	  if (TARGET_64BIT)
	    return 130;
	  }
      break;
    case QImode:
      if (memory_operand (x3, QImode))
	{
	  ro[1] = x3;
	  if (TARGET_64BIT)
	    return 131;
	  }
    }
  goto L1179;

  L148:
  x2 = XEXP (x1, 0);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L149;
    }
  goto ret0;

  L149:
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 24;
      }
  goto ret0;

  L299:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L300;
    case ZERO_EXTEND:
      goto L363;
    }
  L265:
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L266;
    }
  goto ret0;

  L300:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L301;
    }
  goto L265;

  L301:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == SIGN_EXTEND && 1)
    goto L302;
  x2 = XEXP (x1, 0);
  goto L265;

  L302:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    goto L322;
  x2 = XEXP (x1, 0);
  goto L265;

  L322:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (!TARGET_64BIT)
	{
	  *pnum_clobbers = 1;
	  return 41;
	}
      }
  L323:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	{
	  *pnum_clobbers = 2;
	  return 42;
	}
      }
  x2 = XEXP (x1, 0);
  goto L265;

  L363:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L364;
    }
  goto ret0;

  L364:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L365;
  goto ret0;

  L365:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    goto L385;
  goto ret0;

  L385:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (!TARGET_64BIT)
	{
	  *pnum_clobbers = 1;
	  return 45;
	}
      }
  L386:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	{
	  *pnum_clobbers = 2;
	  return 46;
	}
      }
  goto ret0;

  L266:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    goto L284;
  goto ret0;

  L284:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (TARGET_64BIT && mips_cpu != PROCESSOR_R4000)
	{
	  *pnum_clobbers = 2;
	  return 38;
	}
      }
  L285:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (TARGET_64BIT && mips_cpu == PROCESSOR_R4000)
	{
	  *pnum_clobbers = 3;
	  return 39;
	}
      }
  goto ret0;

  L430:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode && GET_CODE (x2) == LSHIFTRT && 1)
    goto L431;
  goto ret0;

  L431:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode && GET_CODE (x3) == MULT && 1)
    goto L432;
  goto ret0;

  L432:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != TImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L433;
    case ZERO_EXTEND:
      goto L458;
    }
  goto ret0;

  L433:
  x5 = XEXP (x4, 0);
  if (se_register_operand (x5, DImode))
    {
      ro[1] = x5;
      goto L434;
    }
  goto ret0;

  L434:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L435;
  goto ret0;

  L435:
  x5 = XEXP (x4, 0);
  if (se_register_operand (x5, DImode))
    {
      ro[2] = x5;
      goto L436;
    }
  goto ret0;

  L436:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 64 && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 48;
      }
  goto ret0;

  L458:
  x5 = XEXP (x4, 0);
  if (se_register_operand (x5, DImode))
    {
      ro[1] = x5;
      goto L459;
    }
  goto ret0;

  L459:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L460;
  goto ret0;

  L460:
  x5 = XEXP (x4, 0);
  if (se_register_operand (x5, DImode))
    {
      ro[2] = x5;
      goto L461;
    }
  goto ret0;

  L461:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 64 && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 49;
      }
  goto ret0;

  L816:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L817;
    }
  goto ret0;

  L817:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && se_nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 3;
	  return 73;
	}
      }
  goto ret0;

  L850:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L851;
    }
  goto ret0;

  L851:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && se_nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 3;
	  return 75;
	}
      }
  goto ret0;

  L884:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L885;
    }
  goto ret0;

  L885:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && se_nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 3;
	  return 77;
	}
      }
  goto ret0;

  L918:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L919;
    }
  goto ret0;

  L919:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && se_nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 3;
	  return 79;
	}
      }
  goto ret0;

  L947:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 85;
      }
  goto ret0;

  L981:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	{
	  *pnum_clobbers = 2;
	  return 89;
	}
      }
  goto ret0;

  L996:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 93;
      }
  goto ret0;

  L1012:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 97;
    }
  goto ret0;

  L1082:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  if (GET_CODE (x2) == NOT && 1)
    goto L1083;
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1026;
    }
  goto ret0;

  L1083:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1084;
    }
  goto ret0;

  L1084:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == NOT && 1)
    goto L1085;
  goto ret0;

  L1085:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      return 111;
    }
  goto ret0;

  L1026:
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT || !TARGET_DEBUG_G_MODE)
	return 100;
      }
  L1036:
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 102;
      }
  goto ret0;

  L1045:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1046;
    }
  goto ret0;

  L1046:
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT || !TARGET_DEBUG_G_MODE)
	return 104;
      }
  goto ret0;

  L1060:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1061;
    }
  goto ret0;

  L1061:
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT || !TARGET_DEBUG_G_MODE)
	return 107;
      }
  L1071:
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 109;
      }
  goto ret0;

  L1145:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (memory_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 124;
	  }
      break;
    case HImode:
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 126;
	  }
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 129;
	  }
    }
  goto ret0;

  L1549:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1550;
    }
  goto ret0;

  L1550:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 214;
      }
  goto ret0;

  L1621:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1622;
    }
  goto ret0;

  L1622:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 224;
      }
  goto ret0;

  L1693:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1694;
    }
  goto ret0;

  L1694:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 234;
      }
  goto ret0;

  L1751:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1752;
    }
  goto ret0;

  L1752:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (TARGET_64BIT)
      return 259;
  L1767:
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 262;
      }
  goto ret0;

  L1781:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1782;
    }
  goto ret0;

  L1782:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (TARGET_64BIT)
      return 266;
  L1797:
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 269;
      }
  goto ret0;

  L1811:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1812;
    }
  goto ret0;

  L1812:
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 273;
      }
  goto ret0;

  L1826:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1827;
    }
  goto ret0;

  L1827:
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 277;
      }
  goto ret0;

  L1841:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1842;
    }
  goto ret0;

  L1842:
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 281;
      }
  goto ret0;

  L1851:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1867;
    }
  goto ret0;

  L1867:
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 287;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && INTVAL (operands[2]) < 32767)
	return 284;
      }
  goto ret0;

  L1881:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1882;
    }
  goto ret0;

  L1882:
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 291;
      }
  goto ret0;

  L1896:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1897;
    }
  goto ret0;

  L1897:
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 295;
      }
  goto ret0;

  L1911:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1912;
    }
  goto ret0;

  L1912:
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 299;
      }
  goto ret0;

  L1921:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1937;
    }
  goto ret0;

  L1937:
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 305;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && INTVAL (operands[2]) < 32767)
	return 302;
      }
  goto ret0;

  L2224:
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2225;
    }
  L2240:
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2241;
    }
  goto ret0;

  L2225:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      if (register_operand (x3, SImode))
	{
	  ro[1] = x3;
	  goto L2226;
	}
      break;
    case DImode:
      if (se_register_operand (x3, DImode))
	{
	  ro[1] = x3;
	  goto L2234;
	}
    }
  goto L2240;

  L2226:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2227;
  goto L2240;

  L2227:
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      goto L2228;
    }
  x2 = XEXP (x1, 0);
  goto L2240;

  L2228:
  x2 = XEXP (x1, 2);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 361;
      }
  x2 = XEXP (x1, 0);
  goto L2240;

  L2234:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2235;
  goto L2240;

  L2235:
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      goto L2236;
    }
  x2 = XEXP (x1, 0);
  goto L2240;

  L2236:
  x2 = XEXP (x1, 2);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 362;
      }
  x2 = XEXP (x1, 0);
  goto L2240;

  L2241:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[4] = x3;
      goto L2242;
    }
  goto ret0;

  L2242:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2243;
  goto ret0;

  L2243:
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2244;
    }
  goto ret0;

  L2244:
  x2 = XEXP (x1, 2);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 363;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_5 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L2;
	}
    L1381:
      if (nonimmediate_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1382;
	}
      break;
    case SFmode:
      if (GET_CODE (x1) == MEM && 1)
	goto L1334;
      if (register_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L7;
	}
    L1373:
      if (nonimmediate_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L1374;
	}
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L12;
	}
    L1214:
      if (general_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1215;
	}
    L1298:
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1299;
	}
      break;
    case DImode:
      if (GET_CODE (x1) == REG && XINT (x1, 0) == 28 && 1)
	goto L1403;
    L68:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L69;
	}
    L1238:
      if (general_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1239;
	}
    L1286:
      if (nonimmediate_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1287;
	}
      break;
    case HImode:
      if (register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1103;
	}
    L1357:
      if (nonimmediate_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1358;
	}
      break;
    case QImode:
      if (register_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1107;
	}
    L1365:
      if (nonimmediate_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1366;
	}
      break;
    case BLKmode:
      if (memory_operand (x1, BLKmode))
	{
	  ro[0] = x1;
	  goto L1274;
	}
      break;
    case CCmode:
      if (nonimmediate_operand (x1, CCmode))
	{
	  ro[0] = x1;
	  goto L1307;
	}
    L1944:
      if (register_operand (x1, CCmode))
	{
	  ro[0] = x1;
	  goto L1945;
	}
    }
  L1345:
  switch (GET_CODE (x1))
    {
    default:
      break;
    case MEM:
      if (GET_MODE (x1) == DFmode && 1)
	goto L1346;
      break;
    case PC:
      goto L1999;
    case SUBREG:
    case REG:
    L2070:
      if (register_operand (x1, VOIDmode))
	{
	  ro[0] = x1;
	  goto L2071;
	}
    }
  goto ret0;
 L2:
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1381;

  L1382:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    goto L1386;
  L1390:
  if (general_operand (x1, DFmode))
    {
      ro[1] = x1;
      if ((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT)
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DFmode)))
	return 197;
      }
  x1 = XEXP (x0, 0);
  goto L1345;

  L1386:
  ro[1] = x1;
  if (TARGET_HARD_FLOAT && !(TARGET_FLOAT64 && !TARGET_64BIT)
   && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DFmode)))
    return 195;
  L1387:
  ro[1] = x1;
  if (TARGET_HARD_FLOAT && (TARGET_FLOAT64 && !TARGET_64BIT)
   && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))
       || (GET_CODE (operands [0]) == MEM
	   && ((GET_CODE (operands[1]) == CONST_INT
		&& INTVAL (operands[1]) == 0)
	       || operands[1] == CONST0_RTX (DFmode))))
    return 196;
  goto L1390;

  L1334:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != PLUS)
    {
    goto L1373;
    }
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L1335;
    case DImode:
      goto L1341;
    }
  goto L1373;

  L1335:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1336;
    }
  goto L1373;

  L1336:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1337;
    }
  goto L1373;

  L1337:
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      ro[0] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 181;
      }
  x1 = XEXP (x0, 0);
  goto L1373;

  L1341:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1342;
    }
  goto L1373;

  L1342:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L1343;
    }
  goto L1373;

  L1343:
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      ro[0] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 182;
      }
  x1 = XEXP (x0, 0);
  goto L1373;
 L7:
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1373;

  L1374:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    goto L1378;
  x1 = XEXP (x0, 0);
  goto L2070;

  L1378:
  ro[1] = x1;
  if (TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (SFmode)))
    return 192;
  L1379:
  ro[1] = x1;
  if (TARGET_SOFT_FLOAT
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (SFmode)))
    return 193;
  x1 = XEXP (x0, 0);
  goto L2070;
 L12:
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1214;

  L1215:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == FIX && 1)
    goto L1216;
  x1 = XEXP (x0, 0);
  goto L1298;

  L1216:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (pnum_clobbers != 0 && register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 2;
	      return 144;
	    }
	  }
      break;
    case SFmode:
      if (pnum_clobbers != 0 && register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    {
	      *pnum_clobbers = 2;
	      return 145;
	    }
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1298;

  L1299:
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SImode))
    goto L1303;
  x1 = XEXP (x0, 0);
  goto L2070;

  L1303:
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 171;
  L1304:
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 172;
  x1 = XEXP (x0, 0);
  goto L2070;

  L1403:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == UNSPEC_VOLATILE && XINT (x1, 1) == 2 && XVECLEN (x1, 0) == 1 && 1)
    goto L1404;
  x1 = XEXP (x0, 0);
  goto L68;

  L1404:
  x2 = XVECEXP (x1, 0, 0);
  if (pnum_clobbers != 0 && address_operand (x2, DImode))
    {
      ro[0] = x2;
      *pnum_clobbers = 1;
      return 199;
    }
  x1 = XEXP (x0, 0);
  goto L68;
 L69:
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1238;

  L1239:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == FIX && 1)
    goto L1240;
  x1 = XEXP (x0, 0);
  goto L1286;

  L1240:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (pnum_clobbers != 0 && register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 1;
	      return 146;
	    }
	  }
      break;
    case SFmode:
      if (pnum_clobbers != 0 && register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 1;
	      return 147;
	    }
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1286;

  L1287:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      ro[1] = x1;
      if (!TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode)))
	return 164;
      }
  L1293:
  if (movdi_operand (x1, DImode))
    {
      ro[1] = x1;
      if (TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || se_register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode)))
	return 166;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1103:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != HImode)
    {
      x1 = XEXP (x0, 0);
      goto L1357;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case TRUNCATE:
      goto L1104;
    case ZERO_EXTEND:
      goto L1140;
    case SIGN_EXTEND:
      goto L1191;
    }
  x1 = XEXP (x0, 0);
  goto L1357;

  L1104:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 115;
      }
  x1 = XEXP (x0, 0);
  goto L1357;

  L1140:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != QImode)
    {
      x1 = XEXP (x0, 0);
      goto L1357;
    }
  if (GET_CODE (x2) == TRUNCATE && 1)
    goto L1141;
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      return 127;
    }
  x1 = XEXP (x0, 0);
  goto L1357;

  L1141:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT)
	return 122;
      }
  x1 = XEXP (x0, 0);
  goto L1357;

  L1191:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    {
      ro[1] = x2;
      return 138;
    }
  x1 = XEXP (x0, 0);
  goto L1357;

  L1358:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    goto L1362;
  x1 = XEXP (x0, 0);
  goto L2070;

  L1362:
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 186;
  L1363:
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 187;
  x1 = XEXP (x0, 0);
  goto L2070;

  L1107:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode && GET_CODE (x1) == TRUNCATE && 1)
    goto L1108;
  x1 = XEXP (x0, 0);
  goto L1365;

  L1108:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 116;
      }
  x1 = XEXP (x0, 0);
  goto L1365;

  L1366:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    goto L1370;
  x1 = XEXP (x0, 0);
  goto L2070;

  L1370:
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 189;
  L1371:
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 190;
  x1 = XEXP (x0, 0);
  goto L2070;

  L1274:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode && GET_CODE (x1) == UNSPEC && XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
    goto L1275;
  x1 = XEXP (x0, 0);
  goto L2070;

  L1275:
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      return 160;
    }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1307:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, CCmode))
    {
      ro[1] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 174;
      }
  x1 = XEXP (x0, 0);
  goto L1944;

  L1945:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != CCmode)
    {
      x1 = XEXP (x0, 0);
      goto L2070;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case EQ:
      goto L1946;
    case LT:
      goto L1951;
    case LE:
      goto L1956;
    case GT:
      goto L1961;
    case GE:
      goto L1966;
    }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1946:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L1947;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L1972;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1947:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 307;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1972:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 312;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1951:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L1952;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L1977;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1952:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 308;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1977:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 313;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1956:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L1957;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L1982;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1957:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 309;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1982:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 314;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1961:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L1962;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L1987;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1962:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 310;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1987:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 315;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1966:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L1967;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L1992;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1967:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 311;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1992:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 316;
      }
  x1 = XEXP (x0, 0);
  goto L2070;

  L1346:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != PLUS)
    goto ret0;
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L1347;
    case DImode:
      goto L1353;
    }
  goto ret0;

  L1347:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1348;
    }
  goto ret0;

  L1348:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1349;
    }
  goto ret0;

  L1349:
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      ro[0] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 183;
      }
  goto ret0;

  L1353:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1354;
    }
  goto ret0;

  L1354:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L1355;
    }
  goto ret0;

  L1355:
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      ro[0] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 184;
      }
  goto ret0;

  L1999:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  if (!TARGET_LONG64)
	    return 319;
	  }
      break;
    case DImode:
      if (GET_CODE (x1) == PLUS && 1)
	goto L2026;
      if (se_register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  if (TARGET_LONG64)
	    return 320;
	  }
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      if (GET_MODE (x1) == SImode && 1)
	goto L2020;
      break;
    case IF_THEN_ELSE:
      goto L1698;
    case LABEL_REF:
      goto L1996;
    }
  goto ret0;

  L2026:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[0] = x2;
      goto L2027;
    }
  goto ret0;

  L2027:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == LABEL_REF && 1)
    goto L2028;
  goto ret0;

  L2028:
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  if (TARGET_LONG64 && next_active_insn (insn) != 0
   && GET_CODE (PATTERN (next_active_insn (insn))) == ADDR_DIFF_VEC
   && PREV_INSN (next_active_insn (insn)) == operands[1])
    return 327;
  goto ret0;

  L2020:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2021;
    }
  goto ret0;

  L2021:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == LABEL_REF && 1)
    goto L2022;
  goto ret0;

  L2022:
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  if (!TARGET_LONG64 && next_active_insn (insn) != 0
   && GET_CODE (PATTERN (next_active_insn (insn))) == ADDR_DIFF_VEC
   && PREV_INSN (next_active_insn (insn)) == operands[1])
    return 325;
  goto ret0;

  L1698:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case CCmode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case NE:
	  goto L1699;
	case EQ:
	  goto L1707;
	}
      break;
    case SImode:
      if (cmp_op (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1715;
	}
    L1730:
      if (equality_op (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1731;
	}
      break;
    case DImode:
      if (cmp_op (x2, DImode))
	{
	  ro[0] = x2;
	  goto L1723;
	}
    L1738:
      if (equality_op (x2, DImode))
	{
	  ro[0] = x2;
	  goto L1739;
	}
    }
  goto ret0;

  L1699:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[0] = x3;
      goto L1700;
    }
  goto ret0;

  L1700:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1701;
  goto ret0;

  L1701:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L1702;
    }
  goto ret0;

  L1702:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 241;
      }
  goto ret0;

  L1707:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[0] = x3;
      goto L1708;
    }
  goto ret0;

  L1708:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1709;
  goto ret0;

  L1709:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L1710;
    }
  goto ret0;

  L1710:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 242;
      }
  goto ret0;

  L1715:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1716;
    }
  goto L1730;

  L1716:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1717;
  goto L1730;

  L1717:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L1718;
    }
  x2 = XEXP (x1, 0);
  goto L1730;

  L1718:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      return 243;
    }
  x2 = XEXP (x1, 0);
  goto L1730;

  L1731:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1732;
    }
  goto ret0;

  L1732:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1733;
    }
  goto ret0;

  L1733:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1734;
    }
  goto ret0;

  L1734:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[4] = x2;
      return 245;
    }
  goto ret0;

  L1723:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1724;
    }
  goto L1738;

  L1724:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1725;
  goto L1738;

  L1725:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L1726;
    }
  x2 = XEXP (x1, 0);
  goto L1738;

  L1726:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      return 244;
    }
  x2 = XEXP (x1, 0);
  goto L1738;

  L1739:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1740;
    }
  goto ret0;

  L1740:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L1741;
    }
  goto ret0;

  L1741:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1742;
    }
  goto ret0;

  L1742:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[4] = x2;
      return 246;
    }
  goto ret0;

  L1996:
  x2 = XEXP (x1, 0);
  ro[0] = x2;
  return 317;

  L2071:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == UNSPEC && XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
    goto L2072;
  goto ret0;

  L2072:
  x2 = XVECEXP (x1, 0, 0);
  if (pnum_clobbers != 0 && 1)
    {
      ro[1] = x2;
      if (TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF)
	{
	  *pnum_clobbers = 1;
	  return 337;
	}
      }
  goto ret0;
 ret0: return -1;
}

int
recog_6 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L485;
    case MINUS:
      goto L97;
    case MULT:
      goto L290;
    case DIV:
      goto L721;
    case UDIV:
      goto L777;
    case NEG:
      goto L990;
    case ASHIFT:
      goto L1488;
    case ASHIFTRT:
      goto L1560;
    case LSHIFTRT:
      goto L1632;
    }
  goto ret0;

  L485:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  if (GET_CODE (x3) == MULT && 1)
    goto L486;
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L20;
    }
  goto ret0;

  L486:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != DImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L487;
    case ZERO_EXTEND:
      goto L533;
    }
  goto ret0;

  L487:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L488;
    }
  goto ret0;

  L488:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L489;
  goto ret0;

  L489:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L490;
    }
  goto ret0;

  L490:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L491;
  goto ret0;

  L491:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L492;
  goto ret0;

  L492:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_MAD && ! TARGET_64BIT)
	return 51;
      }
  goto ret0;

  L533:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L534;
    }
  goto ret0;

  L534:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L535;
  goto ret0;

  L535:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L536;
    }
  goto ret0;

  L536:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L537;
  goto ret0;

  L537:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L538;
  goto ret0;

  L538:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_MAD && ! TARGET_64BIT)
	return 53;
      }
  goto ret0;

  L20:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L21;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L47;
    }
  goto ret0;

  L21:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L22;
  goto ret0;

  L22:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 5;
      }
  goto ret0;

  L47:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L48;
  goto ret0;

  L48:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && INTVAL (operands[2]) != -32768)
	return 8;
      }
  goto ret0;

  L97:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L98;
    }
  goto ret0;

  L98:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L99;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L125;
    }
  goto ret0;

  L99:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L100;
  goto ret0;

  L100:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 18;
      }
  goto ret0;

  L125:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L126;
  goto ret0;

  L126:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && INTVAL (operands[2]) != -32768)
	return 21;
      }
  goto ret0;

  L290:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L291;
    case ZERO_EXTEND:
      goto L354;
    }
  goto ret0;

  L291:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L292;
    }
  goto ret0;

  L292:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == SIGN_EXTEND && 1)
    goto L293;
  goto ret0;

  L293:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L294;
    }
  goto ret0;

  L294:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L295;
  goto ret0;

  L295:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT)
	return 41;
      }
  goto ret0;

  L354:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L355;
    }
  goto ret0;

  L355:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L356;
  goto ret0;

  L356:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L357;
    }
  goto ret0;

  L357:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L358;
  goto ret0;

  L358:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT)
	return 45;
      }
  goto ret0;

  L721:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L722;
    }
  goto ret0;

  L722:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L723;
    }
  goto ret0;

  L723:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L724;
  goto ret0;

  L724:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L725;
    }
  goto ret0;

  L725:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MOD && 1)
    goto L726;
  goto ret0;

  L726:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L727;
  goto ret0;

  L727:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT && optimize)
      {
	*pnum_clobbers = 3;
	return 69;
      }
  goto ret0;

  L777:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L778;
    }
  goto ret0;

  L778:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L779;
    }
  goto ret0;

  L779:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L780;
  goto ret0;

  L780:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L781;
    }
  goto ret0;

  L781:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == UMOD && 1)
    goto L782;
  goto ret0;

  L782:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L783;
  goto ret0;

  L783:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT && optimize)
      {
	*pnum_clobbers = 3;
	return 71;
      }
  goto ret0;

  L990:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L991;
    }
  goto ret0;

  L991:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L992;
  goto ret0;

  L992:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 92;
      }
  goto ret0;

  L1488:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1489;
    }
  goto ret0;

  L1489:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1490;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1498;
    }
  goto ret0;

  L1490:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1491;
  goto ret0;

  L1491:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 207;
      }
  goto ret0;

  L1498:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1499;
  goto ret0;

  L1499:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1526;
  goto ret0;

  L1526:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0)
    return 208;
  L1527:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 211;
  goto ret0;

  L1560:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1561;
    }
  goto ret0;

  L1561:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1562;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1570;
    }
  goto ret0;

  L1562:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1563;
  goto ret0;

  L1563:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 217;
      }
  goto ret0;

  L1570:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1571;
  goto ret0;

  L1571:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1598;
  goto ret0;

  L1598:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0)
    return 218;
  L1599:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 221;
  goto ret0;

  L1632:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1633;
    }
  goto ret0;

  L1633:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1634;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1642;
    }
  goto ret0;

  L1634:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1635;
  goto ret0;

  L1635:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 227;
      }
  goto ret0;

  L1642:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1643;
  goto ret0;

  L1643:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1670;
  goto ret0;

  L1670:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0)
    return 228;
  L1671:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 231;
  goto ret0;
 ret0: return -1;
}

int
recog_7 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L18;
	}
    L1232:
      if (general_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L1233;
	}
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L692;
	}
    }
  L1396:
  switch (GET_CODE (x2))
    {
    default:
      break;
    case REG:
      if (GET_MODE (x2) == DImode && XINT (x2, 0) == 28 && 1)
	goto L1397;
      break;
    case PC:
      goto L2006;
    }
  L2064:
  if (register_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L2065;
    }
  goto ret0;
 L18:
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L1232;

  L1233:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == FIX && 1)
    goto L1234;
  x2 = XEXP (x1, 0);
  goto L1396;

  L1234:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x3, DFmode))
	{
	  ro[1] = x3;
	  goto L1235;
	}
      break;
    case SFmode:
      if (register_operand (x3, SFmode))
	{
	  ro[1] = x3;
	  goto L1246;
	}
    }
  x2 = XEXP (x1, 0);
  goto L1396;

  L1235:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1236;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1396;

  L1236:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	return 146;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1396;

  L1246:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1247;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1396;

  L1247:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	return 147;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1396;

  L692:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L2064;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case DIV:
      goto L693;
    case UDIV:
      goto L749;
    }
  x2 = XEXP (x1, 0);
  goto L2064;

  L693:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L694;
    }
  x2 = XEXP (x1, 0);
  goto L2064;

  L694:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L695;
    }
  x2 = XEXP (x1, 0);
  goto L2064;

  L695:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L696;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L696:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L697;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L697:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MOD && 1)
    goto L698;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L698:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L699;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L699:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (optimize)
      {
	*pnum_clobbers = 3;
	return 68;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L749:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L750;
    }
  x2 = XEXP (x1, 0);
  goto L2064;

  L750:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L751;
    }
  x2 = XEXP (x1, 0);
  goto L2064;

  L751:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L752:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L753;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L753:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == UMOD && 1)
    goto L754;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L754:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L755;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L755:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (optimize)
      {
	*pnum_clobbers = 3;
	return 70;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L1397:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == UNSPEC_VOLATILE && XINT (x2, 1) == 2 && XVECLEN (x2, 0) == 1 && 1)
    goto L1398;
  x2 = XEXP (x1, 0);
  goto L2064;

  L1398:
  x3 = XVECEXP (x2, 0, 0);
  if (address_operand (x3, DImode))
    {
      ro[0] = x3;
      goto L1399;
    }
  x2 = XEXP (x1, 0);
  goto L2064;

  L1399:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1400;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L1400:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == REG && XINT (x2, 0) == 1 && 1)
    return 199;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2064;

  L2006:
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L2007;
	}
      break;
    case DImode:
      if (se_register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L2014;
	}
    }
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L2047;
  goto ret0;

  L2007:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L2008;
  goto ret0;

  L2008:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L2009;
  goto ret0;

  L2009:
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  if (!TARGET_LONG64)
    return 322;
  goto ret0;

  L2014:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L2015;
  goto ret0;

  L2015:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L2016;
  goto ret0;

  L2016:
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  if (TARGET_LONG64)
    return 323;
  goto ret0;

  L2047:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L2048;
  goto ret0;

  L2048:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MULT && 1)
    goto L2049;
  goto ret0;

  L2049:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[0] = x5;
      goto L2050;
    }
  goto ret0;

  L2050:
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XWINT (x5, 0) == 4 && 1)
    goto L2051;
  goto ret0;

  L2051:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF && 1)
    goto L2052;
  goto ret0;

  L2052:
  x5 = XEXP (x4, 0);
  ro[1] = x5;
  goto L2053;

  L2053:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2054;
  goto ret0;

  L2054:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_EMBEDDED_PIC)
	{
	  *pnum_clobbers = 1;
	  return 329;
	}
      }
  goto ret0;

  L2065:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case UNSPEC:
      if (XINT (x2, 1) == 1 && XVECLEN (x2, 0) == 1 && 1)
	goto L2066;
      break;
    case CALL:
      goto L2125;
    }
  goto ret0;

  L2066:
  x3 = XVECEXP (x2, 0, 0);
  ro[1] = x3;
  goto L2067;

  L2067:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2068;
  goto ret0;

  L2068:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 31 && 1)
    if (TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF)
      return 337;
  goto ret0;

  L2125:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM)
    goto ret0;
  goto L2126;
  L2145:
  if (GET_CODE (x3) != MEM)
    goto ret0;
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      goto L2146;
    case DImode:
      goto L2155;
    }
  goto ret0;

  L2126:
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      ro[1] = x4;
      goto L2127;
    }
  goto L2145;

  L2127:
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2128;

  L2128:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2129;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2145;

  L2129:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2139;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2145;

  L2139:
  ro[3] = x2;
  if (!TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 348;
  L2140:
  ro[3] = x2;
  if (TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 349;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2145;

  L2146:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2147;
    }
  goto ret0;

  L2147:
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2148;

  L2148:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2149;
  goto ret0;

  L2149:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2168;
  goto ret0;

  L2168:
  ro[3] = x2;
  if (!TARGET_LONG64 && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 350;
  L2169:
  ro[3] = x2;
  if (!TARGET_LONG64 && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 352;
  goto ret0;

  L2155:
  x4 = XEXP (x3, 0);
  if (se_register_operand (x4, DImode))
    {
      ro[1] = x4;
      goto L2156;
    }
  goto ret0;

  L2156:
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2157;

  L2157:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2158;
  goto ret0;

  L2158:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2179;
  goto ret0;

  L2179:
  ro[3] = x2;
  if (TARGET_LONG64 && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 351;
  L2180:
  ro[3] = x2;
  if (TARGET_LONG64 && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 353;
  goto ret0;
 ret0: return -1;
}

int
recog_8 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MULT:
      goto L184;
    case PLUS:
      goto L577;
    case DIV:
      goto L788;
    case MOD:
      goto L822;
    case UDIV:
      goto L856;
    case UMOD:
      goto L890;
    }
  goto ret0;

  L184:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L185;
    }
  goto ret0;

  L185:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L186;
    }
  goto ret0;

  L186:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L187;
  goto ret0;

  L187:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L188;
    }
  goto ret0;

  L188:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L189;
  goto ret0;

  L189:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L190;
    }
  goto ret0;

  L190:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L191;
  goto ret0;

  L191:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (scratch_operand (x2, SImode))
    goto L231;
  L244:
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      if (TARGET_MAD)
	return 36;
      }
  goto ret0;

  L231:
  ro[5] = x2;
  if (GENERATE_MULT3)
    return 33;
  L232:
  ro[5] = x2;
  if (mips_cpu == PROCESSOR_R4000)
    return 35;
  goto L244;

  L577:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MULT && 1)
    goto L578;
  goto ret0;

  L578:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L579;
    }
  goto ret0;

  L579:
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L580;
    }
  goto ret0;

  L580:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L581;
    }
  goto ret0;

  L581:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L582;
  goto ret0;

  L582:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L583;
    }
  goto ret0;

  L583:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L584;
  goto ret0;

  L584:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L585;
    }
  goto ret0;

  L585:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L586;
  goto ret0;

  L586:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (GENERATE_MADD)
	return 55;
      }
  goto ret0;

  L788:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L789;
    }
  goto ret0;

  L789:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L790;
    }
  goto ret0;

  L790:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L791;
  goto ret0;

  L791:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L792;
    }
  goto ret0;

  L792:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L793;
  goto ret0;

  L793:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L794;
    }
  goto ret0;

  L794:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L795;
  goto ret0;

  L795:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (!optimize)
	return 72;
      }
  goto ret0;

  L822:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L823;
    }
  goto ret0;

  L823:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L824;
    }
  goto ret0;

  L824:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L825;
  goto ret0;

  L825:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L826;
    }
  goto ret0;

  L826:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L827;
  goto ret0;

  L827:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L828;
    }
  goto ret0;

  L828:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L829;
  goto ret0;

  L829:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (!optimize)
	return 74;
      }
  goto ret0;

  L856:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L857;
    }
  goto ret0;

  L857:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L858;
    }
  goto ret0;

  L858:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L859;
  goto ret0;

  L859:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L860;
    }
  goto ret0;

  L860:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L861;
  goto ret0;

  L861:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L862;
    }
  goto ret0;

  L862:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L863;
  goto ret0;

  L863:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (!optimize)
	return 76;
      }
  goto ret0;

  L890:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L891;
    }
  goto ret0;

  L891:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L892;
    }
  goto ret0;

  L892:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L893;
  goto ret0;

  L893:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L894;
    }
  goto ret0;

  L894:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L895;
  goto ret0;

  L895:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L896;
    }
  goto ret0;

  L896:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L897;
  goto ret0;

  L897:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (!optimize)
	return 78;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_9 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MULT:
      goto L307;
    case TRUNCATE:
      goto L416;
    case PLUS:
      goto L506;
    case FFS:
      goto L973;
    }
  goto ret0;

  L307:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L308;
    case ZERO_EXTEND:
      goto L371;
    }
  L256:
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L257;
    }
  goto ret0;

  L308:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L309;
    }
  goto L256;

  L309:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == SIGN_EXTEND && 1)
    goto L310;
  x3 = XEXP (x2, 0);
  goto L256;

  L310:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L311;
    }
  x3 = XEXP (x2, 0);
  goto L256;

  L311:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L312;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L256;

  L312:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L313;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L256;

  L313:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L314;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L256;

  L314:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 42;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L256;

  L371:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L372;
    }
  goto ret0;

  L372:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L373;
  goto ret0;

  L373:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L374;
    }
  goto ret0;

  L374:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L375;
  goto ret0;

  L375:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L376;
    }
  goto ret0;

  L376:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L377;
  goto ret0;

  L377:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 46;
      }
  goto ret0;

  L257:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L258;
    }
  goto ret0;

  L258:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L259;
  goto ret0;

  L259:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L260;
    }
  goto ret0;

  L260:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L261;
  goto ret0;

  L261:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT && mips_cpu != PROCESSOR_R4000)
	return 38;
      }
  goto ret0;

  L416:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode && GET_CODE (x3) == LSHIFTRT && 1)
    goto L417;
  goto ret0;

  L417:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == MULT && 1)
    goto L418;
  goto ret0;

  L418:
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != TImode)
    goto ret0;
  switch (GET_CODE (x5))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L419;
    case ZERO_EXTEND:
      goto L444;
    }
  goto ret0;

  L419:
  x6 = XEXP (x5, 0);
  if (se_register_operand (x6, DImode))
    {
      ro[1] = x6;
      goto L420;
    }
  goto ret0;

  L420:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode && GET_CODE (x5) == SIGN_EXTEND && 1)
    goto L421;
  goto ret0;

  L421:
  x6 = XEXP (x5, 0);
  if (se_register_operand (x6, DImode))
    {
      ro[2] = x6;
      goto L422;
    }
  goto ret0;

  L422:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 64 && 1)
    goto L423;
  goto ret0;

  L423:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L424;
  goto ret0;

  L424:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L425;
    }
  goto ret0;

  L425:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L426;
  goto ret0;

  L426:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 48;
      }
  goto ret0;

  L444:
  x6 = XEXP (x5, 0);
  if (se_register_operand (x6, DImode))
    {
      ro[1] = x6;
      goto L445;
    }
  goto ret0;

  L445:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode && GET_CODE (x5) == ZERO_EXTEND && 1)
    goto L446;
  goto ret0;

  L446:
  x6 = XEXP (x5, 0);
  if (se_register_operand (x6, DImode))
    {
      ro[2] = x6;
      goto L447;
    }
  goto ret0;

  L447:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 64 && 1)
    goto L448;
  goto ret0;

  L448:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L449;
  goto ret0;

  L449:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L450;
    }
  goto ret0;

  L450:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L451;
  goto ret0;

  L451:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 49;
      }
  goto ret0;

  L506:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == MULT && 1)
    goto L507;
  goto ret0;

  L507:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != DImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L508;
    case ZERO_EXTEND:
      goto L554;
    }
  goto ret0;

  L508:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L509;
    }
  goto ret0;

  L509:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L510;
  goto ret0;

  L510:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L511;
    }
  goto ret0;

  L511:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L512;
  goto ret0;

  L512:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L513;
  goto ret0;

  L513:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L514;
    }
  goto ret0;

  L514:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L515;
  goto ret0;

  L515:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_MAD && TARGET_64BIT)
	return 52;
      }
  goto ret0;

  L554:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L555;
    }
  goto ret0;

  L555:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L556;
  goto ret0;

  L556:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L557;
    }
  goto ret0;

  L557:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L558;
  goto ret0;

  L558:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L559;
  goto ret0;

  L559:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L560;
    }
  goto ret0;

  L560:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L561;
  goto ret0;

  L561:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_MAD && TARGET_64BIT)
	return 54;
      }
  goto ret0;

  L973:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L974;
    }
  goto ret0;

  L974:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L975;
  goto ret0;

  L975:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[2] = x2;
      goto L976;
    }
  goto ret0;

  L976:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L977;
  goto ret0;

  L977:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_64BIT)
	return 89;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_10 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L200;
	}
    L1206:
      if (general_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1207;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L255;
	}
    }
  if (GET_CODE (x2) == PC && 1)
    goto L2032;
  L2183:
  if (register_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L2184;
    }
  goto ret0;

  L200:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L1206;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MULT:
      goto L201;
    case TRUNCATE:
      goto L328;
    case PLUS:
      goto L466;
    case FFS:
      goto L960;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L201:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L202;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L202:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L203;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L203:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L204;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L204:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L205;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L205:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L206;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L206:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (mips_cpu != PROCESSOR_R4000)
	return 34;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L328:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == LSHIFTRT && 1)
    goto L329;
  x2 = XEXP (x1, 0);
  goto L1206;

  L329:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == MULT && 1)
    goto L330;
  x2 = XEXP (x1, 0);
  goto L1206;

  L330:
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != DImode)
    {
      x2 = XEXP (x1, 0);
      goto L1206;
    }
  switch (GET_CODE (x5))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L331;
    case ZERO_EXTEND:
      goto L394;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L331:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L332;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L332:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode && GET_CODE (x5) == SIGN_EXTEND && 1)
    goto L333;
  x2 = XEXP (x1, 0);
  goto L1206;

  L333:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L334;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L334:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L335;
  x2 = XEXP (x1, 0);
  goto L1206;

  L335:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L336;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L336:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L337;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L337:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L338;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L338:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      return 43;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L394:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L395;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L395:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode && GET_CODE (x5) == ZERO_EXTEND && 1)
    goto L396;
  x2 = XEXP (x1, 0);
  goto L1206;

  L396:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L397;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L397:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L398;
  x2 = XEXP (x1, 0);
  goto L1206;

  L398:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L399;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L399:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L400;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L400:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L401;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L401:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      return 47;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L466:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MULT && 1)
    goto L467;
  x2 = XEXP (x1, 0);
  goto L1206;

  L467:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L468;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L468:
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L469;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L469:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L470;
  x2 = XEXP (x1, 0);
  goto L1206;

  L470:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L471;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L471:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L472;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L472:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L473;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L473:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_MAD || GENERATE_MADD)
	return 50;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L960:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L961;
    }
  x2 = XEXP (x1, 0);
  goto L1206;

  L961:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L962;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L962:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L963;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L963:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L964;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L964:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 88;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1206;

  L1207:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == FIX && 1)
    goto L1208;
  x2 = XEXP (x1, 0);
  goto L2183;

  L1208:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x3, DFmode))
	{
	  ro[1] = x3;
	  goto L1209;
	}
      break;
    case SFmode:
      if (register_operand (x3, SFmode))
	{
	  ro[1] = x3;
	  goto L1222;
	}
    }
  x2 = XEXP (x1, 0);
  goto L2183;

  L1209:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1210;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2183;

  L1210:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1211;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2183;

  L1211:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1212;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2183;

  L1212:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 144;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2183;

  L1222:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1223;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2183;

  L1223:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1224;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2183;

  L1224:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1225;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2183;

  L1225:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (TARGET_HARD_FLOAT)
	return 145;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2183;
 L255:
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L2183;

  L2032:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L2033;
  goto ret0;

  L2033:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L2034;
  goto ret0;

  L2034:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MULT && 1)
    goto L2035;
  goto ret0;

  L2035:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[0] = x5;
      goto L2036;
    }
  goto ret0;

  L2036:
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XWINT (x5, 0) == 4 && 1)
    goto L2037;
  goto ret0;

  L2037:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF && 1)
    goto L2038;
  goto ret0;

  L2038:
  x5 = XEXP (x4, 0);
  ro[1] = x5;
  goto L2039;

  L2039:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2040;
  goto ret0;

  L2040:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2041;
    }
  goto ret0;

  L2041:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2042;
  goto ret0;

  L2042:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 31 && 1)
    if (TARGET_EMBEDDED_PIC)
      return 329;
  goto ret0;

  L2184:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL && 1)
    goto L2185;
  goto ret0;

  L2185:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MEM && 1)
    goto L2186;
  goto ret0;

  L2186:
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      ro[1] = x4;
      goto L2187;
    }
  goto ret0;

  L2187:
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2188;

  L2188:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2189;
  goto ret0;

  L2189:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2190;
    }
  goto ret0;

  L2190:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL && 1)
    goto L2191;
  goto ret0;

  L2191:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MEM && 1)
    goto L2192;
  goto ret0;

  L2192:
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L2193;
  goto ret0;

  L2193:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L2194;
  goto ret0;

  L2194:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2195;
  goto ret0;

  L2195:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_ABICALLS && !TARGET_LONG_CALLS)
	return 355;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_11 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L675;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L703;
	}
    }
  goto ret0;

  L675:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case DIV:
      goto L676;
    case UDIV:
      goto L732;
    }
  goto ret0;

  L676:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L677;
    }
  goto ret0;

  L677:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L678;
    }
  goto ret0;

  L678:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L679;
  goto ret0;

  L679:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L680;
    }
  goto ret0;

  L680:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MOD && 1)
    goto L681;
  goto ret0;

  L681:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L682;
  goto ret0;

  L682:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L683;
  goto ret0;

  L683:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L684;
  goto ret0;

  L684:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L685;
    }
  goto ret0;

  L685:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L686;
  goto ret0;

  L686:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L687;
    }
  goto ret0;

  L687:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L688;
  goto ret0;

  L688:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (optimize)
	return 68;
      }
  goto ret0;

  L732:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L733;
    }
  goto ret0;

  L733:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L734;
    }
  goto ret0;

  L734:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L735;
  goto ret0;

  L735:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L736;
    }
  goto ret0;

  L736:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == UMOD && 1)
    goto L737;
  goto ret0;

  L737:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L738;
  goto ret0;

  L738:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L739;
  goto ret0;

  L739:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L740;
  goto ret0;

  L740:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L741;
    }
  goto ret0;

  L741:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L742;
  goto ret0;

  L742:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L743;
    }
  goto ret0;

  L743:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L744;
  goto ret0;

  L744:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (optimize)
	return 70;
      }
  goto ret0;

  L703:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case DIV:
      goto L704;
    case UDIV:
      goto L760;
    }
  goto ret0;

  L704:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L705;
    }
  goto ret0;

  L705:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L706;
    }
  goto ret0;

  L706:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L707;
  goto ret0;

  L707:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L708;
    }
  goto ret0;

  L708:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MOD && 1)
    goto L709;
  goto ret0;

  L709:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L710;
  goto ret0;

  L710:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L711;
  goto ret0;

  L711:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L712;
  goto ret0;

  L712:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L713;
    }
  goto ret0;

  L713:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L714;
  goto ret0;

  L714:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[5] = x2;
      goto L715;
    }
  goto ret0;

  L715:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L716;
  goto ret0;

  L716:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && optimize)
	return 69;
      }
  goto ret0;

  L760:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L761;
    }
  goto ret0;

  L761:
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L762;
    }
  goto ret0;

  L762:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L763;
  goto ret0;

  L763:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L764;
    }
  goto ret0;

  L764:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == UMOD && 1)
    goto L765;
  goto ret0;

  L765:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L766;
  goto ret0;

  L766:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L767;
  goto ret0;

  L767:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L768;
  goto ret0;

  L768:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L769;
    }
  goto ret0;

  L769:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L770;
  goto ret0;

  L770:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[5] = x2;
      goto L771;
    }
  goto ret0;

  L771:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L772;
  goto ret0;

  L772:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && optimize)
	return 71;
      }
  goto ret0;
 ret0: return -1;
}

int
recog (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  L0:
  switch (GET_CODE (x0))
    {
    default:
      break;
    case SET:
      goto L1;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L16;
      if (XVECLEN (x0, 0) == 4 && 1)
	goto L181;
      if (XVECLEN (x0, 0) == 3 && 1)
	goto L198;
      if (XVECLEN (x0, 0) == 5 && 1)
	goto L673;
      if (XVECLEN (x0, 0) == 8 && 1)
	goto L1406;
      break;
    case UNSPEC_VOLATILE:
      if (XINT (x0, 1) == 0 && XVECLEN (x0, 0) == 1 && 1)
	goto L2056;
      break;
    case RETURN:
      if (mips_can_use_return_insn ())
	return 335;
      break;
    case CONST_INT:
      if (XWINT (x0, 0) == 0 && 1)
	return 357;
    }
  goto ret0;
 L1:
  return recog_5 (x0, insn, pnum_clobbers);

  L16:
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L17;
    case USE:
      goto L2060;
    case CALL:
      goto L2075;
    }
  goto ret0;
 L17:
  return recog_7 (x0, insn, pnum_clobbers);

  L2060:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 31 && 1)
    goto L2061;
  goto ret0;

  L2061:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == RETURN && 1)
    return 336;
  goto ret0;

  L2075:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MEM)
    goto ret0;
  goto L2076;
  L2091:
  if (GET_CODE (x2) != MEM)
    goto ret0;
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L2092;
    case DImode:
      goto L2099;
    }
  goto ret0;

  L2076:
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      ro[0] = x3;
      goto L2077;
    }
  goto L2091;

  L2077:
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L2078;

  L2078:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2079;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2091;

  L2079:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2087;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2091;

  L2087:
  ro[2] = x2;
  if (!TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 340;
  L2088:
  ro[2] = x2;
  if (TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 341;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2091;

  L2092:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L2093;
    }
  goto ret0;

  L2093:
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L2094;

  L2094:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2095;
  goto ret0;

  L2095:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2110;
  goto ret0;

  L2110:
  ro[2] = x2;
  if (!TARGET_LONG64 && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 342;
  L2111:
  ro[2] = x2;
  if (!TARGET_LONG64 && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 344;
  goto ret0;

  L2099:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[0] = x3;
      goto L2100;
    }
  goto ret0;

  L2100:
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L2101;

  L2101:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2102;
  goto ret0;

  L2102:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2119;
  goto ret0;

  L2119:
  ro[2] = x2;
  if (TARGET_LONG64 && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 343;
  L2120:
  ro[2] = x2;
  if (TARGET_LONG64 && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 345;
  goto ret0;

  L181:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L182;
  goto ret0;

  L182:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L183;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L270;
	}
    }
  goto ret0;
 L183:
  return recog_8 (x0, insn, pnum_clobbers);

  L270:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MULT:
      goto L271;
    case DIV:
      goto L805;
    case MOD:
      goto L839;
    case UDIV:
      goto L873;
    case UMOD:
      goto L907;
    }
  goto ret0;

  L271:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L272;
    }
  goto ret0;

  L272:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L273;
    }
  goto ret0;

  L273:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L274;
  goto ret0;

  L274:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L275;
    }
  goto ret0;

  L275:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L276;
  goto ret0;

  L276:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L277;
    }
  goto ret0;

  L277:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L278;
  goto ret0;

  L278:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[5] = x2;
      if (TARGET_64BIT && mips_cpu == PROCESSOR_R4000)
	return 39;
      }
  goto ret0;

  L805:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L806;
    }
  goto ret0;

  L806:
  x3 = XEXP (x2, 1);
  if (se_nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L807;
    }
  goto ret0;

  L807:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L808;
  goto ret0;

  L808:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L809;
    }
  goto ret0;

  L809:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L810;
  goto ret0;

  L810:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L811;
    }
  goto ret0;

  L811:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L812;
  goto ret0;

  L812:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && !optimize)
	return 73;
      }
  goto ret0;

  L839:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L840;
    }
  goto ret0;

  L840:
  x3 = XEXP (x2, 1);
  if (se_nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L841;
    }
  goto ret0;

  L841:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L842;
  goto ret0;

  L842:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L843;
    }
  goto ret0;

  L843:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L844;
  goto ret0;

  L844:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L845;
    }
  goto ret0;

  L845:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L846;
  goto ret0;

  L846:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && !optimize)
	return 75;
      }
  goto ret0;

  L873:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L874;
    }
  goto ret0;

  L874:
  x3 = XEXP (x2, 1);
  if (se_nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L875;
    }
  goto ret0;

  L875:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L876;
  goto ret0;

  L876:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L877;
    }
  goto ret0;

  L877:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L878;
  goto ret0;

  L878:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L879;
    }
  goto ret0;

  L879:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L880;
  goto ret0;

  L880:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && !optimize)
	return 77;
      }
  goto ret0;

  L907:
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L908;
    }
  goto ret0;

  L908:
  x3 = XEXP (x2, 1);
  if (se_nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L909;
    }
  goto ret0;

  L909:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L910;
  goto ret0;

  L910:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L911;
    }
  goto ret0;

  L911:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L912;
  goto ret0;

  L912:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L913;
    }
  goto ret0;

  L913:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L914;
  goto ret0;

  L914:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && !optimize)
	return 79;
      }
  goto ret0;

  L198:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L199;
  goto ret0;
 L199:
  return recog_10 (x0, insn, pnum_clobbers);

  L673:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L674;
  goto ret0;
 L674:
  return recog_11 (x0, insn, pnum_clobbers);

  L1406:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1407;
  goto ret0;

  L1407:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, BLKmode))
    {
      ro[0] = x2;
      goto L1408;
    }
  goto ret0;

  L1408:
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, BLKmode))
    {
      ro[1] = x2;
      goto L1409;
    }
  goto ret0;

  L1409:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1410;
  goto ret0;

  L1410:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1411;
    }
  goto ret0;

  L1411:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1412;
  goto ret0;

  L1412:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L1413;
    }
  goto ret0;

  L1413:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1414;
  goto ret0;

  L1414:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L1415;
    }
  goto ret0;

  L1415:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1416;
  goto ret0;

  L1416:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[7] = x2;
      goto L1417;
    }
  goto ret0;

  L1417:
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE && 1)
    goto L1418;
  goto ret0;

  L1418:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      goto L1419;
    }
  goto ret0;

  L1419:
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == USE && 1)
    goto L1420;
  goto ret0;

  L1420:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[3] = x2;
      goto L1421;
    }
  goto ret0;

  L1421:
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == USE && 1)
    goto L1422;
  goto ret0;

  L1422:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != CONST_INT)
    goto ret0;
  if (XWINT (x2, 0) == 0 && 1)
    return 201;
  if (GET_CODE (x2) != CONST_INT)
    goto ret0;
  if (XWINT (x2, 0) == 1 && 1)
    return 203;
  if (XWINT (x2, 0) == 2 && 1)
    return 204;
  goto ret0;

  L2056:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 333;
  goto ret0;
 ret0: return -1;
}

rtx
split_1 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  rtx tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L27;
    case MINUS:
      goto L105;
    case ASHIFT:
      goto L1504;
    case ASHIFTRT:
      goto L1576;
    case LSHIFTRT:
      goto L1648;
    }
  goto ret0;

  L27:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L28;
    }
  goto ret0;

  L28:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L29;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L55;
    }
  goto ret0;

  L29:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L30;
  goto ret0;

  L30:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L39;
  goto ret0;

  L39:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2])))
    return gen_split_6 (operands);
  L40:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2])))
    return gen_split_7 (operands);
  goto ret0;

  L55:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L56;
  goto ret0;

  L56:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L65;
  goto ret0;

  L65:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_9 (operands);
  L66:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_10 (operands);
  goto ret0;

  L105:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L106;
    }
  goto ret0;

  L106:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L107;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L133;
    }
  goto ret0;

  L107:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L108;
  goto ret0;

  L108:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L117;
  goto ret0;

  L117:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
    return gen_split_19 (operands);
  L118:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
    return gen_split_20 (operands);
  goto ret0;

  L133:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L134;
  goto ret0;

  L134:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L143;
  goto ret0;

  L143:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_22 (operands);
  L144:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_23 (operands);
  goto ret0;

  L1504:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1505;
    }
  goto ret0;

  L1505:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1506;
    }
  goto ret0;

  L1506:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1507;
  goto ret0;

  L1507:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1516;
  L1535:
  if (register_operand (x2, SImode))
    goto L1544;
  goto ret0;

  L1516:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_209 (operands);
  L1517:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_210 (operands);
  goto L1535;

  L1544:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_212 (operands);
  L1545:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_213 (operands);
  goto ret0;

  L1576:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1577;
    }
  goto ret0;

  L1577:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1578;
    }
  goto ret0;

  L1578:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1579;
  goto ret0;

  L1579:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1588;
  L1607:
  if (register_operand (x2, SImode))
    goto L1616;
  goto ret0;

  L1588:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_219 (operands);
  L1589:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_220 (operands);
  goto L1607;

  L1616:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_222 (operands);
  L1617:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_223 (operands);
  goto ret0;

  L1648:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1649;
    }
  goto ret0;

  L1649:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1650;
    }
  goto ret0;

  L1650:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1651;
  goto ret0;

  L1651:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1660;
  L1679:
  if (register_operand (x2, SImode))
    goto L1688;
  goto ret0;

  L1660:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_229 (operands);
  L1661:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_230 (operands);
  goto L1679;

  L1688:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_232 (operands);
  L1689:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_233 (operands);
  goto ret0;
 ret0: return 0;
}

rtx
split_2 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  rtx tem;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case DImode:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1015;
	}
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1760;
	}
      break;
    case DFmode:
      if (register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1393;
	}
    }
  goto ret0;

  L1015:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case NOT:
      goto L1016;
    case AND:
      goto L1089;
    case IOR:
      goto L1050;
    case XOR:
      goto L1065;
    case EQ:
      goto L1771;
    case NE:
      goto L1801;
    case GE:
      goto L1831;
    case LE:
      goto L1871;
    case GEU:
      goto L1901;
    case LEU:
      goto L1941;
    case SUBREG:
    case REG:
      if (register_operand (x1, DImode))
	{
	  ro[1] = x1;
	  if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	    return gen_split_165 (operands);
	  }
    }
  goto ret0;

  L1016:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	return gen_split_98 (operands);
      }
  goto ret0;

  L1089:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  if (GET_CODE (x2) == NOT && 1)
    goto L1090;
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1031;
    }
  goto ret0;

  L1090:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1091;
    }
  goto ret0;

  L1091:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == NOT && 1)
    goto L1092;
  goto ret0;

  L1092:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_112 (operands);
      }
  goto ret0;

  L1031:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_101 (operands);
      }
  goto ret0;

  L1050:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1051;
    }
  goto ret0;

  L1051:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_105 (operands);
      }
  goto ret0;

  L1065:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1066;
    }
  goto ret0;

  L1066:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_108 (operands);
      }
  goto ret0;

  L1771:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1772;
    }
  goto ret0;

  L1772:
  x2 = XEXP (x1, 1);
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_263 (operands);
      }
  goto ret0;

  L1801:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1802;
    }
  goto ret0;

  L1802:
  x2 = XEXP (x1, 1);
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_270 (operands);
      }
  goto ret0;

  L1831:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1832;
    }
  goto ret0;

  L1832:
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_278 (operands);
      }
  goto ret0;

  L1871:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1872;
    }
  goto ret0;

  L1872:
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_288 (operands);
      }
  goto ret0;

  L1901:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1902;
    }
  goto ret0;

  L1902:
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_296 (operands);
      }
  goto ret0;

  L1941:
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1942;
    }
  goto ret0;

  L1942:
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_306 (operands);
      }
  goto ret0;

  L1760:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case EQ:
	  goto L1761;
	case NE:
	  goto L1791;
	case GE:
	  goto L1821;
	case LE:
	  goto L1861;
	case GEU:
	  goto L1891;
	case LEU:
	  goto L1931;
	}
    }
  if (GET_CODE (x1) == CONST_INT && large_int (x1, SImode))
    {
      ro[1] = x1;
      if (!TARGET_DEBUG_D_MODE)
	return gen_split_169 (operands);
      }
  goto ret0;

  L1761:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1762;
    }
  goto ret0;

  L1762:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_261 (operands);
      }
  goto ret0;

  L1791:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1792;
    }
  goto ret0;

  L1792:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_268 (operands);
      }
  goto ret0;

  L1821:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1822;
    }
  goto ret0;

  L1822:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_276 (operands);
      }
  goto ret0;

  L1861:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1862;
    }
  goto ret0;

  L1862:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_286 (operands);
      }
  goto ret0;

  L1891:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1892;
    }
  goto ret0;

  L1892:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_294 (operands);
      }
  goto ret0;

  L1931:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1932;
    }
  goto ret0;

  L1932:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_304 (operands);
      }
  goto ret0;

  L1393:
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      ro[1] = x1;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	return gen_split_198 (operands);
      }
  goto ret0;
 ret0: return 0;
}

rtx
split_insns (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  rtx tem;

  L23:
  switch (GET_CODE (x0))
    {
    default:
      break;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L24;
      if (XVECLEN (x0, 0) == 8 && 1)
	goto L1424;
      break;
    case SET:
      goto L1014;
    }
  goto ret0;

  L24:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L25;
  goto ret0;

  L25:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[0] = x2;
      goto L26;
    }
  goto ret0;
 L26:
  return split_1 (x0, insn);

  L1424:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1425;
  goto ret0;

  L1425:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode && GET_CODE (x2) == MEM && 1)
    goto L1426;
  goto ret0;

  L1426:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L1427;
    }
  goto ret0;

  L1427:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode && GET_CODE (x2) == MEM && 1)
    goto L1428;
  goto ret0;

  L1428:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1429;
    }
  goto ret0;

  L1429:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1430;
  goto ret0;

  L1430:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1431;
    }
  goto ret0;

  L1431:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1432;
  goto ret0;

  L1432:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L1433;
    }
  goto ret0;

  L1433:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1434;
  goto ret0;

  L1434:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L1435;
    }
  goto ret0;

  L1435:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1436;
  goto ret0;

  L1436:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[7] = x2;
      goto L1437;
    }
  goto ret0;

  L1437:
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE && 1)
    goto L1438;
  goto ret0;

  L1438:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      goto L1439;
    }
  goto ret0;

  L1439:
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == USE && 1)
    goto L1440;
  goto ret0;

  L1440:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[3] = x2;
      goto L1441;
    }
  goto ret0;

  L1441:
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == USE && 1)
    goto L1442;
  goto ret0;

  L1442:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (reload_completed && !TARGET_DEBUG_D_MODE && INTVAL (operands[2]) > 0)
      return gen_split_202 (operands);
  goto ret0;
 L1014:
  return split_2 (x0, insn);
 ret0: return 0;
}

