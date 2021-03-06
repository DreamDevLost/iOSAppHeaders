//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBLigerSamplingRequestObserver.h"

#import "FBLigerRequestObserver.h"

@interface IGLigerHTTPFlowRequestObserver : FBLigerSamplingRequestObserver <FBLigerRequestObserver>
{
    id <IGNetworkingDeviceAnalyticsLogger> _logger;
}

- (void).cxx_destruct;
- (void)_logFlowForRequest:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 withStatus:(id)arg3 response:(id)arg4 stats:(const struct RequestStats *)arg5;
- (void)request:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 wasCancelledWithEvents:(const vector_31c84f95 *)arg3;
- (void)request:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 failedWithError:(id)arg3 events:(const vector_31c84f95 *)arg4;
- (void)request:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 completedWithResponse:(id)arg3 events:(const vector_31c84f95 *)arg4;
- (void)requestStartedLoading:(id)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2;
- (_Bool)_shouldLigerHTTPLogFlowTime:(const struct FBLigerRequestProperties *)arg1;
- (id)initWithLogger:(id)arg1;

@end

