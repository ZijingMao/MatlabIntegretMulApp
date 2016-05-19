/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: compute_psd.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

#ifndef __COMPUTE_PSD_H__
#define __COMPUTE_PSD_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "get_coherence_types.h"

/* Function Declarations */
extern void compute_psd(const creal_T Sxx[1024], double Fs, creal_T Pxx[513]);

#endif

/*
 * File trailer for compute_psd.h
 *
 * [EOF]
 */
