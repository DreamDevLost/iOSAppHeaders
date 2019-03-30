//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInAppPurchaseDelegate.h"
#import "IGUserSessionObject.h"

@class NSString;

@interface IGInAppPurchaseDelegate : NSObject <FBInAppPurchaseDelegate, IGUserSessionObject>
{
    id <FBInAppPurchaseUserInfoProviderProtocol> _userInfoProvider;
    id <FBInAppPurchaseProductRequesterProtocol> _productRequester;
    id <FBInAppPurchaseCacheProtocol> _cache;
    id <FBInAppPurchaseVerificationHandlerProtocol> _verificationHandler;
    id <FBInAppPurchaseFunnelLoggerProtocol> _funnelLogger;
}

@property(retain, nonatomic) id <FBInAppPurchaseFunnelLoggerProtocol> funnelLogger; // @synthesize funnelLogger=_funnelLogger;
@property(retain, nonatomic) id <FBInAppPurchaseVerificationHandlerProtocol> verificationHandler; // @synthesize verificationHandler=_verificationHandler;
@property(retain, nonatomic) id <FBInAppPurchaseCacheProtocol> cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <FBInAppPurchaseProductRequesterProtocol> productRequester; // @synthesize productRequester=_productRequester;
@property(retain, nonatomic) id <FBInAppPurchaseUserInfoProviderProtocol> userInfoProvider; // @synthesize userInfoProvider=_userInfoProvider;
- (void).cxx_destruct;
- (void)requirePermissionForMockPayment:(CDUnknownBlockType)arg1;
- (id)getBlacklistedBundleIdentifierPrefixes;
- (_Bool)isRunningInTestEnvironment;
- (id)initWithUserInfoProvider:(id)arg1 productRequester:(id)arg2 cache:(id)arg3 verificationHandler:(id)arg4 funnelLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

