#include "i386/xm-sysv3.h"

#ifndef REAL_ARITHMETIC
#define REAL_VALUE_ATOF(x, mode) strtod ((x), (char **)0)
extern double strtod ();
#endif
