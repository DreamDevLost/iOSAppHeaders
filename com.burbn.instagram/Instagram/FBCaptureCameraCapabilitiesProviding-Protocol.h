//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol FBCaptureCameraCapabilitiesProviding <NSObject>
@property(readonly, nonatomic) double maxZoomFactor;
@property(readonly, nonatomic) CDStruct_15fe95f0 validExposureValues;
- (_Bool)supportsCaptureSessionPreset:(NSString *)arg1 cameraPosition:(long long)arg2;
- (_Bool)currentDeviceSupportsCaptureSessionPreset:(NSString *)arg1;
- (_Bool)canUpdateCaptureDevicePosition:(long long)arg1;
- (_Bool)isExposureModeSupported:(long long)arg1;
- (_Bool)isFocusModeSupported:(long long)arg1;
- (_Bool)isTorchModeSupported:(long long)arg1;
- (_Bool)isZoomFactorSupported:(double)arg1;
- (double)supportedZoomFactorFromZoomFactor:(double)arg1;
@end
