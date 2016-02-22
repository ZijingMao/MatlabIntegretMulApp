/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_matrix_multiplication_api.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 21-Feb-2016 20:55:28
 */

#ifndef ___CODER_MATRIX_MULTIPLICATION_API_H__
#define ___CODER_MATRIX_MULTIPLICATION_API_H__

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_matrix_multiplication_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void matrix_multiplication(real_T a[6], real_T b[6], real_T c[4]);
extern void matrix_multiplication_api(const mxArray *prhs[2], const mxArray
  *plhs[1]);
extern void matrix_multiplication_atexit(void);
extern void matrix_multiplication_initialize(void);
extern void matrix_multiplication_terminate(void);
extern void matrix_multiplication_xil_terminate(void);

#endif

/*
 * File trailer for _coder_matrix_multiplication_api.h
 *
 * [EOF]
 */
