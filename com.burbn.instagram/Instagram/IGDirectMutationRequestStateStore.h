//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRequestStateStoreReading.h"
#import "IGDirectMutationRequestStateStoreWriting.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface IGDirectMutationRequestStateStore : NSObject <IGDirectMutationRequestStateStoreReading, IGDirectMutationRequestStateStoreWriting>
{
    id <IGDirectMutationRequestStateDiskPersisting> _diskPersister;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_mutationIdToMutationState;
    NSMutableDictionary *_queueKeyToMutationIdQueue;
    id <IGDirectMutationRequestStateStoreDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectMutationRequestStateStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateMemoryQueueForMutation:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)_removeMutationFromQueue:(id)arg1;
- (void)_enqueueMutation:(id)arg1;
- (void)_saveNewMutationStateAndNotifiyDiskPersister:(id)arg1;
- (void)_updateExecutionState:(id)arg1 attemptedCount:(unsigned long long)arg2 forMutationId:(id)arg3;
- (void)_updateExecutionAdditionalData:(id)arg1 forMutationId:(id)arg2;
- (unsigned long long)_currentAttemptedCountOfMutationId:(id)arg1;
- (void)_removeMutationRequestWithId:(id)arg1 reason:(unsigned long long)arg2;
- (void)_storeAndEnqueueMutationRequest:(id)arg1 initialExecutionState:(id)arg2 additionalData:(id)arg3;
- (void)writeUpdate:(id)arg1;
- (id)allMutations;
- (id)allQueuesByQueueKey;
- (id)requestStateForMutationId:(id)arg1;
- (id)initWithDiskPersister:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

