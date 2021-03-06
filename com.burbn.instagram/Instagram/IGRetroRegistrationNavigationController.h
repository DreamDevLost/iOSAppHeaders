//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGNavigationController.h"

#import "IGGDPRBlockViewControllerDelegate.h"
#import "IGMultipleUsersRecoverViewControllerDelegate.h"
#import "IGOneTapLoginViewControllerDelegate.h"
#import "IGRecoverCodeVerificationViewControllerDelegate.h"
#import "IGRegistrationFlowCoordinatorDelegate.h"
#import "IGResetPasswordDelegate.h"
#import "IGRetroRegistrationLoginViewControllerDelegate.h"
#import "IGRetroRegistrationSMSVerificationViewControllerDelegate.h"
#import "IGRetroRegistrationSignInHelperViewControllerDelegate.h"
#import "IGRetroRegistrationWelcomeViewControllerDelegate.h"
#import "IGTwoFactorVerificationViewControllerDelegate.h"

@class FBSDKAccessToken, IGAuthenticator, IGContactPointPrefillDataFetcher, IGContinueAsRegistrationConfig, IGFacebookAuthHelper, IGFacebookInfoFetcher, IGNUXLayoutSpec, IGRecoverCodeVerificationContext, IGRegistrationFlowCoordinator, IGRegistrationLogger, IGScopedNetworker, IGTwoFactorInfo, IGVerifyMultipleUsersContext, NSArray, NSDictionary, NSString, UITapGestureRecognizer;

@interface IGRetroRegistrationNavigationController : IGNavigationController <IGOneTapLoginViewControllerDelegate, IGRetroRegistrationWelcomeViewControllerDelegate, IGRetroRegistrationLoginViewControllerDelegate, IGRetroRegistrationSMSVerificationViewControllerDelegate, IGResetPasswordDelegate, IGRetroRegistrationSignInHelperViewControllerDelegate, IGGDPRBlockViewControllerDelegate, IGRecoverCodeVerificationViewControllerDelegate, IGTwoFactorVerificationViewControllerDelegate, IGRegistrationFlowCoordinatorDelegate, IGMultipleUsersRecoverViewControllerDelegate>
{
    long long _currentStep;
    _Bool _isPhoneNumberTaken;
    IGAuthenticator *_authenticator;
    IGFacebookAuthHelper *_fbAuthHelper;
    UITapGestureRecognizer *_tapGesture;
    IGContinueAsRegistrationConfig *_directAppConfig;
    IGRegistrationFlowCoordinator *_registrationFlowCoordinator;
    long long _numberOfGDPRBlocked;
    _Bool _hideFacebookButton;
    IGRegistrationLogger *_logger;
    IGVerifyMultipleUsersContext *_verifyMultipleUsersContext;
    _Bool _isShowingTwoFactorStepOnly;
    IGRecoverCodeVerificationContext *_recoverCodeVerificationContext;
    _Bool _isSwitchingUsers;
    NSDictionary *_facebookMeInfo;
    NSString *_username;
    NSString *_userPK;
    IGTwoFactorInfo *_twoFactorInfo;
    FBSDKAccessToken *_facebookAccessToken;
    NSArray *_cookies;
    IGScopedNetworker *_loggedOutNetworker;
    IGContactPointPrefillDataFetcher *_contactPointPrefillDataFetcher;
    IGFacebookInfoFetcher *_fbInfoFetcher;
    IGNUXLayoutSpec *_layoutSpec;
}

