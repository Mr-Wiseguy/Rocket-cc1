/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include <stdio.h>
#include "rtl.h"
#include "expr.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"

#include "insn-flags.h"

#include "insn-codes.h"

extern char *insn_operand_constraint[][MAX_RECOG_OPERANDS];

extern rtx recog_operand[];
#define operands emit_operand

#define FAIL goto _fail

#define DONE goto _done

rtx
gen_adddf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DFmode,
	operand1,
	operand2));
}

rtx
gen_addsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, SFmode,
	operand1,
	operand2));
}

rtx
gen_addsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) == -32768)
    operands[2] = force_reg (SImode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_addsi3_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, SImode,
	operand1,
	operand2));
}

rtx
gen_adddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operand3;
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) == -32768)
    operands[2] = force_reg (DImode, operands[2]);

  if (TARGET_64BIT)
    {
      emit_insn (gen_adddi3_internal_3 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_adddi3_internal_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_6 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LTU, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_7 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LTU, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_adddi3_internal_2 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_9 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LTU, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_10 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LTU, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (PLUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_adddi3_internal_3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DImode,
	operand1,
	operand2));
}

rtx
gen_addsi3_internal_2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, DImode,
	gen_rtx (PLUS, SImode,
	operand1,
	operand2)));
}

rtx
gen_subdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MINUS, DFmode,
	operand1,
	operand2));
}

rtx
gen_subsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MINUS, SFmode,
	operand1,
	operand2));
}

rtx
gen_subsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) == -32768)
    operands[2] = force_reg (SImode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MINUS, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_subsi3_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MINUS, SImode,
	operand1,
	operand2));
}

rtx
gen_subdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operand3;
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (TARGET_64BIT)
    {
      emit_insn (gen_subdi3_internal_3 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MINUS, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_subdi3_internal (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MINUS, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_19 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LTU, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_20 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LTU, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_subdi3_internal_2 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MINUS, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_22 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LTU, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_23 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LTU, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (MINUS, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_subdi3_internal_3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MINUS, DImode,
	operand1,
	operand2));
}

rtx
gen_subsi3_internal_2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, DImode,
	gen_rtx (MINUS, SImode,
	operand1,
	operand2)));
}

rtx
gen_muldf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (mips_cpu != PROCESSOR_R4300)
    emit_insn (gen_muldf3_internal (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_muldf3_r4300 (operands[0], operands[1], operands[2]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DFmode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_muldf3_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DFmode,
	operand1,
	operand2));
}

rtx
gen_muldf3_r4300 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DFmode,
	operand1,
	operand2));
}

rtx
gen_mulsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (mips_cpu != PROCESSOR_R4300)
    emit_insn( gen_mulsf3_internal (operands[0], operands[1], operands[2]));
  else
    emit_insn( gen_mulsf3_r4300 (operands[0], operands[1], operands[2]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, SFmode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_mulsf3_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, SFmode,
	operand1,
	operand2));
}

rtx
gen_mulsf3_r4300 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, SFmode,
	operand1,
	operand2));
}

rtx
gen_mulsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (GENERATE_MULT3)
    emit_insn (gen_mulsi3_mult3 (operands[0], operands[1], operands[2]));
  else if (TARGET_MAD)
    emit_insn (gen_mulsi3_r4650 (operands[0], operands[1], operands[2]));
  else if (mips_cpu != PROCESSOR_R4000)
    emit_insn (gen_mulsi3_internal (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_mulsi3_r4000 (operands[0], operands[1], operands[2]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_mulsi3_mult3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_mulsi3_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_mulsi3_r4000 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_mulsi3_r4650 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_muldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (mips_cpu != PROCESSOR_R4000)
    emit_insn (gen_muldi3_internal (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_muldi3_r4000 (operands[0], operands[1], operands[2]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_muldi3_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_muldi3_r4000 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_mulsidi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (TARGET_64BIT)
    emit_insn (gen_mulsidi3_64bit (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_mulsidi3_internal (operands[0], operands[1], operands[2]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1),
	gen_rtx (SIGN_EXTEND, DImode,
	operand2))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_mulsidi3_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1),
	gen_rtx (SIGN_EXTEND, DImode,
	operand2))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_mulsidi3_64bit (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1),
	gen_rtx (SIGN_EXTEND, DImode,
	operand2))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_smulsi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (TRUNCATE, SImode,
	gen_rtx (LSHIFTRT, DImode,
	gen_rtx (MULT, DImode,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1),
	gen_rtx (SIGN_EXTEND, DImode,
	operand2)),
	GEN_INT (32)))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_umulsidi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (TARGET_64BIT)
    emit_insn (gen_umulsidi3_64bit (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_umulsidi3_internal (operands[0], operands[1], operands[2]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1),
	gen_rtx (ZERO_EXTEND, DImode,
	operand2))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_umulsidi3_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1),
	gen_rtx (ZERO_EXTEND, DImode,
	operand2))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_umulsidi3_64bit (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MULT, DImode,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1),
	gen_rtx (ZERO_EXTEND, DImode,
	operand2))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_umulsi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (TRUNCATE, SImode,
	gen_rtx (LSHIFTRT, DImode,
	gen_rtx (MULT, DImode,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1),
	gen_rtx (ZERO_EXTEND, DImode,
	operand2)),
	GEN_INT (32)))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_smuldi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (TRUNCATE, DImode,
	gen_rtx (LSHIFTRT, TImode,
	gen_rtx (MULT, TImode,
	gen_rtx (SIGN_EXTEND, TImode,
	operand1),
	gen_rtx (SIGN_EXTEND, TImode,
	operand2)),
	GEN_INT (64)))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_umuldi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (TRUNCATE, DImode,
	gen_rtx (LSHIFTRT, TImode,
	gen_rtx (MULT, TImode,
	gen_rtx (ZERO_EXTEND, TImode,
	operand1),
	gen_rtx (ZERO_EXTEND, TImode,
	operand2)),
	GEN_INT (64)))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_madsi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, SImode,
	gen_rtx (MULT, SImode,
	operand1,
	operand2),
	operand0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_maddi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DImode,
	gen_rtx (MULT, DImode,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1),
	gen_rtx (SIGN_EXTEND, DImode,
	operand2)),
	operand0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_maddi_64bit (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DImode,
	gen_rtx (MULT, DImode,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1),
	gen_rtx (SIGN_EXTEND, DImode,
	operand2)),
	operand0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_umaddi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DImode,
	gen_rtx (MULT, DImode,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1),
	gen_rtx (ZERO_EXTEND, DImode,
	operand2)),
	operand0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_umaddi_64bit (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, DImode,
	gen_rtx (MULT, DImode,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1),
	gen_rtx (ZERO_EXTEND, DImode,
	operand2)),
	operand0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_madd3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (PLUS, SImode,
	gen_rtx (MULT, SImode,
	operand1,
	operand2),
	operand3)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_divdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (DIV, DFmode,
	operand1,
	operand2));
}

rtx
gen_divsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (DIV, SFmode,
	operand1,
	operand2));
}

rtx
gen_divmodsi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (5,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (DIV, SImode,
	operand1,
	operand2)),
		gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (MOD, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_divmoddi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (5,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (DIV, DImode,
	operand1,
	operand2)),
		gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (MOD, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_udivmodsi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (5,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UDIV, SImode,
	operand1,
	operand2)),
		gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (UMOD, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_udivmoddi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (5,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UDIV, DImode,
	operand1,
	operand2)),
		gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (UMOD, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_divsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (DIV, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_divdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (DIV, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_modsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MOD, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_moddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (MOD, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_udivsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UDIV, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_udivdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UDIV, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_umodsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UMOD, SImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_umoddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (4,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UMOD, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_sqrtdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SQRT, DFmode,
	operand1));
}

rtx
gen_sqrtsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SQRT, SFmode,
	operand1));
}

rtx
gen_abssi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ABS, SImode,
	operand1));
}

rtx
gen_absdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ABS, DImode,
	operand1));
}

rtx
gen_absdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ABS, DFmode,
	operand1));
}

rtx
gen_abssf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ABS, SFmode,
	operand1));
}

rtx
gen_ffssi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FFS, SImode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0))));
}

rtx
gen_ffsdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FFS, DImode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0))));
}

