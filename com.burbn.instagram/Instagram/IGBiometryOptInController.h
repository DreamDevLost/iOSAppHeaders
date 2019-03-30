//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBiometryUserStore, IGUserSession, LAContext, NSArray;

@interface IGBiometryOptInController : NSObject
{
    IGBiometryUserStore *_biometryStore;
    IGUserSession *_userSession;
    long long _surface;
    LAContext *_laContext;
    NSArray *_currentUsersSortedByAccessTime;
}

- (void).cxx_destruct;
- (void)_logEventName:(id)arg1 errorString:(id)arg2 faceIDSupported:(_Bool)arg3;
- (void)_logEventName:(id)arg1 faceIDSupported:(_Bool)arg2;
- (id)_titleForBiometryType:(long long)arg1;
- (void)_showDialogWithLaContext:(id)arg1 successBlock:(CDUnknownBlockType)arg2 rejectionBlock:(CDUnknownBlockType)arg3;
- (void)_biometryOptInRejectedWithFaceIDSupported:(_Bool)arg1;
- (void)_optIntoBiometricsLoginWithFaceIDSupported:(_Bool)arg1;
- (void)_startBiometricsOptInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startBiometricsOptInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showBiometricsOptInDialogIfNeeded;
- (id)initWithUserSession:(id)arg1 surface:(long long)arg2 currentUsersSortedByAccessTime:(id)arg3;

@end

