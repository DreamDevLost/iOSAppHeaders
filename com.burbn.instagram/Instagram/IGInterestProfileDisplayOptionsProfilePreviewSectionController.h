//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListAdapterDataSource.h"

@class IGListAdapter, IGUser, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGInterestProfileDisplayOptionsProfilePreviewSectionController : IGListSectionController <IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    IGUser *_mockedUserForPreview;
    id <IGProfileLayoutMetrics> _layoutMetrics;
    NSString *_analyticsModule;
    NSArray *_previewViewModels;
    IGListAdapter *_previewListAdapter;
    UICollectionView *_previewCollectionView;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)_setupPreviewCollectionView;
- (id)initWithUserSession:(id)arg1 mockedUserForPreview:(id)arg2 layoutMetrics:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

