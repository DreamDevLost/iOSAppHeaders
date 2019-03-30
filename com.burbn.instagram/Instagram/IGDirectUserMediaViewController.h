//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectScrollingTabChildViewControllerProtocol.h"
#import "IGDirectUserMediaDataSourceDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGInfoViewDelegate.h"
#import "IGPartialModalSheetListener.h"

@class IGDirectMediaPickerLogger, IGDirectUserMediaDataSource, IGEmptyFeedView, IGFeedScrollViewAnnouncer, IGInfoView, IGListAdapter, IGUser, IGUserSession, NSMutableArray, NSString, UICollectionView;

@interface IGDirectUserMediaViewController : IGViewController <IGDirectUserMediaDataSourceDelegate, IGFeedScrollViewListener, IGInfoViewDelegate, IGPartialModalSheetListener, IGDirectScrollingTabChildViewControllerProtocol>
{
    IGUser *_user;
    IGUserSession *_userSession;
    IGDirectMediaPickerLogger *_logger;
    IGDirectUserMediaDataSource *_dataSource;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGEmptyFeedView *_emptyView;
    IGInfoView *_infoView;
    NSMutableArray *_selectedItems;
    UICollectionView *_collectionView;
    _Bool _useCustomContentInsets;
    struct UIEdgeInsets _customContentInsets;
    id <IGDirectUserMediaViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectUserMediaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_markFeedItem:(id)arg1 selected:(_Bool)arg2;
- (void)_refreshTitleView;
- (void)infoViewWasTapped:(id)arg1;
- (void)partialModalSheetDidChangeState:(unsigned long long)arg1;
- (void)partialModalSheetDidDismiss;
- (void)partialModalSheetDidUpdateOffset:(double)arg1 presentationProgress:(double)arg2;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)userMediaDataSource:(id)arg1 didFailToLoadItemsIsInternetConnected:(_Bool)arg2;
- (void)userMediaDataSourceDidFinishLoadingItems:(id)arg1;
- (void)userMediaDataSource:(id)arg1 didSelectFeedItem:(id)arg2;
- (_Bool)userMediaDataSource:(id)arg1 shouldShowFeedItemAsSelected:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateContentInsets:(struct UIEdgeInsets)arg1;
- (void)_setupInfoView;
- (void)_setupEmptyView;
- (void)_setupScrollViewAnnouncer;
- (void)_setupCollectionViewAndListAdapter;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUser:(id)arg1 userSession:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

