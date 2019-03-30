//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBARVersionedModelCacheProvider.h"

@class IGARAssetsStorageProvider;

@interface IGARVersionedModelCacheProvider : NSObject <FBARVersionedModelCacheProvider>
{
    IGARAssetsStorageProvider *_storageProvider;
    struct unordered_map<FBARVersionedCapabilities, std::__1::shared_ptr<facebook::cameracore::ardelivery::VersionedModelCacheBase>, std::__1::hash<FBARVersionedCapabilities>, std::__1::equal_to<FBARVersionedCapabilities>, std::__1::allocator<std::__1::pair<const FBARVersionedCapabilities, std::__1::shared_ptr<facebook::cameracore::ardelivery::VersionedModelCacheBase>>>> _versionedModelCachesByCapabilities;
    struct mutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_4fc380b5)getVersionedModelCacheForCapability:(unsigned long long)arg1;
- (id)initWithARAssetsStorageProvider:(id)arg1;

@end

