//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKURLOpening.h"
#import "FBSDKWebDialogDelegate.h"

@class FBSDKKeychainStore, FBSDKLoginManagerLogger, NSSet, NSString, UIViewController;

@interface FBSDKLoginManager : NSObject <FBSDKURLOpening, FBSDKWebDialogDelegate>
{
    CDUnknownBlockType _handler;
    FBSDKLoginManagerLogger *_logger;
    long long _state;
    FBSDKKeychainStore *_keychainStore;
    _Bool _usedSFAuthSession;
    NSString *_authType;
    unsigned long long _defaultAudience;
    unsigned long long _loginBehavior;
    UIViewController *_fromViewController;
    NSSet *_requestedPermissions;
}

+ (id)stringForChallenge;
+ (void)renewSystemCredentials:(CDUnknownBlockType)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSSet *requestedPermissions; // @synthesize requestedPermissions=_requestedPermissions;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) unsigned long long loginBehavior; // @synthesize loginBehavior=_loginBehavior;
@property(nonatomic) unsigned long long defaultAudience; // @synthesize defaultAudience=_defaultAudience;
@property(retain, nonatomic) NSString *authType; // @synthesize authType=_authType;
- (void).cxx_destruct;
- (void)setRequestedPermissions:(id)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1;
- (void)validateReauthentication:(id)arg1 withResult:(id)arg2;
- (void)storeExpectedChallenge:(id)arg1;
- (void)logInWithBehavior:(unsigned long long)arg1;
- (void)reauthorizeDataAccess:(CDUnknownBlockType)arg1;
- (void)logInWithPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)logInParametersWithPermissions:(id)arg1 serverConfiguration:(id)arg2;
@property(readonly, copy, nonatomic) NSString *loadExpectedChallenge;
- (void)invokeHandler:(id)arg1 error:(id)arg2;
- (void)determineRecentlyGrantedPermissions:(id *)arg1 recentlyDeclinedPermissions:(id *)arg2 forGrantedPermission:(id)arg3 declinedPermissions:(id)arg4;
- (void)completeAuthentication:(id)arg1 expectChallenge:(_Bool)arg2;
- (void)assertPermissions:(id)arg1;
- (_Bool)isPerformingLogin;
- (_Bool)validateLoginStartState;
- (void)handleImplicitCancelOfLogIn;
- (void)raiseLoginException:(id)arg1;
- (void)logOut;
- (void)reauthorizeDataAccess:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)logInWithPublishPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logInWithReadPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
- (_Bool)isAuthenticationURL:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)canOpenURL:(id)arg1 forApplication:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)performBrowserLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performNativeLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fallbackToNativeBehavior;
- (void)continueSystemLogInWithTokenString:(id)arg1 error:(id)arg2 state:(id)arg3;
- (void)performSystemLogIn;
- (void)beginSystemLogIn;
- (void)webDialogDidCancel:(id)arg1;
- (void)webDialog:(id)arg1 didFailWithError:(id)arg2;
- (void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)performWebLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

