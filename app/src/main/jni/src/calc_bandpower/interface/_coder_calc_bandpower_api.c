/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_calc_bandpower_api.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 10-May-2016 22:57:56
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_calc_bandpower_api.h"
#include "_coder_calc_bandpower_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131419U, NULL, "calc_bandpower",
  NULL, false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[768];
static const mxArray *b_emlrt_marshallOut(const real_T u[257]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[768];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
  const char_T *identifier))[768];
static const mxArray *emlrt_marshallOut(const real_T u[257]);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[768]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[768]
{
  real_T (*y)[768];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const real_T u[257]
 * Return Type  : const mxArray *
 */
  static const mxArray *b_emlrt_marshallOut(const real_T u[257])
{
  const mxArray *y;
  static const int32_T iv2[2] = { 0, 0 };

  const mxArray *m1;
  static const int32_T iv3[2] = { 1, 257 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u);
  emlrtSetDimensions((mxArray *)m1, iv3, 2);
  emlrtAssign(&y, m1);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[768]
 */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[768]
{
  real_T (*ret)[768];
  static const int32_T dims[2] = { 1, 768 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[768])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *data
 *                const char_T *identifier
 * Return Type  : real_T (*)[768]
 */
  static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
  const char_T *identifier))[768]
{
  real_T (*y)[768];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(data), &thisId);
  emlrtDestroyArray(&data);
  return y;
}

/*
 * Arguments    : const real_T u[257]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real_T u[257])
{
  const mxArray *y;
  static const int32_T iv0[1] = { 0 };

  const mxArray *m0;
  static const int32_T iv1[1] = { 257 };

  y = NULL;
  m0 = emlrtCreateNumericArray(1, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u);
  emlrtSetDimensions((mxArray *)m0, iv1, 1);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const mxArray *prhs[1]
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
void calc_bandpower_api(const mxArray *prhs[1], const mxArray *plhs[2])
{
  real_T (*pxxdB)[257];
  real_T (*f)[257];
  real_T (*data)[768];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  pxxdB = (real_T (*)[257])mxMalloc(sizeof(real_T [257]));
  f = (real_T (*)[257])mxMalloc(sizeof(real_T [257]));
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);

  /* Marshall function inputs */
  data = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "data");

  /* Invoke the target function */
  calc_bandpower(*data, *pxxdB, *f);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*pxxdB);
  plhs[1] = b_emlrt_marshallOut(*f);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void calc_bandpower_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  calc_bandpower_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void calc_bandpower_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void calc_bandpower_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_calc_bandpower_api.c
 *
 * [EOF]
 */
