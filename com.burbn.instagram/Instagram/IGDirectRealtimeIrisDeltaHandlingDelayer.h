//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectRealtimeIrisDeltaHandling.h"

@class IGDirectCache, IGDirectRealtimeIrisDeltaHandler, NSMutableArray;

@interface IGDirectRealtimeIrisDeltaHandlingDelayer : NSObject <IGDirectRealtimeIrisDeltaHandling>
{
    IGDirectRealtimeIrisDeltaHandler *_deltaHandler;
    IGDirectCache *_directCache;
    NSMutableArray *_pendingDeltasAwaitingCacheWarmup;
}

- (void).cxx_destruct;
- (void)_handlePendingDeltasAwaitingCacheWarmup;
- (void)handleIrisDelta:(id)arg1;
- (void)_listenToCacheWarmupIfNeeded;
- (id)initWithDeltaHandler:(id)arg1 directCache:(id)arg2;

@end

