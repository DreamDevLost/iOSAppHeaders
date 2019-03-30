//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class FBCameraCaptureLightSettingsAction, FBCameraExposureSettingsAction, FBCameraFocusSettings, NSString;

@interface FBCameraAction : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_switchToDeviceWithID;
    long long _updateCaptureDevicePosition;
    long long _updateFlashMode;
    struct CGPoint _updateScaledPoint;
    NSString *_updateSessionPreset;
    long long _updateTorchMode;
    double _updateZoomFactor;
    long long _setFrameRate;
    _Bool _setShouldFrontCameraVideoMirrored;
    _Bool _setLowLightModeEnabled;
    long long _setVideoOrientation;
    FBCameraCaptureLightSettingsAction *_setLightSettings;
    FBCameraFocusSettings *_setFocusSettings;
    FBCameraExposureSettingsAction *_setExposureSettings;
}

+ (id)updateZoomFactor:(double)arg1;
+ (id)updateTorchMode:(long long)arg1;
+ (id)updateSessionPreset:(id)arg1;
+ (id)updateScaledPoint:(struct CGPoint)arg1;
+ (id)updateFlashMode:(long long)arg1;
+ (id)updateCaptureDevicePosition:(long long)arg1;
+ (id)toggleCaptureDevicePosition;
+ (id)switchToDeviceWithID:(id)arg1;
+ (id)setVideoOrientation:(long long)arg1;
+ (id)setShouldFrontCameraVideoMirrored:(_Bool)arg1;
+ (id)setLowLightModeEnabled:(_Bool)arg1;
+ (id)setLightSettings:(id)arg1;
+ (id)setFrameRate:(long long)arg1;
+ (id)setFocusSettings:(id)arg1;
+ (id)setExposureSettings:(id)arg1;
- (void).cxx_destruct;
- (void)matchSwitchToDeviceWithID:(CDUnknownBlockType)arg1 toggleCaptureDevicePosition:(CDUnknownBlockType)arg2 updateCaptureDevicePosition:(CDUnknownBlockType)arg3 updateFlashMode:(CDUnknownBlockType)arg4 updateScaledPoint:(CDUnknownBlockType)arg5 updateSessionPreset:(CDUnknownBlockType)arg6 updateTorchMode:(CDUnknownBlockType)arg7 updateZoomFactor:(CDUnknownBlockType)arg8 setFrameRate:(CDUnknownBlockType)arg9 setShouldFrontCameraVideoMirrored:(CDUnknownBlockType)arg10 setLowLightModeEnabled:(CDUnknownBlockType)arg11 setVideoOrientation:(CDUnknownBlockType)arg12 setLightSettings:(CDUnknownBlockType)arg13 setFocusSettings:(CDUnknownBlockType)arg14 setExposureSettings:(CDUnknownBlockType)arg15;

@end
