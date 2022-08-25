LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm
LOCAL_MODULE := user
LOCAL_SRC_FILES := userinfo.c

include $(BUILD_EXECUTABLE)