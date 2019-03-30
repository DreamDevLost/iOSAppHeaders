//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGChainingContainerDelegate.h"
#import "IGContextualFeedViewControllerDelegate.h"
#import "IGDiscoverySuggestedTopicPivotSectionControllerDelegate.h"
#import "IGDynamicPageChildViewControllerType.h"
#import "IGExploreListKitDataSourceDelegate.h"
#import "IGExploreTopicalFeedDataControllerSingleTopicListener.h"
#import "IGExploreTopicalFeedLayoutListener.h"
#import "IGFeedPreviewHandlerDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGListAdapterUpdateListener.h"
#import "IGScrollableViewControllerProtocol.h"
#import "UICollectionViewDelegate.h"

@class IGDiscoveryTopicModel, IGExploreListKitDataSource, IGExploreSingleTopicFeedLoggingContext, IGExploreSingleTopicFeedWaterfallCollectionViewLayout, IGExploreTopicalFeedChainingContext, IGExploreTopicalFeedDataController, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGFeedVideoCellManager, IGListAdapter, IGRefreshControl, IGScrollPerfLogger, IGSessionTracker, IGUserSession, NSDictionary, NSString, UICollectionView;

@interface IGExploreSingleTopicFeedViewController : IGViewController <IGChainingContainerDelegate, IGContextualFeedViewControllerDelegate, IGExploreTopicalFeedDataControllerSingleTopicListener, IGExploreTopicalFeedLayoutListener, IGFeedPreviewHandlerDelegate, IGFeedScrollViewListener, IGExploreListKitDataSourceDelegate, IGListAdapterUpdateListener, UICollectionViewDelegate, IGDynamicPageChildViewControllerType, IGScrollableViewControllerProtocol, IGDiscoverySuggestedTopicPivotSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGExploreTopicalFeedDataController *_dataController;
    IGSessionTracker *_sessionTracker;
    IGExploreTopicalFeedChainingContext *_chainingContext;
    id <IGExploreTopicalFeedLayoutContext> _layoutContext;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    struct IGGridLayoutConfiguration _gridLayoutConfig;
    IGExploreSingleTopicFeedWaterfallCollectionViewLayout *_collectionViewLayout;
    IGFeedVideoCellManager *_videoCellManager;
    IGExploreListKitDataSource *_listDataSource;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGFeedPreviewHandler *_previewHandler;
    IGRefreshControl *_refreshControl;
    _Bool _scrollViewIsScrollingToTop;
    IGExploreSingleTopicFeedLoggingContext *_loggingContext;
    IGScrollPerfLogger *_scrollPerfLogger;
    NSDictionary *_navigationExtras;
    _Bool _enableHeaders;
    IGDiscoveryTopicModel *_topic;
    long long _state;
    id <IGExploreSingleTopicFeedViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGExploreSingleTopicFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) IGDiscoveryTopicModel *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (void)discoveryShoppingSectionController:(id)arg1 didSelectCellWithViewModel:(id)arg2;
- (void)discoverySuggestedTopicPivotSectionController:(id)arg1 didSelectTopic:(id)arg2;
- (void)didSelectSuggestedHashtag:(id)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (id)previewHandler:(id)arg1 previewActionsForFeedItem:(id)arg2 defaultActionProvider:(CDUnknownBlockType)arg3;
- (id)hashtagModelForPreviewHandler:(id)arg1;
- (id)previewHandler:(id)arg1 loggingExtrasForFeedItem:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)canDynamicPageBeDismissedVertically;
- (void)prepareForReuse;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (void)willResignSelectedPageInDynamicPageViewController;
- (void)didBecomeSelectedPageInDynamicPageViewController;
- (void)exploreSingleTopicFeedHeaderSectionController:(id)arg1 didRequestUnmuteTopic:(id)arg2;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (_Bool)hasShownPillInCurrentExploreSession:(id)arg1;
- (void)chainingContainerDidShowPill:(id)arg1;
- (void)contextualFeedViewControllerWillDismiss:(id)arg1;
- (void)contextualFeedViewControllerWillShowPill:(id)arg1;
- (_Bool)didShowPillInCurrentSession:(id)arg1;
- (void)videoFeedViewController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoFeedViewControllerWasDismissed:(id)arg1;
- (void)videoFeedViewController:(id)arg1 willDismissWithFocusedFeedItem:(id)arg2 currentPlaybackTime:(double)arg3;
- (void)sectionController:(id)arg1 didLoadMediaWithSuccess:(_Bool)arg2;
- (void)didSelectDiscoveryMediaItem:(id)arg1;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)exploreTopicalFeedLayoutContext:(id)arg1 didUpdateTopContentInsetAdjustment:(double)arg2;
- (void)exploreTopicalFeedLayoutContext:(id)arg1 didUpdateMaxTopContentInsetAdjustment:(double)arg2;
- (void)exploreTopicalFeedLayoutContext:(id)arg1 didUpdateContentInset:(struct UIEdgeInsets)arg2;
- (void)exploreTopicalFeedDataController:(id)arg1 didUpdateFetchState:(id)arg2 forTopic:(id)arg3;
- (void)exploreTopicalFeedDataController:(id)arg1 didUpdateDataStore:(id)arg2 forTopic:(id)arg3;
- (void)exploreTopicalFeedDataController:(id)arg1 didUpdateTopic:(id)arg2;
- (void)_stopAutoplayingVideos;
- (void)_startAutoplayingVideosIfNeeded;
- (void)_pushViewControllerForTopic:(id)arg1;
- (id)_seeFewerPostsLikeThisActionForFeedItem:(id)arg1;
- (id)_sectionLoggingProviderWithTopic:(id)arg1;
- (void)_scrollToCurrentTopContentInset;
- (void)_updateCollectionViewTraits;
- (void)_handleRefreshControlTriggered:(id)arg1;
- (void)_updateFetchStateApplyingListUpdates:(_Bool)arg1;
- (_Bool)_requestMediaWithAction:(long long)arg1;
- (void)_updateListDataStore;
- (void)_applyRestorationState:(id)arg1;
- (_Bool)isScrolledToTop;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (id)restorationState;
- (void)configureWithTopic:(id)arg1 restorationState:(id)arg2;
- (_Bool)disableNavigationEvent;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)analyticsExtras;
- (id)analyticsModule;
- (id)initWithUserSession:(id)arg1 dataController:(id)arg2 sessionTracker:(id)arg3 loggingContext:(id)arg4 chainingContext:(id)arg5 layoutContext:(id)arg6 navigationExtras:(id)arg7 enableHeaders:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
