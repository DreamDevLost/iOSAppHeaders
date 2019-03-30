//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeServerPayloadHandlerRegistryProtocol.h"

@class NSMutableDictionary, NSString;

@interface IGRealtimeServerPayloadHandlerRegistry : NSObject <IGRealtimeServerPayloadHandlerRegistryProtocol>
{
    NSMutableDictionary *_topicPrefixToHandlerMapping;
    NSMutableDictionary *_eventToHandlerMapping;
    NSMutableDictionary *_actionToHandlerMapping;
}

- (void).cxx_destruct;
- (void)unregisterServerPayloadHandler:(id)arg1;
- (void)registerServerPayloadHandler:(id)arg1 forRoutingRule:(id)arg2;
- (id)serverPayloadHandlerForPayload:(id)arg1 topic:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

