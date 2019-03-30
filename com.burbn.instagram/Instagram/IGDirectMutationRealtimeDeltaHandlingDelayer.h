//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRealtimeDeltaHandling.h"

@class IGConditionalExecutor, NSObject<OS_dispatch_queue>, NSString;

@interface IGDirectMutationRealtimeDeltaHandlingDelayer : NSObject <IGDirectMutationRealtimeDeltaHandling>
{
    id <IGDirectMutationRealtimeDeltaHandling> _realHandler;
    NSObject<OS_dispatch_queue> *_queue;
    IGConditionalExecutor *_conditionExecutor;
    _Bool _serviceIsReady;
}

- (void).cxx_destruct;
- (void)_notifyRealHandlerOfMutationTrackingIds:(id)arg1;
- (void)mutationServiceIsReadyForRealtimeDeltaHandlingNotifications;
- (_Bool)isListeningForMutationTrackingIds;
- (void)handleReceivedAndStoredMutationTrackingIds:(id)arg1;
- (id)initWithRealtimeDeltaHandler:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

