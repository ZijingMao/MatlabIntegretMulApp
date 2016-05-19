/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cpsd_trans.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

#ifndef __CPSD_TRANS_H__
#define __CPSD_TRANS_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "get_coherence_types.h"

/* Function Declarations */
extern void cpsd_trans(const double x[768], const double y[768], double fs,
  double Cxy[513], double f[513]);

#endif

/*
 * File trailer for cpsd_trans.h
 *
 * [EOF]
 */
