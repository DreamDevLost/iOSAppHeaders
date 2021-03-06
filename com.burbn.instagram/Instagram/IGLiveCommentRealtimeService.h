//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLiveCommentService.h"
#import "IGRealtimeConnectionStatusListener.h"
#import "IGRealtimeServerPayloadHandler.h"

@class IGRealtimeMqttClient, IGUserSession, NSString;

@interface IGLiveCommentRealtimeService : NSObject <IGRealtimeServerPayloadHandler, IGRealtimeConnectionStatusListener, IGLiveCommentService>
{
    IGUserSession *_userSession;
    IGRealtimeMqttClient *_mqttClient;
    NSString *_broadcastId;
    NSString *_currentSubscription;
    id <IGLiveCommentServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLiveCommentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handlePayload:(id)arg1;
- (void)realtimeConnectionStatusDidChange:(long long)arg1;
- (void)updateWithQueueSize:(unsigned long long)arg1;
- (void)_makeSubscription;
- (void)stop;
- (void)start;
- (id)initWithUserSession:(id)arg1 broadcastId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

