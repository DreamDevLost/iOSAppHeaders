//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGNavigationController, IGRootViewController, IGTwoFactorInfo, IGUser;

@protocol IGRootRegistrationNavigationControllerProvider <NSObject>
- (void)didRemoveMainAppViewControllerFromRootViewController:(IGRootViewController *)arg1;
- (IGNavigationController *)newRegistrationNavigationControllerForUserSwitchedFrom:(IGUser *)arg1 showOneTapLoginScreenIfPossible:(_Bool)arg2 hideFacebookButton:(_Bool)arg3 createMultipleAccounts:(_Bool)arg4 twoFactorInfo:(IGTwoFactorInfo *)arg5;
@end

