//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBARAssetsStorageProviding <NSObject>
- (void)internalDebugOnly_forceCreateAllCaches;
- (void)removeAllAssetsWithCompletion:(void (^)(NSError *))arg1;
- (id <FBARAssetsStoring>)assetsStorageForAssetModel:(long long)arg1;
@end
