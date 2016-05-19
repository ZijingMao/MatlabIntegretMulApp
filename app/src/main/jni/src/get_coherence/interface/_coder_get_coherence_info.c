/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_get_coherence_info.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

/* Include Files */
#include "_coder_get_coherence_info.h"

/* Function Declarations */
static void info_helper(const mxArray **info);
static const mxArray *emlrt_marshallOut(const char * u);
static const mxArray *b_emlrt_marshallOut(const uint32_T u);
static void b_info_helper(const mxArray **info);
static void c_info_helper(const mxArray **info);

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  nameCaptureInfo = NULL;
  emlrtAssign(&nameCaptureInfo, emlrtCreateStructMatrix(187, 1, 0, NULL));
  info_helper(&nameCaptureInfo);
  b_info_helper(&nameCaptureInfo);
  c_info_helper(&nameCaptureInfo);
  emlrtNameCapturePostProcessR2013b(&nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : const mxArray **info
 * Return Type  : void
 */
static void info_helper(const mxArray **info)
{
  const mxArray *rhs0 = NULL;
  const mxArray *lhs0 = NULL;
  const mxArray *rhs1 = NULL;
  const mxArray *lhs1 = NULL;
  const mxArray *rhs2 = NULL;
  const mxArray *lhs2 = NULL;
  const mxArray *rhs3 = NULL;
  const mxArray *lhs3 = NULL;
  const mxArray *rhs4 = NULL;
  const mxArray *lhs4 = NULL;
  const mxArray *rhs5 = NULL;
  const mxArray *lhs5 = NULL;
  const mxArray *rhs6 = NULL;
  const mxArray *lhs6 = NULL;
  const mxArray *rhs7 = NULL;
  const mxArray *lhs7 = NULL;
  const mxArray *rhs8 = NULL;
  const mxArray *lhs8 = NULL;
  const mxArray *rhs9 = NULL;
  const mxArray *lhs9 = NULL;
  const mxArray *rhs10 = NULL;
  const mxArray *lhs10 = NULL;
  const mxArray *rhs11 = NULL;
  const mxArray *lhs11 = NULL;
  const mxArray *rhs12 = NULL;
  const mxArray *lhs12 = NULL;
  const mxArray *rhs13 = NULL;
  const mxArray *lhs13 = NULL;
  const mxArray *rhs14 = NULL;
  const mxArray *lhs14 = NULL;
  const mxArray *rhs15 = NULL;
  const mxArray *lhs15 = NULL;
  const mxArray *rhs16 = NULL;
  const mxArray *lhs16 = NULL;
  const mxArray *rhs17 = NULL;
  const mxArray *lhs17 = NULL;
  const mxArray *rhs18 = NULL;
  const mxArray *lhs18 = NULL;
  const mxArray *rhs19 = NULL;
  const mxArray *lhs19 = NULL;
  const mxArray *rhs20 = NULL;
  const mxArray *lhs20 = NULL;
  const mxArray *rhs21 = NULL;
  const mxArray *lhs21 = NULL;
  const mxArray *rhs22 = NULL;
  const mxArray *lhs22 = NULL;
  const mxArray *rhs23 = NULL;
  const mxArray *lhs23 = NULL;
  const mxArray *rhs24 = NULL;
  const mxArray *lhs24 = NULL;
  const mxArray *rhs25 = NULL;
  const mxArray *lhs25 = NULL;
  const mxArray *rhs26 = NULL;
  const mxArray *lhs26 = NULL;
  const mxArray *rhs27 = NULL;
  const mxArray *lhs27 = NULL;
  const mxArray *rhs28 = NULL;
  const mxArray *lhs28 = NULL;
  const mxArray *rhs29 = NULL;
  const mxArray *lhs29 = NULL;
  const mxArray *rhs30 = NULL;
  const mxArray *lhs30 = NULL;
  const mxArray *rhs31 = NULL;
  const mxArray *lhs31 = NULL;
  const mxArray *rhs32 = NULL;
  const mxArray *lhs32 = NULL;
  const mxArray *rhs33 = NULL;
  const mxArray *lhs33 = NULL;
  const mxArray *rhs34 = NULL;
  const mxArray *lhs34 = NULL;
  const mxArray *rhs35 = NULL;
  const mxArray *lhs35 = NULL;
  const mxArray *rhs36 = NULL;
  const mxArray *lhs36 = NULL;
  const mxArray *rhs37 = NULL;
  const mxArray *lhs37 = NULL;
  const mxArray *rhs38 = NULL;
  const mxArray *lhs38 = NULL;
  const mxArray *rhs39 = NULL;
  const mxArray *lhs39 = NULL;
  const mxArray *rhs40 = NULL;
  const mxArray *lhs40 = NULL;
  const mxArray *rhs41 = NULL;
  const mxArray *lhs41 = NULL;
  const mxArray *rhs42 = NULL;
  const mxArray *lhs42 = NULL;
  const mxArray *rhs43 = NULL;
  const mxArray *lhs43 = NULL;
  const mxArray *rhs44 = NULL;
  const mxArray *lhs44 = NULL;
  const mxArray *rhs45 = NULL;
  const mxArray *lhs45 = NULL;
  const mxArray *rhs46 = NULL;
  const mxArray *lhs46 = NULL;
  const mxArray *rhs47 = NULL;
  const mxArray *lhs47 = NULL;
  const mxArray *rhs48 = NULL;
  const mxArray *lhs48 = NULL;
  const mxArray *rhs49 = NULL;
  const mxArray *lhs49 = NULL;
  const mxArray *rhs50 = NULL;
  const mxArray *lhs50 = NULL;
  const mxArray *rhs51 = NULL;
  const mxArray *lhs51 = NULL;
  const mxArray *rhs52 = NULL;
  const mxArray *lhs52 = NULL;
  const mxArray *rhs53 = NULL;
  const mxArray *lhs53 = NULL;
  const mxArray *rhs54 = NULL;
  const mxArray *lhs54 = NULL;
  const mxArray *rhs55 = NULL;
  const mxArray *lhs55 = NULL;
  const mxArray *rhs56 = NULL;
  const mxArray *lhs56 = NULL;
  const mxArray *rhs57 = NULL;
  const mxArray *lhs57 = NULL;
  const mxArray *rhs58 = NULL;
  const mxArray *lhs58 = NULL;
  const mxArray *rhs59 = NULL;
  const mxArray *lhs59 = NULL;
  const mxArray *rhs60 = NULL;
  const mxArray *lhs60 = NULL;
  const mxArray *rhs61 = NULL;
  const mxArray *lhs61 = NULL;
  const mxArray *rhs62 = NULL;
  const mxArray *lhs62 = NULL;
  const mxArray *rhs63 = NULL;
  const mxArray *lhs63 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/get_coherence.m"),
                "context", 0);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.length"), "name", 0);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/length.m"),
                "resolved", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(1429654458U), "fileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 0);
  emlrtAssign(&rhs0, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs0, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs0), "rhs", 0);
  emlrtAddField(*info, emlrtAliasP(lhs0), "lhs", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/get_coherence.m"),
                "context", 1);
  emlrtAddField(*info, emlrt_marshallOut("nextpow2"), "name", 1);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/nextpow2.m"),
                "resolved", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 1);
  emlrtAssign(&rhs1, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs1, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs1), "rhs", 1);
  emlrtAddField(*info, emlrtAliasP(lhs1), "lhs", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/nextpow2.m"),
                "context", 2);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 2);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 2);
  emlrtAssign(&rhs2, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs2, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs2), "rhs", 2);
  emlrtAddField(*info, emlrtAliasP(lhs2), "lhs", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/nextpow2.m"),
                "context", 3);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.nextpow2"),
                "name", 3);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/nextpow2.m"),
                "resolved", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 3);
  emlrtAssign(&rhs3, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs3, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs3), "rhs", 3);
  emlrtAddField(*info, emlrtAliasP(lhs3), "lhs", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/nextpow2.m"),
                "context", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 4);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(1422909400U), "fileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 4);
  emlrtAssign(&rhs4, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs4, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs4), "rhs", 4);
  emlrtAddField(*info, emlrtAliasP(lhs4), "lhs", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 5);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.nextpow2"),
                "name", 5);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/nextpow2.m"),
                "resolved", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 5);
  emlrtAssign(&rhs5, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs5, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs5), "rhs", 5);
  emlrtAddField(*info, emlrtAliasP(lhs5), "lhs", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/nextpow2.m!fnextpow2"),
                "context", 6);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.abs"), "name", 6);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 6);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/abs.m"),
                "resolved", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(1424718934U), "fileTimeLo", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 6);
  emlrtAssign(&rhs6, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs6, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs6), "rhs", 6);
  emlrtAddField(*info, emlrtAliasP(lhs6), "lhs", 6);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/nextpow2.m!fnextpow2"),
                "context", 7);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 7);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 7);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "resolved", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 7);
  emlrtAssign(&rhs7, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs7, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs7), "rhs", 7);
  emlrtAddField(*info, emlrtAliasP(lhs7), "lhs", 7);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "context", 8);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 8);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 8);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 8);
  emlrtAssign(&rhs8, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs8, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs8), "rhs", 8);
  emlrtAddField(*info, emlrtAliasP(lhs8), "lhs", 8);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "context", 9);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 9);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 9);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isinf.m"),
                "resolved", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 9);
  emlrtAssign(&rhs9, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs9, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs9), "rhs", 9);
  emlrtAddField(*info, emlrtAliasP(lhs9), "lhs", 9);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isinf.m"),
                "context", 10);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 10);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 10);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 10);
  emlrtAssign(&rhs10, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs10, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs10), "rhs", 10);
  emlrtAddField(*info, emlrtAliasP(lhs10), "lhs", 10);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "context", 11);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 11);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 11);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 11);
  emlrtAssign(&rhs11, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs11, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs11), "rhs", 11);
  emlrtAddField(*info, emlrtAliasP(lhs11), "lhs", 11);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "context", 12);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 12);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 12);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 12);
  emlrtAssign(&rhs12, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs12, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs12), "rhs", 12);
  emlrtAddField(*info, emlrtAliasP(lhs12), "lhs", 12);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/nextpow2.m!fnextpow2"),
                "context", 13);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.log2"), "name",
                13);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 13);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/log2.m"),
                "resolved", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 13);
  emlrtAssign(&rhs13, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs13, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs13), "rhs", 13);
  emlrtAddField(*info, emlrtAliasP(lhs13), "lhs", 13);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/log2.m!scalar_frexp"),
                "context", 14);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 14);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 14);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "resolved", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 14);
  emlrtAssign(&rhs14, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs14, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs14), "rhs", 14);
  emlrtAddField(*info, emlrtAliasP(lhs14), "lhs", 14);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/get_coherence.m"),
                "context", 15);
  emlrtAddField(*info, emlrt_marshallOut("mpower"), "name", 15);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 15);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mpower.m"),
                "resolved", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 15);
  emlrtAssign(&rhs15, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs15, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs15), "rhs", 15);
  emlrtAddField(*info, emlrtAliasP(lhs15), "lhs", 15);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mpower.m"),
                "context", 16);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 16);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 16);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 16);
  emlrtAssign(&rhs16, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs16, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs16), "rhs", 16);
  emlrtAddField(*info, emlrtAliasP(lhs16), "lhs", 16);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mpower.m"),
                "context", 17);
  emlrtAddField(*info, emlrt_marshallOut("ismatrix"), "name", 17);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 17);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/ismatrix.m"),
                "resolved", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 17);
  emlrtAssign(&rhs17, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs17, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs17), "rhs", 17);
  emlrtAddField(*info, emlrtAliasP(lhs17), "lhs", 17);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mpower.m"),
                "context", 18);
  emlrtAddField(*info, emlrt_marshallOut("power"), "name", 18);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 18);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m"),
                "resolved", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339030U), "fileTimeLo", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 18);
  emlrtAssign(&rhs18, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs18, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs18), "rhs", 18);
  emlrtAddField(*info, emlrtAliasP(lhs18), "lhs", 18);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m"),
                "context", 19);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 19);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 19);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 19);
  emlrtAssign(&rhs19, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs19, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs19), "rhs", 19);
  emlrtAddField(*info, emlrtAliasP(lhs19), "lhs", 19);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower"),
                "context", 20);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 20);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 20);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 20);
  emlrtAssign(&rhs20, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs20, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs20), "rhs", 20);
  emlrtAddField(*info, emlrtAliasP(lhs20), "lhs", 20);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "context", 21);
  emlrtAddField(*info, emlrt_marshallOut("isnumerictype"), "name", 21);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 21);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isnumerictype.m"),
                "resolved", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933124U), "fileTimeLo", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 21);
  emlrtAssign(&rhs21, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs21, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs21), "rhs", 21);
  emlrtAddField(*info, emlrtAliasP(lhs21), "lhs", 21);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "context", 22);
  emlrtAddField(*info, emlrt_marshallOut("isfimath"), "name", 22);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 22);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfimath.m"),
                "resolved", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933124U), "fileTimeLo", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 22);
  emlrtAssign(&rhs22, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs22, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs22), "rhs", 22);
  emlrtAddField(*info, emlrtAliasP(lhs22), "lhs", 22);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m!firstfi"),
                "context", 23);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 23);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 23);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933134U), "fileTimeLo", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 23);
  emlrtAssign(&rhs23, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs23, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs23), "rhs", 23);
  emlrtAddField(*info, emlrtAliasP(lhs23), "lhs", 23);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_"
    "helper"), "context", 24);
  emlrtAddField(*info, emlrt_marshallOut("isfi"), "name", 24);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 24);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfi.m"),
                "resolved", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933124U), "fileTimeLo", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 24);
  emlrtAssign(&rhs24, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs24, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs24), "rhs", 24);
  emlrtAddField(*info, emlrtAliasP(lhs24), "lhs", 24);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfi.m"),
                "context", 25);
  emlrtAddField(*info, emlrt_marshallOut("isnumerictype"), "name", 25);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 25);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isnumerictype.m"),
                "resolved", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933124U), "fileTimeLo", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 25);
  emlrtAssign(&rhs25, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs25, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs25), "rhs", 25);
  emlrtAddField(*info, emlrtAliasP(lhs25), "lhs", 25);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_"
    "helper"), "context", 26);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 26);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 26);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 26);
  emlrtAssign(&rhs26, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs26, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs26), "rhs", 26);
  emlrtAddField(*info, emlrtAliasP(lhs26), "lhs", 26);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_"
    "helper"), "context", 27);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 27);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 27);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmin.m"),
                "resolved", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 27);
  emlrtAssign(&rhs27, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs27, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs27), "rhs", 27);
  emlrtAddField(*info, emlrtAliasP(lhs27), "lhs", 27);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m!firstfi"),
                "context", 28);
  emlrtAddField(*info, emlrt_marshallOut("isfi"), "name", 28);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 28);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfi.m"),
                "resolved", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933124U), "fileTimeLo", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 28);
  emlrtAssign(&rhs28, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs28, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs28), "rhs", 28);
  emlrtAddField(*info, emlrtAliasP(lhs28), "lhs", 28);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower"),
                "context", 29);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.applyScalarFunction"),
                "name", 29);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 29);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "resolved", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(1422909502U), "fileTimeLo", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 29);
  emlrtAssign(&rhs29, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs29, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs29), "rhs", 29);
  emlrtAddField(*info, emlrtAliasP(lhs29), "lhs", 29);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 30);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                30);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 30);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "resolved", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 30);
  emlrtAssign(&rhs30, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs30, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs30), "rhs", 30);
  emlrtAddField(*info, emlrtAliasP(lhs30), "lhs", 30);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "context", 31);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAllocNoCheck"),
                "name", 31);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"),
                "resolved", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(1410462290U), "fileTimeLo", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 31);
  emlrtAssign(&rhs31, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs31, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs31), "rhs", 31);
  emlrtAddField(*info, emlrtAliasP(lhs31), "lhs", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power"),
                "context", 32);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 32);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 32);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 32);
  emlrtAssign(&rhs32, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs32, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs32), "rhs", 32);
  emlrtAddField(*info, emlrtAliasP(lhs32), "lhs", 32);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower_domain_error"),
                "context", 33);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 33);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 33);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 33);
  emlrtAssign(&rhs33, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs33, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs33), "rhs", 33);
  emlrtAddField(*info, emlrtAliasP(lhs33), "lhs", 33);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower_domain_error"),
                "context", 34);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 34);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 34);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 34);
  emlrtAssign(&rhs34, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs34, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs34), "rhs", 34);
  emlrtAddField(*info, emlrtAliasP(lhs34), "lhs", 34);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "context", 35);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 35);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 35);
  emlrtAssign(&rhs35, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs35, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs35), "rhs", 35);
  emlrtAddField(*info, emlrtAliasP(lhs35), "lhs", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "context", 36);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.floor"), "name",
                36);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/floor.m"),
                "resolved", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 36);
  emlrtAssign(&rhs36, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs36, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs36), "rhs", 36);
  emlrtAddField(*info, emlrtAliasP(lhs36), "lhs", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "context", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 37);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(1422909400U), "fileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 37);
  emlrtAssign(&rhs37, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs37, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs37), "rhs", 37);
  emlrtAddField(*info, emlrtAliasP(lhs37), "lhs", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 38);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.floor"), "name",
                38);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/floor.m"),
                "resolved", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 38);
  emlrtAssign(&rhs38, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs38, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs38), "rhs", 38);
  emlrtAddField(*info, emlrtAliasP(lhs38), "lhs", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower"),
                "context", 39);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.error"), "name", 39);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/error.m"),
                "resolved", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(1435870694U), "fileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 39);
  emlrtAssign(&rhs39, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs39, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs39), "rhs", 39);
  emlrtAddField(*info, emlrtAliasP(lhs39), "lhs", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/get_coherence.m"),
                "context", 40);
  emlrtAddField(*info, emlrt_marshallOut("pwelch_trans"), "name", 40);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "resolved", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(1458506554U), "fileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 40);
  emlrtAssign(&rhs40, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs40, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs40), "rhs", 40);
  emlrtAddField(*info, emlrtAliasP(lhs40), "lhs", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 41);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.length"), "name", 41);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/length.m"),
                "resolved", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(1429654458U), "fileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 41);
  emlrtAssign(&rhs41, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs41, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs41), "rhs", 41);
  emlrtAddField(*info, emlrtAliasP(lhs41), "lhs", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 42);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 42);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 42);
  emlrtAssign(&rhs42, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs42, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs42), "rhs", 42);
  emlrtAddField(*info, emlrtAliasP(lhs42), "lhs", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "context", 43);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 43);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "resolved", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "fileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 43);
  emlrtAssign(&rhs43, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs43, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs43), "rhs", 43);
  emlrtAddField(*info, emlrtAliasP(lhs43), "lhs", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "context", 44);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 44);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 44);
  emlrtAssign(&rhs44, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs44, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs44), "rhs", 44);
  emlrtAddField(*info, emlrtAliasP(lhs44), "lhs", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "context", 45);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpCompatible"),
                "name", 45);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpCompatible.m"),
                "resolved", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 45);
  emlrtAssign(&rhs45, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs45, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs45), "rhs", 45);
  emlrtAddField(*info, emlrtAliasP(lhs45), "lhs", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "context", 46);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.div"), "name", 46);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/div.m"),
                "resolved", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 46);
  emlrtAssign(&rhs46, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs46, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs46), "rhs", 46);
  emlrtAddField(*info, emlrtAliasP(lhs46), "lhs", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 47);
  emlrtAddField(*info, emlrt_marshallOut("fix"), "name", 47);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/fix.m"),
                "resolved", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 47);
  emlrtAssign(&rhs47, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs47, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs47), "rhs", 47);
  emlrtAddField(*info, emlrtAliasP(lhs47), "lhs", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/fix.m"),
                "context", 48);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 48);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 48);
  emlrtAssign(&rhs48, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs48, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs48), "rhs", 48);
  emlrtAddField(*info, emlrtAliasP(lhs48), "lhs", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/fix.m"),
                "context", 49);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.fix"), "name",
                49);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/fix.m"),
                "resolved", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 49);
  emlrtAssign(&rhs49, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs49, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs49), "rhs", 49);
  emlrtAddField(*info, emlrtAliasP(lhs49), "lhs", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/fix.m"),
                "context", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 50);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(1422909400U), "fileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 50);
  emlrtAssign(&rhs50, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs50, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs50), "rhs", 50);
  emlrtAddField(*info, emlrtAliasP(lhs50), "lhs", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 51);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.fix"), "name",
                51);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/fix.m"),
                "resolved", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 51);
  emlrtAssign(&rhs51, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs51, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs51), "rhs", 51);
  emlrtAddField(*info, emlrtAliasP(lhs51), "lhs", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 52);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 52);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "resolved", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "fileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 52);
  emlrtAssign(&rhs52, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs52, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs52), "rhs", 52);
  emlrtAddField(*info, emlrtAliasP(lhs52), "lhs", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 53);
  emlrtAddField(*info, emlrt_marshallOut("def_hamming"), "name", 53);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/def_hamming.m"),
                "resolved", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(1458491681U), "fileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 53);
  emlrtAssign(&rhs53, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs53, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs53), "rhs", 53);
  emlrtAddField(*info, emlrtAliasP(lhs53), "lhs", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/def_hamming.m"),
                "context", 54);
  emlrtAddField(*info, emlrt_marshallOut("rem"), "name", 54);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/rem.m"),
                "resolved", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(1425473772U), "fileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 54);
  emlrtAssign(&rhs54, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs54, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs54), "rhs", 54);
  emlrtAddField(*info, emlrtAliasP(lhs54), "lhs", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/rem.m"),
                "context", 55);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 55);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 55);
  emlrtAssign(&rhs55, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs55, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs55), "rhs", 55);
  emlrtAddField(*info, emlrtAliasP(lhs55), "lhs", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/rem.m"),
                "context", 56);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 56);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 56);
  emlrtAssign(&rhs56, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs56, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs56), "rhs", 56);
  emlrtAddField(*info, emlrtAliasP(lhs56), "lhs", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/rem.m"),
                "context", 57);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                57);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "resolved", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 57);
  emlrtAssign(&rhs57, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs57, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs57), "rhs", 57);
  emlrtAddField(*info, emlrtAliasP(lhs57), "lhs", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/rem.m"),
                "context", 58);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.rem"), "name",
                58);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/rem.m"),
                "resolved", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 58);
  emlrtAssign(&rhs58, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs58, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs58), "rhs", 58);
  emlrtAddField(*info, emlrtAliasP(lhs58), "lhs", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/rem.m"),
                "context", 59);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.applyScalarFunction"),
                "name", 59);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "resolved", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(1422909502U), "fileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 59);
  emlrtAssign(&rhs59, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs59, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs59), "rhs", 59);
  emlrtAddField(*info, emlrtAliasP(lhs59), "lhs", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 60);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.rem"), "name",
                60);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/rem.m"),
                "resolved", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 60);
  emlrtAssign(&rhs60, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs60, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs60), "rhs", 60);
  emlrtAddField(*info, emlrtAliasP(lhs60), "lhs", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/def_hamming.m"),
                "context", 61);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 61);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 61);
  emlrtAssign(&rhs61, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs61, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs61), "rhs", 61);
  emlrtAddField(*info, emlrtAliasP(lhs61), "lhs", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/def_hamming.m"),
                "context", 62);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 62);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 62);
  emlrtAssign(&rhs62, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs62, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs62), "rhs", 62);
  emlrtAddField(*info, emlrtAliasP(lhs62), "lhs", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "context", 63);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 63);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 63);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 63);
  emlrtAssign(&rhs63, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs63, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs63), "rhs", 63);
  emlrtAddField(*info, emlrtAliasP(lhs63), "lhs", 63);
  emlrtDestroyArray(&rhs0);
  emlrtDestroyArray(&lhs0);
  emlrtDestroyArray(&rhs1);
  emlrtDestroyArray(&lhs1);
  emlrtDestroyArray(&rhs2);
  emlrtDestroyArray(&lhs2);
  emlrtDestroyArray(&rhs3);
  emlrtDestroyArray(&lhs3);
  emlrtDestroyArray(&rhs4);
  emlrtDestroyArray(&lhs4);
  emlrtDestroyArray(&rhs5);
  emlrtDestroyArray(&lhs5);
  emlrtDestroyArray(&rhs6);
  emlrtDestroyArray(&lhs6);
  emlrtDestroyArray(&rhs7);
  emlrtDestroyArray(&lhs7);
  emlrtDestroyArray(&rhs8);
  emlrtDestroyArray(&lhs8);
  emlrtDestroyArray(&rhs9);
  emlrtDestroyArray(&lhs9);
  emlrtDestroyArray(&rhs10);
  emlrtDestroyArray(&lhs10);
  emlrtDestroyArray(&rhs11);
  emlrtDestroyArray(&lhs11);
  emlrtDestroyArray(&rhs12);
  emlrtDestroyArray(&lhs12);
  emlrtDestroyArray(&rhs13);
  emlrtDestroyArray(&lhs13);
  emlrtDestroyArray(&rhs14);
  emlrtDestroyArray(&lhs14);
  emlrtDestroyArray(&rhs15);
  emlrtDestroyArray(&lhs15);
  emlrtDestroyArray(&rhs16);
  emlrtDestroyArray(&lhs16);
  emlrtDestroyArray(&rhs17);
  emlrtDestroyArray(&lhs17);
  emlrtDestroyArray(&rhs18);
  emlrtDestroyArray(&lhs18);
  emlrtDestroyArray(&rhs19);
  emlrtDestroyArray(&lhs19);
  emlrtDestroyArray(&rhs20);
  emlrtDestroyArray(&lhs20);
  emlrtDestroyArray(&rhs21);
  emlrtDestroyArray(&lhs21);
  emlrtDestroyArray(&rhs22);
  emlrtDestroyArray(&lhs22);
  emlrtDestroyArray(&rhs23);
  emlrtDestroyArray(&lhs23);
  emlrtDestroyArray(&rhs24);
  emlrtDestroyArray(&lhs24);
  emlrtDestroyArray(&rhs25);
  emlrtDestroyArray(&lhs25);
  emlrtDestroyArray(&rhs26);
  emlrtDestroyArray(&lhs26);
  emlrtDestroyArray(&rhs27);
  emlrtDestroyArray(&lhs27);
  emlrtDestroyArray(&rhs28);
  emlrtDestroyArray(&lhs28);
  emlrtDestroyArray(&rhs29);
  emlrtDestroyArray(&lhs29);
  emlrtDestroyArray(&rhs30);
  emlrtDestroyArray(&lhs30);
  emlrtDestroyArray(&rhs31);
  emlrtDestroyArray(&lhs31);
  emlrtDestroyArray(&rhs32);
  emlrtDestroyArray(&lhs32);
  emlrtDestroyArray(&rhs33);
  emlrtDestroyArray(&lhs33);
  emlrtDestroyArray(&rhs34);
  emlrtDestroyArray(&lhs34);
  emlrtDestroyArray(&rhs35);
  emlrtDestroyArray(&lhs35);
  emlrtDestroyArray(&rhs36);
  emlrtDestroyArray(&lhs36);
  emlrtDestroyArray(&rhs37);
  emlrtDestroyArray(&lhs37);
  emlrtDestroyArray(&rhs38);
  emlrtDestroyArray(&lhs38);
  emlrtDestroyArray(&rhs39);
  emlrtDestroyArray(&lhs39);
  emlrtDestroyArray(&rhs40);
  emlrtDestroyArray(&lhs40);
  emlrtDestroyArray(&rhs41);
  emlrtDestroyArray(&lhs41);
  emlrtDestroyArray(&rhs42);
  emlrtDestroyArray(&lhs42);
  emlrtDestroyArray(&rhs43);
  emlrtDestroyArray(&lhs43);
  emlrtDestroyArray(&rhs44);
  emlrtDestroyArray(&lhs44);
  emlrtDestroyArray(&rhs45);
  emlrtDestroyArray(&lhs45);
  emlrtDestroyArray(&rhs46);
  emlrtDestroyArray(&lhs46);
  emlrtDestroyArray(&rhs47);
  emlrtDestroyArray(&lhs47);
  emlrtDestroyArray(&rhs48);
  emlrtDestroyArray(&lhs48);
  emlrtDestroyArray(&rhs49);
  emlrtDestroyArray(&lhs49);
  emlrtDestroyArray(&rhs50);
  emlrtDestroyArray(&lhs50);
  emlrtDestroyArray(&rhs51);
  emlrtDestroyArray(&lhs51);
  emlrtDestroyArray(&rhs52);
  emlrtDestroyArray(&lhs52);
  emlrtDestroyArray(&rhs53);
  emlrtDestroyArray(&lhs53);
  emlrtDestroyArray(&rhs54);
  emlrtDestroyArray(&lhs54);
  emlrtDestroyArray(&rhs55);
  emlrtDestroyArray(&lhs55);
  emlrtDestroyArray(&rhs56);
  emlrtDestroyArray(&lhs56);
  emlrtDestroyArray(&rhs57);
  emlrtDestroyArray(&lhs57);
  emlrtDestroyArray(&rhs58);
  emlrtDestroyArray(&lhs58);
  emlrtDestroyArray(&rhs59);
  emlrtDestroyArray(&lhs59);
  emlrtDestroyArray(&rhs60);
  emlrtDestroyArray(&lhs60);
  emlrtDestroyArray(&rhs61);
  emlrtDestroyArray(&lhs61);
  emlrtDestroyArray(&rhs62);
  emlrtDestroyArray(&lhs62);
  emlrtDestroyArray(&rhs63);
  emlrtDestroyArray(&lhs63);
}