rtx
gen_negsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NEG, SImode,
	operand1));
}

rtx
gen_negdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (TARGET_64BIT)
    {
      emit_insn (gen_negdi2_internal_2 (operands[0], operands[1]));
      DONE;
    }

  operands[2] = gen_reg_rtx (SImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NEG, DImode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	operand2))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_negdi2_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NEG, DImode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	operand2)));
}

rtx
gen_negdi2_internal_2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NEG, DImode,
	operand1));
}

rtx
gen_negdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NEG, DFmode,
	operand1));
}

rtx
gen_negsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NEG, SFmode,
	operand1));
}

rtx
gen_one_cmplsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NOT, SImode,
	operand1));
}

rtx
gen_one_cmpldi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NOT, DImode,
	operand1));
}

rtx
gen_split_98 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (NOT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (NOT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_andsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (AND, SImode,
	operand1,
	operand2));
}

rtx
gen_anddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (AND, DImode,
	operand1,
	operand2));
}

rtx
gen_split_101 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (AND, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (AND, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_anddi3_internal1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (AND, DImode,
	operand1,
	operand2));
}

rtx
gen_iorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (IOR, SImode,
	operand1,
	operand2));
}

rtx
gen_iordi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (IOR, DImode,
	operand1,
	operand2));
}

rtx
gen_split_105 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (IOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (IOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_xorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, SImode,
	operand1,
	operand2));
}

rtx
gen_xordi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, DImode,
	operand1,
	operand2));
}

rtx
gen_split_108 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (XOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	gen_rtx (SUBREG, SImode,
	operand2,
	0))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (XOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	gen_rtx (SUBREG, SImode,
	operand2,
	1))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_xordi3_immed (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, DImode,
	operand1,
	operand2));
}

rtx
gen_split_112 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (AND, SImode,
	gen_rtx (NOT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0)),
	gen_rtx (NOT, SImode,
	gen_rtx (SUBREG, SImode,
	operand2,
	0)))));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (AND, SImode,
	gen_rtx (NOT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1)),
	gen_rtx (NOT, SImode,
	gen_rtx (SUBREG, SImode,
	operand2,
	1)))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_truncdfsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FLOAT_TRUNCATE, SFmode,
	operand1));
}

rtx
gen_truncdisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (TRUNCATE, SImode,
	operand1));
}

rtx
gen_truncdihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (TRUNCATE, HImode,
	operand1));
}

rtx
gen_truncdiqi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (TRUNCATE, QImode,
	operand1));
}

rtx
gen_zero_extendsidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (optimize && GET_CODE (operands[1]) == MEM)
    operands[1] = force_not_mem (operands[1]);

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx op1   = gen_lowpart (DImode, operands[1]);
      rtx temp  = gen_reg_rtx (DImode);
      rtx shift = gen_rtx (CONST_INT, VOIDmode, 32);

      emit_insn (gen_ashldi3 (temp, op1, shift));
      emit_insn (gen_lshrdi3 (operands[0], temp, shift));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_zero_extendsidi2_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1));
}

rtx
gen_zero_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ZERO_EXTEND, SImode,
	operand1));
}

rtx
gen_zero_extendhidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1));
}

rtx
gen_zero_extendqihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ZERO_EXTEND, HImode,
	operand1));
}

rtx
gen_zero_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ZERO_EXTEND, SImode,
	operand1));
}

rtx
gen_zero_extendqidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ZERO_EXTEND, DImode,
	operand1));
}

rtx
gen_extendsidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1));
}

rtx
gen_extendhidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (optimize && GET_CODE (operands[1]) == MEM)
    operands[1] = force_not_mem (operands[1]);

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx op1   = gen_lowpart (DImode, operands[1]);
      rtx temp  = gen_reg_rtx (DImode);
      rtx shift = gen_rtx (CONST_INT, VOIDmode, 48);

      emit_insn (gen_ashldi3 (temp, op1, shift));
      emit_insn (gen_ashrdi3 (operands[0], temp, shift));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_extendhidi2_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1));
}

rtx
gen_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (optimize && GET_CODE (operands[1]) == MEM)
    operands[1] = force_not_mem (operands[1]);

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx op1   = gen_lowpart (SImode, operands[1]);
      rtx temp  = gen_reg_rtx (SImode);
      rtx shift = gen_rtx (CONST_INT, VOIDmode, 16);

      emit_insn (gen_ashlsi3 (temp, op1, shift));
      emit_insn (gen_ashrsi3 (operands[0], temp, shift));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, SImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_extendhisi2_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, SImode,
	operand1));
}

rtx
gen_extendqihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (optimize && GET_CODE (operands[1]) == MEM)
    operands[1] = force_not_mem (operands[1]);

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx op0   = gen_lowpart (SImode, operands[0]);
      rtx op1   = gen_lowpart (SImode, operands[1]);
      rtx temp  = gen_reg_rtx (SImode);
      rtx shift = gen_rtx (CONST_INT, VOIDmode, 24);

      emit_insn (gen_ashlsi3 (temp, op1, shift));
      emit_insn (gen_ashrsi3 (op0, temp, shift));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, HImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_extendqihi2_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, HImode,
	operand1));
}

rtx
gen_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (optimize && GET_CODE (operands[1]) == MEM)
    operands[1] = force_not_mem (operands[1]);

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx op1   = gen_lowpart (SImode, operands[1]);
      rtx temp  = gen_reg_rtx (SImode);
      rtx shift = gen_rtx (CONST_INT, VOIDmode, 24);

      emit_insn (gen_ashlsi3 (temp, op1, shift));
      emit_insn (gen_ashrsi3 (operands[0], temp, shift));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, SImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_extendqisi2_insn (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, SImode,
	operand1));
}

rtx
gen_extendqidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (optimize && GET_CODE (operands[1]) == MEM)
    operands[1] = force_not_mem (operands[1]);

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx op1   = gen_lowpart (DImode, operands[1]);
      rtx temp  = gen_reg_rtx (DImode);
      rtx shift = gen_rtx (CONST_INT, VOIDmode, 56);

      emit_insn (gen_ashldi3 (temp, op1, shift));
      emit_insn (gen_ashrdi3 (operands[0], temp, shift));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_extendqidi2_insn (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTEND, DImode,
	operand1));
}

rtx
gen_extendsfdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FLOAT_EXTEND, DFmode,
	operand1));
}

rtx
gen_fix_truncdfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FIX, SImode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DFmode, 0))));
}

rtx
gen_fix_truncsfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FIX, SImode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SFmode, 0))));
}

rtx
gen_fix_truncdfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FIX, DImode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DFmode, 0))));
}

rtx
gen_fix_truncsfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FIX, DImode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DFmode, 0))));
}

rtx
gen_floatsidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FLOAT, DFmode,
	operand1));
}

rtx
gen_floatdidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FLOAT, DFmode,
	operand1));
}

rtx
gen_floatsisf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FLOAT, SFmode,
	operand1));
}

rtx
gen_floatdisf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (FLOAT, SFmode,
	operand1));
}

