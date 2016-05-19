/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fir1_window.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fir1_window.h"
#include "fir1_window_emxutil.h"
#include "firfilter.h"
#include "fkernel.h"
#include "hamming.h"

/* Function Definitions */

/*
 * Arguments    : double input[768]
 *                double low
 *                double high
 * Return Type  : void
 */
void fir1_window(double input[768], double low, double high)
{
  int ixstart;
  double mtmp;
  int ix;
  boolean_T exitg2;
  emxArray_real_T *winArray;
  emxArray_real_T *b_winArray;
  double filtorder;
  emxArray_real_T *b;
  boolean_T exitg1;
  emxArray_real_T *c_winArray;

  /* % do high pass first */
  /*  filtorder = 1690; */
  ixstart = 1;
  mtmp = low * 0.25;
  if (rtIsNaN(low * 0.25)) {
    ixstart = 2;
    mtmp = 2.0;
  }

  if ((ixstart < 2) && (2.0 > mtmp)) {
    mtmp = 2.0;
  }

  ixstart = 1;
  if (rtIsNaN(mtmp)) {
    ix = 2;
    exitg2 = false;
    while ((!exitg2) && (ix < 3)) {
      ixstart = 2;
      if (!rtIsNaN(low)) {
        mtmp = low;
        exitg2 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (low < mtmp)) {
    mtmp = low;
  }

  emxInit_real_T1(&winArray, 1);
  emxInit_real_T(&b_winArray, 2);

  /*  Hamming window */
  filtorder = ceil(3.3 / (mtmp / 256.0) / 2.0) * 2.0;

  /*  Filter order must be even. */
  hamming(filtorder + 1.0, winArray);
  ixstart = winArray->size[0];
  ix = b_winArray->size[0] * b_winArray->size[1];
  b_winArray->size[0] = 1;
  b_winArray->size[1] = ixstart;
  emxEnsureCapacity((emxArray__common *)b_winArray, ix, (int)sizeof(double));
  for (ix = 0; ix < ixstart; ix++) {
    b_winArray->data[b_winArray->size[0] * ix] = winArray->data[ix];
  }

  emxInit_real_T(&b, 2);
  fkernel(filtorder, (low + -mtmp / 2.0) / 128.0 / 2.0, b_winArray, b);
  ix = b->size[0] * b->size[1];
  b->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)b, ix, (int)sizeof(double));
  ixstart = b->size[0];
  ix = b->size[1];
  ixstart *= ix;
  emxFree_real_T(&b_winArray);
  for (ix = 0; ix < ixstart; ix++) {
    b->data[ix] = -b->data[ix];
  }

  b->data[b->size[0] * ((int)(((double)b->size[1] - 1.0) / 2.0 + 1.0) - 1)]++;
  firfilter(input, b);

  /* % do low pass */
  /*  filtorder = 1690; */
  ixstart = 1;
  mtmp = high * 0.25;
  if (rtIsNaN(high * 0.25)) {
    ixstart = 2;
    mtmp = 2.0;
  }

  if ((ixstart < 2) && (2.0 > mtmp)) {
    mtmp = 2.0;
  }

  ixstart = 1;
  if (rtIsNaN(mtmp)) {
    ix = 2;
    exitg1 = false;
    while ((!exitg1) && (ix < 3)) {
      ixstart = 2;
      if (!rtIsNaN(128.0 - high)) {
        mtmp = 128.0 - high;
        exitg1 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (128.0 - high < mtmp)) {
    mtmp = 128.0 - high;
  }

  emxInit_real_T(&c_winArray, 2);

  /*  Hamming window */
  filtorder = ceil(3.3 / (mtmp / 256.0) / 2.0) * 2.0;

  /*  Filter order must be even. */
  hamming(filtorder + 1.0, winArray);
  ixstart = winArray->size[0];
  ix = c_winArray->size[0] * c_winArray->size[1];
  c_winArray->size[0] = 1;
  c_winArray->size[1] = ixstart;
  emxEnsureCapacity((emxArray__common *)c_winArray, ix, (int)sizeof(double));
  for (ix = 0; ix < ixstart; ix++) {
    c_winArray->data[c_winArray->size[0] * ix] = winArray->data[ix];
  }

  emxFree_real_T(&winArray);
  fkernel(filtorder, (high + mtmp / 2.0) / 128.0 / 2.0, c_winArray, b);
  firfilter(input, b);
  emxFree_real_T(&c_winArray);
  emxFree_real_T(&b);
}

/*
 * File trailer for fir1_window.c
 *
 * [EOF]
 */
