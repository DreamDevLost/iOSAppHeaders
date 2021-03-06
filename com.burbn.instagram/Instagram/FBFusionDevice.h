//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, NSDictionary, NSObject<OS_dispatch_queue>;

@interface FBFusionDevice : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct FusionSettings _settings;
    shared_ptr_6158b9b6 _fusion;
    struct shared_ptr<facebook::cp::fusion::util::DispatchWorker> _worker;
    struct mutex _lock;
    struct __CVOpenGLESTextureCache *_textureCache;
    _Bool _lowPowerMode;
    struct OpaqueCMClock *_captureClock;
    struct OpaqueCMClock *_masterClock;
    EAGLContext *_openGLContext;
    id <FBFusionFrameMetadataProvider> _metadataProvider;
    unsigned long long _autoEnhanceMode;
    unsigned long long _maxStillCaptureFrames;
    id <FBFusionStillCaptureDelegate> _stillCaptureDelegate;
}

@property(nonatomic) __weak id <FBFusionStillCaptureDelegate> stillCaptureDelegate; // @synthesize stillCaptureDelegate=_stillCaptureDelegate;
@property(nonatomic) _Bool lowPowerMode; // @synthesize lowPowerMode=_lowPowerMode;
@property(nonatomic) unsigned long long maxStillCaptureFrames; // @synthesize maxStillCaptureFrames=_maxStillCaptureFrames;
@property(nonatomic) unsigned long long autoEnhanceMode; // @synthesize autoEnhanceMode=_autoEnhanceMode;
@property(nonatomic) __weak id <FBFusionFrameMetadataProvider> metadataProvider; // @synthesize metadataProvider=_metadataProvider;
@property(readonly, nonatomic) EAGLContext *openGLContext; // @synthesize openGLContext=_openGLContext;
@property(retain, nonatomic) struct OpaqueCMClock *masterClock; // @synthesize masterClock=_masterClock;
@property(retain, nonatomic) struct OpaqueCMClock *captureClock; // @synthesize captureClock=_captureClock;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *statistics;
@property(readonly, nonatomic) unsigned long long status;
- (void)_stillCapturePreviewAvailable:(struct CaptureResult)arg1;
- (void)_takeStillCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasFusion;
- (void)takeStillCaptureInPixelBufferWithCompletion:(CDUnknownBlockType)arg1;
- (void)takeStillCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)registerMotion:(id)arg1;
- (_Bool)registerFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)_setupFusion;
@property(nonatomic) float verticalFieldOfViewRadians;
@property(nonatomic) unsigned long long devicePosition;
- (void)reset;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 maximumSamples:(long long)arg2;
- (shared_ptr_6158b9b6)fusion;

@end

