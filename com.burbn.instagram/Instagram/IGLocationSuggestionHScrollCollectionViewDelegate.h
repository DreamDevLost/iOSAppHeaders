//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString;

@interface IGLocationSuggestionHScrollCollectionViewDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSArray *_locations;
    id <IGLocationSuggestionHScrollDelegate> _delegate;
    id <IGLocationSuggestionHScrollViewDelegate> _scrollViewDelegate;
}

@property(readonly, nonatomic) __weak id <IGLocationSuggestionHScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <IGLocationSuggestionHScrollDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
- (struct CGSize)_textSizeWithPadding:(id)arg1 allowsTruncation:(_Bool)arg2;
- (struct CGSize)_searchButtonCellSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)initWithScrollViewDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

