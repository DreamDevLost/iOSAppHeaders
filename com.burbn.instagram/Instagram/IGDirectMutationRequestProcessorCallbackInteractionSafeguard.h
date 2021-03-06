//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRequestExecutionAdditionalDataUpdating.h"
#import "IGDirectMutationRequestExecutionAttemptExtraPayloadLogging.h"
#import "IGDirectMutationRequestProcessorExecutionResultHandling.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface IGDirectMutationRequestProcessorCallbackInteractionSafeguard : NSObject <IGDirectMutationRequestExecutionAdditionalDataUpdating, IGDirectMutationRequestExecutionAttemptExtraPayloadLogging, IGDirectMutationRequestProcessorExecutionResultHandling>
{
    id <IGDirectMutationRequestProcessorCallbackInteractionSafeguardDelegate> _delegate;
    NSString *_mutationId;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isValid;
    NSDictionary *_extraPayload;
}

- (void).cxx_destruct;
- (void)attachExtraPayloadToMutationAttemptedLog:(id)arg1;
- (void)updateAdditionalData:(id)arg1;
- (void)handleExecutionResult:(id)arg1;
- (id)extraPayloadToAttachToAttemptLog;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 mutationId:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

