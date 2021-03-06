//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class IGDirectVisualMessageViewModeSelectorModel, IGEditsMetadata, IGHashtagsMetadata, IGLocationMetadata, IGStoryUploadMetadata, IGTagsMetadata, IGVideoInfo, IGVideoMetadata, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSSet, NSString, UIImage;

@interface IGMediaMetadata : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableOrderedSet *_sponsorPartnerOrderedSet;
    _Bool _saveImageCalled;
    _Bool _loadImageCalled;
    UIImage *_originalImage;
    _Bool _shouldKeepCaptionOnMediaChange;
    _Bool _isMultiConfiguration;
    _Bool _disableComments;
    _Bool _isDraft;
    _Bool _allowPaidBC;
    NSString *_mediaMetadataId;
    NSDate *_creationDate;
    NSString *_uploadID;
    NSString *_configurationUserID;
    NSString *_originalAssetLocalIdentifier;
    double _originalImageAspectRatio;
    NSArray *_captions;
    NSString *_caption;
    long long _shareType;
    NSSet *_directOutgoingThreadIdentifiers;
    IGDirectVisualMessageViewModeSelectorModel *_directViewMode;
    long long _directReplyType;
    long long _externalShareOptions;
    IGLocationMetadata *_locationMetadata;
    IGTagsMetadata *_tagsMetadata;
    IGHashtagsMetadata *_hashtagsMetadata;
    NSDictionary *_sharingInfo;
    IGStoryUploadMetadata *_storyMetadata;
    long long _mediaVisibility;
    long long _mediaAudience;
    NSString *_accessibilityCaption;
    NSArray *_geoGatingCountries;
    NSArray *_internalFeatures;
    long long _mediaType;
    long long _sourceType;
    NSString *_sourceMediaID;
    NSString *_sourceApplication;
    NSDictionary *_exifData;
    long long _cameraPosition;
    double _deviceAngle;
    IGVideoMetadata *_videoMetadata;
    NSArray *_preselectedIdentifiers;
    NSString *_originalImageFileName;
    IGEditsMetadata *_editsMetadata;
    double _scale;
    NSDate *_sharedAtTime;
    UIImage *_snapshot;
    UIImage *_unfilteredSnapshot;
    long long _preselectedMediaBehavior;
    UIImage *_preparedImage;
    IGVideoInfo *_preparedVideoInfo;
    struct CGRect _originalImageCropRect;
    struct CGRect _unfilteredSnapshotCropRect;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) IGVideoInfo *preparedVideoInfo; // @synthesize preparedVideoInfo=_preparedVideoInfo;
