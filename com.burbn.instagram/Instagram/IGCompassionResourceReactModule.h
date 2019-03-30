//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCompassionResourceReactModuleType.h"
#import "NativeCompassionResourceModuleSpec.h"
#import "RCTIGUserSessionModule.h"

@class IGUserSession, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface IGCompassionResourceReactModule : NSObject <NativeCompassionResourceModuleSpec, RCTIGUserSessionModule, IGCompassionResourceReactModuleType>
{
    RCTBridge *_bridge;
    IGUserSession *_userSession;
    id <IGCompassionResourceModuleDelegate> _delegate;
}

+ (const struct RCTMethodInfo *)__rct_export__260;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak id <IGCompassionResourceModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)closeCompassionResource:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end
