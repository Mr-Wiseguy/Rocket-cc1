/* Generated automatically by the program `genoutput'
from the machine description file `md'.  */

#include "config.h"
#include <stdio.h>
#include "flags.h"
#include "rtl.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-flags.h"
#include "insn-attr.h"

#include "insn-codes.h"

#include "recog.h"

#include "output.h"

static char *
output_5 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return (REGNO (operands[0]) == REGNO (operands[1])
	  && REGNO (operands[0]) == REGNO (operands[2]))
    ? "srl\t%3,%L0,31\n\tsll\t%M0,%M0,1\n\tsll\t%L0,%L1,1\n\taddu\t%M0,%M0,%3"
    : "addu\t%L0,%L1,%L2\n\tsltu\t%3,%L0,%L2\n\taddu\t%M0,%M1,%M2\n\taddu\t%M0,%M0,%3";
}
}

static char *
output_8 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_8[] = {
    "addu\t%L0,%L1,%2\n\tsltu\t%3,%L0,%2\n\taddu\t%M0,%M1,%3",
    "move\t%L0,%L1\n\tmove\t%M0,%M1",
    "subu\t%L0,%L1,%n2\n\tsltu\t%3,%L0,%2\n\tsubu\t%M0,%M1,1\n\taddu\t%M0,%M0,%3",
  };
  return strings_8[which_alternative];
}

static char *
output_11 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    ? "dsubu\t%0,%z1,%n2"
    : "daddu\t%0,%z1,%2";
}
}

static char *
output_12 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    ? "subu\t%0,%z1,%n2"
    : "addu\t%0,%z1,%2";
}
}

static char *
output_21 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_21[] = {
    "sltu\t%3,%L1,%2\n\tsubu\t%L0,%L1,%2\n\tsubu\t%M0,%M1,%3",
    "move\t%L0,%L1\n\tmove\t%M0,%M1",
    "sltu\t%3,%L1,%2\n\tsubu\t%L0,%L1,%2\n\tsubu\t%M0,%M1,1\n\tsubu\t%M0,%M0,%3",
  };
  return strings_21[which_alternative];
}

static char *
output_24 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    ? "daddu\t%0,%z1,%n2"
    : "dsubu\t%0,%z1,%2";
}
}

static char *
output_25 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    ? "addu\t%0,%z1,%n2"
    : "subu\t%0,%z1,%2";
}
}

static char *
output_28 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  output_asm_insn ("mul.d\t%0,%1,%2", operands);
  if (TARGET_4300_MUL_FIX)
    output_asm_insn ("nop", operands);
  return "";
}
}

static char *
output_31 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  output_asm_insn ("mul.s\t%0,%1,%2", operands);
  if (TARGET_4300_MUL_FIX)
    output_asm_insn ("nop", operands);
  return "";
}
}

static char *
output_35 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xoperands[10];

  xoperands[0] = operands[0];
  xoperands[1] = gen_rtx (REG, SImode, LO_REGNUM);

  output_asm_insn ("mult\t%1,%2", operands);
  output_asm_insn (mips_move_1word (xoperands, insn, FALSE), xoperands);
  return "";
}
}

static char *
output_39 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xoperands[10];

  xoperands[0] = operands[0];
  xoperands[1] = gen_rtx (REG, DImode, LO_REGNUM);

  output_asm_insn ("dmult\t%1,%2", operands);
  output_asm_insn (mips_move_1word (xoperands, insn, FALSE), xoperands);
  return "";
}
}

static char *
output_50 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_MAD)
    return "mad\t%1,%2";
  else
    return "madd\t%1,%2";
}
}

static char *
output_68 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "div\t%0,%1,%2";

  if (find_reg_note (insn, REG_UNUSED, operands[0]))
    return "rem\t%3,%1,%2";

  return "div\t%0,%1,%2\n\tmfhi\t%3";
}
}

static char *
output_69 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "ddiv\t%0,%1,%2";

  if (find_reg_note (insn, REG_UNUSED, operands[0]))
    return "drem\t%3,%1,%2";

  return "ddiv\t%0,%1,%2\n\tmfhi\t%3";
}
}

static char *
output_70 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divu\t%0,%1,%2";

  if (find_reg_note (insn, REG_UNUSED, operands[0]))
    return "remu\t%3,%1,%2";

  return "divu\t%0,%1,%2\n\tmfhi\t%3";
}
}

static char *
output_71 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "ddivu\t%0,%1,%2";

  if (find_reg_note (insn, REG_UNUSED, operands[0]))
    return "dremu\t%3,%1,%2";

  return "ddivu\t%0,%1,%2\n\tmfhi\t%3";
}
}

static char *
output_84 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  dslots_jump_total++;
  dslots_jump_filled++;
  operands[2] = const0_rtx;

  if (REGNO (operands[0]) == REGNO (operands[1]))
    {
      if (GENERATE_BRANCHLIKELY)
	return "%(bltzl\t%1,1f\n\tsubu\t%0,%z2,%0\n1:%)";
      else
	return "bgez\t%1,1f%#\n\tsubu\t%0,%z2,%0\n1:";
    }	  
  else
    return "%(bgez\t%1,1f\n\tmove\t%0,%1\n\tsubu\t%0,%z2,%0\n1:%)";
}
}

static char *
output_85 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  dslots_jump_total++;
  dslots_jump_filled++;
  operands[2] = const0_rtx;

  if (REGNO (operands[0]) == REGNO (operands[1]))
    return "%(bltzl\t%1,1f\n\tdsubu\t%0,%z2,%0\n1:%)";
  else
    return "%(bgez\t%1,1f\n\tmove\t%0,%1\n\tdsubu\t%0,%z2,%0\n1:%)";
}
}

static char *
output_88 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  dslots_jump_total += 2;
  dslots_jump_filled += 2;
  operands[4] = const0_rtx;

  if (optimize && find_reg_note (insn, REG_DEAD, operands[1]))
    return "%(\
move\t%0,%z4\n\
\tbeq\t%1,%z4,2f\n\
1:\tand\t%2,%1,0x0001\n\
\taddu\t%0,%0,1\n\
\tbeq\t%2,%z4,1b\n\
\tsrl\t%1,%1,1\n\
2:%)";

  return "%(\
move\t%0,%z4\n\
\tmove\t%3,%1\n\
\tbeq\t%3,%z4,2f\n\
1:\tand\t%2,%3,0x0001\n\
\taddu\t%0,%0,1\n\
\tbeq\t%2,%z4,1b\n\
\tsrl\t%3,%3,1\n\
2:%)";
}
}

static char *
output_89 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  dslots_jump_total += 2;
  dslots_jump_filled += 2;
  operands[4] = const0_rtx;

  if (optimize && find_reg_note (insn, REG_DEAD, operands[1]))
    return "%(\
move\t%0,%z4\n\
\tbeq\t%1,%z4,2f\n\
1:\tand\t%2,%1,0x0001\n\
\tdaddu\t%0,%0,1\n\
\tbeq\t%2,%z4,1b\n\
\tdsrl\t%1,%1,1\n\
2:%)";

  return "%(\
move\t%0,%z4\n\
\tmove\t%3,%1\n\
\tbeq\t%3,%z4,2f\n\
1:\tand\t%2,%3,0x0001\n\
\tdaddu\t%0,%0,1\n\
\tbeq\t%2,%z4,1b\n\
\tdsrl\t%3,%3,1\n\
2:%)";
}
}

static char *
output_90 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = const0_rtx;
  return "subu\t%0,%z2,%1";
}
}

static char *
output_92 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[3] = const0_rtx;
  return "subu\t%L0,%z3,%L1\n\tsubu\t%M0,%z3,%M1\n\tsltu\t%2,%z3,%L0\n\tsubu\t%M0,%M0,%2";
}
}

static char *
output_93 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = const0_rtx;
  return "dsubu\t%0,%z2,%1";
}
}

static char *
output_96 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = const0_rtx;
  return "nor\t%0,%z2,%1";
}
}

static char *
output_97 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = const0_rtx;
  if (TARGET_64BIT)
    return "nor\t%0,%z2,%1";
  return "nor\t%M0,%z2,%M1\n\tnor\t%L0,%z2,%L1";
}
}

static char *
output_99 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_99[] = {
    "and\t%0,%1,%2",
    "andi\t%0,%1,%x2",
  };
  return strings_99[which_alternative];
}

static char *
output_100 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_64BIT)
    return "and\t%0,%1,%2";
  return "and\t%M0,%M1,%M2\n\tand\t%L0,%L1,%L2";
}
}

static char *
output_102 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_102[] = {
    "and\t%0,%1,%2",
    "andi\t%0,%1,%x2",
  };
  return strings_102[which_alternative];
}

static char *
output_103 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_103[] = {
    "or\t%0,%1,%2",
    "ori\t%0,%1,%x2",
  };
  return strings_103[which_alternative];
}

static char *
output_104 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_64BIT)
    return "or\t%0,%1,%2";
  return "or\t%M0,%M1,%M2\n\tor\t%L0,%L1,%L2";
}
}

static char *
output_106 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_106[] = {
    "xor\t%0,%1,%2",
    "xori\t%0,%1,%x2",
  };
  return strings_106[which_alternative];
}

static char *
output_107 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_64BIT)
    return "xor\t%0,%1,%2";
  return "xor\t%M0,%M1,%M2\n\txor\t%L0,%L1,%L2";
}
}

static char *
output_111 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_64BIT)
    return "nor\t%0,%z1,%z2";
  return "nor\t%M0,%M1,%M2\n\tnor\t%L0,%L1,%L2";
}
}

static char *
output_117 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int shift_amt = INTVAL (operands[2]) & 0x3f;

  if (shift_amt < 32)
    {
      operands[2] = GEN_INT (32 - shift_amt);
      return "dsll\t%0,%1,%2\n\tdsra\t%0,%0,32";
    }
  else
    {
      operands[2] = GEN_INT (shift_amt);
      return "dsra\t%0,%1,%2";
    }
}
}

static char *
output_118 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int shift_amt = INTVAL (operands[2]) & 0x3f;

  if (shift_amt < 32)
    {
      operands[2] = GEN_INT (32 - shift_amt);
      return "dsll\t%0,%1,%2\n\tdsra\t%0,%0,32";
    }
  else if (shift_amt == 32)
    return "dsra\t%0,%1,32";
  else
    {
      operands[2] = GEN_INT (shift_amt);
      return "dsrl\t%0,%1,%2";
    }
}
}

static char *
output_119 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int shift_amt = INTVAL (operands[2]) & 0x3f;

  if (shift_amt < 32)
    {
      operands[2] = GEN_INT (32 + shift_amt);
      return "dsll\t%0,%1,%2\n\tdsra\t%0,%0,32";
    }
  else
    return "move\t%0,%.";
}
}

static char *
output_124 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, TRUE);
}

static char *
output_125 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (which_alternative == 0)
    return "andi\t%0,%1,0xffff";
  else
    return mips_move_1word (operands, insn, TRUE);
}
}

static char *
output_126 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (which_alternative == 0)
    return "andi\t%0,%1,0xffff";
  else
    return mips_move_1word (operands, insn, TRUE);
}
}

static char *
output_127 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (which_alternative == 0)
    return "andi\t%0,%1,0x00ff";
  else
    return mips_move_1word (operands, insn, TRUE);
}
}

static char *
output_128 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (which_alternative == 0)
    return "andi\t%0,%1,0x00ff";
  else
    return mips_move_1word (operands, insn, TRUE);
}
}

static char *
output_129 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (which_alternative == 0)
    return "andi\t%0,%1,0x00ff";
  else
    return mips_move_1word (operands, insn, TRUE);
}
}

static char *
output_130 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_move_1word (operands, insn, TRUE);
}
}

static char *
output_131 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_move_1word (operands, insn, TRUE);
}
}

static char *
output_132 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_134 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_136 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_138 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_140 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_142 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_144 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xoperands[10];

  if (which_alternative == 1)
    return "trunc.w.d %0,%1,%2";

  output_asm_insn ("trunc.w.d %3,%1,%2", operands);

  xoperands[0] = operands[0];
  xoperands[1] = operands[3];
  output_asm_insn (mips_move_1word (xoperands, insn, FALSE), xoperands);
  return "";
}
}

