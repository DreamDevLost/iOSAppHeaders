//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCCGestureCaptureController, FBCaptureCoordinatorBase, FBCaptureCoordinatorFilter, FBCaptureCoordinatorFilterResourcesManager, FBCaptureCoordinatorLogger, FBMPCameraInfoInput, FBMPCaptureEventInput, FBMPRenderer, FBMPSession, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@protocol FBCaptureCoordinatorSubclassProtocol <NSObject>
@property(readonly, nonatomic) FBCCGestureCaptureController *gestureCaptureController;
@property(readonly, nonatomic) id <FBMPInput> worldTrackingDataInput;
@property(readonly, nonatomic) FBMPCaptureEventInput *captureEventInput;
@property(readonly, nonatomic) FBMPCameraInfoInput *cameraInfoInput;
@property(readonly, copy, nonatomic) NSString *sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property(readonly, nonatomic) FBMPSession *mediaSession;
@property(readonly, nonatomic) FBCaptureCoordinatorFilterResourcesManager *filterResourcesManager;
@property(readonly, nonatomic) id <FBCaptureCoordinatorFilterFactoryProtocol> filterFactory;
@property(readonly, nonatomic) id <FBMPFilter> filterAudioRenderer;
@property(readonly, nonatomic) FBMPRenderer *filterRenderer;
@property(readonly, nonatomic) FBCaptureCoordinatorFilter *currentAudioFilter;
@property(readonly, copy, nonatomic) NSArray *currentFilters;
- (id <FBMPOutput>)audioFilterChainOutput;
- (id <FBMPInput>)audioFilterChainInput;
- (id <FBMPOutput>)videoFilterChainOutput;
- (id <FBMPInput>)videoFilterChainInput;
- (id <FBMPFilter>)lastFilter;
- (id <FBMPFilter>)firstFilter;
- (void)filterTopologyDidChange;
- (NSDictionary *)requiredFilterResourcesForFilterWithName:(NSString *)arg1;
- (void)logCurrentFilterPerformanceWithReason:(NSString *)arg1 parameters:(NSDictionary *)arg2;
- (void)disconnectSession;
- (id)initWithCaptureCoordinator:(FBCaptureCoordinatorBase *)arg1;
- (id)initWithFilterFactory:(id <FBCaptureCoordinatorFilterFactoryProtocol>)arg1 captureCoordinatorLogger:(FBCaptureCoordinatorLogger *)arg2 experimentConfiguration:(id <FBCCExperimentConfiguring>)arg3;
@end