rtx
gen_fixuns_truncdfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  rtx reg1 = gen_reg_rtx (DFmode);
  rtx reg2 = gen_reg_rtx (DFmode);
  rtx reg3 = gen_reg_rtx (SImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset = REAL_VALUE_LDEXP (1.0, 31);

  if (reg1)			/* turn off complaints about unreached code */
    {
      emit_move_insn (reg1, immed_real_const_1 (offset, DFmode));
      do_pending_stack_adjust ();

      emit_insn (gen_cmpdf (operands[1], reg1));
      emit_jump_insn (gen_bge (label1));

      emit_insn (gen_fix_truncdfsi2 (operands[0], operands[1]));
      emit_jump_insn (gen_rtx (SET, VOIDmode, pc_rtx,
			       gen_rtx (LABEL_REF, VOIDmode, label2)));
      emit_barrier ();

      emit_label (label1);
      emit_move_insn (reg2, gen_rtx (MINUS, DFmode, operands[1], reg1));
      emit_move_insn (reg3, gen_rtx (CONST_INT, VOIDmode, 0x80000000));

      emit_insn (gen_fix_truncdfsi2 (operands[0], reg2));
      emit_insn (gen_iorsi3 (operands[0], operands[0], reg3));

      emit_label (label2);

      /* allow REG_NOTES to be set on last insn (labels don't have enough
	 fields, and can't be used for REG_NOTES anyway).  */
      emit_insn (gen_rtx (USE, VOIDmode, stack_pointer_rtx));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UNSIGNED_FIX, SImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_fixuns_truncdfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  rtx reg1 = gen_reg_rtx (DFmode);
  rtx reg2 = gen_reg_rtx (DFmode);
  rtx reg3 = gen_reg_rtx (DImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset = REAL_VALUE_LDEXP (1.0, 63);

  if (reg1)			/* turn off complaints about unreached code */
    {
      emit_move_insn (reg1, immed_real_const_1 (offset, DFmode));
      do_pending_stack_adjust ();

      emit_insn (gen_cmpdf (operands[1], reg1));
      emit_jump_insn (gen_bge (label1));

      emit_insn (gen_fix_truncdfdi2 (operands[0], operands[1]));
      emit_jump_insn (gen_rtx (SET, VOIDmode, pc_rtx,
			       gen_rtx (LABEL_REF, VOIDmode, label2)));
      emit_barrier ();

      emit_label (label1);
      emit_move_insn (reg2, gen_rtx (MINUS, DFmode, operands[1], reg1));
      emit_move_insn (reg3, gen_rtx (CONST_INT, VOIDmode, 0x80000000));
      emit_insn (gen_ashldi3 (reg3, reg3, GEN_INT (32)));

      emit_insn (gen_fix_truncdfdi2 (operands[0], reg2));
      emit_insn (gen_iordi3 (operands[0], operands[0], reg3));

      emit_label (label2);

      /* allow REG_NOTES to be set on last insn (labels don't have enough
	 fields, and can't be used for REG_NOTES anyway).  */
      emit_insn (gen_rtx (USE, VOIDmode, stack_pointer_rtx));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UNSIGNED_FIX, DImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_fixuns_truncsfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  rtx reg1 = gen_reg_rtx (SFmode);
  rtx reg2 = gen_reg_rtx (SFmode);
  rtx reg3 = gen_reg_rtx (SImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset = REAL_VALUE_LDEXP (1.0, 31);

  if (reg1)			/* turn off complaints about unreached code */
    {
      emit_move_insn (reg1, immed_real_const_1 (offset, SFmode));
      do_pending_stack_adjust ();

      emit_insn (gen_cmpsf (operands[1], reg1));
      emit_jump_insn (gen_bge (label1));

      emit_insn (gen_fix_truncsfsi2 (operands[0], operands[1]));
      emit_jump_insn (gen_rtx (SET, VOIDmode, pc_rtx,
			       gen_rtx (LABEL_REF, VOIDmode, label2)));
      emit_barrier ();

      emit_label (label1);
      emit_move_insn (reg2, gen_rtx (MINUS, SFmode, operands[1], reg1));
      emit_move_insn (reg3, gen_rtx (CONST_INT, VOIDmode, 0x80000000));

      emit_insn (gen_fix_truncsfsi2 (operands[0], reg2));
      emit_insn (gen_iorsi3 (operands[0], operands[0], reg3));

      emit_label (label2);

      /* allow REG_NOTES to be set on last insn (labels don't have enough
	 fields, and can't be used for REG_NOTES anyway).  */
      emit_insn (gen_rtx (USE, VOIDmode, stack_pointer_rtx));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UNSIGNED_FIX, SImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_fixuns_truncsfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  rtx reg1 = gen_reg_rtx (SFmode);
  rtx reg2 = gen_reg_rtx (SFmode);
  rtx reg3 = gen_reg_rtx (DImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset = REAL_VALUE_LDEXP (1.0, 63);

  if (reg1)			/* turn off complaints about unreached code */
    {
      emit_move_insn (reg1, immed_real_const_1 (offset, SFmode));
      do_pending_stack_adjust ();

      emit_insn (gen_cmpsf (operands[1], reg1));
      emit_jump_insn (gen_bge (label1));

      emit_insn (gen_fix_truncsfdi2 (operands[0], operands[1]));
      emit_jump_insn (gen_rtx (SET, VOIDmode, pc_rtx,
			       gen_rtx (LABEL_REF, VOIDmode, label2)));
      emit_barrier ();

      emit_label (label1);
      emit_move_insn (reg2, gen_rtx (MINUS, SFmode, operands[1], reg1));
      emit_move_insn (reg3, gen_rtx (CONST_INT, VOIDmode, 0x80000000));
      emit_insn (gen_ashldi3 (reg3, reg3, GEN_INT (32)));

      emit_insn (gen_fix_truncsfdi2 (operands[0], reg2));
      emit_insn (gen_iordi3 (operands[0], operands[0], reg3));

      emit_label (label2);

      /* allow REG_NOTES to be set on last insn (labels don't have enough
	 fields, and can't be used for REG_NOTES anyway).  */
      emit_insn (gen_rtx (USE, VOIDmode, stack_pointer_rtx));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UNSIGNED_FIX, DImode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_extv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  /* If this isn't a 32 bit field, and it doesn't start on a byte boundary
     then fail.  */
  if (INTVAL (operands[2]) != 32 || (INTVAL (operands[3]) % 8) != 0)
    FAIL;

  /* This can happen for a 64 bit target, when extracting a value from
     a 64 bit union member.  extract_bit_field doesn't verify that our
     source matches the predicate, so we force it to be a MEM here.  */
  if (GET_CODE (operands[1]) != MEM)
    FAIL;

  /* Change the mode to BLKmode for aliasing purposes.  */
  operands[1] = change_address (operands[1], BLKmode, XEXP (operands[1], 0));

  /* Otherwise, emit a lwl/lwr pair to load the value.  */
  emit_insn (gen_movsi_ulw (operands[0], operands[1]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (SIGN_EXTRACT, SImode,
	operand1,
	operand2,
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_extzv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  /* If this isn't a 32 bit field, and it doesn't start on a byte boundary
     then fail.  */
  if (INTVAL (operands[2]) != 32 || (INTVAL (operands[3]) % 8) != 0)
    FAIL;

  /* This can happen for a 64 bit target, when extracting a value from
     a 64 bit union member.  extract_bit_field doesn't verify that our
     source matches the predicate, so we force it to be a MEM here.  */
  if (GET_CODE (operands[1]) != MEM)
    FAIL;

  /* Change the mode to BLKmode for aliasing purposes.  */
  operands[1] = change_address (operands[1], BLKmode, XEXP (operands[1], 0));

  /* Otherwise, emit a lwl/lwr pair to load the value.  */
  emit_insn (gen_movsi_ulw (operands[0], operands[1]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ZERO_EXTRACT, SImode,
	operand1,
	operand2,
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_insv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  /* If this isn't a 32 bit field, and it doesn't start on a byte boundary
     then fail.  */
  if (INTVAL (operands[1]) != 32 || (INTVAL (operands[2]) % 8) != 0)
    FAIL;

  /* This can happen for a 64 bit target, when storing into a 32 bit union
     member.  store_bit_field doesn't verify that our target matches the
     predicate, so we force it to be a MEM here.  */
  if (GET_CODE (operands[0]) != MEM)
    FAIL;

  /* Change the mode to BLKmode for aliasing purposes.  */
  operands[0] = change_address (operands[0], BLKmode, XEXP (operands[0], 0));

  /* Otherwise, emit a swl/swr pair to load the value.  */
  emit_insn (gen_movsi_usw (operands[0], operands[3]));
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (ZERO_EXTRACT, SImode,
	operand0,
	operand1,
	operand2),
	operand3));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movsi_ulw (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UNSPEC, SImode,
	gen_rtvec (1,
		operand1),
	0));
}

rtx
gen_movsi_usw (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UNSPEC, BLKmode,
	gen_rtvec (1,
		operand1),
	1));
}

rtx
gen_high (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (HIGH, SImode,
	operand1));
}

rtx
gen_low (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LO_SUM, SImode,
	operand1,
	operand2));
}

rtx
gen_movdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (mips_split_addresses && mips_check_split (operands[1], DImode))
    {
      enum machine_mode mode = GET_MODE (operands[0]);
      rtx tem = ((reload_in_progress | reload_completed)
		 ? operands[0] : gen_reg_rtx (mode));

      emit_insn (gen_rtx (SET, VOIDmode, tem,
			  gen_rtx (HIGH, mode, operands[1])));

      operands[1] = gen_rtx (LO_SUM, mode, tem, operands[1]);
    }

  /* If we are generating embedded PIC code, and we are referring to a
     symbol in the .text section, we must use an offset from the start
     of the function.  */
  if (TARGET_EMBEDDED_PIC
      && (GET_CODE (operands[1]) == LABEL_REF
	  || (GET_CODE (operands[1]) == SYMBOL_REF
	      && ! SYMBOL_REF_FLAG (operands[1]))))
    {
      rtx temp;

      temp = embedded_pic_offset (operands[1]);
      temp = gen_rtx (PLUS, Pmode, embedded_pic_fnaddr_rtx,
		      force_reg (DImode, temp));
      emit_move_insn (operands[0], force_reg (DImode, temp));
      DONE;
    }

  /* If operands[1] is a constant address illegal for pic, then we need to
     handle it just like LEGITIMIZE_ADDRESS does.  */
  if (flag_pic && pic_address_needs_scratch (operands[1]))
    {
      rtx temp = force_reg (DImode, XEXP (XEXP (operands[1], 0), 0));
      rtx temp2 = XEXP (XEXP (operands[1], 0), 1);

      if (! SMALL_INT (temp2))
	temp2 = force_reg (DImode, temp2);

      emit_move_insn (operands[0], gen_rtx (PLUS, DImode, temp, temp2));
      DONE;
    }

  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], DImode)
      && !register_operand (operands[1], DImode)
      && (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) != 0)
      && operands[1] != CONST0_RTX (DImode))
    {
      rtx temp = force_reg (DImode, operands[1]);
      emit_move_insn (operands[0], temp);
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movdi_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_split_165 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (SUBREG, SImode,
	operand1,
	0)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (SUBREG, SImode,
	operand1,
	1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movdi_internal2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_reload_indi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  rtx scratch = gen_rtx (REG, DImode,
			 (REGNO (operands[0]) == REGNO (operands[2]) 
			  ? REGNO (operands[2]) + 1
			  : REGNO (operands[2])));

  if (GET_CODE (operands[0]) == REG && REGNO (operands[0]) == HILO_REGNUM)
    {
      if (GET_CODE (operands[1]) == MEM)
	{
	  rtx memword, offword, hiword, loword;

	  scratch = gen_rtx (REG, SImode, REGNO (scratch));
	  memword = change_address (operands[1], SImode, NULL_RTX);
	  offword = change_address (adj_offsettable_operand (operands[1], 4),
				    SImode, NULL_RTX);
	  if (BYTES_BIG_ENDIAN)
	    {
	      hiword = memword;
	      loword = offword;
	    }
	  else
	    {
	      hiword = offword;
	      loword = memword;
	    }
	  emit_move_insn (scratch, hiword);
	  emit_move_insn (gen_rtx (REG, SImode, 64), scratch);
	  emit_move_insn (scratch, loword);
	  emit_move_insn (gen_rtx (REG, SImode, 65), scratch);
	}
      else
	{
	  emit_insn (gen_ashrdi3 (scratch, operands[1], GEN_INT (32)));
	  emit_insn (gen_movdi (gen_rtx (REG, DImode, 64), scratch));
	  emit_insn (gen_ashldi3 (scratch, operands[1], GEN_INT (32)));
	  emit_insn (gen_ashrdi3 (scratch, scratch, GEN_INT (32)));
	  emit_insn (gen_movdi (gen_rtx (REG, DImode, 65), scratch));
	}
      DONE;
    }
  if (GET_CODE (operands[1]) == REG && REGNO (operands[1]) == HILO_REGNUM)
    {
      emit_insn (gen_movdi (scratch, gen_rtx (REG, DImode, 65)));
      emit_insn (gen_ashldi3 (scratch, scratch, GEN_INT (32)));
      emit_insn (gen_lshrdi3 (scratch, scratch, GEN_INT (32)));
      emit_insn (gen_movdi (operands[0], gen_rtx (REG, DImode, 64)));
      emit_insn (gen_ashldi3 (operands[0], operands[0], GEN_INT (32)));
      emit_insn (gen_iordi3 (operands[0], operands[0], scratch));
      DONE;
    }
  /* This handles moves between a float register and HI/LO.  */
  emit_move_insn (scratch, operands[1]);
  emit_move_insn (operands[0], scratch);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	operand2));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_reload_outdi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (GET_CODE (operands[0]) == REG && REGNO (operands[0]) == HILO_REGNUM)
    {
      emit_insn (gen_ashrdi3 (operands[2], operands[1], GEN_INT (32)));
      emit_insn (gen_movdi (gen_rtx (REG, DImode, 64), operands[2]));
      emit_insn (gen_ashldi3 (operands[2], operands[1], GEN_INT (32)));
      emit_insn (gen_ashrdi3 (operands[2], operands[2], GEN_INT (32)));
      emit_insn (gen_movdi (gen_rtx (REG, DImode, 65), operands[2]));
      DONE;
    }
  if (GET_CODE (operands[1]) == REG && REGNO (operands[1]) == HILO_REGNUM)
    {
      if (GET_CODE (operands[0]) == MEM)
	{
	  rtx scratch, memword, offword, hiword, loword;

	  scratch = gen_rtx (REG, SImode, REGNO (operands[2]));
	  memword = change_address (operands[0], SImode, NULL_RTX);
	  offword = change_address (adj_offsettable_operand (operands[0], 4),
				    SImode, NULL_RTX);
	  if (BYTES_BIG_ENDIAN)
	    {
	      hiword = memword;
	      loword = offword;
	    }
	  else
	    {
	      hiword = offword;
	      loword = memword;
	    }
	  emit_move_insn (scratch, gen_rtx (REG, SImode, 64));
	  emit_move_insn (hiword, scratch);
	  emit_move_insn (scratch, gen_rtx (REG, SImode, 65));
	  emit_move_insn (loword, scratch);
	}
      else
	{
	  emit_insn (gen_movdi (operands[2], gen_rtx (REG, DImode, 65)));
	  emit_insn (gen_ashldi3 (operands[2], operands[2], GEN_INT (32)));
	  emit_insn (gen_lshrdi3 (operands[2], operands[2], GEN_INT (32)));
	  emit_insn (gen_movdi (operands[0], gen_rtx (REG, DImode, 64)));
	  emit_insn (gen_ashldi3 (operands[0], operands[0], GEN_INT (32)));
	  emit_insn (gen_iordi3 (operands[0], operands[0], operands[2]));
	}
      DONE;
    }
  /* This handles moves between a float register and HI/LO.  */
  emit_move_insn (operands[2], operands[1]);
  emit_move_insn (operands[0], operands[2]);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	operand2));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_169 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

