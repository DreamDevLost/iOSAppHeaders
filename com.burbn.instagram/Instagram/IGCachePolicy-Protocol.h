//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCacheMetadata, IGHTTPResponse, NSError;

@protocol IGCachePolicy <NSObject>
- (_Bool)shouldCacheDataFromResponse:(IGHTTPResponse *)arg1;
- (void)requestFinishedWithError:(NSError *)arg1;
- (void)requestCompletedSuccessfullyWithResponse:(IGHTTPResponse *)arg1;
- (unsigned long long)requestStartedWithCacheUnlockHandler:(void (^)(void))arg1;
- (IGCacheMetadata *)metadata;
@end

