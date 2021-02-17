/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include <stdio.h>
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"

#define operands recog_operand

int
insn_current_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 197:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 196:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 1;
        }
      else if ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))
        {
	  return 2;
        }
      else if (which_alternative == 9)
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 195:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return 4;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 2;
        }
      else if (which_alternative == 10)
        {
	  return 4;
        }
      else if (which_alternative == 11)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 193:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 192:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else if (which_alternative == 11)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 190:
    case 187:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 189:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 174:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else if (which_alternative == 11)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || (which_alternative == 12)))))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || (which_alternative == 11))))
        {
	  return 1;
        }
      else if (which_alternative == 12)
        {
	  return 2;
        }
      else if (which_alternative == 13)
        {
	  return 1;
        }
      else if (which_alternative == 14)
        {
	  return 2;
        }
      else if ((which_alternative == 15) || ((which_alternative == 16) || (which_alternative == 17)))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 4;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return 2;
        }
      else
        {
	  return 2;
        }

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 3)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 129:
    case 128:
    case 127:
    case 126:
    case 125:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 2)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 355:
    case 353:
    case 352:
    case 349:
    case 345:
    case 344:
    case 341:
    case 325:
    case 305:
    case 303:
    case 295:
    case 293:
    case 287:
    case 285:
    case 277:
    case 275:
    case 269:
    case 267:
    case 262:
    case 260:
    case 228:
    case 218:
    case 208:
    case 119:
    case 118:
    case 117:
    case 114:
    case 31:
    case 28:
      return 2;

    case 337:
    case 231:
    case 221:
    case 211:
    case 92:
    case 18:
    case 5:
      return 4;

    case 333:
      return 0;

    case 329:
    case 89:
    case 88:
      return 6;

    case 227:
    case 217:
    case 207:
      return 12 /* 0xc */;

    case 203:
    case 201:
      return 20 /* 0x14 */;

    case 199:
    case 85:
    case 84:
    case 39:
    case 35:
      return 3;

    case 160:
    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 151:
    case 150:
    case 149:
    case 148:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 147:
    case 146:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 145:
    case 144:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 11 /* 0xb */;
        }
      else if (which_alternative == 1)
        {
	  return 9;
        }
      else if (which_alternative == 2)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 142:
    case 140:
    case 138:
    case 136:
    case 134:
    case 131:
    case 130:
    case 124:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 111:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((TARGET_64BIT) != (0))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 107:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((TARGET_64BIT) != (0))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 104:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((TARGET_64BIT) != (0))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 100:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((TARGET_64BIT) != (0))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 97:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 79:
    case 78:
    case 77:
    case 76:
      return 7;

    case 75:
    case 73:
    case 68:
      return 14 /* 0xe */;

    case 74:
    case 72:
      return 13 /* 0xd */;

    case 71:
    case 70:
      return 8;

    case 69:
      return 15 /* 0xf */;

    case 21:
    case 8:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

int
result_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 196:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 195:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 197:
    case 193:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || (which_alternative == 2)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 192:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 190:
    case 189:
    case 187:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 2) || (which_alternative == 3)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 174:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if (((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))) || ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))) || ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 2) || (which_alternative == 3)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative != 0) && (which_alternative != 1)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 129:
    case 128:
    case 127:
    case 126:
    case 125:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 3;
        }
      else if ((which_alternative != 0) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 180:
    case 179:
    case 178:
    case 177:
    case 159:
    case 142:
    case 140:
    case 138:
    case 136:
    case 134:
    case 131:
    case 130:
    case 124:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 95:
    case 94:
    case 87:
    case 86:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 83:
    case 81:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 21 /* 0x15 */;
        }
      else
        {
	  return 1;
        }

    case 82:
    case 80:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 1;
        }

    case 79:
    case 77:
    case 75:
    case 73:
    case 71:
    case 69:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))))
        {
	  return 69 /* 0x45 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 68 /* 0x44 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  return 67 /* 0x43 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  return 42 /* 0x2a */;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 35 /* 0x23 */;
        }

    case 78:
    case 76:
    case 74:
    case 72:
    case 70:
    case 68:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))
        {
	  return 69 /* 0x45 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  return 42 /* 0x2a */;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))
        {
	  return 35 /* 0x23 */;
        }
      else
        {
	  return 1;
        }

    case 67:
    case 65:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 15 /* 0xf */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 1;
        }

    case 66:
    case 64:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 61 /* 0x3d */;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  return 19 /* 0x13 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 1;
        }

    case 49:
    case 48:
    case 39:
    case 38:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 9;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 8;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 55:
    case 54:
    case 53:
    case 52:
    case 51:
    case 50:
    case 47:
    case 46:
    case 45:
    case 43:
    case 42:
    case 41:
    case 36:
    case 35:
    case 34:
    case 33:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))
        {
	  return 5;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 31:
    case 30:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 8;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))
        {
	  return 7;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))))
        {
	  return 5;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 28:
    case 27:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))
        {
	  return 8;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 6;
        }
      else
        {
	  return 5;
        }

    case 14:
    case 13:
    case 1:
    case 0:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))))))
        {
	  return 4;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

int
divide_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 83:
    case 81:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 31 /* 0x1f */;
        }
      else if (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))))
        {
	  return 54 /* 0x36 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 82:
    case 80:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 60 /* 0x3c */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 67:
    case 65:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 15 /* 0xf */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 12 /* 0xc */;
        }
      else if (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))))
        {
	  return 23 /* 0x17 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 66:
    case 64:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 61 /* 0x3d */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 19 /* 0x13 */;
        }
      else if (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 112 /* 0x70 */;

    }
}

