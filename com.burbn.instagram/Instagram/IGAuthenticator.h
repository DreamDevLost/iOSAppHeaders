//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAccountCreating.h"

@class IGAccountSwitcher, IGAuthNetworker, IGAuthService, IGDeviceBasedLoginAccountStore, IGMultipleAccountTracker, NSString;

@interface IGAuthenticator : NSObject <IGAccountCreating>
{
    id <IGLoginManaging> _loginManager;
    IGAccountSwitcher *_accountSwitching;
    IGAuthNetworker *_authNetworker;
    IGMultipleAccountTracker *_multipleAccountTracker;
    IGAuthService *_authService;
    IGDeviceBasedLoginAccountStore *_deviceBasedLoginAccountStore;
}

- (void).cxx_destruct;
- (id)currentUsersSortedByAccessTime;
- (_Bool)hasMaximumNumberOfAccounts;
- (_Bool)hasLoggedInAccountsAndOneTapLoginEnabledButLoggedOutAccounts;
- (id)continueAsUser;
- (void)_logOneTapLoginTwoFacRequiredForUser:(id)arg1 regStep:(id)arg2 surface:(long long)arg3 isSwitchingAccounts:(_Bool)arg4;
- (void)_logOneTapLoginFailedForUser:(id)arg1 withReason:(id)arg2 regStep:(id)arg3 surface:(long long)arg4 isSwitchingAccounts:(_Bool)arg5;
- (void)_logOneTapLoginSucceededForUser:(id)arg1 regStep:(id)arg2 surface:(long long)arg3 isSwitchingAccounts:(_Bool)arg4;
- (id)_submitSignUpRequest:(id)arg1 isPhoneReg:(_Bool)arg2 smsVerificationCode:(id)arg3 networker:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
- (void)_handleSignUpOrLoginWithResponse:(id)arg1 cookies:(id)arg2 isSwitchingUsers:(_Bool)arg3 facebookAccessToken:(id)arg4 successHandler:(CDUnknownBlockType)arg5;
- (void)createAndSwitchToPageAccountWithRequest:(id)arg1 pageID:(id)arg2 pageName:(id)arg3 pageAccessToken:(id)arg4 facebookAccessToken:(id)arg5 errorParser:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)switchToLastLoggedInUser;
- (_Bool)switchToLoggedInUserPk:(id)arg1 destinationAppSurface:(id)arg2 entryPoint:(unsigned long long)arg3 checkQEIfMatched:(_Bool)arg4;
- (id)submitSignUpRequestWithFacebookAuthHelper:(id)arg1 username:(id)arg2 fbAccessTokenString:(id)arg3 tosVersion:(id)arg4 signUpInfoDict:(id)arg5 isPhoneReg:(_Bool)arg6 smsVerificationCode:(id)arg7 isSwitchingUsers:(_Bool)arg8 facebookAccessToken:(id)arg9 networker:(id)arg10 successHandler:(CDUnknownBlockType)arg11 failureHandler:(CDUnknownBlockType)arg12;
- (void)oneTapLogInToAccount:(id)arg1 entryPoint:(unsigned long long)arg2 isSwitchingAccounts:(_Bool)arg3 regStep:(id)arg4 surface:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)loginWithRequest:(id)arg1 authLogInType:(long long)arg2 facebookAccessToken:(id)arg3 notification:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)loginWithRequest:(id)arg1 userPK:(id)arg2 facebookAccessToken:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)completeFBLogInWithUserDictionary:(id)arg1 cookies:(id)arg2 facebookAccessToken:(id)arg3 authLogInType:(long long)arg4 destinationURL:(id)arg5;
- (id)initWithLoginManager:(id)arg1 accountSwitcher:(id)arg2 multipleAccountTracker:(id)arg3 authService:(id)arg4 authNetworker:(id)arg5 deviceBasedLoginAccountStore:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
