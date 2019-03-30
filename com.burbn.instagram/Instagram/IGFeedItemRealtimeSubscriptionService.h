//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeServerPayloadHandler.h"
#import "IGUserSessionEndingObject.h"

@class IGFeedItem, IGFeedItemRealtimeSubscriptionData, IGRealtimeMqttClient, NSDate, NSMapTable, NSString;

@interface IGFeedItemRealtimeSubscriptionService : NSObject <IGRealtimeServerPayloadHandler, IGUserSessionEndingObject>
{
    IGFeedItemRealtimeSubscriptionData *_activeSubscription;
    IGFeedItem *_pendingFeedItem;
    _Bool _enabled;
    _Bool _subscribeWhenNotScrolling;
    struct {
        _Bool enableLikeCountUpdate;
        _Bool enableCommentCountUpdate;
        _Bool enableVideoViewCountUpdate;
    } _configuration;
    IGRealtimeMqttClient *_realtimeClient;
    NSMapTable *_feedItemListenerByMediaId;
    NSDate *_lastCallTime;
    double _period;
}

- (void).cxx_destruct;
- (void)_startSubscriptionWithData:(id)arg1;
- (id)_subscriptionDataFromFeedItem:(id)arg1;
- (id)_getSubscriptionTopic:(id)arg1;
- (void)_reset;
- (void)_unsubscribeActiveSubscription;
- (void)_didEnterBackground;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)handlePayload:(id)arg1;
- (void)addListener:(id)arg1 onFeedItem:(id)arg2;
- (void)removeRealtimeSubscriptionForFeedItem:(id)arg1;
- (void)addRealtimeSubscriptionForFeedItem:(id)arg1;
- (void)startSubscriptionIfNeeded;
- (void)dealloc;
- (id)initWithRealtimeClient:(id)arg1 experimentSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