{
  operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[1]) & 0xffff0000);
  operands[3] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[1]) & 0x0000ffff);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (IOR, SImode,
	operand0,
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (mips_split_addresses && mips_check_split (operands[1], SImode))
    {
      enum machine_mode mode = GET_MODE (operands[0]);
      rtx tem = ((reload_in_progress | reload_completed)
		 ? operands[0] : gen_reg_rtx (mode));

      emit_insn (gen_rtx (SET, VOIDmode, tem,
			  gen_rtx (HIGH, mode, operands[1])));

      operands[1] = gen_rtx (LO_SUM, mode, tem, operands[1]);
    }

  /* If we are generating embedded PIC code, and we are referring to a
     symbol in the .text section, we must use an offset from the start
     of the function.  */
  if (TARGET_EMBEDDED_PIC
      && (GET_CODE (operands[1]) == LABEL_REF
	  || (GET_CODE (operands[1]) == SYMBOL_REF
	      && ! SYMBOL_REF_FLAG (operands[1]))))
    {
      rtx temp;

      temp = embedded_pic_offset (operands[1]);
      temp = gen_rtx (PLUS, Pmode, embedded_pic_fnaddr_rtx,
		      force_reg (SImode, temp));
      emit_move_insn (operands[0], force_reg (SImode, temp));
      DONE;
    }

  /* If operands[1] is a constant address invalid for pic, then we need to
     handle it just like LEGITIMIZE_ADDRESS does.  */
  if (flag_pic && pic_address_needs_scratch (operands[1]))
    {
      rtx temp = force_reg (SImode, XEXP (XEXP (operands[1], 0), 0));
      rtx temp2 = XEXP (XEXP (operands[1], 0), 1);

      if (! SMALL_INT (temp2))
	temp2 = force_reg (SImode, temp2);

      emit_move_insn (operands[0], gen_rtx (PLUS, SImode, temp, temp2));
      DONE;
    }

  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], SImode)
      && !register_operand (operands[1], SImode)
      && (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) != 0))
    {
      rtx temp = force_reg (SImode, operands[1]);
      emit_move_insn (operands[0], temp);
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movsi_internal1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movsi_internal2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_reload_outsi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (GET_CODE (operands[0]) == REG && REGNO (operands[0]) == HILO_REGNUM)
    {
      emit_insn (gen_movsi (gen_rtx (REG, SImode, 65), operands[1]));
      emit_insn (gen_ashrsi3 (operands[2], operands[1], GEN_INT (31)));
      emit_insn (gen_movsi (gen_rtx (REG, SImode, 64), operands[2]));
      DONE;
    }
  /* This handles moves between a float register and HI/LO.  */
  emit_move_insn (operands[2], operands[1]);
  emit_move_insn (operands[0], operands[2]);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	operand2));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movcc (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_reload_incc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  rtx source;
  rtx fp1, fp2;

  /* This is called when are copying some value into a condition code
     register.  Operand 0 is the condition code register.  Operand 1
     is the source.  Operand 2 is a scratch register; we use TFmode
     because we actually need two floating point registers.  */
  if (! ST_REG_P (true_regnum (operands[0]))
      || ! FP_REG_P (true_regnum (operands[2])))
    abort ();

  /* We need to get the source in SFmode so that the insn is
     recognized.  */
  if (GET_CODE (operands[1]) == MEM)
    source = change_address (operands[1], SFmode, NULL_RTX);
  else if (GET_CODE (operands[1]) == REG || GET_CODE (operands[1]) == SUBREG)
    source = gen_rtx (REG, SFmode, true_regnum (operands[1]));
  else
    source = operands[1];

  fp1 = gen_rtx (REG, SFmode, REGNO (operands[2]));
  fp2 = gen_rtx (REG, SFmode, REGNO (operands[2]) + 1);

  emit_insn (gen_move_insn (fp1, source));
  emit_insn (gen_move_insn (fp2, gen_rtx (REG, SFmode, 0)));
  emit_insn (gen_rtx (SET, VOIDmode, operands[0],
		      gen_rtx (LT, CCmode, fp2, fp1)));

  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	operand2));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_reload_outcc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  /* This is called when we are copying a condition code register out
     to save it somewhere.  Operand 0 should be the location we are
     going to save it to.  Operand 1 should be the condition code
     register.  Operand 2 should be a scratch general purpose register
     created for us by reload.  The mips_secondary_reload_class
     function should have told reload that we don't need a scratch
     register if the destination is a general purpose register anyhow.  */
  if (ST_REG_P (true_regnum (operands[0]))
      || GP_REG_P (true_regnum (operands[0]))
      || ! ST_REG_P (true_regnum (operands[1]))
      || ! GP_REG_P (true_regnum (operands[2])))
    abort ();

  /* All we have to do is copy the value from the condition code to
     the data register, which movcc can handle, and then store the
     value into the real final destination.  */
  emit_insn (gen_move_insn (operands[2], operands[1]));
  emit_insn (gen_move_insn (operands[0], operands[2]));

  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx (CLOBBER, VOIDmode,
	operand2));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movhi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], HImode)
      && !register_operand (operands[1], HImode)
      && (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) != 0))
    {
      rtx temp = force_reg (HImode, operands[1]);
      emit_move_insn (operands[0], temp);
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movhi_internal1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movhi_internal2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], QImode)
      && !register_operand (operands[1], QImode)
      && (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) != 0))
    {
      rtx temp = force_reg (QImode, operands[1]);
      emit_move_insn (operands[0], temp);
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movqi_internal1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movqi_internal2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], SFmode)
      && !register_operand (operands[1], SFmode)
      && (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) != 0)
      && operands[1] != CONST0_RTX (SFmode))
    {
      rtx temp = force_reg (SFmode, operands[1]);
      emit_move_insn (operands[0], temp);
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movsf_internal1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movsf_internal2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], DFmode)
      && !register_operand (operands[1], DFmode)
      && (GET_CODE (operands[1]) != CONST_INT || INTVAL (operands[1]) != 0)
      && operands[1] != CONST0_RTX (DFmode))
    {
      rtx temp = force_reg (DFmode, operands[1]);
      emit_move_insn (operands[0], temp);
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	operand1));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movdf_internal1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movdf_internal1a (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movdf_internal2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	operand1);
}

