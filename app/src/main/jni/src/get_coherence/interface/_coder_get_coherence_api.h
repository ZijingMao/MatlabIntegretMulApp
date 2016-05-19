/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_get_coherence_api.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

#ifndef ___CODER_GET_COHERENCE_API_H__
#define ___CODER_GET_COHERENCE_API_H__

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_get_coherence_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void get_coherence(real_T x[768], real_T y[768], real_T fs, real_T mscxy
  [513], real_T frequency_list[513]);
extern void get_coherence_api(const mxArray *prhs[3], const mxArray *plhs[2]);
extern void get_coherence_atexit(void);
extern void get_coherence_initialize(void);
extern void get_coherence_terminate(void);
extern void get_coherence_xil_terminate(void);

#endif

/*
 * File trailer for _coder_get_coherence_api.h
 *
 * [EOF]
 */
