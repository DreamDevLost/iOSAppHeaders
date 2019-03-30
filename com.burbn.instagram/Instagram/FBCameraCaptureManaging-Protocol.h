//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBARCameraCapabilitiesControlling.h"
#import "FBARCameraCapabilitiesProviding.h"
#import "FBARCameraSLAMControlling.h"
#import "FBCameraAudioLevelOutput.h"
#import "FBCaptureCameraController.h"
#import "FBCaptureCameraWarming.h"
#import "FBCaptureImageActionPerforming.h"
#import "FBCaptureVideoPreviewLayerCreating.h"
#import "FBMPCameraCaptureInput.h"
#import "NSObject.h"

@class FBCameraAction, FBCameraCaptureFrameDropQueuedAnnouncer, FBCaptureDeviceConfiguration, FBMPSessionContext, NSObject<OS_dispatch_queue>;

@protocol FBCameraCaptureManaging <NSObject, FBMPCameraCaptureInput, FBCaptureCameraController, FBCaptureImageActionPerforming, FBCameraAudioLevelOutput, FBCaptureCameraWarming, FBCaptureVideoPreviewLayerCreating, FBARCameraCapabilitiesProviding, FBARCameraCapabilitiesControlling, FBARCameraSLAMControlling>
@property(readonly, nonatomic) id <FBOrientationTracking> orientationTracker;
@property(readonly, nonatomic) id <FBCameraStartPerformanceLoggerProviding> cameraStartPerformanceLogger;
@property(readonly, nonatomic) FBCameraCaptureFrameDropQueuedAnnouncer *frameDropAnnouncer;
@property(readonly, nonatomic) id <FBCameraAnalyticsPayloadProviding> analyticsPayloadProvider;
@property(readonly, nonatomic) id <FBCaptureAudioSessionControlling> audioSessionController;
@property(readonly, nonatomic) id <FBCaptureVideoSessionControlling> videoSessionController;
- (void)pauseCameraCaptureSession;
- (void)startCameraCaptureSessionWithType:(unsigned char)arg1 context:(FBMPSessionContext *)arg2 deviceConfiguration:(FBCaptureDeviceConfiguration *)arg3 initialCameraAction:(FBCameraAction *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completion:(void (^)(_Bool, struct))arg6;
@end
