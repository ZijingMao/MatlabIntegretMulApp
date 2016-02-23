/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: power.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 22-Feb-2016 20:51:15
 */

#ifndef __POWER_H__
#define __POWER_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "fft_bandpower_calculate_types.h"

/* Function Declarations */
extern void b_power(const double a_data[], const int a_size[2], double y_data[],
                    int y_size[2]);
extern void power(const double a[129], double y[129]);

#endif

/*
 * File trailer for power.h
 *
 * [EOF]
 */
