//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGTwoFactorAuthAppIntroViewControllerDelegate.h"
#import "IGTwoFactorAuthAppSetupViewControllerDelegate.h"
#import "IGTwoFactorBackupCodeViewControllerDelegate.h"
#import "IGTwoFactorCommonHeaderViewDelegate.h"
#import "IGTwoFactorConfirmationCodeViewControllerDelegate.h"
#import "IGTwoFactorEnterPhoneNumberViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGSwitch, IGTwoFactorCommonHeaderView, IGTwoFactorMethodContentView, IGTwoFactorSetupLogger, IGTwoFactorStatusInfo, IGUserSession, NSString, UIActivityIndicatorView, UITableView, UIView;

@interface IGTwoFactorSelectMethodViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGTwoFactorCommonHeaderViewDelegate, IGTwoFactorEnterPhoneNumberViewControllerDelegate, IGTwoFactorConfirmationCodeViewControllerDelegate, IGTwoFactorBackupCodeViewControllerDelegate, IGTwoFactorAuthAppIntroViewControllerDelegate, IGTwoFactorAuthAppSetupViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorSetupLogger *_setupLogger;
    IGTwoFactorStatusInfo *_statusInfo;
    UIView *_headerContainerView;
    IGTwoFactorCommonHeaderView *_headerView;
    IGTwoFactorMethodContentView *_smsContentView;
    IGTwoFactorMethodContentView *_authAppContentView;
    IGTwoFactorMethodContentView *_backupCodeContentView;
    IGSwitch *_smsSwitch;
    IGSwitch *_authAppSwitch;
    UITableView *_tableView;
    UIActivityIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_cancelAuthAppTwoFactor;
- (void)_cancelSMSTwoFactor;
- (void)_requestTwoFactorAuthenticationAppSeeds;
- (void)_requestTwoFactorSMSCode;
- (void)_fetchTwoFactorInfo;
- (void)_refreshView;
- (void)_updateDataWithDictionary:(id)arg1;
- (void)_startConfirmPhoneNumberFlowWithConfirmPhoneManager:(id)arg1;
- (void)_startAddPhoneNumberFlow;
- (void)_updateAuthAppSetting:(_Bool)arg1;
- (void)_updateSMSSetting:(_Bool)arg1;
- (id)_createAuthAppSwitch;
- (id)_createSMSSwitch;
- (id)_backupCodeCellForTableView:(id)arg1;
- (id)_authAppCellForTableView:(id)arg1;
- (id)_smsCellForTableView:(id)arg1;
- (void)_configureContentSubView;
- (void)twoFactorAuthAppSetupViewControllerDidFinishSetupFlow:(id)arg1;
- (void)twoFactorAuthAppIntroViewControllerDidFinishSetupFlow:(id)arg1;
- (void)twoFactorBackupCodeViewControllerDidTapOnBottomButton:(id)arg1;
- (void)twoFactorBackupCodeViewController:(id)arg1 didUpdateBackupCode:(id)arg2;
- (void)twoFactorConfirmationCodeViewControllerRequestChangePhoneNumber:(id)arg1;
- (void)twoFactorConfirmationCodeViewControllerDidFinishSetupFlow:(id)arg1;
- (void)twoFactorEnterPhoneNumberViewController:(id)arg1 didCompletePhoneNumber:(id)arg2 withConfirmPhoneSettings:(id)arg3;
- (void)twoFactorCommonHeaderView:(id)arg1 didTapOnLinkWithURL:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersTabBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 statusInfo:(id)arg2 setupLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

