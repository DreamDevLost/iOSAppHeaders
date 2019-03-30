//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLiveLoggingContext.h"

@class FBStateMachine, IGBatteryStatus, IGLiveBroadcastLoggingCoreTracker, IGLiveBroadcastStats, IGLiveWithLoggingSessionTracker, NSNumber, NSString;

@interface IGLiveBroadcastLoggingContext : NSObject <IGLiveLoggingContext>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    long long _sessionType;
    long long _sessionSwapState;
    NSString *_broadcastTrackingToken;
    double _lastUpdateTimestamp;
    double _updateTimeInterval;
    _Bool _didPassSpeedTest;
    NSNumber *_speedTestKbps;
    _Bool _isChatHidden;
    _Bool _isPaused;
    _Bool _didStart;
    long long _cameraSwitchCount;
    long long _cameraPosition;
    NSString *_audioInput;
    NSString *_audioInputLocation;
    NSString *_audioOutput;
    NSNumber *_audioOutputVolume;
    long long _displayedSystemCommentCount;
    long long _displayedUserCommentCount;
    long long _displayedLikeCount;
    long long _displayedBurstLikeCount;
    long long _viewerCount;
    long long _updateCount;
    long long _viewerListOpenCount;
    long long _maxViewerCount;
    long long _totalViewerCount;
    long long _totalDisplayedSystemCommentCount;
    long long _totalDisplayedUserCommentCount;
    long long _totalDisplayedLikeCount;
    long long _totalDisplayedBurstLikeCount;
    long long _totalSelectedQuestionCount;
    CDStruct_1b6d18a9 _audioDuration;
    long long _pauseReason;
    IGLiveBroadcastStats *_stats;
    IGBatteryStatus *_currentBatteryStatus;
    double _totalBatteryDrain;
    IGLiveWithLoggingSessionTracker *_liveWithSessionTracker;
    IGLiveBroadcastLoggingCoreTracker *_liveWithCoreTracker;
    FBStateMachine *_rtcStateMachine;
    _Bool _broadcastCreateAttempted;
    _Bool _broadcastCreateSucceeded;
    _Bool _broadcastCancelled;
    long long _totalMediaSharedCount;
    double _createBroadcastTimestamp;
    double _createBroadcastSuccessTimestamp;
    double _beginBroadcastTimestamp;
}

