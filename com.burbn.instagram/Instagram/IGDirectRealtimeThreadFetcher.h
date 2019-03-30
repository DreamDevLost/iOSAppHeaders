//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectRealtimeThreadFetcherListenerAnnouncer, IGDirectThreadService, NSMutableDictionary, NSMutableSet;

@interface IGDirectRealtimeThreadFetcher : NSObject
{
    IGDirectThreadService *_threadService;
    long long _retryCount;
    CDUnknownBlockType _timerProvider;
    IGDirectRealtimeThreadFetcherListenerAnnouncer *_listenerAnnouncer;
    NSMutableDictionary *_threadIdToBackoffTimer;
    NSMutableSet *_threadIdsOfOngoingFetches;
}

- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_cleanupFetchForThreadId:(id)arg1;
- (void)_handleThreadFetchFailureForThreadId:(id)arg1 sequenceId:(id)arg2 retryCount:(long long)arg3 response:(id)arg4 error:(id)arg5;
- (void)_handleThreadFetchSuccessForThreadId:(id)arg1 fetchedThread:(id)arg2;
- (void)_fetchThreadForThreadId:(id)arg1 sequenceId:(id)arg2 retryCount:(long long)arg3;
- (void)_logFetchError:(id)arg1 willRetry:(_Bool)arg2 threadId:(id)arg3;
- (_Bool)hasPendingFetches;
- (_Bool)hasPendingFetchForThreadId:(id)arg1;
- (void)triggerFetchIfNeededForThreadId:(id)arg1 sequenceId:(id)arg2;
- (id)initWithThreadService:(id)arg1 retryCount:(long long)arg2 timerProvider:(CDUnknownBlockType)arg3;

@end

