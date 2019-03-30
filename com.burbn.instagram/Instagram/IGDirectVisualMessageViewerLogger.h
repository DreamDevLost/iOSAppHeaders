//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectVisualMessagePlaybackTracker, IGDirectVisualMessageViewerLoggingInfo, IGPhotosRenderedLogger, IGUserStore, NSDate, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface IGDirectVisualMessageViewerLogger : NSObject
{
    NSString *_viewerSessionID;
    long long _totalMessagesCount;
    NSString *_userPk;
    IGUserStore *_userStore;
    IGDirectVisualMessageViewerLoggingInfo *_loggingInfo;
    IGDirectVisualMessagePlaybackTracker *_playbackTracker;
    IGPhotosRenderedLogger *_pprLogger;
    NSMutableDictionary *_messageIdToShouldStartTimeMapping;
    NSDate *_playbackStartTime;
    long long _photosConsumed;
    long long _videosConsumed;
    long long _oneViewConsumed;
    long long _replayableConsumed;
    long long _permanentConsumed;
    NSMutableOrderedSet *_consumedMediaIds;
    NSDate *_pauseStartTime;
    double _totalPauseDuration;
    NSMutableDictionary *_visualMessageTotalPauseDuration;
    long long _state;
}

- (void).cxx_destruct;
- (id)_module;
- (void)_addTimeElapsedForEvent:(id)arg1;
- (id)_impressionParametersForMessage:(id)arg1 atIndex:(long long)arg2;
- (void)_logTimeSpentAsNeededForMessage:(id)arg1 atIndex:(long long)arg2;
- (void)_logSubsequentImpressionAsNeededForMessage:(id)arg1 atIndex:(long long)arg2;
- (void)_logViewedImpressionAsNeededForMessage:(id)arg1 atIndex:(long long)arg2;
- (void)_logImpressionForMessage:(id)arg1 atIndex:(long long)arg2;
- (void)logAttributionTooltipTapWithAppID:(id)arg1 appName:(id)arg2 url:(id)arg3;
- (void)logAttributionTapWithAppID:(id)arg1 appName:(id)arg2;
- (void)logImageErrorForUrl:(id)arg1 storyId:(id)arg2 message:(id)arg3 error:(id)arg4 statusCode:(long long)arg5 networkRequestSummary:(id)arg6;
- (void)logPlaybackForNavType:(long long)arg1 message:(id)arg2 atIndex:(long long)arg3;
- (void)logPlaybackSummary;
- (void)logPlaybackEntryForMessage:(id)arg1;
- (void)notifyPlaybackDidEndForMessage:(id)arg1 atIndex:(long long)arg2 playerLoggingInfo:(id)arg3;
- (void)notifyVideoDidPlayForMessage:(id)arg1 atIndex:(long long)arg2 playerLoggingInfo:(id)arg3;
- (void)notifyPlaybackDidStartForMessage:(id)arg1 atIndex:(long long)arg2 playerLoggingInfo:(id)arg3;
- (void)notifyPlaybackDidLoadForMessage:(id)arg1 atIndex:(long long)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)notifyUnpauseForVisualMessage:(id)arg1;
- (void)notifyPause;
- (void)notifyWillLoadImageURL:(id)arg1 forMessage:(id)arg2;
- (void)notifyPreviewDidLoadForMessage:(id)arg1 progressiveJPEGScanNumber:(id)arg2;
- (void)notifyStartLoadingForMessage:(id)arg1;
- (id)initWithUserSession:(id)arg1 totalMessagesCount:(long long)arg2 loggingInfo:(id)arg3;

@end
