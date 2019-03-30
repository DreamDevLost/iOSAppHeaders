//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryCreationManagerShareDelayerDelegate.h"
#import "IGUserSessionObject.h"

@class IGStoryCreationManagerShareDelayer, IGUserSession, NSString;

@interface IGStoryCreationManager : NSObject <IGStoryCreationManagerShareDelayerDelegate, IGUserSessionObject>
{
    IGUserSession *_userSession;
    IGStoryCreationManagerShareDelayer *_shareDelayer;
}

+ (id)_renderOptionsForMediaMetadata:(id)arg1 shouldRenderSingleSegment:(_Bool)arg2;
+ (id)_preparePostForAsset:(id)arg1 storyModel:(id)arg2 shareType:(long long)arg3 userSession:(id)arg4;
+ (void)_performConfigurationWithMetadata:(id)arg1 highlightCreationConfig:(id)arg2 multiConfigBaseUploadId:(id)arg3 dataType:(long long)arg4 userSession:(id)arg5 uploadWaterfall:(id)arg6;
+ (void)_saveMediaForMetadata:(id)arg1 asset:(id)arg2 userSession:(id)arg3;
+ (void)_saveMediaForMetadataIfRequired:(id)arg1 asset:(id)arg2 shareInfo:(id)arg3 userSession:(id)arg4;
+ (void)renderImageAssetOriginalImage:(id)arg1 toVideoWithCreationEdits:(id)arg2 withVideoConfiguration:(id)arg3 serialized:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)renderEditedImageAsset:(id)arg1 toVideoWithCreationEdits:(id)arg2 withVideoConfiguration:(id)arg3 serialized:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (long long)externalShareOptionsFromSelectedServiceTypes:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_isPhotoStory:(id)arg1 creationEdits:(id)arg2;
- (void)_shareVisualMessageToDirectMutationManager:(id)arg1 mediaUploadIdToObserve:(id)arg2 usingNewUploadInfra:(_Bool)arg3 recipients:(id)arg4 viewMode:(id)arg5 replyType:(long long)arg6 image:(id)arg7 storyPostType:(long long)arg8;
- (void)_shareVisualMessageToDirectMutationManagerWithData:(id)arg1 shouldCallOldInfraFinishEndpointBeforeShare:(_Bool)arg2 multiConfigBaseUploadID:(id)arg3;
- (void)_shareStoryToMediaUploadManagerWithData:(id)arg1 shouldCreateNewUploadFlowBeforeShare:(_Bool)arg2 multiConfigBaseUploadID:(id)arg3;
- (void)storyCreationManagerShareDelayer:(id)arg1 performShareWithData:(id)arg2 infraRouteInstructions:(id)arg3;
- (void)cancelUploadWithUploadId:(id)arg1 userSession:(id)arg2;
- (void)sharePostWithMetadata:(id)arg1 shareInfo:(id)arg2 storyModel:(id)arg3 asset:(id)arg4 uploadWaterfall:(id)arg5 isSubsequentConfiguration:(_Bool)arg6 multiConfigBaseUploadID:(id)arg7;
- (void)_retrieveVideoCompositionForAsset:(id)arg1 metadata:(id)arg2 uploadId:(id)arg3 creationEdits:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_downloadMusicTrackClipIfNecessary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)uploadStoryModel:(id)arg1 creationEdits:(id)arg2 asset:(id)arg3 shareType:(long long)arg4 uploadWaterfall:(id)arg5;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