@property(retain, nonatomic) IGNUXLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGFacebookInfoFetcher *fbInfoFetcher; // @synthesize fbInfoFetcher=_fbInfoFetcher;
@property(readonly, nonatomic) IGContactPointPrefillDataFetcher *contactPointPrefillDataFetcher; // @synthesize contactPointPrefillDataFetcher=_contactPointPrefillDataFetcher;
@property(readonly, nonatomic) IGScopedNetworker *loggedOutNetworker; // @synthesize loggedOutNetworker=_loggedOutNetworker;
@property(nonatomic) _Bool isSwitchingUsers; // @synthesize isSwitchingUsers=_isSwitchingUsers;
@property(retain, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) FBSDKAccessToken *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(retain, nonatomic) IGTwoFactorInfo *twoFactorInfo; // @synthesize twoFactorInfo=_twoFactorInfo;
@property(copy, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSDictionary *facebookMeInfo; // @synthesize facebookMeInfo=_facebookMeInfo;
- (void).cxx_destruct;
- (id)_prefillConfig;
- (void)_gdprBlocked;
- (void)_logStepViewLoaded;
- (id)_currentStepString;
- (void)_cleanUpRegInfoInSignInStep;
- (void)_continueToSignInStep;
- (void)_requestsLoginToUsername:(id)arg1 password:(id)arg2;
- (void)_logLandingCreateEvent;
- (long long)preferredStatusBarStyle;
- (void)_startDynamicRegistrationWithFbUserInfo:(id)arg1;
- (void)_continueToSignUpWithBackButton:(_Bool)arg1 skipLandingPage:(_Bool)arg2;
- (void)_continueToSwitchAccountLogInWithBackButton:(_Bool)arg1;
- (void)_handleResetPasswordIntentTarget:(id)arg1;
- (void)_dismissVC;
- (void)_proceedLandingHelperWithShowOneTapLoginScreenIfPossible:(_Bool)arg1 twoFactorInfo:(id)arg2 createMultipleAccounts:(_Bool)arg3;
- (void)_proceedLandingWithShowOneTapLoginScreenIfPossible:(_Bool)arg1 twoFactorInfo:(id)arg2 createMultipleAccounts:(_Bool)arg3;
- (void)registrationCoordinator:(id)arg1 didRequestLoginWithUsername:(id)arg2 password:(id)arg3;
- (void)registrationCoordinatorDidGetBlockedByGDPR:(id)arg1;
- (void)registrationCoordinatorDidQuitRegistrationFlow:(id)arg1;
- (void)gdprBlockVCDidTapOkButton;
- (void)signInHelperViewController:(id)arg1 didRequestRecoverCodeWithContext:(id)arg2;
- (void)signInHelperViewController:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 tosVersion:(id)arg4;
- (void)signInHelperViewController:(id)arg1 resetPasswordWithIntentTarget:(id)arg2;
- (void)signInHelperViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)signInHelperViewControllerDidTapSignUpButton:(id)arg1;
- (void)signInHelperViewControllerDidTapLogInButton:(id)arg1;
- (void)signInHelperViewController:(id)arg1 didTapOnURL:(id)arg2;
- (void)signInHelperViewControllerDidTapBackButton:(id)arg1;
- (void)multipleUsersRecoverVC:(id)arg1 proceedTwoFactorWithInfo:(id)arg2;
- (void)multipleUsersRecoverVCDidTapBackButton:(id)arg1;
- (void)recoverCodeVerificationVC:(id)arg1 didVerifyCodeWithVerifyContext:(id)arg2;
- (void)recoverCodeVerificationVC:(id)arg1 proceedTwoFactorWithInfo:(id)arg2;
- (void)resetPasswordController:(id)arg1 dismissWithTwoFactorInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)twoFactorVerificationViewControllerDidTapDismissButton:(id)arg1;
- (void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(_Bool)arg2;
- (void)loginViewController:(id)arg1 didTapOnLoginHelperButtonWithUsername:(id)arg2;
- (void)loginViewControllerWantsToDismiss:(id)arg1;
- (void)loginViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)loginViewController:(id)arg1 didTapOnURL:(id)arg2;
- (void)loginViewController:(id)arg1 resetPasswordWithIntentTarget:(id)arg2;
- (void)loginViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 tosVersion:(id)arg4;
- (void)loginViewControllerDidTapSwitchAccountButton:(id)arg1;
- (void)loginViewController:(id)arg1 didTapSignUpButtonWithSkipLandingPage:(_Bool)arg2;
- (void)loginViewControllerDidTapGoBackButton:(id)arg1;
- (void)welcomeViewControllerWantsToDismiss:(id)arg1;
- (void)welcomeViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)welcomeViewController:(id)arg1 resetPasswordWithIntentTarget:(id)arg2;
- (void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 tosVersion:(id)arg4;
- (void)welcomeViewControllerDidTapSignUpButton:(id)arg1;
- (void)welcomeViewControllerDidTapHelpButton:(id)arg1;
- (void)welcomeViewControllerDidTapLoginButton:(id)arg1;
- (void)welcomeViewControllerDidGoBackButton:(id)arg1;
- (void)oneTapLoginViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)oneTapLoginViewController:(id)arg1 resetPasswordWithIntentTarget:(id)arg2;
- (void)oneTapLoginViewController:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 tosVersion:(id)arg4;
- (void)oneTapLoginViewControllerProceedTwoFactorWithInfo:(id)arg1 facebookAccessToken:(id)arg2;
- (void)oneTapLoginViewControllerResetPasswordWithIntentTarget:(id)arg1;
- (void)oneTapLoginViewControllerDidTapOnURL:(id)arg1;
- (void)oneTapLoginViewControllerDidTapSignUpButton:(id)arg1;
- (void)oneTapLoginViewControllerDidTapSwitchAccountButton:(id)arg1 withBackButton:(_Bool)arg2;
- (void)oneTapLoginViewControllerWantsToDismiss:(id)arg1;
- (id)_createGDPRBlockViewController;
- (id)_newLoginViewControllerWithBackButton:(_Bool)arg1;
- (void)_logInFromEmail:(id)arg1;
- (void)_continueToUsernameStepWithFBUserInfo:(id)arg1;
- (void)_proceedRegistrationWithFBUserInfo:(id)arg1 facebookAccessToken:(id)arg2;
- (id)_createRecoverCodeVerificationViewController;
- (id)_createMultipleUsersRecoverViewController;
- (id)_createSignInHelperViewController;
- (id)_createTwoFactorVerificationViewController;
- (id)_createSMSVerificationViewController;
- (void)_continueCurrentStep;
- (void)_continueStep:(long long)arg1;
- (long long)_indexOfViewControllerClass:(Class)arg1;
- (void)_didTrippleTap:(id)arg1;
- (void)overrideCurrentStep:(long long)arg1 isTripleTapDismissEnabled:(_Bool)arg2;
- (Class)_viewControllerClassForStep:(long long)arg1;
- (id)_viewControllerForStep:(long long)arg1;
- (id)initWithNetworker:(id)arg1 userSwitchedFrom:(id)arg2 showOneTapLoginScreenIfPossible:(_Bool)arg3 hideFacebookButton:(_Bool)arg4 createMultipleAccounts:(_Bool)arg5 authenticator:(id)arg6 directAppConfig:(id)arg7 twoFactorInfo:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

