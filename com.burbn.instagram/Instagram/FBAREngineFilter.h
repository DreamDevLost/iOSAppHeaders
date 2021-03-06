//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBFilter.h"

#import "FBARServiceHostControlling.h"
#import "FBFilterCroppingWithRect.h"
#import "FBFilterNeedsPrepareForRender.h"
#import "FBMultiModeFilter.h"

@class FBAREffectAnalyticsInfo, FBAREngineAsyncAssetLoaderAdapter, FBAREngineController, FBAREngineDebugConfiguration, FBAREngineEffectLifecycleListener, FBARServiceFeedbackListener, FBARServiceHostBase, FBARServiceHostBaseDefaultPermissionsDelegate, FBARServiceHostConfiguration, FBImageFilter, FBSurface, NSDictionary, NSString;

@interface FBAREngineFilter : FBFilter <FBARServiceHostControlling, FBFilterNeedsPrepareForRender, FBFilterCroppingWithRect, FBMultiModeFilter>
{
    NSString *_assetsPath;
    FBAREffectAnalyticsInfo *_effectAnalyticsInfo;
    _Bool _developmentSDKEnabled;
    _Bool _useDedicatedFilterResource;
    FBAREngineController *_engineController;
    FBARServiceHostBase *_serviceHost;
    FBARServiceHostConfiguration *_serviceHostConfiguration;
    FBAREngineDebugConfiguration *_engineDebugConfiguration;
    FBARServiceFeedbackListener *_serviceFeedbackListener;
    FBAREngineEffectLifecycleListener *_effectLifecycleListener;
    FBAREngineAsyncAssetLoaderAdapter *_asyncAssetLoaderAdapter;
    id <FBAREngineAugmentationControllerProviding> _augmentationControllerProvider;
    FBImageFilter *_rotateFilter;
    FBImageFilter *_earlyBypassCopyFilter;
    tmat4x4_fddb9f00 _cameraTextureTransform;
    NSDictionary *_traits;
    FBARServiceHostBaseDefaultPermissionsDelegate *_filterDefaultPermissionsDelegate;
    FBSurface *_tempSurface;
}

@property(readonly, nonatomic) FBARServiceHostBase *serviceHost; // @synthesize serviceHost=_serviceHost;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_createBypassCopyFilter:(_Bool)arg1;
- (void)_updateTraitsForServiceHost:(id)arg1;
- (void)processCommand:(id)arg1;
- (void)updateEffectConstructor;
- (void)setAssetsPath:(id)arg1;
- (_Bool)render:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3 renderingMode:(unsigned long long)arg4;
- (_Bool)render:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)finalizeRendering;
- (void)prepareForRender;
- (id)traits;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (void)setCroppingTextureWithRect:(struct CGRect)arg1 inputSize:(struct CGSize)arg2;
- (unsigned long long)outputPixelFormat;
- (unsigned long long)inputPixelFormat;
- (id)initWithServiceHost:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

