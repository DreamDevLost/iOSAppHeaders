//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGRTCCommonBatchedSessionRequest : NSObject
{
    CDUnknownBlockType _requestParamsProvider;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    CDUnknownBlockType _loggingHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType loggingHandler; // @synthesize loggingHandler=_loggingHandler;
@property(readonly, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(readonly, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, nonatomic) CDUnknownBlockType requestParamsProvider; // @synthesize requestParamsProvider=_requestParamsProvider;
- (void).cxx_destruct;
- (id)initWithRequestParamsProvider:(CDUnknownBlockType)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3 loggingHandler:(CDUnknownBlockType)arg4;

@end

