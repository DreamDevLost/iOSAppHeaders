//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "RCTSRWebSocketDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface RCTWebSocketModule : RCTEventEmitter <RCTSRWebSocketDelegate>
{
    NSMutableDictionary *_sockets;
    NSMutableDictionary *_contentHandlers;
    NSObject<OS_dispatch_queue> *_methodQueue;
}

+ (const struct RCTMethodInfo *)__rct_export__1154;
+ (const struct RCTMethodInfo *)__rct_export__1103;
+ (const struct RCTMethodInfo *)__rct_export__1002;
+ (const struct RCTMethodInfo *)__rct_export__951;
+ (const struct RCTMethodInfo *)__rct_export__630;
+ (void)load;
+ (id)moduleName;
- (id)methodQueue;
- (void).cxx_destruct;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)setContentHandler:(id)arg1 forSocketID:(id)arg2;
- (void)close:(id)arg1;
- (void)ping:(id)arg1;
- (void)sendData:(id)arg1 forSocketID:(id)arg2;
- (void)sendBinary:(id)arg1 forSocketID:(id)arg2;
- (void)send:(id)arg1 forSocketID:(id)arg2;
- (void)connect:(id)arg1 protocols:(id)arg2 options:(id)arg3 socketID:(id)arg4;
- (void)invalidate;
- (id)supportedEvents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
