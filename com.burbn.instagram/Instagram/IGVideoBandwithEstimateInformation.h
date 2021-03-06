//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGVideoBandwithEstimateInformation : NSObject
{
    NSString *_bandwidthEstimatorType;
    double _estimatedAvailableBandwidthInKbps;
}

@property(readonly, nonatomic) double estimatedAvailableBandwidthInKbps; // @synthesize estimatedAvailableBandwidthInKbps=_estimatedAvailableBandwidthInKbps;
@property(readonly, copy, nonatomic) NSString *bandwidthEstimatorType; // @synthesize bandwidthEstimatorType=_bandwidthEstimatorType;
- (void).cxx_destruct;
- (id)initWithBandwidthEstimatorType:(id)arg1 estimatedAvailableBandwidthInKbps:(double)arg2;

@end

