//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IGVideoBweLogger : NSObject
{
    unsigned int _numTimesEstimatorUsed[4];
    unsigned int _numEstimateSelections;
    double _estimateInBitsPerSec[4];
    unsigned int _numRequestSizeEstimates;
    NSMutableDictionary *_numPerNetworkSuccessHistoricalBwe;
    unsigned int _numSucessHistoricalBwe;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

- (void).cxx_destruct;
- (void)_logHistoricalEstimateReportForNetwork:(id)arg1 failureType:(id)arg2;
- (void)_logEstimatorDistributionReport;
- (void)_applicationWillResignActive:(id)arg1;
- (void)logHistoricalEstimateWithStatus:(long long)arg1 network:(id)arg2;
- (void)logRequestSizeBasedEstimate:(double)arg1 requestSize:(long long)arg2 latencyEstimate:(double)arg3 onAirThroughputEstimate:(double)arg4 normalEstimate:(double)arg5;
- (void)logRetrievedHistoricalEstimates:(id)arg1;
- (void)logEstimateInBitsPerSec:(double)arg1 estimatorType:(long long)arg2;
- (id)init;

@end

