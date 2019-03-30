//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBiometryUserStore, LAContext;

@interface IGBiometryAuthenticator : NSObject
{
    IGBiometryUserStore *_biometryStore;
    LAContext *_laContext;
}

- (void).cxx_destruct;
- (long long)_biometryErrorTypeForErrorCode:(long long)arg1;
- (void)_logEventName:(id)arg1 faceIDSupported:(_Bool)arg2 error:(id)arg3;
- (_Bool)_isBiometricsEnabledOnCurrentDeviceWithLAContext:(id)arg1;
- (void)_showDisabledSettingsDialogWithFaceIDSupported:(_Bool)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)biometricsLoginWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (_Bool)isBiometricsLoginEnabledForUserPK:(id)arg1;
- (id)init;

@end
