//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMPWorldTrackingData, NSDictionary, UIView;

@protocol IGVideoProcessorControlling <NSObject>
@property(nonatomic) __weak id <IGVideoProcessorControllerDelegate> delegate;
- (void)attachCaptureGestureRecognizersToView:(UIView *)arg1 translatingToView:(UIView *)arg2;
- (void)didEnterMediaPreview;
- (void)didStopRecording;
- (void)didStartRecording;
- (void)setShouldBypassVideoProcessor:(_Bool)arg1;
- (void)applyAREffectOnStillPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 capturedFromCameraWithDevicePosition:(long long)arg2 completion:(void (^)(NSError *, IGSampleBuffer *))arg3;
- (void)handleWorldTrackingData:(FBMPWorldTrackingData *)arg1;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withVolumeLevel:(float)arg2;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromCameraWithCaptureDevicePosition:(long long)arg2;
- (void)removeFilterWithClearingMemoryCache:(_Bool)arg1 completion:(void (^)(id <FBCCMSQRDFilterControlling>))arg2;
- (void)addFilterWithConfig:(NSDictionary *)arg1 completion:(void (^)(id <FBCCMSQRDFilterControlling>))arg2;
- (void)stopSession;
- (void)startSession;
@end
