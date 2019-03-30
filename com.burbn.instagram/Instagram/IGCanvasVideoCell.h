//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFNFVideoPlayerDelegate.h"
#import "IGImageProgressViewDelegate.h"

@class IGCanvasVideoViewModel, IGFNFVideoPlayer, IGImageProgressView, IGPhoto, IGVideo, IGVideoIndicatorView, IGVideoPlaybackLoggingConfig, IGVideoPlayerManager, NSString, UITapGestureRecognizer, UIView;

@interface IGCanvasVideoCell : UICollectionViewCell <IGFNFVideoPlayerDelegate, IGImageProgressViewDelegate>
{
    id <IGCanvasVideoCellDelegate> _delegate;
    IGFNFVideoPlayer *_videoPlayer;
    IGVideoPlayerManager *_videoPlayerManager;
    IGImageProgressView *_videoCoverPhotoView;
    IGVideoIndicatorView *_indicatorView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_videoView;
    IGVideo *_video;
    IGPhoto *_coverPhoto;
    struct UIEdgeInsets _padding;
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    double _bandwidthFraction;
    IGCanvasVideoViewModel *_model;
}

@property(readonly, nonatomic) IGCanvasVideoViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didLoadPreviewImage:(id)arg2 progressiveJPEGScanNumber:(id)arg3;
- (_Bool)_isVideoPlayerViewFinishedLoading;
- (_Bool)_posterFrameLoaded;
- (void)_showVideoIndication:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showIndicatorStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_showVideo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_prepareVideo;
- (void)_onTap:(id)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)seekToBeginning;
- (void)pauseVideo;
- (void)tearDownVideo;
- (void)playVideoWithAudioEnabled:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1 videoPlayerManager:(id)arg2 loggingConfig:(id)arg3 bandwidthFraction:(double)arg4 delegate:(id)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