static char *
output_145 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xoperands[10];

  if (which_alternative == 1)
    return "trunc.w.s %0,%1,%2";

  output_asm_insn ("trunc.w.s %3,%1,%2", operands);

  xoperands[0] = operands[0];
  xoperands[1] = operands[3];
  output_asm_insn (mips_move_1word (xoperands, insn, FALSE), xoperands);
  return "";
}
}

static char *
output_146 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xoperands[10];

  if (which_alternative == 1)
    return "trunc.l.d %0,%1";

  output_asm_insn ("trunc.l.d %2,%1", operands);

  xoperands[0] = operands[0];
  xoperands[1] = operands[2];
  output_asm_insn (mips_move_2words (xoperands, insn, FALSE), xoperands);
  return "";
}
}

static char *
output_147 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xoperands[10];

  if (which_alternative == 1)
    return "trunc.l.s %0,%1";

  output_asm_insn ("trunc.l.s %2,%1", operands);

  xoperands[0] = operands[0];
  xoperands[1] = operands[2];
  output_asm_insn (mips_move_2words (xoperands, insn, FALSE), xoperands);
  return "";
}
}

static char *
output_148 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  dslots_load_total++;
  if (GET_CODE (operands[1]) == MEM)
    return "l.s\t%0,%1%#\n\tcvt.d.w\t%0,%0";

  return "mtc1\t%1,%0%#\n\tcvt.d.w\t%0,%0";
}
}

static char *
output_149 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  dslots_load_total++;
  if (GET_CODE (operands[1]) == MEM)
    return "l.d\t%0,%1%#\n\tcvt.d.l\t%0,%0";

  return "dmtc1\t%1,%0%#\n\tcvt.d.l\t%0,%0";
}
}

static char *
output_150 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  dslots_load_total++;
  if (GET_CODE (operands[1]) == MEM)
    return "l.s\t%0,%1%#\n\tcvt.s.w\t%0,%0";

  return "mtc1\t%1,%0%#\n\tcvt.s.w\t%0,%0";
}
}

static char *
output_151 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  dslots_load_total++;
  if (GET_CODE (operands[1]) == MEM)
    return "l.d\t%0,%1%#\n\tcvt.s.l\t%0,%0";

  return "dmtc1\t%1,%0%#\n\tcvt.s.l\t%0,%0";
}
}

static char *
output_159 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx offset = const0_rtx;
  rtx addr = XEXP (operands[1], 0);
  rtx mem_addr = eliminate_constant_term (addr, &offset);
  char *ret;

  if (TARGET_STATS)
    mips_count_memory_refs (operands[1], 2);

  /* The stack/frame pointers are always aligned, so we can convert
     to the faster lw if we are referencing an aligned stack location.  */

  if ((INTVAL (offset) & 3) == 0
      && (mem_addr == stack_pointer_rtx || mem_addr == frame_pointer_rtx))
    ret = "lw\t%0,%1";
  else
    ret = "ulw\t%0,%1";

  return mips_fill_delay_slot (ret, DELAY_LOAD, operands, insn);
}
}

static char *
output_160 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx offset = const0_rtx;
  rtx addr = XEXP (operands[0], 0);
  rtx mem_addr = eliminate_constant_term (addr, &offset);

  if (TARGET_STATS)
    mips_count_memory_refs (operands[0], 2);

  /* The stack/frame pointers are always aligned, so we can convert
     to the faster sw if we are referencing an aligned stack location.  */

  if ((INTVAL (offset) & 3) == 0
      && (mem_addr == stack_pointer_rtx || mem_addr == frame_pointer_rtx))
    return "sw\t%1,%0";

  return "usw\t%z1,%0";
}
}

static char *
output_164 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_2words (operands, insn); 
}

static char *
output_166 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_2words (operands, insn); 
}

static char *
output_171 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_172 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_174 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_186 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, TRUE);
}

static char *
output_187 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, TRUE);
}

static char *
output_189 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, TRUE);
}

static char *
output_190 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, TRUE);
}

static char *
output_192 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_193 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_1word (operands, insn, FALSE);
}

static char *
output_195 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_2words (operands, insn); 
}

static char *
output_196 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_2words (operands, insn); 
}

static char *
output_197 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return mips_move_2words (operands, insn); 
}

static char *
output_201 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_block_move (insn, operands, 4, BLOCK_MOVE_NORMAL);
}

static char *
output_203 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_block_move (insn, operands, 4, BLOCK_MOVE_NOT_LAST);
}

static char *
output_204 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_block_move (insn, operands, 4, BLOCK_MOVE_LAST);
}

static char *
output_205 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);

  return "sll\t%0,%1,%2";
}
}

static char *
output_207 (operands, insn)
     rtx *operands;
     rtx insn;
{
 
{
  operands[4] = const0_rtx;
  dslots_jump_total += 3;
  dslots_jump_filled += 2;

  return "sll\t%3,%2,26\n\
\tbgez\t%3,1f\n\
\tsll\t%M0,%L1,%2\n\
\t%(b\t3f\n\
\tmove\t%L0,%z4%)\n\
\n\
1:\n\
\t%(beq\t%3,%z4,2f\n\
\tsll\t%M0,%M1,%2%)\n\
\n\
\tsubu\t%3,%z4,%2\n\
\tsrl\t%3,%L1,%3\n\
\tor\t%M0,%M0,%3\n\
2:\n\
\tsll\t%L0,%L1,%2\n\
3:";
}
}

static char *
output_208 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  operands[4] = const0_rtx;
  return "sll\t%M0,%L1,%2\n\tmove\t%L0,%z4";
}
}

static char *
output_211 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int amount = INTVAL (operands[2]);

  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = const0_rtx;
  operands[5] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));

  return "sll\t%M0,%M1,%2\n\tsrl\t%3,%L1,%5\n\tor\t%M0,%M0,%3\n\tsll\t%L0,%L1,%2";
}
}

static char *
output_214 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsll\t%0,%1,%2";
}
}

static char *
output_215 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);

  return "sra\t%0,%1,%2";
}
}

static char *
output_217 (operands, insn)
     rtx *operands;
     rtx insn;
{
 
{
  operands[4] = const0_rtx;
  dslots_jump_total += 3;
  dslots_jump_filled += 2;

  return "sll\t%3,%2,26\n\
\tbgez\t%3,1f\n\
\tsra\t%L0,%M1,%2\n\
\t%(b\t3f\n\
\tsra\t%M0,%M1,31%)\n\
\n\
1:\n\
\t%(beq\t%3,%z4,2f\n\
\tsrl\t%L0,%L1,%2%)\n\
\n\
\tsubu\t%3,%z4,%2\n\
\tsll\t%3,%M1,%3\n\
\tor\t%L0,%L0,%3\n\
2:\n\
\tsra\t%M0,%M1,%2\n\
3:";
}
}

static char *
output_218 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  return "sra\t%L0,%M1,%2\n\tsra\t%M0,%M1,31";
}
}

static char *
output_221 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int amount = INTVAL (operands[2]);

  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));

  return "srl\t%L0,%L1,%2\n\tsll\t%3,%M1,%4\n\tor\t%L0,%L0,%3\n\tsra\t%M0,%M1,%2";
}
}

static char *
output_224 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsra\t%0,%1,%2";
}
}

static char *
output_225 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);

  return "srl\t%0,%1,%2";
}
}

static char *
output_227 (operands, insn)
     rtx *operands;
     rtx insn;
{
 
{
  operands[4] = const0_rtx;
  dslots_jump_total += 3;
  dslots_jump_filled += 2;

  return "sll\t%3,%2,26\n\
\tbgez\t%3,1f\n\
\tsrl\t%L0,%M1,%2\n\
\t%(b\t3f\n\
\tmove\t%M0,%z4%)\n\
\n\
1:\n\
\t%(beq\t%3,%z4,2f\n\
\tsrl\t%L0,%L1,%2%)\n\
\n\
\tsubu\t%3,%z4,%2\n\
\tsll\t%3,%M1,%3\n\
\tor\t%L0,%L0,%3\n\
2:\n\
\tsrl\t%M0,%M1,%2\n\
3:";
}
}

static char *
output_228 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  operands[4] = const0_rtx;
  return "srl\t%L0,%M1,%2\n\tmove\t%M0,%z4";
}
}

static char *
output_231 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int amount = INTVAL (operands[2]);

  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));

  return "srl\t%L0,%L1,%2\n\tsll\t%3,%M1,%4\n\tor\t%L0,%L0,%3\n\tsrl\t%M0,%M1,%2";
}
}

static char *
output_234 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsrl\t%0,%1,%2";
}
}

static char *
output_241 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  mips_branch_likely = (final_sequence && INSN_ANNULLED_BRANCH_P (insn));
  return (operands[1] != pc_rtx) ? "%*bc1t%?\t%Z0%1" : "%*bc1f%?\t%Z0%2";
}
}

static char *
output_242 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  mips_branch_likely = (final_sequence && INSN_ANNULLED_BRANCH_P (insn));
  return (operands[1] != pc_rtx) ? "%*bc1f%?\t%Z0%1" : "%*bc1t%?\t%Z0%2";
}
}

static char *
output_243 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  mips_branch_likely = (final_sequence && INSN_ANNULLED_BRANCH_P (insn));
  if (operands[2] != pc_rtx)
    {				/* normal jump */
      switch (GET_CODE (operands[0]))
	{
	case EQ:  return "%*beq%?\t%z1,%.,%2";
	case NE:  return "%*bne%?\t%z1,%.,%2";
	case GTU: return "%*bne%?\t%z1,%.,%2";
	case LEU: return "%*beq%?\t%z1,%.,%2";
	case GEU: return "%*j\t%2";
	case LTU: return "%*bne%?\t%.,%.,%2";
	}

      return "%*b%C0z%?\t%z1,%2";
    }
  else
    {				/* inverted jump */
      switch (GET_CODE (operands[0]))
	{
	case EQ:  return "%*bne%?\t%z1,%.,%3";
	case NE:  return "%*beq%?\t%z1,%.,%3";
	case GTU: return "%*beq%?\t%z1,%.,%3";
	case LEU: return "%*bne%?\t%z1,%.,%3";
	case GEU: return "%*beq%?\t%.,%.,%3";
	case LTU: return "%*j\t%3";
	}

      return "%*b%N0z%?\t%z1,%3";
    }
}
}

static char *
output_244 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  mips_branch_likely = (final_sequence && INSN_ANNULLED_BRANCH_P (insn));
  if (operands[2] != pc_rtx)
    {				/* normal jump */
      switch (GET_CODE (operands[0]))
	{
	case EQ:  return "%*beq%?\t%z1,%.,%2";
	case NE:  return "%*bne%?\t%z1,%.,%2";
	case GTU: return "%*bne%?\t%z1,%.,%2";
	case LEU: return "%*beq%?\t%z1,%.,%2";
	case GEU: return "%*j\t%2";
	case LTU: return "%*bne%?\t%.,%.,%2";
	}

      return "%*b%C0z%?\t%z1,%2";
    }
  else
    {				/* inverted jump */
      switch (GET_CODE (operands[0]))
	{
	case EQ:  return "%*bne%?\t%z1,%.,%3";
	case NE:  return "%*beq%?\t%z1,%.,%3";
	case GTU: return "%*beq%?\t%z1,%.,%3";
	case LEU: return "%*bne%?\t%z1,%.,%3";
	case GEU: return "%*beq%?\t%.,%.,%3";
	case LTU: return "%*j\t%3";
	}

      return "%*b%N0z%?\t%z1,%3";
    }
}
}

static char *
output_245 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  mips_branch_likely = (final_sequence && INSN_ANNULLED_BRANCH_P (insn));
  return (operands[3] != pc_rtx)
	? "%*b%C0%?\t%z1,%z2,%3"
	: "%*b%N0%?\t%z1,%z2,%4";
}
}

static char *
output_246 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  mips_branch_likely = (final_sequence && INSN_ANNULLED_BRANCH_P (insn));
  return (operands[3] != pc_rtx)
	? "%*b%C0%?\t%z1,%z2,%3"
	: "%*b%N0%?\t%z1,%z2,%4";
}
}

static char *
output_260 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_260[] = {
    "xor\t%0,%1,%2\n\tsltu\t%0,%0,1",
    "xori\t%0,%1,%2\n\tsltu\t%0,%0,1",
  };
  return strings_260[which_alternative];
}

