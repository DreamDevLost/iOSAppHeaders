//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaUploadListener.h"

@class IGAudioUploadLogger, IGFBMediaUploadListenerWrapper, NSObject<OS_dispatch_queue>, NSString;

@interface IGAudioUploader : NSObject <FBMediaUploadListener>
{
    id <IGNetworking> _networker;
    IGAudioUploadLogger *_logger;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
    id <FBMediaUploadJob> _uploadJob;
    IGFBMediaUploadListenerWrapper *_uploadJobListener;
}

- (void).cxx_destruct;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(id)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(_Bool)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3;
- (void)_cleanup;
- (id)_optionalConfig;
- (id)_fbMediaUploadConfigWithFbUploadJobId:(id)arg1 uploadParams:(id)arg2 audioUploadConfig:(id)arg3;
- (void)cancel;
- (void)uploadWithAudioFileUrl:(id)arg1 audioUploadConfig:(id)arg2 fbUploadJobId:(id)arg3 uploadParams:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 callBackQueue:(id)arg7;
- (id)initWithNetworker:(id)arg1 analyticsProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

