//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAROpenGLTextureCreatorSource.h"
#import "NSObject.h"

@class FBARLogger, FBARServiceHostConfiguration, FBARServiceHostEffect, FBARSessionRecordingConfiguration;

@protocol FBARServiceHosting <FBAROpenGLTextureCreatorSource, NSObject>
@property(readonly, nonatomic) shared_ref_855019a2 networkClientSource;
@property(readonly, nonatomic) FBARServiceHostEffect *currentEffect;
@property(readonly, nonatomic) FBARSessionRecordingConfiguration *sessionRecordingConfiguration;
@property(readonly, nonatomic) Optional_515d19e0 serviceAnalyticsLogger;
@property(readonly, nonatomic) struct IPluginConfiguration *pluginConfig;
@property(readonly, nonatomic) Optional_933f6e43 bufferPoolStatisticsLogger;
@property(readonly, nonatomic) Optional_cc3bfe46 renderTimeLogger;
@property(readonly, nonatomic) shared_ref_49fe85fd ARClassContext;
@property(readonly, nonatomic) shared_ref_5cdfb9eb experimentConfig;
@property(readonly, nonatomic) shared_ref_c3a6841c engineAnalyticsLogger;
@property(readonly, nonatomic) shared_ptr_2811b282 performanceLogger;
@property(nonatomic) unsigned char optimizationMode;
@property(readonly, nonatomic) shared_ref_f3fa7b41 engineServiceHost;
@property(readonly, nonatomic) id <FBARAnalyticsLogging> analyticsLogger;
@property(readonly, nonatomic) FBARLogger *logger;
- (void)didDetachFromController:(id <FBARServiceHostControlling>)arg1;
- (void)willAttachToController:(id <FBARServiceHostControlling>)arg1;
- (void)didFinishRenderingFrame;
- (void)willStartRenderingFrame;
- (void)resetAllServices;
- (void)updateAudioServiceWithAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 volumeLevel:(float)arg2;
- (void)updateServicesWithPixelBuffer:(struct __CVBuffer *)arg1 bufferPresentationTime:(CDStruct_1b6d18a9)arg2 textureCreator:(id <FBAROpenGLTextureCreating>)arg3 imageMetadata:(const struct ImageMetadata *)arg4 outputSize:(const struct FBAREngineOutputSize *)arg5;
- (void)notifyServicesThatPermissionsAreReadyForEffectWithManifest:(const struct Manifest *)arg1;
- (void)preparePermissionsForEffectWithManifest:(const struct Manifest *)arg1;
- (shared_ref_344acd93)prepareServicesForEffect:(FBARServiceHostEffect *)arg1;
- (void)preloadServicesForConfiguration:(FBARServiceHostConfiguration *)arg1;
@end
