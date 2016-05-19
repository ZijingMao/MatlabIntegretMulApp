LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := CoherenceCalc

LOCAL_SRC_FILES := $(wildcard $(LOCAL_PATH)/src/get_coherence/*.c)
LOCAL_SRC_FILES += libgetcoherence_wrap.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)\src\get_coherence

LOCAL_LDLIBS  +=  -llog -ldl
include $(BUILD_SHARED_LIBRARY)
