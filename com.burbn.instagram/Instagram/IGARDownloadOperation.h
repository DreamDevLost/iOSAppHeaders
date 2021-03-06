//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class IGARDownloadStorage, IGRequestPolicy, IGRequestToken, IGURLRequest, NSObject<OS_dispatch_queue>;

@interface IGARDownloadOperation : NSOperation
{
    CDUnknownBlockType _predatingLocalURL;
    id <IGAPIClient> _networker;
    IGURLRequest *_request;
    IGRequestPolicy *_policy;
    IGARDownloadStorage *_storage;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _errorBlock;
    IGRequestToken *_requestToken;
    NSObject<OS_dispatch_queue> *_executionQueue;
    _Bool _finished;
    _Bool _executing;
}

- (void).cxx_destruct;
- (void)_assetDownloadOperationDidFinishExecuting;
- (void)_assetDownloadOperationDidStartExecuting;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)_handleFailure:(id)arg1;
- (void)_handleStorageFailure:(id)arg1;
- (void)_handleRequestSuccess:(id)arg1;
- (void)_handleBytesReceived:(const char *)arg1 length:(unsigned long long)arg2 totalBytesExpectedToReceive:(long long)arg3;
- (void)_handleReceivedResponse:(id)arg1;
- (_Bool)_handleFileFromPredatingURL:(id)arg1;
- (void)_cancel;
- (void)cancel;
- (void)start;
- (id)initWithNetworker:(id)arg1 storage:(id)arg2 remoteURL:(id)arg3 predatingLocalURL:(CDUnknownBlockType)arg4 priority:(long long)arg5 executionQueue:(id)arg6 callbackQueue:(id)arg7 progressBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9 errorBlock:(CDUnknownBlockType)arg10;

@end

