//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"

@class IGPhoto, IGVideo, NSString;

@interface IGMediaCollectionItem : NSObject <NSCoding, IGListDiffable>
{
    IGPhoto *_photo;
    IGVideo *_video;
    unsigned long long _itemType;
    double _mediaWidth;
    double _mediaHeight;
    NSString *_pk;
}

@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) double mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(readonly, nonatomic) double mediaWidth; // @synthesize mediaWidth=_mediaWidth;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isVideo;
- (struct CGSize)mediaSize;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

