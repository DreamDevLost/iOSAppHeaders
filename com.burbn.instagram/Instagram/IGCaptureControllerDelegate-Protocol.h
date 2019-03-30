//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCaptureViewController, IGMediaMetadata, IGSampleBuffer, IGVideoComposition;

@protocol IGCaptureControllerDelegate <NSObject>
- (void)captureControllerDidCancelCapture:(IGCaptureViewController *)arg1;
- (void)captureController:(IGCaptureViewController *)arg1 didConfirmVideoComposition:(IGVideoComposition *)arg2 mediaMetadata:(IGMediaMetadata *)arg3;
- (void)captureController:(IGCaptureViewController *)arg1 didUpdateVideoComposition:(IGVideoComposition *)arg2;
- (void)captureControllerDidEndFilmingClip:(IGCaptureViewController *)arg1;
- (void)captureControllerWillBeginFilmingClip:(IGCaptureViewController *)arg1;
- (void)captureController:(IGCaptureViewController *)arg1 didTakePhotoWithBuffer:(IGSampleBuffer *)arg2 mediaMetadata:(IGMediaMetadata *)arg3 deviceOrientation:(long long)arg4;
- (void)captureController:(IGCaptureViewController *)arg1 willTakePhotoWithPreviewBuffer:(IGSampleBuffer *)arg2 mediaMetadata:(IGMediaMetadata *)arg3;
- (void)captureController:(IGCaptureViewController *)arg1 didChangeToCameraMode:(long long)arg2;
@end