unsigned int
divide_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 786544 /* 0xc0070 */;

    }
}

int
mult_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 31:
    case 30:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 5;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 4;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))))
        {
	  return 7;
        }
      else
        {
	  return 8;
        }

    case 28:
    case 27:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 5;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 6;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 5;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 8;

    }
}

unsigned int
mult_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 262152 /* 0x40008 */;

    }
}

int
adder_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))
        {
	  return 2;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 1;
        }
      else if (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))))
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 95:
    case 94:
    case 87:
    case 86:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))))
        {
	  return 1;
        }
      else if (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 14:
    case 13:
    case 1:
    case 0:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

unsigned int
adder_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65540 /* 0x10004 */;

    }
}

int
imuldiv_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 190:
    case 187:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 189:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14))))))))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 95:
    case 94:
    case 87:
    case 86:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 79:
    case 77:
    case 75:
    case 73:
    case 71:
    case 69:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 68 /* 0x44 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  return 67 /* 0x43 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  return 42 /* 0x2a */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 78:
    case 76:
    case 74:
    case 72:
    case 70:
    case 68:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  return 35 /* 0x23 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  return 42 /* 0x2a */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 49:
    case 48:
    case 39:
    case 38:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 8;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 9;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  return 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 4;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 55:
    case 54:
    case 53:
    case 52:
    case 51:
    case 50:
    case 47:
    case 46:
    case 45:
    case 43:
    case 42:
    case 41:
    case 36:
    case 35:
    case 34:
    case 33:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 5;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 5;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  return 1;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 4;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 31:
    case 30:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 5;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 28:
    case 27:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 8;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 14:
    case 13:
    case 1:
    case 0:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 3;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 69 /* 0x45 */;

    }
}

unsigned int
imuldiv_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65605 /* 0x10045 */;

    }
}

int
memory_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 196:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 195:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10)))))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 197:
    case 193:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || (which_alternative == 2))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 192:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10))))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 190:
    case 189:
    case 187:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 174:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12)))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12)))))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7)))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5)))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 3;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 204:
    case 203:
    case 201:
    case 184:
    case 183:
    case 182:
    case 181:
    case 160:
      return 1;

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 0) || (which_alternative == 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 0) || (which_alternative == 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 0) || (which_alternative == 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 0) || (which_alternative == 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 0) || (which_alternative == 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 0) || (which_alternative == 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 0) || (which_alternative == 1))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 0) && (which_alternative != 1)) || ((which_alternative == 0) || (which_alternative == 1)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 129:
    case 128:
    case 127:
    case 126:
    case 125:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (which_alternative == 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (which_alternative == 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (which_alternative == 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (which_alternative == 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (which_alternative == 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (which_alternative == 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (which_alternative == 0)) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 180:
    case 179:
    case 178:
    case 177:
    case 159:
    case 142:
    case 140:
    case 138:
    case 136:
    case 134:
    case 131:
    case 130:
    case 124:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

unsigned int
memory_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 196:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 195:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 197:
    case 193:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 1) || (which_alternative == 2))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 1) || (which_alternative == 2)))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 192:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7)))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 190:
    case 189:
    case 187:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 174:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7)))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative == 2) || (which_alternative == 3))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative == 2) || (which_alternative == 3)))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && ((which_alternative != 0) && (which_alternative != 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && ((which_alternative != 0) && (which_alternative != 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && ((which_alternative != 0) && (which_alternative != 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && ((which_alternative != 0) && (which_alternative != 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && ((which_alternative != 0) && (which_alternative != 1))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && ((which_alternative != 0) && (which_alternative != 1))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && (which_alternative != 1)))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && ((which_alternative != 0) && (which_alternative != 1)))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 129:
    case 128:
    case 127:
    case 126:
    case 125:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) && (which_alternative != 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) && (which_alternative != 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) && (which_alternative != 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) && (which_alternative != 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) && (which_alternative != 0)) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) && (which_alternative != 0)) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && (which_alternative != 0))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))) && (which_alternative != 0))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 180:
    case 179:
    case 178:
    case 177:
    case 159:
    case 142:
    case 140:
    case 138:
    case 136:
    case 134:
    case 131:
    case 130:
    case 124:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65537 /* 0x10001 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65539 /* 0x10003 */;

    }
}

