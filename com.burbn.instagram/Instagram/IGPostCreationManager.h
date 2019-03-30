//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGPostSessionDelegate.h"
#import "IGUserSessionEndingObject.h"

@class IGAnnouncer, IGPostDataStore, IGUploadService, IGUserSession, NSMutableDictionary, NSString;

@interface IGPostCreationManager : NSObject <IGPostSessionDelegate, IGUserSessionEndingObject>
{
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    IGUploadService *_uploadService;
    IGPostDataStore *_store;
    NSMutableDictionary *_postIdToSession;
    NSMutableDictionary *_postIdToArchivedUpload;
    NSMutableDictionary *_postIdToPendingUploadComposer;
    NSMutableDictionary *_postIdToPendingSession;
    IGAnnouncer *_announcer;
}

+ (id)postCreationFilesDirectory;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)_shouldResumeStoryPostWithPostSessionContext:(id)arg1 uploadComposition:(id)arg2;
- (void)_asyncRemoveTemporaryFilesForPostId:(id)arg1;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (_Bool)_postSessionRequiresShareRetry:(id)arg1;
- (void)_retryUpload;
- (void)_onApplicationDidBecomeActive:(id)arg1;
- (void)_onNetworkReachabilityChange:(id)arg1;
- (void)postSession:(id)arg1 didRenderVideoUrl:(id)arg2 mediaId:(id)arg3;
- (void)postSession:(id)arg1 didRenderImageData:(id)arg2 mediaId:(id)arg3;
- (void)postSessionDidSucceedUpload:(id)arg1;
- (void)postSession:(id)arg1 didAddShare:(id)arg2;
- (void)postSession:(id)arg1 didUpdateWithContext:(id)arg2;
- (void)addListener:(id)arg1;
- (id)postUploadForPostUploadId:(id)arg1;
- (void)_resumePendingPosts;
- (void)resumePendingPosts;
- (id)allPostUploadIds;
- (void)sharePostUploadId:(id)arg1 shareType:(long long)arg2 metadata:(id)arg3 pendingShareMetadata:(id)arg4 carouselShareInfos:(id)arg5 configureUserPk:(id)arg6;
- (void)cancelUploadForPostUploadId:(id)arg1;
- (void)completeUploadForPostUploadId:(id)arg1;
- (void)uploadAudioWithAudioFileUrl:(id)arg1 uploadParams:(id)arg2 postUploadId:(id)arg3;
- (void)uploadVideoCoverPhotoWithImageData:(id)arg1 postUploadId:(id)arg2;
- (void)uploadGIFWithSource:(id)arg1 renderOptions:(id)arg2 uploadParams:(id)arg3 previewImageData:(id)arg4 mediaId:(id)arg5 postUploadId:(id)arg6;
- (void)uploadVideoComposition:(id)arg1 renderOptions:(id)arg2 uploadParams:(id)arg3 previewImageData:(id)arg4 useFirstFrameForCoverPhoto:(_Bool)arg5 mediaId:(id)arg6 postUploadId:(id)arg7;
- (id)uploadCarouselWithAssets:(id)arg1 postUploadId:(id)arg2;
- (void)uploadPhotoWithImageData:(id)arg1 size:(struct CGSize)arg2 mimeType:(id)arg3 previewImageData:(id)arg4 postUploadId:(id)arg5;
- (id)createPostWithWaterfall:(id)arg1 dataType:(long long)arg2 entryPointType:(long long)arg3;
- (id)initWithNetworker:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

