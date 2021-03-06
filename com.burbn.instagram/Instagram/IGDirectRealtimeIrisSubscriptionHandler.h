//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeClientListener.h"
#import "IGRealtimeConnectionStatusListener.h"
#import "IGRealtimeServerPayloadHandler.h"
#import "IGUserSessionObject.h"

@class FBExponentialBackoffTimer, IGDirectRealtimeIrisSubscriptionData, IGDirectRealtimeIrisSubscriptionHandlerListenerAnnouncer, IGDirectRealtimeIrisSubscriptionSuccessRateLogger, IGRealtimeMqttClient, NSString;

@interface IGDirectRealtimeIrisSubscriptionHandler : NSObject <IGRealtimeServerPayloadHandler, IGRealtimeClientListener, IGRealtimeConnectionStatusListener, IGUserSessionObject>
{
    IGDirectRealtimeIrisSubscriptionData *_subscriptionData;
    IGRealtimeMqttClient *_realtimeMqttClient;
    FBExponentialBackoffTimer *_irisConnectBackoffTimer;
    IGDirectRealtimeIrisSubscriptionHandlerListenerAnnouncer *_announcer;
    IGDirectRealtimeIrisSubscriptionSuccessRateLogger *_successRateLogger;
}

- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)realtimeClientDidDisconnect;
- (void)realtimeConnectionStatusDidChange:(long long)arg1;
- (void)handlePayload:(id)arg1;
- (void)_retryIrisSubscriptionUsingBackoffTimer;
- (void)_handleIrisSubscriptionServerError:(id)arg1;
- (void)_handleIrisSubscriptionNetworkError:(id)arg1;
- (void)_handleIrisSubscriptionSuccessWithPayload:(id)arg1;
- (void)_handleIrisSubscriptionResponse:(id)arg1;
- (void)_sendIrisSubscriptionRequestWithReason:(id)arg1 isRetry:(_Bool)arg2;
- (_Bool)_isMqttConnected;
- (void)setIrisSubscriptionData:(id)arg1 resubscribeIfNeeded:(_Bool)arg2;
- (void)dealloc;
- (id)initWithRealtimeMqttClient:(id)arg1 successRateLogger:(id)arg2 backoffTimer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

