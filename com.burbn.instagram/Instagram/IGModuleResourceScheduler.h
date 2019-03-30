//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGModuleResourceGraphDelegate.h"
#import "IGNetworkOperationConcurrencyObserver.h"
#import "IGResourceOperationStateListener.h"
#import "IGResourceScheduler.h"
#import "IGUserSessionEndingObject.h"

@class IGMediaCoordinationCoverageLogger, IGModuleResourceGraph, IGNetworkOperationConcurrencyManager, IGResourceSchedulerProcessorStateListenerAnnouncer, IGResourceSchedulerStateListenerAnnouncer, IGSchedulerAsyncExecutor, NSDictionary, NSMutableArray, NSString;

@interface IGModuleResourceScheduler : NSObject <IGModuleResourceGraphDelegate, IGResourceOperationStateListener, IGNetworkOperationConcurrencyObserver, IGResourceScheduler, IGUserSessionEndingObject>
{
    IGModuleResourceGraph *_graph;
    IGSchedulerAsyncExecutor *_executor;
    IGMediaCoordinationCoverageLogger *_coverageLogger;
    CDStruct_c83c15db _concurrencyConfiguration;
    IGNetworkOperationConcurrencyManager *_networkOperationConcurrencyManager;
    long long _queueType;
    NSMutableArray *_operationsQueue;
    NSDictionary *_moduleConfigurationMap;
    struct unordered_map<IGResourceType, NSMutableArray<IGQueuedRequestOperation *>*, std::__1::hash<IGResourceType>, std::__1::equal_to<IGResourceType>, std::__1::allocator<std::__1::pair<const IGResourceType, NSMutableArray<IGQueuedRequestOperation *>*>>> _operationKindToOperationsMapTable;
    struct unordered_map<IGResourceType, IGExecutingResourceOperationSet *, std::__1::hash<IGResourceType>, std::__1::equal_to<IGResourceType>, std::__1::allocator<std::__1::pair<const IGResourceType, IGExecutingResourceOperationSet *>>> _operationKindToSetMapTable;
    IGResourceSchedulerStateListenerAnnouncer *_announcer;
    IGResourceSchedulerProcessorStateListenerAnnouncer *_queueProcessorAnnouncer;
    _Bool _priorityQueueOnly;
    _Bool _onlyGroupOnscreenModuleRequests;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)concurrentOperationCountDidChangeFrom:(long long)arg1 to:(long long)arg2 withRequest:(id)arg3;
- (void)setMaxConcurrentOperationCount:(long long)arg1 forTransferRate:(long long)arg2;
- (void)operation:(id)arg1 didTransitionFrom:(id)arg2 to:(id)arg3;
- (void)moduleResourceGraph:(id)arg1 didUpdateStateOfModule:(id)arg2 change:(unsigned long long)arg3;
- (void)moduleResourceGraph:(id)arg1 moduleDidChangeFrom:(id)arg2 to:(id)arg3;
- (id)_executionSetForOperationType:(unsigned long long)arg1;
- (id)_operationsForType:(unsigned long long)arg1;
- (void)_startOperation:(id)arg1 inQueue:(id)arg2 usingExecutionSet:(id)arg3 context:(id)arg4;
- (void)_drainQueueForSnapshot:(id)arg1;
- (void)_drainSingularQueueForSnapshot:(id)arg1;
- (void)_scheduleDrain;
- (id)dispatcherConfigProvider;
- (void)removeQueueProcessorListener:(id)arg1;
- (void)addQueueProcessorListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)invalidate;
- (void)scheduleOperation:(id)arg1;
- (id)initWithModuleResourceGraph:(id)arg1 executor:(id)arg2 moduleConfigurations:(id)arg3 queueType:(long long)arg4 concurrencyConfiguration:(CDStruct_c83c15db)arg5 networkOperationConcurrencyManager:(id)arg6 coverageLogger:(id)arg7 onlyGroupOnscreenModuleRequests:(_Bool)arg8 priorityQueueOnly:(_Bool)arg9;
- (id)initWithModuleResourceGraph:(id)arg1 moduleConfigurations:(id)arg2 queueType:(long long)arg3 concurrencyConfiguration:(CDStruct_c83c15db)arg4 networkOperationConcurrencyManager:(id)arg5 coverageLogger:(id)arg6 onlyGroupOnscreenModuleRequests:(_Bool)arg7 priorityQueueOnly:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

