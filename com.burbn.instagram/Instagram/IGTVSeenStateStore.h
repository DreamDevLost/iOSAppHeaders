//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGTVSeenStateStoreListenerAnnouncer, NSMutableDictionary, NSMutableSet, NSString;

@interface IGTVSeenStateStore : NSObject <IGUserSessionObject>
{
    id <IGAPIClient> _networker;
    IGTVSeenStateStoreListenerAnnouncer *_announcer;
    NSMutableDictionary *_mediaIdToSeenDurationMap;
    NSMutableDictionary *_queuedWrites;
    NSMutableSet *_queuedGridImpressions;
    long long _serverRequestToken;
}

- (void).cxx_destruct;
- (void)_updateServer;
- (void)_flushServerUpdateImmediately;
- (void)_scheduleServerUpdate;
- (void)_updateSeenDuration:(double)arg1 forMediaId:(id)arg2;
- (void)_onApplicationWillResignActive:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)updateWithSeenStates:(struct NSDictionary *)arg1;
- (void)recordGridImpressionForMediaId:(id)arg1 shouldFlushImmediately:(_Bool)arg2;
- (void)updateSeenDuration:(double)arg1 forFeedItem:(id)arg2 shouldFlushImmediately:(_Bool)arg3;
- (double)seenDurationForMediaId:(id)arg1;
- (id)initWithNetworker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
