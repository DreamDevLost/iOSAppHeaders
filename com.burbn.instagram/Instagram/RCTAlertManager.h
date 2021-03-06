//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "RCTInvalidating.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTAlertManager : NSObject <RCTBridgeModule, RCTInvalidating>
{
    NSHashTable *_alertControllers;
}

+ (const struct RCTMethodInfo *)__rct_export__640;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)alertWithArgs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)invalidate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

