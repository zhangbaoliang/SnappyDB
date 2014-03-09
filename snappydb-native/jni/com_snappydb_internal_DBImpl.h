/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_snappydb_internal_DBImpl */

#ifndef _Included_com_snappydb_internal_DBImpl
#define _Included_com_snappydb_internal_DBImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1close
  (JNIEnv *, jobject);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __open
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __destroy
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1destroy
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __put
 * Signature: (Ljava/lang/String;[B)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1put__Ljava_lang_String_2_3B
  (JNIEnv *, jobject, jstring, jbyteArray);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __put
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1put__Ljava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __putShort
 * Signature: (Ljava/lang/String;S)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1putShort
  (JNIEnv *, jobject, jstring, jshort);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __putInt
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1putInt
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __putBoolean
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1putBoolean
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __putDouble
 * Signature: (Ljava/lang/String;D)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1putDouble
  (JNIEnv *, jobject, jstring, jdouble);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __putFloat
 * Signature: (Ljava/lang/String;F)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1putFloat
  (JNIEnv *, jobject, jstring, jfloat);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __putLong
 * Signature: (Ljava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1putLong
  (JNIEnv *, jobject, jstring, jlong);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __del
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_snappydb_internal_DBImpl__1_1del
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __getBytes
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_snappydb_internal_DBImpl__1_1getBytes
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __get
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_snappydb_internal_DBImpl__1_1get
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __getShort
 * Signature: (Ljava/lang/String;)S
 */
JNIEXPORT jshort JNICALL Java_com_snappydb_internal_DBImpl__1_1getShort
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __getInt
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_snappydb_internal_DBImpl__1_1getInt
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __getBoolean
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_snappydb_internal_DBImpl__1_1getBoolean
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __getDouble
 * Signature: (Ljava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_com_snappydb_internal_DBImpl__1_1getDouble
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __getLong
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_snappydb_internal_DBImpl__1_1getLong
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __getFloat
 * Signature: (Ljava/lang/String;)F
 */
JNIEXPORT jfloat JNICALL Java_com_snappydb_internal_DBImpl__1_1getFloat
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_snappydb_internal_DBImpl
 * Method:    __exists
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_snappydb_internal_DBImpl__1_1exists
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
