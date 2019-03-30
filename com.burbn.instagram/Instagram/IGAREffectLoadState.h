//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAREngineEffectLifecycleEffectDescriptor.h"

@class FBAREffectLoggingInfo, FBARRemoteAssetModel, IGAREffectModel, IGAssetModel, NSError, NSString;

@interface IGAREffectLoadState : NSObject <FBAREngineEffectLifecycleEffectDescriptor>
{
    _Bool _preservingCaptureScopeState;
    _Bool _canceledBeforeCompletion;
    IGAREffectModel *_arEffectModel;
    IGAssetModel *_assetModel;
    FBAREffectLoggingInfo *_effectLoggingInfo;
    FBARRemoteAssetModel *_arRemoteAssetModel;
    NSError *_downloadError;
}

@property(nonatomic) _Bool canceledBeforeCompletion; // @synthesize canceledBeforeCompletion=_canceledBeforeCompletion;
@property(readonly, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(readonly, nonatomic) _Bool preservingCaptureScopeState; // @synthesize preservingCaptureScopeState=_preservingCaptureScopeState;
@property(readonly, nonatomic) FBARRemoteAssetModel *arRemoteAssetModel; // @synthesize arRemoteAssetModel=_arRemoteAssetModel;
@property(readonly, nonatomic) FBAREffectLoggingInfo *effectLoggingInfo; // @synthesize effectLoggingInfo=_effectLoggingInfo;
@property(readonly, nonatomic) IGAssetModel *assetModel; // @synthesize assetModel=_assetModel;
@property(readonly, nonatomic) IGAREffectModel *arEffectModel; // @synthesize arEffectModel=_arEffectModel;
- (void).cxx_destruct;
- (void)markDownloadCompletionWithError:(id)arg1 canceled:(_Bool)arg2;
- (id)initWithAREffectAssetModel:(id)arg1 remoteAssetModel:(id)arg2 effectLoggingInfo:(id)arg3 preservingCaptureScopeState:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
