//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGImageNetworking.h"
#import "IGNetworking.h"

@class IGCacheEfficiencyLogger, IGNetworkTraceSampler, IGNetworkerAppConfiguration, IGNetworkerOperationsListenerAnnouncer, IGUserAgent, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGNetworker : NSObject <IGImageNetworking, IGNetworking>
{
    IGNetworkerAppConfiguration *_appConfiguration;
    id <IGNetworkLayer> _layer;
    id <IGOffProcessNetworking> _offProcessLayer;
    NSMutableArray *_operations;
    IGUserAgent *_userAgent;
    id <IGDataUsageLogging> _dataUsageLogger;
    IGCacheEfficiencyLogger *_cacheEfficiencyLogger;
    IGNetworkTraceSampler *_traceSampler;
    NSObject<OS_dispatch_queue> *_operationsSerialQueue;
    IGNetworkerOperationsListenerAnnouncer *_announcer;
    NSDictionary *_additionalHTTPHeaderFields;
    CDUnknownBlockType _offProcessLayerProvider;
}

+ (id)baseNetworker;
+ (void)configureWithLayer:(id)arg1 dataUsageLogger:(id)arg2 cacheEfficiencyLogger:(id)arg3 traceSampler:(id)arg4 additionalHTTPHeaderFields:(id)arg5;
- (void).cxx_destruct;
- (void)_appendCommonHeadersToRequest:(id)arg1;
- (id)cacheEfficiencyLogger;
- (id)_networkingRequestForURLRequest:(id)arg1 traceConfig:(id)arg2;
- (void)_logDataUsageForRequest:(id)arg1 policy:(id)arg2 summary:(id)arg3;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbackQueue:(id)arg3 retryHandler:(CDUnknownBlockType)arg4 cachedResponseHandler:(CDUnknownBlockType)arg5 startHandler:(CDUnknownBlockType)arg6 bytesSentHandler:(CDUnknownBlockType)arg7 responseReceivedHandler:(CDUnknownBlockType)arg8 bytesReceivedHandler:(CDUnknownBlockType)arg9 successHandler:(CDUnknownBlockType)arg10 failureHandler:(CDUnknownBlockType)arg11;
- (id)startOffProcessRequest:(id)arg1 policy:(id)arg2 requestInfo:(id)arg3;
- (id)startRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
- (id)startRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)setAppConfiguration:(id)arg1;
- (void)cancelAllRequestsWithCancellationIdentifier:(id)arg1;
- (void)_removeOperation:(id)arg1;
- (void)_addOperation:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)operations;
- (void)setOffProcessLayerProvider:(CDUnknownBlockType)arg1;
- (id)initWithAppConfiguration:(id)arg1 layer:(id)arg2 userAgent:(id)arg3 dataUsageLogger:(id)arg4 cacheEfficiencyLogger:(id)arg5 traceSampler:(id)arg6 additionalHTTPHeaderFields:(id)arg7;
- (id)startRequestForURL:(id)arg1 module:(id)arg2 imageFetchPriority:(long long)arg3 callbackQueue:(id)arg4 retryHandler:(CDUnknownBlockType)arg5 startHandler:(CDUnknownBlockType)arg6 responseReceivedHandler:(CDUnknownBlockType)arg7 bytesReceivedHandler:(CDUnknownBlockType)arg8 successHandler:(CDUnknownBlockType)arg9 failureHandler:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

