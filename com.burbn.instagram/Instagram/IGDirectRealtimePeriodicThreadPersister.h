//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTimer, IGDirectCache, IGDirectRealtimeIrisSubscriptionHandler, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface IGDirectRealtimePeriodicThreadPersister : NSObject
{
    NSMutableSet *_threadIdsAwaitingPersistence;
    NSNumber *_sequenceIdAwaitingPersistence;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _timerFactory;
    IGDirectCache *_cache;
    IGDirectRealtimeIrisSubscriptionHandler *_irisSubscriptionHandler;
    id <IGDirectRealtimeIrisDeltaDebugFileLogging> _deltaLogger;
    NSString *_userPk;
    FBTimer *_timer;
    _Bool _paused;
}

- (void).cxx_destruct;
- (void)_persist;
- (void)_scheduleTimerIfNeeded;
- (void)_markMetadataAndOrThreadWithIdDirty:(id)arg1 sequenceId:(id)arg2;
- (void)_applicationWillEnterBackground:(id)arg1;
- (void)resume;
- (void)pause;
- (void)markMetadataDirtyWithSequenceId:(id)arg1;
- (void)markThreadDirty:(id)arg1 sequenceId:(id)arg2;
- (id)initWithDirectCache:(id)arg1 irisSubscriptionHandler:(id)arg2 deltaLogger:(id)arg3 userPk:(id)arg4 queue:(id)arg5 timerFactory:(CDUnknownBlockType)arg6;

@end
