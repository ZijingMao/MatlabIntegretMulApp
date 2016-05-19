/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_fir1_window_api.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_fir1_window_api.h"
#include "_coder_fir1_window_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131419U, NULL, "fir1_window",
  NULL, false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[768];
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *low, const
  char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[768];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *input,
  const char_T *identifier))[768];
static void emlrt_marshallOut(const real_T u[768], const mxArray *y);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

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
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *low
 *                const char_T *identifier
 * Return Type  : real_T
 */
  static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *low,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(low), &thisId);
  emlrtDestroyArray(&low);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[768]
 */
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
 *                const mxArray *input
 *                const char_T *identifier
 * Return Type  : real_T (*)[768]
 */
  static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *input,
  const char_T *identifier))[768]
{
  real_T (*y)[768];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(input), &thisId);
  emlrtDestroyArray(&input);
  return y;
}

/*
 * Arguments    : const real_T u[768]
 *                const mxArray *y
 * Return Type  : void
 */
static void emlrt_marshallOut(const real_T u[768], const mxArray *y)
{
  static const int32_T iv0[2] = { 1, 768 };

  mxSetData((mxArray *)y, (void *)u);
  emlrtSetDimensions((mxArray *)y, iv0, 2);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const mxArray *prhs[3]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void fir1_window_api(const mxArray *prhs[3], const mxArray *plhs[1])
{
  real_T (*input)[768];
  real_T low;
  real_T high;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, true, -1);

  /* Marshall function inputs */
  input = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "input");
  low = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "low");
  high = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "high");

  /* Invoke the target function */
  fir1_window(*input, low, high);

  /* Marshall function outputs */
  emlrt_marshallOut(*input, prhs[0]);
  plhs[0] = prhs[0];
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void fir1_window_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  fir1_window_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void fir1_window_initialize(void)
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
void fir1_window_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_fir1_window_api.c
 *
 * [EOF]
 */