int
function_units_used (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 197:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || (which_alternative == 2)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((which_alternative != 1) && (which_alternative != 2))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 196:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if ((((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 195:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if ((((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 193:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 1) || (which_alternative == 2)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 0;
        }
      else if ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 192:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if ((((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 190:
    case 187:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))) || ((((which_alternative == 4) || (which_alternative == 5)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative != 4) && (which_alternative != 5)) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 189:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))) || ((((which_alternative == 4) || (which_alternative == 5)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative != 4) && (which_alternative != 5)) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 174:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || ((((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if (((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && (((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 8) && (which_alternative != 9)) && (((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || ((((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14))))))))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 8) && (which_alternative != 9)) && (((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14)))))))))))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 4) || (which_alternative == 5)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 4) && (which_alternative != 5)) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5)))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if ((which_alternative == 1) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else if ((which_alternative == 0) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 127:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 0;
        }
      else if ((which_alternative == 0) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 129:
    case 126:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if ((which_alternative == 0) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 128:
    case 125:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && (((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000)))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 0;
        }
      else if ((which_alternative == 0) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 204:
    case 203:
    case 201:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 177:
    case 160:
    case 159:
    case 142:
    case 140:
    case 138:
    case 136:
    case 134:
    case 131:
    case 130:
    case 124:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))))))
        {
	  return 0;
        }
      else
        {
	  return 2;
        }

    case 83:
    case 82:
    case 81:
    case 80:
    case 67:
    case 66:
    case 65:
    case 64:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 79:
    case 78:
    case 77:
    case 76:
    case 75:
    case 74:
    case 73:
    case 72:
    case 71:
    case 70:
    case 69:
    case 68:
    case 55:
    case 54:
    case 53:
    case 52:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 43:
    case 42:
    case 41:
    case 39:
    case 38:
    case 36:
    case 35:
    case 34:
    case 33:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 31:
    case 30:
    case 28:
    case 27:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 95:
    case 94:
    case 87:
    case 86:
    case 14:
    case 13:
    case 1:
    case 0:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && (! ((mips_cpu_attr) == (CPU_R5000))))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    }
}

int
num_delay_slots (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 355:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 337:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 336:
    case 335:
    case 329:
    case 327:
    case 325:
    case 323:
    case 322:
    case 320:
    case 319:
    case 317:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_abicalls
get_attr_abicalls ()
{
}

enum attr_branch_likely
get_attr_branch_likely ()
{
}

enum attr_cpu
get_attr_cpu ()
{
}

enum attr_dslot
get_attr_dslot (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 196:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 195:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 197:
    case 193:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 192:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 190:
    case 187:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) || (((which_alternative == 6) || (which_alternative == 7)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7))))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 189:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) || (((which_alternative == 6) || (which_alternative == 7)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 174:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || (((which_alternative == 8) || (which_alternative == 9)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || (((which_alternative == 8) || (which_alternative == 9)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14)))))))))))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 132:
    case 129:
    case 128:
    case 127:
    case 126:
    case 125:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 0)
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 355:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 337:
    case 336:
    case 335:
    case 329:
    case 327:
    case 325:
    case 323:
    case 322:
    case 320:
    case 319:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 180:
    case 179:
    case 178:
    case 177:
    case 159:
    case 142:
    case 140:
    case 138:
    case 136:
    case 134:
    case 131:
    case 130:
    case 124:
      return DSLOT_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return DSLOT_NO;

    }
}

