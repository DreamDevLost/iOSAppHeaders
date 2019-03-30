//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFBandwidthProvider.h"

@class FNFAssetResourceLoader;

@interface FNFDashBandwidthController : NSObject <FNFBandwidthProvider>
{
    struct FNFDashConfig _config;
    id <FNFBandwidthProvider> _bandwidthProvider;
    FNFAssetResourceLoader *_resourceLoader;
}

- (void).cxx_destruct;
- (double)_bandwidthEstimateFromRawEstimate:(double)arg1;
- (double)_bandwidthFraction:(double)arg1;
- (long long)currentReachabilityState;
- (double)downloadLatencyInSecond;
- (unsigned long long)downloadBandwidthQuality;
- (double)bandwidthEstimateBitsPerSecForRequestSizeInBytes:(long long)arg1;
- (double)downloadBandwidthEstimateBitsPerSecond;
- (id)initWithConfig:(struct FNFDashConfig)arg1 bandwidthProvider:(id)arg2 resourceLoader:(id)arg3;

@end

