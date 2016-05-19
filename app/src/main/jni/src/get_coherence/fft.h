/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fft.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

#ifndef __FFT_H__
#define __FFT_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "get_coherence_types.h"

/* Function Declarations */
extern void b_fft(const double x[170], creal_T y[1024]);
extern void fft(const double x[170], creal_T y[1024]);

#endif

/*
 * File trailer for fft.h
 *
 * [EOF]
 */
