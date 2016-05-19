/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: ipermute.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fir1_window.h"
#include "ipermute.h"
#include "fir1_window_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *b
 *                emxArray_real_T *a
 * Return Type  : void
 */
void ipermute(const emxArray_real_T *b, emxArray_real_T *a)
{
  int i0;
  int loop_ub;
  i0 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = b->size[0];
  emxEnsureCapacity((emxArray__common *)a, i0, (int)sizeof(double));
  loop_ub = b->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    a->data[a->size[0] * i0] = b->data[i0];
  }
}

/*
 * File trailer for ipermute.c
 *
 * [EOF]
 */
