LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# LOCAL_ARM_MODE := arm
LOCAL_MODULE := filecheck
LOCAL_SRC_FILES := filecheck.cpp

include $(BUILD_EXECUTABLE)