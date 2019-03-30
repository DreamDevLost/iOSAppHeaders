//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLiveLoggingContext.h"
#import "IGStoryFullscreenSectionLoggingContextType.h"

@class IGLiveBroadcast, IGStoryImpressionLoggingManager, NSDictionary, NSString;

@interface IGLivePlaybackLoggingContext : NSObject <IGLiveLoggingContext, IGStoryFullscreenSectionLoggingContextType>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    _Bool _videoPlaybackOngoingLogged;
    NSString *_module;
    id <IGStoryFullscreenSectionLoggingContextStoryDataSource> _storyDataSource;
    id <IGStoryFullscreenSectionLoggingContextViewerDataSource> _viewerDataSource;
    IGStoryImpressionLoggingManager *_storyImpressionLoggingManager;
    long long _broadcastStatus;
    IGLiveBroadcast *_broadcast;
    NSDictionary *_extras;
    double _broadcastStartTimestamp;
    double _lastVideoPlaybackUpdateTimestamp;
    long long _videoPlaybackUpdateCount;
    double _storyStartTime;
    long long _loadingAttemptCount;
    double _startingPlaybackTime;
    double _startingPlaybackFrameTime;
    double _pauseStartTime;
    double _totalPauseDuration;
    long long _profileTapCount;
}

@property(nonatomic) long long profileTapCount; // @synthesize profileTapCount=_profileTapCount;
@property(nonatomic) double totalPauseDuration; // @synthesize totalPauseDuration=_totalPauseDuration;
@property(nonatomic) double pauseStartTime; // @synthesize pauseStartTime=_pauseStartTime;
@property(nonatomic) double startingPlaybackFrameTime; // @synthesize startingPlaybackFrameTime=_startingPlaybackFrameTime;
@property(nonatomic) double startingPlaybackTime; // @synthesize startingPlaybackTime=_startingPlaybackTime;
@property(nonatomic) long long loadingAttemptCount; // @synthesize loadingAttemptCount=_loadingAttemptCount;
@property(nonatomic) double storyStartTime; // @synthesize storyStartTime=_storyStartTime;
@property(nonatomic) _Bool videoPlaybackOngoingLogged; // @synthesize videoPlaybackOngoingLogged=_videoPlaybackOngoingLogged;
@property(nonatomic) long long videoPlaybackUpdateCount; // @synthesize videoPlaybackUpdateCount=_videoPlaybackUpdateCount;
@property(nonatomic) double lastVideoPlaybackUpdateTimestamp; // @synthesize lastVideoPlaybackUpdateTimestamp=_lastVideoPlaybackUpdateTimestamp;
@property(nonatomic) double broadcastStartTimestamp; // @synthesize broadcastStartTimestamp=_broadcastStartTimestamp;
@property(readonly, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(readonly, copy, nonatomic) IGLiveBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(nonatomic) long long broadcastStatus; // @synthesize broadcastStatus=_broadcastStatus;
@property(retain, nonatomic) IGStoryImpressionLoggingManager *storyImpressionLoggingManager; // @synthesize storyImpressionLoggingManager=_storyImpressionLoggingManager;
@property(nonatomic) __weak id <IGStoryFullscreenSectionLoggingContextViewerDataSource> viewerDataSource; // @synthesize viewerDataSource=_viewerDataSource;
@property(nonatomic) __weak id <IGStoryFullscreenSectionLoggingContextStoryDataSource> storyDataSource; // @synthesize storyDataSource=_storyDataSource;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)impressionsExtrasDictionary;
- (id)commonExtrasDictionary;
- (id)_createPlaybackEventWithName:(id)arg1;
- (void)notifyImpressionEnd;
- (void)notifyImpressionStart;
- (void)notifyImpressionResume;
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
- (void)notifyUpdatedViewerCount:(long long)arg1;
- (void)notifyBurstLikeCountToDisplay:(long long)arg1;
- (void)notifyLikeCountToDisplay:(long long)arg1;
- (void)_logWaveCommentImpressionForCommentModel:(id)arg1;
- (void)_logSystemCommentImpressionForCommentModel:(id)arg1;
- (void)_logUserCommentImpressionForCommentModel:(id)arg1;
- (void)notifyReactionPostAttempt:(long long)arg1 videoTime:(double)arg2 reactionLoggingExtras:(id)arg3;
- (void)notifyDisplayUserComment:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (void)notifyDisplaySystemComment:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (id)_createRequestToJoinEventWithStepName:(id)arg1;
- (void)notifyRequestCancelled;
- (void)notifyRequestSent;
- (void)notifyRequestSheetOpened;
- (void)notifyLiveSubscriptionActionWithFrameTime:(double)arg1;
- (id)videoRepresentationChangedExtrasDictionaryWithFrameTime:(double)arg1;
- (void)notifyProfileTap;
- (void)notifyVideoError:(id)arg1;
- (void)notifyVideoWarningWithError:(id)arg1;
- (void)notifyVideoLoadingSuccess:(_Bool)arg1 error:(id)arg2;
- (void)notifyVideoLoadingAttempt;
- (id)videoPausedExtrasDictionaryWithFrameTime:(double)arg1;
- (void)notifyVideoPausedAtTime:(double)arg1 frameTime:(double)arg2 videoSize:(struct CGSize)arg3 reason:(long long)arg4 error:(id)arg5;
- (void)notifyVideoStillPlayingAtTime:(double)arg1 frameTime:(double)arg2 debugDetailsBlock:(CDUnknownBlockType)arg3 mqttConnected:(_Bool)arg4;
- (id)_newVideoStartedPlayingEventWithReason:(id)arg1 startDelay:(double)arg2 videoSize:(struct CGSize)arg3 mqttConnected:(_Bool)arg4;
- (void)notifyVideoResumedAtTime:(double)arg1 frameTime:(double)arg2 videoSize:(struct CGSize)arg3 reason:(id)arg4 mqttConnected:(_Bool)arg5;
- (id)videoStartedPlayingExtrasDictionaryWithReason:(id)arg1 videoWidth:(double)arg2 mqttConnected:(_Bool)arg3;
- (void)notifyVideoStartedPlayingAtTime:(double)arg1 frameTime:(double)arg2 videoSize:(struct CGSize)arg3 reason:(id)arg4 mqttConnected:(_Bool)arg5;
- (id)videoShouldStartExtrasDictionaryWithReason:(id)arg1 mqttConnected:(_Bool)arg2;
- (void)notifyVideoShouldStartWithReason:(id)arg1 mqttConnected:(_Bool)arg2;
- (id)initWithAnalyticsLogger:(id)arg1 broadcast:(id)arg2 module:(id)arg3 extras:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

