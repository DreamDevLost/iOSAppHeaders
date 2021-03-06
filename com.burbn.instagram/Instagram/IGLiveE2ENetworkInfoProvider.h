//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFacecastE2ERadioTechnologyFetcher.h"
#import "FBFacecastE2EReachabilityAnnouncer.h"

@class NSString;

@interface IGLiveE2ENetworkInfoProvider : NSObject <FBFacecastE2ERadioTechnologyFetcher, FBFacecastE2EReachabilityAnnouncer>
{
}

- (id)radioTechnologyOrNoneIfNotInitialized;
- (double)currentDownloadBandwidthEstimate;
- (double)currentLatencyEstimate;
- (unsigned long long)currentLatencyState;
- (unsigned long long)currentDownloadBandwidthState;
- (unsigned long long)currentReachabilityState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

