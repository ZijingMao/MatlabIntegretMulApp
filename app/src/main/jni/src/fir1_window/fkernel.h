/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fkernel.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

#ifndef __FKERNEL_H__
#define __FKERNEL_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "fir1_window_types.h"

/* Function Declarations */
extern void fkernel(double m, double f, const emxArray_real_T *w,
                    emxArray_real_T *b);

#endif

/*
 * File trailer for fkernel.h
 *
 * [EOF]
 */
