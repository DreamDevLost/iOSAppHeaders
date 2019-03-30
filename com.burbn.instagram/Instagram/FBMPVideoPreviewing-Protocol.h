//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCameraEffectPreviewing.h"
#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, UIImage;

@protocol FBMPVideoPreviewing <NSObject, FBCameraEffectPreviewing>
@property(retain, nonatomic) UIImage *placeholder;
@property(nonatomic) __weak id <FBMPVideoPreviewFrameTrackingDelegate> frameTrackingDelegate;
@property(nonatomic) __weak id <FBMPVideoPreviewDelegate> delegate;
- (void)render:(struct opaqueCMSampleBuffer *)arg1;
- (void)requestNextFrameCallback:(void (^)(double, double))arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2;
@end
