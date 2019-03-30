//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedScrollViewListener.h"
#import "IGGestureHandler.h"
#import "IGSaveToCollectionsCreationViewDelegate.h"
#import "IGSaveToCollectionsDataSourceDelegate.h"
#import "IGSaveToCollectionsNavigationBarDelegate.h"
#import "IGSaveToCollectionsSectionControllerDelegate.h"

@class IGAnalyticsNavigationState, IGFeedItem, IGFeedScrollViewAnnouncer, IGListAdapter, IGSaveToCollectionsCreationView, IGSaveToCollectionsDataSource, IGSaveToCollectionsHorizontalListView, IGSaveToCollectionsNavigationBar, IGSharedKeyboardObserver, IGUserSession, NSMutableArray, NSString, NSURL, UIView;

@interface IGSaveToCollectionsViewController : IGViewController <IGFeedScrollViewListener, IGSaveToCollectionsCreationViewDelegate, IGSaveToCollectionsSectionControllerDelegate, IGSaveToCollectionsDataSourceDelegate, IGSaveToCollectionsNavigationBarDelegate, IGGestureHandler>
{
    IGAnalyticsNavigationState *_navState;
    IGSaveToCollectionsHorizontalListView *_listView;
    IGSaveToCollectionsCreationView *_creationView;
    IGSaveToCollectionsNavigationBar *_navigationBar;
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    IGListAdapter *_listAdapter;
    IGSaveToCollectionsDataSource *_dataSource;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    id <IGFeedItemLoggingProviderDelegate> _loggingProvider;
    NSURL *_thumbnailImageURL;
    NSString *_createCollectionTitle;
    unsigned long long _createCollectionVisibility;
    NSMutableArray *_selectedCollectionIds;
    _Bool _supportSponsoredTracking;
    UIView *_activeContentView;
    IGSharedKeyboardObserver *_keyboardObserver;
    id <IGSaveToCollectionsFeedDelegate> _delegate;
    IGViewController *_parentVC;
}

@property(readonly, nonatomic) __weak IGViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) __weak id <IGSaveToCollectionsFeedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (void)saveToCollectionsNavigationBarDidSelectSave:(id)arg1;
- (void)saveToCollectionsNavigationBar:(id)arg1 didSelectState:(long long)arg2;
- (void)saveToCollectionsCreationView:(id)arg1 didUpdateVisibility:(unsigned long long)arg2;
- (void)saveToCollectionsCreationView:(id)arg1 textFieldDidReturnWithText:(id)arg2;
- (void)saveToCollectionsCreationView:(id)arg1 textFieldDidUpdateText:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectCollection:(id)arg1;
- (void)collectionsListUpdateFailed:(id)arg1;
- (void)collectionsListUpdated:(_Bool)arg1;
- (void)_handleSaveNewCollectionError:(id)arg1 withInitialSaveState:(_Bool)arg2;
- (void)_handleSaveNewCollectionSuccessWithCollection:(id)arg1;
- (void)_saveNewCollection;
- (void)_updateActiveContentViewForState:(long long)arg1;
- (void)_setState:(long long)arg1 animated:(_Bool)arg2;
- (void)_showAlertBarForError:(id)arg1;
- (void)_performCollectionSaveRequestForCollection:(id)arg1 removingFromCollection:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 feedItem:(id)arg2 feedDelegate:(id)arg3 parentVC:(id)arg4 loggingProvider:(id)arg5 supportSponsoredTracking:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
