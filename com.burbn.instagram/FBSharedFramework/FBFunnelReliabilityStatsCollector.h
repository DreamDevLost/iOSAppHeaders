//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface FBFunnelReliabilityStatsCollector : NSObject
{
    id <FBFunnelLoggerIntegrationDelegate> _funnelLoggerIntegrationDelegate;
    id <FBReliabilityStatisticsCounterStorage> _counterStorage;
    NSUserDefaults *_userDefaults;
}

@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) id <FBReliabilityStatisticsCounterStorage> counterStorage; // @synthesize counterStorage=_counterStorage;
@property(nonatomic) __weak id <FBFunnelLoggerIntegrationDelegate> funnelLoggerIntegrationDelegate; // @synthesize funnelLoggerIntegrationDelegate=_funnelLoggerIntegrationDelegate;
- (void).cxx_destruct;
- (void)_resetCounterStorageWithOngoingFunnelCount:(int)arg1;
- (id)_reliabilityStatsForCounters:(id)arg1 ongoingFunnelCount:(int)arg2;
- (id)_counterStorageFilePath;
- (void)_flushStatsWithOngoingFunnelCount:(int)arg1;
- (void)maybeFlushStatsWithOngoingFunnelCount:(int)arg1;
- (void)recordFunnelCancel;
- (void)recordFunnelEnd;
- (void)recordFunnelStart;
- (id)initWithFunnelLoggerIntegrationDelegate:(id)arg1;

@end

