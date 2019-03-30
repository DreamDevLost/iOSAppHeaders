//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGKVOHandle, IGSegmentedTabControlConfiguration, NSArray, NSString, UICollectionView, UIScrollView, UIView;

@interface IGSegmentedTabControl : UIControl <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;
    UIView *_inchwormView;
    IGKVOHandle *_contentOffsetHandle;
    UIScrollView *_pageScrollView;
    double _interPageSpacing;
    double _interItemSpacing;
    _Bool _needsToScroll;
    _Bool _shouldMaximizeScrollingCellWidth;
    IGSegmentedTabControlConfiguration *_config;
    NSArray *_segments;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_updateNeedsToScroll;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_highlightVisibleSegment;
- (void)_updateInchWormPosition;
- (struct CGRect)_inchwormViewFrameForScrollView:(id)arg1;
- (id)viewForItemAtIndex:(long long)arg1;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (void)_setSelectedIndex:(long long)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 pageScrollView:(id)arg2 interPageSpacing:(double)arg3 interItemSpacing:(double)arg4;
- (id)initWithConfig:(id)arg1 pageScrollView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

