//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBSDKAccessToken, IGResetPasswordViewController, IGTwoFactorInfo;

@protocol IGResetPasswordDelegate
- (void)resetPasswordController:(IGResetPasswordViewController *)arg1 dismissWithTwoFactorInfo:(IGTwoFactorInfo *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3;
@end

