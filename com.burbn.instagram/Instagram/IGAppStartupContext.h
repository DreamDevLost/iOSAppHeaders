//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDataUsageLogger, IGNetworkDispatcherDelegateManager, IGNetworkTraceAnalyticsLogger, IGSessionManager;

@interface IGAppStartupContext : NSObject
{
    _Bool _didInitializeNetworkCoreStack;
    IGSessionManager *_sessionManager;
    IGDataUsageLogger *_dataUsageLogger;
    IGNetworkDispatcherDelegateManager *_dispatcherDelegateManager;
    IGNetworkTraceAnalyticsLogger *_networkTraceAnalyticsLogger;
}

@property(readonly, nonatomic) IGNetworkTraceAnalyticsLogger *networkTraceAnalyticsLogger; // @synthesize networkTraceAnalyticsLogger=_networkTraceAnalyticsLogger;
@property(readonly, nonatomic) IGNetworkDispatcherDelegateManager *dispatcherDelegateManager; // @synthesize dispatcherDelegateManager=_dispatcherDelegateManager;
@property(readonly, nonatomic) IGDataUsageLogger *dataUsageLogger; // @synthesize dataUsageLogger=_dataUsageLogger;
@property(readonly, nonatomic) IGSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) _Bool didInitializeNetworkCoreStack; // @synthesize didInitializeNetworkCoreStack=_didInitializeNetworkCoreStack;
- (void).cxx_destruct;
- (id)initWithDidInitializeNetworkCoreStack:(_Bool)arg1 sessionManager:(id)arg2 dataUsageLogger:(id)arg3 dispatcherDelegateManager:(id)arg4 networkTraceAnalyticsLogger:(id)arg5;

@end

