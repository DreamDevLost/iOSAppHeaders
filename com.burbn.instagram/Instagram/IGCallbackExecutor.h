//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNetworkCallbacks.h"

@interface IGCallbackExecutor : NSObject <IGNetworkCallbacks>
{
    CDUnknownBlockType _retryHandler;
    CDUnknownBlockType _cacheHandler;
    CDUnknownBlockType _startHandler;
    CDUnknownBlockType _bytesSentHandler;
    CDUnknownBlockType _responseReceivedHandler;
    CDUnknownBlockType _bytesReceivedHandler;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
}

- (void).cxx_destruct;
- (void)failure:(id)arg1 summary:(id)arg2;
- (void)success:(id)arg1;
- (void)bytesReceived:(const char *)arg1 len:(unsigned long long)arg2 totalBytesExpectedToReceive:(long long)arg3;
- (void)responseReceived:(id)arg1;
- (void)bytesSent:(long long)arg1 totalBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)startHandler;
- (void)cacheHandler:(id)arg1;
- (void)retryHandler:(id)arg1;
- (id)initWithRetryHandler:(CDUnknownBlockType)arg1 cachedResponseHandler:(CDUnknownBlockType)arg2 startHandler:(CDUnknownBlockType)arg3 bytesSentHandler:(CDUnknownBlockType)arg4 responseReceivedHandler:(CDUnknownBlockType)arg5 bytesReceivedHandler:(CDUnknownBlockType)arg6 successHandler:(CDUnknownBlockType)arg7 failureHandler:(CDUnknownBlockType)arg8;

@end

