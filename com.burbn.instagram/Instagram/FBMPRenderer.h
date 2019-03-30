//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMPCompositeFilter.h"

@class FBMPMultiTransformFilter, FBMPTransformFilter, FBVideoProcessor, NSObject<OS_dispatch_queue>;

@interface FBMPRenderer : FBMPCompositeFilter
{
    unsigned long long _processingOptions;
    _Bool _processorPrepared;
    struct mutex _videoQueueLock;
    NSObject<OS_dispatch_queue> *_videoQueue;
    struct CGRect _inputCropRect;
    _Bool _multipleOutputsEnabled;
    _Bool _overlayOutputEnabled;
    FBMPMultiTransformFilter *_multiTransformFilter;
    FBMPTransformFilter *_transformFilter;
    struct CGRect _pendingCropRect;
    CDUnknownBlockType _pendingCropRectCompletion;
    id <FBMPRendererRotationProcessing> _rotationProcessor;
    id <FBMPRendererRotationProcessing> _rotationProcessorInverted;
    FBVideoProcessor *_processor;
}

+ (id)newWithConfiguration:(struct FBMPRendererConfiguration)arg1;
+ (id)new;
@property(readonly, nonatomic) FBVideoProcessor *processor; // @synthesize processor=_processor;
@property(readonly) _Bool overlayOutputEnabled; // @synthesize overlayOutputEnabled=_overlayOutputEnabled;
@property(readonly) _Bool multipleOutputsEnabled; // @synthesize multipleOutputsEnabled=_multipleOutputsEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBMPRendererRotationProcessing> rotationProcessorInverted; // @synthesize rotationProcessorInverted=_rotationProcessorInverted;
@property(readonly, nonatomic) id <FBMPRendererRotationProcessing> rotationProcessor; // @synthesize rotationProcessor=_rotationProcessor;
- (_Bool)_anyFilterSupportsOverlayOutput;
- (_Bool)_anyFilterSupportsCaptureOutput;
- (_Bool)_allFiltersSupportLandscape;
- (struct opaqueCMSampleBuffer *)_renderBuffer:(struct opaqueCMSampleBuffer *)arg1 withTransform:(unsigned long long)arg2 renderingMode:(unsigned long long)arg3;
- (void)_updateInputCropRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateInputCropRectFromPendingIfNeeded;
- (void)_setVideoQueue:(id)arg1;
- (void)_prepareVideoProcessorIfNeededWithContext:(id)arg1;
- (void)sessionWillStart:(id)arg1;
- (void)sessionDisconnectedPort:(id)arg1 context:(id)arg2;
- (void)sessionConnectedPort:(id)arg1 context:(id)arg2;
- (id)transform:(id)arg1 inrenderingMode:(unsigned long long)arg2;
- (id)transformMultiple:(id)arg1;
- (void)doesAnyFilterSupportCaptureOutputWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)clearCachedFilterResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)exportFilterConfigsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateInputCropRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasFilters:(id)arg1;

@end

