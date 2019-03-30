//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryAssetManagerDelegate.h"

@class IGDirectShareRecipient, IGStoryAssetManager, IGStoryCameraFormatModel, IGUserSession, NSString, UIImage;

@interface IGDirectWalkieTalkieSendingController : NSObject <IGStoryAssetManagerDelegate>
{
    IGDirectShareRecipient *_recipient;
    IGStoryAssetManager *_assetManager;
    IGUserSession *_userSession;
    IGStoryCameraFormatModel *_cameraFormatModel;
    UIImage *_coverImage;
    NSString *_module;
    _Bool _isReply;
    NSString *_loggingSessionID;
    double _cameraRequestedTimestamp;
}

- (void).cxx_destruct;
- (void)storyAssetManagerDidFinishUpdatingOutputAsset:(id)arg1 withSuccess:(_Bool)arg2;
- (void)storyAssetManagerDidBeginUpdatingOutputAsset:(id)arg1;
- (void)sendAsset:(id)arg1 toRecipients:(id)arg2 viewMode:(id)arg3 storyModel:(id)arg4;
- (void)prepareAndSendAsset:(id)arg1 toRecipient:(id)arg2 coverImage:(id)arg3 constraintingSize:(struct CGSize)arg4 cameraFormatModel:(id)arg5;
- (id)initWithUserSession:(id)arg1 loggingSessionID:(id)arg2 cameraRequestedTimestamp:(double)arg3 isReply:(_Bool)arg4 module:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

