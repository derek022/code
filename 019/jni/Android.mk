LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# LOCAL_ARM_MODE := arm
LOCAL_MODULE := crypt
LOCAL_SRC_FILES := crypt.c

include $(BUILD_EXECUTABLE)