enum attr_mode
get_attr_mode (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 315:
    case 316:
      return MODE_FPSW;

    case 0:
    case 13:
    case 27:
    case 28:
    case 56:
    case 58:
    case 60:
    case 62:
    case 64:
    case 66:
    case 80:
    case 82:
    case 86:
    case 94:
    case 143:
    case 144:
    case 146:
    case 148:
    case 149:
    case 179:
    case 180:
    case 183:
    case 184:
    case 195:
    case 196:
    case 197:
    case 366:
    case 367:
      return MODE_DF;

    case 1:
    case 14:
    case 30:
    case 31:
    case 57:
    case 59:
    case 61:
    case 63:
    case 65:
    case 67:
    case 81:
    case 83:
    case 87:
    case 95:
    case 113:
    case 145:
    case 147:
    case 150:
    case 151:
    case 177:
    case 178:
    case 181:
    case 182:
    case 192:
    case 193:
    case 364:
    case 365:
      return MODE_SF;

    case 5:
    case 8:
    case 11:
    case 18:
    case 21:
    case 24:
    case 25:
    case 38:
    case 39:
    case 48:
    case 49:
    case 69:
    case 71:
    case 73:
    case 75:
    case 77:
    case 79:
    case 85:
    case 89:
    case 92:
    case 93:
    case 97:
    case 100:
    case 102:
    case 104:
    case 107:
    case 109:
    case 111:
    case 124:
    case 126:
    case 129:
    case 130:
    case 131:
    case 132:
    case 134:
    case 142:
    case 164:
    case 166:
    case 199:
    case 208:
    case 211:
    case 214:
    case 217:
    case 218:
    case 221:
    case 224:
    case 227:
    case 228:
    case 231:
    case 234:
    case 259:
    case 262:
    case 266:
    case 269:
    case 273:
    case 277:
    case 281:
    case 284:
    case 287:
    case 291:
    case 295:
    case 299:
    case 302:
    case 305:
    case 361:
    case 362:
    case 363:
      return MODE_DI;

    case 115:
    case 122:
    case 127:
    case 186:
    case 187:
      return MODE_HI;

    case 116:
    case 189:
    case 190:
      return MODE_QI;

    case 201:
    case 203:
    case 204:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
    case 317:
    case 319:
    case 320:
    case 322:
    case 323:
    case 325:
    case 327:
    case 329:
    case 333:
    case 335:
    case 336:
    case 337:
    case 340:
    case 341:
    case 342:
    case 343:
    case 344:
    case 345:
    case 348:
    case 349:
    case 350:
    case 351:
    case 352:
    case 353:
    case 355:
    case 357:
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 161:
      return MODE_UNKNOWN;

    default:
      return MODE_SI;

    }
}

enum attr_type
get_attr_type (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 196:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5))))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 195:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 197:
    case 193:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 192:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_XFER;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 190:
    case 187:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 189:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 174:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 8) || (which_alternative == 9))
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 8) || (which_alternative == 9))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 11) || (which_alternative == 12))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 13) || (which_alternative == 14))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_HILO;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 129:
    case 128:
    case 127:
    case 126:
    case 125:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 357:
      return TYPE_NOP;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 84:
    case 85:
    case 88:
    case 89:
      return TYPE_MULTI;

    case 80:
    case 81:
    case 82:
    case 83:
      return TYPE_FSQRT;

    case 113:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
      return TYPE_FCVT;

    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 315:
    case 316:
      return TYPE_FCMP;

    case 94:
    case 95:
      return TYPE_FNEG;

    case 86:
    case 87:
      return TYPE_FABS;

    case 64:
    case 65:
    case 66:
    case 67:
      return TYPE_FDIV;

    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
      return TYPE_FMADD;

    case 27:
    case 28:
    case 30:
    case 31:
      return TYPE_FMUL;

    case 0:
    case 1:
    case 13:
    case 14:
      return TYPE_FADD;

    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
      return TYPE_IDIV;

    case 33:
    case 34:
    case 35:
    case 36:
    case 38:
    case 39:
    case 41:
    case 42:
    case 43:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
      return TYPE_IMUL;

    case 5:
    case 8:
    case 11:
    case 18:
    case 21:
    case 24:
    case 92:
    case 97:
    case 100:
    case 104:
    case 107:
    case 111:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 207:
    case 208:
    case 211:
    case 217:
    case 218:
    case 221:
    case 227:
    case 228:
    case 231:
      return TYPE_DARITH;

    case 161:
    case 199:
    case 358:
    case 359:
    case 360:
    case 361:
    case 362:
    case 363:
    case 364:
    case 365:
    case 366:
    case 367:
      return TYPE_MOVE;

    case 160:
    case 181:
    case 182:
    case 183:
    case 184:
    case 201:
    case 203:
    case 204:
      return TYPE_STORE;

    case 124:
    case 130:
    case 131:
    case 134:
    case 136:
    case 138:
    case 140:
    case 142:
    case 159:
    case 177:
    case 178:
    case 179:
    case 180:
      return TYPE_LOAD;

    case 337:
    case 340:
    case 341:
    case 342:
    case 343:
    case 344:
    case 345:
    case 348:
    case 349:
    case 350:
    case 351:
    case 352:
    case 353:
    case 355:
      return TYPE_CALL;

    case 317:
    case 319:
    case 320:
    case 322:
    case 323:
    case 325:
    case 327:
    case 329:
    case 335:
    case 336:
      return TYPE_JUMP;

    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
      return TYPE_BRANCH;

    case 333:
      return TYPE_UNKNOWN;

    default:
      return TYPE_ARITH;

    }
}

