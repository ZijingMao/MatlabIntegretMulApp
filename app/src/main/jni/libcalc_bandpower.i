
%module CalcBandpower
%{
#include "src/calc_bandpower/calc_bandpower.h"
%}

%include "carrays.i"
%include "typemaps.i"
%include "arrays_java.i"
%include "src/calc_bandpower/calc_bandpower.h"

/* Wrap a class interface around an "double *" */
%array_functions(double, doubleArray);

