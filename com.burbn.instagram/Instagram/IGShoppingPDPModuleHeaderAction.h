//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGShoppingMediaCollectionModel, NSString;

@interface IGShoppingPDPModuleHeaderAction : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_mediaCollectionSeeAll_title;
    long long _mediaCollectionSeeAll_collectionType;
    IGShoppingMediaCollectionModel *_mediaCollectionSeeAll_mediaCollection;
}

+ (id)none;
+ (id)mediaCollectionSeeAllWithTitle:(id)arg1 collectionType:(long long)arg2 mediaCollection:(id)arg3;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 mediaCollectionSeeAll:(CDUnknownBlockType)arg2;

@end

