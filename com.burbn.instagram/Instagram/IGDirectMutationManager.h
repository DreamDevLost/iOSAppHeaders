//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationManagerOffProcessNetworkResponseHandling.h"
#import "IGDirectMutationRequestStateStoreListener.h"
#import "IGUserSessionEndingObject.h"

@class IGDirectMutationExternalSystemEventHandler, IGDirectMutationManagerListenerAnnouncer, IGDirectMutationManagerOffProcessResponseHandler, IGDirectMutationOptimisticStateUpdatingListenerAnnouncer, IGDirectMutationOptimisticUpdateInfoCache, IGDirectMutationRealtimeDeltaHandlingDelayer, IGDirectMutationRequestAppSuspensionLogger, IGDirectMutationRequestCoordinationCache, IGDirectMutationRequestInitiator, IGDirectMutationRequestPreparer, IGDirectMutationRequestStateStore, IGDirectMutationRequestStateStoreListeningForwarder, IGDirectMutationRequestStoreHistoricalDebugLogger, NSObject<OS_dispatch_queue>, NSString;

@interface IGDirectMutationManager : NSObject <IGDirectMutationRequestStateStoreListener, IGDirectMutationManagerOffProcessNetworkResponseHandling, IGUserSessionEndingObject>
{
    IGDirectMutationRequestPreparer *_preparer;
    IGDirectMutationRequestInitiator *_initiator;
    IGDirectMutationManagerListenerAnnouncer *_mutationManagerAnnouncer;
    IGDirectMutationOptimisticStateUpdatingListenerAnnouncer *_optimisicStateUpdateAnnouncer;
    IGDirectMutationRequestStateStoreListeningForwarder *_requestStateStoreListeningForwarder;
    id <IGDirectMutationRequestStateDiskRestoring> _diskRestorer;
    IGDirectMutationRequestCoordinationCache *_requestCoordinationCache;
    IGDirectMutationOptimisticUpdateInfoCache *_optimisticStateCache;
    IGDirectMutationRequestStateStore *_requestStateStore;
    IGDirectMutationExternalSystemEventHandler *_externalEventHandler;
    IGDirectMutationRequestStoreHistoricalDebugLogger *_requestStoreHistoricalDebugLogger;
    IGDirectMutationRealtimeDeltaHandlingDelayer *_realtimeDeltaHandlerDelayer;
    IGDirectMutationManagerOffProcessResponseHandler *_offProcessResponseHandler;
    IGDirectMutationRequestAppSuspensionLogger *_appSuspensionLogger;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_mutationsRestoredFromDisk:(id)arg1;
- (void)_shutdown;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)mutationRequestStoreDidDropMutationWithId:(id)arg1 withReason:(unsigned long long)arg2;
- (void)mutationRequestStoreDidEnqueueMutation:(id)arg1 withInitialExecutionState:(id)arg2;
- (void)mutationRequestStoreDidUpdateMutation:(id)arg1 fromExecutionState:(id)arg2 toExecutionState:(id)arg3;
- (void)handleOffProcessResponseFromPreviousAppSession:(id)arg1 forMutationId:(id)arg2;
- (id)serializableLogPackage;
- (void)removeOptimisticStateUpdateListener:(id)arg1;
- (void)addOptimisticStateUpdateListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)optimisticUpdateInfosForThreadId:(id)arg1;
- (void)startService;
- (void)manuallyRetryMutationWithId:(id)arg1;
- (void)cancelMutationWithId:(id)arg1;
- (id)runMutationWithData:(id)arg1;
- (id)initWithMutationProcessingToolboxProvider:(id)arg1 diskHandler:(id)arg2 notificationCenter:(id)arg3 networkConnectionManager:(id)arg4 directCache:(id)arg5 userSession:(id)arg6 queue:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

