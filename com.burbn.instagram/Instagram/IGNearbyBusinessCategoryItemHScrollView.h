//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGNearbyBusinessCategoryItemDataSource, NSString, UICollectionView;

@interface IGNearbyBusinessCategoryItemHScrollView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    long long _selectedIndex;
    IGNearbyBusinessCategoryItemDataSource *_dataSource;
    id <IGNearbyBusinessCategoryItemHScrollViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGNearbyBusinessCategoryItemHScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IGNearbyBusinessCategoryItemDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)heightForCategoryItemScrollView;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

