//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDiscoveryMediaThumbnailSectionControllerSelectionDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGLocalBusinessDataControllerDelegate.h"
#import "IGLocalBusinessMapViewDelegate.h"
#import "IGReelOwnerNavigationBarControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CLLocation, IGFeedScrollViewAnnouncer, IGListAdapter, IGLocalBusinessDataController, IGLocalBusinessListKitDataSource, IGReelOwnerNavigationBarController, IGRefreshControl, IGShimmeringGridView, IGUserSession, IGWaterfallCollectionViewLayout, NSString, UICollectionView;

@interface IGLocalBusinessHomeViewController : IGViewController <IGDiscoveryMediaThumbnailSectionControllerSelectionDelegate, IGFeedScrollViewListener, IGLocalBusinessDataControllerDelegate, IGLocalBusinessMapViewDelegate, IGReelOwnerNavigationBarControllerDelegate, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_adapter;
    IGLocalBusinessListKitDataSource *_dataSource;
    IGLocalBusinessDataController *_dataController;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGWaterfallCollectionViewLayout *_waterfallFeedLayout;
    UICollectionView *_collectionView;
    CLLocation *_userLocation;
    CDStruct_b7cb895d _mapRegion;
    IGShimmeringGridView *_shimmeringGridView;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGRefreshControl *_refreshControl;
    IGReelOwnerNavigationBarController *_reelNavigationBarController;
    _Bool _canShowMapRefreshButton;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)localBusinessMapView:(id)arg1 didChangeToRegion:(CDStruct_b7cb895d)arg2 animated:(_Bool)arg3;
- (void)localBusinessMapViewCellDidTapUserLocation:(id)arg1;
- (void)localBusinessMapViewCellDidTapRefresh:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)reelOnwerNavigationBarControllerShouldShowMutingOptions:(id)arg1;
- (void)reelOwnerNavigationBarControllerDidTapFollowButton:(id)arg1;
- (void)reelOwnerNavigationBarControllerDidAdjustNavigationBarHeight:(id)arg1;
- (void)localBusinessDataController:(id)arg1 didLoadTopStoryInDataStore:(id)arg2;
- (void)localBusinessDataController:(id)arg1 didFailLoadBusinessCardWithError:(id)arg2;
- (void)localBusinessDataController:(id)arg1 didLoadBusinessCardInDataStore:(id)arg2 hasNewItems:(_Bool)arg3;
- (void)localBusinessDataController:(id)arg1 didLoadGridMediaInDataStore:(id)arg2 hasNewItems:(_Bool)arg3;
- (void)didSelectDiscoveryMediaItem:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)_loadMoreGridMediaIfPossible;
- (void)_refreshControlTriggered:(id)arg1;
- (void)_setupNavBarController;
- (void)_setUpRefreshControl;
- (void)_setUpListener;
- (void)_setUpDataController;
- (void)_setUpCollectionViewAndAdapter;
- (void)_setUpShimmeringView;
- (void)_updateViewState;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

