//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGTrackStabilizerProtocol.h"

@class IGStabilizationHandle, NSData, NSObject<OS_dispatch_queue>, NSString;

@interface IGTrackStabilizer : NSObject <IGTrackStabilizerProtocol>
{
    long long _iterations;
    NSObject<OS_dispatch_queue> *_stabilizationQueue;
    double _maxZoom;
    struct vector<IGOrientationSample, std::__1::allocator<IGOrientationSample>> _cameraOrientations;
    struct vector<boost::qvm::quat<double>, std::__1::allocator<boost::qvm::quat<double>>> _stabilizedFrameOrientations;
    _Bool _motionTrailsVisible;
    _Bool _isOnTripod;
    IGStabilizationHandle *_stabilizationHandle;
    _Bool _canStabilize;
    long long _cameraPosition;
    double _stabilizationZoom;
    NSData *_frameData;
    NSData *_gyroData;
    NSData *_attitudeData;
    long long _frameskipFactor;
    CDStruct_c91b0ade _calibrationParameters;
}

+ (id)identityWarp;
+ (CDStruct_c91b0ade)calibrationParameters:(long long)arg1;
+ (id)_platform;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long frameskipFactor; // @synthesize frameskipFactor=_frameskipFactor;
@property(readonly, nonatomic) NSData *attitudeData; // @synthesize attitudeData=_attitudeData;
@property(readonly, nonatomic) NSData *gyroData; // @synthesize gyroData=_gyroData;
@property(readonly, nonatomic) NSData *frameData; // @synthesize frameData=_frameData;
@property(readonly, nonatomic) double stabilizationZoom; // @synthesize stabilizationZoom=_stabilizationZoom;
@property(readonly, nonatomic) _Bool canStabilize; // @synthesize canStabilize=_canStabilize;
@property(readonly, nonatomic) CDStruct_c91b0ade calibrationParameters; // @synthesize calibrationParameters=_calibrationParameters;
@property(readonly, nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)warpForFrameIndex:(unsigned long long)arg1;
- (id)warpForPresentationTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_d2b197d1)deviceAttitudeForPresentationTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) _Bool motionTrailsVisible;
- (unsigned long long)frameIndexForPresentationTime:(CDStruct_1b6d18a9)arg1;
- (long long)_frameCount;
- (const struct IGFrameSample *)_frameSampleData;
- (void)waitForStabilizationToFinish;
- (void)_stabilize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCameraPosition:(long long)arg1 calibrationParameters:(CDStruct_c91b0ade)arg2 gyroTrack:(id)arg3 frameTrack:(id)arg4 attitudeTrack:(id)arg5 frameSkipFactor:(long long)arg6 maxZoom:(double)arg7 iterations:(long long)arg8;
- (id)initWithCameraPosition:(long long)arg1 gyroTrack:(id)arg2 frameTrack:(id)arg3 attitudeTrack:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

