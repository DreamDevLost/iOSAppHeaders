//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBFunnelRegistry, FBFunnelReliabilityStatsCollector, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUserDefaults;

@interface FBFunnelLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_funnels;
    id <FBFunnelLoggerIntegrationDelegate> _funnelLoggerIntegrationDelegate;
    id <FBFunnelLoggerChangeLogDelegate> _funnelLoggerChangeLogDelegate;
    FBFunnelRegistry *_funnelRegistry;
    FBFunnelReliabilityStatsCollector *_statsCollector;
    NSString *_persistedFunnelPath;
    NSString *_persistedFunnelDirectoryPath;
    _Bool _areFunnelsBeingFlushed;
    _Bool _isPeriodicCheckpointClean;
    NSUserDefaults *_userDefaults;
    _Bool _fbFunnelDataLossEnabled;
    _Bool _fbFunnelBeaconLoggingEnabled;
    _Bool _fbFunnelEndFunnelsOnAppForegroundEnabled;
    _Bool _fbFunnelUploadFunnelsOnPersistenceFailure;
    id <FBFunnelLoggerDecider> _funnelLoggerDecider;
    unsigned long long _fbFunnelMaxTimeoutEnabled;
    unsigned long long _fbFunnelMaxLifetime;
}

+ (id)sharedFunnelLogger;
@property(nonatomic) _Bool fbFunnelUploadFunnelsOnPersistenceFailure; // @synthesize fbFunnelUploadFunnelsOnPersistenceFailure=_fbFunnelUploadFunnelsOnPersistenceFailure;
@property(nonatomic) unsigned long long fbFunnelMaxLifetime; // @synthesize fbFunnelMaxLifetime=_fbFunnelMaxLifetime;
@property(nonatomic) unsigned long long fbFunnelMaxTimeoutEnabled; // @synthesize fbFunnelMaxTimeoutEnabled=_fbFunnelMaxTimeoutEnabled;
@property(nonatomic) _Bool fbFunnelEndFunnelsOnAppForegroundEnabled; // @synthesize fbFunnelEndFunnelsOnAppForegroundEnabled=_fbFunnelEndFunnelsOnAppForegroundEnabled;
@property(nonatomic) _Bool fbFunnelBeaconLoggingEnabled; // @synthesize fbFunnelBeaconLoggingEnabled=_fbFunnelBeaconLoggingEnabled;
@property(nonatomic) _Bool fbFunnelDataLossEnabled; // @synthesize fbFunnelDataLossEnabled=_fbFunnelDataLossEnabled;
@property(nonatomic) __weak id <FBFunnelLoggerDecider> funnelLoggerDecider; // @synthesize funnelLoggerDecider=_funnelLoggerDecider;
- (void).cxx_destruct;
- (_Bool)setRandomTestingPersistedFilePath;
- (id)internalQueue;
- (void)_reportNilFunnelProperties:(id)arg1 funnel:(id)arg2;
- (void)_reportNilValue:(id)arg1 actionName:(id)arg2 funnel:(id)arg3;
- (void)_reportInvalidValueType:(id)arg1 actionName:(id)arg2 funnel:(id)arg3;
- (void)_sendAnalyticsEventForServerSideAggregation:(id)arg1 funnelAction:(id)arg2;
- (void)_endFunnelsOnCheckpointFailure;
- (id)persistedFunnelDirectoryPath;
- (id)persistedFunnelPath;
- (void)_setReadFlagToDirty;
- (void)_setReadFlagToClean;
- (void)_sanitizeLoadedFunnels;
- (void)_loadPersistedFunnels;
- (void)sanitizeLoadedFunnels;
- (void)replayChangelog;
- (void)loadPersistedFunnels;
- (void)loadAndInitFunnels;
- (void)endFunnels:(double)arg1;
- (void)maybeEndFunnelsFromPreviousSession;
- (void)endFunnelsOnTimeout;
- (void)maybeEndFunnelsByPeriodicFlushing:(double)arg1;
- (_Bool)maybeCreatePeriodicCheckpoint;
- (void)handlePeriodicCheckpointingAndFlushing;
- (void)maybeEndFunnelsOnPersistenceFailure;
- (void)removePersistedFileIfExists;
- (void)_persistUnfinishedFunnels;
- (void)_createCheckpoint;
- (void)_handleApplicationDidEnterBackground:(id)arg1 timestamp:(double)arg2;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (int)getFunnelSize:(id)arg1;
- (void)_recordFunnelStatus:(unsigned long long)arg1;
- (void)setUserID:(id)arg1;
- (void)_cancelFunnel:(id)arg1;
- (void)cancelFunnel:(id)arg1;
- (void)cancelFunnelInConcurrentMode:(id)arg1 instanceID:(long long)arg2;
- (void)addFunnelLevelBeaconIdToFunnelEvent:(id)arg1 withFunnelName:(id)arg2;
- (void)maybeAddBeaconIdToFunnelEvent:(id)arg1 withFunnelName:(id)arg2 shouldAddFunnelLevelBeacon:(_Bool)arg3;
- (void)_sendAnalyticsEventForFunnel:(id)arg1;
- (void)_endPseudoFunnel:(id)arg1 timestamp:(double)arg2;
- (void)_endFunnel:(id)arg1 reason:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)endFunnelInConcurrentMode:(id)arg1 instanceID:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)endFunnel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)endFunnel:(id)arg1 timestamp:(double)arg2;
- (void)endFunnel:(id)arg1;
- (void)endFunnelInConcurrentMode:(id)arg1 instanceID:(long long)arg2;
- (void)_addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 actionPayload:(id)arg4 timestamp:(double)arg5;
- (void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 actionPayload:(id)arg4 timestamp:(double)arg5;
- (void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 actionPayload:(id)arg4;
- (void)addActionToFunnelInConcurrentMode:(id)arg1 instanceID:(long long)arg2 actionName:(id)arg3 tag:(id)arg4 actionPayload:(id)arg5;
- (void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3;
- (void)addActionToFunnelInConcurrentMode:(id)arg1 instanceID:(long long)arg2 actionName:(id)arg3 tag:(id)arg4;
- (void)_addPayloadToFunnel:(id)arg1 funnelPayload:(id)arg2 timestamp:(double)arg3;
- (void)addPayloadToFunnel:(id)arg1 funnelPayload:(id)arg2;
- (void)addPayloadToFunnelInConcurrentMode:(id)arg1 instanceID:(long long)arg2 funnelPayload:(id)arg3;
- (void)_addTagToFunnel:(id)arg1 tag:(id)arg2 timestamp:(double)arg3;
- (void)addTagToFunnel:(id)arg1 tag:(id)arg2;
- (void)addTagToFunnelInConcurrentMode:(id)arg1 instanceID:(long long)arg2 tag:(id)arg3;
- (void)_startFunnel:(id)arg1 instanceID:(long long)arg2 funnelKey:(id)arg3 bypassSampling:(_Bool)arg4 startUnixTime:(double)arg5 timestamp:(double)arg6;
- (void)startFunnelInConcurrentMode_DEV_MODE:(id)arg1 instanceID:(long long)arg2;
- (void)startFunnel_DEV_MODE:(id)arg1;
- (void)startFunnel:(id)arg1 startUnixTime:(double)arg2 timestamp:(double)arg3;
- (void)startFunnelInConcurrentMode:(id)arg1 instanceID:(long long)arg2;
- (void)startFunnel:(id)arg1;
- (id)_createNewInstanceForFunnel:(id)arg1 instanceID:(long long)arg2 funnelKey:(id)arg3;
- (id)_getFunnelKeyFromFunnel:(id)arg1 instanceID:(long long)arg2;
- (id)initWithFunnelLoggerIntegrationDelegate:(id)arg1 funnelRegistry:(id)arg2;

@end

