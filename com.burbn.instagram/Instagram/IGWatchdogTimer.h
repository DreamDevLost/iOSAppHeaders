//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGWatchdogQPLogger, IGWatchdogStallDetectionListenerAnnouncer, IGWatchdogTimerLogger, IGWatchdogTimerNavigationEventListener, NSString, NSThread;

@interface IGWatchdogTimer : NSObject
{
    NSThread *_watchdogThread;
    double _backoff;
    struct __CFRunLoopObserver *_keepaliveObserver;
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _lastKeepaliveTime
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _lastStallEndTime
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _currentlyStalled
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _suspended
    IGWatchdogTimerNavigationEventListener *_navigationListener;
    IGWatchdogTimerLogger *_watchdogTimerLogger;
    IGWatchdogStallDetectionListenerAnnouncer *_announcer;
    IGWatchdogQPLogger *_qpLogger;
    double _traceLoggingRate;
    _Bool _enabled;
    _Bool _inBackground;
    double _timeout;
    id <IGWatchdogTimerDataSource> _dataSource;
    NSString *_currentApplicationState;
}

@property _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(copy) NSString *currentApplicationState; // @synthesize currentApplicationState=_currentApplicationState;
@property(nonatomic) __weak id <IGWatchdogTimerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)updateWatchdogTimerConfigWithSampleRate:(double)arg1 shouldLogToQPL:(_Bool)arg2;
- (void)_didChangeApplicationState;
- (double)_lastKeepaliveUnwrapped;
- (void)_logSoftStallToAnalytics;
- (_Bool)_stallEnded;
- (void)_watchdogExpired;
- (_Bool)stalledInPreviousSession;
- (void)_stopMonitoringThreads;
- (void)_startMonitoringThreads;
- (void)_watchdogThread;
- (void)_watchdogMethod;
- (void)_stopObservingNotifications;
- (void)_startObservingNotifications;
- (void)_stopWatchdog;
- (void)_startWatchdog;
- (void)resetPreviousStalledState;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithLogger:(id)arg1 backoff:(double)arg2 traceLoggingRate:(double)arg3 enableQpl:(_Bool)arg4;

@end
