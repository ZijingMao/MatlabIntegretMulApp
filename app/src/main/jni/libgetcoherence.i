
%module GetCoherence
%{
#include "src/get_coherence/get_coherence.h"
%}

%include "carrays.i"
%include "typemaps.i"
%include "arrays_java.i"
%include "src/get_coherence/get_coherence.h"

/* Wrap a class interface around an "double *" */
%array_functions(double, doubleArray);

