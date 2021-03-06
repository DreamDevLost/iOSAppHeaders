//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNetworkLayer.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGTigonLigerStack : NSObject <IGNetworkLayer>
{
    struct unique_ptr<facebook::tigon::TigonStack, std::__1::default_delete<facebook::tigon::TigonStack>> _tigonStack;
    unsigned int _httpFlowTimeSamplingRate;
    unsigned int _certVerificationSamplingRate;
    CDUnknownBlockType _sandboxProvider;
    unsigned long long _nsInputStreamBufferLimit;
    _Bool _dnsCacheEnabled;
    NSObject<OS_dispatch_queue> *_tigonDelayerQueue;
    unsigned int _flowControlWindowSize;
    _Bool _useHTTP2ForStatic;
    unsigned int _totalReqTimeout;
    unsigned char _http2SessionLimit;
    _Bool _codecHeadroomOptimization;
    id <IGNetworkingDeviceAnalyticsLogger> _logger;
    NSArray *_preconnectList;
    _Bool _fizzEnabled;
    _Bool _tigonIdServiceEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbacks:(id)arg3;
- (id)initWithLogger:(id)arg1 httpFlowTimeSamplingRate:(unsigned int)arg2 certVerificationSamplingRate:(unsigned int)arg3 withDNSCache:(_Bool)arg4 andSandboxProvider:(CDUnknownBlockType)arg5 inputStreamBufferLimit:(unsigned long long)arg6 nonTransientErrorRetryLimit:(unsigned int)arg7 transientErrorRetryLimit:(unsigned int)arg8 retryDelayMin:(unsigned int)arg9 retryDelayMax:(unsigned int)arg10 shutdownErrorRetryDelay:(unsigned long long)arg11 flowControlWindowSize:(unsigned int)arg12 useHTTP2ForStatic:(_Bool)arg13 totalReqTimeout:(unsigned int)arg14 http2SessionLimit:(unsigned char)arg15 codecHeadroomOptimization:(_Bool)arg16 preconnectList:(id)arg17 fizzEnabled:(_Bool)arg18 tigonIdServiceEnabled:(_Bool)arg19;
- (struct TigonService *)_getTigonLigerService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

