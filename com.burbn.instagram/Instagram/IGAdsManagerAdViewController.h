//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGAdAppealViewControllerDelegate.h"
#import "IGCoreTextLinkHandler.h"

@class IGAdViewModel, IGAdsManagerAdLoadingView, IGAdsManagerAdMutationHandler, IGAdsManagerDataProvider, IGAdsManagerLogger, IGFeedItem, IGUserSession, NSArray, NSString;

@interface IGAdsManagerAdViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGAdAppealViewControllerDelegate>
{
    NSArray *_actionRows;
    _Bool _isDeleting;
    _Bool _isUpdating;
    _Bool _isShowingPreview;
    id <IGAdsManagerAdViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    IGAdsManagerDataProvider *_dataProvider;
    IGAdsManagerAdMutationHandler *_mutationHandler;
    IGAdsManagerLogger *_logger;
    IGAdViewModel *_adViewModel;
    IGAdsManagerAdLoadingView *_loadingView;
}

@property(nonatomic) _Bool isShowingPreview; // @synthesize isShowingPreview=_isShowingPreview;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(retain, nonatomic) IGAdsManagerAdLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) IGAdViewModel *adViewModel; // @synthesize adViewModel=_adViewModel;
@property(readonly, nonatomic) IGAdsManagerLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGAdsManagerAdMutationHandler *mutationHandler; // @synthesize mutationHandler=_mutationHandler;
@property(readonly, nonatomic) IGAdsManagerDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGAdsManagerAdViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_openURL:(id)arg1;
- (void)appealViewControllerDidSendAppeal:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)analyticsModule;
- (CDUnknownBlockType)_feedItemsParserForAdPreview;
- (id)_previewAdIntentTargetWithFeedItem:(id)arg1;
- (id)_standardCellWithText:(id)arg1 detailedText:(id)arg2;
- (id)_actionCellWithIdentifier:(id)arg1 title:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_cellForInformationSectionAtRow:(long long)arg1;
- (id)_cellForActionSectionAtRow:(long long)arg1;
- (id)_paymentCell;
- (id)_cellForPreviewSection;
- (id)_cellForAppealSection;
- (id)_cellForStatusSectionAtRow:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_didTapViewAppeal;
- (void)_didTapAppeal;
- (void)_showAdPreviewForFeedItem:(id)arg1;
- (void)_didConfirmDeleteCurrentAdFromCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_didTapDeleteFromCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_didConfirmResumeCurrentAdFromCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_didTapResumeFromCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_didConfirmPauseCurrentAdFromCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_didTapPauseFromCell:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)_updateNavigationTitleViewWithAdViewModel:(id)arg1;
- (id)_createActionRows;
- (void)_loadAdViewModel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFeedItem:(id)arg1 logger:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
