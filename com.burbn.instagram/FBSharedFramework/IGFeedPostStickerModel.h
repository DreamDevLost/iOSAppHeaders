//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStickerModelType.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface IGFeedPostStickerModel : NSObject <NSSecureCoding, IGStickerModelType>
{
    _Bool _includeInRecent;
    _Bool _isVideoMedia;
    _Bool _isSidecarMedia;
    _Bool _hasProductTags;
    NSString *_pk;
    NSURL *_userProfilePictureUrl;
    NSString *_username;
    NSString *_caption;
    NSString *_lookbackMessage;
    long long _displayType;
    NSURL *_mediaImageUrl;
    double _mediaAspectRatio;
    NSString *_mediaOwnerPk;
    NSString *_productType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *mediaOwnerPk; // @synthesize mediaOwnerPk=_mediaOwnerPk;
@property(readonly, nonatomic) double mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(readonly, copy, nonatomic) NSURL *mediaImageUrl; // @synthesize mediaImageUrl=_mediaImageUrl;
@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) _Bool hasProductTags; // @synthesize hasProductTags=_hasProductTags;
@property(readonly, nonatomic) _Bool isSidecarMedia; // @synthesize isSidecarMedia=_isSidecarMedia;
@property(readonly, nonatomic) _Bool isVideoMedia; // @synthesize isVideoMedia=_isVideoMedia;
@property(readonly, copy, nonatomic) NSString *lookbackMessage; // @synthesize lookbackMessage=_lookbackMessage;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSURL *userProfilePictureUrl; // @synthesize userProfilePictureUrl=_userProfilePictureUrl;
@property(readonly, nonatomic) _Bool includeInRecent; // @synthesize includeInRecent=_includeInRecent;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPk:(id)arg1 userProfilePictureUrl:(id)arg2 username:(id)arg3 caption:(id)arg4 lookbackMessage:(id)arg5 displayType:(long long)arg6 isVideoMedia:(_Bool)arg7 isSidecarMedia:(_Bool)arg8 hasProductTags:(_Bool)arg9 mediaImageUrl:(id)arg10 mediaAspectRatio:(double)arg11 mediaOwnerPk:(id)arg12 productType:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

