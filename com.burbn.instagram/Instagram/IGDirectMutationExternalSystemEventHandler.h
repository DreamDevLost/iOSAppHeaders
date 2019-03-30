//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectCacheListener.h"
#import "IGDirectRealtimeServiceListener.h"

@class IGDirectMutationBackgroundTaskScheduler, IGDirectMutationNetworkStatusChangeHandler, IGDirectMutationRequestAppSuspensionLogger, IGDirectMutationRequestInitiator, IGUserSession, NSNotificationCenter, NSString;

@interface IGDirectMutationExternalSystemEventHandler : NSObject <IGDirectCacheListener, IGDirectRealtimeServiceListener>
{
    NSNotificationCenter *_notificationCenter;
    IGUserSession *_userSession;
    IGDirectMutationRequestInitiator *_requestInitiator;
    IGDirectMutationNetworkStatusChangeHandler *_networkStatusChangeHandler;
    IGDirectMutationBackgroundTaskScheduler *_backgroundTaskScheduler;
    id <IGDirectMutationRealtimeDeltaHandling> _deltaSyncHandler;
    IGDirectMutationRequestAppSuspensionLogger *_appSuspensionLogger;
}

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidEnterForeground:(id)arg1;
- (void)_networkReachibilityDidChange:(id)arg1;
- (void)realtimeServiceDidApplyDeltaWithMutationToken:(id)arg1;
- (void)directCacheDidUpdateThread:(id)arg1 withAppliedUpdates:(id)arg2;
- (void)directCacheDidUpdatePendingRequests:(id)arg1;
- (void)directCacheDidRemoveThreadsWithIds:(id)arg1;
- (void)directCacheDidUpdateThreads:(id)arg1;
- (void)stopListeningToExternalEvents;
- (void)startListeningToExternalEvents;
- (id)initWithNotificationCenter:(id)arg1 userSession:(id)arg2 requestInitiator:(id)arg3 networkStatusChangeHandler:(id)arg4 backgroundTaskScheduler:(id)arg5 deltaSyncHandler:(id)arg6 appSuspensionLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

