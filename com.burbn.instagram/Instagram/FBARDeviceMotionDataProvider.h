//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface FBARDeviceMotionDataProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_motionControlQueue;
    shared_ptr_692abb54 _engineDataProvider;
    _Bool attitudeHaveCorrectTimestamps;
    double attitudeTimeOffset;
    _Bool _needsRawData;
    unsigned long long _executionMode;
    double _motionUpdateInterval;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionUpdatesQueue;
}

@property(retain, nonatomic) NSOperationQueue *motionUpdatesQueue; // @synthesize motionUpdatesQueue=_motionUpdatesQueue;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(readonly, nonatomic) double motionUpdateInterval; // @synthesize motionUpdateInterval=_motionUpdateInterval;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleUpdateWithDeviceMotion:(id)arg1 error:(id)arg2;
- (void)_handleRawMagnetometerUpdate:(id)arg1;
- (void)_handleRawGyroUpdate:(id)arg1;
- (void)_handleRawAccelerometerUpdate:(id)arg1;
- (void)_stopMotionUpdatesForLive;
- (void)_startMotionUpdatesForLiveCompletion:(CDUnknownBlockType)arg1;
- (void)stopMotionUpdates;
- (void)startMotionUpdatesWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) shared_ptr_692abb54 engineDataProvider;
- (void)dealloc;
- (void)prepareForEffectWithManifest:(const struct Manifest *)arg1 executionMode:(unsigned long long)arg2 needsRawData:(_Bool)arg3;
- (id)init;

@end

