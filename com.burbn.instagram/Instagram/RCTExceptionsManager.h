//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTExceptionsManager : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
    id <RCTExceptionsManagerDelegate> _delegate;
    unsigned long long _maxReloadAttempts;
}

+ (const struct RCTMethodInfo *)__rct_export__753;
+ (const struct RCTMethodInfo *)__rct_export__642;
+ (const struct RCTMethodInfo *)__rct_export__431;
+ (const struct RCTMethodInfo *)__rct_export__320;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) unsigned long long maxReloadAttempts; // @synthesize maxReloadAttempts=_maxReloadAttempts;
@property(nonatomic) __weak id <RCTExceptionsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)reportUnhandledException:(id)arg1 stack:(id)arg2;
- (void)updateExceptionMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)reportFatalException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)reportSoftException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

