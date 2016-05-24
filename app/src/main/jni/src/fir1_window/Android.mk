LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := Fir1Window

LOCAL_SRC_FILES := $(wildcard $(LOCAL_PATH)/src/fir1_window/*.c)
LOCAL_SRC_FILES += libfir1_window_wrap.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)\src\fir1_window

LOCAL_LDLIBS  +=  -llog -ldl
include $(BUILD_SHARED_LIBRARY)