- (void).cxx_destruct;
- (void)_resetUpdateMetrics;
- (void)_notifySessionUpdateWithMqttConnected:(_Bool)arg1;
- (id)_summaryBroadcastExtraData;
- (id)_perfBroadcastExtraData;
- (id)_activeBroadcastExtraData;
- (id)_audioExtraData;
- (id)_commonExtraData;
- (id)_createBroadcastEventWithStepName:(id)arg1;
- (void)_updateCurrentAudioRoute;
- (void)_updateBatteryStatus;
- (void)notifySendBroadcastEventFailed:(id)arg1;
- (void)notifySendBroadcastEvent;
- (void)notifyIceRestartFailed:(id)arg1;
- (void)notifyIceRestart;
- (void)notifySendJoinFailed:(id)arg1;
- (void)notifySendJoinSucceeded;
- (void)notifySendJoin;
- (void)notifySendLeaveFailed:(id)arg1;
- (void)notifySendLeaveSucceeded;
- (void)notifySendLeave;
- (void)notifySendKickoutFailed:(id)arg1;
- (void)notifySendKickoutSucceeded;
- (void)notifySendKickout;
- (void)notifySendInviteSucceeded;
- (void)notifySendInviteFailed:(id)arg1;
- (void)notifySendInvite;
- (void)notifyUpdatedViewerCount:(long long)arg1;
- (void)notifyReactionPostAttempt:(long long)arg1 videoTime:(double)arg2 reactionLoggingExtras:(id)arg3;
- (void)notifyBurstLikeCountToDisplay:(long long)arg1;
- (void)notifyLikeCountToDisplay:(long long)arg1;
- (void)_logCommentImpressionForComment:(id)arg1;
- (void)notifyDisplayUserComment:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (void)notifyDisplaySystemComment:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (void)notifyVideoResumeForStreamId:(id)arg1;
- (void)notifyVideoPausedForStreamId:(id)arg1;
- (void)notifyRtmpSendEndOfStreamError:(id)arg1;
- (void)notifyRtmpEvent:(unsigned int)arg1;
- (void)notifyFailToSwapToRTMPWithDetails:(id)arg1;
- (void)notifyDidSwapToRTMPWithDuration:(double)arg1;
- (void)notifyBeginSwapToRTMP;
- (void)notifyFailToConnectToMWSWithDetails:(id)arg1;
- (void)notifyConnectToMWSWithAudioBufferDurationSeconds:(double)arg1 videoBufferDurationSeconds:(double)arg2 lastAudioPts:(double)arg3 lastVideoPts:(double)arg4 lastAudioPtsStreamTime:(double)arg5 callStartedToSocketWritabilityLatencySeconds:(double)arg6 callJoinedToSocketWritabilityLatencySeconds:(double)arg7;
- (void)notifyBeginSwapToRTC;
- (void)notifyGuestLeft;
- (void)notifyGuestJoinedWithId:(id)arg1;
- (void)notifyInviteDisabledForReason:(long long)arg1;
- (void)notifyGuestInviteSent;
- (void)notifyGuestSelectedForUser:(id)arg1 listType:(long long)arg2;
- (void)notifyGuestDismissEndScreen;
- (void)notifyGuestEndScreenImpression;
- (void)notifyGuestConnected;
- (void)notifyGuestAbortedWithGuestInitiated:(_Bool)arg1 error:(id)arg2;
- (void)notifyGuestJoinRequestedWithBroadcastId:(id)arg1;
- (void)notifyQuestionRemoved;
- (void)notifyQuestionSelectedWithQuestionText:(id)arg1;
- (void)notifyQuestionSheetImpressionWithQuestionCount:(long long)arg1;
- (void)notifyApplicationNotification:(long long)arg1;
- (void)notifySessionChangedResolutionWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bitrate:(unsigned long long)arg3;
- (void)notifyAudioBytesSentStalled;
- (void)notifyVideoCaptureResumedAfter:(double)arg1;
- (void)notifyAudioCaptureResumedAfter:(double)arg1;
- (void)notifyVideoCaptureStalled;
- (void)notifyAudioCaptureStalled;
- (void)notifySessionError:(id)arg1;
- (void)notifyMediaSharePlayerDidFetchVideoWithFrameRate:(double)arg1 resolution:(struct CGSize)arg2 durationMs:(double)arg3;
- (void)notifyMediaTrayDeselected;
- (void)notifyMediaTraySelectedMediaAtPosition:(long long)arg1 mediaType:(long long)arg2;
- (void)notifyMediaTrayImpression;
- (void)notifyEndScreenDoneButtonTapWithSharePostLiveEnabled:(_Bool)arg1;
- (void)notifyEndScreenImpression;
- (void)notifyUserJoinedCommentTap;
- (void)notifyViewerCountTap;
- (void)notifySentRequestToJoin:(_Bool)arg1;
- (void)notifyViewerListImpressionWithViewerList:(id)arg1 requestList:(id)arg2 listType:(long long)arg3;
- (void)notifyViewerListOpen;
- (void)notifyTotalViewerCount:(long long)arg1;
- (void)notifySpeedTestResult:(_Bool)arg1 kbps:(id)arg2;
- (void)notifyCommentUnpinned:(id)arg1;
- (void)notifyCommentPinned:(id)arg1;
- (void)notifyCameraSwitch:(long long)arg1;
- (void)notifyChatToggle:(_Bool)arg1;
- (void)notifyBroadcastUpdatedWithStats:(id)arg1;
- (void)notifyAudioUpdateWithDuration:(CDStruct_1b6d18a9)arg1 mqttConnected:(_Bool)arg2;
- (void)notifySessionSummary:(_Bool)arg1 audioTime:(double)arg2 audioStallTime:(double)arg3 videoTime:(double)arg4 videoStallTime:(double)arg5;
- (void)notifySessionEndedWithReason:(long long)arg1 error:(id)arg2;
- (void)notifySessionResumed;
- (void)notifySessionPausedWithReason:(long long)arg1;
- (void)notifyBroadcastSavetoDiskFinishedWithError:(id)arg1 durationOfBroadcast:(long long)arg2 timeToSave:(long long)arg3;
- (void)notifyBroadcastSavetoDiskAttempted;
- (void)notifyBroadcastSavetoDiskButtonImpressionWithPartiallyRecorded:(_Bool)arg1 error:(id)arg2 filesCount:(unsigned long long)arg3;
- (void)notifySessionBeginRequestReturnedWithMediaId:(id)arg1 questionId:(id)arg2 statusCode:(long long)arg3 error:(id)arg4 mqttConnected:(_Bool)arg5;
- (void)notifySessionBeginRequested;
- (void)notifySessionVerification;
- (void)notifySessionCreateRequestReturnedWithBroadcastId:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (void)notifySessionCreateRequested;
- (void)notifySessionType:(long long)arg1;
- (void)notifySessionCancelled;
- (void)notifyEntry;
- (void)setUpdateEventTimeInterval:(id)arg1;
- (id)containerModule;
- (id)waterfallSummaryDict;
- (id)analyticsLogger;
- (id)initWithAnalyticsLogger:(id)arg1 waterfallId:(id)arg2 waterfallEventName:(id)arg3 containerModule:(id)arg4 mediaOwnerId:(id)arg5 mediaId:(id)arg6 broadcastTrackingToken:(id)arg7 cameraPosition:(long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
