/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_fir1_window_api.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

#ifndef ___CODER_FIR1_WINDOW_API_H__
#define ___CODER_FIR1_WINDOW_API_H__

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_fir1_window_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void fir1_window(real_T input[768], real_T low, real_T high);
extern void fir1_window_api(const mxArray *prhs[3], const mxArray *plhs[1]);
extern void fir1_window_atexit(void);
extern void fir1_window_initialize(void);
extern void fir1_window_terminate(void);
extern void fir1_window_xil_terminate(void);

#endif

/*
 * File trailer for _coder_fir1_window_api.h
 *
 * [EOF]
 */
