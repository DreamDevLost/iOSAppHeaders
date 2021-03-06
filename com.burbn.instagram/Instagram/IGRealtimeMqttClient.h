//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeServerPayloadHandlerRegistryProtocol.h"
#import "IGUserSessionEndingObject.h"

@class IGRealtimeClientListenerAnnouncer, IGRealtimeConnectionStatusListenerAnnouncer, IGRealtimeMqttClientLogger, IGRealtimeNetworkResourceManager, IGRealtimeServerPayloadHandlerRegistry, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGRealtimeMqttClient : NSObject <IGRealtimeServerPayloadHandlerRegistryProtocol, IGUserSessionEndingObject>
{
    id <FBMQTTChannelCoordinating> _mqttChannelCoordinator;
    IGRealtimeServerPayloadHandlerRegistry *_serverPayloadHandlerRegistry;
    CDStruct_9527d0dc _clientConfiguration;
    IGRealtimeMqttClientLogger *_mqttClientLogger;
    IGRealtimeClientListenerAnnouncer *_announcer;
    IGRealtimeConnectionStatusListenerAnnouncer *_connectionStatusAnnouncer;
    IGRealtimeNetworkResourceManager *_networkResourceManager;
    NSArray *_topics;
    NSString *_userPK;
    int _connectingCount;
    double _lastConnectionStatusChangeTimestamp;
    NSObject<OS_dispatch_queue> *_mqttCallbackQueue;
    NSString *_clientSessionId;
}

- (void).cxx_destruct;
- (void)_addClientDebugMessageEvent:(id)arg1 messageInfo:(id)arg2;
- (void)_addClientDebugConnectionEvent:(id)arg1 connectionInfo:(id)arg2;
- (void)_addClientDebugSubscriptionEvent:(id)arg1 subscriptionInfo:(id)arg2;
- (id)getRealtimeSubscriptionInputStringForGraphQL:(id)arg1 inputParams:(id)arg2;
- (id)_getPresenceUpdatesSubscription;
- (id)_getDirectTypingSubscription;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)unregisterServerPayloadHandler:(id)arg1;
- (void)registerServerPayloadHandler:(id)arg1 forRoutingRule:(id)arg2;
- (void)sendJSONMessageOnTopic:(id)arg1 payload:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1;
- (void)_handleRealtimeMessage:(id)arg1 topic:(id)arg2 sourceLoggingString:(id)arg3;
- (void)_handleIrisMessage:(id)arg1;
- (void)_handleSkywalkerMessage:(id)arg1;
- (void)_handleGraphQLSubscriptionMessage:(id)arg1;
- (void)_handleRegionHintMessage:(id)arg1;
- (id)_objectFromJsonData:(id)arg1 topic:(id)arg2;
- (id)_objectFromJsonString:(id)arg1 topic:(id)arg2;
- (void)_didEnterBackground;
- (void)_didEnterForeground;
@property(readonly) unsigned long long status;
- (void)disconnectWithReason:(id)arg1;
- (void)connect;
- (void)removeConnectionStatusListener:(id)arg1;
- (void)addConnectionStatusListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_sendJSONMessage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)subUnsubSkywalkerTopics:(id)arg1 subscribeList:(id)arg2 unSubscribeList:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_mqttConnectStatusDidChange:(id)arg1;
- (void)_configureListeners;
- (void)_subscribeToMQTTTopic:(id)arg1 jsonMessageBlock:(CDUnknownBlockType)arg2 encodedMessageBlock:(CDUnknownBlockType)arg3;
- (void)_configureConnectionWithUserPK:(id)arg1 sessionCookieString:(id)arg2 appID:(id)arg3 mqttHost:(id)arg4 sandboxEnabled:(_Bool)arg5 session:(id)arg6;
- (id)initWithUserPK:(id)arg1 sessionCookieString:(id)arg2 appID:(id)arg3 mqttHost:(id)arg4 networkResourceManager:(id)arg5 clientConfiguration:(CDStruct_9527d0dc)arg6 session:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

