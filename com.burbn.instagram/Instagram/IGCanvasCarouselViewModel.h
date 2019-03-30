//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGCanvasElementContext, NSArray;

@interface IGCanvasCarouselViewModel : NSObject <IGListDiffable>
{
    NSArray *_photos;
    IGCanvasElementContext *_context;
    long long _carouselIndex;
}

@property(nonatomic) long long carouselIndex; // @synthesize carouselIndex=_carouselIndex;
@property(readonly, nonatomic) IGCanvasElementContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (double)photoHeightForWidth:(double)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPhotos:(id)arg1 context:(id)arg2 carouselIndex:(long long)arg3;

@end

