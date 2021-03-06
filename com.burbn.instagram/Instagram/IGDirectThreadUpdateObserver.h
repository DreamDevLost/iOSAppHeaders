//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectCacheListener.h"
#import "IGDirectMutationOptimisticStateUpdatingListener.h"

@class IGDirectCache, IGDirectKey, IGDirectMutationManager, NSString;

@interface IGDirectThreadUpdateObserver : NSObject <IGDirectCacheListener, IGDirectMutationOptimisticStateUpdatingListener>
{
    IGDirectKey *_threadKey;
    IGDirectCache *_cache;
    IGDirectMutationManager *_mutationManager;
    id <IGExperimentSetProviding> _experimentProvider;
    id <IGDirectThreadUpdateObserverDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_notifyThreadUpdateIfNeeded:(id)arg1 updateReason:(unsigned long long)arg2;
- (void)_cacheDidUpdateThreads:(id)arg1 updateReason:(unsigned long long)arg2;
- (void)_notifiyInitialUpdate;
- (void)mutationOptimisticUpdateInfoWasDropped:(id)arg1 mutationCompleted:(_Bool)arg2;
- (void)mutationOptimisticUpdateInfoWasUpdated:(id)arg1;
- (void)mutationOptimisticUpdateInfoWasInserted:(id)arg1;
- (void)directCacheDidUpdateThread:(id)arg1 withAppliedUpdates:(id)arg2;
- (void)directCacheDidUpdatePendingRequests:(id)arg1;
- (void)directCacheDidRemoveThreadsWithIds:(id)arg1;
- (void)directCacheDidUpdateThreads:(id)arg1;
- (void)startListening;
- (id)initWithThreadKey:(id)arg1 cache:(id)arg2 mutationManager:(id)arg3 experimentProvider:(id)arg4 irisSyncStatusProvider:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

