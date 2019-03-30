//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBDevice : NSObject
{
}

+ (id)systemVersion;
+ (_Bool)isSlowerDevice;
+ (_Bool)supportsRecordingAudio;
+ (_Bool)supportsCamera;
+ (_Bool)supportsPhone;
+ (struct FBDeviceBatteryInfo)deviceBatteryInfo;
+ (long long)deviceModelDEPRECATED_DO_NOT_USE;
+ (long long)adjustedFillRate;
+ (void)initializeAndCacheValues;

@end
