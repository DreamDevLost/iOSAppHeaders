//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "FBARSpeedDataProviderDataInput.h"

@class CLLocationManager, NSString;

@interface FBARSpeedDataProviderDefaultDataInput : NSObject <CLLocationManagerDelegate, FBARSpeedDataProviderDataInput>
{
    CLLocationManager *_locationManager;
    _Bool _running;
    struct mutex _dataProduceBlockMutex;
    CDUnknownBlockType _dataProduceBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopProducingData;
- (void)startProducingData;
@property(copy) CDUnknownBlockType dataProduceBlock; // @synthesize dataProduceBlock=_dataProduceBlock;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

