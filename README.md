Integrate Matlab Function Into Android App
===============================


###Required software and tools
* [Swig](http://www.swig.org/download.html)
* [MinGW](http://www.mingw.org/)
* [Android Studio](http://developer.android.com/sdk/index.html)
* [Matlab](http://www.mathworks.com/products/matlab/?refresh=true)

**Note:** 
NDK required to be installed first in Android studio
Matlab coder required to be installed first in Matlab


###Step 1. Matlab to C/C++ code

Write simple multiplication matlab code (see .\matlab_source_code)
```Matlab
function [ c ] = matrix_multiplication( a, b )
    c = a * b;
end

a = [1, 2, 3; 4, 5, 6];
b = [1, 2; 3, 4; 5, 6];
c = matrix_multiplication(a, b);
```

Convert Matlab code to C code using coder (see ...app\src\main\jni\src\MatrixMultiplication)

**See Ref. [1-4]**


###Step 2. C/C++ code with JNI wrapper

1. Create jni folder under main folder
2. Put C/C++ code into jni folder
3. Write Android.mk & Application.mk file following given references
4. Write interface file (in this example is: _libmatrixmultiplication.i_) following given reference
5. Execute command line to compile C/C++ to .so using NDK 
(this will auto generate .so file into ...app\src\main\libs\armeabi)

```bash
>$cd app\src\main
>#exec swig with interface to generate swig wrapper for C/C++
>$c:\swigwin-3.0.8\swig.exe -java -package com.matrixmultiplication -outdir 
..\java\com\matrixmultiplication -o libmatrixmultiplication_wrap.c libmatrixmultiplication.i
>#link all source and header based on the configuration of Android.mk file
>#notice the include $(BUILD_SHARED_LIBRARY) should be at last to prevent errors, 
if error still exist, see _ref[9]_ and _Potential Problems for NDK_
>$c:\NVPACK\android-ndk-r10e\ndk-build
```

**See Ref. [5-10]**


###Step 3. Call .so lib from Android Studio

1. Configure your build.gradle & gradle.properties following ref[6,9] will most likely avoid building errors, 
if there still exists please google, should be easy/common problems
2. Call the compiled library using code under your wanted android activity or service:
```Java
    static {
        System.loadLibrary("MatrixMultiplication");
    }
```
3. Use the line to call function inside .so lib in onCreate or wherever you desired
```Java
    // DON'T FORGET TO IMPORT YOUR PACKAGE
    MatrixMultiplication.matrix_multiplication(a, b, c);
```

**Note:** 
If you want to use more straightforward JNA library, please refer to _ref[11-12]_


####Reference
1. [Matlab coder with iPhone & Android video tutorial](http://www.mathworks.com/videos/matlab-to-iphone-and-android-made-easy-107779.html)
2. [Matlab coder with Android code example](http://www.mathworks.com/matlabcentral/fileexchange/53027-matlab-to-android-made-easy-example-files?s_iid=ovp_custom2_4490175721001-107779_rr)
3. [Matlab coder video tutorial (Chinese)](http://v.youku.com/v_show/id_XMzA3MTA3NDQ4.html)
4. [Matlab coder document](http://www.mathworks.com/products/matlab-coder/code-examples.html)
5. [SWIG and Android](http://www.swig.org/Doc2.0/Android.html#Android_examples_intro)
6. [Android Studio, gradle and NDK integration](http://ph0b.com/android-studio-gradle-and-ndk-integration/)
7. [Compiling and Using a C++ Library on Android with Android Studio](http://kvurd.com/blog/compiling-a-cpp-library-for-android-with-android-studio/)
8. [Wrapping C++ code with JNI](http://www.sureshjoshi.com/mobile/android-ndk-in-android-studio-with-swig/)
9. [Android NDK in Android Studio with SWIG](http://www.sureshjoshi.com/mobile/android-ndk-in-android-studio-with-swig/)
10. [Wrapping C arrays with Java arrays](http://folk.uio.no/hpl/scripting/doc/swig/manual/Java.html#n46)
11. [Java Native Access(JNA)](https://github.com/java-native-access/jna)
12. [Easier way to access native code](http://www.javaworld.com/article/2077828/java-se/open-source-java-projects-java-native-access.html)

####Potential Problems for NDK
* [How to generate .so file in Android Studio With NDK](http://stackoverflow.com/questions/32443496/generate-so-file-in-android-studio)
* [Can't include C++ headers like vector in Android NDK](http://stackoverflow.com/questions/4893403/cant-include-c-headers-like-vector-in-android-ndk)

**Notice:** 
Normally the problem of not able to generate .so file is because _Application.mk_.

If the problem is like:

>error: vector: No such file or directory
>error: iostream: No such file or directory
>error: stdexcept: No such file or directory
>...

The question might also be in the swig interface file (see ...\app\src\main\jni\libmatrixmultiplication.i)
**remove** following code
```
%include "std_vector.i"
%include "std_string.i"
%include "exception.i"
...
```
if these headfiles are not required in your C/C++ code.