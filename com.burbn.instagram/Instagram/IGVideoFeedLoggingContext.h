//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGUserSession, NSString;

@interface IGVideoFeedLoggingContext : NSObject
{
    IGUserSession *_userSession;
    id <IGVideoFeedService> _service;
    id <IGContextualFeedLogger> _contextualFeedLogger;
    IGFeedItem *_focusedFeedItem;
    NSString *_analyticsModule;
    NSString *_sessionId;
    _Bool _hasLoggedReachedEndOfFeed;
    long long _focusedVideoLoopCount;
    double _focusedVideoDurationSeconds;
    double _focusedVideoStartProgressFraction;
    double _focusedVideoCurrentProgressFraction;
    _Bool _sessionActive;
}

@property(readonly, nonatomic) _Bool sessionActive; // @synthesize sessionActive=_sessionActive;
- (void).cxx_destruct;
- (id)_generateLoggingInfoDictionaryWithFeedItem:(id)arg1 section:(long long)arg2 videoDurationSeconds:(double)arg3 videoTimeSpentSeconds:(double)arg4;
- (void)_resetVideoProgressState;
- (void)_logFeedExitWithReason:(long long)arg1;
- (void)_logMediaImpressionForFocusedFeedItem;
- (long long)_focusedFeedItemSection;
- (double)_focusedVideoNormalizedDurationSeconds;
- (double)_focusedVideoNormalizedTimeSpentSeconds;
- (void)didReachEndOfFeed;
- (void)focusedFeedItemChangedProgress:(double)arg1 duration:(double)arg2;
- (void)focusedFeedItemDidLoop;
- (void)focusChangedToFeedItem:(id)arg1;
- (void)sessionDidEndWithViewBeingDismissed:(_Bool)arg1 exitReason:(long long)arg2;
- (void)sessionDidStartWithFocusedFeedItem:(id)arg1;
- (id)initWithUserSession:(id)arg1 service:(id)arg2 contextualFeedLogger:(id)arg3 analyticsModule:(id)arg4;

@end

