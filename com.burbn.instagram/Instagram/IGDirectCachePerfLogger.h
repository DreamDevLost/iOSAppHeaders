//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPerformanceLogger, IGPerformanceLogger_DEPRECATED;

@interface IGDirectCachePerfLogger : NSObject
{
    IGPerformanceLogger_DEPRECATED *_generalPerfLogger;
    IGPerformanceLogger *_qplLogger;
    id <IGAnalyticsEventLoggingProtocol> _eventLogger;
}

- (void).cxx_destruct;
- (void)markEndWarmupCache;
- (void)annotateWarmupWithThreadsCount:(long long)arg1;
- (void)markWarmupCachePointWithName:(id)arg1;
- (void)markStartWarmupCache;
- (id)startLogRemoveMessage;
- (id)startLogUpdateMessageWithReaction;
- (id)startLogFetchMessage;
- (id)startLogSaveMessage;
- (id)startLogUpdateThreadWithSeenStampMessage;
- (id)startLogUpdateThread;
- (id)startLogRemoveThreads;
- (id)startLogRemoveThread;
- (id)startLogSaveThread;
- (id)startLogSaveThreads;
- (id)initWithEventLogger:(id)arg1;

@end

