/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class weld_WeldJNI */

#ifndef _Included_weld_WeldJNI
#define _Included_weld_WeldJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     weld_WeldJNI
 * Method:    weld_value_new
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_weld_WeldJNI_weld_1value_1new
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_value_pointer
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_weld_WeldJNI_weld_1value_1pointer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_get_buffer_pointer
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_weld_WeldJNI_weld_1get_1buffer_1pointer
  (JNIEnv *, jclass, jobject);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_value_run
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_weld_WeldJNI_weld_1value_1run
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_value_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_weld_WeldJNI_weld_1value_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_module_compile
 * Signature: (Ljava/lang/String;JJ)J
 */
JNIEXPORT jlong JNICALL Java_weld_WeldJNI_weld_1module_1compile
  (JNIEnv *, jclass, jstring, jlong, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_module_run
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_weld_WeldJNI_weld_1module_1run
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_module_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_weld_WeldJNI_weld_1module_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_error_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_weld_WeldJNI_weld_1error_1new
  (JNIEnv *, jclass);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_error_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_weld_WeldJNI_weld_1error_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_error_code
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_weld_WeldJNI_weld_1error_1code
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_error_message
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_weld_WeldJNI_weld_1error_1message
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_conf_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_weld_WeldJNI_weld_1conf_1new
  (JNIEnv *, jclass);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_conf_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_weld_WeldJNI_weld_1conf_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_conf_get
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_weld_WeldJNI_weld_1conf_1get
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     weld_WeldJNI
 * Method:    weld_conf_set
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_weld_WeldJNI_weld_1conf_1set
  (JNIEnv *, jclass, jlong, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
