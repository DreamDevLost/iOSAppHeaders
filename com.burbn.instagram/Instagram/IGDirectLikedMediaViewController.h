//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectLikedMediaDataSourceDelegate.h"
#import "IGDirectScrollingTabChildViewControllerProtocol.h"
#import "IGFeedScrollViewListener.h"
#import "IGInfoViewDelegate.h"
#import "IGPartialModalSheetListener.h"

@class IGDirectLikedMediaDataSource, IGDirectMediaPickerLogger, IGEmptyFeedView, IGFeedScrollViewAnnouncer, IGInfoView, IGListAdapter, IGUserSession, NSMutableArray, NSString, UICollectionView;

@interface IGDirectLikedMediaViewController : IGViewController <IGDirectLikedMediaDataSourceDelegate, IGFeedScrollViewListener, IGPartialModalSheetListener, IGInfoViewDelegate, IGDirectScrollingTabChildViewControllerProtocol>
{
    UICollectionView *_collectionView;
    IGDirectLikedMediaDataSource *_dataSource;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    NSMutableArray *_selectedItems;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGDirectMediaPickerLogger *_logger;
    IGEmptyFeedView *_emptyView;
    IGInfoView *_infoView;
    _Bool _useCustomContentInsets;
    struct UIEdgeInsets _customContentInsets;
    id <IGDirectLikedMediaViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectLikedMediaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_markFeedItem:(id)arg1 selected:(_Bool)arg2;
- (void)_refreshTitleView;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)partialModalSheetDidChangeState:(unsigned long long)arg1;
- (void)partialModalSheetDidDismiss;
- (void)partialModalSheetDidUpdateOffset:(double)arg1 presentationProgress:(double)arg2;
- (void)infoViewWasTapped:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateContentInsets:(struct UIEdgeInsets)arg1;
- (_Bool)likedMediaDataSource:(id)arg1 shouldShowFeedItemAsSelected:(id)arg2;
- (void)likedMediaDataSource:(id)arg1 didSelectFeedItem:(id)arg2;
- (void)likedMediaDataSource:(id)arg1 didFailToLoadItemsIsInternetConnected:(_Bool)arg2;
- (void)likedMediaDataSourceDidFinishLoadingItems:(id)arg1;
- (void)_setupInfoView;
- (void)_setupEmptyView;
- (void)_setupScrollViewAnnouncer;
- (void)_setupCollectionViewAndListAdapter;
- (void)_setupDataSource;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

