//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTBridgeModule.h"
#import "RCTTurboModule.h"

@class NSString, _RCTTypedModuleConstants;

@protocol NativeRelayConfigSpec <RCTBridgeModule, RCTTurboModule>
- (_RCTTypedModuleConstants *)getConstants;
- (_RCTTypedModuleConstants *)constantsToExport;
- (void)setSandbox:(NSString *)arg1;
- (void)getSandbox:(void (^)(NSArray *))arg1;
@end

