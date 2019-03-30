//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGActionSheetDelegate.h"
#import "IGEmptyFeedViewDelegate.h"
#import "IGFeedNetworkSourceDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGInfoViewDelegate.h"
#import "IGListAdapterDelegate.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate.h"
#import "IGSavedMediaCollectionContributorViewControllerDelegate.h"
#import "IGSavedMediaCollectionHeaderSectionControllerDelegate.h"
#import "IGSavedMediaCollectionPivotCTAViewDelegate.h"

@class IGCollectionViewVisibility, IGFeedNetworkSource, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGGridCollectionViewLayout, IGInfoView, IGListAdapter, IGRankedTitleView, IGRefreshControl, IGSaveHomeLogger, IGSavedMediaCollection, IGSavedMediaCollectionPivotCTAView, IGSavedMediaFeedAdapterDataSource, IGScrollPerfLogger, IGUserSession, NSMutableSet, NSString, UICollectionView;

@interface IGSavedMediaFeedViewController : IGViewController <IGEmptyFeedViewDelegate, IGFeedNetworkSourceDelegate, IGFeedScrollViewListener, IGInfoViewDelegate, IGListAdapterDelegate, IGActionSheetDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGSavedMediaCollectionHeaderSectionControllerDelegate, IGSavedMediaCollectionContributorViewControllerDelegate, IGSavedMediaCollectionPivotCTAViewDelegate>
{
    id <IGSavedMediaFeedViewControllerDelegate> _delegate;
    _Bool _hasLoadedData;
    IGInfoView *_infoView;
    _Bool _isMediaCollection;
    IGSaveHomeLogger *_logger;
    _Bool _isDataFetchNeeded;
    _Bool _awaitLeaveConfirmationPresentation;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGSavedMediaCollectionPivotCTAView *_ctaView;
    IGGridCollectionViewLayout *_feedLayout;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGScrollPerfLogger *_scrollPerfLogger;
    IGRefreshControl *_refreshControl;
    IGFeedNetworkSource *_feedNetworkSource;
    IGUserSession *_userSession;
    IGSavedMediaFeedAdapterDataSource *_dataSource;
    IGFeedPreviewHandler *_previewHandler;
    NSMutableSet *_pendingDeletedItems;
    IGSavedMediaCollection *_collection;
    IGRankedTitleView *_collectionTitleView;
    IGCollectionViewVisibility *_collectionViewVisibility;
    NSMutableSet *_loggedImpressions;
}

- (void).cxx_destruct;
- (void)_displayServerError:(id)arg1 inViewController:(id)arg2;
- (_Bool)_showSubtitleString;
- (id)_titleString;
- (_Bool)_shouldShowCollectionHeaderCell;
- (void)_presentAddToCollectionViewController;
- (void)_presentLeaveCollectionConfirmationSheet;
- (void)_didTapMoreButton;
- (void)_reloadCollectionViewInsets;
- (void)_showUnimplementedAlertDialogue;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)_logReachedCollectionEndByScrolling:(_Bool)arg1;
- (void)_logClickForMedia:(id)arg1 index:(unsigned long long)arg2;
- (void)_logImpressionForMedia:(id)arg1 index:(unsigned long long)arg2;
- (void)_logEvent:(id)arg1 forMedia:(id)arg2 index:(unsigned long long)arg3;
- (id)_positionForIndex:(long long)arg1;
- (void)didTapPivotCTA;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)analyticsModule;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_setPivotsCTAVisible:(_Bool)arg1;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)contributorViewControllerDidSelectDone:(id)arg1;
- (void)savedCollectionHeaderSectionControllerDidRequestViewOwner:(id)arg1;
- (void)savedCollectionHeaderSectionControllerDidRequestViewContributors:(id)arg1;
- (void)didSelectFeedItem:(id)arg1;
- (void)infoViewWasTapped:(id)arg1;
- (void)_showInfoView;
- (void)_setupInfoView;
- (_Bool)_loadNextPage;
- (_Bool)_fetchMore;
- (void)_fetch;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)_collectionDeleted:(id)arg1;
- (void)_collectionUpdated:(id)arg1;
- (void)_mediaRemovedFromCollection:(id)arg1;
- (void)_mediaAddedToCollection:(id)arg1;
- (void)_savedMediaRemoved:(id)arg1;
- (void)_savedMediaAdded:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupPivotsCTA;
- (void)_setupButtonItems;
- (void)_setupCollectionTitleViewText;
- (void)_setupPullToRefreshManager;
- (void)_setupDataSource;
- (void)_setupCollectionView;
- (void)_setupListAdapter;
- (id)initWithUserSession:(id)arg1 collection:(id)arg2 priorModule:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

