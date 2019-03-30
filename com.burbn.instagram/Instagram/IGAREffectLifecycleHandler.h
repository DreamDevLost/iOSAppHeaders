//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAREngineEffectLifecycleDelegate.h"
#import "IGAREffectDownloaderPrefetchDelegate.h"

@class FBAREffectsManagerQPLLogger, FBInspirationEffectAttributionModel, NSString;

@interface IGAREffectLifecycleHandler : NSObject <FBAREngineEffectLifecycleDelegate, IGAREffectDownloaderPrefetchDelegate>
{
    FBAREffectsManagerQPLLogger *_arDeliveryEffectsLogger;
    FBInspirationEffectAttributionModel *_currentAREffectAttribution;
}

@property(readonly, nonatomic) FBInspirationEffectAttributionModel *currentAREffectAttribution; // @synthesize currentAREffectAttribution=_currentAREffectAttribution;
- (void).cxx_destruct;
- (void)didChangeToDifferentEffectFromEffectWithEffectWithDescriptor:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3;
- (void)didRenderFirstFrameForEffectWithDescriptor:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3;
- (void)didFailToLoadEffectWithError:(id)arg1 effectDescriptor:(id)arg2 analyticsIdentifier:(id)arg3 instanceAnalyticsIdentifier:(id)arg4;
- (void)didLoadEffectWithDescriptor:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3 manifest:(shared_ptr_8f3f58d1)arg4 effectAttribution:(shared_ptr_f86b0e66)arg5;
- (void)didExitCamera;
- (void)didStopWhileDownloadingAREffectFromLoadState:(id)arg1;
- (void)didStopAREffectFromLoadState:(id)arg1;
- (void)didCompleteDownloadAREffectFromLoadState:(id)arg1;
- (void)willDownloadAREffectFromLoadState:(id)arg1;
- (void)willLoadAREffect;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
