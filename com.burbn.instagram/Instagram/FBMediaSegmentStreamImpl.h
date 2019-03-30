//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaResumableSegmentStream.h"
#import "FBMediaSegmentStream.h"
#import "FBMediaUploadListener.h"

@class FBMediaSegmentStreamConfig, FBMediaSegmentStreamMetricsBuilder, FBMediaStreamingUploadSegmentCancelSender, FBMediaStreamingUploadSegmentEndSender, FBMediaStreamingUploadSegmentStartSender, FBMediaUploadHandler, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface FBMediaSegmentStreamImpl : NSObject <FBMediaSegmentStream, FBMediaResumableSegmentStream, FBMediaUploadListener>
{
    NSString *_streamId;
    NSObject<OS_dispatch_queue> *_queue;
    FBMediaSegmentStreamConfig *_config;
    id <FBMediaNetworkDispatch> _networkDispatcher;
    FBMediaUploadHandler *_uploadHandler;
    FBMediaSegmentStreamMetricsBuilder *_metricsBuilder;
    NSMutableSet *_inflightSegmentJobs;
    NSMutableSet *_completedSegmentJobs;
    NSMutableSet *_failedSegmentJobs;
    NSMutableDictionary *_segmentJobs;
    NSMutableDictionary *_completedPercentageOfJobs;
    NSMutableArray *_pendingSegmentJobs;
    FBMediaStreamingUploadSegmentStartSender *_startSender;
    id <FBCancelable> _startSenderCancelToken;
    FBMediaStreamingUploadSegmentEndSender *_endSender;
    id <FBCancelable> _endSenderCancelToken;
    FBMediaStreamingUploadSegmentCancelSender *_cancelSender;
    id <FBCancelable> _cancelSenderCancelToken;
    CDUnknownBlockType _streamProgressBlock;
    CDUnknownBlockType _streamCheckpointBlock;
    CDUnknownBlockType _streamCompletionBlock;
    CDUnknownBlockType _streamCancelBlock;
    int _segmentStartOffset;
    int _numberOfSegments;
    double _completedPercentage;
    _Bool _completionBlockCalled;
    _Bool _cancelSignalSent;
    _Bool _streamCanceled;
    CDUnknownBlockType _uploadFailureBlock;
    _Bool _isResumed;
    NSString *_token;
    int _numberOfEndCalls;
    id <FBMediaUploadProtocolProvider> _protocolProvider;
}

- (void).cxx_destruct;
- (unsigned long long)dataSize;
- (id)jobId;
- (id)cacheableDetail;
- (double)_getNormalizedCompletedPercentage;
- (void)_incrementSegmentStartOffset:(int)arg1;
- (int)_getSegmentStartOffset;
- (void)_streamCanceled;
- (void)_streamCompleted:(id)arg1;
- (id)_buildMetrics;
- (void)_streamStarted:(id)arg1;
- (void)_enquePending:(id)arg1;
- (void)_addInflight:(id)arg1 dataLength:(id)arg2;
- (void)_cancelAll:(_Bool)arg1;
- (void)_cancelStream;
- (void)_streamFailedWithErrorCode:(long long)arg1 underlyingError:(id)arg2 underlyingErrorResumable:(_Bool)arg3 underlyingErrorInfo:(id)arg4 isGraphApi:(_Bool)arg5;
- (void)_streamDidFailOnEndWithErrorCode:(long long)arg1 underlyingError:(id)arg2 underlyingErrorResumable:(_Bool)arg3 underlyingErrorInfo:(id)arg4;
- (void)_endWithGraphApi;
- (void)_end;
- (void)_markEndOfStream;
- (id)_statusAsString;
- (void)markEndOfStream;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(id)arg2;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(_Bool)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3;
- (id)extraLogging;
- (void)cancel;
- (void)_startOrResumeSegmentUploadJob:(id)arg1 config:(id)arg2 resumableJob:(id)arg3;
- (void)_fetchResumableSegmentUploadJob:(id)arg1 config:(id)arg2;
- (void)_uploadSegment:(id)arg1;
- (void)uploadSegmentWithContent:(id)arg1 segmentType:(unsigned long long)arg2;
- (void)uploadSegmentWithContent:(id)arg1 segmentType:(unsigned long long)arg2 isLastSegment:(_Bool)arg3;
- (void)resumeWithStreamProgress:(CDUnknownBlockType)arg1 streamCheckpoint:(CDUnknownBlockType)arg2 streamCompletion:(CDUnknownBlockType)arg3 streamCancel:(CDUnknownBlockType)arg4;
- (void)start;
- (id)initWithDetail:(id)arg1 networkDispatcher:(id)arg2 queue:(id)arg3 uploadHandler:(id)arg4;
- (id)initWithConfig:(id)arg1 networkDispatcher:(id)arg2 queue:(id)arg3 uploadHandler:(id)arg4 streamProgress:(CDUnknownBlockType)arg5 streamCheckpoint:(CDUnknownBlockType)arg6 streamCompletion:(CDUnknownBlockType)arg7 streamCancel:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

