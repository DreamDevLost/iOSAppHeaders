//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUploadTaskListener.h"

@class IGUploadTaskQueue, IGUserSession, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface IGUploadService : NSObject <IGUploadTaskListener>
{
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    NSMutableDictionary *_taskIdToUploadTask;
    NSObject<OS_dispatch_queue> *_underlyingImageQueue;
    NSObject<OS_dispatch_queue> *_underlyingVideoQueue;
    NSObject<OS_dispatch_queue> *_underlyingAudioQueue;
    IGUploadTaskQueue *_imageTaskQueue;
    IGUploadTaskQueue *_videoTaskQueue;
    IGUploadTaskQueue *_audioTaskQueue;
}

- (void).cxx_destruct;
- (void)_removeTask:(id)arg1;
- (void)uploadTask:(id)arg1 didUpdateWithRenderedVideoUrl:(id)arg2;
- (void)uploadTask:(id)arg1 didUpdateWithRenderedImageData:(id)arg2;
- (void)uploadTask:(id)arg1 didUpdateToProgress:(double)arg2;
- (void)uploadTaskDidCancel:(id)arg1;
- (void)uploadTask:(id)arg1 didCompleteWithResponse:(id)arg2 error:(id)arg3;
- (id)uploadTaskForTaskId:(id)arg1;
- (id)uploadAudioWithAudioFileUrl:(id)arg1 audioUploadConfig:(id)arg2 uploadParams:(id)arg3 analyticsProvider:(id)arg4;
- (void)completeVideoUploadWithCoverImageData:(id)arg1 taskId:(id)arg2;
- (id)uploadVideoWithPendingCoverImageForVideoSource:(id)arg1 videoUploadConfig:(id)arg2 uploadParams:(id)arg3 analyticsProvider:(id)arg4;
- (id)uploadImageWithImageUploadModel:(id)arg1 imageUploadConfig:(id)arg2 uploadParams:(id)arg3 analyticsProvider:(id)arg4;
- (id)initWithNetworker:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

