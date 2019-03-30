//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession, NSArray, NSError, NSObject<OS_dispatch_queue>, NSString;

@protocol FBCCUConfigurationDelegate <NSObject>
- (void)reportContactUploadProgressWithCompletedBatchCount:(int)arg1 totalBatchCount:(int)arg2;
- (void)reportError:(NSString *)arg1;
- (void)logUploadContactSuccessWithCompletedBatchCount:(int)arg1 totalBatchCount:(int)arg2 batchIndex:(int)arg3 batchRetryCount:(int)arg4;
- (void)logUploadContactFailure:(NSError *)arg1 contactCount:(int)arg2 batchIndex:(int)arg3 batchRetryCount:(int)arg4;
- (void)logAddressBookReadError:(int)arg1;
- (void)logAddressBookReadEmpty;
- (void)logAddressBookNoChange;
- (void)logContactSyncFinished;
- (void)logClientCacheDeletionFailure:(NSError *)arg1;
- (void)logClientCachePersistenceFailureWithContactsCount:(int)arg1;
- (void)logContactSyncFired;
- (int)maxConcurrentBatchCount;
- (int)maxRetryCount;
- (int)batchSize;
- (unsigned long long)schedulingInterval;
- (void)updateCCUServerSetting:(NSString *)arg1;
- (void)closeContactsUploadSessionWithRootHash:(NSString *)arg1 successBlock:(void (^)(_Bool))arg2 errorBlock:(void (^)(NSError *))arg3;
- (void)uploadContactsInBatch:(NSArray *)arg1 batchIndex:(int)arg2 onCompletion:(void (^)(NSError *))arg3;
- (void)uploadPersistedRootHash:(NSString *)arg1 withHashAlgorithm:(NSString *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 onSuccess:(void (^)(FBContactSnapshot *))arg4 onFailure:(void (^)(NSError *))arg5;

@optional
- (id)initWithSession:(FBUserSession *)arg1;
- (void)logCCUBackgroundJobExitedWithReasonNoAppPermission;
- (void)logCCUBackgroundJobExitedWithReasonNoOSPermission;
- (void)logCCUBackgroundJobExitedWithReasonTimeInterval;
- (void)logCCUBackgroundJobStarted;
- (void)logContactsUploadFailedEventWithFailureReason:(NSString *)arg1;
- (void)uploadCCUServerSetting:(NSString *)arg1 osSetting:(_Bool)arg2;
@end

