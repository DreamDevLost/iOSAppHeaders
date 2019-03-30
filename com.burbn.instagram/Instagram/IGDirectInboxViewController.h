//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGBugReportingProtocol.h"
#import "IGDirectCameraPresentationManagerDelegate.h"
#import "IGDirectInboxCellSwipeCoordinatorDelegate.h"
#import "IGDirectInboxHeaderSectionControllerDelegate.h"
#import "IGDirectInboxMegaphoneProvider.h"
#import "IGDirectInboxServiceListener.h"
#import "IGDirectInboxUpdateObserverDelegate.h"
#import "IGDirectMainInboxThreadSectionControllerDelegate.h"
#import "IGDirectOutgoingUpdateListener.h"
#import "IGDirectSuggestedSectionControllerDelegate.h"
#import "IGDirectThreadCreationDelegate.h"
#import "IGDirectThreadCreationViewControllerDelegate.h"
#import "IGDirectThreadsFilterControllerDelegate.h"
#import "IGDirectVisualMessageReplayServiceListener.h"
#import "IGDirectVisualMessageViewerPresentationManagerContextDelegate.h"
#import "IGDirectWalkieTalkieCoordinatorDataSource.h"
#import "IGEmptyFeedViewDelegate.h"
#import "IGListAdapterDelegate.h"
#import "IGMainAppScrollingChildViewController.h"
#import "IGMegaphoneSectionControllerDelegate.h"
#import "IGNonFeedActivationWelcomeCardSectionControllerDelegate.h"
#import "IGQPMegaphoneSectionControllerPresenterDelegate.h"
#import "IGSafeToExitAppWhenBackgrounded.h"
#import "IGSearchBarDelegate.h"
#import "IGSearchBarRightAccessoryButtonDelegate.h"
#import "IGTabControlSegment.h"
#import "IGWarmStartListener.h"
#import "UIScrollViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGDirectCameraPresentationManager, IGDirectInboxAccountSwitchingManager, IGDirectInboxCellSwipeCoordinator, IGDirectInboxConfig, IGDirectInboxFiltersViewController, IGDirectInboxListAdapterDataSource, IGDirectInboxQPConfig, IGDirectInboxRecipientSearchController, IGDirectInboxService, IGDirectInboxSyncStatusPerfLogger, IGDirectInboxUpdateObserver, IGDirectMainInboxAnalyticsLogger, IGDirectNUXManager, IGDirectNewMessageCoordinator, IGDirectPendingInboxConfig, IGDirectPendingInboxService, IGDirectTabletLayoutConfigurator, IGDirectThreadService, IGDirectVisualMessageViewerSessionPlaybackTracker, IGDirectWalkieTalkieAnimator, IGDirectWalkieTalkieCoordinator, IGGenericMegaphone, IGImageWithTextTabBarFooter, IGListAdapter, IGListAdapterUpdaterLogger, IGQPMegaphone, IGQPMegaphoneSectionControllerPresenter, IGQuickPromotionCoordinator, IGRefreshControl, IGScrollPerfLogger, IGSearchBarConfig, IGUserSession, NSString, UICollectionView, UILongPressGestureRecognizer, UIView;

