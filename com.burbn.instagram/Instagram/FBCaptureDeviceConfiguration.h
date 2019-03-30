//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBCameraExposureSettings, FBCameraFocusSettings;

@interface FBCaptureDeviceConfiguration : FBValueObject <NSCopying, NSCoding>
{
    long long _frameRate;
    long long _position;
    long long _flashMode;
    long long _torchMode;
    FBCameraFocusSettings *_focusSettings;
    FBCameraExposureSettings *_exposureSettings;
    double _zoomFactor;
}

@property(readonly, nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(readonly, copy, nonatomic) FBCameraExposureSettings *exposureSettings; // @synthesize exposureSettings=_exposureSettings;
@property(readonly, copy, nonatomic) FBCameraFocusSettings *focusSettings; // @synthesize focusSettings=_focusSettings;
@property(readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
@property(readonly, nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
- (void).cxx_destruct;
- (id)initWithFrameRate:(long long)arg1 position:(long long)arg2 flashMode:(long long)arg3 torchMode:(long long)arg4 focusSettings:(id)arg5 exposureSettings:(id)arg6 zoomFactor:(double)arg7;

@end
