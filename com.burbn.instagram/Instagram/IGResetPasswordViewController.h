//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGRetroRegistrationSMSVerificationViewControllerDelegate.h"
#import "IGTextFieldDelegate.h"
#import "IGTwoFactorVerificationViewControllerDelegate.h"
#import "IGUserUpdatedListener.h"

@class FBSDKAccessToken, IGAuthenticator, IGInfoView, IGTextField, IGUser, IGUserSession, NSString;

@interface IGResetPasswordViewController : IGGroupedTableViewController <IGRetroRegistrationSMSVerificationViewControllerDelegate, IGTwoFactorVerificationViewControllerDelegate, IGUserUpdatedListener, IGTextFieldDelegate>
{
    IGInfoView *_footerView;
    IGTextField *_passwordField;
    IGTextField *_repeatPasswordField;
    IGUser *_user;
    NSString *_token;
    _Bool _isSwitchingUsers;
    IGAuthenticator *_authenticator;
    _Bool _isSubmitting;
    IGUserSession *_userSession;
    FBSDKAccessToken *_facebookAccessToken;
    id <IGAPIClient> _networker;
    id <IGResetPasswordDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <IGResetPasswordDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(nonatomic) _Bool isSubmitting; // @synthesize isSubmitting=_isSubmitting;
@property(retain, nonatomic) FBSDKAccessToken *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)twoFactorVerificationViewControllerDidTapDismissButton:(id)arg1;
- (void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(_Bool)arg2;
- (void)_logIn;
- (void)_handleLogInWithResponse:(id)arg1 isTwoFactorRequired:(_Bool)arg2 twoFactorInfo:(id)arg3;
- (void)_requestSignIn;
- (void)_signIn;
- (_Bool)_validateMatching;
- (_Bool)_validateLengthAllowZeroLength:(_Bool)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)userWasUpdated:(id)arg1;
- (void)_setUser:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithToken:(id)arg1 user:(id)arg2 facebookAccessToken:(id)arg3 userSession:(id)arg4 networker:(id)arg5 isSwitchingUsers:(_Bool)arg6 authenticator:(id)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

