//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectRealtimeIrisDeltaHandling.h"
#import "IGDirectRealtimeThreadFetcherListener.h"

@class IGDirectCache, IGDirectRealtimeIrisDeltaApplicator, IGDirectRealtimePendingIrisDeltaCache, IGDirectRealtimePeriodicThreadPersister, IGDirectRealtimeThreadFetcher, IGUserSession, NSString;

@interface IGDirectRealtimeIrisDeltaHandler : NSObject <IGDirectRealtimeIrisDeltaHandling, IGDirectRealtimeThreadFetcherListener>
{
    IGUserSession *_userSession;
    IGDirectCache *_directCache;
    IGDirectRealtimeIrisDeltaApplicator *_irisDeltaApplicator;
    IGDirectRealtimePendingIrisDeltaCache *_pendingIrisDeltaCache;
    IGDirectRealtimeThreadFetcher *_threadFetcher;
    IGDirectRealtimePeriodicThreadPersister *_threadPersister;
    id <IGDirectRealtimeIrisDeltaListener> _delegate;
}

@property(nonatomic) __weak id <IGDirectRealtimeIrisDeltaListener> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_schedulePersistingForDeltaIfNeeded:(id)arg1;
- (void)threadFetcherFailedForThreadId:(id)arg1;
- (void)threadFetcherSucceededForThreadId:(id)arg1;
- (void)threadFetcherWillFetchThreadAtSequenceId:(id)arg1 forThreadId:(id)arg2;
- (void)_applyDeltaToLocalState:(id)arg1;
- (void)_handleDeltaForMissingLocalThread:(id)arg1;
- (void)handleIrisDelta:(id)arg1;
- (id)initWithUserSession:(id)arg1 directCache:(id)arg2 irisDeltaApplicator:(id)arg3 pendingIrisDeltaCache:(id)arg4 threadFetcher:(id)arg5 threadPersister:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
