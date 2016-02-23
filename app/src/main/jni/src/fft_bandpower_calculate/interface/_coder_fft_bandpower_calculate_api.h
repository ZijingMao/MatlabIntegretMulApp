/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_fft_bandpower_calculate_api.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 22-Feb-2016 20:51:15
 */

#ifndef ___CODER_FFT_BANDPOWER_CALCULATE_API_H__
#define ___CODER_FFT_BANDPOWER_CALCULATE_API_H__

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_fft_bandpower_calculate_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void fft_bandpower_calculate(real_T data[256], real_T Fs, real_T band[2],
  real_T *totalpower, real_T *pband);
extern void fft_bandpower_calculate_api(const mxArray *prhs[3], const mxArray
  *plhs[2]);
extern void fft_bandpower_calculate_atexit(void);
extern void fft_bandpower_calculate_initialize(void);
extern void fft_bandpower_calculate_terminate(void);
extern void fft_bandpower_calculate_xil_terminate(void);

#endif

/*
 * File trailer for _coder_fft_bandpower_calculate_api.h
 *
 * [EOF]
 */
