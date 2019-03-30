//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@interface IGRadialCollectionViewLayout : UICollectionViewLayout
{
    double _radius;
    double _itemSpacing;
    double _centerItemFixedSpacing;
    double _centerItemFlexibleSpacing;
    struct CGSize _itemSize;
    struct CGSize _centerItemSize;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) double centerItemFlexibleSpacing; // @synthesize centerItemFlexibleSpacing=_centerItemFlexibleSpacing;
@property(nonatomic) double centerItemFixedSpacing; // @synthesize centerItemFixedSpacing=_centerItemFixedSpacing;
@property(nonatomic) struct CGSize centerItemSize; // @synthesize centerItemSize=_centerItemSize;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (long long)_indexOfCenterItemForNumberOfItems:(long long)arg1;
- (double)_preciseIndexOfCenterItemForNumberOfItems:(long long)arg1;
@property(readonly, nonatomic) long long centerItemIndex;
- (struct CGPoint)contentOffsetForIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

@end

