//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRealtimeRoutingRule;

@protocol IGRealtimeServerPayloadHandlerRegistryProtocol <NSObject>
- (void)unregisterServerPayloadHandler:(id <IGRealtimeServerPayloadHandler>)arg1;
- (void)registerServerPayloadHandler:(id <IGRealtimeServerPayloadHandler>)arg1 forRoutingRule:(IGRealtimeRoutingRule *)arg2;
@end
