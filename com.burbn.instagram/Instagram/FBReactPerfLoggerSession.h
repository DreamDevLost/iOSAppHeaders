//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBReactPerfLoggerSessionData, NSMutableArray, NSObject<OS_dispatch_queue>, RCTPerformanceLogger;

@interface FBReactPerfLoggerSession : NSObject
{
    id <FBReactAppPerfLoggerProtocol> _appPerfLogger;
    NSObject<OS_dispatch_queue> *_eventQueue;
    FBReactPerfLoggerSessionData *_sessionData;
    RCTPerformanceLogger *_reactPerformanceLogger;
    NSMutableArray *_pendingJSPerfEvents;
    _Bool _checkEndTimeBeforeCancel;
    _Bool _finishHotStartWithFlag;
    id <FBReactCTScanReporter> _ctScanReporter;
    id <FBReactPerfLoggerEventListener> _eventListener;
}

@property(nonatomic) __weak id <FBReactPerfLoggerEventListener> eventListener; // @synthesize eventListener=_eventListener;
@property(nonatomic) __weak id <FBReactCTScanReporter> ctScanReporter; // @synthesize ctScanReporter=_ctScanReporter;
- (void).cxx_destruct;
- (void)reportMetricsIfFinished;
- (_Bool)processJSPerfEvents:(id)arg1;
- (void)processPendingJSPerfEvents;
- (void)didReceiveSegmentFetcherEventNotification:(id)arg1;
- (void)reactPerfLoggerDidReceiveEvents:(id)arg1;
- (void)javaScriptDidLoad:(id)arg1;
- (void)logBridgeUseHermes:(_Bool)arg1;
- (void)logPrefetcherDidReceiveResponse:(id)arg1;
- (void)logPrefetcherWillSendRequest:(id)arg1;
- (void)logFiredNativePrefetching:(_Bool)arg1;
- (void)logBridgeStartupStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 nativeRequiresCount:(long long)arg3 startupPoints:(id)arg4 startupAnnotations:(id)arg5;
- (void)logBridgeStartupType:(id)arg1;
- (void)logViewControllerDidDisappear;
- (void)logViewControllerDidAppear:(_Bool)arg1;
- (void)logViewControllerWillAppear;
- (void)logViewControllerDidBecomeSelectedTab;
- (void)logFlagDidAppearWithData:(id)arg1;
- (void)startWithLoadType:(id)arg1;
- (void)start;
- (id)initWithAppPerfLogger:(id)arg1 checkEndTimeBeforeCancel:(_Bool)arg2 finishHotStartWithFlag:(_Bool)arg3;
- (id)initWithAppPerfLogger:(id)arg1;

@end
