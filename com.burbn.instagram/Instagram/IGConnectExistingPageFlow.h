//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGBusinessConversionPageCreationDelegate.h"
#import "IGBusinessItemSelectionTableViewDelegate.h"
#import "IGDismissableViewController.h"
#import "IGProFBPageCreationViewControllerDelegate.h"

@class IG4BLogger, IGBusinessConversionFacebookPageDataSource, IGBusinessItemSelectionTableViewController, IGBusinessSelectionFlowHeaderView, IGUserSession, NSString, UIBarButtonItem;

@interface IGConnectExistingPageFlow : IGViewController <IGBusinessItemSelectionTableViewDelegate, IGDismissableViewController, IGBusinessConversionPageCreationDelegate, IGProFBPageCreationViewControllerDelegate>
{
    IGBusinessConversionFacebookPageDataSource *_facebookPageDataSource;
    UIBarButtonItem *_defaultRightBarButtonItem;
    IGBusinessSelectionFlowHeaderView *_headerView;
    id <IGBusinessSelectionFlowConfiguration> _config;
    _Bool _isCreatingNewPage;
    id <IGConnectExistingPageFlowDelegate> _delegate;
    IGBusinessItemSelectionTableViewController *_itemSelectionTableViewVC;
    IGUserSession *_userSession;
    IG4BLogger *_logger;
    IG4BLogger *_createOnePageLogger;
    id <IGFBIdentityProvisioning> _provisioner;
}

@property(retain, nonatomic) id <IGFBIdentityProvisioning> provisioner; // @synthesize provisioner=_provisioner;
@property(nonatomic) _Bool isCreatingNewPage; // @synthesize isCreatingNewPage=_isCreatingNewPage;
@property(readonly, nonatomic) IG4BLogger *createOnePageLogger; // @synthesize createOnePageLogger=_createOnePageLogger;
@property(readonly, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGBusinessItemSelectionTableViewController *itemSelectionTableViewVC; // @synthesize itemSelectionTableViewVC=_itemSelectionTableViewVC;
@property(nonatomic) __weak id <IGConnectExistingPageFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_updateRightNavigationItem;
- (void)_handleLinkingErrorPage:(id)arg1 index:(long long)arg2;
- (void)_switchToPageAtIndexIfEligible:(long long)arg1;
- (void)_didTapDonebutton;
- (id)_pageInfoAtIndex:(unsigned long long)arg1;
- (void)_navigateToPageCreation;
- (id)_getPageCreationContext;
- (id)_getViewModelForSwitchPage;
- (void)_pageCreatedWithPageInfo:(id)arg1;
- (void)pageCreationViewController:(id)arg1 didFinishStepWithPageInfo:(id)arg2;
- (void)pageCreationViewControllerDidTapSkip:(id)arg1;
- (void)pageCreationViewController:(id)arg1 didFinishStepWithContext:(id)arg2;
- (void)itemSelectionTableViewControllerDidTapExtraItem:(id)arg1;
- (void)itemSelectionTableViewControllerDidTapContinueButton:(id)arg1;
- (void)itemSelectionTableViewControllerFailedToFetchItems:(id)arg1 error:(id)arg2;
- (void)itemSelectionTableViewControllerDidReceiveItems:(id)arg1;
- (void)itemSelectionTableViewController:(id)arg1 didEndFetchingItems:(id)arg2 oldItems:(id)arg3 andError:(id)arg4;
- (void)itemSelectionTableViewControllerDidStartFetchingItems:(id)arg1;
- (void)_logSubmitErrorForPageAtIndex:(long long)arg1;
- (id)_safePageIdForIndex:(long long)arg1;
- (void)pageSelectionViewControllerDidClickCreateOnePage:(id)arg1 allowUserInteraction:(_Bool)arg2 withURL:(id)arg3;
- (void)_handlePageSwitchFailureWithResponseDictionary:(id)arg1 error:(id)arg2 atIndex:(long long)arg3;
- (void)_handlePageSwitchSuccessWithNewUserDictionary:(id)arg1 page:(id)arg2 atIndex:(long long)arg3;
- (void)_switchToPageAtIndexHelper:(long long)arg1;
- (void)_switchToPageAtIndex:(long long)arg1;
- (void)_updateSelectedIndex:(long long)arg1 OldIndex:(long long)arg2;
- (void)itemSelectionView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (void)didDismissViewController;
- (void)_loadSpinner:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 andLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