static char *
output_262 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_262[] = {
    "xor\t%0,%1,%2\n\tsltu\t%0,%0,1",
    "xori\t%0,%1,%2\n\tsltu\t%0,%0,1",
  };
  return strings_262[which_alternative];
}

static char *
output_267 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_267[] = {
    "xor\t%0,%1,%2\n\tsltu\t%0,%.,%0",
    "xori\t%0,%1,%x2\n\tsltu\t%0,%.,%0",
  };
  return strings_267[which_alternative];
}

static char *
output_269 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_269[] = {
    "xor\t%0,%1,%2\n\tsltu\t%0,%.,%0",
    "xori\t%0,%1,%x2\n\tsltu\t%0,%.,%0",
  };
  return strings_269[which_alternative];
}

static char *
output_283 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2])+1);
  return "slt\t%0,%1,%2";
}
}

static char *
output_284 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2])+1);
  return "slt\t%0,%1,%2";
}
}

static char *
output_301 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2])+1);
  return "sltu\t%0,%1,%2";
}
}

static char *
output_302 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2])+1);
  return "sltu\t%0,%1,%2";
}
}

static char *
output_307 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.eq.d\t%Z0%1,%2", DELAY_FCMP, operands, insn);
}
}

static char *
output_308 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.lt.d\t%Z0%1,%2", DELAY_FCMP, operands, insn);
}
}

static char *
output_309 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.le.d\t%Z0%1,%2", DELAY_FCMP, operands, insn);
}
}

static char *
output_310 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.lt.d\t%Z0%2,%1", DELAY_FCMP, operands, insn);
}
}

static char *
output_311 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.le.d\t%Z0%2,%1", DELAY_FCMP, operands, insn);
}
}

static char *
output_312 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.eq.s\t%Z0%1,%2", DELAY_FCMP, operands, insn);
}
}

static char *
output_313 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.lt.s\t%Z0%1,%2", DELAY_FCMP, operands, insn);
}
}

static char *
output_314 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.le.s\t%Z0%1,%2", DELAY_FCMP, operands, insn);
}
}

static char *
output_315 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.lt.s\t%Z0%2,%1", DELAY_FCMP, operands, insn);
}
}

static char *
output_316 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  return mips_fill_delay_slot ("c.le.s\t%Z0%2,%1", DELAY_FCMP, operands, insn);
}
}

static char *
output_317 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[0]) == REG)
    return "%*j\t%0";
  /* ??? I don't know why this is necessary.  This works around an
     assembler problem that appears when a label is defined, then referenced
     in a switch table, then used in a `j' instruction.  */
  else if (mips_abi != ABI_32)
    return "%*b\t%l0";
  else	
    return "%*j\t%l0";
}
}

static char *
output_325 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  /* .cpadd expands to add REG,REG,$gp when pic, and nothing when not pic.  */
  if (mips_abi == ABI_32)
    output_asm_insn (".cpadd\t%0", operands);
  return "%*j\t%0";
}
}

static char *
output_329 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  output_asm_insn ("%(bal\t%S1\n\tsll\t%0,2\n%S1:", operands);
  output_asm_insn ("addu\t%0,%0,$31%)", operands);
  output_asm_insn ("lw\t%0,%1-%S1(%0)\n\taddu\t%0,%0,$31", operands);
  return "j\t%0";
}
}

static char *
output_340 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  register rtx target = operands[0];

  if (GET_CODE (target) == SYMBOL_REF)
    return "%*jal\t%0";
  else if (GET_CODE (target) == CONST_INT)
    return "%[li\t%@,%0\n\t%*jal\t%2,%@%]";
  else
    return "%*jal\t%2,%0";
}
}

static char *
output_341 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  register rtx target = operands[0];

  if (GET_CODE (target) == SYMBOL_REF)
    {
      if (GET_MODE (target) == SImode)
	return "la\t%^,%0\n\tjal\t%2,%^";
      else
	return "dla\t%^,%0\n\tjal\t%2,%^";
    }
  else if (GET_CODE (target) == CONST_INT)
    return "li\t%^,%0\n\tjal\t%2,%^";
  else if (REGNO (target) != PIC_FUNCTION_ADDR_REGNUM)
    return "move\t%^,%0\n\tjal\t%2,%^";
  else
    return "jal\t%2,%0";
}
}

static char *
output_344 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REGNO (operands[0]) != PIC_FUNCTION_ADDR_REGNUM)
    return "move\t%^,%0\n\tjal\t%2,%^";
  else
    return "jal\t%2,%0";
}
}

static char *
output_345 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REGNO (operands[0]) != PIC_FUNCTION_ADDR_REGNUM)
    return "move\t%^,%0\n\tjal\t%2,%^";
  else
    return "jal\t%2,%0";
}
}

static char *
output_348 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  register rtx target = operands[1];

  if (GET_CODE (target) == SYMBOL_REF)
    return "%*jal\t%1";
  else if (GET_CODE (target) == CONST_INT)
    return "%[li\t%@,%1\n\t%*jal\t%3,%@%]";
  else
    return "%*jal\t%3,%1";
}
}

static char *
output_349 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  register rtx target = operands[1];

  if (GET_CODE (target) == SYMBOL_REF)
    {
      if (GET_MODE (target) == SImode)
	return "la\t%^,%1\n\tjal\t%3,%^";
      else
	return "dla\t%^,%1\n\tjal\t%3,%^";
    }
  else if (GET_CODE (target) == CONST_INT)
    return "li\t%^,%1\n\tjal\t%3,%^";
  else if (REGNO (target) != PIC_FUNCTION_ADDR_REGNUM)
    return "move\t%^,%1\n\tjal\t%3,%^";
  else
    return "jal\t%3,%1";
}
}

static char *
output_352 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REGNO (operands[1]) != PIC_FUNCTION_ADDR_REGNUM)
    return "move\t%^,%1\n\tjal\t%3,%^";
  else
    return "jal\t%3,%1";
}
}

static char *
output_353 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REGNO (operands[1]) != PIC_FUNCTION_ADDR_REGNUM)
    return "move\t%^,%1\n\tjal\t%3,%^";
  else
    return "jal\t%3,%1";
}
}

static char *
output_355 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  register rtx target = operands[1];

  if (GET_CODE (target) == SYMBOL_REF)
    {
      if (GET_MODE (target) == SImode)
	return "la\t%^,%1\n\tjal\t%4,%^";
      else
	return "la\t%^,%1\n\tjal\t%4,%^";
    }
  else if (GET_CODE (target) == CONST_INT)
    return "li\t%^,%1\n\tjal\t%4,%^";
  else if (REGNO (target) != PIC_FUNCTION_ADDR_REGNUM)
    return "move\t%^,%1\n\tjal\t%4,%^";
  else
    return "jal\t%4,%1";
}
}

static char *
output_358 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_358[] = {
    "mov%B4\t%0,%z2,%1",
    "mov%b4\t%0,%z3,%1",
  };
  return strings_358[which_alternative];
}

static char *
output_359 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_359[] = {
    "mov%B4\t%0,%z2,%1",
    "mov%b4\t%0,%z3,%1",
  };
  return strings_359[which_alternative];
}

static char *
output_360 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_360[] = {
    "mov%T3\t%0,%z1,%4",
    "mov%t3\t%0,%z2,%4",
  };
  return strings_360[which_alternative];
}

static char *
output_361 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_361[] = {
    "mov%B4\t%0,%z2,%1",
    "mov%b4\t%0,%z3,%1",
  };
  return strings_361[which_alternative];
}

static char *
output_362 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_362[] = {
    "mov%B4\t%0,%z2,%1",
    "mov%b4\t%0,%z3,%1",
  };
  return strings_362[which_alternative];
}

static char *
output_363 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_363[] = {
    "mov%T3\t%0,%z1,%4",
    "mov%t3\t%0,%z2,%4",
  };
  return strings_363[which_alternative];
}

static char *
output_364 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_364[] = {
    "mov%B4.s\t%0,%2,%1",
    "mov%b4.s\t%0,%3,%1",
  };
  return strings_364[which_alternative];
}

static char *
output_365 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_365[] = {
    "mov%T3.s\t%0,%1,%4",
    "mov%t3.s\t%0,%2,%4",
  };
  return strings_365[which_alternative];
}

static char *
output_366 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_366[] = {
    "mov%B4.d\t%0,%2,%1",
    "mov%b4.d\t%0,%3,%1",
  };
  return strings_366[which_alternative];
}

static char *
output_367 (operands, insn)
     rtx *operands;
     rtx insn;
{
  static /*const*/ char *const strings_367[] = {
    "mov%T3.d\t%0,%1,%4",
    "mov%t3.d\t%0,%2,%4",
  };
  return strings_367[which_alternative];
}

char * const insn_template[] =
  {
    "add.d\t%0,%1,%2",
    "add.s\t%0,%1,%2",
    0,
    "addu\t%0,%z1,%2",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "sub.d\t%0,%1,%2",
    "sub.s\t%0,%1,%2",
    0,
    "subu\t%0,%z1,%2",
    0,
    "sltu\t%3,%L1,%L2\n\tsubu\t%L0,%L1,%L2\n\tsubu\t%M0,%M1,%M2\n\tsubu\t%M0,%M0,%3",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "mul.d\t%0,%1,%2",
    0,
    0,
    "mul.s\t%0,%1,%2",
    0,
    0,
    "mult\t%0,%1,%2",
    "mult\t%1,%2",
    0,
    "mul\t%0,%1,%2",
    0,
    "dmult\t%1,%2",
    0,
    0,
    "mult\t%1,%2",
    "mult\t%1,%2",
    "mult\t%1,%2",
    0,
    "multu\t%1,%2",
    "multu\t%1,%2",
    "multu\t%1,%2",
    "dmult\t%1,%2",
    "dmultu\t%1,%2",
    0,
    "mad\t%1,%2",
    "mad\t%1,%2",
    "madu\t%1,%2",
    "madu\t%1,%2",
    "madd\t%0,%1,%2",
    "madd.d\t%0,%3,%1,%2",
    "madd.s\t%0,%3,%1,%2",
    "msub.d\t%0,%3,%1,%2",
    "msub.s\t%0,%3,%1,%2",
    "nmadd.d\t%0,%3,%1,%2",
    "nmadd.s\t%0,%3,%1,%2",
    "nmsub.d\t%0,%1,%2,%3",
    "nmsub.s\t%0,%1,%2,%3",
    "div.d\t%0,%1,%2",
    "div.s\t%0,%1,%2",
    "recip.d\t%0,%2",
    "recip.s\t%0,%2",
    0,
    0,
    0,
    0,
    "div\t%0,%1,%2",
    "ddiv\t%0,%1,%2",
    "rem\t%0,%1,%2",
    "drem\t%0,%1,%2",
    "divu\t%0,%1,%2",
    "ddivu\t%0,%1,%2",
    "remu\t%0,%1,%2",
    "dremu\t%0,%1,%2",
    "sqrt.d\t%0,%1",
    "sqrt.s\t%0,%1",
    "rsqrt.d\t%0,%2",
    "rsqrt.s\t%0,%2",
    0,
    0,
    "abs.d\t%0,%1",
    "abs.s\t%0,%1",
    0,
    0,
    0,
    0,
    0,
    0,
    "neg.d\t%0,%1",
    "neg.s\t%0,%1",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "xori\t%0,%1,%x2",
    "nor\t%0,%z1,%z2",
    0,
    0,
    "cvt.s.d\t%0,%1",
    "dsll\t%0,%1,32\n\tdsra\t%0,%0,32",
    "andi\t%0,%1,0xffff",
    "andi\t%0,%1,0x00ff",
    0,
    0,
    0,
    "andi\t%0,%1,0xffff",
    "andi\t%0,%1,0xff",
    "andi\t%0,%1,0xff",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "cvt.d.s\t%0,%1",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "lui\t%0,%%hi(%1) # high",
    "addiu\t%0,%1,%%lo(%2) # low",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "lwxc1\t%0,%1(%2)",
    "lwxc1\t%0,%1(%2)",
    "ldxc1\t%0,%1(%2)",
    "ldxc1\t%0,%1(%2)",
    "swxc1\t%0,%1(%2)",
    "swxc1\t%0,%1(%2)",
    "sdxc1\t%0,%1(%2)",
    "sdxc1\t%0,%1(%2)",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "%[lui\t$1,%%hi(%%neg(%%gp_rel(%a0)))\n\taddiu\t$1,$1,%%lo(%%neg(%%gp_rel(%a0)))\n\tdaddu\t$gp,$1,$25%]",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "sltu\t%0,%1,1",
    "sltu\t%0,%1,1",
    0,
    0,
    0,
    0,
    0,
    "sltu\t%0,%.,%1",
    "sltu\t%0,%.,%1",
    0,
    0,
    0,
    0,
    0,
    "slt\t%0,%z2,%1",
    "slt\t%0,%z2,%1",
    0,
    "slt\t%0,%1,%2\n\txori\t%0,%0,0x0001",
    0,
    "slt\t%0,%1,%2\n\txori\t%0,%0,0x0001",
    0,
    0,
    "slt\t%0,%1,%2",
    "slt\t%0,%1,%2",
    0,
    0,
    0,
    "slt\t%0,%z2,%1\n\txori\t%0,%0,0x0001",
    0,
    "slt\t%0,%z2,%1\n\txori\t%0,%0,0x0001",
    0,
    0,
    "sltu\t%0,%z2,%1",
    "sltu\t%0,%z2,%1",
    0,
    "sltu\t%0,%1,%2\n\txori\t%0,%0,0x0001",
    0,
    "sltu\t%0,%1,%2\n\txori\t%0,%0,0x0001",
    0,
    0,
    "sltu\t%0,%1,%2",
    "sltu\t%0,%1,%2",
    0,
    0,
    0,
    "sltu\t%0,%z2,%1\n\txori\t%0,%0,0x0001",
    0,
    "sltu\t%0,%z2,%1\n\txori\t%0,%0,0x0001",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "%*j\t%0",
    "%*j\t%0",
    0,
    "%*j\t%0",
    "%*j\t%0",
    0,
    0,
    0,
    "%*j\t%0",
    0,
    0,
    0,
    0,
    0,
    "",
    0,
    "%*j\t$31",
    "%*j\t$31",
    "%($LF%= = . + 8\n\tbal\t$LF%=\n\tla\t%0,%1-$LF%=%)\n\taddu\t%0,%0,$31",
    0,
    0,
    0,
    0,
    "%*jal\t%2,%0",
    "%*jal\t%2,%0",
    0,
    0,
    0,
    0,
    0,
    0,
    "%*jal\t%3,%1",
    "%*jal\t%3,%1",
    0,
    0,
    0,
    0,
    0,
    "%(nop%)",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
  };

