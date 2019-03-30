//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashQualitySelecting.h"

@class FNFDashPlaylist, FNFDashVideoPlayerMetadata, NSString;

@interface FNFDashABRPlayerSizeQualitySelector : NSObject <FNFDashQualitySelecting>
{
    FNFDashPlaylist *_playlist;
    struct FNFDashConfig _config;
    FNFDashVideoPlayerMetadata *_playerMetadata;
    id <FNFBandwidthProvider> _bandwidthProvider;
    id <FNFDashQualitySelecting> _fallbackSelector;
}

- (void).cxx_destruct;
- (id)_representationsThatFitInPlayerForMultiplier:(double)arg1;
- (id)_selectQualityFromRepresentations:(id)arg1 sequenceIndices:(vector_12bd641b)arg2 withAvailableBandwidth:(double)arg3;
- (id)selectQuality;
- (id)initWithConfig:(struct FNFDashConfig)arg1 playlist:(id)arg2 bandwidthProvider:(id)arg3 playerMetadata:(id)arg4 fallbackSelector:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
