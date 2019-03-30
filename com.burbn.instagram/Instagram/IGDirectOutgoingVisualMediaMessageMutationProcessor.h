//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRequestProcessing.h"

@class IGDirectMutationMediaUploadObserver, IGDirectMutationNetworker, IGDirectOutgoingMessagePayload, IGDirectOutgoingVisualMedia, IGUserSession, NSString;

@interface IGDirectOutgoingVisualMediaMessageMutationProcessor : NSObject <IGDirectMutationRequestProcessing>
{
    IGDirectOutgoingMessagePayload *_outgoingMessage;
    IGDirectOutgoingVisualMedia *_outgoingVisualMedia;
    IGDirectMutationNetworker *_mutationNetworker;
    IGDirectMutationMediaUploadObserver *_mediaUploadObserver;
    IGUserSession *_userSession;
    id <IGDirectMutationRequestProcessorExecutionResultHandling> _resultHandler;
    NSString *_mutationId;
}

- (void).cxx_destruct;
- (void)_didFailWithError:(id)arg1;
- (void)_shareDidSucceed;
- (void)_performShare;
- (void)handleMutationStateChange:(id)arg1;
- (void)executeWithResultHandler:(id)arg1 accessoryPackage:(id)arg2;
- (id)initWithOutgoingMessage:(id)arg1 outgoingVisualMedia:(id)arg2 mediaUploadObserver:(id)arg3 userSession:(id)arg4 mutationNetworker:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

