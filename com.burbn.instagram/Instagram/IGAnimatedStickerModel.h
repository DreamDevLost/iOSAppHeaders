//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGStickerModelType.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL;

@interface IGAnimatedStickerModel : NSObject <IGListDiffable, IGStickerModelType, NSCoding, NSCopying>
{
    _Bool _includeInRecent;
    NSString *_pk;
    NSString *_giphyId;
    NSURL *_url;
    NSURL *_highQualityUrl;
    double _width;
    double _height;
}

@property(readonly, nonatomic) _Bool includeInRecent; // @synthesize includeInRecent=_includeInRecent;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSURL *highQualityUrl; // @synthesize highQualityUrl=_highQualityUrl;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *giphyId; // @synthesize giphyId=_giphyId;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 giphyId:(id)arg2 url:(id)arg3 highQualityUrl:(id)arg4 width:(double)arg5 height:(double)arg6 includeInRecent:(_Bool)arg7;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

