/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class storm_winlab_cps_JniImageMatching */

#ifndef _Included_storm_winlab_cps_JniImageMatching
#define _Included_storm_winlab_cps_JniImageMatching
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     storm_winlab_cps_JniImageMatching
 * Method:    initiate_database
 * Signature: (ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_storm_winlab_cps_JniImageMatching_initiate_1database
  (JNIEnv *, jclass, jint, jstring, jstring, jstring);

/*
 * Class:     storm_winlab_cps_JniImageMatching
 * Method:    initiate_imageMatching
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_storm_winlab_cps_JniImageMatching_initiate_1imageMatching
  (JNIEnv *, jclass, jstring, jstring, jstring);

/*
 * Class:     storm_winlab_cps_JniImageMatching
 * Method:    matchingIndex
 * Signature: (Ljava/lang/String;J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_storm_winlab_cps_JniImageMatching_matchingIndex__Ljava_lang_String_2J
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     storm_winlab_cps_JniImageMatching
 * Method:    releaseInitResource
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_storm_winlab_cps_JniImageMatching_releaseInitResource
  (JNIEnv *, jclass, jlong);

/*
 * Class:     storm_winlab_cps_JniImageMatching
 * Method:    matchingIndex
 * Signature: ([BI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_storm_winlab_cps_JniImageMatching_matchingIndex___3BI
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     storm_winlab_cps_JniImageMatching
 * Method:    getInfo
 * Signature: ()Ljava/lang/String;
 */
// JNIEXPORT jstring JNICALL Java_storm_winlab_cps_JniImageMatching_getInfo
//   (JNIEnv *, jclass);

/*
 * Class:     storm_winlab_cps_JniImageMatching
 * Method:    getLocation
 * Signature: ()Ljava/lang/String;
 */
// JNIEXPORT jstring JNICALL Java_storm_winlab_cps_JniImageMatching_getLocation
//   (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
