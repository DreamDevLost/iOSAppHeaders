//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTBridgeModule.h"
#import "RCTTurboModule.h"

@class _RCTTypedModuleConstants;

@protocol NativeAutoUpdaterSpec <RCTBridgeModule, RCTTurboModule>
- (_RCTTypedModuleConstants *)getConstants;
- (_RCTTypedModuleConstants *)constantsToExport;
- (void)clearCurrentUpdate:(void (^)(id))arg1 reject:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)getPendingUpdate:(void (^)(id))arg1 reject:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)reloadReactBundle;
@end

