//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBusinessSignUpFlowTableViewController.h"

#import "IGBusinessPhoneNumberTextFieldDelegate.h"
#import "IGBusinessTextFieldContainerTableViewCellDelegate.h"
#import "IGCountryCodeViewControllerDelegate.h"
#import "IGDismissableViewController.h"
#import "IGTabSwitcherDelegate.h"

@class IG4BLogger, IGBusinessFlowPrefillInfo, IGBusinessPhoneNumberTextField, IGBusinessSignUpNetworker, IGTextField, NSString;

@interface IGBusinessSignUpContactPointViewController : IGBusinessSignUpFlowTableViewController <IGDismissableViewController, IGTabSwitcherDelegate, IGCountryCodeViewControllerDelegate, IGBusinessPhoneNumberTextFieldDelegate, IGBusinessTextFieldContainerTableViewCellDelegate>
{
    IGBusinessPhoneNumberTextField *_phoneNumberTextField;
    IGTextField *_emailTextField;
    NSString *_email;
    NSString *_phoneNumber;
    NSString *_countryCode;
    long long _contactMethod;
    IGBusinessSignUpNetworker *_networker;
    NSString *_emailErrorMessage;
    NSString *_phoneErrorMessage;
    IG4BLogger *_logger;
    IGBusinessFlowPrefillInfo *_prefillInfo;
    id <IGBusinessSignUpContactPointViewControllerDelegate> _contactPointDelegate;
}

@property(nonatomic) __weak id <IGBusinessSignUpContactPointViewControllerDelegate> contactPointDelegate; // @synthesize contactPointDelegate=_contactPointDelegate;
- (void).cxx_destruct;
- (void)didDismissViewController;
- (id)analyticsModule;
- (void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2;
- (void)businessTextFieldContainerTableViewCellEndedEditing:(id)arg1;
- (void)businessTextFieldContainerTableViewCellReturnPressed:(id)arg1;
- (void)businessTextFieldContainerTableViewCell:(id)arg1 didEnterContent:(id)arg2 isValid:(_Bool)arg3;
- (void)businessPhoneNumberTextFieldDidTapCountryCode:(id)arg1;
- (void)IGTabSwitcher:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (id)titleForNextButton;
- (double)tableViewContentHeight;
- (struct UIEdgeInsets)tableViewPaddingInsets;
- (struct CGSize)customHeaderViewSize;
- (id)customHeaderView;
- (void)_logFinishStepWithContact:(id)arg1;
- (void)_handleEmailValidationError:(id)arg1 orEmailUnavailable:(_Bool)arg2;
- (void)_handleEmailValidationWithValidResponse:(_Bool)arg1 emailAvailable:(_Bool)arg2 suggestedUsernames:(id)arg3 isGDPRRequired:(_Bool)arg4 tosVersion:(id)arg5;
- (void)_handleSMSFailureWithError:(id)arg1;
- (void)_handleSMSConfirmationCode:(id)arg1 isAutoConfirmed:(_Bool)arg2 isGDPRRequired:(_Bool)arg3 tosVersion:(id)arg4;
- (void)_handlePhoneNumberValidation:(id)arg1;
- (void)_updateNextButton;
- (void)_configureCellForEmail:(id)arg1;
- (void)_configureCellForPhoneNumber:(id)arg1;
- (void)_backgroundTapped:(id)arg1;
- (id)_createTabSwitch;
- (void)viewDidLoad;
- (id)initWithNetworker:(id)arg1 prefillInfo:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

