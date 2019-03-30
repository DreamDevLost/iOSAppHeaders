//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBusinessSignUpFlowTableViewController.h"

#import "IGBusinessTextFieldContainerTableViewCellDelegate.h"
#import "IGDismissableViewController.h"
#import "IGGDPRConsentNavigationPresenterDelegate.h"

@class IG4BLogger, IGBusinessCoreTextFooterView, IGBusinessSignUpNetworker, IGBusinessSignUpUserInfoModel, IGGDPRConsentNavigationPresenter, IGTextField, IGUserSession, NSString;

@interface IGBusinessSignUpChooseUsernameViewController : IGBusinessSignUpFlowTableViewController <IGBusinessTextFieldContainerTableViewCellDelegate, IGDismissableViewController, IGGDPRConsentNavigationPresenterDelegate>
{
    IGUserSession *_userSession;
    IGTextField *_usernameTextField;
    IGBusinessCoreTextFooterView *_termsFooterView;
    IGBusinessSignUpNetworker *_networker;
    IGBusinessSignUpUserInfoModel *_userInfo;
    IG4BLogger *_logger;
    NSString *_usernameErrorMessage;
    IGGDPRConsentNavigationPresenter *_gdprPresenter;
    _Bool _shouldPresentGDPRParentalConsent;
    id <IGBusinessSignUpViewControllerDelegate> _chooseUsernameDelegate;
    NSString *_gdprState;
    NSString *_tosVersion;
}

@property(copy, nonatomic) NSString *tosVersion; // @synthesize tosVersion=_tosVersion;
@property(copy, nonatomic) NSString *gdprState; // @synthesize gdprState=_gdprState;
@property(nonatomic) __weak id <IGBusinessSignUpViewControllerDelegate> chooseUsernameDelegate; // @synthesize chooseUsernameDelegate=_chooseUsernameDelegate;
- (void).cxx_destruct;
- (void)gdprFinishedWithParentalConsent;
- (void)gdprFinishedNeedParentalConsentWithGDPRState:(id)arg1;
- (void)gdprBlocked;
- (void)gdprFinishedWithGDPRState:(id)arg1;
- (void)didDismissViewController;
- (id)analyticsModule;
- (void)_termsLinkTapped:(id)arg1;
- (id)_currentSelectedValues;
- (void)_didCompleteBusinessSignupWithUserSession:(id)arg1 error:(id)arg2;
- (void)_signUpBusinessUser;
- (void)_startGDPR;
- (void)_handleUsernameValidationWithError:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (id)_bottomButtonsView;
- (id)titleForNextButton;
- (double)tableViewContentHeight;
- (id)headerSubtitle;
- (id)headerTitle;
- (struct UIEdgeInsets)tableViewPaddingInsets;
- (void)businessTextFieldContainerTableViewCellEndedEditing:(id)arg1;
- (void)businessTextFieldContainerTableViewCellReturnPressed:(id)arg1;
- (void)businessTextFieldContainerTableViewCell:(id)arg1 didEnterContent:(id)arg2 isValid:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_footerText;
- (void)_configureUsernameCell:(id)arg1;
- (void)_setupGDPR;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 signUpNetworker:(id)arg2 businessSignUpUserInfoModel:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
