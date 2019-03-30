//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSwitchUsersControllerDelegate.h"

@class IGBiometryAuthenticator, IGProfileTitleViewController, IGUserSession, NSString;

@interface IGDirectInboxAccountSwitchingManager : NSObject <IGSwitchUsersControllerDelegate>
{
    IGProfileTitleViewController *_profileTitleViewController;
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    IGBiometryAuthenticator *_biometryAuthenticator;
}

- (void).cxx_destruct;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)arg1;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithIGDeviceBasedLoginAccount:(id)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2;
- (void)hideSwitchControl;
- (id)accountSwitchingTitleViewForViewController:(id)arg1;
- (void)refreshAccountSwitcher;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;
- (_Bool)shouldShowAccountSwitcher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

