//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListGenericSectionController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGFNFVideoPlayerDelegate.h"
#import "IGFeedItemDirectResponseLoggingProviderDelegate.h"
#import "IGListDisplayDelegate.h"
#import "IGListScrollDelegate.h"
#import "IGListWorkingRangeDelegate.h"
#import "IGProfilePictureImageViewDelegate.h"
#import "IGTVFullscreenTapControllerActionDelegate.h"
#import "IGTVVideoControlsViewDelegate.h"
#import "IGTVVideoFeedActionsBarViewDelegate.h"
#import "IGVideoPreviewDelegate.h"
#import "IGVideoPreviewThumbnailDatasource.h"

@class IGDirectResponseLogger, IGFNFVideoPlayer, IGFeedDirectResponseHandler, IGFeedHeartAnimator, IGLinkTapHandlingService, IGTVViewerConfig, IGTVViewerLoggingContext, IGUserSession, IGVideoPlaybackLoggingConfig, IGVideoPreviewController, NSString, UIView;

@interface IGTVVideoSectionController : IGListGenericSectionController <IGFeedItemDirectResponseLoggingProviderDelegate, IGFNFVideoPlayerDelegate, IGListDisplayDelegate, IGListScrollDelegate, IGListWorkingRangeDelegate, IGTVFullscreenTapControllerActionDelegate, IGTVVideoControlsViewDelegate, IGTVVideoFeedActionsBarViewDelegate, IGProfilePictureImageViewDelegate, IGVideoPreviewDelegate, IGVideoPreviewThumbnailDatasource, IGCoreTextLinkHandler>
{
    IGUserSession *_userSession;
    IGTVViewerConfig *_config;
    IGFNFVideoPlayer *_videoPlayer;
    _Bool _needsInitialImpression;
    _Bool _didUsePreciseTimeForInitialSeek;
    double _playbackTime;
    UIView *_videoView;
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    IGVideoPreviewController *_previewController;
    IGLinkTapHandlingService *_linkService;
    _Bool _chromeHidden;
    long long _chromeFadeAnimationToken;
    _Bool _isScrubbing;
    _Bool _isPausedByVideoCall;
    NSString *_impressionActionName;
    NSString *_timeSpentActionName;
    IGTVViewerLoggingContext *_loggingContext;
    IGFeedDirectResponseHandler *_directResponseHandler;
    IGDirectResponseLogger *_directResponseLogger;
    _Bool _isVisible;
    long long _retryCount;
    IGFeedHeartAnimator *_heartAnimator;
    _Bool _isAnimatingHeart;
    _Bool _minimized;
    _Bool _audioEnabled;
    _Bool _isPausedOnCompletion;
    _Bool _useUpNextForOpenTVGuideButton;
    _Bool _isPausedByUser;
    id <IGTVVideoSectionControllerDelegate> _delegate;
    id <IGAnalyticsNavigationStateProvider> _navigationStateProvider;
    double _maxChromeAlpha;
    double _cornerRadiusPresentationProgress;
    NSString *_channelPK;
    double _targetChromeAlpha;
}

