//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBARAssetIdentifier, NSObject<OS_dispatch_queue>;

@protocol FBARAssetsStoring <NSObject>
- (void)queryUsageWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(unsigned long long))arg2;
- (void)removeAllAssetsWithCompletion:(void (^)(NSError *))arg1;
- (_Bool)isAssetStoredForIdentifier:(FBARAssetIdentifier *)arg1;
- (void)storedAssetFileResourceForIdentifier:(FBARAssetIdentifier *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(FBARAssetIdentifier *, id <FBARAssetFileResource>, NSError *))arg3;
- (void)moveAssetWithIdentifierIntoStorage:(FBARAssetIdentifier *)arg1 fromLocalFileResource:(id <FBARAssetFileResource>)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(FBARAssetIdentifier *, id <FBARAssetFileResource>, NSError *))arg4;
@end

