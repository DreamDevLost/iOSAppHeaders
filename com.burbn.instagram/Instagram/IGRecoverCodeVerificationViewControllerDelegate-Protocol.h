//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRecoverCodeVerificationViewController, IGTwoFactorInfo, IGVerifyMultipleUsersContext;

@protocol IGRecoverCodeVerificationViewControllerDelegate <NSObject>
- (void)recoverCodeVerificationVC:(IGRecoverCodeVerificationViewController *)arg1 didVerifyCodeWithVerifyContext:(IGVerifyMultipleUsersContext *)arg2;
- (void)recoverCodeVerificationVC:(IGRecoverCodeVerificationViewController *)arg1 proceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg2;
@end