int
eligible_for_delay (delay_insn, slot, candidate_insn, flags)
     rtx delay_insn;
     int slot;
     rtx candidate_insn;
     int flags;
{
  rtx insn;

  if (slot >= 1)
    abort ();

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 355:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 337:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 336:
    case 335:
    case 329:
    case 327:
    case 325:
    case 323:
    case 322:
    case 320:
    case 319:
    case 317:
      slot += 2 * 1;
      break;
      break;

    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
      slot += 1 * 1;
      break;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  if (slot < 1)
    abort ();

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case 196:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 193:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 192:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 190:
        case 187:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 189:
        case 186:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 174:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))) && ((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10))) && ((which_alternative != 6) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14))))))))))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 166:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 147:
        case 146:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 195:
        case 132:
        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 111:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 107:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 104:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 100:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 97:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 367:
        case 366:
        case 365:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
        case 357:
        case 302:
        case 301:
        case 299:
        case 298:
        case 291:
        case 290:
        case 284:
        case 283:
        case 281:
        case 280:
        case 273:
        case 272:
        case 266:
        case 265:
        case 259:
        case 258:
        case 234:
        case 225:
        case 224:
        case 215:
        case 214:
        case 205:
        case 204:
        case 184:
        case 183:
        case 182:
        case 181:
        case 162:
        case 161:
        case 143:
        case 122:
        case 121:
        case 120:
        case 116:
        case 115:
        case 113:
        case 110:
        case 109:
        case 106:
        case 103:
        case 102:
        case 99:
        case 96:
        case 95:
        case 94:
        case 93:
        case 90:
        case 87:
        case 86:
        case 83:
        case 82:
        case 81:
        case 80:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 43:
        case 42:
        case 41:
        case 38:
        case 36:
        case 34:
        case 33:
        case 30:
        case 27:
        case 25:
        case 24:
        case 16:
        case 14:
        case 13:
        case 12:
        case 11:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case 196:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 193:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 192:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 190:
        case 187:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 189:
        case 186:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 174:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))) && ((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10))) && ((which_alternative != 6) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14))))))))))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 166:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 147:
        case 146:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 195:
        case 132:
        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 111:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 107:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 104:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 100:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 97:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 367:
        case 366:
        case 365:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
        case 357:
        case 302:
        case 301:
        case 299:
        case 298:
        case 291:
        case 290:
        case 284:
        case 283:
        case 281:
        case 280:
        case 273:
        case 272:
        case 266:
        case 265:
        case 259:
        case 258:
        case 234:
        case 225:
        case 224:
        case 215:
        case 214:
        case 205:
        case 204:
        case 184:
        case 183:
        case 182:
        case 181:
        case 162:
        case 161:
        case 143:
        case 122:
        case 121:
        case 120:
        case 116:
        case 115:
        case 113:
        case 110:
        case 109:
        case 106:
        case 103:
        case 102:
        case 99:
        case 96:
        case 95:
        case 94:
        case 93:
        case 90:
        case 87:
        case 86:
        case 83:
        case 82:
        case 81:
        case 80:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 43:
        case 42:
        case 41:
        case 38:
        case 36:
        case 34:
        case 33:
        case 30:
        case 27:
        case 25:
        case 24:
        case 16:
        case 14:
        case 13:
        case 12:
        case 11:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 196:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 193:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 192:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 190:
        case 187:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 189:
        case 186:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 174:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))) && ((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10))) && ((which_alternative != 6) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14))))))))))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 166:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 147:
        case 146:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 195:
        case 132:
        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 111:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 107:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 104:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 100:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 97:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 367:
        case 366:
        case 365:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
        case 357:
        case 302:
        case 301:
        case 299:
        case 298:
        case 291:
        case 290:
        case 284:
        case 283:
        case 281:
        case 280:
        case 273:
        case 272:
        case 266:
        case 265:
        case 259:
        case 258:
        case 234:
        case 225:
        case 224:
        case 215:
        case 214:
        case 205:
        case 204:
        case 184:
        case 183:
        case 182:
        case 181:
        case 162:
        case 161:
        case 143:
        case 122:
        case 121:
        case 120:
        case 116:
        case 115:
        case 113:
        case 110:
        case 109:
        case 106:
        case 103:
        case 102:
        case 99:
        case 96:
        case 95:
        case 94:
        case 93:
        case 90:
        case 87:
        case 86:
        case 83:
        case 82:
        case 81:
        case 80:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 43:
        case 42:
        case 41:
        case 38:
        case 36:
        case 34:
        case 33:
        case 30:
        case 27:
        case 25:
        case 24:
        case 16:
        case 14:
        case 13:
        case 12:
        case 11:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    default:
      abort ();
    }
}