rtx
gen_split_198 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (SUBREG, SImode,
	operand1,
	0)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (SUBREG, SImode,
	operand1,
	1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_loadgp (operand0)
     rtx operand0;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	gen_rtx (REG, DImode,
	28),
	gen_rtx (UNSPEC_VOLATILE, DImode,
	gen_rtvec (1,
		operand0),
	2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, DImode,
	1))));
}

rtx
gen_movstrsi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  if (operands[0])		/* avoid unused code messages */
    {
      expand_block_move (operands);
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	operand1),
		gen_rtx (USE, VOIDmode,
	operand2),
		gen_rtx (USE, VOIDmode,
	operand3))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movstrsi_internal (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (8,
		gen_rtx (SET, VOIDmode,
	operand0,
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (USE, VOIDmode,
	operand2),
		gen_rtx (USE, VOIDmode,
	operand3),
		gen_rtx (USE, VOIDmode,
	const0_rtx)));
}

rtx
gen_split_202 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (8,
		gen_rtx (SET, VOIDmode,
	gen_rtx (MEM, BLKmode,
	operand0),
	gen_rtx (MEM, BLKmode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	operand4),
		gen_rtx (CLOBBER, VOIDmode,
	operand5),
		gen_rtx (CLOBBER, VOIDmode,
	operand6),
		gen_rtx (CLOBBER, VOIDmode,
	operand7),
		gen_rtx (USE, VOIDmode,
	operand2),
		gen_rtx (USE, VOIDmode,
	operand3),
		gen_rtx (USE, VOIDmode,
	const1_rtx))));
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (8,
		gen_rtx (SET, VOIDmode,
	gen_rtx (MEM, BLKmode,
	operand0),
	gen_rtx (MEM, BLKmode,
	operand1)),
		gen_rtx (CLOBBER, VOIDmode,
	operand4),
		gen_rtx (CLOBBER, VOIDmode,
	operand5),
		gen_rtx (CLOBBER, VOIDmode,
	operand6),
		gen_rtx (CLOBBER, VOIDmode,
	operand7),
		gen_rtx (USE, VOIDmode,
	operand2),
		gen_rtx (USE, VOIDmode,
	operand3),
		gen_rtx (USE, VOIDmode,
	GEN_INT (2)))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movstrsi_internal2 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (8,
		gen_rtx (SET, VOIDmode,
	operand0,
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (USE, VOIDmode,
	operand2),
		gen_rtx (USE, VOIDmode,
	operand3),
		gen_rtx (USE, VOIDmode,
	const1_rtx)));
}

rtx
gen_movstrsi_internal3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (8,
		gen_rtx (SET, VOIDmode,
	operand0,
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (USE, VOIDmode,
	operand2),
		gen_rtx (USE, VOIDmode,
	operand3),
		gen_rtx (USE, VOIDmode,
	GEN_INT (2))));
}

rtx
gen_ashlsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFT, SImode,
	operand1,
	operand2));
}

rtx
gen_ashldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operand3;
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (TARGET_64BIT)
    {
      emit_insn (gen_ashldi3_internal4 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_ashldi3_internal (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_ashldi3_internal2 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_209 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	const0_rtx));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_210 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	const0_rtx));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_ashldi3_internal3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_212 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

{
  int amount = INTVAL (operands[2]);
  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand4)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (IOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	operand3)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_213 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

{
  int amount = INTVAL (operands[2]);
  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand4)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (IOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	operand3)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_ashldi3_internal4 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFT, DImode,
	operand1,
	operand2));
}