@property(retain, nonatomic) UIImage *preparedImage; // @synthesize preparedImage=_preparedImage;
@property(nonatomic) long long preselectedMediaBehavior; // @synthesize preselectedMediaBehavior=_preselectedMediaBehavior;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) struct CGRect unfilteredSnapshotCropRect; // @synthesize unfilteredSnapshotCropRect=_unfilteredSnapshotCropRect;
@property(retain, nonatomic) UIImage *unfilteredSnapshot; // @synthesize unfilteredSnapshot=_unfilteredSnapshot;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) NSDate *sharedAtTime; // @synthesize sharedAtTime=_sharedAtTime;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) IGEditsMetadata *editsMetadata; // @synthesize editsMetadata=_editsMetadata;
@property(copy, nonatomic) NSString *originalImageFileName; // @synthesize originalImageFileName=_originalImageFileName;
@property(retain, nonatomic) NSArray *preselectedIdentifiers; // @synthesize preselectedIdentifiers=_preselectedIdentifiers;
@property(retain, nonatomic) IGVideoMetadata *videoMetadata; // @synthesize videoMetadata=_videoMetadata;
@property(nonatomic) double deviceAngle; // @synthesize deviceAngle=_deviceAngle;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(retain, nonatomic) NSDictionary *exifData; // @synthesize exifData=_exifData;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) NSString *sourceMediaID; // @synthesize sourceMediaID=_sourceMediaID;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSArray *internalFeatures; // @synthesize internalFeatures=_internalFeatures;
@property(copy, nonatomic) NSArray *geoGatingCountries; // @synthesize geoGatingCountries=_geoGatingCountries;
@property(nonatomic) _Bool allowPaidBC; // @synthesize allowPaidBC=_allowPaidBC;
@property(copy, nonatomic) NSString *accessibilityCaption; // @synthesize accessibilityCaption=_accessibilityCaption;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic) _Bool disableComments; // @synthesize disableComments=_disableComments;
@property(nonatomic) _Bool isMultiConfiguration; // @synthesize isMultiConfiguration=_isMultiConfiguration;
@property(nonatomic) long long mediaAudience; // @synthesize mediaAudience=_mediaAudience;
@property(nonatomic) long long mediaVisibility; // @synthesize mediaVisibility=_mediaVisibility;
@property(retain, nonatomic) IGStoryUploadMetadata *storyMetadata; // @synthesize storyMetadata=_storyMetadata;
@property(retain, nonatomic) NSDictionary *sharingInfo; // @synthesize sharingInfo=_sharingInfo;
@property(retain, nonatomic) IGHashtagsMetadata *hashtagsMetadata; // @synthesize hashtagsMetadata=_hashtagsMetadata;
@property(retain, nonatomic) IGTagsMetadata *tagsMetadata; // @synthesize tagsMetadata=_tagsMetadata;
@property(retain, nonatomic) IGLocationMetadata *locationMetadata; // @synthesize locationMetadata=_locationMetadata;
@property(nonatomic) long long externalShareOptions; // @synthesize externalShareOptions=_externalShareOptions;
@property(nonatomic) long long directReplyType; // @synthesize directReplyType=_directReplyType;
@property(retain, nonatomic) IGDirectVisualMessageViewModeSelectorModel *directViewMode; // @synthesize directViewMode=_directViewMode;
@property(retain, nonatomic) NSSet *directOutgoingThreadIdentifiers; // @synthesize directOutgoingThreadIdentifiers=_directOutgoingThreadIdentifiers;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(nonatomic) _Bool shouldKeepCaptionOnMediaChange; // @synthesize shouldKeepCaptionOnMediaChange=_shouldKeepCaptionOnMediaChange;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) NSArray *captions; // @synthesize captions=_captions;
@property(nonatomic) double originalImageAspectRatio; // @synthesize originalImageAspectRatio=_originalImageAspectRatio;
@property(retain, nonatomic) NSString *originalAssetLocalIdentifier; // @synthesize originalAssetLocalIdentifier=_originalAssetLocalIdentifier;
@property(nonatomic) struct CGRect originalImageCropRect; // @synthesize originalImageCropRect=_originalImageCropRect;
@property(retain, nonatomic) NSString *configurationUserID; // @synthesize configurationUserID=_configurationUserID;
@property(copy, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *mediaMetadataId; // @synthesize mediaMetadataId=_mediaMetadataId;
- (void).cxx_destruct;
- (id)description;
- (void)removeSponsorPartner:(id)arg1;
- (void)addSponsorPartner:(id)arg1;
- (id)getSponsorPartners;
- (void)configureWithSponsorPartners:(id)arg1;
- (_Bool)hasProductTags;
- (_Bool)hasUserTags;
- (_Bool)isSharingInfoEdited;
- (void)resetCreationDate;
- (void)updateIsAudioMuted:(_Bool)arg1;
- (void)updateCoverFramePosition:(double)arg1;
- (void)updateSharingInfo:(id)arg1;
- (void)updateEditsInfo:(id)arg1;
- (void)_createLocationMetadata;
- (void)_prepareForMediaOfType:(long long)arg1 fromSource:(long long)arg2 EXIFDictionary:(id)arg3 cameraPosition:(long long)arg4 deviceAngle:(double)arg5 videoMetadata:(id)arg6 clearTags:(_Bool)arg7;
- (void)_prepareForVideo:(id)arg1 clearTags:(_Bool)arg2;
- (void)prepareForEditedVideo:(id)arg1;
- (void)prepareForNewVideo:(id)arg1;
- (void)prepareForNewPhotoFromSource:(long long)arg1 EXIFDictionary:(id)arg2 cameraPosition:(long long)arg3 deviceAngle:(double)arg4;
- (id)originalImageFilePath;
- (_Bool)removeOriginalImageWithError:(id *)arg1;
- (_Bool)removeOriginalImage;
- (_Bool)saveOriginalImage;
- (void)_updateCaptions:(id)arg1 caption:(id)arg2;
- (void)updateCaptionsOnMedia:(id)arg1 onlySaveSentryCaption:(_Bool)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initBlank;
- (id)copyWithNewUploadID:(id)arg1;
- (id)initWithMediaType:(long long)arg1;
- (id)initWithSourceType:(long long)arg1 sourceMediaID:(id)arg2;
- (id)init;
- (id)initWithMediaMetadataId:(id)arg1;

@end

