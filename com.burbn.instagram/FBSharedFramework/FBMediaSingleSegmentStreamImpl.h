//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaResumableSegmentStream.h"
#import "FBMediaSegmentStream.h"
#import "FBMediaUploadListener.h"

@class FBMediaUploadConfig, FBMediaUploadHandler, NSObject<OS_dispatch_queue>, NSString;

@interface FBMediaSingleSegmentStreamImpl : NSObject <FBMediaSegmentStream, FBMediaResumableSegmentStream, FBMediaUploadListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBMediaUploadConfig *_config;
    FBMediaUploadHandler *_uploadHandler;
    CDUnknownBlockType _streamProgressBlock;
    CDUnknownBlockType _streamCompletionBlock;
    id <FBMediaUploadJob> _resumableJob;
    _Bool _completionBlockCalled;
}

- (void).cxx_destruct;
- (unsigned long long)dataSize;
- (id)jobId;
- (void)_streamFailedWithErrorCode:(long long)arg1 underlyingError:(id)arg2 underlyingErrorResumable:(_Bool)arg3 underlyingErrorInfo:(id)arg4 metrics:(id)arg5;
- (void)_streamCompleted:(id)arg1 metrics:(id)arg2;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(id)arg2;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(_Bool)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3;
- (id)extraLogging;
- (void)markEndOfStream;
- (void)cancel;
- (void)uploadSegmentWithContent:(id)arg1 segmentType:(unsigned long long)arg2;
- (void)uploadSegmentWithContent:(id)arg1 segmentType:(unsigned long long)arg2 isLastSegment:(_Bool)arg3;
- (void)resumeWithStreamProgress:(CDUnknownBlockType)arg1 streamCompletion:(CDUnknownBlockType)arg2;
- (id)initWithResumableJob:(id)arg1 queue:(id)arg2 uploadHandler:(id)arg3;
- (id)initWithConfig:(id)arg1 queue:(id)arg2 uploadHandler:(id)arg3 streamProgress:(CDUnknownBlockType)arg4 streamCompletion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