/*
 * Arguments    : const char * u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const char * u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateString(u);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const uint32_T u
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m1) = u;
  emlrtAssign(&y, m1);
  return y;
}

/*
 * Arguments    : const mxArray **info
 * Return Type  : void
 */
static void b_info_helper(const mxArray **info)
{
  const mxArray *rhs64 = NULL;
  const mxArray *lhs64 = NULL;
  const mxArray *rhs65 = NULL;
  const mxArray *lhs65 = NULL;
  const mxArray *rhs66 = NULL;
  const mxArray *lhs66 = NULL;
  const mxArray *rhs67 = NULL;
  const mxArray *lhs67 = NULL;
  const mxArray *rhs68 = NULL;
  const mxArray *lhs68 = NULL;
  const mxArray *rhs69 = NULL;
  const mxArray *lhs69 = NULL;
  const mxArray *rhs70 = NULL;
  const mxArray *lhs70 = NULL;
  const mxArray *rhs71 = NULL;
  const mxArray *lhs71 = NULL;
  const mxArray *rhs72 = NULL;
  const mxArray *lhs72 = NULL;
  const mxArray *rhs73 = NULL;
  const mxArray *lhs73 = NULL;
  const mxArray *rhs74 = NULL;
  const mxArray *lhs74 = NULL;
  const mxArray *rhs75 = NULL;
  const mxArray *lhs75 = NULL;
  const mxArray *rhs76 = NULL;
  const mxArray *lhs76 = NULL;
  const mxArray *rhs77 = NULL;
  const mxArray *lhs77 = NULL;
  const mxArray *rhs78 = NULL;
  const mxArray *lhs78 = NULL;
  const mxArray *rhs79 = NULL;
  const mxArray *lhs79 = NULL;
  const mxArray *rhs80 = NULL;
  const mxArray *lhs80 = NULL;
  const mxArray *rhs81 = NULL;
  const mxArray *lhs81 = NULL;
  const mxArray *rhs82 = NULL;
  const mxArray *lhs82 = NULL;
  const mxArray *rhs83 = NULL;
  const mxArray *lhs83 = NULL;
  const mxArray *rhs84 = NULL;
  const mxArray *lhs84 = NULL;
  const mxArray *rhs85 = NULL;
  const mxArray *lhs85 = NULL;
  const mxArray *rhs86 = NULL;
  const mxArray *lhs86 = NULL;
  const mxArray *rhs87 = NULL;
  const mxArray *lhs87 = NULL;
  const mxArray *rhs88 = NULL;
  const mxArray *lhs88 = NULL;
  const mxArray *rhs89 = NULL;
  const mxArray *lhs89 = NULL;
  const mxArray *rhs90 = NULL;
  const mxArray *lhs90 = NULL;
  const mxArray *rhs91 = NULL;
  const mxArray *lhs91 = NULL;
  const mxArray *rhs92 = NULL;
  const mxArray *lhs92 = NULL;
  const mxArray *rhs93 = NULL;
  const mxArray *lhs93 = NULL;
  const mxArray *rhs94 = NULL;
  const mxArray *lhs94 = NULL;
  const mxArray *rhs95 = NULL;
  const mxArray *lhs95 = NULL;
  const mxArray *rhs96 = NULL;
  const mxArray *lhs96 = NULL;
  const mxArray *rhs97 = NULL;
  const mxArray *lhs97 = NULL;
  const mxArray *rhs98 = NULL;
  const mxArray *lhs98 = NULL;
  const mxArray *rhs99 = NULL;
  const mxArray *lhs99 = NULL;
  const mxArray *rhs100 = NULL;
  const mxArray *lhs100 = NULL;
  const mxArray *rhs101 = NULL;
  const mxArray *lhs101 = NULL;
  const mxArray *rhs102 = NULL;
  const mxArray *lhs102 = NULL;
  const mxArray *rhs103 = NULL;
  const mxArray *lhs103 = NULL;
  const mxArray *rhs104 = NULL;
  const mxArray *lhs104 = NULL;
  const mxArray *rhs105 = NULL;
  const mxArray *lhs105 = NULL;
  const mxArray *rhs106 = NULL;
  const mxArray *lhs106 = NULL;
  const mxArray *rhs107 = NULL;
  const mxArray *lhs107 = NULL;
  const mxArray *rhs108 = NULL;
  const mxArray *lhs108 = NULL;
  const mxArray *rhs109 = NULL;
  const mxArray *lhs109 = NULL;
  const mxArray *rhs110 = NULL;
  const mxArray *lhs110 = NULL;
  const mxArray *rhs111 = NULL;
  const mxArray *lhs111 = NULL;
  const mxArray *rhs112 = NULL;
  const mxArray *lhs112 = NULL;
  const mxArray *rhs113 = NULL;
  const mxArray *lhs113 = NULL;
  const mxArray *rhs114 = NULL;
  const mxArray *lhs114 = NULL;
  const mxArray *rhs115 = NULL;
  const mxArray *lhs115 = NULL;
  const mxArray *rhs116 = NULL;
  const mxArray *lhs116 = NULL;
  const mxArray *rhs117 = NULL;
  const mxArray *lhs117 = NULL;
  const mxArray *rhs118 = NULL;
  const mxArray *lhs118 = NULL;
  const mxArray *rhs119 = NULL;
  const mxArray *lhs119 = NULL;
  const mxArray *rhs120 = NULL;
  const mxArray *lhs120 = NULL;
  const mxArray *rhs121 = NULL;
  const mxArray *lhs121 = NULL;
  const mxArray *rhs122 = NULL;
  const mxArray *lhs122 = NULL;
  const mxArray *rhs123 = NULL;
  const mxArray *lhs123 = NULL;
  const mxArray *rhs124 = NULL;
  const mxArray *lhs124 = NULL;
  const mxArray *rhs125 = NULL;
  const mxArray *lhs125 = NULL;
  const mxArray *rhs126 = NULL;
  const mxArray *lhs126 = NULL;
  const mxArray *rhs127 = NULL;
  const mxArray *lhs127 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "context", 64);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 64);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 64);
  emlrtAssign(&rhs64, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs64, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs64), "rhs", 64);
  emlrtAddField(*info, emlrtAliasP(lhs64), "lhs", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 65);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 65);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "resolved", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 65);
  emlrtAssign(&rhs65, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs65, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs65), "rhs", 65);
  emlrtAddField(*info, emlrtAliasP(lhs65), "lhs", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 66);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 66);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 66);
  emlrtAssign(&rhs66, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs66, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs66), "rhs", 66);
  emlrtAddField(*info, emlrtAliasP(lhs66), "lhs", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 67);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 67);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 67);
  emlrtAssign(&rhs67, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs67, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs67), "rhs", 67);
  emlrtAddField(*info, emlrtAliasP(lhs67), "lhs", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 68);
  emlrtAddField(*info, emlrt_marshallOut("flintmax"), "name", 68);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/flintmax.m"),
                "resolved", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 68);
  emlrtAssign(&rhs68, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs68, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs68), "rhs", 68);
  emlrtAddField(*info, emlrtAliasP(lhs68), "lhs", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/flintmax.m"),
                "context", 69);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.floatModel"), "name",
                69);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 69);
  emlrtAssign(&rhs69, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs69, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs69), "rhs", 69);
  emlrtAddField(*info, emlrtAliasP(lhs69), "lhs", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 70);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 70);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 70);
  emlrtAssign(&rhs70, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs70, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs70), "rhs", 70);
  emlrtAddField(*info, emlrtAliasP(lhs70), "lhs", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "context", 71);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 71);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 71);
  emlrtAssign(&rhs71, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs71, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs71), "rhs", 71);
  emlrtAddField(*info, emlrtAliasP(lhs71), "lhs", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "context", 72);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.abs"), "name",
                72);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/abs.m"),
                "resolved", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(1424718934U), "fileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 72);
  emlrtAssign(&rhs72, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs72, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs72), "rhs", 72);
  emlrtAddField(*info, emlrtAliasP(lhs72), "lhs", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "context", 73);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.applyScalarFunction"),
                "name", 73);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "resolved", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(1422909502U), "fileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 73);
  emlrtAssign(&rhs73, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs73, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs73), "rhs", 73);
  emlrtAddField(*info, emlrtAliasP(lhs73), "lhs", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 74);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.abs"), "name",
                74);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/abs.m"),
                "resolved", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(1424718934U), "fileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 74);
  emlrtAssign(&rhs74, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs74, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs74), "rhs", 74);
  emlrtAddField(*info, emlrtAliasP(lhs74), "lhs", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkrange"),
                "context", 75);
  emlrtAddField(*info, emlrt_marshallOut("realmax"), "name", 75);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmax.m"),
                "resolved", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 75);
  emlrtAssign(&rhs75, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs75, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs75), "rhs", 75);
  emlrtAddField(*info, emlrtAliasP(lhs75), "lhs", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmax.m"),
                "context", 76);
  emlrtAddField(*info, emlrt_marshallOut("eml_realmax"), "name", 76);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_realmax.m"),
                "resolved", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 76);
  emlrtAssign(&rhs76, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs76, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs76), "rhs", 76);
  emlrtAddField(*info, emlrtAliasP(lhs76), "lhs", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_realmax.m"),
                "context", 77);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.floatModel"), "name",
                77);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 77);
  emlrtAssign(&rhs77, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs77, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs77), "rhs", 77);
  emlrtAddField(*info, emlrtAliasP(lhs77), "lhs", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 78);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 78);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 78);
  emlrtAssign(&rhs78, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs78, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs78), "rhs", 78);
  emlrtAddField(*info, emlrtAliasP(lhs78), "lhs", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 79);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.nan"), "name", 79);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/nan.m"),
                "resolved", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(1362287232U), "fileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 79);
  emlrtAssign(&rhs79, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs79, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs79), "rhs", 79);
  emlrtAddField(*info, emlrtAliasP(lhs79), "lhs", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 80);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 80);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isinf.m"),
                "resolved", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 80);
  emlrtAssign(&rhs80, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs80, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs80), "rhs", 80);
  emlrtAddField(*info, emlrtAliasP(lhs80), "lhs", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 81);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 81);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 81);
  emlrtAssign(&rhs81, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs81, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs81), "rhs", 81);
  emlrtAddField(*info, emlrtAliasP(lhs81), "lhs", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 82);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 82);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 82);
  emlrtAssign(&rhs82, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs82, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs82), "rhs", 82);
  emlrtAddField(*info, emlrtAliasP(lhs82), "lhs", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 83);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 83);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "resolved", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(1427249904U), "fileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 83);
  emlrtAssign(&rhs83, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs83, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs83), "rhs", 83);
  emlrtAddField(*info, emlrtAliasP(lhs83), "lhs", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "context", 84);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isFloatClass"), "name",
                84);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isFloatClass.m"),
                "resolved", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 84);
  emlrtAssign(&rhs84, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs84, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs84), "rhs", 84);
  emlrtAddField(*info, emlrtAliasP(lhs84), "lhs", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "context", 85);
  emlrtAddField(*info, emlrt_marshallOut("eml_eps"), "name", 85);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_eps.m"),
                "resolved", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 85);
  emlrtAssign(&rhs85, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs85, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs85), "rhs", 85);
  emlrtAddField(*info, emlrtAliasP(lhs85), "lhs", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_eps.m"),
                "context", 86);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.floatModel"), "name",
                86);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 86);
  emlrtAssign(&rhs86, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs86, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs86), "rhs", 86);
  emlrtAddField(*info, emlrtAliasP(lhs86), "lhs", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!maxabs"),
                "context", 87);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 87);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 87);
  emlrtAssign(&rhs87, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs87, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs87), "rhs", 87);
  emlrtAddField(*info, emlrtAliasP(lhs87), "lhs", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 88);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 88);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 88);
  emlrtAssign(&rhs88, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs88, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs88), "rhs", 88);
  emlrtAddField(*info, emlrtAliasP(lhs88), "lhs", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 89);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexIntRelop"), "name",
                89);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933146U), "fileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 89);
  emlrtAssign(&rhs89, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs89, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs89), "rhs", 89);
  emlrtAddField(*info, emlrtAliasP(lhs89), "lhs", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntCl"
    "ass"), "context", 90);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.floatModel"), "name",
                90);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 90);
  emlrtAssign(&rhs90, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs90, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs90), "rhs", 90);
  emlrtAddField(*info, emlrtAliasP(lhs90), "lhs", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass"),
                "context", 91);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 91);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmin.m"),
                "resolved", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 91);
  emlrtAssign(&rhs91, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs91, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs91), "rhs", 91);
  emlrtAddField(*info, emlrtAliasP(lhs91), "lhs", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 92);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 92);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 92);
  emlrtAssign(&rhs92, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs92, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs92), "rhs", 92);
  emlrtAddField(*info, emlrtAliasP(lhs92), "lhs", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 93);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 93);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 93);
  emlrtAssign(&rhs93, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs93, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs93), "rhs", 93);
  emlrtAddField(*info, emlrtAliasP(lhs93), "lhs", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 94);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 94);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 94);
  emlrtAssign(&rhs94, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs94, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs94), "rhs", 94);
  emlrtAddField(*info, emlrtAliasP(lhs94), "lhs", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/def_hamming.m"),
                "context", 95);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 95);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 95);
  emlrtAssign(&rhs95, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs95, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs95), "rhs", 95);
  emlrtAddField(*info, emlrtAliasP(lhs95), "lhs", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                "context", 96);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 96);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 96);
  emlrtAssign(&rhs96, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs96, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs96), "rhs", 96);
  emlrtAddField(*info, emlrtAliasP(lhs96), "lhs", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/def_hamming.m"),
                "context", 97);
  emlrtAddField(*info, emlrt_marshallOut("cos"), "name", 97);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/cos.m"),
                "resolved", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 97);
  emlrtAssign(&rhs97, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs97, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs97), "rhs", 97);
  emlrtAddField(*info, emlrtAliasP(lhs97), "lhs", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/cos.m"),
                "context", 98);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.cos"), "name",
                98);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/cos.m"),
                "resolved", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 98);
  emlrtAssign(&rhs98, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs98, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs98), "rhs", 98);
  emlrtAddField(*info, emlrtAliasP(lhs98), "lhs", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/cos.m"),
                "context", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 99);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(1422909400U), "fileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 99);
  emlrtAssign(&rhs99, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs99, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs99), "rhs", 99);
  emlrtAddField(*info, emlrtAliasP(lhs99), "lhs", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 100);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.useParforConst"),
                "name", 100);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParforConst.m"),
                "resolved", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(1420499698U), "fileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 100);
  emlrtAssign(&rhs100, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs100, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs100), "rhs", 100);
  emlrtAddField(*info, emlrtAliasP(lhs100), "lhs", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParforConst.m"),
                "context", 101);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.useParfor"), "name",
                101);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParfor.m"),
                "resolved", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(1422922114U), "fileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 101);
  emlrtAssign(&rhs101, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs101, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs101), "rhs", 101);
  emlrtAddField(*info, emlrtAliasP(lhs101), "lhs", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 102);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 102);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933134U), "fileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 102);
  emlrtAssign(&rhs102, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs102, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs102), "rhs", 102);
  emlrtAddField(*info, emlrtAliasP(lhs102), "lhs", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 103);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.cos"), "name",
                103);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/cos.m"),
                "resolved", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 103);
  emlrtAssign(&rhs103, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs103, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs103), "rhs", 103);
  emlrtAddField(*info, emlrtAliasP(lhs103), "lhs", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 104);
  emlrtAddField(*info, emlrt_marshallOut("linspace"), "name", 104);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/linspace.m"),
                "resolved", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 104);
  emlrtAssign(&rhs104, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs104, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs104), "rhs", 104);
  emlrtAddField(*info, emlrtAliasP(lhs104), "lhs", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/linspace.m"),
                "context", 105);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 105);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 105);
  emlrtAssign(&rhs105, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs105, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs105), "rhs", 105);
  emlrtAddField(*info, emlrtAliasP(lhs105), "lhs", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/linspace.m"),
                "context", 106);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 106);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 106);
  emlrtAssign(&rhs106, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs106, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs106), "rhs", 106);
  emlrtAddField(*info, emlrtAliasP(lhs106), "lhs", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/linspace.m"),
                "context", 107);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.floor"), "name",
                107);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/floor.m"),
                "resolved", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 107);
  emlrtAssign(&rhs107, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs107, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs107), "rhs", 107);
  emlrtAddField(*info, emlrtAliasP(lhs107), "lhs", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/linspace.m"),
                "context", 108);
  emlrtAddField(*info, emlrt_marshallOut("realmax"), "name", 108);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmax.m"),
                "resolved", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 108);
  emlrtAssign(&rhs108, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs108, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs108), "rhs", 108);
  emlrtAddField(*info, emlrtAliasP(lhs108), "lhs", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/linspace.m"),
                "context", 109);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 109);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 109);
  emlrtAssign(&rhs109, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs109, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs109), "rhs", 109);
  emlrtAddField(*info, emlrtAliasP(lhs109), "lhs", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 110);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 110);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 110);
  emlrtAssign(&rhs110, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs110, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs110), "rhs", 110);
  emlrtAddField(*info, emlrtAliasP(lhs110), "lhs", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 111);
  emlrtAddField(*info, emlrt_marshallOut("compute_fft"), "name", 111);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_fft.m"),
                "resolved", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(1458489928U), "fileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 111);
  emlrtAssign(&rhs111, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs111, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs111), "rhs", 111);
  emlrtAddField(*info, emlrtAliasP(lhs111), "lhs", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_fft.m"),
                "context", 112);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 112);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 112);
  emlrtAssign(&rhs112, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs112, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs112), "rhs", 112);
  emlrtAddField(*info, emlrtAliasP(lhs112), "lhs", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 113);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 113);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 113);
  emlrtAssign(&rhs113, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs113, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs113), "rhs", 113);
  emlrtAddField(*info, emlrtAliasP(lhs113), "lhs", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 114);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 114);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/use_refblas.m"),
                "resolved", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(1376005864U), "fileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 114);
  emlrtAssign(&rhs114, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs114, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs114), "rhs", 114);
  emlrtAddField(*info, emlrtAliasP(lhs114), "lhs", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_fft.m"),
                "context", 115);
  emlrtAddField(*info, emlrt_marshallOut("fft"), "name", 115);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/fft.m"),
                "resolved", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933126U), "fileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 115);
  emlrtAssign(&rhs115, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs115, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs115), "rhs", 115);
  emlrtAddField(*info, emlrtAliasP(lhs115), "lhs", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/fft.m"),
                "context", 116);
  emlrtAddField(*info, emlrt_marshallOut("eml_fft"), "name", 116);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m"),
                "resolved", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(1418403754U), "fileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 116);
  emlrtAssign(&rhs116, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs116, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs116), "rhs", 116);
  emlrtAddField(*info, emlrtAliasP(lhs116), "lhs", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m"),
                "context", 117);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.constNonSingletonDim"),
                "name", 117);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/constNonSingletonDim.m"),
                "resolved", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 117);
  emlrtAssign(&rhs117, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs117, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs117), "rhs", 117);
  emlrtAddField(*info, emlrtAliasP(lhs117), "lhs", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m"),
                "context", 118);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 118);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 118);
  emlrtAssign(&rhs118, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs118, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs118), "rhs", 118);
  emlrtAddField(*info, emlrtAliasP(lhs118), "lhs", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m"),
                "context", 119);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.sizeIsPow2"), "name",
                119);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/sizeIsPow2.m"),
                "resolved", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 119);
  emlrtAssign(&rhs119, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs119, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs119), "rhs", 119);
  emlrtAddField(*info, emlrtAliasP(lhs119), "lhs", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/sizeIsPow2.m"),
                "context", 120);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 120);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 120);
  emlrtAssign(&rhs120, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs120, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs120), "rhs", 120);
  emlrtAddField(*info, emlrtAliasP(lhs120), "lhs", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/sizeIsPow2.m"),
                "context", 121);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.unsignedClass"), "name",
                121);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/unsignedClass.m"),
                "resolved", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 121);
  emlrtAssign(&rhs121, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs121, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs121), "rhs", 121);
  emlrtAddField(*info, emlrtAliasP(lhs121), "lhs", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/sizeIsPow2.m"),
                "context", 122);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.sizeIsPow2"), "name",
                122);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/sizeIsPow2.m"),
                "resolved", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 122);
  emlrtAssign(&rhs122, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs122, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs122), "rhs", 122);
  emlrtAddField(*info, emlrtAliasP(lhs122), "lhs", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!ucls"),
                "context", 123);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.unsignedClass"), "name",
                123);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/unsignedClass.m"),
                "resolved", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 123);
  emlrtAssign(&rhs123, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs123, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs123), "rhs", 123);
  emlrtAddField(*info, emlrtAliasP(lhs123), "lhs", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!r2br_r2dit_trig"),
                "context", 124);
  emlrtAddField(*info, emlrt_marshallOut("min"), "name", 124);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "resolved", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933126U), "fileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 124);
  emlrtAssign(&rhs124, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs124, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs124), "rhs", 124);
  emlrtAddField(*info, emlrtAliasP(lhs124), "lhs", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "context", 125);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.minOrMax"), "name", 125);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m"),
                "resolved", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(1426798042U), "fileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 125);
  emlrtAssign(&rhs125, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs125, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs125), "rhs", 125);
  emlrtAddField(*info, emlrtAliasP(lhs125), "lhs", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_bin_extremum"),
                "context", 126);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 126);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 126);
  emlrtAssign(&rhs126, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs126, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs126), "rhs", 126);
  emlrtAddField(*info, emlrtAliasP(lhs126), "lhs", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "context", 127);
  emlrtAddField(*info, emlrt_marshallOut("isnumerictype"), "name", 127);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 127);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isnumerictype.m"),
                "resolved", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933124U), "fileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 127);
  emlrtAssign(&rhs127, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs127, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs127), "rhs", 127);
  emlrtAddField(*info, emlrtAliasP(lhs127), "lhs", 127);
  emlrtDestroyArray(&rhs64);
  emlrtDestroyArray(&lhs64);
  emlrtDestroyArray(&rhs65);
  emlrtDestroyArray(&lhs65);
  emlrtDestroyArray(&rhs66);
  emlrtDestroyArray(&lhs66);
  emlrtDestroyArray(&rhs67);
  emlrtDestroyArray(&lhs67);
  emlrtDestroyArray(&rhs68);
  emlrtDestroyArray(&lhs68);
  emlrtDestroyArray(&rhs69);
  emlrtDestroyArray(&lhs69);
  emlrtDestroyArray(&rhs70);
  emlrtDestroyArray(&lhs70);
  emlrtDestroyArray(&rhs71);
  emlrtDestroyArray(&lhs71);
  emlrtDestroyArray(&rhs72);
  emlrtDestroyArray(&lhs72);
  emlrtDestroyArray(&rhs73);
  emlrtDestroyArray(&lhs73);
  emlrtDestroyArray(&rhs74);
  emlrtDestroyArray(&lhs74);
  emlrtDestroyArray(&rhs75);
  emlrtDestroyArray(&lhs75);
  emlrtDestroyArray(&rhs76);
  emlrtDestroyArray(&lhs76);
  emlrtDestroyArray(&rhs77);
  emlrtDestroyArray(&lhs77);
  emlrtDestroyArray(&rhs78);
  emlrtDestroyArray(&lhs78);
  emlrtDestroyArray(&rhs79);
  emlrtDestroyArray(&lhs79);
  emlrtDestroyArray(&rhs80);
  emlrtDestroyArray(&lhs80);
  emlrtDestroyArray(&rhs81);
  emlrtDestroyArray(&lhs81);
  emlrtDestroyArray(&rhs82);
  emlrtDestroyArray(&lhs82);
  emlrtDestroyArray(&rhs83);
  emlrtDestroyArray(&lhs83);
  emlrtDestroyArray(&rhs84);
  emlrtDestroyArray(&lhs84);
  emlrtDestroyArray(&rhs85);
  emlrtDestroyArray(&lhs85);
  emlrtDestroyArray(&rhs86);
  emlrtDestroyArray(&lhs86);
  emlrtDestroyArray(&rhs87);
  emlrtDestroyArray(&lhs87);
  emlrtDestroyArray(&rhs88);
  emlrtDestroyArray(&lhs88);
  emlrtDestroyArray(&rhs89);
  emlrtDestroyArray(&lhs89);
  emlrtDestroyArray(&rhs90);
  emlrtDestroyArray(&lhs90);
  emlrtDestroyArray(&rhs91);
  emlrtDestroyArray(&lhs91);
  emlrtDestroyArray(&rhs92);
  emlrtDestroyArray(&lhs92);
  emlrtDestroyArray(&rhs93);
  emlrtDestroyArray(&lhs93);
  emlrtDestroyArray(&rhs94);
  emlrtDestroyArray(&lhs94);
  emlrtDestroyArray(&rhs95);
  emlrtDestroyArray(&lhs95);
  emlrtDestroyArray(&rhs96);
  emlrtDestroyArray(&lhs96);
  emlrtDestroyArray(&rhs97);
  emlrtDestroyArray(&lhs97);
  emlrtDestroyArray(&rhs98);
  emlrtDestroyArray(&lhs98);
  emlrtDestroyArray(&rhs99);
  emlrtDestroyArray(&lhs99);
  emlrtDestroyArray(&rhs100);
  emlrtDestroyArray(&lhs100);
  emlrtDestroyArray(&rhs101);
  emlrtDestroyArray(&lhs101);
  emlrtDestroyArray(&rhs102);
  emlrtDestroyArray(&lhs102);
  emlrtDestroyArray(&rhs103);
  emlrtDestroyArray(&lhs103);
  emlrtDestroyArray(&rhs104);
  emlrtDestroyArray(&lhs104);
  emlrtDestroyArray(&rhs105);
  emlrtDestroyArray(&lhs105);
  emlrtDestroyArray(&rhs106);
  emlrtDestroyArray(&lhs106);
  emlrtDestroyArray(&rhs107);
  emlrtDestroyArray(&lhs107);
  emlrtDestroyArray(&rhs108);
  emlrtDestroyArray(&lhs108);
  emlrtDestroyArray(&rhs109);
  emlrtDestroyArray(&lhs109);
  emlrtDestroyArray(&rhs110);
  emlrtDestroyArray(&lhs110);
  emlrtDestroyArray(&rhs111);
  emlrtDestroyArray(&lhs111);
  emlrtDestroyArray(&rhs112);
  emlrtDestroyArray(&lhs112);
  emlrtDestroyArray(&rhs113);
  emlrtDestroyArray(&lhs113);
  emlrtDestroyArray(&rhs114);
  emlrtDestroyArray(&lhs114);
  emlrtDestroyArray(&rhs115);
  emlrtDestroyArray(&lhs115);
  emlrtDestroyArray(&rhs116);
  emlrtDestroyArray(&lhs116);
  emlrtDestroyArray(&rhs117);
  emlrtDestroyArray(&lhs117);
  emlrtDestroyArray(&rhs118);
  emlrtDestroyArray(&lhs118);
  emlrtDestroyArray(&rhs119);
  emlrtDestroyArray(&lhs119);
  emlrtDestroyArray(&rhs120);
  emlrtDestroyArray(&lhs120);
  emlrtDestroyArray(&rhs121);
  emlrtDestroyArray(&lhs121);
  emlrtDestroyArray(&rhs122);
  emlrtDestroyArray(&lhs122);
  emlrtDestroyArray(&rhs123);
  emlrtDestroyArray(&lhs123);
  emlrtDestroyArray(&rhs124);
  emlrtDestroyArray(&lhs124);
  emlrtDestroyArray(&rhs125);
  emlrtDestroyArray(&lhs125);
  emlrtDestroyArray(&rhs126);
  emlrtDestroyArray(&lhs126);
  emlrtDestroyArray(&rhs127);
  emlrtDestroyArray(&lhs127);
}