int
eligible_for_annul_false (delay_insn, slot, candidate_insn, flags)
     rtx delay_insn;
     int slot;
     rtx candidate_insn;
     int flags;
{
  rtx insn;

  if (slot >= 1)
    abort ();

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 355:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 337:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 336:
    case 335:
    case 329:
    case 327:
    case 325:
    case 323:
    case 322:
    case 320:
    case 319:
    case 317:
      slot += 2 * 1;
      break;
      break;

    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
      slot += 1 * 1;
      break;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  if (slot < 1)
    abort ();

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 196:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 193:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 192:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 190:
        case 187:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((which_alternative != 3) && (which_alternative != 5))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 189:
        case 186:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 174:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))) && ((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10))) && ((which_alternative != 6) && (which_alternative != 7))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14))))))))))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 166:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 147:
        case 146:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (which_alternative == 1))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 195:
        case 132:
        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (which_alternative == 0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 111:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((TARGET_64BIT) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 107:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((TARGET_64BIT) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 104:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((TARGET_64BIT) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 100:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((TARGET_64BIT) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 97:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 367:
        case 366:
        case 365:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
        case 357:
        case 302:
        case 301:
        case 299:
        case 298:
        case 291:
        case 290:
        case 284:
        case 283:
        case 281:
        case 280:
        case 273:
        case 272:
        case 266:
        case 265:
        case 259:
        case 258:
        case 234:
        case 225:
        case 224:
        case 215:
        case 214:
        case 205:
        case 204:
        case 184:
        case 183:
        case 182:
        case 181:
        case 162:
        case 161:
        case 143:
        case 122:
        case 121:
        case 120:
        case 116:
        case 115:
        case 113:
        case 110:
        case 109:
        case 106:
        case 103:
        case 102:
        case 99:
        case 96:
        case 95:
        case 94:
        case 93:
        case 90:
        case 87:
        case 86:
        case 83:
        case 82:
        case 81:
        case 80:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 43:
        case 42:
        case 41:
        case 38:
        case 36:
        case 34:
        case 33:
        case 30:
        case 27:
        case 25:
        case 24:
        case 16:
        case 14:
        case 13:
        case 12:
        case 11:
        case 3:
        case 1:
        case 0:
	  if (((GENERATE_BRANCHLIKELY) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 0;

      }
    default:
      abort ();
    }
}

static int
divide_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 83:
    case 81:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))
        {
	  casenum = 9;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 10 /* 0xa */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else
        {
	  casenum = 14 /* 0xe */;
        }
      break;

    case 82:
    case 80:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 13 /* 0xd */;
        }
      else
        {
	  casenum = 14 /* 0xe */;
        }
      break;

    case 67:
    case 65:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 0;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 1;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  casenum = 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 14 /* 0xe */;
        }
      break;

    case 66:
    case 64:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))))))))
        {
	  casenum = 5;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 6;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  casenum = 7;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 14 /* 0xe */;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 14 /* 0xe */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 23 /* 0x17 */;

    case 1:
      return 12 /* 0xc */;

    case 2:
      return 15 /* 0xf */;

    case 3:
      return 32 /* 0x20 */;

    case 4:
      return 21 /* 0x15 */;

    case 5:
      return 36 /* 0x24 */;

    case 6:
      return 19 /* 0x13 */;

    case 7:
      return 16 /* 0x10 */;

    case 8:
      return 61 /* 0x3d */;

    case 9:
      return 54 /* 0x36 */;

    case 10:
      return 31 /* 0x1f */;

    case 11:
      return 21 /* 0x15 */;

    case 12:
      return 112 /* 0x70 */;

    case 13:
      return 60 /* 0x3c */;

    case 14:
      return 36 /* 0x24 */;

    }
}

static int
mult_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 31:
    case 30:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 0;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))
        {
	  casenum = 1;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  casenum = 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 6;
        }
      break;

    case 28:
    case 27:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))
        {
	  casenum = 4;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 6;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 6;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 7;

    case 1:
      return 4;

    case 2:
      return 5;

    case 3:
      return 8;

    case 4:
      return 8;

    case 5:
      return 5;

    case 6:
      return 6;

    }
}

