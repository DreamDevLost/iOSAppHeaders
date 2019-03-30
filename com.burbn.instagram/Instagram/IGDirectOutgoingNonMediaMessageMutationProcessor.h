//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRequestProcessing.h"

@class IGDirectMutationNetworker, IGDirectOutgoingMessagePayload, NSString;

@interface IGDirectOutgoingNonMediaMessageMutationProcessor : NSObject <IGDirectMutationRequestProcessing>
{
    IGDirectOutgoingMessagePayload *_outgoingMessage;
    IGDirectMutationNetworker *_networker;
}

- (void).cxx_destruct;
- (void)handleMutationStateChange:(id)arg1;
- (void)executeWithResultHandler:(id)arg1 accessoryPackage:(id)arg2;
- (id)initWithOutgoingMessage:(id)arg1 mutationNetworker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

