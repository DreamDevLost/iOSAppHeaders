//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGExponentMovingAverageCalculator;

@interface IGPayloadBasedBandwidthEstimator : NSObject
{
    IGExponentMovingAverageCalculator *_movingAvgCalculator;
    double _minMeasurementThreshold;
    double _lastBandwidthCalculated;
    unsigned long long _numberOfOngoingDownloads;
    double _intervalStartTime;
    double _intervalGap;
    double _bytesRecieved;
    struct mutex _mutex;
}

+ (_Bool)_shouldEvaluateRequestBandwidthWithPolicy:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addBandwidthMeasurement:(double)arg1;
- (double)lastBandwidthCalculated;
- (void)addBytesReceived:(long long)arg1 time:(double)arg2 requestPolicy:(id)arg3;
- (void)endRecordingWithEndTime:(double)arg1 requestPolicy:(id)arg2;
- (void)beginDownloadingTime:(double)arg1 requestPolicy:(id)arg2;
- (id)initWithConfiguation:(CDStruct_4562051d)arg1;

@end
