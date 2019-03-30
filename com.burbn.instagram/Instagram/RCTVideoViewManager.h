//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTVideoViewDelegate.h"

@class NSString;

@interface RCTVideoViewManager : RCTViewManager <RCTVideoViewDelegate>
{
}

+ (const struct RCTMethodInfo *)__rct_export__660;
+ (id)propConfig_onStateChange;
+ (id)propConfig_onProgress;
+ (id)propConfig_resizeMode;
+ (id)propConfig_startPosition;
+ (id)propConfig_volume;
+ (id)propConfig_isPaused;
+ (id)propConfig_src;
+ (_Bool)requiresMainQueueSetup;
+ (id)moduleName;
- (void)videoViewCurrentTimeDidChange:(id)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(float)arg3;
- (void)videoViewStateDidChange:(id)arg1;
- (void)seek:(id)arg1 toTime:(double)arg2;
- (id)getConstants;
- (id)constantsToExport;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
