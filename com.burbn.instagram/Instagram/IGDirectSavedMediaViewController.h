//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectScrollingTabChildViewControllerProtocol.h"
#import "IGFeedNetworkSourceDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGInfoViewDelegate.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate.h"
#import "IGPartialModalSheetListener.h"

@class IGDirectMediaPickerLogger, IGFeedNetworkSource, IGFeedScrollViewAnnouncer, IGGridCollectionViewLayout, IGInfoView, IGListAdapter, IGSavedMediaCollection, IGSavedMediaFeedAdapterDataSource, IGUserSession, NSMutableArray, NSString, UICollectionView, UIView;

@interface IGDirectSavedMediaViewController : IGViewController <IGMediaThumbnailSectionControllerSelectionDelegate, IGFeedNetworkSourceDelegate, IGFeedScrollViewListener, IGInfoViewDelegate, IGPartialModalSheetListener, IGDirectScrollingTabChildViewControllerProtocol>
{
    IGUserSession *_userSession;
    IGSavedMediaCollection *_collection;
    IGListAdapter *_listAdapter;
    IGSavedMediaFeedAdapterDataSource *_dataSource;
    IGGridCollectionViewLayout *_feedLayout;
    IGFeedNetworkSource *_networkSource;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    UICollectionView *_collectionView;
    IGInfoView *_infoView;
    NSMutableArray *_selectedItems;
    IGDirectMediaPickerLogger *_logger;
    UIView *_defaultTitleView;
    _Bool _useCustomContentInsets;
    struct UIEdgeInsets _customContentInsets;
    id <IGDirectSavedMediaViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectSavedMediaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (void)_markFeedItem:(id)arg1 selected:(_Bool)arg2;
- (_Bool)_loadNextPage;
- (_Bool)_fetchMore;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateContentInsets:(struct UIEdgeInsets)arg1;
- (void)partialModalSheetDidChangeState:(unsigned long long)arg1;
- (void)partialModalSheetDidDismiss;
- (void)partialModalSheetDidUpdateOffset:(double)arg1 presentationProgress:(double)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)infoViewWasTapped:(id)arg1;
- (void)didSelectFeedItem:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)_setupInfoView;
- (void)_setupScrollViewAnnouncer;
- (void)_setupDataSource;
- (void)_setupCollectionView;
- (void)_refreshTitleView;
- (void)_setupNetworkSource;
- (void)willMoveToParentViewController:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 collection:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
