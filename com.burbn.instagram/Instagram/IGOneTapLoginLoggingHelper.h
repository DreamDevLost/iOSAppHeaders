//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGOneTapLoginLoggingHelper : NSObject
{
}

+ (void)_logEvent:(id)arg1 isLoggingOutAll:(_Bool)arg2;
+ (void)logLogoutAPICalledWithOneTapLoginEnabled:(_Bool)arg1 forUsers:(id)arg2;
+ (void)logOneTapLoginUpsellDialogNotNowButtonTappedWithIsLoggingOutAll:(_Bool)arg1;
+ (void)logOneTapLoginUpsellDialogRememberButtonTappedWithIsLoggingOutAll:(_Bool)arg1;
+ (void)logOneTapLoginUpsellDialogShownWithIsLoggingOutAll:(_Bool)arg1;
+ (void)logSimpleLogoutDialogCancelButtonTapped:(_Bool)arg1;
+ (void)logSimpleLogoutDialogLogoutButtonTapped:(_Bool)arg1;
+ (void)logSimpleLogoutDialogShown:(_Bool)arg1;
+ (void)logLogoutAllTappedWithNumberOfUsers:(long long)arg1;
+ (void)logLogoutTapped;

@end

