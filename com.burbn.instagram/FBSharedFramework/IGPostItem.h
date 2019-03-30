//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedTagsProvider.h"
#import "IGListDiffable.h"
#import "IGPhotosRenderedTracking.h"
#import "NSCoding.h"

@class IGCommentModel, IGDate, IGDirectResponseInfo, IGFBUserTagGroup, IGHashtagFeedModel, IGMediaCollectionInfo, IGPhoto, IGProductItemTagGroup, IGUser, IGUsertagGroup, IGVideo, NSString;

@interface IGPostItem : NSObject <NSCoding, IGFeedTagsProvider, IGListDiffable, IGPhotosRenderedTracking>
{
    IGFBUserTagGroup *_fbUserTags;
    IGUsertagGroup *_userTags;
    IGProductItemTagGroup *_productItemTags;
    IGHashtagFeedModel *_hashtagFeedModel;
    _Bool _showUnifiedTagDisplay;
    NSString *_pk;
    long long _mediaType;
    IGPhoto *_overlay;
    IGPhoto *_photo;
    IGVideo *_video;
    IGUser *_user;
    NSString *_actionText;
    IGCommentModel *_headline;
    IGDate *_takenAtDate;
    NSString *_dynamicItemId;
    NSString *_accessibilityCaption;
    IGDirectResponseInfo *_directResponseInfo;
    IGMediaCollectionInfo *_mediaCollectionInfo;
}

@property(readonly, nonatomic) IGMediaCollectionInfo *mediaCollectionInfo; // @synthesize mediaCollectionInfo=_mediaCollectionInfo;
@property(readonly, nonatomic) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
@property(readonly, copy, nonatomic) NSString *accessibilityCaption; // @synthesize accessibilityCaption=_accessibilityCaption;
@property(readonly, copy, nonatomic) NSString *dynamicItemId; // @synthesize dynamicItemId=_dynamicItemId;
@property(readonly, nonatomic) IGDate *takenAtDate; // @synthesize takenAtDate=_takenAtDate;
@property(readonly, nonatomic) IGCommentModel *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) IGPhoto *overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (id)mediaId;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldShowHashtagsOnMedia;
- (_Bool)hasUserTags;
- (_Bool)hasHashtagsTags;
- (_Bool)hasProductTags;
@property(readonly, nonatomic) IGProductItemTagGroup *productItemTags;
@property(readonly, nonatomic) IGUsertagGroup *userTags;
- (id)hashtagFeedModel;
- (_Bool)showUnifiedTagDisplay;
@property(readonly, nonatomic) IGFBUserTagGroup *fbUserTags;
@property(readonly, copy) NSString *description;
- (void)_setMediaType:(long long)arg1;
- (_Bool)hasTags;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 overlay:(id)arg2 photo:(id)arg3 video:(id)arg4 user:(id)arg5 pk:(id)arg6 fbUserTags:(id)arg7 userTags:(id)arg8 productItemTags:(id)arg9 actionText:(id)arg10 directResponseInfo:(id)arg11 mediaCollectionInfo:(id)arg12 headline:(id)arg13 dynamicItemId:(id)arg14 takenAtDate:(id)arg15 accessibilityCaption:(id)arg16 hashtagFeedModel:(id)arg17 showUnifiedTagDisplay:(_Bool)arg18;
- (id)initWithFeedDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
