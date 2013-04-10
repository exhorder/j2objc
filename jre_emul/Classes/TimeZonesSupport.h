// Copyright 2013 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//
//  TimeZonesSupport.h
//  Objective-C++ native methods for libcore.icu.TimeZones.
//
//  Created by Tom Ball on 2/6/2013.
//

#import "JreEmulation.h"
#import "IOSObjectArray.h"

@interface TimeZonesSupport

+ (IOSObjectArray *)forCountryCode:(NSString *)countryCode;

+ (IOSObjectArray *)getZoneStringsImpl:(NSString *)locale
                                   ids:(IOSObjectArray *)timeZoneIds;

@end