rtx
gen_ashrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFTRT, SImode,
	operand1,
	operand2));
}

rtx
gen_ashrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operand3;
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (TARGET_64BIT)
    {
      emit_insn (gen_ashrdi3_internal4 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFTRT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_ashrdi3_internal (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFTRT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_ashrdi3_internal2 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFTRT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_219 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (ASHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (ASHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	GEN_INT (31))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_220 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (ASHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (ASHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	GEN_INT (31))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_ashrdi3_internal3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFTRT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_222 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

{
  int amount = INTVAL (operands[2]);
  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand4)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (IOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	operand3)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (ASHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_223 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

{
  int amount = INTVAL (operands[2]);
  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand4)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (IOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	operand3)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (ASHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_ashrdi3_internal4 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (ASHIFTRT, DImode,
	operand1,
	operand2));
}

rtx
gen_lshrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LSHIFTRT, SImode,
	operand1,
	operand2));
}

rtx
gen_lshrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operand3;
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (TARGET_64BIT)
    {
      emit_insn (gen_lshrdi3_internal4 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LSHIFTRT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_lshrdi3_internal (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LSHIFTRT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_lshrdi3_internal2 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LSHIFTRT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_229 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	const0_rtx));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_230 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx (CONST_INT, VOIDmode, INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	const0_rtx));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_lshrdi3_internal3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LSHIFTRT, DImode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_split_232 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

{
  int amount = INTVAL (operands[2]);
  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand4)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (IOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	operand3)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_split_233 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

{
  int amount = INTVAL (operands[2]);
  operands[2] = gen_rtx (CONST_INT, VOIDmode, (amount & 31));
  operands[4] = gen_rtx (CONST_INT, VOIDmode, ((-amount) & 31));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	1),
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (ASHIFT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand4)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	gen_rtx (IOR, SImode,
	gen_rtx (SUBREG, SImode,
	operand0,
	1),
	operand3)));
  emit_insn (gen_rtx (SET, VOIDmode,
	gen_rtx (SUBREG, SImode,
	operand0,
	0),
	gen_rtx (LSHIFTRT, SImode,
	gen_rtx (SUBREG, SImode,
	operand1,
	0),
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_lshrdi3_internal4 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LSHIFTRT, DImode,
	operand1,
	operand2));
}

rtx
gen_cmpsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (operands[0])		/* avoid unused code message */
    {
      branch_cmp[0] = operands[0];
      branch_cmp[1] = operands[1];
      branch_type = CMP_SI;
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	cc0_rtx,
	gen_rtx (COMPARE, CCmode,
	operand0,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_tstsi (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code message */
    {
      branch_cmp[0] = operands[0];
      branch_cmp[1] = const0_rtx;
      branch_type = CMP_SI;
      DONE;
    }
}
  operand0 = operands[0];
  emit_insn (gen_rtx (SET, VOIDmode,
	cc0_rtx,
	operand0));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_cmpdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (operands[0])		/* avoid unused code message */
    {
      branch_cmp[0] = operands[0];
      branch_cmp[1] = operands[1];
      branch_type = CMP_DI;
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	cc0_rtx,
	gen_rtx (COMPARE, CCmode,
	operand0,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_tstdi (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code message */
    {
      branch_cmp[0] = operands[0];
      branch_cmp[1] = const0_rtx;
      branch_type = CMP_DI;
      DONE;
    }
}
  operand0 = operands[0];
  emit_insn (gen_rtx (SET, VOIDmode,
	cc0_rtx,
	operand0));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_cmpdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (operands[0])		/* avoid unused code message */
    {
      branch_cmp[0] = operands[0];
      branch_cmp[1] = operands[1];
      branch_type = CMP_DF;
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	cc0_rtx,
	gen_rtx (COMPARE, CCmode,
	operand0,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_cmpsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (operands[0])		/* avoid unused code message */
    {
      branch_cmp[0] = operands[0];
      branch_cmp[1] = operands[1];
      branch_type = CMP_SF;
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx (SET, VOIDmode,
	cc0_rtx,
	gen_rtx (COMPARE, CCmode,
	operand0,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_branch_fp_ne (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (NE, CCmode,
	operand0,
	const0_rtx),
	operand1,
	operand2));
}

rtx
gen_branch_fp_eq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (EQ, CCmode,
	operand0,
	const0_rtx),
	operand1,
	operand2));
}

rtx
gen_branch_zero (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GET_CODE (operand0), SImode,
		operand1,
		const0_rtx),
	operand2,
	operand3));
}

rtx
gen_branch_zero_di (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GET_CODE (operand0), DImode,
		operand1,
		const0_rtx),
	operand2,
	operand3));
}

rtx
gen_branch_equality (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GET_CODE (operand0), SImode,
		operand1,
		operand2),
	operand3,
	operand4));
}

rtx
gen_branch_equality_di (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GET_CODE (operand0), DImode,
		operand1,
		operand2),
	operand3,
	operand4));
}

rtx
gen_beq (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, EQ);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (EQ, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_bne (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, NE);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (NE, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_bgt (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, GT);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GT, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_bge (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, GE);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GE, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_blt (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, LT);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (LT, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_ble (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, LE);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (LE, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_bgtu (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, GTU);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GTU, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_bgeu (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, GEU);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GEU, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_bltu (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, LTU);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (LTU, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_bleu (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (operands[0])		/* avoid unused code warning */
    {
      gen_conditional_branch (operands, LEU);
      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (LEU, CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand0),
	pc_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_seq (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (EQ, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    operands[2] = force_reg (SImode, operands[2]);

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (EQ, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_seq_si_zero (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (EQ, SImode,
	operand1,
	const0_rtx));
}

rtx
gen_seq_di_zero (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (EQ, DImode,
	operand1,
	const0_rtx));
}

rtx
gen_seq_si (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (EQ, SImode,
	operand1,
	operand2));
}

rtx
gen_split_261 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, SImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_seq_di (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (EQ, DImode,
	operand1,
	operand2));
}

rtx
gen_split_263 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, DImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sne (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (NE, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    operands[2] = force_reg (SImode, operands[2]);

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NE, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sne_si_zero (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NE, SImode,
	operand1,
	const0_rtx));
}

rtx
gen_sne_di_zero (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NE, DImode,
	operand1,
	const0_rtx));
}

rtx
gen_sne_si (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NE, SImode,
	operand1,
	operand2));
}

rtx
gen_split_268 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GTU, SImode,
	operand0,
	const0_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sne_di (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (NE, DImode,
	operand1,
	operand2));
}

rtx
gen_split_270 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GTU, DImode,
	operand0,
	const0_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sgt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (GT, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) != 0)
    operands[2] = force_reg (SImode, operands[2]);

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GT, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sgt_si (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GT, SImode,
	operand1,
	operand2));
}

rtx
gen_sgt_di (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GT, DImode,
	operand1,
	operand2));
}

rtx
gen_sge (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (GE, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GE, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sge_si (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GE, SImode,
	operand1,
	operand2));
}

rtx
gen_split_276 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, SImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sge_di (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GE, DImode,
	operand1,
	operand2));
}

rtx
gen_split_278 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, DImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_slt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (LT, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_slt_si (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, SImode,
	operand1,
	operand2));
}

rtx
gen_slt_di (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, DImode,
	operand1,
	operand2));
}

rtx
gen_sle (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (LE, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) >= 32767)
    operands[2] = force_reg (SImode, operands[2]);

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LE, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sle_si_const (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LE, SImode,
	operand1,
	operand2));
}

rtx
gen_sle_di_const (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LE, DImode,
	operand1,
	operand2));
}

rtx
gen_sle_si_reg (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LE, SImode,
	operand1,
	operand2));
}

rtx
gen_split_286 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, SImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, SImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sle_di_reg (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LE, DImode,
	operand1,
	operand2));
}

rtx
gen_split_288 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, DImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, DImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sgtu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (GTU, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) != 0)
    operands[2] = force_reg (SImode, operands[2]);

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GTU, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sgtu_si (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GTU, SImode,
	operand1,
	operand2));
}

rtx
gen_sgtu_di (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GTU, DImode,
	operand1,
	operand2));
}

rtx
gen_sgeu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (GEU, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GEU, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sgeu_si (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GEU, SImode,
	operand1,
	operand2));
}

