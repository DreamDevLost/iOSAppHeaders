//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDataUsageLogger, NSObject<OS_dispatch_queue>;

@interface IGRealtimeNetworkResourceManager : NSObject
{
    IGDataUsageLogger *_dataUsageLogger;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_handleMQTTSentOrRecPayload:(id)arg1;
- (void)_handleMQTTPayload:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithDataUsageLogger:(id)arg1;

@end

