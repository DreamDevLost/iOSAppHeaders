//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSOperationQueue;

@interface IGStabilizationSampler : NSObject
{
    CMMotionManager *_motionManager;
    NSOperationQueue *_gyroQueue;
    struct OpaqueCMClock *_audioClock;
    struct OpaqueCMClock *_videoClock;
    struct circular_buffer<IGGyroSample, std::__1::allocator<IGGyroSample>> _prerecordedGyroTrack;
    struct vector<IGGyroSample, std::__1::allocator<IGGyroSample>> _gyroTrack;
    struct vector<IGFrameSample, std::__1::allocator<IGFrameSample>> _frameTrack;
    map_2ddb9c91 _attitudeMap;
    struct vector<IGAttitudeSample, std::__1::allocator<IGAttitudeSample>> _attitudeTrack;
    _Bool _isSampling;
}

+ (quat_f7c121b3)_deviceAttitudeForPresentationTime:(CDStruct_1b6d18a9)arg1 inAttitudeMap:(const map_2ddb9c91 *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)deviceAttitudeTrack;
- (id)frameMetadataTrack;
- (id)gyroTrack;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_stopSampling;
- (void)_startSampling;
- (id)init;
- (void)dealloc;

@end

