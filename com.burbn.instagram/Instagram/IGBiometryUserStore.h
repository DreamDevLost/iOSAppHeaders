//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDeviceBasedLoginAccountStore;

@interface IGBiometryUserStore : NSObject
{
    IGDeviceBasedLoginAccountStore *_deviceBasedLoginAccountStore;
}

- (void).cxx_destruct;
- (void)_writeBiometricsEnabled:(_Bool)arg1 forUserPK:(id)arg2;
- (void)_logEventName:(id)arg1 userPK:(id)arg2;
- (struct NSArray *)_biometryLoginEnabledUserPKs;
- (void)migrateBiometrySettingsFromKeychainIfNeededForAccounts:(struct NSArray *)arg1;
- (void)migrateBiometrySettingsToKeychainIfNeeded;
- (void)disableBiometryLoginForUserPK:(id)arg1;
- (_Bool)hasEnabledBiometryLoginForUserPK:(id)arg1;
- (void)enableBiometryLoginForUserPK:(id)arg1;
- (_Bool)hasRejectedBiometryUpsellForUserPK:(id)arg1;
- (void)markRejectedBiometryOptInUpsellWithUserPK:(id)arg1;
- (_Bool)hasRejectedOneTapUpsellForUserPK:(id)arg1;
- (void)markRejectedOneTapUpsellWithUsers:(id)arg1;
- (id)init;

@end
