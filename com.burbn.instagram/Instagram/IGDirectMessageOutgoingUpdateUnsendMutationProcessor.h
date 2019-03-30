//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRequestProcessing.h"

@class IGDirectCache, IGDirectMutationNetworker, NSString;

@interface IGDirectMessageOutgoingUpdateUnsendMutationProcessor : NSObject <IGDirectMutationRequestProcessing>
{
    IGDirectCache *_directCache;
    IGDirectMutationNetworker *_networker;
    NSString *_threadId;
    NSString *_messageId;
    NSString *_updateClientContext;
}

- (void).cxx_destruct;
- (void)_removeMessageFromCache;
- (void)handleMutationStateChange:(id)arg1;
- (void)executeWithResultHandler:(id)arg1 accessoryPackage:(id)arg2;
- (id)initWithDirectCache:(id)arg1 networker:(id)arg2 threadId:(id)arg3 messageId:(id)arg4 updateClientContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

