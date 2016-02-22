/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: main.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 21-Feb-2016 20:55:28
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "matrix_multiplication.h"
#include "main.h"
#include "matrix_multiplication_terminate.h"
#include "matrix_multiplication_initialize.h"

/* Function Declarations */
static void argInit_2x3_real_T(double result[6]);
static void argInit_3x2_real_T(double result[6]);
static double argInit_real_T(void);
static void main_matrix_multiplication(void);

/* Function Definitions */

/*
 * Arguments    : double result[6]
 * Return Type  : void
 */
static void argInit_2x3_real_T(double result[6])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 2; idx0++) {
    for (idx1 = 0; idx1 < 3; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + (idx1 << 1)] = argInit_real_T();
    }
  }
}

/*
 * Arguments    : double result[6]
 * Return Type  : void
 */
static void argInit_3x2_real_T(double result[6])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 3; idx0++) {
    for (idx1 = 0; idx1 < 2; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + 3 * idx1] = argInit_real_T();
    }
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_matrix_multiplication(void)
{
  double dv0[6];
  double dv1[6];
  double c[4];

  /* Initialize function 'matrix_multiplication' input arguments. */
  /* Initialize function input argument 'a'. */
  /* Initialize function input argument 'b'. */
  /* Call the entry-point 'matrix_multiplication'. */
  argInit_2x3_real_T(dv0);
  argInit_3x2_real_T(dv1);
  matrix_multiplication(dv0, dv1, c);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  matrix_multiplication_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_matrix_multiplication();

  /* Terminate the application.
     You do not need to do this more than one time. */
  matrix_multiplication_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
