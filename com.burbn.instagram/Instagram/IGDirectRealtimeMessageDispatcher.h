//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeServerPayloadHandler.h"
#import "IGUserSessionEndingObject.h"

@class IGRealtimeMqttClient, IGUserSession, NSMutableDictionary, NSString;

@interface IGDirectRealtimeMessageDispatcher : NSObject <IGUserSessionEndingObject, IGRealtimeServerPayloadHandler>
{
    struct _opaque_pthread_mutex_t _operationMappingLock;
    IGUserSession *_userSession;
    NSMutableDictionary *_messageKeyToOperationMapping;
    id <IGDirectAckPayloadParsing> _ackPayloadParser;
    IGRealtimeMqttClient *_realtimeClient;
}

@property(readonly, nonatomic) __weak IGRealtimeMqttClient *realtimeClient; // @synthesize realtimeClient=_realtimeClient;
@property(readonly, nonatomic) id <IGDirectAckPayloadParsing> ackPayloadParser; // @synthesize ackPayloadParser=_ackPayloadParser;
@property(readonly, nonatomic) NSMutableDictionary *messageKeyToOperationMapping; // @synthesize messageKeyToOperationMapping=_messageKeyToOperationMapping;
@property(readonly, nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)handlePayload:(id)arg1;
- (void)_registerAsRealtimeServerPayloadHandler;
- (void)_cleanUp;
- (void)_handleBroadcastResponse:(id)arg1;
- (void)cancelMessageForKey:(id)arg1;
- (void)sendMessage:(id)arg1 messageKey:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithUserSession:(id)arg1 realtimeClient:(id)arg2 ackPayloadParser:(id)arg3;
- (id)initWithUserSession:(id)arg1 realtimeClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

