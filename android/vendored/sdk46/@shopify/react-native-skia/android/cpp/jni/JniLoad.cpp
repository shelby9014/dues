#include "JniPlatformContext.h"
#include "JniSkiaDrawView.h"
#include "JniSkiaManager.h"
#include <fbjni/fbjni.h>
#include <jni.h>

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *) {
    return facebook::jni::initialize(vm, [] {
        RNSkia::JniSkiaManager::registerNatives();
        RNSkia::JniSkiaDrawView::registerNatives();
        RNSkia::JniPlatformContext::registerNatives();
    });
}
