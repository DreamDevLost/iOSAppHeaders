//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBARCameraControlServiceDelegate.h"

@class IGAREffectApplicator, NSString;

@interface IGCameraControlServiceDelegate : NSObject <FBARCameraControlServiceDelegate>
{
    IGAREffectApplicator *_applicator;
    id <IGAREffectApplicatorCameraControlDelegate> _delegate;
}

+ (id)newWithAREffectApplicator:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
- (void)updateCaptureDevicePosition:(int)arg1;
- (_Bool)canUpdateCaptureDevicePosition:(int)arg1;
- (_Bool)canRunTrackingOptimizedAutoExposure;
- (void)runTrackingOptimizedAutoExposure;
- (_Bool)isFocusModeSupported:(int)arg1;
- (void)updateFocusMode:(int)arg1;
- (void)unlockExposureAndFocus;
- (void)lockExposureFocusWithExposureDuration:(CDStruct_1b6d18a9)arg1 ISO:(float)arg2;
@property(readonly, nonatomic, getter=isExposureLockingSupported) _Bool exposureLockingSupported;
@property(readonly, nonatomic, getter=isFocusLockingSupported) _Bool focusLockingSupported;
@property(readonly, nonatomic) CDStruct_15fe95f0 validExposureValues;
@property(readonly, nonatomic) float ISO;
@property(readonly, nonatomic) CDStruct_1b6d18a9 exposureDuration;
- (id)initWithAREffectApplicator:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
