//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationEligibleRequestQuerying.h"

@class NSString;

@interface IGDirectMutationEligibleRequestQuerier : NSObject <IGDirectMutationEligibleRequestQuerying>
{
    id <IGDirectMutationRequestStateStoreReading> _requestStateStoreReader;
    id <IGNetworkingConnectionManagerProtocol> _networkConnectionManager;
    _Bool _shouldRequireNetwork;
}

- (void).cxx_destruct;
- (id)_findFirstEligibleJobInQueue:(id)arg1;
- (id)_findAllEligibleJobsFromCache;
- (id)findNextEligibleMutation;
- (id)initWithMutationRequestStateStoreReader:(id)arg1 networkConnectionManager:(id)arg2 shouldRequireNetwork:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

