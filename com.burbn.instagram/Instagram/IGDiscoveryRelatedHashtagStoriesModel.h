//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGDiscoveryGridItem.h"
#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGGridLayoutSpec, NSArray, NSString;

@interface IGDiscoveryRelatedHashtagStoriesModel : FBValueObject <IGDiscoveryGridItem, IGListDiffable, NSCopying, NSCoding>
{
    NSString *_title;
    long long _trayCellStyle;
    NSArray *_reels;
    IGGridLayoutSpec *_gridLayoutSpec;
}

@property(readonly, copy, nonatomic) IGGridLayoutSpec *gridLayoutSpec; // @synthesize gridLayoutSpec=_gridLayoutSpec;
@property(readonly, copy, nonatomic) NSArray *reels; // @synthesize reels=_reels;
@property(readonly, nonatomic) long long trayCellStyle; // @synthesize trayCellStyle=_trayCellStyle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 trayCellStyle:(long long)arg2 reels:(id)arg3 gridLayoutSpec:(id)arg4;

@end

