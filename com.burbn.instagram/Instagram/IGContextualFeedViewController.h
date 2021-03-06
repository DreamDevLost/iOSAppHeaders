//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGBugReportingProtocol.h"
#import "IGContextualFeedBottomNuxControllerDelegate.h"
#import "IGContextualFeedServiceDelegate.h"
#import "IGFeedPreviewingType.h"
#import "IGFeedScrollViewListener.h"
#import "IGFeedStatusViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGPagingListAdapterControllerDelegate.h"

@class IGCollectionViewVisibility, IGContextualFeedBottomNuxController, IGContextualFeedConfiguration, IGContextualFeedItemConfiguration, IGFeedFocusCoordinator, IGFeedItemLogger, IGFeedPreviewingHandler, IGFeedScrollViewAnnouncer, IGFeedStatusView, IGListAdapter, IGListAdapterUpdaterLogger, IGPagingListAdapterController, IGRefreshControl, IGScrollPerfLogger, IGUserSession, NSString, UICollectionView;

@interface IGContextualFeedViewController : IGViewController <IGContextualFeedServiceDelegate, IGContextualFeedBottomNuxControllerDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFeedStatusViewDelegate, IGFeedScrollViewListener, IGFeedPreviewingType, IGPagingListAdapterControllerDelegate, IGBugReportingProtocol>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGContextualFeedItemConfiguration *_itemConfiguration;
    IGUserSession *_userSession;
    IGFeedStatusView *_feedStatusView;
    IGFeedItemLogger *_feedItemLogger;
    IGRefreshControl *_refreshControl;
    IGFeedPreviewingHandler *_previewingHandler;
    IGListAdapterUpdaterLogger *_adapterPerfLogger;
    IGScrollPerfLogger *_scrollPerfLogger;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    IGPagingListAdapterController *_pagingListAdapterController;
    IGContextualFeedConfiguration *_feedConfiguration;
    IGFeedFocusCoordinator *_focusCoordinator;
    IGContextualFeedBottomNuxController *_bottomPillController;
    id <IGFeedStatusViewDataSource> _feedStatusViewDataSource;
    _Bool _shouldShowPill;
    _Bool _hasScrolledToFocusedItem;
    _Bool _didEnterFromExploreChaining;
    id <IGContextualFeedLogger> _contextualFeedLogger;
    id _previouslyFocusedItem;
    id _nextFocusedItem;
    double _originalFocusItemYOffset;
    double _previousStatusBarAlpha;
    id <IGContextualFeedService> _contextualFeedService;
    id <IGContextualFeedViewControllerDelegate> _delegate;
    IGCollectionViewVisibility *_collectionViewVisibility;
}

@property(retain, nonatomic) IGCollectionViewVisibility *collectionViewVisibility; // @synthesize collectionViewVisibility=_collectionViewVisibility;
@property(nonatomic) __weak id <IGContextualFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IGContextualFeedService> contextualFeedService; // @synthesize contextualFeedService=_contextualFeedService;
- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_nextItemAfter:(id)arg1;
- (id)_previousFocusedItemBefore:(id)arg1;
- (id)bugReportDescription;
- (id)collectionView;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (void)_updateModuleGraphWithNewPosts:(id)arg1 offset:(long long)arg2;
- (void)contextualFeedService:(id)arg1 didChangeToObjects:(id)arg2;
- (void)contextualFeedServiceDidFail:(id)arg1;
- (void)contextualFeedService:(id)arg1 didFinishLoadingWithObjects:(id)arg2 isLoadMoreFetch:(_Bool)arg3;
- (void)contextualFeedServiceDidStartLoading:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_hidePill;
- (void)contextualFeedBottomNuxWasTapped:(id)arg1;
- (id)_mostVisibleFeedItem;
- (id)_mostVisibleMediaCell;
- (void)_fetchNextPage;
- (void)_fetchPreviousPage;
- (void)_refreshDataIfNotFullyLoaded;
- (void)_scrollToFocusedItem;
- (void)_updateFeedStateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_refresh;
- (_Bool)_didEnterFromExplore;
- (void)_setupPill;
- (void)_setupFeedStatusView;
- (void)_setupCollectionViewAndAdapter;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)statusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContextualFeedService:(id)arg1 userSession:(id)arg2 itemConfiguration:(id)arg3 feedStatusViewDataSource:(id)arg4 focusCoordinator:(id)arg5 savedMediaCollection:(id)arg6 feedItemLogger:(id)arg7 contextualFeedLogger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

