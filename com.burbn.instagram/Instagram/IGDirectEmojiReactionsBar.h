//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface IGDirectEmojiReactionsBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSArray *_emojiModels;
    double _emojiFontSize;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    id <IGDirectEmojiReactionsBarDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectEmojiReactionsBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)initWithEmojiModels:(id)arg1 emojiFontSize:(double)arg2 contentInsets:(struct UIEdgeInsets)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
