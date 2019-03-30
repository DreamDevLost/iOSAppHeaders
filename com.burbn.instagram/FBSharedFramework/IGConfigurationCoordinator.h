//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGConfigurationCoordinatorProviding.h"
#import "IGUserSessionObject.h"

@class NSString, NSURL;

@interface IGConfigurationCoordinator : NSObject <IGUserSessionObject, IGConfigurationCoordinatorProviding>
{
    NSString *_uniqueIdentifier;
    id <IGExposureLogging> _exposureLogger;
    id <IGConfigurationRequesting> _requester;
    id <IGUserDefaultsProtocol> _overrideStore;
    id <FBTimeMachine> _timeMachine;
    struct IGConfigurationStore _store;
    double _lastRequestTime;
    NSURL *_storageURL;
}

+ (id)coordinatorWithUniqueIdentifier:(id)arg1 networker:(id)arg2 exposureLogger:(id)arg3;
+ (id)sharedDeviceIdentifierCoordinator;
@property(readonly, nonatomic) NSURL *storageURL; // @synthesize storageURL=_storageURL;
@property(readonly, nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)configurationCoordinator;
- (void)readPayloadFromStorageURL;
- (void)updatePayloadWithDictionary:(id)arg1;
- (void)requestAndUpdateConfigurations:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestAndUpdateConfigurationsIfNecessary:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 exposureLogger:(id)arg2 requester:(id)arg3 overrideStore:(id)arg4 timeMachine:(id)arg5 lastRequestTime:(double)arg6 storageURL:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

