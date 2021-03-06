//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBARAssetsManager, FBARModelFetcherToken, NSObject<OS_dispatch_queue>;

@interface FBARModelFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    FBARAssetsManager *_assetsManager;
    id <FBARModelMetadataDownloading> _modelMetadataDownloading;
    id <FBARVersionedModelCacheProvider> _modelCacheProvider;
    long long _modelKey;
    FBARModelFetcherToken *_token;
    id <FBARModelManagerLogging> _ARModelManagerLogging;
}

+ (id)newWithQueue:(id)arg1 assetsManager:(id)arg2 modelManagerLogging:(id)arg3 modelMetadataDownloader:(id)arg4 modelCacheProvider:(id)arg5 modelKey:(long long)arg6;
@property(readonly, nonatomic) id <FBARModelManagerLogging> ARModelManagerLogging; // @synthesize ARModelManagerLogging=_ARModelManagerLogging;
- (void).cxx_destruct;
- (_Bool)_addCachedModels:(struct VersionedModelCacheBase *)arg1 version:(unsigned long long)arg2 modelMetadata:(id)arg3;
- (_Bool)_addExistingModelsInCache:(unsigned long long)arg1 version:(unsigned long long)arg2 modelCache:(struct VersionedModelCacheBase *)arg3 modelMetadata:(id)arg4 error:(id *)arg5;
- (Optional_4d197af4)_addModelsFromCache:(unsigned long long)arg1 minimumVersion:(unsigned long long)arg2 preferredVersion:(unsigned long long)arg3 modelCache:(struct VersionedModelCacheBase *)arg4 resultBuilder:(shared_ptr_4a89f5e9)arg5 error:(id *)arg6;
- (void)_handleAssetsDownloaded:(id)arg1 modelMetadata:(id)arg2 modelCache:(struct VersionedModelCacheBase *)arg3 callbackQueue:(id)arg4 completionCallback:(CDUnknownBlockType)arg5 resultBuilder:(shared_ptr_4a89f5e9)arg6;
- (void)_handleModelMetadataDownloaded:(id)arg1 downloadPriority:(long long)arg2 loggingInfo:(id)arg3 callbackQueue:(id)arg4 progressCallback:(CDUnknownBlockType)arg5 completionCallback:(CDUnknownBlockType)arg6 resultBuilder:(shared_ptr_4a89f5e9)arg7;
- (pair_e764e1ae)_addCachedModelsAndReturnRequests:(id)arg1 resultBuilder:(shared_ptr_4a89f5e9)arg2 error:(id *)arg3;
- (void)_fetchModels:(id)arg1 downloadPriority:(long long)arg2 token:(id)arg3 callbackQueue:(id)arg4 progressCallback:(CDUnknownBlockType)arg5 completionCallback:(CDUnknownBlockType)arg6;
- (id)fetchModels:(id)arg1 downloadPriority:(long long)arg2 callbackQueue:(id)arg3 progressCallback:(CDUnknownBlockType)arg4 completionCallback:(CDUnknownBlockType)arg5;
- (id)initWithQueue:(id)arg1 assetsManager:(id)arg2 modelManagerLogging:(id)arg3 modelMetadataDownloader:(id)arg4 modelCacheProvider:(id)arg5 modelKey:(long long)arg6;

@end

