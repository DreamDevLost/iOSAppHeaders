//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGGradientView, IGTVCoverScrubberView, IGTVCreationFlowNavigationBar, IGVideoPlaybackView, UIImageView;

@interface IGTVCoverPickerView : UIView
{
    IGGradientView *_topGradientView;
    IGGradientView *_bottomGradientView;
    UIView *_containerView;
    UIImageView *_placeholderImageView;
    IGVideoPlaybackView *_videoView;
    IGTVCoverScrubberView *_scrubberView;
    IGTVCreationFlowNavigationBar *_navigationBar;
    UIView *_chromeContainerView;
}

@property(readonly, nonatomic) UIView *chromeContainerView; // @synthesize chromeContainerView=_chromeContainerView;
@property(readonly, nonatomic) IGTVCreationFlowNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) IGTVCoverScrubberView *scrubberView; // @synthesize scrubberView=_scrubberView;
@property(readonly, nonatomic) IGVideoPlaybackView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

@end

