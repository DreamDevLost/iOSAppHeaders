//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBARAssetModel, FBARAssetsManager, FBAREffectLoggingInfo, FBARRemoteAssetModel, NSError, NSURL;

@protocol FBARAssetsManagerLogging <NSObject>
- (void)abortAllPendingEvents;
- (void)assetsManager:(FBARAssetsManager *)arg1 didFailToFetchAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 failureReason:(NSError *)arg3 instanceId:(unsigned long long)arg4 loggingInfo:(FBAREffectLoggingInfo *)arg5;
- (void)assetsManager:(FBARAssetsManager *)arg1 didSuccessfullyFetchAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 didCancelFetchOfAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 willFetchAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 didFailToDownloadAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 failureReason:(NSError *)arg3 instanceId:(unsigned long long)arg4 loggingInfo:(FBAREffectLoggingInfo *)arg5;
- (void)assetsManager:(FBARAssetsManager *)arg1 didSuccessfullyDownloadAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 downloadedBytes:(unsigned long long)arg3 instanceId:(unsigned long long)arg4 loggingInfo:(FBAREffectLoggingInfo *)arg5;
- (void)assetsManager:(FBARAssetsManager *)arg1 didCancelDownloadOfAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 willDownloadAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 withDownloadPriority:(long long)arg3 instanceId:(unsigned long long)arg4 loggingInfo:(FBAREffectLoggingInfo *)arg5;
- (void)assetsManager:(FBARAssetsManager *)arg1 didFailToMoveAssetToStorageForRemoteModel:(FBARRemoteAssetModel *)arg2 failureReason:(NSError *)arg3 instanceId:(unsigned long long)arg4 loggingInfo:(FBAREffectLoggingInfo *)arg5;
- (void)assetsManager:(FBARAssetsManager *)arg1 didSuccessfullyMoveAssetToStorageForRemoteModel:(FBARRemoteAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 willMoveAssetToStorageForRemoteModel:(FBARRemoteAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 didFailToUnarchiveAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 failureReason:(NSError *)arg3 instanceId:(unsigned long long)arg4 loggingInfo:(FBAREffectLoggingInfo *)arg5;
- (void)assetsManager:(FBARAssetsManager *)arg1 didSuccessfullyUnarchiveAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 willUnarchiveAssetForRemoteModel:(FBARRemoteAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 didRetrieveAssetStorageURL:(NSURL *)arg2 forModel:(FBARAssetModel *)arg3 instanceId:(unsigned long long)arg4 loggingInfo:(FBAREffectLoggingInfo *)arg5;
- (void)assetsManager:(FBARAssetsManager *)arg1 willRetrieveAssetStorageURLForModel:(FBARAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)assetsManager:(FBARAssetsManager *)arg1 didCheckAssetExistenceInStorageForModel:(FBARAssetModel *)arg2 withHit:(_Bool)arg3 instanceId:(unsigned long long)arg4 loggingInfo:(FBAREffectLoggingInfo *)arg5;
- (void)assetsManager:(FBARAssetsManager *)arg1 willCheckAssetExistenceInStorageForModel:(FBARAssetModel *)arg2 instanceId:(unsigned long long)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
@end
