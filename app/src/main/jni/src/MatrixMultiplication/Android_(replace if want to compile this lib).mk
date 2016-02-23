LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := MatrixMultiplication

LOCAL_SRC_FILES := $(wildcard $(LOCAL_PATH)/src/MatrixMultiplication/*.c)
LOCAL_SRC_FILES += libmatrixmultiplication_wrap.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)\src\MatrixMultiplication

LOCAL_LDLIBS  +=  -llog -ldl
include $(BUILD_SHARED_LIBRARY)