static int
adder_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))
        {
	  casenum = 0;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))))
        {
	  casenum = 1;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 95:
    case 94:
    case 87:
    case 86:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 14:
    case 13:
    case 1:
    case 0:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))))))
        {
	  casenum = 3;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((mips_cpu_attr) == (CPU_R6000))))))
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 7;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 1;

    case 3:
      return 4;

    case 4:
      return 2;

    case 5:
      return 3;

    case 6:
      return 2;

    case 7:
      return 1;

    }
}

static int
imuldiv_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 189:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 190:
    case 187:
    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 95:
    case 94:
    case 87:
    case 86:
      casenum = 22 /* 0x16 */;
      break;

    case 79:
    case 77:
    case 75:
    case 73:
    case 71:
    case 69:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 10 /* 0xa */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  casenum = 16 /* 0x10 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  casenum = 18 /* 0x12 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 20 /* 0x14 */;
        }
      else
        {
	  casenum = 26 /* 0x1a */;
        }
      break;

    case 78:
    case 76:
    case 74:
    case 72:
    case 70:
    case 68:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 10 /* 0xa */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  casenum = 15 /* 0xf */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  casenum = 17 /* 0x11 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 19 /* 0x13 */;
        }
      else
        {
	  casenum = 26 /* 0x1a */;
        }
      break;

    case 49:
    case 48:
    case 39:
    case 38:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  casenum = 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  casenum = 6;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  casenum = 8;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 26 /* 0x1a */;
        }
      break;

    case 55:
    case 54:
    case 53:
    case 52:
    case 51:
    case 50:
    case 47:
    case 46:
    case 45:
    case 43:
    case 42:
    case 41:
    case 36:
    case 35:
    case 34:
    case 33:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  casenum = 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  casenum = 5;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 26 /* 0x1a */;
        }
      break;

    case 31:
    case 30:
      casenum = 23 /* 0x17 */;
      break;

    case 28:
    case 27:
      casenum = 24 /* 0x18 */;
      break;

    case 14:
    case 13:
    case 1:
    case 0:
      casenum = 21 /* 0x15 */;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 26 /* 0x1a */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 17 /* 0x11 */;

    case 2:
      return 12 /* 0xc */;

    case 3:
      return 10 /* 0xa */;

    case 4:
      return 4;

    case 5:
      return 1;

    case 6:
      return 4;

    case 7:
      return 5;

    case 8:
      return 8;

    case 9:
      return 9;

    case 10:
      return 38 /* 0x26 */;

    case 11:
      return 35 /* 0x23 */;

    case 12:
      return 42 /* 0x2a */;

    case 13:
      return 36 /* 0x24 */;

    case 14:
      return 69 /* 0x45 */;

    case 15:
      return 35 /* 0x23 */;

    case 16:
      return 67 /* 0x43 */;

    case 17:
      return 37 /* 0x25 */;

    case 18:
      return 69 /* 0x45 */;

    case 19:
      return 36 /* 0x24 */;

    case 20:
      return 68 /* 0x44 */;

    case 21:
      return 3;

    case 22:
      return 1;

    case 23:
      return 5;

    case 24:
      return 8;

    case 26:
      return 58 /* 0x3a */;

    }
}

static int
imuldiv_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 189:
    case 186:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 190:
    case 187:
    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 95:
    case 94:
    case 87:
    case 86:
      casenum = 22 /* 0x16 */;
      break;

    case 79:
    case 77:
    case 75:
    case 73:
    case 71:
    case 69:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 10 /* 0xa */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  casenum = 16 /* 0x10 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  casenum = 18 /* 0x12 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 20 /* 0x14 */;
        }
      else
        {
	  casenum = 26 /* 0x1a */;
        }
      break;

    case 78:
    case 76:
    case 74:
    case 72:
    case 70:
    case 68:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 10 /* 0xa */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  casenum = 15 /* 0xf */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  casenum = 17 /* 0x11 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 19 /* 0x13 */;
        }
      else
        {
	  casenum = 26 /* 0x1a */;
        }
      break;

    case 49:
    case 48:
    case 39:
    case 38:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  casenum = 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  casenum = 6;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  casenum = 8;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 26 /* 0x1a */;
        }
      break;

    case 55:
    case 54:
    case 53:
    case 52:
    case 51:
    case 50:
    case 47:
    case 46:
    case 45:
    case 43:
    case 42:
    case 41:
    case 36:
    case 35:
    case 34:
    case 33:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))))
        {
	  casenum = 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  casenum = 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))
        {
	  casenum = 5;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 26 /* 0x1a */;
        }
      break;

    case 31:
    case 30:
      casenum = 23 /* 0x17 */;
      break;

    case 28:
    case 27:
      casenum = 24 /* 0x18 */;
      break;

    case 14:
    case 13:
    case 1:
    case 0:
      casenum = 21 /* 0x15 */;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 26 /* 0x1a */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 17 /* 0x11 */;

    case 2:
      return 12 /* 0xc */;

    case 3:
      return 10 /* 0xa */;

    case 4:
      return 4;

    case 5:
      return 1;

    case 6:
      return 4;

    case 7:
      return 5;

    case 8:
      return 8;

    case 9:
      return 9;

    case 10:
      return 38 /* 0x26 */;

    case 11:
      return 35 /* 0x23 */;

    case 12:
      return 42 /* 0x2a */;

    case 13:
      return 36 /* 0x24 */;

    case 14:
      return 69 /* 0x45 */;

    case 15:
      return 35 /* 0x23 */;

    case 16:
      return 67 /* 0x43 */;

    case 17:
      return 37 /* 0x25 */;

    case 18:
      return 69 /* 0x45 */;

    case 19:
      return 36 /* 0x24 */;

    case 20:
      return 68 /* 0x44 */;

    case 21:
      return 3;

    case 22:
      return 1;

    case 23:
      return 5;

    case 24:
      return 8;

    case 26:
      return 58 /* 0x3a */;

    }
}

