//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMediaUploadMediaUploaderDelegate.h"

@class IGMediaUploadSegmentedUploader, IGMediaUploadVideoTranscoder, IGUserSession, IGVideoUploadLogger, NSMutableArray, NSObject<OS_dispatch_queue>, NSProgress, NSString;

@interface IGVideoUploader : NSObject <IGMediaUploadMediaUploaderDelegate>
{
    id <IGNetworking> _networker;
    IGUserSession *_userSession;
    IGVideoUploadLogger *_logger;
    IGMediaUploadVideoTranscoder *_transcoder;
    IGMediaUploadSegmentedUploader *_uploader;
    NSMutableArray *_segmentQueue;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _transcodedVideoUrlBlock;
    CDUnknownBlockType _imageSampleBlock;
    NSProgress *_progress;
    NSProgress *_renderProgress;
    NSProgress *_uploadProgress;
    _Bool _fbSegmentStreamIsReady;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    _Bool _didFinishFirstSegmentRendering;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_succeededWithResponse:(id)arg1;
- (void)_failedWithError:(id)arg1;
- (void)_progressUpdated;
- (void)_processSegmentQueue;
- (_Bool)_isExecuting;
- (void)mediaUploader:(id)arg1 streamIsReady:(_Bool)arg2;
- (void)mediaUploader:(id)arg1 didResumeUploadFromCache:(_Bool)arg2;
- (void)_uploadDidFinishWithResponse:(id)arg1 error:(id)arg2;
- (void)_uploadDidUpdateToProgress:(double)arg1;
- (void)_transcodeDidFinishWithRenderedVideoURL:(id)arg1 error:(id)arg2;
- (void)_transcodeDidGenerateSegment:(id)arg1;
- (void)_transcodeDidUpdateToProgress:(double)arg1;
- (void)_setupUploaderWithVideoUploadConfig:(id)arg1 fbUploadJobId:(id)arg2 uploadParams:(id)arg3 transcodedVideoMetadata:(id)arg4 totalSegmentsCount:(long long)arg5;
- (void)_setupTranscoderForVideoComposition:(id)arg1 videoUploadConfig:(id)arg2 fbUploadJobId:(id)arg3 uploadParams:(id)arg4;
- (void)_setupProgressReporting;
- (void)cancel;
- (void)uploadWithVideoComposition:(id)arg1 videoUploadConfig:(id)arg2 fbUploadJobId:(id)arg3 uploadParams:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 transcodedVideoUrlBlock:(CDUnknownBlockType)arg7 imageSampleBlock:(CDUnknownBlockType)arg8 callBackQueue:(id)arg9;
- (id)initWithNetworker:(id)arg1 userSession:(id)arg2 analyticsProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

