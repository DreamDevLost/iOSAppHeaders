//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListGenericSectionController.h"

#import "IGFNFVideoPlayerDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGListDisplayDelegate.h"
#import "IGTVBrowseLongPressHideHandlingDelegate.h"
#import "IGViewAppearListener.h"
#import "IGViewDisappearListener.h"

@class IGFNFVideoPlayer, IGFeedItem, IGTVBrowseLoggingContext, IGUserSession, IGVideoPlaybackLoggingConfig, NSNumber, NSString, UIView;

@interface IGTVBrowseHighlightVideoSectionController : IGListGenericSectionController <IGFNFVideoPlayerDelegate, IGListDisplayDelegate, IGTVBrowseLongPressHideHandlingDelegate, IGFeedScrollViewListener, IGViewAppearListener, IGViewDisappearListener>
{
    IGUserSession *_userSession;
    double _initialVideoOffset;
    double _videoOffset;
    IGTVBrowseLoggingContext *_loggingContext;
    IGFeedItem *_feedItem;
    IGFNFVideoPlayer *_videoPlayer;
    UIView *_videoView;
    NSNumber *_initialMediaSeekTime;
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    _Bool _isRefreshing;
    _Bool _isDisplayed;
    _Bool _isViewControllerShowing;
    _Bool _hasStartedTrackingCell;
    id <IGTVBrowseHighlightVideoSectionControllerDelegate> _delegate;
    double _refreshPresentationProgress;
}

@property(nonatomic) double refreshPresentationProgress; // @synthesize refreshPresentationProgress=_refreshPresentationProgress;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(nonatomic) __weak id <IGTVBrowseHighlightVideoSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)browseCellDidDetectLongPress:(id)arg1;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewDidAppearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillAppearAnimated:(_Bool)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2;
- (void)_blurCellContentsAndPauseVideo;
- (void)_playVideoIfValidAndDisplayed;
- (void)_updateStaticAlpha:(double)arg1;
- (id)_visibleCell;
- (void)_startTrackingCellIfNeeded:(id)arg1;
- (void)_configureVideoPlayerIfNeeded;
- (void)_cleanupVideoPlayerIfNeeded;
- (void)_configureCell:(id)arg1;
- (id)displayDelegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setIsRefreshing:(_Bool)arg1 velocity:(double)arg2;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 initialMediaSeekTime:(id)arg2 initialVideoOffset:(double)arg3 loggingContext:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

