//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@interface FBCameraWhiteBalanceSettings : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
}

+ (id)locked;
+ (id)continuousAutoWhiteBalance;
+ (id)autoWhiteBalance;
- (void)matchLocked:(CDUnknownBlockType)arg1 autoWhiteBalance:(CDUnknownBlockType)arg2 continuousAutoWhiteBalance:(CDUnknownBlockType)arg3;

@end
