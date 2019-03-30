//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"

@class IGEmojiModel, NSArray, NSIndexPath, NSString, UICollectionView;

@interface IGEmojiFitzpatrickController : NSObject <UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    IGEmojiModel *_emoji;
    NSArray *_fitzpatrickEmojis;
    NSIndexPath *_highlightedIndexPath;
}

+ (struct CGSize)emojiSize;
@property(retain, nonatomic) NSIndexPath *highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property(readonly, copy, nonatomic) NSArray *fitzpatrickEmojis; // @synthesize fitzpatrickEmojis=_fitzpatrickEmojis;
@property(readonly, nonatomic) IGEmojiModel *emoji; // @synthesize emoji=_emoji;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_deHighlightCurrentCellIfNeeded;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)highlightEmojiAtPointIfNeeded:(struct CGPoint)arg1;
- (id)emojiAtPoint:(struct CGPoint)arg1;
- (_Bool)isEmojiFitzpatrickEligible;
- (id)initWithEmoji:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
