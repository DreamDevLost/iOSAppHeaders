//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryFullscreenSectionLoggingContextType.h"

@class IGFeedItemTracker, IGUserSession, NSMapTable, NSMutableSet, NSString;

@interface IGStoryFullscreenSectionLoggingContext : NSObject <IGStoryFullscreenSectionLoggingContextType>
{
    _Bool _hasLoggedErrorForCurrentReel;
    id <IGStoryFullscreenSectionLoggingContextStoryDataSource> _storyDataSource;
    id <IGStoryFullscreenSectionLoggingContextViewerDataSource> _viewerDataSource;
    IGUserSession *_userSession;
    NSMapTable *_storyItemsToStartTime;
    NSMapTable *_storyItemsStartToPlayTime;
    NSMapTable *_storyItemsToTotalPauseDuration;
    NSMapTable *_storyItemsToTotalPauseDurationFromTrayInViewer;
    NSMapTable *_storyItemsToURLTapCount;
    NSMapTable *_storyItemsToLoadTime;
    NSMapTable *_storyItemsToProfileTapCount;
    NSMapTable *_storyItemsToLoadedOnImpression;
    NSMapTable *_storyItemsHasLoaded;
    NSMapTable *_storyVideoPlayerLastState;
    NSMapTable *_storyItemsMediaProgress;
    double _pauseStartTime;
    double _lastPauseDuration;
    long long _pauseReason;
    double _startTime;
    double _totalPauseDuration;
    double _totalPauseDurationFromTrayInViewer;
    IGFeedItemTracker *_sponsoredItemTracker;
    NSMutableSet *_loggedViewersListImpressions;
}

