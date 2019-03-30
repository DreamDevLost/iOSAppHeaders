//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGInfoViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGShoppingProductSourceLoadMoreSectionControllerDelegate.h"
#import "IGShoppingProductSourceNetworkerDelegate.h"
#import "IGShoppingProductSourceSectionControllerDelegate.h"
#import "IGTextViewSectionControllerDelegate.h"

@class IGFeedStarterKit, IGInfoView, IGShoppingProductSourceLogger, IGShoppingProductSourceNetworker, IGShoppingProductSourceSignupFlowHeaderViewModel, IGUserSession, NSArray, NSString;

@interface IGShoppingProductSourceViewController : IGViewController <IGInfoViewDelegate, IGListAdapterDataSource, IGShoppingProductSourceNetworkerDelegate, IGShoppingProductSourceSectionControllerDelegate, IGTextViewSectionControllerDelegate, IGShoppingProductSourceLoadMoreSectionControllerDelegate>
{
    IGFeedStarterKit *_feed;
    IGInfoView *_infoView;
    IGUserSession *_userSession;
    IGShoppingProductSourceNetworker *_networker;
    NSArray *_sectionViewModels;
    NSString *_initiallySelectedCatalogID;
    NSString *_selectedCatalogID;
    NSString *_entryPoint;
    NSString *_priorModule;
    NSString *_waterfallID;
    long long _viewContext;
    IGShoppingProductSourceLogger *_logger;
    _Bool _isSelecting;
    IGShoppingProductSourceSignupFlowHeaderViewModel *_headerViewModel;
    id <IGShoppingProductSourceViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingProductSourceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *selectedCatalogID;
- (id)_requestConfigIsPullToRefresh:(_Bool)arg1 initiallySelectedProductSourceId:(id)arg2 nextMaxId:(id)arg3;
- (void)_showFetchFailureAlertBar;
- (void)_fetchAllSections;
- (void)_onDoneTapped;
- (id)analyticsModule;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)loadMoreSectionController:(id)arg1 didSelectLoadMoreForSectionType:(unsigned long long)arg2 maxId:(id)arg3;
- (void)infoViewWasTapped:(id)arg1;
- (void)_showErrorMessage:(id)arg1;
- (void)_setupInfoView;
- (void)productSourceSectionController:(id)arg1 didSelectProductSourceID:(id)arg2 sourceName:(id)arg3 sectionType:(unsigned long long)arg4;
- (void)productSourceNetworker:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)productSourceNetworker:(id)arg1 didLoadSectionTypeResponse:(id)arg2;
- (void)productSourceNetworker:(id)arg1 didLoadResponse:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)shouldConsiderSafeAreaForPreferredContentBottomInset;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 waterfallID:(id)arg2 entryPoint:(id)arg3 priorModule:(id)arg4 viewContext:(long long)arg5 headerViewModel:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

