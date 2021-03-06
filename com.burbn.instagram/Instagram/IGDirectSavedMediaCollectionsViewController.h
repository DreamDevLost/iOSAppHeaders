//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectSavedMediaCollectionsDataSourceDelegate.h"
#import "IGDirectScrollingTabChildViewControllerProtocol.h"
#import "IGFeedScrollViewListener.h"
#import "IGInfoViewDelegate.h"
#import "IGPartialModalSheetListener.h"

@class IGDirectMediaPickerLogger, IGDirectSavedMediaCollectionsDataSource, IGEmptyFeedView, IGFeedScrollViewAnnouncer, IGGridCollectionViewLayout, IGInfoView, IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGDirectSavedMediaCollectionsViewController : IGViewController <IGFeedScrollViewListener, IGDirectSavedMediaCollectionsDataSourceDelegate, IGPartialModalSheetListener, IGInfoViewDelegate, IGDirectScrollingTabChildViewControllerProtocol>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGGridCollectionViewLayout *_feedLayout;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGDirectSavedMediaCollectionsDataSource *_dataSource;
    id <IGDirectSavedMediaViewControllerDelegate> _savedMediaDelegate;
    IGDirectMediaPickerLogger *_logger;
    IGEmptyFeedView *_emptyView;
    IGInfoView *_infoView;
    _Bool _useCustomContentInsets;
    struct UIEdgeInsets _customContentInsets;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
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
- (void)savedMediaCollectionsDataSource:(id)arg1 didSelectCollection:(id)arg2;
- (void)savedMediaCollectionsDataSource:(id)arg1 didFailToLoadWithErrorMessage:(id)arg2;
- (void)savedMediaCollectionsDataSourceDidFinishLoadingItems:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateContentInsets:(struct UIEdgeInsets)arg1;
- (void)_setupInfoView;
- (void)_setupEmptyView;
- (void)_setupDataSource;
- (void)_setupCollectionView;
- (void)_setupListAdapter;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 savedMediaDelegate:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