@property(readonly, nonatomic) NSMutableSet *loggedViewersListImpressions; // @synthesize loggedViewersListImpressions=_loggedViewersListImpressions;
@property(readonly, nonatomic) IGFeedItemTracker *sponsoredItemTracker; // @synthesize sponsoredItemTracker=_sponsoredItemTracker;
@property(nonatomic) double totalPauseDurationFromTrayInViewer; // @synthesize totalPauseDurationFromTrayInViewer=_totalPauseDurationFromTrayInViewer;
@property(nonatomic) double totalPauseDuration; // @synthesize totalPauseDuration=_totalPauseDuration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long pauseReason; // @synthesize pauseReason=_pauseReason;
@property(nonatomic) double lastPauseDuration; // @synthesize lastPauseDuration=_lastPauseDuration;
@property(nonatomic) double pauseStartTime; // @synthesize pauseStartTime=_pauseStartTime;
@property(nonatomic) _Bool hasLoggedErrorForCurrentReel; // @synthesize hasLoggedErrorForCurrentReel=_hasLoggedErrorForCurrentReel;
@property(readonly, nonatomic) NSMapTable *storyItemsMediaProgress; // @synthesize storyItemsMediaProgress=_storyItemsMediaProgress;
@property(readonly, nonatomic) NSMapTable *storyVideoPlayerLastState; // @synthesize storyVideoPlayerLastState=_storyVideoPlayerLastState;
@property(readonly, nonatomic) NSMapTable *storyItemsHasLoaded; // @synthesize storyItemsHasLoaded=_storyItemsHasLoaded;
@property(readonly, nonatomic) NSMapTable *storyItemsToLoadedOnImpression; // @synthesize storyItemsToLoadedOnImpression=_storyItemsToLoadedOnImpression;
@property(readonly, nonatomic) NSMapTable *storyItemsToProfileTapCount; // @synthesize storyItemsToProfileTapCount=_storyItemsToProfileTapCount;
@property(readonly, nonatomic) NSMapTable *storyItemsToLoadTime; // @synthesize storyItemsToLoadTime=_storyItemsToLoadTime;
@property(readonly, nonatomic) NSMapTable *storyItemsToURLTapCount; // @synthesize storyItemsToURLTapCount=_storyItemsToURLTapCount;
@property(readonly, nonatomic) NSMapTable *storyItemsToTotalPauseDurationFromTrayInViewer; // @synthesize storyItemsToTotalPauseDurationFromTrayInViewer=_storyItemsToTotalPauseDurationFromTrayInViewer;
@property(readonly, nonatomic) NSMapTable *storyItemsToTotalPauseDuration; // @synthesize storyItemsToTotalPauseDuration=_storyItemsToTotalPauseDuration;
@property(readonly, nonatomic) NSMapTable *storyItemsStartToPlayTime; // @synthesize storyItemsStartToPlayTime=_storyItemsStartToPlayTime;
@property(readonly, nonatomic) NSMapTable *storyItemsToStartTime; // @synthesize storyItemsToStartTime=_storyItemsToStartTime;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGStoryFullscreenSectionLoggingContextViewerDataSource> viewerDataSource; // @synthesize viewerDataSource=_viewerDataSource;
@property(nonatomic) __weak id <IGStoryFullscreenSectionLoggingContextStoryDataSource> storyDataSource; // @synthesize storyDataSource=_storyDataSource;
- (void).cxx_destruct;
- (id)_loggingExtrasForCurrentElapsedAndRemainingTimeForStoryItem:(id)arg1;
- (void)logEventForStoryItem:(id)arg1 eventName:(id)arg2 extraDict:(id)arg3;
- (void)_postProfileTapNotificationWithSource:(id)arg1 forStoryItem:(id)arg2;
- (_Bool)_isMainFeedTraySuggestion;
- (_Bool)_isStoryHighlight;
- (void)_logHashtagEventWithEventName:(id)arg1 tag:(id)arg2 storyItem:(id)arg3;
- (void)_logOrganicOrSponsoredEventWithEventName:(id)arg1 storyItem:(id)arg2 extras:(id)arg3;
- (id)finalStateFieldsForStoryItem:(id)arg1;
- (id)videoPlayerStateForStoryItem:(id)arg1;
- (_Bool)hasMediaLoaded:(id)arg1;
- (_Bool)loadedOnImpressionForStoryItem:(id)arg1;
- (long long)totalProfileTapCountForStoryItem:(id)arg1;
- (id)urlTapCountForStoryItem:(id)arg1;
- (id)commonFieldsForStoryItem:(id)arg1;
- (double)mediaSecondsElapsed:(id)arg1;
- (double)totalPauseDurationFromTrayInViewerForStoryItem:(id)arg1;
- (double)totalPauseDurationForStoryItem:(id)arg1;
- (double)startTimeForStoryItem:(id)arg1;
- (double)totalPauseDurationForStory:(id)arg1;
- (double)startTimeForStory:(id)arg1;
- (void)notifySwipeUpOnStoryForStoryItem:(id)arg1 swipeUpPoint:(struct CGPoint)arg2 extra:(id)arg3;
- (void)notifyDidTakeScreenshotFromStoryAdWithStoryItem:(id)arg1;
- (void)notifyGestureNuxDidDismissForStoryItem:(id)arg1 impressionDuration:(double)arg2 dismissAction:(id)arg3;
- (void)notifyGestureNuxDidDisplayForStoryItem:(id)arg1;
- (void)resetViewersListImpressions;
- (void)notifyTapSeeAllVotersForStoryItem:(id)arg1;
- (void)notifyHiddenForSponsoredStoryItem:(id)arg1 reason:(id)arg2 extra:(id)arg3;
- (void)notifyHideTapForSponsoredStoryItem:(id)arg1 withEventName:(id)arg2;
- (void)notifyActionMenuTapForSponsoredStoryItem:(id)arg1;
- (void)notifyFollowForStoryItem:(id)arg1 action:(long long)arg2 targetID:(id)arg3 analyticsFollowClickPoint:(id)arg4;
- (void)notifyDeleteActionForCommentPk:(id)arg1 commentUserId:(id)arg2 forStoryItem:(id)arg3;
- (void)notifyStoryReshareButtonTapForStoryItem:(id)arg1 reelOwner:(id)arg2;
- (void)notifyMoreAction:(long long)arg1 forStoryItem:(id)arg2;
- (void)notifyQuestionAnswerResponseSendForStoryItem:(id)arg1 questionStickerPk:(id)arg2;
- (void)notifyMessageSendForStoryItem:(id)arg1 isQuickReaction:(_Bool)arg2;
- (void)notifyMessageDirectReplyComposeForStoryItem:(id)arg1;
- (void)notifyMessageComposeForStoryItem:(id)arg1;
- (void)notifyProfileTapWithSource:(id)arg1 forStoryItem:(id)arg2;
- (void)notifyUnPauseLongPressWithStoryItem:(id)arg1;
- (void)notifyPollStickerTapWithVoteIndex:(long long)arg1 forStoryItem:(id)arg2 pollID:(id)arg3 atCurrentPlayTime:(double)arg4;
- (void)notifyProductShareToolTipDidShow:(id)arg1 forStoryItem:(id)arg2;
- (void)notifyProductTapWithProductId:(id)arg1 forStoryItem:(id)arg2;
- (void)notifyProductToolTipDidShow:(id)arg1 forStoryItem:(id)arg2;
- (void)notifyMentionTapWithTaggedProfile:(id)arg1 forStoryItem:(id)arg2 url:(id)arg3;
- (void)notifyMentionToolTipDidShow:(id)arg1 forStoryItem:(id)arg2;
- (void)notifyHashtagTapWithTag:(id)arg1 forStoryItem:(id)arg2 url:(id)arg3;
- (void)notifyHashtagToolTipDidShow:(id)arg1 forStoryItem:(id)arg2;
- (void)notifyAppAttributionTapForStoryItem:(id)arg1 attributionID:(id)arg2 appName:(id)arg3;
- (void)notifyAppAttributionToolTipTapForStoryItem:(id)arg1 attributionID:(id)arg2 appName:(id)arg3 destination:(id)arg4;
- (void)notifyURLTapForStoryItem:(id)arg1 url:(id)arg2;
- (void)notifyUnpauseTime:(double)arg1 forStoryItem:(id)arg2;
- (void)notifyPauseTime:(double)arg1 reason:(long long)arg2;
- (void)notifyStartPlayingTime:(double)arg1 forStoryItem:(id)arg2;
- (void)notifyStartTime:(double)arg1 forStoryItem:(id)arg2;
- (void)notifyVideoPlaybackState:(long long)arg1 forStoryItem:(id)arg2;
- (void)notifyStoryMediaProgress:(double)arg1 forStoryItem:(id)arg2;
- (void)notifyReelErrorDisplayedForReelPK:(id)arg1 errorType:(long long)arg2;
- (void)notifyStoryMediaHasLoadedForStoryItem:(id)arg1;
- (void)notifyLoadedOnImpression:(_Bool)arg1 forStoryItem:(id)arg2;
- (id)videoViewLoggerForStoryItem:(id)arg1 viewerSessionId:(id)arg2;
- (id)videoPlaybackLoggingConfigForStoryItem:(id)arg1 viewerSessionId:(id)arg2;
- (void)reset;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

