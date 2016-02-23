LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := BandpowerCalc

LOCAL_SRC_FILES := $(wildcard $(LOCAL_PATH)/src/fft_bandpower_calculate/*.c)
LOCAL_SRC_FILES += libfft_bandpower_calc_wrap.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)\src\fft_bandpower_calculate

LOCAL_LDLIBS  +=  -llog -ldl
include $(BUILD_SHARED_LIBRARY)