char *(*const insn_outfun[])() =
  {
    0,
    0,
    0,
    0,
    0,
    output_5,
    0,
    0,
    output_8,
    0,
    0,
    output_11,
    output_12,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_21,
    0,
    0,
    output_24,
    output_25,
    0,
    0,
    output_28,
    0,
    0,
    output_31,
    0,
    0,
    0,
    output_35,
    0,
    0,
    0,
    output_39,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_50,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_68,
    output_69,
    output_70,
    output_71,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_84,
    output_85,
    0,
    0,
    output_88,
    output_89,
    output_90,
    0,
    output_92,
    output_93,
    0,
    0,
    output_96,
    output_97,
    0,
    output_99,
    output_100,
    0,
    output_102,
    output_103,
    output_104,
    0,
    output_106,
    output_107,
    0,
    0,
    0,
    output_111,
    0,
    0,
    0,
    0,
    0,
    output_117,
    output_118,
    output_119,
    0,
    0,
    0,
    0,
    output_124,
    output_125,
    output_126,
    output_127,
    output_128,
    output_129,
    output_130,
    output_131,
    output_132,
    0,
    output_134,
    0,
    output_136,
    0,
    output_138,
    0,
    output_140,
    0,
    output_142,
    0,
    output_144,
    output_145,
    output_146,
    output_147,
    output_148,
    output_149,
    output_150,
    output_151,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_159,
    output_160,
    0,
    0,
    0,
    output_164,
    0,
    output_166,
    0,
    0,
    0,
    0,
    output_171,
    output_172,
    0,
    output_174,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_186,
    output_187,
    0,
    output_189,
    output_190,
    0,
    output_192,
    output_193,
    0,
    output_195,
    output_196,
    output_197,
    0,
    0,
    0,
    output_201,
    0,
    output_203,
    output_204,
    output_205,
    0,
    output_207,
    output_208,
    0,
    0,
    output_211,
    0,
    0,
    output_214,
    output_215,
    0,
    output_217,
    output_218,
    0,
    0,
    output_221,
    0,
    0,
    output_224,
    output_225,
    0,
    output_227,
    output_228,
    0,
    0,
    output_231,
    0,
    0,
    output_234,
    0,
    0,
    0,
    0,
    0,
    0,
    output_241,
    output_242,
    output_243,
    output_244,
    output_245,
    output_246,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_260,
    0,
    output_262,
    0,
    0,
    0,
    0,
    output_267,
    0,
    output_269,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_283,
    output_284,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_301,
    output_302,
    0,
    0,
    0,
    0,
    output_307,
    output_308,
    output_309,
    output_310,
    output_311,
    output_312,
    output_313,
    output_314,
    output_315,
    output_316,
    output_317,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_325,
    0,
    0,
    0,
    output_329,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_340,
    output_341,
    0,
    0,
    output_344,
    output_345,
    0,
    0,
    output_348,
    output_349,
    0,
    0,
    output_352,
    output_353,
    0,
    output_355,
    0,
    0,
    output_358,
    output_359,
    output_360,
    output_361,
    output_362,
    output_363,
    output_364,
    output_365,
    output_366,
    output_367,
    0,
    0,
    0,
    0,
  };

rtx (*const insn_gen_function[]) () =
  {
    gen_adddf3,
    gen_addsf3,
    gen_addsi3,
    gen_addsi3_internal,
    gen_adddi3,
    gen_adddi3_internal_1,
    0,
    0,
    gen_adddi3_internal_2,
    0,
    0,
    gen_adddi3_internal_3,
    gen_addsi3_internal_2,
    gen_subdf3,
    gen_subsf3,
    gen_subsi3,
    gen_subsi3_internal,
    gen_subdi3,
    gen_subdi3_internal,
    0,
    0,
    gen_subdi3_internal_2,
    0,
    0,
    gen_subdi3_internal_3,
    gen_subsi3_internal_2,
    gen_muldf3,
    gen_muldf3_internal,
    gen_muldf3_r4300,
    gen_mulsf3,
    gen_mulsf3_internal,
    gen_mulsf3_r4300,
    gen_mulsi3,
    gen_mulsi3_mult3,
    gen_mulsi3_internal,
    gen_mulsi3_r4000,
    gen_mulsi3_r4650,
    gen_muldi3,
    gen_muldi3_internal,
    gen_muldi3_r4000,
    gen_mulsidi3,
    gen_mulsidi3_internal,
    gen_mulsidi3_64bit,
    gen_smulsi3_highpart,
    gen_umulsidi3,
    gen_umulsidi3_internal,
    gen_umulsidi3_64bit,
    gen_umulsi3_highpart,
    gen_smuldi3_highpart,
    gen_umuldi3_highpart,
    gen_madsi,
    gen_maddi,
    gen_maddi_64bit,
    gen_umaddi,
    gen_umaddi_64bit,
    gen_madd3,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_divdf3,
    gen_divsf3,
    0,
    0,
    gen_divmodsi4,
    gen_divmoddi4,
    gen_udivmodsi4,
    gen_udivmoddi4,
    gen_divsi3,
    gen_divdi3,
    gen_modsi3,
    gen_moddi3,
    gen_udivsi3,
    gen_udivdi3,
    gen_umodsi3,
    gen_umoddi3,
    gen_sqrtdf2,
    gen_sqrtsf2,
    0,
    0,
    gen_abssi2,
    gen_absdi2,
    gen_absdf2,
    gen_abssf2,
    gen_ffssi2,
    gen_ffsdi2,
    gen_negsi2,
    gen_negdi2,
    gen_negdi2_internal,
    gen_negdi2_internal_2,
    gen_negdf2,
    gen_negsf2,
    gen_one_cmplsi2,
    gen_one_cmpldi2,
    0,
    gen_andsi3,
    gen_anddi3,
    0,
    gen_anddi3_internal1,
    gen_iorsi3,
    gen_iordi3,
    0,
    gen_xorsi3,
    gen_xordi3,
    0,
    gen_xordi3_immed,
    0,
    0,
    0,
    gen_truncdfsf2,
    gen_truncdisi2,
    gen_truncdihi2,
    gen_truncdiqi2,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_zero_extendsidi2,
    gen_zero_extendsidi2_internal,
    gen_zero_extendhisi2,
    gen_zero_extendhidi2,
    gen_zero_extendqihi2,
    gen_zero_extendqisi2,
    gen_zero_extendqidi2,
    0,
    0,
    gen_extendsidi2,
    gen_extendhidi2,
    gen_extendhidi2_internal,
    gen_extendhisi2,
    gen_extendhisi2_internal,
    gen_extendqihi2,
    gen_extendqihi2_internal,
    gen_extendqisi2,
    gen_extendqisi2_insn,
    gen_extendqidi2,
    gen_extendqidi2_insn,
    gen_extendsfdf2,
    gen_fix_truncdfsi2,
    gen_fix_truncsfsi2,
    gen_fix_truncdfdi2,
    gen_fix_truncsfdi2,
    gen_floatsidf2,
    gen_floatdidf2,
    gen_floatsisf2,
    gen_floatdisf2,
    gen_fixuns_truncdfsi2,
    gen_fixuns_truncdfdi2,
    gen_fixuns_truncsfsi2,
    gen_fixuns_truncsfdi2,
    gen_extv,
    gen_extzv,
    gen_insv,
    gen_movsi_ulw,
    gen_movsi_usw,
    gen_high,
    gen_low,
    gen_movdi,
    gen_movdi_internal,
    0,
    gen_movdi_internal2,
    gen_reload_indi,
    gen_reload_outdi,
    0,
    gen_movsi,
    gen_movsi_internal1,
    gen_movsi_internal2,
    gen_reload_outsi,
    gen_movcc,
    gen_reload_incc,
    gen_reload_outcc,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_movhi,
    gen_movhi_internal1,
    gen_movhi_internal2,
    gen_movqi,
    gen_movqi_internal1,
    gen_movqi_internal2,
    gen_movsf,
    gen_movsf_internal1,
    gen_movsf_internal2,
    gen_movdf,
    gen_movdf_internal1,
    gen_movdf_internal1a,
    gen_movdf_internal2,
    0,
    gen_loadgp,
    gen_movstrsi,
    gen_movstrsi_internal,
    0,
    gen_movstrsi_internal2,
    gen_movstrsi_internal3,
    gen_ashlsi3,
    gen_ashldi3,
    gen_ashldi3_internal,
    gen_ashldi3_internal2,
    0,
    0,
    gen_ashldi3_internal3,
    0,
    0,
    gen_ashldi3_internal4,
    gen_ashrsi3,
    gen_ashrdi3,
    gen_ashrdi3_internal,
    gen_ashrdi3_internal2,
    0,
    0,
    gen_ashrdi3_internal3,
    0,
    0,
    gen_ashrdi3_internal4,
    gen_lshrsi3,
    gen_lshrdi3,
    gen_lshrdi3_internal,
    gen_lshrdi3_internal2,
    0,
    0,
    gen_lshrdi3_internal3,
    0,
    0,
    gen_lshrdi3_internal4,
    gen_cmpsi,
    gen_tstsi,
    gen_cmpdi,
    gen_tstdi,
    gen_cmpdf,
    gen_cmpsf,
    gen_branch_fp_ne,
    gen_branch_fp_eq,
    gen_branch_zero,
    gen_branch_zero_di,
    gen_branch_equality,
    gen_branch_equality_di,
    gen_beq,
    gen_bne,
    gen_bgt,
    gen_bge,
    gen_blt,
    gen_ble,
    gen_bgtu,
    gen_bgeu,
    gen_bltu,
    gen_bleu,
    gen_seq,
    gen_seq_si_zero,
    gen_seq_di_zero,
    gen_seq_si,
    0,
    gen_seq_di,
    0,
    gen_sne,
    gen_sne_si_zero,
    gen_sne_di_zero,
    gen_sne_si,
    0,
    gen_sne_di,
    0,
    gen_sgt,
    gen_sgt_si,
    gen_sgt_di,
    gen_sge,
    gen_sge_si,
    0,
    gen_sge_di,
    0,
    gen_slt,
    gen_slt_si,
    gen_slt_di,
    gen_sle,
    gen_sle_si_const,
    gen_sle_di_const,
    gen_sle_si_reg,
    0,
    gen_sle_di_reg,
    0,
    gen_sgtu,
    gen_sgtu_si,
    gen_sgtu_di,
    gen_sgeu,
    gen_sgeu_si,
    0,
    gen_sgeu_di,
    0,
    gen_sltu,
    gen_sltu_si,
    gen_sltu_di,
    gen_sleu,
    gen_sleu_si_const,
    gen_sleu_di_const,
    gen_sleu_si_reg,
    0,
    gen_sleu_di_reg,
    0,
    gen_seq_df,
    gen_slt_df,
    gen_sle_df,
    gen_sgt_df,
    gen_sge_df,
    gen_seq_sf,
    gen_slt_sf,
    gen_sle_sf,
    gen_sgt_sf,
    gen_sge_sf,
    gen_jump,
    gen_indirect_jump,
    gen_indirect_jump_internal1,
    gen_indirect_jump_internal2,
    gen_tablejump,
    gen_tablejump_internal1,
    gen_tablejump_internal2,
    gen_tablejump_internal3,
    0,
    gen_tablejump_internal4,
    0,
    gen_casesi,
    gen_casesi_internal,
    gen_nonlocal_goto_receiver,
    gen_builtin_setjmp_receiver,
    gen_prologue,
    gen_blockage,
    gen_epilogue,
    gen_return,
    gen_return_internal,
    gen_get_fnaddr,
    gen_call,
    gen_call_internal0,
    gen_call_internal1,
    gen_call_internal2,
    gen_call_internal3a,
    gen_call_internal3b,
    gen_call_internal4a,
    gen_call_internal4b,
    gen_call_value,
    gen_call_value_internal0,
    gen_call_value_internal1,
    gen_call_value_internal2,
    gen_call_value_internal3a,
    gen_call_value_internal3b,
    gen_call_value_internal4a,
    gen_call_value_internal4b,
    gen_call_value_multiple_internal0,
    gen_call_value_multiple_internal2,
    gen_untyped_call,
    gen_nop,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_movsicc,
    gen_movdicc,
    gen_movsfcc,
    gen_movdfcc,
  };

