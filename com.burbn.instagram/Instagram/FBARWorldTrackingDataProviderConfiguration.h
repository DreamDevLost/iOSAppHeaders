//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBARServiceConfiguration.h"
#import "FBARServiceConfigurationCxx.h"
#import "IGLoadMoreResponseType.h"
#import "NSCopying.h"

@class NSString;

@interface FBARWorldTrackingDataProviderConfiguration : NSObject <IGLoadMoreResponseType, FBARServiceConfiguration, FBARServiceConfigurationCxx, NSCopying>
{
    _Bool _SLAMCapable;
    _Bool _exposureControlEnabled;
    _Bool _useSimilarityTrackerForScaling;
    _Bool _setScaleByARClass;
    id <FBARWorldTrackingDataProviderEffectDescriptor> _effectDescriptor;
    id <FBARWorldTrackingDataProviderDelegate> _delegate;
    double _cameraDistortion1;
    double _cameraDistortion2;
    double _cameraFocalLength;
    double _cameraPrincipalPointX;
    double _cameraPrincipalPointY;
    NSString *_SLAMConfigurationParameters;
    id <FBARCameraSLAMControlling> _cameraSLAMController;
}

+ (struct ServiceType)serviceType;
+ (_Bool)supportsSecureCoding;
+ (id)newConfigurationCameraDistortion1:(double)arg1 cameraDistortion2:(double)arg2 cameraFocalLength:(double)arg3 cameraPrincipalPointX:(double)arg4 cameraPrincipalPointY:(double)arg5 SLAMCapable:(_Bool)arg6 SLAMConfigurationParameters:(id)arg7 exposureControlEnabled:(_Bool)arg8 effectDescriptor:(id)arg9 delegate:(id)arg10 cameraSLAMController:(id)arg11 useSimilarityTrackerForScaling:(_Bool)arg12 setScaleByARClass:(_Bool)arg13;
+ (id)newConfigurationCameraDistortion1:(double)arg1 cameraDistortion2:(double)arg2 cameraFocalLength:(double)arg3 cameraPrincipalPointX:(double)arg4 cameraPrincipalPointY:(double)arg5 SLAMCapable:(_Bool)arg6 SLAMConfigurationParameters:(id)arg7 exposureControlEnabled:(_Bool)arg8 useSimilarityTrackerForScaling:(_Bool)arg9 setScaleByARClass:(_Bool)arg10;
@property(readonly, nonatomic) _Bool setScaleByARClass; // @synthesize setScaleByARClass=_setScaleByARClass;
@property(readonly, nonatomic) _Bool useSimilarityTrackerForScaling; // @synthesize useSimilarityTrackerForScaling=_useSimilarityTrackerForScaling;
@property(readonly, nonatomic) __weak id <FBARCameraSLAMControlling> cameraSLAMController; // @synthesize cameraSLAMController=_cameraSLAMController;
@property(readonly, nonatomic, getter=isExposureControlEnabled) _Bool exposureControlEnabled; // @synthesize exposureControlEnabled=_exposureControlEnabled;
@property(readonly, copy, nonatomic) NSString *SLAMConfigurationParameters; // @synthesize SLAMConfigurationParameters=_SLAMConfigurationParameters;
@property(readonly, nonatomic, getter=isSLAMCapable) _Bool SLAMCapable; // @synthesize SLAMCapable=_SLAMCapable;
@property(readonly, nonatomic) double cameraPrincipalPointY; // @synthesize cameraPrincipalPointY=_cameraPrincipalPointY;
@property(readonly, nonatomic) double cameraPrincipalPointX; // @synthesize cameraPrincipalPointX=_cameraPrincipalPointX;
@property(readonly, nonatomic) double cameraFocalLength; // @synthesize cameraFocalLength=_cameraFocalLength;
@property(readonly, nonatomic) double cameraDistortion2; // @synthesize cameraDistortion2=_cameraDistortion2;
@property(readonly, nonatomic) double cameraDistortion1; // @synthesize cameraDistortion1=_cameraDistortion1;
@property(readonly, nonatomic) __weak id <FBARWorldTrackingDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <FBARWorldTrackingDataProviderEffectDescriptor> effectDescriptor; // @synthesize effectDescriptor=_effectDescriptor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) Optional_f0f72821 engineServiceConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCameraDistortion1:(double)arg1 cameraDistortion2:(double)arg2 cameraFocalLength:(double)arg3 cameraPrincipalPointX:(double)arg4 cameraPrincipalPointY:(double)arg5 SLAMCapable:(_Bool)arg6 SLAMConfigurationParameters:(id)arg7 exposureControlEnabled:(_Bool)arg8 effectDescriptor:(id)arg9 delegate:(id)arg10 cameraSLAMController:(id)arg11 useSimilarityTrackerForScaling:(_Bool)arg12 setScaleByARClass:(_Bool)arg13;
- (id)maxId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
