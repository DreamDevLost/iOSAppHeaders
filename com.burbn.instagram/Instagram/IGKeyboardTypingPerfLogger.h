//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAnimationPerformanceTrackerDelegate.h"

@class FBAnimationPerformanceTracker, IGPerformanceMarker, NSString;

@interface IGKeyboardTypingPerfLogger : NSObject <FBAnimationPerformanceTrackerDelegate>
{
    FBAnimationPerformanceTracker *_animationTracker;
    IGPerformanceMarker *_marker;
}

- (void).cxx_destruct;
- (void)_appWillResignActive;
- (void)reportAnimationPerformanceFrameDrops:(long long)arg1;
- (void)reportAnimationPerformanceFrameRendered:(double)arg1 atTimestamp:(double)arg2;
- (void)reportAnimationPerformanceLargeFrameDrops:(long long)arg1 frameDuration:(double)arg2 atTimestamp:(double)arg3;
- (void)reportAnimationPerformanceTrackingResult:(struct FBAnimationPerformanceTrackingResult)arg1;
- (void)_keyboardInputDidChange:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_stop;
- (void)_start;
- (void)_resgisterForNotifications;
- (void)beginObservingWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

