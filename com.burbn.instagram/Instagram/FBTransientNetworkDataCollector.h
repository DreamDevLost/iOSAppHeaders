//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReachabilityListener.h"
#import "FBTransientDataCollectorInterface.h"

@class FBTransientTigonLigerDataCollector, NSString;

@interface FBTransientNetworkDataCollector : NSObject <FBTransientDataCollectorInterface, FBReachabilityListener>
{
    FBTransientTigonLigerDataCollector *_transientTigonLigerDataCollector;
    struct mutex _operationsLock;
    _Bool _trackingEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterListeners;
- (void)registerListeners;
- (void)startTracking;
- (void)recordNetworkChangeIfRelevant:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)recordConnectionQuality:(unsigned long long)arg1;
- (void)downloadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)stopDataCollection:(id)arg1;
- (void)startDataCollection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
