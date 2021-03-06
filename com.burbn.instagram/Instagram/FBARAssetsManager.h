//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBARAssetFetchActionDeduplicator, FBARAssetsManagerCxx, NSObject<OS_dispatch_queue>;

@interface FBARAssetsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    FBARAssetFetchActionDeduplicator *_fetchAssetActionDeduplicator;
    id <FBARAssetsStorageProviding> _storageProvider;
    FBARAssetsManagerCxx *_assetsManagerCxx;
    id <FBARAssetsManagerLogging> _ARAssetsManagerLogging;
}

@property(readonly, nonatomic) id <FBARAssetsManagerLogging> ARAssetsManagerLogging; // @synthesize ARAssetsManagerLogging=_ARAssetsManagerLogging;
- (void).cxx_destruct;
- (id)_assetsStoredForModels:(id)arg1 loggingInfo:(id)arg2;
- (_Bool)_isAssetStoredForModel:(id)arg1 loggingInfo:(id)arg2;
- (_Bool)_areAssetsStoredForModels:(id)arg1 loggingInfo:(id)arg2;
- (void)queryEffectsStorageUsageWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllLocalAssetsFromStoragesWithCompletion:(CDUnknownBlockType)arg1;
- (id)DEPRECATED_AND_UNRELIABLE_localAssetStoragePathForModel:(id)arg1 loggingInfo:(id)arg2;
- (id)fetchAssetsForRemoteModels:(id)arg1 downloadPriority:(long long)arg2 loggingInfo:(id)arg3 callbacksQueue:(id)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithProcessingQueue:(id)arg1 dowloaderProvider:(id)arg2 storageProvider:(id)arg3 fileUnarchiverProvider:(id)arg4 unarchivingTemporaryCacheURL:(id)arg5 fileManager:(id)arg6 logger:(id)arg7 XplatAssetsManagerFactory:(id)arg8;
- (id)missingAssetForRemoteModels:(id)arg1 loggingInfo:(id)arg2;
- (_Bool)areAssetsStoredForRemoteModels:(id)arg1 loggingInfo:(id)arg2;

@end

