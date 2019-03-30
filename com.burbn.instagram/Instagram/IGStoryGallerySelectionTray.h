//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPassthroughView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CAGradientLayer, NSArray, NSMutableArray, NSString, UICollectionView, UIControl, UIView, UIVisualEffectView;

@interface IGStoryGallerySelectionTray : IGPassthroughView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableArray *_thumbnails;
    UIVisualEffectView *_blurView;
    UIView *_thumbnailListWrapperView;
    UICollectionView *_thumbnailListView;
    CAGradientLayer *_thumbnailListMask;
    _Bool _trashcanVisible;
    UIControl *_nextButton;
}

@property(nonatomic) _Bool trashcanVisible; // @synthesize trashcanVisible=_trashcanVisible;
@property(readonly, nonatomic) UIControl *nextButton; // @synthesize nextButton=_nextButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *thumbnails;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)removeAllThumbnails;
- (void)replaceThumbnailAtIndex:(long long)arg1 withThumbnail:(id)arg2;
- (void)removeThumbnailAtIndex:(long long)arg1;
- (void)addThumbnail:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithThumbnailAspectRatio:(double)arg1 blurStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

