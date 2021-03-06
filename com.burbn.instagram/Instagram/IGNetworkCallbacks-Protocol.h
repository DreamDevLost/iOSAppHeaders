//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGHTTPResponse, IGNetworkRequestSummary, NSError;

@protocol IGNetworkCallbacks
- (void)failure:(NSError *)arg1 summary:(IGNetworkRequestSummary *)arg2;
- (void)success:(IGNetworkRequestSummary *)arg1;
- (void)bytesReceived:(const char *)arg1 len:(unsigned long long)arg2 totalBytesExpectedToReceive:(long long)arg3;
- (void)responseReceived:(IGHTTPResponse *)arg1;
- (void)bytesSent:(long long)arg1 totalBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)startHandler;
- (void)cacheHandler:(id <IGNetworkCachedData>)arg1;
- (void)retryHandler:(IGNetworkRequestSummary *)arg1;
@end

