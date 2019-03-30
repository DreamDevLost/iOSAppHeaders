//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBARAssetsStorageProviding.h"

@class NSMutableDictionary, NSString;

@interface IGARAssetsStorageProvider : NSObject <FBARAssetsStorageProviding>
{
    id <IGARAssetsStorageConfiguring> _storageConfiguring;
    NSMutableDictionary *_assetsStoragesPerCacheIdentifiers;
    struct unordered_map<FBARAssetType, std::__1::shared_ptr<facebook::cameracore::ardelivery::IFileCache>, std::__1::hash<FBARAssetType>, std::__1::equal_to<FBARAssetType>, std::__1::allocator<std::__1::pair<const FBARAssetType, std::__1::shared_ptr<facebook::cameracore::ardelivery::IFileCache>>>> _xplatFileCachesByAssetTypes;
    struct mutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_assetsStorageForAssetType:(long long)arg1;
- (void)internalDebugOnly_forceCreateAllCaches;
- (void)removeAllAssetsWithAssetType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)cacheMaxSizeForAssetType:(long long)arg1;
- (shared_ptr_232d0224)xplatStorageForAssetType:(long long)arg1;
- (id)assetsStorageForAssetModel:(long long)arg1;
- (id)initWithStorageConfiguring:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
