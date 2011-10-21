/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_phono_audio_codec_g722_NativeG722Codec */

#ifndef _Included_com_phono_audio_codec_g722_NativeG722Codec
#define _Included_com_phono_audio_codec_g722_NativeG722Codec
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_phono_audio_codec_g722_NativeG722Codec
 * Method:    initCodec
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_phono_audio_codec_g722_NativeG722Codec_initCodec
  (JNIEnv *, jobject);

/*
 * Class:     com_phono_audio_codec_g722_NativeG722Codec
 * Method:    g722Encode
 * Signature: ([B[S[B)V
 */
JNIEXPORT void JNICALL Java_com_phono_audio_codec_g722_NativeG722Codec_g722Encode
  (JNIEnv *, jobject, jbyteArray, jshortArray, jbyteArray);

/*
 * Class:     com_phono_audio_codec_g722_NativeG722Codec
 * Method:    g722Decode
 * Signature: ([B[B[S)V
 */
JNIEXPORT void JNICALL Java_com_phono_audio_codec_g722_NativeG722Codec_g722Decode
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jshortArray);

/*
 * Class:     com_phono_audio_codec_g722_NativeG722Codec
 * Method:    freeCodec
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_phono_audio_codec_g722_NativeG722Codec_freeCodec
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
