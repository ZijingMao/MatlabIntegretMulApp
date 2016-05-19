/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_calc_bandpower_api.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 10-May-2016 22:57:56
 */

#ifndef ___CODER_CALC_BANDPOWER_API_H__
#define ___CODER_CALC_BANDPOWER_API_H__

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_calc_bandpower_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void calc_bandpower(real_T data[768], real_T pxxdB[257], real_T f[257]);
extern void calc_bandpower_api(const mxArray *prhs[1], const mxArray *plhs[2]);
extern void calc_bandpower_atexit(void);
extern void calc_bandpower_initialize(void);
extern void calc_bandpower_terminate(void);
extern void calc_bandpower_xil_terminate(void);

#endif

/*
 * File trailer for _coder_calc_bandpower_api.h
 *
 * [EOF]
 */
