//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedScrollViewListener.h"
#import "IGInfoViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGShoppingFeedNetworkerDelegate.h"

@class IGFeedScrollViewAnnouncer, IGInfoView, IGListAdapter, IGShoppingFeedNetworker, IGShoppingUserFeedDataModel, IGUserSession, NSString, UICollectionView;

@interface IGShoppingProductTaggingBrandSelectionViewController : IGViewController <IGFeedScrollViewListener, IGInfoViewDelegate, IGListAdapterDataSource, IGShoppingFeedNetworkerDelegate>
{
    IGUserSession *_userSession;
    _Bool _isVCInPageTab;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGShoppingFeedNetworker *_networker;
    IGShoppingUserFeedDataModel *_dataModel;
    IGInfoView *_infoView;
}

- (void).cxx_destruct;
- (void)_requestFeedWithAction:(long long)arg1 isPullToRefresh:(_Bool)arg2;
- (id)analyticsModule;
- (void)infoViewWasTapped:(id)arg1;
- (void)_showInfoViewWithMessage:(id)arg1;
- (void)feedNetworker:(id)arg1 didLoadResponse:(id)arg2 requestConfiguration:(id)arg3;
- (void)feedNetworker:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 isVCInPageTab:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

