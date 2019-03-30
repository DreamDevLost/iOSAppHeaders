//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedVideoCellAutoplayStrategy.h"

@class NSString, UICollectionView;

@interface IGVideoFeedAutoplayStrategy : NSObject <IGFeedVideoCellAutoplayStrategy>
{
    UICollectionView *_collectionView;
    id <IGCollectionViewFocusContext> _focusContext;
}

- (void).cxx_destruct;
- (id)cellsForAutoplayFromVisibleCells:(id)arg1 collectionViewIsScrolling:(_Bool)arg2;
- (id)initWithCollectionView:(id)arg1 focusContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

