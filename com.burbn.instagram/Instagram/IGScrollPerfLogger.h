//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAnimationPerformanceTrackerDelegate.h"

@class FBAnimationPerformanceTracker, IGPerformanceMarker, NSString;

@interface IGScrollPerfLogger : NSObject <FBAnimationPerformanceTrackerDelegate>
{
    NSString *_module;
    FBAnimationPerformanceTracker *_apTracker;
    _Bool _isEnabled;
    NSString *_scrollSessionId;
    IGPerformanceMarker *_marker;
    NSString *_scrollPerfLoggerStopReasonString;
    id <IGScrollPerfProfilerProtocol> _profiler;
}

+ (id)sampledWithAnalyticModule:(id)arg1;
- (void).cxx_destruct;
- (void)_stopOnResignActive;
- (void)_logQPLEventWithTrackingResult:(struct FBAnimationPerformanceTrackingResult)arg1;
- (void)_logAnalyticsEventWithTrackingResult:(struct FBAnimationPerformanceTrackingResult)arg1;
- (void)reportAnimationPerformanceLargeFrameDrops:(long long)arg1 frameDuration:(double)arg2 atTimestamp:(double)arg3;
- (void)reportAnimationPerformanceFrameDrops:(long long)arg1;
- (void)reportAnimationPerformanceTrackingResult:(struct FBAnimationPerformanceTrackingResult)arg1;
- (void)reportAnimationPerformanceFrameRendered:(double)arg1 atTimestamp:(double)arg2;
- (void)stopWithReason:(long long)arg1;
- (void)start;
- (id)initWithAnalyticModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
