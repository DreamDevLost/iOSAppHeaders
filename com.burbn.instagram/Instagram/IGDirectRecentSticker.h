//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGGiphyGIFModel, IGStaticStickerModel;

@interface IGDirectRecentSticker : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGStaticStickerModel *_staticSticker;
    IGGiphyGIFModel *_gif;
}

+ (id)staticSticker:(id)arg1;
+ (id)like;
+ (id)gif:(id)arg1;
- (void).cxx_destruct;
- (void)matchStaticSticker:(CDUnknownBlockType)arg1 gif:(CDUnknownBlockType)arg2 like:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

