LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# LOCAL_ARM_MODE := arm
LOCAL_MODULE := calculator
LOCAL_SRC_FILES := calculator.c

include $(BUILD_EXECUTABLE)