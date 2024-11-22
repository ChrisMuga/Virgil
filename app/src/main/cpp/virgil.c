#include <stdio.h>
#include <jni.h>


JNIEXPORT jstring JNICALL
Java_com_example_virgil_MainActivity_sayHello(JNIEnv *env, jobject thiz) {
   char greeting[2] = "Hi";
   return (env)->NewStringUTF((char *) greeting);
}

JNIEXPORT void JNICALL
Java_com_example_virgil_MainActivity_prompt(JNIEnv *env, jobject thiz) {
    printf("====> Discipline == Freedom");
}