char *insn_name[] =
  {
    "adddf3",
    "addsf3",
    "addsi3",
    "addsi3_internal",
    "adddi3",
    "adddi3_internal_1",
    "adddi3_internal_1+1",
    "adddi3_internal_2-1",
    "adddi3_internal_2",
    "adddi3_internal_2+1",
    "adddi3_internal_3-1",
    "adddi3_internal_3",
    "addsi3_internal_2",
    "subdf3",
    "subsf3",
    "subsi3",
    "subsi3_internal",
    "subdi3",
    "subdi3_internal",
    "subdi3_internal+1",
    "subdi3_internal_2-1",
    "subdi3_internal_2",
    "subdi3_internal_2+1",
    "subdi3_internal_3-1",
    "subdi3_internal_3",
    "subsi3_internal_2",
    "muldf3",
    "muldf3_internal",
    "muldf3_r4300",
    "mulsf3",
    "mulsf3_internal",
    "mulsf3_r4300",
    "mulsi3",
    "mulsi3_mult3",
    "mulsi3_internal",
    "mulsi3_r4000",
    "mulsi3_r4650",
    "muldi3",
    "muldi3_internal",
    "muldi3_r4000",
    "mulsidi3",
    "mulsidi3_internal",
    "mulsidi3_64bit",
    "smulsi3_highpart",
    "umulsidi3",
    "umulsidi3_internal",
    "umulsidi3_64bit",
    "umulsi3_highpart",
    "smuldi3_highpart",
    "umuldi3_highpart",
    "madsi",
    "maddi",
    "maddi_64bit",
    "umaddi",
    "umaddi_64bit",
    "madd3",
    "madd3+1",
    "madd3+2",
    "madd3+3",
    "madd3+4",
    "divdf3-4",
    "divdf3-3",
    "divdf3-2",
    "divdf3-1",
    "divdf3",
    "divsf3",
    "divsf3+1",
    "divmodsi4-1",
    "divmodsi4",
    "divmoddi4",
    "udivmodsi4",
    "udivmoddi4",
    "divsi3",
    "divdi3",
    "modsi3",
    "moddi3",
    "udivsi3",
    "udivdi3",
    "umodsi3",
    "umoddi3",
    "sqrtdf2",
    "sqrtsf2",
    "sqrtsf2+1",
    "abssi2-1",
    "abssi2",
    "absdi2",
    "absdf2",
    "abssf2",
    "ffssi2",
    "ffsdi2",
    "negsi2",
    "negdi2",
    "negdi2_internal",
    "negdi2_internal_2",
    "negdf2",
    "negsf2",
    "one_cmplsi2",
    "one_cmpldi2",
    "one_cmpldi2+1",
    "andsi3",
    "anddi3",
    "anddi3+1",
    "anddi3_internal1",
    "iorsi3",
    "iordi3",
    "iordi3+1",
    "xorsi3",
    "xordi3",
    "xordi3+1",
    "xordi3_immed",
    "*norsi3",
    "*nordi3",
    "*nordi3+1",
    "truncdfsf2",
    "truncdisi2",
    "truncdihi2",
    "truncdiqi2",
    "truncdiqi2+1",
    "truncdiqi2+2",
    "truncdiqi2+3",
    "zero_extendsidi2-3",
    "zero_extendsidi2-2",
    "zero_extendsidi2-1",
    "zero_extendsidi2",
    "zero_extendsidi2_internal",
    "zero_extendhisi2",
    "zero_extendhidi2",
    "zero_extendqihi2",
    "zero_extendqisi2",
    "zero_extendqidi2",
    "*paradoxical_extendhidi2",
    "*paradoxical_extendqidi2",
    "extendsidi2",
    "extendhidi2",
    "extendhidi2_internal",
    "extendhisi2",
    "extendhisi2_internal",
    "extendqihi2",
    "extendqihi2_internal",
    "extendqisi2",
    "extendqisi2_insn",
    "extendqidi2",
    "extendqidi2_insn",
    "extendsfdf2",
    "fix_truncdfsi2",
    "fix_truncsfsi2",
    "fix_truncdfdi2",
    "fix_truncsfdi2",
    "floatsidf2",
    "floatdidf2",
    "floatsisf2",
    "floatdisf2",
    "fixuns_truncdfsi2",
    "fixuns_truncdfdi2",
    "fixuns_truncsfsi2",
    "fixuns_truncsfdi2",
    "extv",
    "extzv",
    "insv",
    "movsi_ulw",
    "movsi_usw",
    "high",
    "low",
    "movdi",
    "movdi_internal",
    "movdi_internal+1",
    "movdi_internal2",
    "reload_indi",
    "reload_outdi",
    "reload_outdi+1",
    "movsi",
    "movsi_internal1",
    "movsi_internal2",
    "reload_outsi",
    "movcc",
    "reload_incc",
    "reload_outcc",
    "reload_outcc+1",
    "reload_outcc+2",
    "reload_outcc+3",
    "reload_outcc+4",
    "movhi-4",
    "movhi-3",
    "movhi-2",
    "movhi-1",
    "movhi",
    "movhi_internal1",
    "movhi_internal2",
    "movqi",
    "movqi_internal1",
    "movqi_internal2",
    "movsf",
    "movsf_internal1",
    "movsf_internal2",
    "movdf",
    "movdf_internal1",
    "movdf_internal1a",
    "movdf_internal2",
    "movdf_internal2+1",
    "loadgp",
    "movstrsi",
    "movstrsi_internal",
    "movstrsi_internal+1",
    "movstrsi_internal2",
    "movstrsi_internal3",
    "ashlsi3",
    "ashldi3",
    "ashldi3_internal",
    "ashldi3_internal2",
    "ashldi3_internal2+1",
    "ashldi3_internal3-1",
    "ashldi3_internal3",
    "ashldi3_internal3+1",
    "ashldi3_internal4-1",
    "ashldi3_internal4",
    "ashrsi3",
    "ashrdi3",
    "ashrdi3_internal",
    "ashrdi3_internal2",
    "ashrdi3_internal2+1",
    "ashrdi3_internal3-1",
    "ashrdi3_internal3",
    "ashrdi3_internal3+1",
    "ashrdi3_internal4-1",
    "ashrdi3_internal4",
    "lshrsi3",
    "lshrdi3",
    "lshrdi3_internal",
    "lshrdi3_internal2",
    "lshrdi3_internal2+1",
    "lshrdi3_internal3-1",
    "lshrdi3_internal3",
    "lshrdi3_internal3+1",
    "lshrdi3_internal4-1",
    "lshrdi3_internal4",
    "cmpsi",
    "tstsi",
    "cmpdi",
    "tstdi",
    "cmpdf",
    "cmpsf",
    "branch_fp_ne",
    "branch_fp_eq",
    "branch_zero",
    "branch_zero_di",
    "branch_equality",
    "branch_equality_di",
    "beq",
    "bne",
    "bgt",
    "bge",
    "blt",
    "ble",
    "bgtu",
    "bgeu",
    "bltu",
    "bleu",
    "seq",
    "seq_si_zero",
    "seq_di_zero",
    "seq_si",
    "seq_si+1",
    "seq_di",
    "seq_di+1",
    "sne",
    "sne_si_zero",
    "sne_di_zero",
    "sne_si",
    "sne_si+1",
    "sne_di",
    "sne_di+1",
    "sgt",
    "sgt_si",
    "sgt_di",
    "sge",
    "sge_si",
    "sge_si+1",
    "sge_di",
    "sge_di+1",
    "slt",
    "slt_si",
    "slt_di",
    "sle",
    "sle_si_const",
    "sle_di_const",
    "sle_si_reg",
    "sle_si_reg+1",
    "sle_di_reg",
    "sle_di_reg+1",
    "sgtu",
    "sgtu_si",
    "sgtu_di",
    "sgeu",
    "sgeu_si",
    "sgeu_si+1",
    "sgeu_di",
    "sgeu_di+1",
    "sltu",
    "sltu_si",
    "sltu_di",
    "sleu",
    "sleu_si_const",
    "sleu_di_const",
    "sleu_si_reg",
    "sleu_si_reg+1",
    "sleu_di_reg",
    "sleu_di_reg+1",
    "seq_df",
    "slt_df",
    "sle_df",
    "sgt_df",
    "sge_df",
    "seq_sf",
    "slt_sf",
    "sle_sf",
    "sgt_sf",
    "sge_sf",
    "jump",
    "indirect_jump",
    "indirect_jump_internal1",
    "indirect_jump_internal2",
    "tablejump",
    "tablejump_internal1",
    "tablejump_internal2",
    "tablejump_internal3",
    "tablejump_internal3+1",
    "tablejump_internal4",
    "tablejump_internal4+1",
    "casesi",
    "casesi_internal",
    "nonlocal_goto_receiver",
    "builtin_setjmp_receiver",
    "prologue",
    "blockage",
    "epilogue",
    "return",
    "return_internal",
    "get_fnaddr",
    "call",
    "call_internal0",
    "call_internal1",
    "call_internal2",
    "call_internal3a",
    "call_internal3b",
    "call_internal4a",
    "call_internal4b",
    "call_value",
    "call_value_internal0",
    "call_value_internal1",
    "call_value_internal2",
    "call_value_internal3a",
    "call_value_internal3b",
    "call_value_internal4a",
    "call_value_internal4b",
    "call_value_multiple_internal0",
    "call_value_multiple_internal2",
    "untyped_call",
    "nop",
    "nop+1",
    "nop+2",
    "nop+3",
    "nop+4",
    "nop+5",
    "movsicc-5",
    "movsicc-4",
    "movsicc-3",
    "movsicc-2",
    "movsicc-1",
    "movsicc",
    "movdicc",
    "movsfcc",
    "movdfcc",
  };
char **insn_name_ptr = insn_name;