@interface IGDirectInboxViewController : IGViewController <IGDirectCameraPresentationManagerDelegate, IGDirectInboxCellSwipeCoordinatorDelegate, IGDirectInboxHeaderSectionControllerDelegate, IGDirectInboxMegaphoneProvider, IGDirectInboxServiceListener, IGDirectInboxUpdateObserverDelegate, IGDirectMainInboxThreadSectionControllerDelegate, IGDirectOutgoingUpdateListener, IGDirectThreadCreationDelegate, IGDirectThreadCreationViewControllerDelegate, IGDirectThreadsFilterControllerDelegate, IGDirectSuggestedSectionControllerDelegate, IGDirectVisualMessageReplayServiceListener, IGDirectWalkieTalkieCoordinatorDataSource, IGEmptyFeedViewDelegate, IGListAdapterDelegate, IGMegaphoneSectionControllerDelegate, IGNonFeedActivationWelcomeCardSectionControllerDelegate, IGQPMegaphoneSectionControllerPresenterDelegate, IGSearchBarDelegate, IGSearchBarRightAccessoryButtonDelegate, IGTabControlSegment, UIScrollViewDelegate, UIViewControllerTransitioningDelegate, IGWarmStartListener, IGBugReportingProtocol, IGDirectVisualMessageViewerPresentationManagerContextDelegate, IGMainAppScrollingChildViewController, IGSafeToExitAppWhenBackgrounded>
{
    IGUserSession *_userSession;
    IGDirectInboxUpdateObserver *_updateObserver;
    IGDirectInboxConfig *_inboxConfig;
    IGDirectInboxService *_inboxService;
    id <IGDogfooderProtocol> _dogfooder;
    IGDirectPendingInboxConfig *_pendingInboxConfig;
    IGDirectPendingInboxService *_pendingInboxService;
    IGDirectThreadService *_threadService;
    _Bool _isViewVisible;
    IGListAdapter *_listAdapter;
    IGListAdapterUpdaterLogger *_adapterPerfLogger;
    IGRefreshControl *_refreshControl;
    IGDirectTabletLayoutConfigurator *_tabletConfigurator;
    IGDirectCameraPresentationManager *_cameraPresentationManager;
    IGImageWithTextTabBarFooter *_messageBanner;
    IGDirectNUXManager *_nuxManager;
    IGDirectMainInboxAnalyticsLogger *_analyticsLogger;
    IGDirectNewMessageCoordinator *_messageCoordinator;
    IGDirectInboxCellSwipeCoordinator *_swipeCoordinator;
    IGScrollPerfLogger *_scrollPerfLogger;
    IGDirectInboxRecipientSearchController *_searchController;
    IGDirectInboxListAdapterDataSource *_inboxListAdapterDataSource;
    IGDirectInboxQPConfig *_directInboxQPConfig;
    IGQuickPromotionCoordinator *_qpCoordinator;
    IGQPMegaphone *_qpMegaphone;
    IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
    IGGenericMegaphone *_megaphone;
    double _bottomBarHeight;
    IGDirectVisualMessageViewerSessionPlaybackTracker *_inboxPlaybackSessionTracker;
    IGDirectInboxAccountSwitchingManager *_accountSwitchingManager;
    IGDirectInboxFiltersViewController *_filtersViewController;
    IGSearchBarConfig *_searchBarConfig;
    long long _initialFilter;
    UILongPressGestureRecognizer *_longPressGesture;
    IGDirectWalkieTalkieAnimator *_animator;
    IGDirectWalkieTalkieCoordinator *_walkieTalkieCoordinator;
    IGDirectInboxSyncStatusPerfLogger *_syncStatusPerfTracker;
    UIView *_customHeaderView;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
- (void).cxx_destruct;
- (id)_createMessageBannerForFooterType:(long long)arg1;
- (id)_createListAdapterDataSource;
- (void)_setupNotificationObservers;
- (id)_setupVideoCallBarButton;
- (id)_setupMessageBarButton;
- (void)_setupRightBarButtonItems;
- (void)_setupLongPressGesture;
- (void)_setupTitleView;
- (void)_handlePresenceUpdate:(id)arg1;
- (void)_reloadIfVisibleInboxWithReason:(id)arg1 shouldTriggerHaptic:(_Bool)arg2;
- (void)_updateTypingStatusesForThreadId:(id)arg1 typingStatuses:(id)arg2;
- (void)_openPendingInbox;
- (_Bool)isSafeToExitAppWhenBackgrounded;
- (void)ig_resetAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)directInboxServiceFetchResultWasIgnoredDueToSnapshotFetchWithFetchInput:(id)arg1;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)arg1 httpStatusCode:(long long)arg2 error:(id)arg3 willAutoRetry:(_Bool)arg4;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)arg1 inboxMetadata:(id)arg2 megaphone:(id)arg3 threads:(id)arg4;
- (void)directInboxServiceDidReceiveInboxFetchPayloadFromNetwork;
- (void)directInboxServiceWillFetchInboxDataWithFetchInput:(id)arg1;
- (void)directInboxServiceWillIgnoreInboxFetchDueToAlreadyRunningFetchWithFetchInput:(id)arg1;
- (void)applicationWillEnterForegroundWithTimeIntervalSinceBackground:(double)arg1 warmStartInitializedFromNotification:(_Bool)arg2;
- (void)inboxUpdateObserverDidUpdateWithUpdateType:(id)arg1;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (id)analyticsModule;
- (void)_showFilterButtonNUXIfNecessary;
- (void)_animateCellsPostVisualMessageSend:(id)arg1;
- (void)_scrollToIndexPathWithoutAnimationIfNeeded:(id)arg1;
- (id)_indexesOfViewModelsForRecipients:(id)arg1;
- (id)animatableCellsForRecipients:(id)arg1;
- (void)presentationManagerDidDismiss:(id)arg1 withDirectRecipients:(id)arg2;
- (id)_dismissalDestinationViewForForRecipients:(id)arg1 sourceIdentifier:(id)arg2;
- (void)dismissalDestinationViewForRecipients:(id)arg1 sourceIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)presentationManagerWillDismiss:(id)arg1 withDirectRecipients:(id)arg2;
- (void)presentationManagerWillSend:(id)arg1 withDirectRecipients:(id)arg2;
- (void)visualMessageViewerPresentationManager:(id)arg1 didUpdateWithPreloadContextIdentifier:(id)arg2;
- (id)visualMessageViewerPresentationContextForIdentifier:(id)arg1;
- (void)visualMessageReplayServiceDidUpdate:(id)arg1;
- (void)megaphoneSectionController:(id)arg1 didSelectButton:(id)arg2;
- (void)didDismissMegaphoneSectionController:(id)arg1;
- (void)nonFeedActivationWelcomeCardSectionControllerDidTapActionLabel:(id)arg1;
- (struct CGRect)_filterViewFrameFromCell:(id)arg1;
- (void)threadsFilterControllerFilterDidChange:(id)arg1 performUpdatesAnimated:(_Bool)arg2;
- (void)threadsFilterControllerShouldFetchNextPageForFilteredInboxIfNeeded:(id)arg1;
- (long long)threadsFilterControllerSelectedThreadsFilter;
- (void)searchBarRightAccessoryButtonTappedOnSearchBar:(id)arg1;
- (void)inboxCellSwipeCoordinator:(id)arg1 didUpdateWithOpenedViewModel:(id)arg2 previouslyOpenedViewModel:(id)arg3;
- (void)_presentCameraForThreadId:(id)arg1 entryPoint:(unsigned long long)arg2 cameraButton:(id)arg3 isReply:(_Bool)arg4;
- (void)setSelectedFilter:(long long)arg1;
- (void)willPresentFromStoryCreationAfterSendingMessage;
- (void)pushToPendingInboxAnimated:(_Bool)arg1;
- (void)pushToThreadWithThreadId:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (id)bugReportDescription;
- (void)inboxSuggestedSectionController:(id)arg1 didTapCameraButton:(id)arg2 forUser:(id)arg3;
- (void)inboxThreadSectionController:(id)arg1 didTapMoreActionsForThreadWithId:(id)arg2;
- (void)inboxThreadSectionController:(id)arg1 didSetThreadUnreadForThreadId:(id)arg2;
- (long long)inboxThreadSectionControllerSelectedThreadsFilter;
- (void)inboxThreadSectionController:(id)arg1 didSetThreadFlagged:(_Bool)arg2 actionSource:(id)arg3 threadId:(id)arg4;
- (void)inboxThreadSectionController:(id)arg1 didDismissVisualMessageForThreadId:(id)arg2;
- (void)inboxThreadSectionController:(id)arg1 didTapCameraButton:(id)arg2 forThreadId:(id)arg3 isReply:(_Bool)arg4;
- (void)inboxThreadSectionController:(id)arg1 didDeleteThreadWithId:(id)arg2;
- (void)inboxThreadSectionController:(id)arg1 didTapMuteButtonForCell:(id)arg2 threadId:(id)arg3;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)directInboxQPMegaphoneSectionController;
- (id)directInboxQPMegaphone;
- (id)directInboxMegaphone;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateHeaderShadowOnMegaphoneUpdate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)arg1;
- (void)_fetchQuickPromotionData;
- (void)_displayInboxFetchAlertForError:(id)arg1;
- (void)_autoloadNextPageIfTailLoadingSpinnerIsVisible;
- (void)_fetchNextPageIfPossible;
- (void)_pullToRefreshIfPossible;
- (void)inboxHeaderSectionControllerDidTapActionButton;
- (void)threadCreationViewControllerDidCancel:(id)arg1;
- (void)threadCreationViewControllerDidError:(id)arg1;
- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;
- (void)threadCreationViewController:(id)arg1 didCreateThread:(id)arg2 entryPoint:(unsigned long long)arg3;
- (void)scrollingChildWillBeginDragging;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)walkieTalkiePresenterViewController;
- (id)walkieTalkieThreadIdForPoint:(struct CGPoint)arg1;
- (void)_longPressReceived:(id)arg1;
- (void)pushThreadComposerWithEntryPoint:(unsigned long long)arg1;
- (void)_didTapVideoCallBarButtonItem:(id)arg1;
- (void)_didTapNewMessageBarButtonItem:(id)arg1;
- (void)presentNewMessageCameraWithEntryPoint:(unsigned long long)arg1 customNavigationDelegate:(id)arg2;
- (void)_didTapNewMessageBanner:(id)arg1;
- (void)_didTapCameraMessageBanner;
- (void)_onFriendStatusReceived:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersTabBarHidden;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_muteWithThreadId:(id)arg1 isMuted:(_Bool)arg2 targetType:(unsigned long long)arg3;
- (void)_muteThread:(id)arg1 cell:(id)arg2;
- (void)_muteVideoCallWithThread:(id)arg1;
- (void)_muteMentionsWithThread:(id)arg1;
- (void)_updateInboxUIStateAnimated:(_Bool)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (struct CGSize)_collectionViewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)clearOverlays;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupWalkieTalkieCoordinatorIfNeeded;
- (void)_refreshMegaphone;
- (void)_setup;
- (id)title;
- (id)initWithUserSession:(id)arg1 inboxConfig:(id)arg2 inboxService:(id)arg3 customHeaderView:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

