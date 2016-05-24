LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := CalcBandpower

LOCAL_SRC_FILES := $(wildcard $(LOCAL_PATH)/src/calc_bandpower/*.c)
LOCAL_SRC_FILES += libcalc_bandpower_wrap.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)\src\calc_bandpower

LOCAL_LDLIBS  +=  -llog -ldl
include $(BUILD_SHARED_LIBRARY)
