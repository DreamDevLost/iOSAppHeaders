//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMediaMetadataProtocol.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class IGMultiUploadMetadata, IGStoryCreationAttributionModel, NSArray, NSDate, NSDictionary, NSString;

@interface IGStoryUploadMetadata : NSObject <NSSecureCoding, IGMediaMetadataProtocol, NSCopying>
{
    NSString *_captureType;
    NSString *_originalMediaTypeString;
    struct CGSize _originalMediaSize;
    long long _mediaGestureState;
    _Bool _isLibraryImport;
    _Bool _hasAnimatedSticker;
    NSArray *_textFormatTypes;
    NSString *_resharedMediaId;
    NSString *_cameraSessionID;
    IGStoryCreationAttributionModel *_attributionModel;
    NSDictionary *_questionResponseMetadata;
    NSDictionary *_musicStickerMetadata;
    _Bool _privateMentionShareEnabled;
    IGMultiUploadMetadata *_multiUploadMetadata;
    NSString *_reshareSource;
    NSArray *_tapModels;
    NSArray *_storyLinks;
    NSArray *_stickerIds;
    NSDate *_mediaCreationDate;
    NSString *_arEffectID;
    NSDictionary *_arEffectPersistedMetadata;
    NSString *_appAttributionBundleID;
    NSString *_archivedMediaID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *archivedMediaID; // @synthesize archivedMediaID=_archivedMediaID;
@property(readonly, copy, nonatomic) NSString *appAttributionBundleID; // @synthesize appAttributionBundleID=_appAttributionBundleID;
@property(readonly, copy, nonatomic) NSDictionary *arEffectPersistedMetadata; // @synthesize arEffectPersistedMetadata=_arEffectPersistedMetadata;
@property(readonly, copy, nonatomic) NSString *arEffectID; // @synthesize arEffectID=_arEffectID;
@property(readonly, nonatomic) NSDate *mediaCreationDate; // @synthesize mediaCreationDate=_mediaCreationDate;
@property(readonly, copy, nonatomic) NSArray *stickerIds; // @synthesize stickerIds=_stickerIds;
@property(readonly, copy, nonatomic) NSArray *storyLinks; // @synthesize storyLinks=_storyLinks;
@property(readonly, copy, nonatomic) NSArray *tapModels; // @synthesize tapModels=_tapModels;
- (void).cxx_destruct;
- (id)_serializedStringForUploadArray:(id)arg1;
- (id)sharingInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTapModels:(id)arg1 storyLinks:(id)arg2 stickerIds:(id)arg3 mediaCreationDate:(id)arg4 arEffectID:(id)arg5 arEffectPersistedMetadata:(id)arg6 appAttributionBundleID:(id)arg7 captureType:(id)arg8 archivedMediaID:(id)arg9 cameraSessionID:(id)arg10 originalMediaTypeString:(id)arg11 originalMediaSize:(struct CGSize)arg12 mediaGestureState:(long long)arg13 isLibraryImport:(_Bool)arg14 hasAnimatedSticker:(_Bool)arg15 textFormatTypes:(id)arg16 resharedMediaId:(id)arg17 attributionModel:(id)arg18 questionResponseMetadata:(id)arg19 musicStickerMetadata:(id)arg20 privateMentionShareEnabled:(_Bool)arg21 multiUploadMetadata:(id)arg22 reshareSource:(id)arg23;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
