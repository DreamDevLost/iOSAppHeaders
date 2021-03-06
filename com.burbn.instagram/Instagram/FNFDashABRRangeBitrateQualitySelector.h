//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashQualitySelecting.h"

@class FNFDashPlaylist, NSString;

@interface FNFDashABRRangeBitrateQualitySelector : NSObject <FNFDashQualitySelecting>
{
    FNFDashPlaylist *_playlist;
    struct FNFDashConfig _config;
    id <FNFBandwidthProvider> _bandwidthProvider;
    id <FNFDashQualitySelecting> _fallbackSelector;
}

- (void).cxx_destruct;
- (int)_bandwidthForSequenceIndices:(vector_12bd641b)arg1 representation:(id)arg2;
- (id)_selectQualityForSequenceIndices:(vector_12bd641b)arg1 fromRepresentations:(id)arg2 withAvailableBandwidth:(double)arg3 segmentBasedBitRatesInBps:(id)arg4;
- (id)selectQuality;
- (id)initWithConfig:(struct FNFDashConfig)arg1 playlist:(id)arg2 bandwidthProvider:(id)arg3 fallbackSelector:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

