//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBTimer, NSMutableArray;

@interface IGDiscoveryScalingTransitionImageView : UIView
{
    NSMutableArray *_loadedImages;
    NSMutableArray *_pendingImageUrls;
    NSMutableArray *_pendingImageRequests;
    unsigned long long _currentPhotoIndex;
    double _scalingDuration;
    double _transitionDuration;
    FBTimer *_animationTimer;
}

- (void).cxx_destruct;
- (void)_performScaleAnimationOnUIImageView:(id)arg1;
- (id)_getScalingImageContainerViewWithImage:(id)arg1;
- (id)_getImageTransitionLayerWithImage:(id)arg1 forSize:(struct CGSize)arg2;
- (struct CGSize)_getResizeSpecForImage:(id)arg1;
- (void)_stopAnimation;
- (void)_startAnimation;
- (void)_handleImageLoad:(id)arg1 imageRequest:(id)arg2 source:(unsigned long long)arg3 networkRequestSummary:(id)arg4 error:(id)arg5;
- (void)didMoveToWindow;
- (void)cleanup;
- (void)configureWithPhotos:(id)arg1 scalingDuration:(double)arg2 transitionDuration:(double)arg3 analyticsModule:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