const int insn_n_operands[] =
  {
    3,
    3,
    3,
    3,
    3,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    5,
    6,
    5,
    6,
    6,
    5,
    5,
    6,
    3,
    4,
    5,
    5,
    3,
    4,
    5,
    5,
    5,
    5,
    5,
    4,
    5,
    4,
    5,
    7,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    3,
    3,
    3,
    7,
    7,
    7,
    7,
    7,
    7,
    7,
    7,
    7,
    7,
    7,
    7,
    2,
    2,
    3,
    3,
    2,
    2,
    2,
    2,
    4,
    4,
    2,
    2,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    2,
    2,
    2,
    3,
    3,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    4,
    4,
    3,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    4,
    4,
    4,
    2,
    2,
    2,
    3,
    2,
    2,
    2,
    2,
    3,
    3,
    2,
    2,
    2,
    2,
    3,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    1,
    4,
    8,
    8,
    8,
    8,
    3,
    3,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    3,
    3,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    3,
    3,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    2,
    1,
    2,
    1,
    2,
    2,
    3,
    3,
    4,
    4,
    5,
    5,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    2,
    3,
    3,
    3,
    3,
    1,
    2,
    2,
    3,
    3,
    3,
    3,
    1,
    3,
    3,
    1,
    3,
    3,
    3,
    3,
    1,
    3,
    3,
    1,
    3,
    3,
    3,
    3,
    3,
    3,
    1,
    3,
    3,
    1,
    3,
    3,
    3,
    3,
    1,
    3,
    3,
    1,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    1,
    1,
    1,
    1,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    7,
    3,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    4,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    5,
    5,
    3,
    0,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    4,
    4,
    4,
    4,
  };

const int insn_n_dups[] =
  {
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    2,
    2,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    3,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    2,
    2,
    2,
  };

