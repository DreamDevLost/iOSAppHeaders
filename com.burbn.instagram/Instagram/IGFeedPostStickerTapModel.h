//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface IGFeedPostStickerTapModel : NSObject <NSSecureCoding>
{
    NSString *_mediaId;
    NSString *_mediaOwnerId;
    NSString *_productType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *mediaOwnerId; // @synthesize mediaOwnerId=_mediaOwnerId;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaId:(id)arg1 mediaOwnerId:(id)arg2 productType:(id)arg3;

@end
