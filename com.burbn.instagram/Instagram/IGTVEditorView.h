//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCircularProgressView, IGGradientView, IGTVCreationFlowNavigationBar, IGTVVideoControlsView, IGVideoPlaybackView, UIImageView;

@interface IGTVEditorView : UIView
{
    IGGradientView *_topGradientView;
    IGGradientView *_bottomGradientView;
    UIView *_containerView;
    UIImageView *_placeholderImageView;
    IGVideoPlaybackView *_videoView;
    IGTVVideoControlsView *_playbackControlsView;
    IGTVCreationFlowNavigationBar *_navigationBar;
    UIView *_loadingDimmingView;
    IGCircularProgressView *_loadingProgressView;
}

@property(readonly, nonatomic) IGCircularProgressView *loadingProgressView; // @synthesize loadingProgressView=_loadingProgressView;
@property(readonly, nonatomic) UIView *loadingDimmingView; // @synthesize loadingDimmingView=_loadingDimmingView;
@property(readonly, nonatomic) IGTVCreationFlowNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) IGTVVideoControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property(readonly, nonatomic) IGVideoPlaybackView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