static int
memory_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 196:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 195:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10)))))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 197:
    case 193:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || (which_alternative == 2)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 192:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10)))))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 174:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 172:
    case 166:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 190:
    case 189:
    case 187:
    case 186:
    case 164:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 2) || (which_alternative == 3)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 204:
    case 203:
    case 201:
    case 184:
    case 183:
    case 182:
    case 181:
    case 160:
      casenum = 2;
      break;

    case 132:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 129:
    case 128:
    case 127:
    case 126:
    case 125:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 180:
    case 179:
    case 178:
    case 177:
    case 159:
    case 142:
    case 140:
    case 138:
    case 136:
    case 134:
    case 131:
    case 130:
    case 124:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      switch (recog_memoized (insn))
	{
        case 196:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 195:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 197:
        case 193:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 2)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 192:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 190:
        case 189:
        case 187:
        case 186:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 2) || (which_alternative == 3)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 174:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 166:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 164:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 132:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 180:
        case 179:
        case 178:
        case 177:
        case 159:
        case 142:
        case 140:
        case 138:
        case 136:
        case 134:
        case 131:
        case 130:
        case 124:
	  if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 3;

      }

    case 1:
      switch (recog_memoized (insn))
	{
        case 196:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 195:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 197:
        case 193:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 2)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 192:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 190:
        case 189:
        case 187:
        case 186:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 2) || (which_alternative == 3)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 174:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 166:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 164:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || (which_alternative == 3)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 132:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 180:
        case 179:
        case 178:
        case 177:
        case 159:
        case 142:
        case 140:
        case 138:
        case 136:
        case 134:
        case 131:
        case 130:
        case 124:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    case 2:
      return 1;

    case 3:
      switch (recog_memoized (insn))
	{
        case 196:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 195:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 197:
        case 193:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 2)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 192:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 190:
        case 189:
        case 187:
        case 186:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 2) || (which_alternative == 3)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 174:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600)))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 166:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 164:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || (which_alternative == 3)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 132:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000)))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((! ((mips_cpu_attr) == (CPU_R4650))) && ((mips_cpu_attr) == (CPU_R5000))))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((mips_cpu_attr) == (CPU_R4300)))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4100))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R3900))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4100))) && ((! ((mips_cpu_attr) == (CPU_R4300))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R3900)))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 180:
        case 179:
        case 178:
        case 177:
        case 159:
        case 142:
        case 140:
        case 138:
        case 136:
        case 134:
        case 131:
        case 130:
        case 124:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    }
}

struct function_unit_desc function_units[] = {
  {"memory", 1, 1, 0, 1, 1, memory_unit_ready_cost, 0, 3, memory_unit_blockage_range, memory_unit_blockage}, 
  {"imuldiv", 2, 1, 0, 0, 69, imuldiv_unit_ready_cost, imuldiv_unit_conflict_cost, 69, imuldiv_unit_blockage_range, imuldiv_unit_blockage}, 
  {"adder", 4, 1, 1, 1, 1, adder_unit_ready_cost, 0, 4, adder_unit_blockage_range, adder_unit_blockage}, 
  {"mult", 8, 1, 1, 1, 1, mult_unit_ready_cost, 0, 8, mult_unit_blockage_range, mult_unit_blockage}, 
  {"divide", 16, 1, 1, 1, 1, divide_unit_ready_cost, 0, 112, divide_unit_blockage_range, divide_unit_blockage}, 
};

int
const_num_delay_slots (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}
