//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGEmptyFeedViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGNavSearchBarDelegate.h"
#import "IGShareServiceConfigureManagerDelegate.h"
#import "IGTaggingSearchControllerType.h"
#import "IGTaggingSearchDataSourceDelegate.h"
#import "IGTaggingSearchResultSectionControllerDelegate.h"
#import "IGTitleAndActionSectionControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGListAdapter, IGNavSearchBar, IGShareServiceConfigureManager, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGUserTaggingSearchViewController : IGViewController <IGNavSearchBarDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGTaggingSearchResultSectionControllerDelegate, IGTaggingSearchDataSourceDelegate, IGTitleAndActionSectionControllerDelegate, UIScrollViewDelegate, IGEmptyFeedViewDelegate, IGShareServiceConfigureManagerDelegate, IGTaggingSearchControllerType>
{
    _Bool _useNewDesign;
    _Bool _useNewDesignV2;
    _Bool _hideFBUserResult;
    _Bool _hideFBUserResultUsingNewDesign;
    _Bool _enterSeeAllSeeLessState;
    _Bool _FBFriendListShown;
    long long _instagramUserResultCount;
    long long _facebookFriendsResultCount;
    NSArray *_igUserResultShown;
    _Bool _hasError;
    id <IGTaggingSearchViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    id <IGTaggingViewConfiguration> _taggingConfig;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGNavSearchBar *_searchBar;
    id <IGTaggingSearchDataSource> _searchDataSource;
    IGShareServiceConfigureManager *_serviceConfigManager;
    NSString *_priorModule;
}

@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) IGShareServiceConfigureManager *serviceConfigManager; // @synthesize serviceConfigManager=_serviceConfigManager;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(readonly, nonatomic) id <IGTaggingSearchDataSource> searchDataSource; // @synthesize searchDataSource=_searchDataSource;
@property(readonly, nonatomic) IGNavSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <IGTaggingViewConfiguration> taggingConfig; // @synthesize taggingConfig=_taggingConfig;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGTaggingSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_igUserListWithPosition:(id)arg1;
- (void)_logFBUserTagEvent:(id)arg1 fbUser:(id)arg2 rank:(id)arg3;
- (void)_logSearchListAction:(id)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (id)viewControllerForShareConfiguration;
- (void)reloadData;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)titleAndActionSectionController:(id)arg1 didSelectActionForViewModel:(id)arg2;
- (id)_viewModelsForIGAndFBUserList:(id)arg1;
- (_Bool)_isNearBottomInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)analyticsModule;
- (void)_startReviewForProductItem:(id)arg1;
- (void)taggingSearchResultSectionControllerDidSelectObject:(id)arg1;
- (void)taggingSearchDataSourceDidFailLoading;
- (void)taggingSearchDataSourceDidUpdateResults;
- (void)taggingSearchDataSourceDidStartLoading;
- (void)searchBarReturnKeyTapped:(id)arg1;
- (void)searchBarButtonTapped:(id)arg1;
- (void)searchBarCancelButtonTapped:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)_setUpCollectionViewAndListAdapter;
- (void)viewDidLoad;
- (_Bool)prefersTabBarHidden;
- (id)initWithUserSession:(id)arg1 taggingConfig:(id)arg2 priorModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

