LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# LOCAL_ARM_MODE := arm
LOCAL_MODULE := bubble
LOCAL_SRC_FILES := bubble.c

include $(BUILD_EXECUTABLE)