/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

// This file is autogenerated by
//     incubator-weex/weex_core/Source/android/jniprebuild/jni_generator.py
// For
//     org/apache/weex/bridge/WXParams

#ifndef com_taobao_weex_bridge_WXParams_JNI
#define com_taobao_weex_bridge_WXParams_JNI

#include <jni.h>
#include "base/android/jni/android_jni.h"

//#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kWXParamsClassPath[] = "com/taobao/weex/bridge/WXParams";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_WXParams_clazz = NULL;
#define WXParams_clazz(env) g_WXParams_clazz

}  // namespace

// Step 2: method stubs.

static intptr_t g_WXParams_getOptions = 0;
static base::android::ScopedLocalJavaRef<jobject>
    Java_WXParams_getOptions(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getOptions",

"("
")"
"Ljava/lang/Object;",
      &g_WXParams_getOptions);

  jobject ret =
      env->CallObjectMethod(obj,
          method_id);
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jobject>(env, ret);
}

static intptr_t g_WXParams_getPlatform = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getPlatform(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getPlatform",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getPlatform);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getCacheDir = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getCacheDir(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getCacheDir",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getCacheDir);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getOsVersion = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getOsVersion(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getOsVersion",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getOsVersion);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getAppVersion = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getAppVersion(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getAppVersion",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getAppVersion);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getWeexVersion = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getWeexVersion(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getWeexVersion",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getWeexVersion);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getDeviceModel = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getDeviceModel(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getDeviceModel",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getDeviceModel);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getAppName = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getAppName(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getAppName",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getAppName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getDeviceWidth = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getDeviceWidth(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getDeviceWidth",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getDeviceWidth);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getDeviceHeight = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getDeviceHeight(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getDeviceHeight",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getDeviceHeight);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getUseSingleProcess = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getUseSingleProcess(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getUseSingleProcess",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getUseSingleProcess);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getLibJssPath = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getLibJssPath(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getLibJssPath",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getLibJssPath);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

static intptr_t g_WXParams_getLibIcuPath = 0;
static base::android::ScopedLocalJavaRef<jstring>
    Java_WXParams_getLibIcuPath(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    WXParams_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, WXParams_clazz(env),
      base::android::INSTANCE_METHOD,
      "getLibIcuPath",

"("
")"
"Ljava/lang/String;",
      &g_WXParams_getLibIcuPath);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj,
          method_id));
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jstring>(env, ret);
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_WXParams_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kWXParamsClassPath).Get()));

  return true;
}

#endif  // com_taobao_weex_bridge_WXParams_JNI
