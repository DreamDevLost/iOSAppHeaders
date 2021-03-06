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

@class IGGridLayoutSpec, NSArray;

@interface IGDiscoveryPostLiveItem : FBValueObject <IGDiscoveryGridItem, IGListDiffable, NSCopying, NSCoding>
{
    NSArray *_postLiveItems;
    IGGridLayoutSpec *_gridLayoutSpec;
}

@property(readonly, copy, nonatomic) IGGridLayoutSpec *gridLayoutSpec; // @synthesize gridLayoutSpec=_gridLayoutSpec;
@property(readonly, copy, nonatomic) NSArray *postLiveItems; // @synthesize postLiveItems=_postLiveItems;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPostLiveItems:(id)arg1 gridLayoutSpec:(id)arg2;
- (id)allBroadcasts;
- (id)firstBroadcast;

@end

