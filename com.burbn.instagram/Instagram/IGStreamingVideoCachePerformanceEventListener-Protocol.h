//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStreamingVideoCacheRequest, NSDictionary, NSError;

@protocol IGStreamingVideoCachePerformanceEventListener <NSObject>
- (NSDictionary *)summaryDictionaryForRequest:(IGStreamingVideoCacheRequest *)arg1;
- (void)notifyDidCompleteLoadingRequest:(IGStreamingVideoCacheRequest *)arg1 error:(NSError *)arg2;
- (void)notifyDidReceiveBytesForRequest:(IGStreamingVideoCacheRequest *)arg1 numBytes:(long long)arg2 bytesSource:(long long)arg3;
- (void)notifyDidCompleteNetworkRequestForLoadingRequest:(IGStreamingVideoCacheRequest *)arg1 error:(NSError *)arg2;
- (void)notifyDidReceiveResponseToNetworkRequestForLoadingRequest:(IGStreamingVideoCacheRequest *)arg1;
- (void)notifyDidStartNetworkRequestForLoadingRequest:(IGStreamingVideoCacheRequest *)arg1;
- (void)notifyDidQueueNetworkRequestForLoadingRequest:(IGStreamingVideoCacheRequest *)arg1 numBytes:(long long)arg2;
- (void)notifyDidAttachLoadingRequestToExistingRequest:(IGStreamingVideoCacheRequest *)arg1;
- (void)notifyDidStartCacheCheckForLoadingRequest:(IGStreamingVideoCacheRequest *)arg1;
- (void)notifyDidReceiveLoadingRequest:(IGStreamingVideoCacheRequest *)arg1;
- (void)notifyNumCompetingNetworkRequests:(long long)arg1 atStartOfRequest:(IGStreamingVideoCacheRequest *)arg2;
- (void)notifyNumOffscreenVideoRequests:(long long)arg1 atStartOfRequest:(IGStreamingVideoCacheRequest *)arg2;
- (void)notifyNumBytesInCache:(long long)arg1 forRequest:(IGStreamingVideoCacheRequest *)arg2;
@end

