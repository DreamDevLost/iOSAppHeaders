//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGBakeoffSectionControllerType.h"
#import "IGBakeoffStoryPairSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"

@class IGBakeoffItemViewedStateInfoCell, IGBakeoffStoryItemPair, IGListAdapter, IGUserSession, NSMutableArray, NSString, UICollectionView;

@interface IGBakeoffStorySectionController : IGListSectionController <IGBakeoffStoryPairSectionControllerDelegate, IGListAdapterDataSource, IGBakeoffSectionControllerType>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGBakeoffStoryItemPair *_pair;
    IGBakeoffItemViewedStateInfoCell *_viewedStateInfoCell;
    NSMutableArray *_seenIndexes;
    NSString *_module;
    id <IGStoryViewerLandscapeAdLayoutListener> _bakeoffLogger;
    id <IGBakeoffSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBakeoffSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bakeoffStoryPairSectionControllerDidMarkStoryAsSeenWithIndex:(long long)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)seenIndexes;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;
- (void)_setupCollectionViewAndAdapter;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 bakeoffLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

