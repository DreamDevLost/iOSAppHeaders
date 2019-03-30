//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIPageControl;

@interface IGStoryEmojiSuggestionsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_emojisList;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    id <IGStoryEmojiSuggestionsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryEmojiSuggestionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateCollectionViewLayoutValues;
- (_Bool)_isLastIteminLastSection:(id)arg1;
- (_Bool)_isLastSection:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithEmojisList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

