//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGGradientView, IGTVFullscreenGradientConfig, IGTVFullscreenHideVideoOverlayView, IGTVFullscreenLoadingView, IGTVFullscreenTapController, IGTVStaticLoadingView, IGTapButton, UIButton, UIImageView;

@interface IGTVFullscreenBaseVideoView : UIView
{
    UIView *_videoContainerView;
    UIView *_videoView;
    struct CGSize _aspectRatio;
    IGGradientView *_rewindGradientView;
    IGGradientView *_fastForwardGradientView;
    UIView *_overlayContainerView;
    IGGradientView *_topGradientView;
    IGGradientView *_bottomGradientView;
    IGTVFullscreenGradientConfig *_gradientConfig;
    UIView *_overlayContentView;
    UIView *_quickTapActionView;
    UIImageView *_quickTapActionImageView;
    double _cornerRadiusPresentationProgress;
    _Bool _minimized;
    IGTVFullscreenTapController *_quickSkipController;
    IGTVStaticLoadingView *_staticView;
    IGTVFullscreenLoadingView *_loadingView;
    UIView *_dimmingView;
    IGTVFullscreenHideVideoOverlayView *_hideVideoOverlayView;
    IGTapButton *_closeButton;
    IGTapButton *_minimizeButton;
    UIButton *_blockedButton;
}

@property(readonly, nonatomic) UIButton *blockedButton; // @synthesize blockedButton=_blockedButton;
@property(readonly, nonatomic) IGTapButton *minimizeButton; // @synthesize minimizeButton=_minimizeButton;
@property(readonly, nonatomic) IGTapButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIView *overlayContentView; // @synthesize overlayContentView=_overlayContentView;
@property(readonly, nonatomic) IGTVFullscreenHideVideoOverlayView *hideVideoOverlayView; // @synthesize hideVideoOverlayView=_hideVideoOverlayView;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) IGTVFullscreenLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) IGTVStaticLoadingView *staticView; // @synthesize staticView=_staticView;
@property(readonly, nonatomic) IGTVFullscreenTapController *quickSkipController; // @synthesize quickSkipController=_quickSkipController;
@property(nonatomic) _Bool minimized; // @synthesize minimized=_minimized;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithVideoView:(id)arg1 aspectRatio:(struct CGSize)arg2;
- (void)setCornerRadiusPresentationProgress:(double)arg1;
@property(nonatomic) double overlayAlpha;
- (void)prepareForReuse;
- (id)initWithGradientConfig:(id)arg1;

@end