@property(nonatomic) double targetChromeAlpha; // @synthesize targetChromeAlpha=_targetChromeAlpha;
@property(nonatomic) _Bool isPausedByUser; // @synthesize isPausedByUser=_isPausedByUser;
@property(nonatomic) _Bool useUpNextForOpenTVGuideButton; // @synthesize useUpNextForOpenTVGuideButton=_useUpNextForOpenTVGuideButton;
@property(nonatomic) _Bool isPausedOnCompletion; // @synthesize isPausedOnCompletion=_isPausedOnCompletion;
@property(copy, nonatomic) NSString *channelPK; // @synthesize channelPK=_channelPK;
@property(nonatomic) double cornerRadiusPresentationProgress; // @synthesize cornerRadiusPresentationProgress=_cornerRadiusPresentationProgress;
@property(nonatomic) double maxChromeAlpha; // @synthesize maxChromeAlpha=_maxChromeAlpha;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) _Bool minimized; // @synthesize minimized=_minimized;
@property(nonatomic) __weak id <IGAnalyticsNavigationStateProvider> navigationStateProvider; // @synthesize navigationStateProvider=_navigationStateProvider;
@property(nonatomic) __weak id <IGTVVideoSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)_configureForCellVisibility:(id)arg1;
- (void)updateForCurrentVisibility;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (id)scrollDelegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)thumbnailImageAtProgress:(double)arg1;
- (void)videoPreviewControllerPreviewNotAvailable:(id)arg1;
- (void)videoPreviewControllerPreviewAvailable:(id)arg1;
- (void)_resetChromeForSkipIfNeeded;
- (void)_optimisticallyAdvanceScrubberWithSeekTime:(double)arg1;
- (void)_seekAndResumePlayingForSkipToTime:(double)arg1 preciseTime:(_Bool)arg2;
- (void)_fastForward;
- (void)_rewind;
- (double)_quicktapVideoAdvanceTime;
- (void)_logQuickSkipForward:(_Bool)arg1;
- (void)_doubleTapLike;
- (void)fullscreenQuickSkipController:(id)arg1 didDoubleTapForAction:(long long)arg2;
- (void)fullscreenQuickSkipControllerDidTap:(id)arg1;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)seekToBeginning;
- (void)_tryResumePlaybackWithReason:(long long)arg1;
- (void)tryResumePlayback;
- (_Bool)_canResumePlayback;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2;
- (void)_configureVideoPlayerIfNeededWithVideoLoadType:(long long)arg1;
- (id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)_handleLikeActionWithIsDoubleTap:(_Bool)arg1;
- (id)_fullscreenCell;
- (void)_blockedButtonTapped;
- (void)_usernameTapped;
- (void)_animateChromeAdjustedForScrubbing:(_Bool)arg1;
- (void)_animateDescriptionShown:(_Bool)arg1;
- (void)_titleButtonTapped:(id)arg1;
- (void)_dismissDescriptionTapped;
- (void)_minimizeButtonTapped;
- (void)_closeButtonTapped;
- (void)_viewsButtonTapped;
- (void)_commentButtonTapped;
- (void)_resumePlayAfterSeekingToTime:(double)arg1;
- (void)_updateThumbnailAndDurationForScrubbbing;
- (void)videoFeedActionsBarViewDidTapOpenTVGuideButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapOverflowButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapSaveButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapDirectButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapCommentButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapLikeButton:(id)arg1;
- (void)videoControlsViewDidPressSkip:(id)arg1;
- (void)videoControlsViewDidPressCTA:(id)arg1;
- (void)videoControlsViewDidPressPlayPause:(id)arg1;
- (void)videoControlsViewProgressScrubbingEnded:(id)arg1;
- (void)videoControlsViewProgressScrubbingChanged:(id)arg1;
- (void)videoControlsViewProgressScrubbingBegan:(id)arg1;
- (void)willExitVideoPlayerWorkingRange;
- (void)willEnterVideoPlayerWorkingRange;
- (void)_callKitDidActivateOrDeactivate:(id)arg1;
- (void)_videoCallWillDisappear:(id)arg1;
- (void)_videoCallWillAppear:(id)arg1;
- (void)_onFeedItemUpdated:(id)arg1;
- (void)_onApplicationDidBecomeActive:(id)arg1;
- (void)_onApplicationWillResignActive:(id)arg1;
- (_Bool)canSwipeToSwitchVideo;
- (void)_unregisterForApplicationStateNotifications;
- (void)_registerForApplicationStateNotifications;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)hideNextVideoPreview;
- (void)showNextVideoPreviewWithItem:(id)arg1;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)_configureCell:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (_Bool)isShowingDescription;
- (void)_tryToSeekToPlaybackTime;
- (void)_updateSeenState;
- (void)_stopWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)pause;
- (void)prepareForAutoAdvance;
- (void)handleUserInitiatedReplay;
- (void)handleUserInitiatedPlayPause;
- (void)handleUserInitiatedPause;
- (void)handleUserInitiatedPlay;
- (void)_updatePlayPauseButton:(id)arg1;
- (double)_chromeAlpha;
- (void)resetChromeToVisibleAnimated:(_Bool)arg1;
- (void)cancelPendingChromeFade;
- (void)tryFadeChromeAfterDelay;
- (_Bool)_canFadeChrome;
- (void)_animateControlsToHidden:(_Bool)arg1;
- (void)_cleanupVideoPlayerIfNeeded;
- (_Bool)_isFeedItemInvalid;
- (id)_feedItem;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

