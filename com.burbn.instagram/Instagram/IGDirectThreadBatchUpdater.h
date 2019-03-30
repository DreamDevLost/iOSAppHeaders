//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectOutgoingUpdateListener.h"

@class NSMutableDictionary, NSString;

@interface IGDirectThreadBatchUpdater : NSObject <IGDirectOutgoingUpdateListener>
{
    CDUnknownBlockType _completionBlock;
    id <IGDirectOutgoingUpdateSending> _updateService;
    NSMutableDictionary *_threadIdsToUpdates;
    NSMutableDictionary *_clientContextsToThreadIds;
    NSMutableDictionary *_threadsIdToUpdatePayloads;
    NSMutableDictionary *_threadIdsToErrors;
}

- (void).cxx_destruct;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)_processPayload:(id)arg1 error:(id)arg2;
- (void)performUpdate:(CDUnknownBlockType)arg1;
- (id)initWithUpdateService:(id)arg1 threadUpdate:(id)arg2 threadId:(id)arg3;
- (id)initWithUpdateService:(id)arg1 threadUpdate:(id)arg2 threadIds:(id)arg3;
- (id)initWithUpdateService:(id)arg1 threadUpdates:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
