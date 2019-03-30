//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGVideoPlayerOverlay.h"

@class IGTVFeedPreviewOverlayView;

@interface IGVideoPlayerIGTVPreviewOverlay : IGVideoPlayerOverlay
{
    IGTVFeedPreviewOverlayView *_igtvOverlayView;
    double _remainingTime;
    _Bool _showingOverlay;
    _Bool _isShowingOverlay;
    id <IGVideoPlayerIGTVPreviewOverlayDelegate> _delegate;
}

@property(nonatomic, getter=isShowingOverlay) _Bool isShowingOverlay; // @synthesize isShowingOverlay=_isShowingOverlay;
@property(readonly, nonatomic, getter=isShowingOverlay) _Bool showingOverlay; // @synthesize showingOverlay=_showingOverlay;
@property(nonatomic) __weak id <IGVideoPlayerIGTVPreviewOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keepWatchingButtonTapped:(id)arg1;
- (void)_createIGTVOverlayViewIfNeeded;
- (void)_setShowingOverlay:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowingOverlay:(_Bool)arg1;
- (void)videoPlaybackController:(id)arg1 didUpdateLoadingProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(long long)arg3;
- (void)reset;
- (void)layoutOverlayViews;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;

@end

