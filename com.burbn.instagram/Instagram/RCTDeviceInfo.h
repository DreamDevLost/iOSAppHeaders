//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "RCTInvalidating.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTDeviceInfo : NSObject <RCTBridgeModule, RCTInvalidating>
{
    long long _currentInterfaceOrientation;
    RCTBridge *_bridge;
}

+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)_interfaceOrientationDidChange;
- (void)interfaceOrientationDidChange;
- (void)didReceiveNewContentSizeMultiplier;
- (id)getConstants;
- (id)constantsToExport;
- (void)invalidate;
- (void)dealloc;
- (void)setBridge:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

