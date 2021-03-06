//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGExperimentSetProtocol.h"
#import "IGFeatureFetcherDelegate.h"
#import "IGUserSessionObject.h"

@class IGFeatureFetcher, NSString;

@interface IGExperimentSet : NSObject <IGUserSessionObject, IGFeatureFetcherDelegate, IGExperimentSetProtocol>
{
    struct IGFeatureMap<IGExperimentParameters> _map;
    IGFeatureFetcher *_fetcher;
    NSString *_uniqueIdentifier;
    id <IGFeaturePersisting> _persister;
    id <IGExposureLogging> _exposureLogger;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)experimentSet;
- (id)fetcher;
- (_Bool)wantsColdStart;
- (id)serverConfigValueForUniverse:(id)arg1;
- (id)serverSideGroupNameForUniverse:(id)arg1;
- (id)valueForUniverse:(id)arg1 parameter:(id)arg2 holdoutUniverse:(id)arg3 holdoutParameter:(id)arg4 expose:(_Bool)arg5;
- (long long)featureFetcher:(id)arg1 resultForPayload:(id)arg2;
- (id)initWithExperimentType:(long long)arg1 uniqueIdentifier:(id)arg2 fetchClock:(id)arg3 persister:(id)arg4 exposureLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

