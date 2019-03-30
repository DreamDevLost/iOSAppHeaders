//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDiscoverPeopleConnectionSectionControllerDelegate.h"
#import "IGDiscoverPeopleSectionControllerDelegate.h"
#import "IGFacebookPermissionListener.h"
#import "IGFeedStatusViewDelegate.h"
#import "IGFindUsersViewDataSourceDelegate.h"
#import "IGFriendCenterViewControllerProtocol.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGDiscoverPeopleForcedUserIdsModel, IGDiscoverPeopleUpsellManager, IGFacebookHelper, IGFacebookInfoFetcher, IGFeedStatusView, IGListAdapter, IGRefreshControl, IGSuggestedFindUsersViewDataSource, IGSuggestedUserLogger, IGTableLayoutSpec, IGUserSession, NSArray, NSMutableArray, NSString, UICollectionView;

@interface IGDiscoverPeopleViewController : IGViewController <UIScrollViewDelegate, IGDiscoverPeopleConnectionSectionControllerDelegate, IGDiscoverPeopleSectionControllerDelegate, IGFeedStatusViewDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFacebookPermissionListener, IGFindUsersViewDataSourceDelegate, IGFriendCenterViewControllerProtocol>
{
    IGFacebookInfoFetcher *_facebookInfoFetcher;
    NSString *_fbName;
    _Bool _loading;
    _Bool _setInsets;
    _Bool _shouldAutoScroll;
    IGViewController *containingViewController;
    id <IGFriendCenterContentViewControllerDelegate> contentViewControllerDelegate;
    long long friendCenterNavigationTab;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGRefreshControl *_refreshControl;
    IGFeedStatusView *_emptyStateView;
    NSMutableArray *_userList;
    NSArray *_connectionList;
    IGSuggestedUserLogger *_suggestedUserLogger;
    IGDiscoverPeopleUpsellManager *_upsellManager;
    IGSuggestedFindUsersViewDataSource *_dataSource;
    IGUserSession *_userSession;
    long long _entryPoint;
    IGDiscoverPeopleForcedUserIdsModel *_forcedUserIdsModel;
    IGFacebookHelper *_facebookHelper;
    IGTableLayoutSpec *_tableInterface;
    unsigned long long _autoScrollSectionNumber;
}

@property(readonly, nonatomic) unsigned long long autoScrollSectionNumber; // @synthesize autoScrollSectionNumber=_autoScrollSectionNumber;
@property(readonly, nonatomic) _Bool shouldAutoScroll; // @synthesize shouldAutoScroll=_shouldAutoScroll;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(readonly, nonatomic) _Bool setInsets; // @synthesize setInsets=_setInsets;
@property(readonly, nonatomic) IGFacebookHelper *facebookHelper; // @synthesize facebookHelper=_facebookHelper;
@property(readonly, nonatomic) IGDiscoverPeopleForcedUserIdsModel *forcedUserIdsModel; // @synthesize forcedUserIdsModel=_forcedUserIdsModel;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGSuggestedFindUsersViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) IGDiscoverPeopleUpsellManager *upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) IGSuggestedUserLogger *suggestedUserLogger; // @synthesize suggestedUserLogger=_suggestedUserLogger;
@property(readonly, nonatomic) NSArray *connectionList; // @synthesize connectionList=_connectionList;
@property(retain, nonatomic) NSMutableArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) IGFeedStatusView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(retain, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long friendCenterNavigationTab; // @synthesize friendCenterNavigationTab;
@property(nonatomic) __weak id <IGFriendCenterContentViewControllerDelegate> contentViewControllerDelegate; // @synthesize contentViewControllerDelegate;
@property(nonatomic) __weak IGViewController *containingViewController; // @synthesize containingViewController;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSourceWillLoadUserList:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserListFromCache:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 andNearbyBusinesses:(id)arg3;
- (void)facebookPermissionRemoved;
- (void)facebookPermissionAcquired;
- (id)scrollView;
- (void)_finishLoading;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (void)_handleEmptyStateViewTap;
- (struct UIEdgeInsets)preferredContentInsets;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)discoverPeopleSectionController:(id)arg1 didTapDismissWithFeaturedUserInfo:(id)arg2;
- (void)discoverPeopleConnectionSectionControllerDidTapDismissButton:(id)arg1;
- (void)discoverPeopleConnectionSectionControllerAuthorizedWithFailure:(id)arg1;
- (void)discoverPeopleConnectionSectionControllerAuthorizedWithSuccess:(id)arg1;
- (id)_connectionList;
- (void)_authorizeAndFetchUsers;
- (void)_fetchFBNameUsingBigBlueToken;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 userSession:(id)arg2 friendCenterEntryPoint:(long long)arg3 forcedUserIdsModel:(id)arg4 title:(id)arg5 setInsets:(_Bool)arg6 shouldAutoScroll:(_Bool)arg7;
- (id)initExplorePeopleFeedViewControllerWithUserSession:(id)arg1 shouldAutoScroll:(_Bool)arg2 entryPoint:(long long)arg3;
- (id)initExplorePeopleFeedViewControllerWithUserSession:(id)arg1 shouldAutoScroll:(_Bool)arg2 entryPoint:(long long)arg3 forcedUserIdsModel:(id)arg4 module:(id)arg5 setInsets:(_Bool)arg6;
- (id)initExplorePeopleFeedViewControllerWithUserSession:(id)arg1 shouldAutoScroll:(_Bool)arg2 entryPoint:(long long)arg3 forcedUserIdsModel:(id)arg4 module:(id)arg5 setInsets:(_Bool)arg6 entryFeedItemType:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
