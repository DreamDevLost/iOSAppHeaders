//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPushRegistryDelegate.h"

@class IGAuthenticator, IGPushRegistrationHelper, IGUserSession, NSObject<OS_dispatch_queue>, NSSet, NSString, PKPushRegistry;

@interface IGPushKitService : NSObject <PKPushRegistryDelegate>
{
    IGUserSession *_userSession;
    CDUnknownBlockType _pushHandlingBlock;
    IGAuthenticator *_authenticator;
    PKPushRegistry *_pushRegistry;
    NSSet *_supportedTypes;
    NSObject<OS_dispatch_queue> *_pushKitDelegateQueue;
    IGPushRegistrationHelper *_pushRegistrationHelper;
}

- (void).cxx_destruct;
- (void)_handlePayload:(id)arg1 type:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (_Bool)_isPushKitEnabled;
- (void)_requestPushKitToken;
- (void)_didRegisterNotificationSetting:(id)arg1;
- (id)initWithUserSession:(id)arg1 pushRegistrationHelper:(id)arg2 pushHandlingBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

