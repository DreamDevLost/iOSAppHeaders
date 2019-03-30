//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRequestStateStoreListener.h"

@class IGDirectMutationOptimisticUpdateInfoCache, IGDirectMutationRequestCoordinationCache, NSString;

@interface IGDirectMutationOptimisticUpdateInfoCacheUpdater : NSObject <IGDirectMutationRequestStateStoreListener>
{
    IGDirectMutationOptimisticUpdateInfoCache *_optimisticUpdateInfoCache;
    IGDirectMutationRequestCoordinationCache *_requestCoordinationCache;
}

- (void).cxx_destruct;
- (id)_threadIdsWithOptimisticStateForMutationId:(id)arg1;
- (id)_optimisticUpdateMapForMutationId:(id)arg1;
- (void)_dropOptimisticStateForMutationId:(id)arg1 mutationCompleted:(_Bool)arg2;
- (void)_updateOptimisticStateIfNecessaryForMutationId:(id)arg1 fromExecutionState:(id)arg2 toExecutionState:(id)arg3;
- (void)_insertOptimisticStateForMutationId:(id)arg1 withRequestStatus:(id)arg2;
- (void)mutationRequestStoreDidDropMutationWithId:(id)arg1 withReason:(unsigned long long)arg2;
- (void)mutationRequestStoreDidUpdateMutation:(id)arg1 fromExecutionState:(id)arg2 toExecutionState:(id)arg3;
- (void)mutationRequestStoreDidEnqueueMutation:(id)arg1 withInitialExecutionState:(id)arg2;
- (id)initWithOptimisticUpdateInfoCache:(id)arg1 requestCoordinationCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
