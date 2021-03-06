//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGActionSheetDelegate.h"
#import "IGContactPermissionListener.h"
#import "IGEmptyFeedViewDelegate.h"
#import "IGFacebookPermissionListener.h"
#import "IGFeedItemPreviewProviding.h"
#import "IGFeedItemPreviewingControllerProtocol.h"
#import "IGFindFriendsHelperDelegate.h"
#import "IGFindUsersEmptyFeedViewDelegate.h"
#import "IGFindUsersViewDataSourceDelegate.h"
#import "IGFollowAllHeaderSectionControllerDelegate.h"
#import "IGFriendCenterViewControllerProtocol.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGUserListPreviewingViewControllerType.h"

@class IGContactPermissionAnnouncer, IGContactsFetchLogger, IGEmptyFeedView, IGFacebookHelper, IGFacebookInfoFetcher, IGFindUsersViewDataSource, IGFollowAllHeaderItem, IGListAdapter, IGUserListMediaPreviewingHandler, IGUserSession, IGZeroRatingHandler, NSArray, NSString, UIBarButtonItem, UICollectionView;

@interface IGFindUsersViewController2 : IGViewController <IGActionSheetDelegate, IGEmptyFeedViewDelegate, IGFeedItemPreviewingControllerProtocol, IGFindFriendsHelperDelegate, IGFindUsersEmptyFeedViewDelegate, IGFindUsersViewDataSourceDelegate, IGFollowAllHeaderSectionControllerDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFacebookPermissionListener, IGContactPermissionListener, IGFeedItemPreviewProviding, IGFriendCenterViewControllerProtocol, IGUserListPreviewingViewControllerType>
{
    IGFacebookInfoFetcher *_facebookInfoFetcher;
    NSString *_fbName;
    _Bool _isContactsCachingEnabled;
    IGUserListMediaPreviewingHandler *_previewingHandler;
    _Bool _canDisplayPreviewMedia;
    _Bool _loading;
    _Bool _didAuthorize;
    _Bool _shouldShowFollowAllButton;
    _Bool _displayModal;
    IGViewController *containingViewController;
    id <IGFriendCenterContentViewControllerDelegate> contentViewControllerDelegate;
    long long friendCenterNavigationTab;
    id <IGFriendCenterViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    UIBarButtonItem *_configureButton;
    IGFindUsersViewDataSource *_dataSource;
    IGEmptyFeedView *_emptyFeedView;
    IGEmptyFeedView *_errorStateView;
    long long _entryPoint;
    unsigned long long _findUsersType;
    IGFollowAllHeaderItem *_followAllHeaderItem;
    id <IGFindFriendsHelperProtocol> _helper;
    id <IGFollowPeopleLoggerProtocol> _logger;
    NSString *_statusText;
    NSArray *_userList;
    NSArray *_nearbyBusinessesList;
    IGZeroRatingHandler *_zeroRatingHandler;
    IGFacebookHelper *_facebookHelper;
    IGContactPermissionAnnouncer *_contactPermissionAnnouncer;
    IGContactsFetchLogger *_contactsFetchLogger;
    long long _similarAccountSource;
    NSString *_socialContextForConnectContactsEmptyState;
}

@property(readonly, nonatomic) NSString *socialContextForConnectContactsEmptyState; // @synthesize socialContextForConnectContactsEmptyState=_socialContextForConnectContactsEmptyState;
@property(nonatomic) long long similarAccountSource; // @synthesize similarAccountSource=_similarAccountSource;
@property(retain, nonatomic) IGContactsFetchLogger *contactsFetchLogger; // @synthesize contactsFetchLogger=_contactsFetchLogger;
@property(nonatomic) _Bool displayModal; // @synthesize displayModal=_displayModal;
@property(readonly, nonatomic) IGContactPermissionAnnouncer *contactPermissionAnnouncer; // @synthesize contactPermissionAnnouncer=_contactPermissionAnnouncer;
@property(readonly, nonatomic) IGFacebookHelper *facebookHelper; // @synthesize facebookHelper=_facebookHelper;
@property(retain, nonatomic) IGZeroRatingHandler *zeroRatingHandler; // @synthesize zeroRatingHandler=_zeroRatingHandler;
@property(copy, nonatomic) NSArray *nearbyBusinessesList; // @synthesize nearbyBusinessesList=_nearbyBusinessesList;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(readonly, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(readonly, nonatomic) id <IGFollowPeopleLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <IGFindFriendsHelperProtocol> helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) _Bool shouldShowFollowAllButton; // @synthesize shouldShowFollowAllButton=_shouldShowFollowAllButton;
@property(retain, nonatomic) IGFollowAllHeaderItem *followAllHeaderItem; // @synthesize followAllHeaderItem=_followAllHeaderItem;
@property(readonly, nonatomic) unsigned long long findUsersType; // @synthesize findUsersType=_findUsersType;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) IGEmptyFeedView *errorStateView; // @synthesize errorStateView=_errorStateView;
@property(readonly, nonatomic) IGEmptyFeedView *emptyFeedView; // @synthesize emptyFeedView=_emptyFeedView;
@property(nonatomic) _Bool didAuthorize; // @synthesize didAuthorize=_didAuthorize;
@property(readonly, nonatomic) IGFindUsersViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) UIBarButtonItem *configureButton; // @synthesize configureButton=_configureButton;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGFriendCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long friendCenterNavigationTab; // @synthesize friendCenterNavigationTab;
@property(nonatomic) __weak id <IGFriendCenterContentViewControllerDelegate> contentViewControllerDelegate; // @synthesize contentViewControllerDelegate;
@property(nonatomic) __weak IGViewController *containingViewController; // @synthesize containingViewController;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_fetchSocialContextForConnectContactsEmptyState;
- (void)_fetchFBNameUsingBigBlueToken;
- (void)_setupErrorStateView;
- (void)_setupEmptyFeedView;
- (_Bool)_hasContactPermission;
- (_Bool)_hasFacebookPermission;
- (id)_indexPathForPoint:(struct CGPoint)arg1;
- (id)objectForPreviewAtPoint:(struct CGPoint)arg1;
- (id)cellForPreviewAtPoint:(struct CGPoint)arg1;
- (id)scrollView;
- (id)_emptyFeedModelWithSocialContext:(id)arg1;
- (void)_onConfigureButtonTapped;
- (void)_fetchFollowStatusForUsers:(id)arg1;
- (void)_finishLoading;
- (void)_continueAuthorizeAndFetchUsers;
- (void)_authorizeAndFetchUsers;
- (void)contactPermissionDenied;
- (void)contactPermissionAcquired;
- (void)facebookPermissionRemoved;
- (void)facebookPermissionAcquired;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)_objectsFromUserList;
- (id)objectsForListAdapter:(id)arg1;
- (void)followAllHeaderSectionControllerDidFollowAllUsers:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserListFromCache:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 andNearbyBusinesses:(id)arg3;
- (void)findUsersViewDataSourceWillLoadUserList:(id)arg1;
- (void)connectButtonWasTapped:(id)arg1;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithDataSource:(id)arg1 logger:(id)arg2 findUsersType:(unsigned long long)arg3 statusText:(id)arg4 title:(id)arg5 shouldShowFollowAllButton:(_Bool)arg6 userSession:(id)arg7 entryPoint:(long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

