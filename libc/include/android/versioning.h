/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_VERSIONING_H
#define ANDROID_VERSIONING_H

#ifndef __STRING
#define __STRING(x) #x
#endif

#define __INTRODUCED_IN(api_level) __attribute__((annotate("introduced_in=" __STRING(api_level))))
#define __INTRODUCED_IN_FUTURE __attribute__((annotate("introduced_in_future")))
#define __DEPRECATED_IN(api_level) __attribute__((annotate("deprecated_in=" __STRING(api_level))))
#define __REMOVED_IN(api_level) __attribute__((annotate("obsoleted_in=" __STRING(api_level))))
#define __INTRODUCED_IN_32(api_level) __attribute__((annotate("introduced_in_32=" __STRING(api_level))))
#define __INTRODUCED_IN_64(api_level) __attribute__((annotate("introduced_in_64=" __STRING(api_level))))
#define __INTRODUCED_IN_ARM(api_level) __attribute__((annotate("introduced_in_arm=" __STRING(api_level))))
#define __INTRODUCED_IN_X86(api_level) __attribute__((annotate("introduced_in_x86=" __STRING(api_level))))
#define __INTRODUCED_IN_MIPS(api_level) __attribute__((annotate("introduced_in_mips=" __STRING(api_level))))

#define __VERSIONER_NO_GUARD __attribute__((annotate("versioner_no_guard")))

#endif /* ANDROID_VERSIONING_H */
