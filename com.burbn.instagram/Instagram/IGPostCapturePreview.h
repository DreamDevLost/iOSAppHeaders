//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBVideoPostCaptureModeListener.h"
#import "IGFilterMediaViewType.h"

@class IGCompositionFilterMetadata, IGImageFilter, IGOverlayFilterView, IGRenderer, IGStabilizationFilter, IGSurfaceView, IGVideoComposition, NSString;

@interface IGPostCapturePreview : UIView <FBVideoPostCaptureModeListener, IGFilterMediaViewType>
{
    IGSurfaceView *_filteredView;
    _Bool _overlayFilteredViewNeedsRemoval;
    IGVideoComposition *_composition;
    IGStabilizationFilter *_stabilizationFilter;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _appIsBackgrounded
    CDUnknownBlockType _currentSnapshotCallback;
    IGImageFilter *_imageFilter;
    IGImageFilter *_overlayImageFilter;
    IGCompositionFilterMetadata *_compositionFilterMetadata;
    IGRenderer *_renderer;
    IGOverlayFilterView *_overlayFilteredView;
}

@property(retain, nonatomic) IGOverlayFilterView *overlayFilteredView; // @synthesize overlayFilteredView=_overlayFilteredView;
@property(retain, nonatomic) IGRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) IGCompositionFilterMetadata *compositionFilterMetadata; // @synthesize compositionFilterMetadata=_compositionFilterMetadata;
@property(retain, nonatomic) IGImageFilter *overlayImageFilter; // @synthesize overlayImageFilter=_overlayImageFilter;
@property(retain, nonatomic) IGImageFilter *imageFilter; // @synthesize imageFilter=_imageFilter;
- (void).cxx_destruct;
- (void)videoMode:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)setOverlayImageFilterWidth:(double)arg1 overlayFilterPosition:(long long)arg2;
- (void)hideOverlayImageFilter;
- (void)setOverlayImageFilterNeedsRemoval;
@property(nonatomic) struct IGCompositionFilterTransform mediaTransform;
- (void)_render:(struct opaqueCMSampleBuffer *)arg1;
- (void)_willResignActiveNotification:(id)arg1;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)captureNextFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 composition:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

