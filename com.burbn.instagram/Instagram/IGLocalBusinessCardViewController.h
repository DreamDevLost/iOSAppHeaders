//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedScrollViewListener.h"
#import "IGListAdapterDelegate.h"
#import "IGLocalBusinessCardPlaceSearchSectionControllerDelegate.h"
#import "IGLocalBusinessCardViewSectionControllerDelegate.h"
#import "IGLocalBusinessDataControllerDelegate.h"
#import "IGLocalBusinessMapViewDelegate.h"
#import "IGLocalBusinessNavigationTitleViewDelegate.h"
#import "IGLocalBusinessNullStateSectionControllerDelegate.h"
#import "IGLocalBusinessSwitchCategoryControllerDelegate.h"
#import "IGReelOwnerNavigationBarControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CLLocation, IG4BLogger, IGChevronTitleButton, IGFeedScrollViewAnnouncer, IGListAdapter, IGLocalBusinessBusinessCardResponse, IGLocalBusinessCardConfiguration, IGLocalBusinessCardListKitDataSource, IGLocalBusinessCardTileShimmeringView, IGLocalBusinessDataController, IGLocalBusinessNavigationTitleView, IGLocalBusinessPlacesSearchCategory, IGLocalBusinessSwitchCategoryController, IGRankedTitleView, IGReelOwnerNavigationBarController, IGRefreshControl, IGUserSession, IGWaterfallCollectionViewLayout, NSArray, NSMutableSet, NSString, UICollectionView, UIView;

@interface IGLocalBusinessCardViewController : IGViewController <IGFeedScrollViewListener, IGLocalBusinessCardPlaceSearchSectionControllerDelegate, IGLocalBusinessCardViewSectionControllerDelegate, IGLocalBusinessDataControllerDelegate, IGLocalBusinessMapViewDelegate, IGLocalBusinessNavigationTitleViewDelegate, IGLocalBusinessSwitchCategoryControllerDelegate, IGReelOwnerNavigationBarControllerDelegate, UIScrollViewDelegate, IGListAdapterDelegate, IGLocalBusinessNullStateSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGLocalBusinessPlacesSearchCategory *_selectedCategory;
    IGLocalBusinessCardConfiguration *_config;
    IGLocalBusinessBusinessCardResponse *_initialBusinessCardResponse;
    IGListAdapter *_adapter;
    UICollectionView *_collectionView;
    IGLocalBusinessDataController *_dataController;
    CLLocation *_userLocation;
    NSArray *_businessCardModels;
    IGWaterfallCollectionViewLayout *_waterfallFeedLayout;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGLocalBusinessCardListKitDataSource *_dataSource;
    CDStruct_b7cb895d _mapRegion;
    _Bool _canShowMapRefreshButton;
    _Bool _canLoadMore;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGRefreshControl *_refreshControl;
    IGReelOwnerNavigationBarController *_reelNavigationBarController;
    IG4BLogger *_ig4bLogger;
    NSMutableSet *_loggingImpressionSet;
    IGRankedTitleView *_navBarRankedTitle;
    _Bool _isCategorySelectionEnabled;
    _Bool _isLocationChanged;
    _Bool _didSwitchCategory;
    IGLocalBusinessNavigationTitleView *_titleView;
    IGLocalBusinessSwitchCategoryController *_switchCategoryController;
    UIView *_overlayViewForTabBar;
    UIView *_overlayViewForMainView;
    IGChevronTitleButton *_navTitleButton;
    UIView *_switchCategoryCollectionView;
    IGLocalBusinessCardTileShimmeringView *_tileShimmerView;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)shouldLogScreenshots;
- (id)getViewerUser;
- (id)getTargetUser;
- (void)_setLoading:(_Bool)arg1 animated:(_Bool)arg2;
- (void)localBusinessSwitchCategoryControllerDidSelectCategory:(id)arg1;
- (void)_onOverlayViewTapped:(id)arg1;
- (void)_setupSwitchCategoryController;
- (void)_animateToggleShadowOverContent:(_Bool)arg1 currentTitleButton:(id)arg2;
- (void)_toggleShouldDisplaySwitchController:(_Bool)arg1 withTitleButton:(id)arg2;
- (void)localBusinessNavigationTitleViewDidTapTitleWithButton:(id)arg1;
- (void)localBusinessNullStateUpdateToRegion:(CDStruct_b7cb895d)arg1;
- (void)localBusinessCardViewSectionController:(id)arg1 didSelectBusinessCardReelWithModel:(id)arg2;
- (void)localBusinessCardViewSectionController:(id)arg1 didSelectBusinessCardWithModel:(id)arg2;
- (void)localBusinessCardViewSectionController:(id)arg1 didSelectBusinessCardWithModel:(id)arg2 withFeedItemWithMediaID:(id)arg3;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)loadMoreCardMediaIfPossible;
- (void)_updateMapRegion:(CDStruct_b7cb895d)arg1;
- (id)_selectedCategoryDictionary;
- (_Bool)_isBusinessCardViewModelAFarBusinessAtIndex:(long long)arg1;
- (long long)_indexOfBusinessCardViewModel:(id)arg1;
- (void)_setupReelNavigationController;
- (void)_setupCategorySelectionNavigationController;
- (void)_setupNavBarController;
- (void)_refreshControlTriggered:(id)arg1;
- (void)_setupPullToRefresh;
- (void)_setupListener;
- (void)_setUpDataController;
- (void)_setUpCollectionViewAndAdapter;
- (void)_setUpShimmeringView;
- (void)_updateViewState;
- (void)localBusinessCardPlaceSearchUpdateToRegion:(CDStruct_b7cb895d)arg1;
- (_Bool)reelOnwerNavigationBarControllerShouldShowMutingOptions:(id)arg1;
- (void)reelOwnerNavigationBarControllerDidTapFollowButton:(id)arg1;
- (void)reelOwnerNavigationBarControllerDidAdjustNavigationBarHeight:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)localBusinessMapView:(id)arg1 didChangeToRegion:(CDStruct_b7cb895d)arg2 animated:(_Bool)arg3;
- (void)localBusinessMapViewCellDidTapUserLocation:(id)arg1;
- (void)localBusinessMapViewCellDidTapRefresh:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)localBusinessDataController:(id)arg1 didLoadTopStoryInDataStore:(id)arg2;
- (void)localBusinessDataController:(id)arg1 didFailLoadBusinessCardWithError:(id)arg2;
- (void)localBusinessDataController:(id)arg1 didLoadBusinessCardInDataStore:(id)arg2 hasNewItems:(_Bool)arg3;
- (void)localBusinessDataController:(id)arg1 didLoadGridMediaInDataStore:(id)arg2 hasNewItems:(_Bool)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2 initialBusinessCardResponse:(id)arg3 priorLogger:(id)arg4 isCategorySelectionEnabled:(_Bool)arg5 placesSearchCategory:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

