//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol IGCollectionViewLayoutDataSource <NSObject>
- (struct CGSize)layoutDataSourceCollectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForHeaderViewAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize)layoutDataSourceCollectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end
