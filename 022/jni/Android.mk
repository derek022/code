LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# LOCAL_ARM_MODE := arm
LOCAL_MODULE := checkport
LOCAL_SRC_FILES := checkport.cpp

include $(BUILD_EXECUTABLE)