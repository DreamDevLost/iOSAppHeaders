//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBTransientAnalysisUtils : NSObject
{
}

+ (id)getQplLogger;
+ (void)setQuickPerformanceLogger:(id)arg1;
+ (_Bool)isConnectionLevelTracingEnabled;
+ (void)disableConnectionLevelTracing;
+ (void)enableConnectionLevelTracing;
+ (long long)getTraceDataPollPeriodMsConfig;
+ (long long)getMaxTraceDurationMsConfig;
+ (void)cacheTraceDataPollPeriodMsConfig:(long long)arg1;
+ (void)cacheMaxTraceDurationMsConfig:(long long)arg1;
+ (unsigned long long)getCurrentSystemTimeMs;
+ (unsigned long long)getMonotonicTimeNowMs;

@end