char *const insn_operand_constraint[][MAX_RECOG_OPERANDS] =
  {
    { "=f", "f", "f", },
    { "=f", "f", "f", },
    { "=d", "dJ", "dI", },
    { "=d", "dJ", "dI", },
    { "", "", "", },
    { "=d,&d", "0,d", "d,d", "=d,d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d,d,d", "%d,%d,%d", "P,J,N", "=d,d,d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d", "dJ", "dI", },
    { "=d", "dJ", "dI", },
    { "=f", "f", "f", },
    { "=f", "f", "f", },
    { "=d", "dJ", "dI", },
    { "=d", "dJ", "dI", },
    { "=d", "d", "d", },
    { "=d", "d", "d", "=d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d,d,d", "d,d,d", "P,J,N", "=d,d,d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d", "dJ", "dI", },
    { "=d", "dJ", "dI", },
    { "=f", "f", "f", },
    { "=f", "f", "f", },
    { "=f", "f", "f", },
    { "=f", "f", "f", },
    { "=f", "f", "f", },
    { "=f", "f", "f", },
    { "=l", "d", "d", "=h", "=a", },
    { "=d", "d", "d", "=h", "=l", "=a", },
    { "=l", "d", "d", "=h", "=a", },
    { "=d", "d", "d", "=h", "=l", "=a", },
    { "=d", "d", "d", "=h", "=l", "=a", },
    { "=l", "d", "d", "=h", "=a", },
    { "=l", "d", "d", "=h", "=a", },
    { "=d", "d", "d", "=h", "=l", "=a", },
    { "=x", "d", "d", },
    { "=x", "d", "d", "=a", },
    { "=a", "d", "d", "=l", "=h", },
    { "=h", "d", "d", "=l", "=a", },
    { "=x", "d", "d", },
    { "=x", "d", "d", "=a", },
    { "=a", "d", "d", "=l", "=h", },
    { "=h", "d", "d", "=l", "=a", },
    { "=h", "d", "d", "=l", "=a", },
    { "=h", "d", "d", "=l", "=a", },
    { "+l", "d", "d", "=h", "=a", },
    { "+x", "d", "d", "=a", },
    { "+a", "d", "d", "=l", "=h", },
    { "+x", "d", "d", "=a", },
    { "+a", "d", "d", "=l", "=h", },
    { "=d", "d", "d", "l", "=l", "=h", "=a", },
    { "=f", "f", "f", "f", },
    { "=f", "f", "f", "f", },
    { "=f", "f", "f", "f", },
    { "=f", "f", "f", "f", },
    { "=f", "f", "f", "f", },
    { "=f", "f", "f", "f", },
    { "=f", "f", "f", "f", },
    { "=f", "f", "f", "f", },
    { "=f", "f", "f", },
    { "=f", "f", "f", },
    { "=f", "", "f", },
    { "=f", "", "f", },
    { "=d", "d", "d", "=d", "=l", "=h", "=a", },
    { "=d", "d", "d", "=d", "=l", "=h", "=a", },
    { "=d", "d", "d", "=d", "=l", "=h", "=a", },
    { "=d", "d", "d", "=d", "=l", "=h", "=a", },
    { "=d", "d", "di", "=l", "=h", "", "=a", },
    { "=d", "d", "di", "=l", "=h", "", "=a", },
    { "=d", "d", "di", "=l", "=h", "", "=a", },
    { "=d", "d", "di", "=l", "=h", "", "=a", },
    { "=d", "d", "di", "=l", "=h", "", "=a", },
    { "=d", "d", "di", "=l", "=h", "", "=a", },
    { "=d", "d", "di", "=l", "=h", "", "=a", },
    { "=d", "d", "di", "=l", "=h", "", "=a", },
    { "=f", "f", },
    { "=f", "f", },
    { "=f", "", "f", },
    { "=f", "", "f", },
    { "=d", "d", },
    { "=d", "d", },
    { "=f", "f", },
    { "=f", "f", },
    { "=&d", "d", "=&d", "=&d", },
    { "=&d", "d", "=&d", "=&d", },
    { "=d", "d", },
    { "=d", "d", },
    { "=d", "d", "=d", },
    { "=d", "d", },
    { "=f", "f", },
    { "=f", "f", },
    { "=d", "d", },
    { "=d", "d", },
    { "", "", },
    { "=d,d", "%d,d", "d,K", },
    { "=d", "d", "d", },
    { "", "", "", },
    { "=d,d", "%d,d", "d,K", },
    { "=d,d", "%d,d", "d,K", },
    { "=d", "d", "d", },
    { "", "", "", },
    { "=d,d", "%d,d", "d,K", },
    { "=d", "d", "d", },
    { "", "", "", },
    { "d", "d", "K", },
    { "=d", "d", "d", },
    { "=d", "d", "d", },
    { "", "", "", },
    { "=f", "f", },
    { "=d", "d", },
    { "=d", "d", },
    { "=d", "d", },
    { "=d", "d", "I", },
    { "=d", "d", "I", },
    { "=d", "d", "I", },
    { "=d", "d", },
    { "=d", "d", },
    { "=d", "d", },
    { "", "", },
    { "=d,d", "R,m", },
    { "=d,d,d", "d,R,m", },
    { "=d,d,d", "d,R,m", },
    { "=d,d,d", "d,R,m", },
    { "=d,d,d", "d,R,m", },
    { "=d,d,d", "d,R,m", },
    { "=d,d", "R,m", },
    { "=d,d", "R,m", },
    { "=d,*d,d,d", "d,*x,R,m", },
    { "", "", },
    { "=d,d", "R,m", },
    { "", "", },
    { "=d,d", "R,m", },
    { "", "", },
    { "=d,d", "R,m", },
    { "", "", },
    { "=d,d", "R,m", },
    { "", "", },
    { "=d,d", "R,m", },
    { "=f", "f", },
    { "=d,*f,R,o", "f,*f,f,f", "=d,*d,&d,&d", "=f,?*X,f,f", },
    { "=d,*f,R,o", "f,*f,f,f", "=d,*d,&d,&d", "=f,?*X,f,f", },
    { "=d,*f,R,o", "f,*f,f,f", "=f,?*X,f,f", },
    { "=d,*f,R,o", "f,*f,f,f", "=f,?*X,f,f", },
    { "=f,f,f", "d,R,m", },
    { "=f,f,f", "d,R,m", },
    { "=f,f,f", "d,R,m", },
    { "=f,f,f", "d,R,m", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=&d,&d", "R,o", },
    { "=R,o", "dJ,dJ", },
    { "=r", "", },
    { "=r", "r", "", },
    { "", "", },
    { "=d,d,d,d,R,o,*x,*d,*x", "d,iF,R,o,d,d,J,*x,*d", },
    { "", "", },
    { "=d,d,d,d,d,d,R,m,*x,*d,*x,*a", "d,S,IKL,Mnis,R,m,dJ,dJ,J,*x,*d,*J", },
    { "=b", "b", "=&d", },
    { "=b", "b", "=&d", },
    { "", "", },
    { "", "", },
    { "=d,d,d,d,d,d,R,m,*d,*f*z,*f,*f,*f,*R,*m,*x,*x,*d,*d", "d,S,IKL,Mnis,R,m,dJ,dJ,*f*z,*d,*f,*R,*m,*f,*f,J,*d,*x,*a", },
    { "=d,d,d,d,d,d,R,m,*d,*z,*x,*d,*x,*d", "d,S,IKL,Mnis,R,m,dJ,dJ,*z,*d,J,*x,*d,*a", },
    { "=b", "d", "=&d", },
    { "=d,*d,*d,*d,*R,*m,*d,*f,*f,*f,*f,*R,*m", "z,*d,*R,*m,*d,*d,*f,*d,*f,*R,*m,*f,*f", },
    { "=z", "z", "=&f", },
    { "=z", "z", "=&d", },
    { "=f", "d", "d", },
    { "=f", "d", "d", },
    { "=f", "d", "d", },
    { "=f", "d", "d", },
    { "=f", "d", "d", },
    { "=f", "d", "d", },
    { "=f", "d", "d", },
    { "=f", "d", "d", },
    { "", "", },
    { "=d,d,d,d,R,m,*d,*f,*f*z,*x,*d", "d,IK,R,m,dJ,dJ,*f*z,*d,*f,*d,*x", },
    { "=d,d,d,d,R,m,*d,*z,*x,*d", "d,IK,R,m,dJ,dJ,*z,*d,*d,*x", },
    { "", "", },
    { "=d,d,d,d,R,m,*d,*f*z,*f,*x,*d", "d,IK,R,m,dJ,dJ,*f*z,*d,*f,*d,*x", },
    { "=d,d,d,d,R,m,*d,*z,*x,*d", "d,IK,R,m,dJ,dJ,*z,*d,*d,*x", },
    { "", "", },
    { "=f,f,f,f,R,m,*f,*d,*d,*d,*d,*R,*m", "f,G,R,Fm,fG,fG,*d,*f,*G*d,*R,*F*m,*d,*d", },
    { "=d,d,d,R,m", "      Gd,R,Fm,d,d", },
    { "", "", },
    { "=f,f,f,R,o,f,*f,*d,*d,*d,*d,*R,*o", "f,R,o,fG,fG,F,*d,*f,*d*G,*R,*o*F,*d,*d", },
    { "=f,f,R,R,o,o,f,*d,*d,*d,*o,*R", " f,o,f,G,f,G,F,*F,*o,*R,*d,*d", },
    { "=d,d,d,R,o", "dG,R,oF,d,d", },
    { "", "", },
    { "", },
    { "", "", "", "", },
    { "=o", "o", "I", "I", "=&d", "=&d", "=&d", "=&d", },
    { "", "", "", "", "", "", "", "", },
    { "=o", "o", "I", "I", "=&d", "=&d", "=&d", "=&d", },
    { "=Ro", "Ro", "I", "I", "=&d", "=&d", "=&d", "=&d", },
    { "=d", "d", "dI", },
    { "", "", "", },
    { "=&d", "d", "d", "=d", },
    { "=d", "d", "IJK", "=d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d", "d", "IJK", "=d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d", "d", "dI", },
    { "=d", "d", "dI", },
    { "", "", "", },
    { "=&d", "d", "d", "=d", },
    { "=d", "d", "IJK", "=d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d", "d", "IJK", "=d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d", "d", "dI", },
    { "=d", "d", "dI", },
    { "", "", "", },
    { "=&d", "d", "d", "=d", },
    { "=d", "d", "IJK", "=d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d", "d", "IJK", "=d", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=d", "d", "dI", },
    { "", "", },
    { "", },
    { "", "", },
    { "", },
    { "", "", },
    { "", "", },
    { "z", "", "", },
    { "z", "", "", },
    { "", "d", "", "", },
    { "", "d", "", "", },
    { "", "d", "d", "", "", },
    { "", "d", "d", "", "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "=d", },
    { "=d", "d", },
    { "=d", "d", },
    { "=d,d", "%d,d", "d,K", },
    { "", "", "", },
    { "=d,d", "%d,d", "d,K", },
    { "", "", "", },
    { "=d", },
    { "=d", "d", },
    { "=d", "d", },
    { "=d,d", "%d,d", "d,K", },
    { "", "", "", },
    { "=d,d", "%d,d", "d,K", },
    { "", "", "", },
    { "=d", },
    { "=d", "d", "dJ", },
    { "=d", "d", "dJ", },
    { "=d", },
    { "=d", "d", "dI", },
    { "", "", "", },
    { "=d", "d", "dI", },
    { "", "", "", },
    { "=d", },
    { "=d", "d", "dI", },
    { "=d", "d", "dI", },
    { "=d", },
    { "=d", "d", "I", },
    { "=d", "d", "I", },
    { "=d", "d", "d", },
    { "", "", "", },
    { "=d", "d", "d", },
    { "", "", "", },
    { "=d", },
    { "=d", "d", "dJ", },
    { "=d", "d", "dJ", },
    { "=d", },
    { "=d", "d", "dI", },
    { "", "", "", },
    { "=d", "d", "dI", },
    { "", "", "", },
    { "=d", },
    { "=d", "d", "dI", },
    { "=d", "d", "dI", },
    { "=d", },
    { "=d", "d", "I", },
    { "=d", "d", "I", },
    { "=d", "d", "d", },
    { "", "", "", },
    { "=d", "d", "d", },
    { "", "", "", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "=z", "f", "f", },
    { "", },
    { "d", },
    { "d", },
    { "d", },
    { "d", "", },
    { "d", "", },
    { "d", "", },
    { "d", "", },
    { "d", "", },
    { "d", "", },
    { "d", "", },
    { "d", "dI", "", "", "", "", "", },
    { "d", "", "d", },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { "=d", "", },
    { "m", "i", "", "", },
    { "", "", "", },
    { "ri", "i", "=d", },
    { "ri", "i", "=d", },
    { "r", "i", "=d", },
    { "r", "i", "=d", },
    { "r", "i", "=d", },
    { "r", "i", "=d", },
    { "=df", "m", "i", "", },
    { "", "", "", "", },
    { "=df", "ri", "i", "=d", },
    { "=df", "ri", "i", "=d", },
    { "=df", "r", "i", "=d", },
    { "=df", "r", "i", "=d", },
    { "=df", "r", "i", "=d", },
    { "=df", "r", "i", "=d", },
    { "", "", "", "", "", },
    { "=df", "ri", "i", "=df", "=d", },
    { "", "", "", },
    { 0 },
    { "=d,d", "d,d", "dJ,0", "0,dJ", "", },
    { "=d,d", "d,d", "dJ,0", "0,dJ", "", },
    { "=d,d", "dJ,0", "0,dJ", "", "z,z", },
    { "=d,d", "d,d", "dJ,0", "0,dJ", "", },
    { "=d,d", "d,d", "dJ,0", "0,dJ", "", },
    { "=d,d", "dJ,0", "0,dJ", "", "z,z", },
    { "=f,f", "d,d", "f,0", "0,f", "", },
    { "=f,f", "f,0", "0,f", "", "z,z", },
    { "=f,f", "d,d", "f,0", "0,f", "", },
    { "=f,f", "f,0", "0,f", "", "z,z", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "", "", "", "", },
  };

const enum machine_mode insn_operand_mode[][MAX_RECOG_OPERANDS] =
  {
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { DImode, DImode, DImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { DImode, SImode, SImode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { DImode, DImode, DImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { DImode, SImode, SImode, },
    { DFmode, DFmode, DFmode, },
    { DFmode, DFmode, DFmode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { SFmode, SFmode, SFmode, },
    { SFmode, SFmode, SFmode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, SImode, SImode, },
    { DImode, DImode, DImode, DImode, DImode, },
    { DImode, DImode, DImode, DImode, DImode, },
    { DImode, DImode, DImode, DImode, DImode, DImode, },
    { DImode, SImode, SImode, },
    { DImode, SImode, SImode, SImode, },
    { DImode, SImode, SImode, DImode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { DImode, SImode, SImode, },
    { DImode, SImode, SImode, SImode, },
    { DImode, SImode, SImode, DImode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { DImode, DImode, DImode, DImode, DImode, },
    { DImode, DImode, DImode, DImode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { DImode, SImode, SImode, SImode, },
    { DImode, SImode, SImode, DImode, DImode, },
    { DImode, SImode, SImode, SImode, },
    { DImode, SImode, SImode, DImode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, SImode, SImode, },
    { DFmode, DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, SFmode, },
    { DFmode, DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, SFmode, },
    { DFmode, DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, SFmode, },
    { DFmode, DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, SFmode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { SImode, SImode, SImode, SImode, SImode, SImode, SImode, },
    { DImode, DImode, DImode, DImode, DImode, DImode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, SImode, SImode, },
    { DImode, DImode, DImode, DImode, DImode, DImode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, VOIDmode, SImode, },
    { DImode, DImode, DImode, DImode, DImode, VOIDmode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, VOIDmode, SImode, },
    { DImode, DImode, DImode, DImode, DImode, VOIDmode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, VOIDmode, SImode, },
    { DImode, DImode, DImode, DImode, DImode, VOIDmode, DImode, },
    { SImode, SImode, SImode, SImode, SImode, VOIDmode, SImode, },
    { DImode, DImode, DImode, DImode, DImode, VOIDmode, DImode, },
    { DFmode, DFmode, },
    { SFmode, SFmode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { SImode, SImode, },
    { DImode, DImode, },
    { DFmode, DFmode, },
    { SFmode, SFmode, },
    { SImode, SImode, SImode, SImode, },
    { DImode, DImode, DImode, DImode, },
    { SImode, SImode, },
    { DImode, DImode, },
    { DImode, DImode, SImode, },
    { DImode, DImode, },
    { DFmode, DFmode, },
    { SFmode, SFmode, },
    { SImode, SImode, },
    { DImode, DImode, },
    { VOIDmode, VOIDmode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { SFmode, DFmode, },
    { SImode, DImode, },
    { HImode, DImode, },
    { QImode, DImode, },
    { SImode, DImode, DImode, },
    { SImode, DImode, DImode, },
    { SImode, DImode, DImode, },
    { SImode, DImode, },
    { SImode, DImode, },
    { HImode, DImode, },
    { DImode, SImode, },
    { DImode, SImode, },
    { SImode, HImode, },
    { DImode, HImode, },
    { HImode, QImode, },
    { SImode, QImode, },
    { DImode, QImode, },
    { DImode, HImode, },
    { DImode, QImode, },
    { DImode, SImode, },
    { DImode, HImode, },
    { DImode, HImode, },
    { SImode, HImode, },
    { SImode, HImode, },
    { HImode, QImode, },
    { HImode, QImode, },
    { SImode, QImode, },
    { SImode, QImode, },
    { DImode, QImode, },
    { DImode, QImode, },
    { DFmode, SFmode, },
    { SImode, DFmode, SImode, DFmode, },
    { SImode, SFmode, SImode, SFmode, },
    { DImode, DFmode, DFmode, },
    { DImode, SFmode, DFmode, },
    { DFmode, SImode, },
    { DFmode, DImode, },
    { SFmode, SImode, },
    { SFmode, DImode, },
    { SImode, DFmode, },
    { DImode, DFmode, },
    { SImode, SFmode, },
    { DImode, SFmode, },
    { SImode, QImode, SImode, SImode, },
    { SImode, QImode, SImode, SImode, },
    { QImode, SImode, SImode, SImode, },
    { SImode, BLKmode, },
    { BLKmode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, },
    { DImode, DImode, },
    { VOIDmode, VOIDmode, },
    { DImode, DImode, },
    { DImode, DImode, TImode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, SImode, },
    { CCmode, CCmode, },
    { CCmode, CCmode, TFmode, },
    { CCmode, CCmode, CCmode, },
    { SFmode, SImode, SImode, },
    { SFmode, DImode, DImode, },
    { DFmode, SImode, SImode, },
    { DFmode, DImode, DImode, },
    { SFmode, SImode, SImode, },
    { SFmode, DImode, DImode, },
    { DFmode, SImode, SImode, },
    { DFmode, DImode, DImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { SFmode, SFmode, },
    { SFmode, SFmode, },
    { SFmode, SFmode, },
    { DFmode, DFmode, },
    { DFmode, DFmode, },
    { DFmode, DFmode, },
    { DFmode, DFmode, },
    { VOIDmode, VOIDmode, },
    { DImode, },
    { BLKmode, BLKmode, SImode, SImode, },
    { BLKmode, BLKmode, SImode, SImode, SImode, SImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { BLKmode, BLKmode, SImode, SImode, SImode, SImode, SImode, SImode, },
    { BLKmode, BLKmode, SImode, SImode, SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, SImode, },
    { SImode, SImode, },
    { SImode, },
    { DImode, DImode, },
    { DImode, },
    { DFmode, DFmode, },
    { SFmode, SFmode, },
    { CCmode, VOIDmode, VOIDmode, },
    { CCmode, VOIDmode, VOIDmode, },
    { SImode, SImode, VOIDmode, VOIDmode, },
    { DImode, DImode, VOIDmode, VOIDmode, },
    { SImode, SImode, SImode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, VOIDmode, VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { SImode, },
    { SImode, SImode, },
    { DImode, DImode, },
    { SImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { SImode, },
    { SImode, SImode, },
    { DImode, DImode, },
    { SImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { SImode, },
    { SImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { SImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { SImode, },
    { SImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { SImode, },
    { SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { SImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { CCmode, DFmode, DFmode, },
    { CCmode, DFmode, DFmode, },
    { CCmode, DFmode, DFmode, },
    { CCmode, DFmode, DFmode, },
    { CCmode, DFmode, DFmode, },
    { CCmode, SFmode, SFmode, },
    { CCmode, SFmode, SFmode, },
    { CCmode, SFmode, SFmode, },
    { CCmode, SFmode, SFmode, },
    { CCmode, SFmode, SFmode, },
    { VOIDmode, },
    { VOIDmode, },
    { SImode, },
    { DImode, },
    { VOIDmode, VOIDmode, },
    { SImode, VOIDmode, },
    { DImode, VOIDmode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { DImode, SImode, },
    { DImode, SImode, },
    { SImode, SImode, SImode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { SImode, VOIDmode, SImode, },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, SImode, },
    { VOIDmode, VOIDmode, SImode, },
    { VOIDmode, VOIDmode, SImode, },
    { SImode, VOIDmode, SImode, },
    { DImode, VOIDmode, SImode, },
    { SImode, VOIDmode, SImode, },
    { DImode, VOIDmode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, SImode, },
    { VOIDmode, SImode, VOIDmode, SImode, },
    { VOIDmode, DImode, VOIDmode, SImode, },
    { VOIDmode, SImode, VOIDmode, SImode, },
    { VOIDmode, DImode, VOIDmode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode },
    { SImode, SImode, SImode, SImode, VOIDmode, },
    { SImode, DImode, SImode, SImode, VOIDmode, },
    { SImode, SImode, SImode, VOIDmode, CCmode, },
    { DImode, SImode, DImode, DImode, VOIDmode, },
    { DImode, DImode, DImode, DImode, VOIDmode, },
    { DImode, DImode, DImode, VOIDmode, CCmode, },
    { SFmode, SImode, SFmode, SFmode, VOIDmode, },
    { SFmode, SFmode, SFmode, VOIDmode, CCmode, },
    { DFmode, SImode, DFmode, DFmode, VOIDmode, },
    { DFmode, DFmode, DFmode, VOIDmode, CCmode, },
    { SImode, VOIDmode, SImode, SImode, },
    { DImode, VOIDmode, DImode, DImode, },
    { SFmode, VOIDmode, SFmode, SFmode, },
    { DFmode, VOIDmode, DFmode, DFmode, },
  };

const char insn_operand_strict_low[][MAX_RECOG_OPERANDS] =
  {
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, },
    { 0, 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0 },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
  };

extern int register_operand ();
extern int reg_or_0_operand ();
extern int arith_operand ();
extern int se_register_operand ();
extern int se_arith_operand ();
extern int small_int ();
extern int se_reg_or_0_operand ();
extern int scratch_operand ();
extern int const_float_1_operand ();
extern int nonmemory_operand ();
extern int se_nonmemory_operand ();
extern int uns_arith_operand ();
extern int se_uns_arith_operand ();
extern int nonimmediate_operand ();
extern int memory_operand ();
extern int general_operand ();
extern int se_nonimmediate_operand ();
extern int immediate_operand ();
extern int movdi_operand ();
extern int move_operand ();
extern int address_operand ();
extern int arith32_operand ();
extern int pc_or_label_operand ();
extern int cmp_op ();
extern int equality_op ();
extern int call_insn_operand ();
extern int comparison_operator ();

int (*const insn_operand_predicate[][MAX_RECOG_OPERANDS])() =
  {
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, reg_or_0_operand, arith_operand, },
    { register_operand, reg_or_0_operand, arith_operand, },
    { register_operand, se_register_operand, se_arith_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, register_operand, small_int, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, se_reg_or_0_operand, se_arith_operand, },
    { register_operand, reg_or_0_operand, arith_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, reg_or_0_operand, arith_operand, },
    { register_operand, reg_or_0_operand, arith_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, register_operand, small_int, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, se_reg_or_0_operand, se_arith_operand, },
    { register_operand, reg_or_0_operand, arith_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, se_register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, se_register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, se_register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, se_register_operand, se_register_operand, scratch_operand, scratch_operand, },
    { register_operand, se_register_operand, se_register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, const_float_1_operand, register_operand, },
    { register_operand, const_float_1_operand, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, se_register_operand, se_register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, se_register_operand, se_register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, nonmemory_operand, scratch_operand, scratch_operand, 0, scratch_operand, },
    { register_operand, se_register_operand, se_nonmemory_operand, scratch_operand, scratch_operand, 0, scratch_operand, },
    { register_operand, register_operand, nonmemory_operand, scratch_operand, scratch_operand, 0, scratch_operand, },
    { register_operand, se_register_operand, se_nonmemory_operand, scratch_operand, scratch_operand, 0, scratch_operand, },
    { register_operand, register_operand, nonmemory_operand, scratch_operand, scratch_operand, 0, scratch_operand, },
    { register_operand, se_register_operand, se_nonmemory_operand, scratch_operand, scratch_operand, 0, scratch_operand, },
    { register_operand, register_operand, nonmemory_operand, scratch_operand, scratch_operand, 0, scratch_operand, },
    { register_operand, se_register_operand, se_nonmemory_operand, scratch_operand, scratch_operand, 0, scratch_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, const_float_1_operand, register_operand, },
    { register_operand, const_float_1_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, scratch_operand, scratch_operand, },
    { register_operand, se_register_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, se_register_operand, },
    { 0, 0, },
    { register_operand, uns_arith_operand, uns_arith_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { 0, 0, 0, },
    { register_operand, se_register_operand, se_uns_arith_operand, },
    { register_operand, uns_arith_operand, uns_arith_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { 0, 0, 0, },
    { register_operand, uns_arith_operand, uns_arith_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { 0, 0, 0, },
    { register_operand, se_register_operand, se_uns_arith_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { 0, 0, 0, },
    { register_operand, register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, se_register_operand, small_int, },
    { register_operand, se_register_operand, small_int, },
    { register_operand, se_register_operand, small_int, },
    { register_operand, se_register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, memory_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, memory_operand, },
    { register_operand, memory_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, memory_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, memory_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, memory_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, memory_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, memory_operand, },
    { register_operand, register_operand, },
    { general_operand, register_operand, scratch_operand, scratch_operand, },
    { general_operand, register_operand, scratch_operand, scratch_operand, },
    { general_operand, register_operand, scratch_operand, },
    { general_operand, register_operand, scratch_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, se_nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, se_nonimmediate_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, memory_operand, immediate_operand, immediate_operand, },
    { register_operand, memory_operand, immediate_operand, immediate_operand, },
    { memory_operand, immediate_operand, immediate_operand, register_operand, },
    { register_operand, general_operand, },
    { memory_operand, reg_or_0_operand, },
    { register_operand, immediate_operand, },
    { register_operand, register_operand, immediate_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { 0, 0, },
    { nonimmediate_operand, movdi_operand, },
    { register_operand, movdi_operand, register_operand, },
    { general_operand, se_register_operand, register_operand, },
    { 0, 0, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, move_operand, },
    { nonimmediate_operand, move_operand, },
    { general_operand, register_operand, register_operand, },
    { nonimmediate_operand, general_operand, },
    { register_operand, general_operand, register_operand, },
    { general_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, se_register_operand, se_register_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { 0, 0, },
    { address_operand, },
    { general_operand, general_operand, arith32_operand, immediate_operand, },
    { memory_operand, memory_operand, small_int, small_int, scratch_operand, scratch_operand, scratch_operand, scratch_operand, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { memory_operand, memory_operand, small_int, small_int, scratch_operand, scratch_operand, scratch_operand, scratch_operand, },
    { memory_operand, memory_operand, small_int, small_int, scratch_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, arith_operand, },
    { register_operand, se_register_operand, arith_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, small_int, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, register_operand, small_int, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, se_register_operand, arith_operand, },
    { register_operand, register_operand, arith_operand, },
    { register_operand, se_register_operand, arith_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, small_int, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, register_operand, small_int, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, se_register_operand, arith_operand, },
    { register_operand, register_operand, arith_operand, },
    { register_operand, se_register_operand, arith_operand, },
    { register_operand, register_operand, register_operand, register_operand, },
    { register_operand, register_operand, small_int, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, register_operand, small_int, register_operand, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, se_register_operand, arith_operand, },
    { register_operand, arith_operand, },
    { register_operand, },
    { se_register_operand, se_arith_operand, },
    { se_register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, pc_or_label_operand, pc_or_label_operand, },
    { register_operand, pc_or_label_operand, pc_or_label_operand, },
    { cmp_op, register_operand, pc_or_label_operand, pc_or_label_operand, },
    { cmp_op, se_register_operand, pc_or_label_operand, pc_or_label_operand, },
    { equality_op, register_operand, register_operand, pc_or_label_operand, pc_or_label_operand, },
    { equality_op, se_register_operand, se_register_operand, pc_or_label_operand, pc_or_label_operand, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { register_operand, },
    { register_operand, register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, register_operand, uns_arith_operand, },
    { 0, 0, 0, },
    { register_operand, se_register_operand, se_uns_arith_operand, },
    { 0, 0, 0, },
    { register_operand, },
    { register_operand, register_operand, },
    { register_operand, se_register_operand, },
    { register_operand, register_operand, uns_arith_operand, },
    { 0, 0, 0, },
    { register_operand, se_register_operand, se_uns_arith_operand, },
    { 0, 0, 0, },
    { register_operand, },
    { register_operand, register_operand, reg_or_0_operand, },
    { register_operand, se_register_operand, se_reg_or_0_operand, },
    { register_operand, },
    { register_operand, register_operand, arith_operand, },
    { 0, 0, 0, },
    { register_operand, se_register_operand, se_arith_operand, },
    { 0, 0, 0, },
    { register_operand, },
    { register_operand, register_operand, arith_operand, },
    { register_operand, se_register_operand, se_arith_operand, },
    { register_operand, },
    { register_operand, register_operand, small_int, },
    { register_operand, se_register_operand, small_int, },
    { register_operand, register_operand, register_operand, },
    { 0, 0, 0, },
    { register_operand, se_register_operand, se_register_operand, },
    { 0, 0, 0, },
    { register_operand, },
    { register_operand, register_operand, reg_or_0_operand, },
    { register_operand, se_register_operand, se_reg_or_0_operand, },
    { register_operand, },
    { register_operand, register_operand, arith_operand, },
    { 0, 0, 0, },
    { register_operand, se_register_operand, se_arith_operand, },
    { 0, 0, 0, },
    { register_operand, },
    { register_operand, register_operand, arith_operand, },
    { register_operand, se_register_operand, se_arith_operand, },
    { register_operand, },
    { register_operand, register_operand, small_int, },
    { register_operand, se_register_operand, small_int, },
    { register_operand, register_operand, register_operand, },
    { 0, 0, 0, },
    { register_operand, se_register_operand, se_register_operand, },
    { 0, 0, 0, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { 0, },
    { register_operand, },
    { register_operand, },
    { se_register_operand, },
    { register_operand, 0, },
    { register_operand, 0, },
    { se_register_operand, 0, },
    { register_operand, 0, },
    { register_operand, 0, },
    { se_register_operand, 0, },
    { se_register_operand, 0, },
    { register_operand, arith_operand, arith_operand, 0, 0, 0, scratch_operand, },
    { register_operand, 0, register_operand, },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { register_operand, 0, },
    { memory_operand, 0, 0, 0, },
    { 0, 0, 0, },
    { call_insn_operand, 0, register_operand, },
    { call_insn_operand, 0, register_operand, },
    { register_operand, 0, register_operand, },
    { se_register_operand, 0, register_operand, },
    { register_operand, 0, register_operand, },
    { se_register_operand, 0, register_operand, },
    { register_operand, memory_operand, 0, 0, },
    { 0, 0, 0, 0, },
    { register_operand, call_insn_operand, 0, register_operand, },
    { register_operand, call_insn_operand, 0, register_operand, },
    { register_operand, register_operand, 0, register_operand, },
    { register_operand, se_register_operand, 0, register_operand, },
    { register_operand, register_operand, 0, register_operand, },
    { register_operand, se_register_operand, 0, register_operand, },
    { 0, 0, 0, 0, 0, },
    { register_operand, call_insn_operand, 0, register_operand, register_operand, },
    { 0, 0, 0, },
    { 0 },
    { register_operand, register_operand, reg_or_0_operand, reg_or_0_operand, equality_op, },
    { register_operand, se_register_operand, reg_or_0_operand, reg_or_0_operand, equality_op, },
    { register_operand, reg_or_0_operand, reg_or_0_operand, equality_op, register_operand, },
    { register_operand, register_operand, se_reg_or_0_operand, se_reg_or_0_operand, equality_op, },
    { register_operand, se_register_operand, se_reg_or_0_operand, se_reg_or_0_operand, equality_op, },
    { register_operand, se_reg_or_0_operand, se_reg_or_0_operand, equality_op, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, equality_op, },
    { register_operand, register_operand, register_operand, equality_op, register_operand, },
    { register_operand, register_operand, register_operand, register_operand, equality_op, },
    { register_operand, register_operand, register_operand, equality_op, register_operand, },
    { register_operand, comparison_operator, reg_or_0_operand, reg_or_0_operand, },
    { register_operand, comparison_operator, se_reg_or_0_operand, se_reg_or_0_operand, },
    { register_operand, comparison_operator, register_operand, register_operand, },
    { register_operand, comparison_operator, register_operand, register_operand, },
  };

const int insn_n_alternatives[] =
  {
    1,
    1,
    1,
    1,
    0,
    2,
    0,
    0,
    3,
    0,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    0,
    3,
    0,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    2,
    1,
    0,
    2,
    2,
    1,
    0,
    2,
    1,
    0,
    1,
    1,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    2,
    3,
    3,
    3,
    3,
    3,
    2,
    2,
    4,
    0,
    2,
    0,
    2,
    0,
    2,
    0,
    2,
    0,
    2,
    1,
    4,
    4,
    4,
    4,
    3,
    3,
    3,
    3,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    2,
    1,
    1,
    0,
    9,
    0,
    12,
    1,
    1,
    0,
    0,
    19,
    14,
    1,
    13,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    11,
    10,
    0,
    11,
    10,
    0,
    13,
    5,
    0,
    13,
    12,
    5,
    0,
    0,
    0,
    1,
    0,
    1,
    1,
    1,
    0,
    1,
    1,
    0,
    0,
    1,
    0,
    0,
    1,
    1,
    0,
    1,
    1,
    0,
    0,
    1,
    0,
    0,
    1,
    1,
    0,
    1,
    1,
    0,
    0,
    1,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    2,
    0,
    2,
    0,
    1,
    1,
    1,
    2,
    0,
    2,
    0,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    0,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    0,
    0,
    0,
    0,
  };
