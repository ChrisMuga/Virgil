#include <stdio.h>
#include <jni.h>
#include "loop_track.h"

extern "C"
JNIEXPORT void JNICALL
Java_com_example_virgil_MainActivity_prompt(JNIEnv *env, jobject thiz) {
    printf("Hello Worldo?");
    loop_track();
}