rtx
gen_split_294 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, SImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sgeu_di (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GEU, DImode,
	operand1,
	operand2));
}

rtx
gen_split_296 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, DImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sltu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (LTU, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sltu_si (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, SImode,
	operand1,
	operand2));
}

rtx
gen_sltu_di (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, DImode,
	operand1,
	operand2));
}

rtx
gen_sleu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (LEU, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) >= 32767)
    operands[2] = force_reg (SImode, operands[2]);

  /* fall through and generate default code */
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LEU, SImode,
	operand1,
	operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sleu_si_const (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LEU, SImode,
	operand1,
	operand2));
}

rtx
gen_sleu_di_const (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LEU, DImode,
	operand1,
	operand2));
}

rtx
gen_sleu_si_reg (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LEU, SImode,
	operand1,
	operand2));
}

rtx
gen_split_304 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, SImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, SImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_sleu_di_reg (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LEU, DImode,
	operand1,
	operand2));
}

rtx
gen_split_306 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LTU, DImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (XOR, DImode,
	operand0,
	const1_rtx)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_seq_df (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (EQ, CCmode,
	operand1,
	operand2));
}

rtx
gen_slt_df (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, CCmode,
	operand1,
	operand2));
}

rtx
gen_sle_df (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LE, CCmode,
	operand1,
	operand2));
}

rtx
gen_sgt_df (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GT, CCmode,
	operand1,
	operand2));
}

rtx
gen_sge_df (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GE, CCmode,
	operand1,
	operand2));
}

rtx
gen_seq_sf (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (EQ, CCmode,
	operand1,
	operand2));
}

rtx
gen_slt_sf (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LT, CCmode,
	operand1,
	operand2));
}

rtx
gen_sle_sf (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (LE, CCmode,
	operand1,
	operand2));
}

rtx
gen_sgt_sf (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GT, CCmode,
	operand1,
	operand2));
}

rtx
gen_sge_sf (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (GE, CCmode,
	operand1,
	operand2));
}

rtx
gen_jump (operand0)
     rtx operand0;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (LABEL_REF, VOIDmode,
	operand0));
}

rtx
gen_indirect_jump (operand0)
     rtx operand0;
{
  rtx operands[1];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;

{
  rtx dest;

  if (operands[0])		/* eliminate unused code warnings */
    {
      dest = operands[0];
      if (GET_CODE (dest) != REG || GET_MODE (dest) != Pmode)
	operands[0] = copy_to_mode_reg (Pmode, dest);

      if (!TARGET_LONG64)
	emit_jump_insn (gen_indirect_jump_internal1 (operands[0]));
      else
	emit_jump_insn (gen_indirect_jump_internal2 (operands[0]));

      DONE;
    }
}
  operand0 = operands[0];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	operand0));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_indirect_jump_internal1 (operand0)
     rtx operand0;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	operand0);
}

rtx
gen_indirect_jump_internal2 (operand0)
     rtx operand0;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	operand0);
}

rtx
gen_tablejump (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  rtx dest;

  if (operands[0])		/* eliminate unused code warnings */
    {
      if (GET_MODE (operands[0]) != Pmode)
	abort ();

      if (! flag_pic)
	{
	  if (!TARGET_LONG64)
	    emit_jump_insn (gen_tablejump_internal1 (operands[0], operands[1]));
	  else
	    emit_jump_insn (gen_tablejump_internal2 (operands[0], operands[1]));
	}
      else
	{
	  if (!TARGET_LONG64)
	    emit_jump_insn (gen_tablejump_internal3 (operands[0], operands[1]));
	  else
	    emit_jump_insn (gen_tablejump_internal4 (operands[0], operands[1]));
	}

      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	operand0));
  emit_insn (gen_rtx (USE, VOIDmode,
	gen_rtx (LABEL_REF, VOIDmode,
	operand1)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_tablejump_internal1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx (USE, VOIDmode,
	gen_rtx (LABEL_REF, VOIDmode,
	operand1))));
}

rtx
gen_tablejump_internal2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx (USE, VOIDmode,
	gen_rtx (LABEL_REF, VOIDmode,
	operand1))));
}

rtx
gen_tablejump_internal3 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (PLUS, SImode,
	operand0,
	gen_rtx (LABEL_REF, SImode,
	operand1)));
}

rtx
gen_tablejump_internal4 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (PLUS, DImode,
	operand0,
	gen_rtx (LABEL_REF, DImode,
	operand1)));
}

rtx
gen_casesi (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  rtx operand5;
  rtx operands[6];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;
  operands[4] = operand4;

{
  /* We need slightly different code for eight byte table entries.  */
  if (TARGET_LONG64)
    abort ();

  if (operands[0])
    {
      rtx reg = gen_reg_rtx (SImode);

      /* If the index is too large, go to the default label.  */
      emit_insn (gen_subsi3 (reg, operands[0], operands[1]));
      emit_insn (gen_cmpsi (reg, operands[2]));
      emit_insn (gen_bgtu (operands[4]));

      /* Do the PIC jump.  */
      emit_insn (gen_casesi_internal (reg, operands[3], gen_reg_rtx (SImode)));

      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand5,
	gen_rtx (MINUS, SImode,
	operand0,
	operand1)));
  emit_insn (gen_rtx (SET, VOIDmode,
	cc0_rtx,
	gen_rtx (COMPARE, CCmode,
	operand5,
	operand2)));
  emit_jump_insn (gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (IF_THEN_ELSE, VOIDmode,
	gen_rtx (GTU, VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx (LABEL_REF, VOIDmode,
	operand4),
	pc_rtx)));
  emit_jump_insn (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (MEM, SImode,
	gen_rtx (PLUS, SImode,
	gen_rtx (MULT, SImode,
	operand5,
	GEN_INT (4)),
	gen_rtx (LABEL_REF, VOIDmode,
	operand3)))),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, SImode,
	31)))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_casesi_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	pc_rtx,
	gen_rtx (MEM, SImode,
	gen_rtx (PLUS, SImode,
	gen_rtx (MULT, SImode,
	operand0,
	GEN_INT (4)),
	gen_rtx (LABEL_REF, VOIDmode,
	operand1)))),
		gen_rtx (CLOBBER, VOIDmode,
	operand2),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, SImode,
	31))));
}

rtx
gen_nonlocal_goto_receiver ()
{
  rtx _val = 0;
  start_sequence ();

{
  emit_insn (gen_blockage ());
}
  emit_insn (const0_rtx);
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_builtin_setjmp_receiver ()
{
  rtx _val = 0;
  start_sequence ();

{
  emit_insn (gen_loadgp (gen_rtx (SYMBOL_REF, Pmode, "__dummy")));
  emit_insn (gen_blockage ());
}
  emit_insn (const0_rtx);
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_prologue ()
{
  rtx _val = 0;
  start_sequence ();

{
  if (mips_isa >= 0)		/* avoid unused code warnings */
    {
      mips_expand_prologue ();
      DONE;
    }
}
  emit_insn (const1_rtx);
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_blockage ()
{
  return gen_rtx (UNSPEC_VOLATILE, VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

rtx
gen_epilogue ()
{
  rtx _val = 0;
  start_sequence ();

{
  if (mips_isa >= 0)            /* avoid unused code warnings */
    {
      mips_expand_epilogue ();
      DONE;
    }
}
  emit_insn (GEN_INT (2));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_return ()
{
  return gen_rtx (RETURN, VOIDmode);
}

rtx
gen_return_internal ()
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (USE, VOIDmode,
	gen_rtx (REG, SImode,
	31)),
		gen_rtx (RETURN, VOIDmode)));
}

rtx
gen_get_fnaddr (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (UNSPEC, VOIDmode,
	gen_rtvec (1,
		operand1),
	1)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, SImode,
	31))));
}

