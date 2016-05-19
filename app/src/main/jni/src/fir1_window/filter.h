/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: filter.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

#ifndef __FILTER_H__
#define __FILTER_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "fir1_window_types.h"

/* Function Declarations */
extern void filter(const emxArray_real_T *b, const emxArray_real_T *x, const
                   emxArray_real_T *zi, emxArray_real_T *y, emxArray_real_T *zf);

#endif

/*
 * File trailer for filter.h
 *
 * [EOF]
 */
