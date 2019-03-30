//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "IGUploadCoverPhotoCoordinatorDelegate.h"
#import "IGUploadStatusCheckOperationDelegate.h"
#import "IGUploadTaskListener.h"
#import "IGUploadTaskType.h"
#import "IGUploadVideoOperationDelegate.h"

@class IGAnnouncer, IGImageUploadTask, IGPostSessionLogger, IGUploadCoverPhotoCoordinator, IGUploadCoverPhotoOperationFactory, IGUploadStatusCheckOperation, IGUploadStatusCheckOperationFactory, IGUploadTaskQueue, IGUploadVideoOperation, IGUploadVideoOperationFactory, IGUserSession, IGVideoSource, IGVideoUploadConfig, NSObject<OS_dispatch_queue>, NSProgress, NSString, NSURL;

@interface IGVideoTask : NSOperation <IGUploadCoverPhotoCoordinatorDelegate, IGUploadStatusCheckOperationDelegate, IGUploadTaskListener, IGUploadVideoOperationDelegate, IGUploadTaskType>
{
    NSString *_taskId;
    IGVideoSource *_videoSource;
    IGVideoUploadConfig *_videoUploadConfig;
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    NSObject<OS_dispatch_queue> *_queue;
    id <IGPostAnalyticsProvider> _analyticsProvider;
    IGAnnouncer *_announcer;
    IGUploadCoverPhotoCoordinator *_coverPhotoCoordinator;
    IGUploadVideoOperationFactory *_videoUploadOperationFactory;
    IGUploadCoverPhotoOperationFactory *_coverUploadOperationFactory;
    IGUploadStatusCheckOperationFactory *_statusCheckOperationFactory;
    IGUploadTaskQueue *_taskQueue;
    IGUploadVideoOperation *_videoUploadOperation;
    IGImageUploadTask *_coverUploadOperation;
    IGUploadStatusCheckOperation *_statusCheckOperation;
    long long _status;
    NSProgress *_totalProgress;
    NSProgress *_videoUploadProgress;
    NSProgress *_coverUploadProgress;
    NSProgress *_statusCheckProgress;
    struct NSDictionary *_videoUploadResponse;
    long long _retryAttemptCount;
    _Bool _allowPropertyAccessFromAnyQueue;
    IGPostSessionLogger *_postSessionLogger;
    NSURL *_renderedVideoUrl;
    _Bool _shouldGenerateCoverFromRenderedVideo;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)coverPhotoCoordinator:(id)arg1 didFinalizeWithCoverImageData:(id)arg2 error:(id)arg3;
- (void)uploadTaskDidCancel:(id)arg1;
- (void)uploadTask:(id)arg1 didUpdateWithRenderedVideoUrl:(id)arg2;
- (void)uploadTask:(id)arg1 didUpdateWithRenderedImageData:(id)arg2;
- (void)uploadTask:(id)arg1 didUpdateToProgress:(double)arg2;
- (void)uploadTask:(id)arg1 didCompleteWithResponse:(id)arg2 error:(id)arg3;
- (void)uploadVideoOperation:(id)arg1 didUpdateWithSampleImageData:(id)arg2;
- (void)uploadVideoOperation:(id)arg1 didUpdateWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)uploadVideoOperation:(id)arg1 didUpdateWithRenderedVideoUrl:(id)arg2;
- (void)uploadVideoOperation:(id)arg1 didUpdateProgress:(double)arg2;
- (void)uploadVideoOperation:(id)arg1 didCompleteWithError:(id)arg2 response:(struct NSDictionary *)arg3;
- (void)uploadStatusCheckOperation:(id)arg1 didCompleteWithError:(id)arg2 needsReupload:(_Bool)arg3 response:(struct NSDictionary *)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (double)progress;
- (long long)status;
- (id)taskId;
- (void)_handleRetryWithResponse:(struct NSDictionary *)arg1;
- (void)_handleOperationFailureWithError:(id)arg1;
- (void)_handleOperationSucceeded;
- (void)_progressUpdated;
- (void)_setupProgressReporting;
- (void)_updateFinishStatus:(long long)arg1;
- (void)_updateExecutingStatus;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)cancel;
- (void)start;
- (void)_startOperationsIfNeeded;
- (void)completeUploadWithVideoCoverImageData:(id)arg1;
- (id)initWithTaskId:(id)arg1 videoSource:(id)arg2 videoUploadConfig:(id)arg3 uploadParams:(id)arg4 networker:(id)arg5 userSession:(id)arg6 queue:(id)arg7 analyticsProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