rtx
gen_call (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  rtx addr;

  if (operands[0])		/* eliminate unused code warnings */
    {
      addr = XEXP (operands[0], 0);
      if ((GET_CODE (addr) != REG && (!CONSTANT_ADDRESS_P (addr) || TARGET_LONG_CALLS))
	  || ! call_insn_operand (addr, VOIDmode))
	XEXP (operands[0], 0) = copy_to_mode_reg (Pmode, addr);

      /* In order to pass small structures by value in registers
	 compatibly with the MIPS compiler, we need to shift the value
	 into the high part of the register.  Function_arg has encoded
	 a PARALLEL rtx, holding a vector of adjustments to be made
	 as the next_arg_reg variable, so we split up the insns,
	 and emit them separately.  */

      if (operands[2] != (rtx)0 && GET_CODE (operands[2]) == PARALLEL)
	{
	  rtvec adjust = XVEC (operands[2], 0);
	  int num = GET_NUM_ELEM (adjust);
	  int i;

	  for (i = 0; i < num; i++)
	    emit_insn (RTVEC_ELT (adjust, i));
	}

      emit_call_insn (gen_call_internal0 (operands[0], operands[1],
					  gen_rtx (REG, SImode, GP_REG_FIRST + 31)));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_call_insn (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (4,
		gen_rtx (CALL, VOIDmode,
	operand0,
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, SImode,
	31)),
		gen_rtx (USE, VOIDmode,
	operand2),
		gen_rtx (USE, VOIDmode,
	operand3))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_call_internal0 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (2,
		gen_rtx (CALL, VOIDmode,
	operand0,
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	operand2)));
}

rtx
gen_call_internal1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, VOIDmode,
	operand0),
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	operand2)));
}

rtx
gen_call_internal2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, VOIDmode,
	operand0),
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	operand2)));
}

rtx
gen_call_internal3a (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, SImode,
	operand0),
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	operand2)));
}

rtx
gen_call_internal3b (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, DImode,
	operand0),
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	operand2)));
}

rtx
gen_call_internal4a (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, SImode,
	operand0),
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	operand2)));
}

rtx
gen_call_internal4b (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, DImode,
	operand0),
	operand1),
		gen_rtx (CLOBBER, VOIDmode,
	operand2)));
}

rtx
gen_call_value (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  rtx addr;

  if (operands[0])		/* eliminate unused code warning */
    {
      addr = XEXP (operands[1], 0);
      if ((GET_CODE (addr) != REG && (!CONSTANT_ADDRESS_P (addr) || TARGET_LONG_CALLS))
	  || ! call_insn_operand (addr, VOIDmode))
	XEXP (operands[1], 0) = copy_to_mode_reg (Pmode, addr);

      /* In order to pass small structures by value in registers
	 compatibly with the MIPS compiler, we need to shift the value
	 into the high part of the register.  Function_arg has encoded
	 a PARALLEL rtx, holding a vector of adjustments to be made
	 as the next_arg_reg variable, so we split up the insns,
	 and emit them separately.  */

      if (operands[3] != (rtx)0 && GET_CODE (operands[3]) == PARALLEL)
	{
	  rtvec adjust = XVEC (operands[3], 0);
	  int num = GET_NUM_ELEM (adjust);
	  int i;

	  for (i = 0; i < num; i++)
	    emit_insn (RTVEC_ELT (adjust, i));
	}

      /* Handle Irix6 function calls that have multiple non-contiguous
	 results.  */
      if (GET_CODE (operands[0]) == PARALLEL && XVECLEN (operands[0], 0) > 1)
	{
	  emit_call_insn (gen_call_value_multiple_internal0
			  (XEXP (XVECEXP (operands[0], 0, 0), 0),
			   operands[1], operands[2],
			   XEXP (XVECEXP (operands[0], 0, 1), 0),
			   gen_rtx (REG, SImode, GP_REG_FIRST + 31)));
	  DONE;
	}

      /* We have a call returning a DImode structure in an FP reg.
	 Strip off the now unnecessary PARALLEL.  */
      if (GET_CODE (operands[0]) == PARALLEL)
	operands[0] = XEXP (XVECEXP (operands[0], 0, 0), 0);

      emit_call_insn (gen_call_value_internal0 (operands[0], operands[1], operands[2],
					        gen_rtx (REG, SImode, GP_REG_FIRST + 31)));

      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_call_insn (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, SImode,
	31)),
		gen_rtx (USE, VOIDmode,
	operand3))));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_call_value_internal0 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_call_value_internal1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, VOIDmode,
	operand1),
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_call_value_internal2 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, VOIDmode,
	operand1),
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_call_value_internal3a (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, SImode,
	operand1),
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_call_value_internal3b (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, DImode,
	operand1),
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_call_value_internal4a (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, SImode,
	operand1),
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_call_value_internal4b (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (2,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, DImode,
	operand1),
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand3)));
}

rtx
gen_call_value_multiple_internal0 (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	operand1,
	operand2)),
		gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (CALL, VOIDmode,
	operand1,
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand4)));
}

rtx
gen_call_value_multiple_internal2 (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx (PARALLEL, VOIDmode, gen_rtvec (3,
		gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, VOIDmode,
	operand1),
	operand2)),
		gen_rtx (SET, VOIDmode,
	operand3,
	gen_rtx (CALL, VOIDmode,
	gen_rtx (MEM, VOIDmode,
	operand1),
	operand2)),
		gen_rtx (CLOBBER, VOIDmode,
	operand4)));
}

rtx
gen_untyped_call (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (operands[0])		/* silence statement not reached warnings */
    {
      int i;

      emit_call_insn (gen_call (operands[0], const0_rtx, NULL, const0_rtx));

      for (i = 0; i < XVECLEN (operands[2], 0); i++)
	{
	  rtx set = XVECEXP (operands[2], 0, i);
	  emit_move_insn (SET_DEST (set), SET_SRC (set));
	}

      emit_insn (gen_blockage ());
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_call_insn (gen_rtx (PARALLEL, VOIDmode,
	gen_rtvec (3,
		gen_rtx (CALL, VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_nop ()
{
  return const0_rtx;
}

rtx
gen_movsicc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operand4;
  rtx operand5;
  rtx operands[6];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  gen_conditional_move (operands);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (IF_THEN_ELSE, SImode,
	operand5,
	operand2,
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movdicc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operand4;
  rtx operand5;
  rtx operands[6];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  gen_conditional_move (operands);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (IF_THEN_ELSE, DImode,
	operand5,
	operand2,
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movsfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operand4;
  rtx operand5;
  rtx operands[6];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  gen_conditional_move (operands);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (IF_THEN_ELSE, SFmode,
	operand5,
	operand2,
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}

rtx
gen_movdfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operand4;
  rtx operand5;
  rtx operands[6];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  gen_conditional_move (operands);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx (SET, VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx (SET, VOIDmode,
	operand0,
	gen_rtx (IF_THEN_ELSE, DFmode,
	operand5,
	operand2,
	operand3)));
 _done:
  _val = gen_sequence ();
 _fail:
  end_sequence ();
  return _val;
}



void
add_clobbers (pattern, insn_code_number)
     rtx pattern;
     int insn_code_number;
{
  int i;

  switch (insn_code_number)
    {
    case 337:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, SImode,
	31));
      break;

    case 329:
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, SImode,
	31));
      break;

    case 199:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (REG, DImode,
	1));
      break;

    case 147:
    case 146:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DFmode, 0));
      break;

    case 145:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SFmode, 0));
      break;

    case 144:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DFmode, 0));
      break;

    case 71:
    case 69:
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0));
      XVECEXP (pattern, 0, 3) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0));
      XVECEXP (pattern, 0, 4) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0));
      break;

    case 70:
    case 68:
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      XVECEXP (pattern, 0, 3) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      XVECEXP (pattern, 0, 4) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      break;

    case 53:
    case 51:
    case 45:
    case 41:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      break;

    case 79:
    case 77:
    case 75:
    case 73:
    case 39:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0));
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0));
      XVECEXP (pattern, 0, 3) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0));
      break;

    case 89:
    case 54:
    case 52:
    case 49:
    case 48:
    case 46:
    case 42:
    case 38:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0));
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, DImode, 0));
      break;

    case 88:
    case 50:
    case 47:
    case 43:
    case 34:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      break;

    case 78:
    case 76:
    case 74:
    case 72:
    case 55:
    case 36:
    case 35:
    case 33:
      XVECEXP (pattern, 0, 1) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      XVECEXP (pattern, 0, 2) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      XVECEXP (pattern, 0, 3) = gen_rtx (CLOBBER, VOIDmode,
	gen_rtx (SCRATCH, SImode, 0));
      break;

    default:
      abort ();
    }
}
