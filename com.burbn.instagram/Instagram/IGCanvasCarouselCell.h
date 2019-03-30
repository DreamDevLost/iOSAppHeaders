//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCanvasPhotoCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGCanvasCarouselViewModel, IGFeedItemPageIndicator, IGTapButton, NSString, UICollectionView;

@interface IGCanvasCarouselCell : UICollectionViewCell <IGCanvasPhotoCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    struct UIEdgeInsets _padding;
    UICollectionView *_collectionView;
    id <IGCanvasCarouselCellDelegate> _delegate;
    IGFeedItemPageIndicator *_carouselIndicator;
    IGTapButton *_nextPhotoIndicatorButton;
    IGCanvasCarouselViewModel *_model;
    _Bool _userTappedOnNextButton;
}

@property(readonly, nonatomic) IGCanvasCarouselViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_didTapOnNextButton:(id)arg1;
- (void)_carouselCellDidScrollToPhotoWithSource:(unsigned long long)arg1;
- (void)canvasPhotoCellDidTapPhoto:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)animateChevron;
- (void)configureCarouselCell:(id)arg1 delegate:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
