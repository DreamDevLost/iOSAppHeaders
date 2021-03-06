//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStallObserverProtocol.h"

@class FBTimer, NSObject<OS_dispatch_queue>, NSString;

@interface IGStallObserver : NSObject <IGStallObserverProtocol>
{
    id <IGStallObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_pollingQueue;
    double _stallThreshold;
    double _pollingInterval;
    FBTimer *_timer;
    id <FBTimeMachine> _timeMachine;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _paused
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _stalled
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _lastHeartbeatTimestamp
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _lastStartedTimestamp
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _totalStallTime
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _totalElapsedTime
}

- (void).cxx_destruct;
- (void)_didResume;
- (void)_didStall;
- (void)_ticked;
- (double)stallTime;
- (double)totalDuration;
- (void)receivedHeartbeat;
- (void)pauseStallObserving;
- (void)startStallObserving;
- (id)initWithDelegate:(id)arg1 pollingQueue:(id)arg2 stallThreshold:(double)arg3 pollingInterval:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

