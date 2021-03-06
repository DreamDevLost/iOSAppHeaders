//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGSmartStickerModelType.h"
#import "IGStickerModelType.h"
#import "NSSecureCoding.h"

@class IGProductItem, NSString, UIColor;

@interface IGProductStickerModel : NSObject <IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSSecureCoding>
{
    _Bool _includeInRecent;
    _Bool _wasTextEdited;
    NSString *_pk;
    IGProductItem *_product;
    long long _style;
    NSString *_text;
    long long _textReviewStatus;
    UIColor *_vibrantTextColor;
    NSString *_mediaId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) UIColor *vibrantTextColor; // @synthesize vibrantTextColor=_vibrantTextColor;
@property(readonly, nonatomic) long long textReviewStatus; // @synthesize textReviewStatus=_textReviewStatus;
@property(readonly, nonatomic) _Bool wasTextEdited; // @synthesize wasTextEdited=_wasTextEdited;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) IGProductItem *product; // @synthesize product=_product;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *merchantId;
@property(readonly, nonatomic) _Bool hasIntegrityReviewConcerns;
- (id)sharingInfo;
- (unsigned long long)smartStickerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool includeInRecent; // @synthesize includeInRecent=_includeInRecent;
- (id)initWithDict:(id)arg1;
- (id)initWithProduct:(id)arg1 style:(long long)arg2 text:(id)arg3 wasTextEdited:(_Bool)arg4 vibrantTextColor:(id)arg5;
- (id)_initWithPk:(id)arg1 style:(long long)arg2 text:(id)arg3 wasTextEdited:(_Bool)arg4 textReviewStatus:(long long)arg5 vibrantTextColor:(id)arg6 includeInRecent:(_Bool)arg7 product:(id)arg8 mediaId:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

