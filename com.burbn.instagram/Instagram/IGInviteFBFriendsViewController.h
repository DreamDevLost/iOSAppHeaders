//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedStatusViewDelegate.h"
#import "IGInviteFBFriendsDataSourceDelegate.h"
#import "IGInviteFBFriendsSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGFeedStatusView, IGInviteFBFriendsDataSource, IGListAdapter, IGListAdapterUpdaterLogger, IGUserSession, IGZeroRatingHandler, NSMutableArray, NSString, UICollectionView;

@interface IGInviteFBFriendsViewController : IGViewController <UICollectionViewDelegate, UIScrollViewDelegate, IGInviteFBFriendsDataSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFeedStatusViewDelegate, IGInviteFBFriendsSectionControllerDelegate>
{
    _Bool _lastRowViewed;
    _Bool _isOnScreen;
    id <IGInviteFBFriendsViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    IGInviteFBFriendsDataSource *_dataSource;
    NSMutableArray *_itemList;
    IGListAdapter *_listAdapter;
    IGListAdapterUpdaterLogger *_adapterPerfLogger;
    UICollectionView *_collectionView;
    IGFeedStatusView *_emptyStateView;
    unsigned long long _entryPoint;
    IGZeroRatingHandler *_zeroRatingHandler;
}

@property(retain, nonatomic) IGZeroRatingHandler *zeroRatingHandler; // @synthesize zeroRatingHandler=_zeroRatingHandler;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen=_isOnScreen;
@property(nonatomic) unsigned long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(nonatomic) _Bool lastRowViewed; // @synthesize lastRowViewed=_lastRowViewed;
@property(readonly, nonatomic) IGFeedStatusView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGListAdapterUpdaterLogger *adapterPerfLogger; // @synthesize adapterPerfLogger=_adapterPerfLogger;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(readonly, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(readonly, nonatomic) IGInviteFBFriendsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGInviteFBFriendsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeInviteCellWithFBID:(id)arg1;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)inviteFriendsDataSourceDidFailToLoad:(id)arg1;
- (void)inviteFriendsDataSource:(id)arg1 didLoadFriendsList:(id)arg2;
- (id)analyticsModule;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_rightButtonTapped;
- (void)_configureForRegStep;
- (void)_authorizeAndFetchFriendList;
- (void)_setupEmptyStatusView;
- (void)_setupListAdapter;
- (void)_setupCollectionView;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entryPoint:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

