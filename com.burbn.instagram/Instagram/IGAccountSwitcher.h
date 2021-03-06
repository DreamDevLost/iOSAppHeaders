//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAccountSwitchControlling.h"

@class IGCurrentUserManager, IGLogoutManager, IGMultipleAccountTracker, IGUserSessionEnder, NSString;

@interface IGAccountSwitcher : NSObject <IGAccountSwitchControlling>
{
    unsigned long long _lastAccountSwitchEntryPoint;
    IGCurrentUserManager *_currentUserManager;
    IGMultipleAccountTracker *_multipleAccountTracker;
    IGLogoutManager *_logoutManager;
    IGUserSessionEnder *_userSessionEnder;
    id <IGSessionEndChecking> _endBlocker;
    id <IGOneTapSwitching> _oneTapSwitcher;
}

- (void).cxx_destruct;
- (void)configureWithEndBlocker:(id)arg1;
- (_Bool)canSwitchAccounts;
- (void)_switchToUserWithForce:(id)arg1 authLogInType:(long long)arg2 destinationAppSurface:(id)arg3 entryPoint:(unsigned long long)arg4 notification:(id)arg5;
- (void)switchToNewlyLoggedInUser:(id)arg1 authLogInType:(long long)arg2 notification:(id)arg3;
- (void)switchToNilUserWithEntryPoint:(unsigned long long)arg1;
- (void)switchToLastAccessedUserWithForceDueToAddUserCancel;
- (void)oneTapSwitchToAccount:(id)arg1 entryPoint:(unsigned long long)arg2 surface:(long long)arg3 destinationAppSurface:(id)arg4;
- (void)initiateUserSwitchLogoutUIAnimated:(_Bool)arg1 entryPoint:(unsigned long long)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)switchToLastAccessedUserWithForceDueToCurrentUserLogoutWithEntryPoint:(unsigned long long)arg1;
- (void)switchToUserWithPK:(id)arg1 destinationAppSurface:(id)arg2 entryPoint:(unsigned long long)arg3;
- (void)switchToUser:(id)arg1 destinationAppSurface:(id)arg2 entryPoint:(unsigned long long)arg3;
- (id)initWithCurrentUserManager:(id)arg1 multipleAccountTracker:(id)arg2 logoutManager:(id)arg3 oneTapSwitcher:(id)arg4 userSessionEnder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

