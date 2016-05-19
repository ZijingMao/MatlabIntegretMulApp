/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: pwelch_trans.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

#ifndef __PWELCH_TRANS_H__
#define __PWELCH_TRANS_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "get_coherence_types.h"

/* Function Declarations */
extern void pwelch_trans(const double x[768], double fs, creal_T pxx[513],
  double f[513]);

#endif

/*
 * File trailer for pwelch_trans.h
 *
 * [EOF]
 */
