//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCaptureDevice;

@protocol FBCaptureCameraStateProviding <NSObject>
@property(readonly, nonatomic, getter=isAdjustingCameraSettings) _Bool adjustingCameraSettings;
@property(readonly, nonatomic) struct OpaqueCMClock *captureSessionClock;
@property(readonly, nonatomic) CDStruct_62455522 exposureInfo;
@property(readonly, nonatomic) FBCaptureDevice *currentDevice;
- (void)fetchVideoFieldOfViewWithCompletion:(void (^)(float))arg1;
@end