/*
 * Arguments    : const mxArray **info
 * Return Type  : void
 */
static void c_info_helper(const mxArray **info)
{
  const mxArray *rhs128 = NULL;
  const mxArray *lhs128 = NULL;
  const mxArray *rhs129 = NULL;
  const mxArray *lhs129 = NULL;
  const mxArray *rhs130 = NULL;
  const mxArray *lhs130 = NULL;
  const mxArray *rhs131 = NULL;
  const mxArray *lhs131 = NULL;
  const mxArray *rhs132 = NULL;
  const mxArray *lhs132 = NULL;
  const mxArray *rhs133 = NULL;
  const mxArray *lhs133 = NULL;
  const mxArray *rhs134 = NULL;
  const mxArray *lhs134 = NULL;
  const mxArray *rhs135 = NULL;
  const mxArray *lhs135 = NULL;
  const mxArray *rhs136 = NULL;
  const mxArray *lhs136 = NULL;
  const mxArray *rhs137 = NULL;
  const mxArray *lhs137 = NULL;
  const mxArray *rhs138 = NULL;
  const mxArray *lhs138 = NULL;
  const mxArray *rhs139 = NULL;
  const mxArray *lhs139 = NULL;
  const mxArray *rhs140 = NULL;
  const mxArray *lhs140 = NULL;
  const mxArray *rhs141 = NULL;
  const mxArray *lhs141 = NULL;
  const mxArray *rhs142 = NULL;
  const mxArray *lhs142 = NULL;
  const mxArray *rhs143 = NULL;
  const mxArray *lhs143 = NULL;
  const mxArray *rhs144 = NULL;
  const mxArray *lhs144 = NULL;
  const mxArray *rhs145 = NULL;
  const mxArray *lhs145 = NULL;
  const mxArray *rhs146 = NULL;
  const mxArray *lhs146 = NULL;
  const mxArray *rhs147 = NULL;
  const mxArray *lhs147 = NULL;
  const mxArray *rhs148 = NULL;
  const mxArray *lhs148 = NULL;
  const mxArray *rhs149 = NULL;
  const mxArray *lhs149 = NULL;
  const mxArray *rhs150 = NULL;
  const mxArray *lhs150 = NULL;
  const mxArray *rhs151 = NULL;
  const mxArray *lhs151 = NULL;
  const mxArray *rhs152 = NULL;
  const mxArray *lhs152 = NULL;
  const mxArray *rhs153 = NULL;
  const mxArray *lhs153 = NULL;
  const mxArray *rhs154 = NULL;
  const mxArray *lhs154 = NULL;
  const mxArray *rhs155 = NULL;
  const mxArray *lhs155 = NULL;
  const mxArray *rhs156 = NULL;
  const mxArray *lhs156 = NULL;
  const mxArray *rhs157 = NULL;
  const mxArray *lhs157 = NULL;
  const mxArray *rhs158 = NULL;
  const mxArray *lhs158 = NULL;
  const mxArray *rhs159 = NULL;
  const mxArray *lhs159 = NULL;
  const mxArray *rhs160 = NULL;
  const mxArray *lhs160 = NULL;
  const mxArray *rhs161 = NULL;
  const mxArray *lhs161 = NULL;
  const mxArray *rhs162 = NULL;
  const mxArray *lhs162 = NULL;
  const mxArray *rhs163 = NULL;
  const mxArray *lhs163 = NULL;
  const mxArray *rhs164 = NULL;
  const mxArray *lhs164 = NULL;
  const mxArray *rhs165 = NULL;
  const mxArray *lhs165 = NULL;
  const mxArray *rhs166 = NULL;
  const mxArray *lhs166 = NULL;
  const mxArray *rhs167 = NULL;
  const mxArray *lhs167 = NULL;
  const mxArray *rhs168 = NULL;
  const mxArray *lhs168 = NULL;
  const mxArray *rhs169 = NULL;
  const mxArray *lhs169 = NULL;
  const mxArray *rhs170 = NULL;
  const mxArray *lhs170 = NULL;
  const mxArray *rhs171 = NULL;
  const mxArray *lhs171 = NULL;
  const mxArray *rhs172 = NULL;
  const mxArray *lhs172 = NULL;
  const mxArray *rhs173 = NULL;
  const mxArray *lhs173 = NULL;
  const mxArray *rhs174 = NULL;
  const mxArray *lhs174 = NULL;
  const mxArray *rhs175 = NULL;
  const mxArray *lhs175 = NULL;
  const mxArray *rhs176 = NULL;
  const mxArray *lhs176 = NULL;
  const mxArray *rhs177 = NULL;
  const mxArray *lhs177 = NULL;
  const mxArray *rhs178 = NULL;
  const mxArray *lhs178 = NULL;
  const mxArray *rhs179 = NULL;
  const mxArray *lhs179 = NULL;
  const mxArray *rhs180 = NULL;
  const mxArray *lhs180 = NULL;
  const mxArray *rhs181 = NULL;
  const mxArray *lhs181 = NULL;
  const mxArray *rhs182 = NULL;
  const mxArray *lhs182 = NULL;
  const mxArray *rhs183 = NULL;
  const mxArray *lhs183 = NULL;
  const mxArray *rhs184 = NULL;
  const mxArray *lhs184 = NULL;
  const mxArray *rhs185 = NULL;
  const mxArray *lhs185 = NULL;
  const mxArray *rhs186 = NULL;
  const mxArray *lhs186 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "context", 128);
  emlrtAddField(*info, emlrt_marshallOut("isfimath"), "name", 128);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfimath.m"),
                "resolved", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933124U), "fileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 128);
  emlrtAssign(&rhs128, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs128, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs128), "rhs", 128);
  emlrtAddField(*info, emlrtAliasP(lhs128), "lhs", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m!firstfi"),
                "context", 129);
  emlrtAddField(*info, emlrt_marshallOut("isfi"), "name", 129);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfi.m"),
                "resolved", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933124U), "fileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 129);
  emlrtAssign(&rhs129, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs129, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs129), "rhs", 129);
  emlrtAddField(*info, emlrtAliasP(lhs129), "lhs", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_bin_extremum"),
                "context", 130);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                130);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "resolved", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 130);
  emlrtAssign(&rhs130, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs130, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs130), "rhs", 130);
  emlrtAddField(*info, emlrtAliasP(lhs130), "lhs", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "context", 131);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAllocNoCheck"),
                "name", 131);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"),
                "resolved", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(1410462290U), "fileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 131);
  emlrtAssign(&rhs131, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs131, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs131), "rhs", 131);
  emlrtAddField(*info, emlrtAliasP(lhs131), "lhs", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_scalar_bin_extremum"),
                "context", 132);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 132);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 132);
  emlrtAssign(&rhs132, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs132, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs132), "rhs", 132);
  emlrtAddField(*info, emlrtAliasP(lhs132), "lhs", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_scalar_bin_extremum"),
                "context", 133);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 133);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 133);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 133);
  emlrtAssign(&rhs133, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs133, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs133), "rhs", 133);
  emlrtAddField(*info, emlrtAliasP(lhs133), "lhs", 133);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!r2br_r2dit_trig"),
                "context", 134);
  emlrtAddField(*info, emlrt_marshallOut("max"), "name", 134);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 134);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/max.m"),
                "resolved", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933126U), "fileTimeLo", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 134);
  emlrtAssign(&rhs134, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs134, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs134), "rhs", 134);
  emlrtAddField(*info, emlrtAliasP(lhs134), "lhs", 134);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/max.m"),
                "context", 135);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.minOrMax"), "name", 135);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 135);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m"),
                "resolved", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(1426798042U), "fileTimeLo", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 135);
  emlrtAssign(&rhs135, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs135, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs135), "rhs", 135);
  emlrtAddField(*info, emlrtAliasP(lhs135), "lhs", 135);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!r2br_r2dit_trig"),
                "context", 136);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexDivide"), "name",
                136);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 136);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexDivide.m"),
                "resolved", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(1372608360U), "fileTimeLo", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 136);
  emlrtAssign(&rhs136, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs136, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs136), "rhs", 136);
  emlrtAddField(*info, emlrtAliasP(lhs136), "lhs", 136);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!r2br_r2dit_trig"),
                "context", 137);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexDivide"), "name",
                137);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 137);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexDivide.m"),
                "resolved", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(1372608360U), "fileTimeLo", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 137);
  emlrtAssign(&rhs137, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs137, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs137), "rhs", 137);
  emlrtAddField(*info, emlrtAliasP(lhs137), "lhs", 137);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!r2br_r2dit_trig"),
                "context", 138);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 138);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 138);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 138);
  emlrtAssign(&rhs138, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs138, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs138), "rhs", 138);
  emlrtAddField(*info, emlrtAliasP(lhs138), "lhs", 138);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!make_1q_cosine_table"),
                "context", 139);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexDivide"), "name",
                139);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 139);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexDivide.m"),
                "resolved", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(1372608360U), "fileTimeLo", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 139);
  emlrtAssign(&rhs139, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs139, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs139), "rhs", 139);
  emlrtAddField(*info, emlrtAliasP(lhs139), "lhs", 139);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!make_1q_cosine_table"),
                "context", 140);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 140);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 140);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933134U), "fileTimeLo", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 140);
  emlrtAssign(&rhs140, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs140, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs140), "rhs", 140);
  emlrtAddField(*info, emlrtAliasP(lhs140), "lhs", 140);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!make_1q_cosine_table"),
                "context", 141);
  emlrtAddField(*info, emlrt_marshallOut("cos"), "name", 141);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 141);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/cos.m"),
                "resolved", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 141);
  emlrtAssign(&rhs141, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs141, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs141), "rhs", 141);
  emlrtAddField(*info, emlrtAliasP(lhs141), "lhs", 141);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!make_1q_cosine_table"),
                "context", 142);
  emlrtAddField(*info, emlrt_marshallOut("sin"), "name", 142);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 142);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/sin.m"),
                "resolved", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 142);
  emlrtAssign(&rhs142, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs142, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs142), "rhs", 142);
  emlrtAddField(*info, emlrtAliasP(lhs142), "lhs", 142);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/sin.m"),
                "context", 143);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.sin"), "name",
                143);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 143);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/sin.m"),
                "resolved", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 143);
  emlrtAssign(&rhs143, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs143, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs143), "rhs", 143);
  emlrtAddField(*info, emlrtAliasP(lhs143), "lhs", 143);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/sin.m"),
                "context", 144);
  emlrtAddField(*info, emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 144);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 144);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(1422909400U), "fileTimeLo", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 144);
  emlrtAssign(&rhs144, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs144, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs144), "rhs", 144);
  emlrtAddField(*info, emlrtAliasP(lhs144), "lhs", 144);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 145);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalar.sin"), "name",
                145);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 145);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/sin.m"),
                "resolved", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933114U), "fileTimeLo", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 145);
  emlrtAssign(&rhs145, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs145, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs145), "rhs", 145);
  emlrtAddField(*info, emlrtAliasP(lhs145), "lhs", 145);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!make_twiddle_table"),
                "context", 146);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 146);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 146);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 146);
  emlrtAssign(&rhs146, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs146, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs146), "rhs", 146);
  emlrtAddField(*info, emlrtAliasP(lhs146), "lhs", 146);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                "context", 147);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 147);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 147);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(1395953456U), "fileTimeLo", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 147);
  emlrtAssign(&rhs147, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs147, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs147), "rhs", 147);
  emlrtAddField(*info, emlrtAliasP(lhs147), "lhs", 147);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!make_twiddle_table"),
                "context", 148);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 148);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 148);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933134U), "fileTimeLo", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 148);
  emlrtAssign(&rhs148, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs148, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs148), "rhs", 148);
  emlrtAddField(*info, emlrtAliasP(lhs148), "lhs", 148);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!r2br_r2dit_trig"),
                "context", 149);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 149);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 149);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933134U), "fileTimeLo", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 149);
  emlrtAssign(&rhs149, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs149, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs149), "rhs", 149);
  emlrtAddField(*info, emlrtAliasP(lhs149), "lhs", 149);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fft.m!r2br_r2dit_trig"),
                "context", 150);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 150);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 150);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 150);
  emlrtAssign(&rhs150, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs150, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs150), "rhs", 150);
  emlrtAddField(*info, emlrtAliasP(lhs150), "lhs", 150);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_fft.m"),
                "context", 151);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 151);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 151);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 151);
  emlrtAssign(&rhs151, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs151, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs151), "rhs", 151);
  emlrtAddField(*info, emlrtAliasP(lhs151), "lhs", 151);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/div.m!eml_fldiv"),
                "context", 152);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 152);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 152);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(1430241968U), "fileTimeLo", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 152);
  emlrtAssign(&rhs152, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs152, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs152), "rhs", 152);
  emlrtAddField(*info, emlrtAliasP(lhs152), "lhs", 152);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/div.m!eml_fldiv"),
                "context", 153);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                153);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 153);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "resolved", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933116U), "fileTimeLo", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 153);
  emlrtAssign(&rhs153, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs153, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs153), "rhs", 153);
  emlrtAddField(*info, emlrtAliasP(lhs153), "lhs", 153);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m!equalsize"),
                "context", 154);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 154);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 154);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933134U), "fileTimeLo", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 154);
  emlrtAssign(&rhs154, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs154, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs154), "rhs", 154);
  emlrtAddField(*info, emlrtAliasP(lhs154), "lhs", 154);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/div.m!eml_fldiv"),
                "context", 155);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 155);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 155);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 155);
  emlrtAssign(&rhs155, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs155, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs155), "rhs", 155);
  emlrtAddField(*info, emlrtAliasP(lhs155), "lhs", 155);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/pwelch_trans.m"),
                "context", 156);
  emlrtAddField(*info, emlrt_marshallOut("compute_psd"), "name", 156);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 156);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_psd.m"),
                "resolved", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(1458489534U), "fileTimeLo", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 156);
  emlrtAssign(&rhs156, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs156, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs156), "rhs", 156);
  emlrtAddField(*info, emlrtAliasP(lhs156), "lhs", 156);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_psd.m"),
                "context", 157);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 157);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 157);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 157);
  emlrtAssign(&rhs157, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs157, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs157), "rhs", 157);
  emlrtAddField(*info, emlrtAliasP(lhs157), "lhs", 157);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_psd.m"),
                "context", 158);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 158);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 158);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 158);
  emlrtAssign(&rhs158, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs158, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs158), "rhs", 158);
  emlrtAddField(*info, emlrtAliasP(lhs158), "lhs", 158);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_psd.m"),
                "context", 159);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 159);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 159);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 159);
  emlrtAssign(&rhs159, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs159, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs159), "rhs", 159);
  emlrtAddField(*info, emlrtAliasP(lhs159), "lhs", 159);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_psd.m"),
                "context", 160);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 160);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 160);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "resolved", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "fileTimeLo", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 160);
  emlrtAssign(&rhs160, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs160, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs160), "rhs", 160);
  emlrtAddField(*info, emlrtAliasP(lhs160), "lhs", 160);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/get_coherence.m"),
                "context", 161);
  emlrtAddField(*info, emlrt_marshallOut("cpsd_trans"), "name", 161);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 161);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "resolved", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(1458524444U), "fileTimeLo", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 161);
  emlrtAssign(&rhs161, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs161, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs161), "rhs", 161);
  emlrtAddField(*info, emlrtAliasP(lhs161), "lhs", 161);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 162);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.length"), "name", 162);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 162);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/length.m"),
                "resolved", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(1429654458U), "fileTimeLo", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 162);
  emlrtAssign(&rhs162, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs162, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs162), "rhs", 162);
  emlrtAddField(*info, emlrtAliasP(lhs162), "lhs", 162);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 163);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 163);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 163);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 163);
  emlrtAssign(&rhs163, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs163, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs163), "rhs", 163);
  emlrtAddField(*info, emlrtAliasP(lhs163), "lhs", 163);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 164);
  emlrtAddField(*info, emlrt_marshallOut("fix"), "name", 164);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 164);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/fix.m"),
                "resolved", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 164);
  emlrtAssign(&rhs164, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs164, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs164), "rhs", 164);
  emlrtAddField(*info, emlrtAliasP(lhs164), "lhs", 164);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 165);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 165);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 165);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "resolved", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "fileTimeLo", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 165);
  emlrtAssign(&rhs165, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs165, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs165), "rhs", 165);
  emlrtAddField(*info, emlrtAliasP(lhs165), "lhs", 165);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 166);
  emlrtAddField(*info, emlrt_marshallOut("def_hamming"), "name", 166);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 166);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/def_hamming.m"),
                "resolved", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(1458491681U), "fileTimeLo", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 166);
  emlrtAssign(&rhs166, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs166, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs166), "rhs", 166);
  emlrtAddField(*info, emlrtAliasP(lhs166), "lhs", 166);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 167);
  emlrtAddField(*info, emlrt_marshallOut("linspace"), "name", 167);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 167);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/linspace.m"),
                "resolved", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 167);
  emlrtAssign(&rhs167, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs167, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs167), "rhs", 167);
  emlrtAddField(*info, emlrtAliasP(lhs167), "lhs", 167);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 168);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 168);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 168);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 168);
  emlrtAssign(&rhs168, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs168, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs168), "rhs", 168);
  emlrtAddField(*info, emlrtAliasP(lhs168), "lhs", 168);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 169);
  emlrtAddField(*info, emlrt_marshallOut("compute_cross_fft"), "name", 169);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 169);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_cross_fft.m"),
                "resolved", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(1458492735U), "fileTimeLo", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 169);
  emlrtAssign(&rhs169, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs169, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs169), "rhs", 169);
  emlrtAddField(*info, emlrtAliasP(lhs169), "lhs", 169);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_cross_fft.m"),
                "context", 170);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 170);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 170);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933138U), "fileTimeLo", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 170);
  emlrtAssign(&rhs170, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs170, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs170), "rhs", 170);
  emlrtAddField(*info, emlrtAliasP(lhs170), "lhs", 170);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_cross_fft.m"),
                "context", 171);
  emlrtAddField(*info, emlrt_marshallOut("fft"), "name", 171);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 171);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/fft.m"),
                "resolved", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933126U), "fileTimeLo", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 171);
  emlrtAssign(&rhs171, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs171, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs171), "rhs", 171);
  emlrtAddField(*info, emlrtAliasP(lhs171), "lhs", 171);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_cross_fft.m"),
                "context", 172);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 172);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 172);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(1438311020U), "fileTimeLo", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "mFileTimeLo", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 172);
  emlrtAssign(&rhs172, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs172, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs172), "rhs", 172);
  emlrtAddField(*info, emlrtAliasP(lhs172), "lhs", 172);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 173);
  emlrtAddField(*info, emlrt_marshallOut("compute_psd"), "name", 173);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 173);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/compute_psd.m"),
                "resolved", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(1458489534U), "fileTimeLo", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 173);
  emlrtAssign(&rhs173, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs173, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs173), "rhs", 173);
  emlrtAddField(*info, emlrtAliasP(lhs173), "lhs", 173);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 174);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 174);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 174);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 174);
  emlrtAssign(&rhs174, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs174, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs174), "rhs", 174);
  emlrtAddField(*info, emlrtAliasP(lhs174), "lhs", 174);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 175);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.useParforConst"),
                "name", 175);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 175);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParforConst.m"),
                "resolved", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(1420499698U), "fileTimeLo", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 175);
  emlrtAssign(&rhs175, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs175, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs175), "rhs", 175);
  emlrtAddField(*info, emlrtAliasP(lhs175), "lhs", 175);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 176);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 176);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 176);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933134U), "fileTimeLo", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 176);
  emlrtAssign(&rhs176, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs176, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs176), "rhs", 176);
  emlrtAddField(*info, emlrtAliasP(lhs176), "lhs", 176);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/abs.m"),
                "context", 177);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.xdlapy2"), "name", 177);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 177);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/xdlapy2.m"),
                "resolved", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(1424717692U), "fileTimeLo", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 177);
  emlrtAssign(&rhs177, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs177, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs177), "rhs", 177);
  emlrtAddField(*info, emlrtAliasP(lhs177), "lhs", 177);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/cpsd_trans.m"),
                "context", 178);
  emlrtAddField(*info, emlrt_marshallOut("power"), "name", 178);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 178);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m"),
                "resolved", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339030U), "fileTimeLo", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 178);
  emlrtAssign(&rhs178, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs178, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs178), "rhs", 178);
  emlrtAddField(*info, emlrtAliasP(lhs178), "lhs", 178);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/get_coherence.m"),
                "context", 179);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 179);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 179);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "resolved", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933140U), "fileTimeLo", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 179);
  emlrtAssign(&rhs179, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs179, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs179), "rhs", 179);
  emlrtAddField(*info, emlrtAliasP(lhs179), "lhs", 179);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpCompatible.m"),
                "context", 180);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 180);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 180);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isequal.m"),
                "resolved", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(1286843958U), "fileTimeLo", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 180);
  emlrtAssign(&rhs180, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs180, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs180), "rhs", 180);
  emlrtAddField(*info, emlrtAliasP(lhs180), "lhs", 180);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isequal.m"),
                "context", 181);
  emlrtAddField(*info, emlrt_marshallOut("eml_isequal_core"), "name", 181);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 181);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_isequal_core.m"),
                "resolved", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 181);
  emlrtAssign(&rhs181, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs181, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs181), "rhs", 181);
  emlrtAddField(*info, emlrtAliasP(lhs181), "lhs", 181);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_isequal_core.m"),
                "context", 182);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.narginchk"), "name",
                182);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 182);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(1363736158U), "fileTimeLo", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 182);
  emlrtAssign(&rhs182, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs182, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs182), "rhs", 182);
  emlrtAddField(*info, emlrtAliasP(lhs182), "lhs", 182);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "context", 183);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 183);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 183);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339028U), "fileTimeLo", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 183);
  emlrtAssign(&rhs183, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs183, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs183), "rhs", 183);
  emlrtAddField(*info, emlrtAliasP(lhs183), "lhs", 183);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_isequal_core.m!isequal_scalar"),
                "context", 184);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 184);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 184);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933132U), "fileTimeLo", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 184);
  emlrtAssign(&rhs184, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs184, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs184), "rhs", 184);
  emlrtAddField(*info, emlrtAliasP(lhs184), "lhs", 184);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m!scalar_expansion"),
                "context", 185);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 185);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 185);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(1415933134U), "fileTimeLo", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 185);
  emlrtAssign(&rhs185, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs185, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs185), "rhs", 185);
  emlrtAddField(*info, emlrtAliasP(lhs185), "lhs", 185);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]E:/ProgramData/Dropbox/EEGRoomPC/Zijing Mao/Compile/Coherence/get_coherence.m"),
                "context", 186);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 186);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 186);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]E:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(1419339026U), "fileTimeLo", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 186);
  emlrtAssign(&rhs186, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs186, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs186), "rhs", 186);
  emlrtAddField(*info, emlrtAliasP(lhs186), "lhs", 186);
  emlrtDestroyArray(&rhs128);
  emlrtDestroyArray(&lhs128);
  emlrtDestroyArray(&rhs129);
  emlrtDestroyArray(&lhs129);
  emlrtDestroyArray(&rhs130);
  emlrtDestroyArray(&lhs130);
  emlrtDestroyArray(&rhs131);
  emlrtDestroyArray(&lhs131);
  emlrtDestroyArray(&rhs132);
  emlrtDestroyArray(&lhs132);
  emlrtDestroyArray(&rhs133);
  emlrtDestroyArray(&lhs133);
  emlrtDestroyArray(&rhs134);
  emlrtDestroyArray(&lhs134);
  emlrtDestroyArray(&rhs135);
  emlrtDestroyArray(&lhs135);
  emlrtDestroyArray(&rhs136);
  emlrtDestroyArray(&lhs136);
  emlrtDestroyArray(&rhs137);
  emlrtDestroyArray(&lhs137);
  emlrtDestroyArray(&rhs138);
  emlrtDestroyArray(&lhs138);
  emlrtDestroyArray(&rhs139);
  emlrtDestroyArray(&lhs139);
  emlrtDestroyArray(&rhs140);
  emlrtDestroyArray(&lhs140);
  emlrtDestroyArray(&rhs141);
  emlrtDestroyArray(&lhs141);
  emlrtDestroyArray(&rhs142);
  emlrtDestroyArray(&lhs142);
  emlrtDestroyArray(&rhs143);
  emlrtDestroyArray(&lhs143);
  emlrtDestroyArray(&rhs144);
  emlrtDestroyArray(&lhs144);
  emlrtDestroyArray(&rhs145);
  emlrtDestroyArray(&lhs145);
  emlrtDestroyArray(&rhs146);
  emlrtDestroyArray(&lhs146);
  emlrtDestroyArray(&rhs147);
  emlrtDestroyArray(&lhs147);
  emlrtDestroyArray(&rhs148);
  emlrtDestroyArray(&lhs148);
  emlrtDestroyArray(&rhs149);
  emlrtDestroyArray(&lhs149);
  emlrtDestroyArray(&rhs150);
  emlrtDestroyArray(&lhs150);
  emlrtDestroyArray(&rhs151);
  emlrtDestroyArray(&lhs151);
  emlrtDestroyArray(&rhs152);
  emlrtDestroyArray(&lhs152);
  emlrtDestroyArray(&rhs153);
  emlrtDestroyArray(&lhs153);
  emlrtDestroyArray(&rhs154);
  emlrtDestroyArray(&lhs154);
  emlrtDestroyArray(&rhs155);
  emlrtDestroyArray(&lhs155);
  emlrtDestroyArray(&rhs156);
  emlrtDestroyArray(&lhs156);
  emlrtDestroyArray(&rhs157);
  emlrtDestroyArray(&lhs157);
  emlrtDestroyArray(&rhs158);
  emlrtDestroyArray(&lhs158);
  emlrtDestroyArray(&rhs159);
  emlrtDestroyArray(&lhs159);
  emlrtDestroyArray(&rhs160);
  emlrtDestroyArray(&lhs160);
  emlrtDestroyArray(&rhs161);
  emlrtDestroyArray(&lhs161);
  emlrtDestroyArray(&rhs162);
  emlrtDestroyArray(&lhs162);
  emlrtDestroyArray(&rhs163);
  emlrtDestroyArray(&lhs163);
  emlrtDestroyArray(&rhs164);
  emlrtDestroyArray(&lhs164);
  emlrtDestroyArray(&rhs165);
  emlrtDestroyArray(&lhs165);
  emlrtDestroyArray(&rhs166);
  emlrtDestroyArray(&lhs166);
  emlrtDestroyArray(&rhs167);
  emlrtDestroyArray(&lhs167);
  emlrtDestroyArray(&rhs168);
  emlrtDestroyArray(&lhs168);
  emlrtDestroyArray(&rhs169);
  emlrtDestroyArray(&lhs169);
  emlrtDestroyArray(&rhs170);
  emlrtDestroyArray(&lhs170);
  emlrtDestroyArray(&rhs171);
  emlrtDestroyArray(&lhs171);
  emlrtDestroyArray(&rhs172);
  emlrtDestroyArray(&lhs172);
  emlrtDestroyArray(&rhs173);
  emlrtDestroyArray(&lhs173);
  emlrtDestroyArray(&rhs174);
  emlrtDestroyArray(&lhs174);
  emlrtDestroyArray(&rhs175);
  emlrtDestroyArray(&lhs175);
  emlrtDestroyArray(&rhs176);
  emlrtDestroyArray(&lhs176);
  emlrtDestroyArray(&rhs177);
  emlrtDestroyArray(&lhs177);
  emlrtDestroyArray(&rhs178);
  emlrtDestroyArray(&lhs178);
  emlrtDestroyArray(&rhs179);
  emlrtDestroyArray(&lhs179);
  emlrtDestroyArray(&rhs180);
  emlrtDestroyArray(&lhs180);
  emlrtDestroyArray(&rhs181);
  emlrtDestroyArray(&lhs181);
  emlrtDestroyArray(&rhs182);
  emlrtDestroyArray(&lhs182);
  emlrtDestroyArray(&rhs183);
  emlrtDestroyArray(&lhs183);
  emlrtDestroyArray(&rhs184);
  emlrtDestroyArray(&lhs184);
  emlrtDestroyArray(&rhs185);
  emlrtDestroyArray(&lhs185);
  emlrtDestroyArray(&rhs186);
  emlrtDestroyArray(&lhs186);
}

/*
 * Arguments    : void
 * Return Type  : mxArray *
 */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xEntryPoints;
  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("get_coherence"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("8.6.0.267246 (R2015b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_get_coherence_info.c
 *
 * [EOF]
 */
