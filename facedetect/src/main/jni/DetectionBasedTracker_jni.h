#include <jni.h>

/* Header for class ph_edu_dlsu_facedetect_DetectionBasedTracker */

#ifndef _Included_ph_edu_dlsu_facedetect_DetectionBasedTracker
#define _Included_ph_edu_dlsu_facedetect_DetectionBasedTracker



#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ph_edu_dlsu_facedetect_DetectionBasedTracker
 * Method:    nativeCreateObject
 * Signature: (Ljava/lang/String;F)J
 */
JNIEXPORT jlong JNICALL Java_ph_edu_dlsu_facedetect_DetectionBasedTracker_nativeCreateObject
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     ph_edu_dlsu_facedetect_DetectionBasedTracker
 * Method:    nativeDestroyObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ph_edu_dlsu_facedetect_DetectionBasedTracker_nativeDestroyObject
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ph_edu_dlsu_facedetect_DetectionBasedTracker
 * Method:    nativeStart
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ph_edu_dlsu_facedetect_DetectionBasedTracker_nativeStart
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ph_edu_dlsu_facedetect_DetectionBasedTracker
 * Method:    nativeStop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ph_edu_dlsu_facedetect_DetectionBasedTracker_nativeStop
  (JNIEnv *, jclass, jlong);

  /*
   * Class:     ph_edu_dlsu_facedetect_DetectionBasedTracker
   * Method:    nativeSetFaceSize
   * Signature: (JI)V
   */
  JNIEXPORT void JNICALL Java_ph_edu_dlsu_facedetect_DetectionBasedTracker_nativeSetFaceSize
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     ph_edu_dlsu_facedetect_DetectionBasedTracker
 * Method:    nativeDetect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_ph_edu_dlsu_facedetect_DetectionBasedTracker_nativeDetect
  (JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
