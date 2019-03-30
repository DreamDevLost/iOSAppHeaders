//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashABRSwitchSmoothing.h"

@class NSString;

@interface FNFDashABRSwitchSmoother : NSObject <FNFDashABRSwitchSmoothing>
{
    int _lastSelectedBitRate;
    int _lastDownswitchBitRate;
    long long _numSamplesSinceLastDownswitch;
    struct FNFDashConfig _config;
}

- (id)filteredRepListFromAvailableList:(id)arg1 fetchSizesInBytes:(id)arg2 bandwidthProvider:(id)arg3;
- (void)selectedRep:(id)arg1 availableReps:(id)arg2;
- (id)initWithConfig:(struct FNFDashConfig)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

