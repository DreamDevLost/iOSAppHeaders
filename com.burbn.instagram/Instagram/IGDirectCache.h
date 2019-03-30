//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionEndingObject.h"

@class IGDirectCacheListenerAnnouncer, IGDirectCachePerfLogger, IGDirectInboxPendingRequests, IGDirectMemoryCache, IGDirectSQLiteCache, IGObjectCacheConsolidator, NSString;

@interface IGDirectCache : NSObject <IGUserSessionEndingObject>
{
    IGDirectMemoryCache *_memoryCache;
    IGDirectSQLiteCache *_sqliteCache;
    IGDirectCacheListenerAnnouncer *_cacheListenerAnnouncer;
    IGDirectCachePerfLogger *_perfLogger;
    id <IGDirectCacheWarmupExecutor> _warmupExecutor;
    id <IGExperimentSetProviding> _experimentSetProvider;
    IGObjectCacheConsolidator *_cacheConsolidator;
    NSString *_userPK;
    unsigned long long _threadsTrimmingBackgroundTask;
}

@property unsigned long long threadsTrimmingBackgroundTask; // @synthesize threadsTrimmingBackgroundTask=_threadsTrimmingBackgroundTask;
- (void).cxx_destruct;
- (void)_storeTrimmedThreads:(id)arg1 andRemoveThreads:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_onUserSwitchOrAppBackground;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)_trimThreadsAndMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeBackgroundTaskWithTaskBlock:(CDUnknownBlockType)arg1;
- (void)fetchMutationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeMutationRequestWithId:(id)arg1;
- (void)saveMutationRequestState:(id)arg1;
- (void)_saveThreadClientStateByIds:(id)arg1;
- (void)_readThreadClientStateFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveThreadClientState:(id)arg1;
- (id)draftMessageForThreadId:(id)arg1;
- (void)saveDraftMessage:(id)arg1 forThreadId:(id)arg2;
- (id)_threadClientStateForThreadId:(id)arg1;
- (id)outgoingMessageSetForThreadId:(id)arg1;
- (void)applyOutgoingMessageUpdates:(id)arg1 toThreadWithId:(id)arg2;
- (void)applyThreadUpdates:(id)arg1 toThreadWithId:(id)arg2;
- (id)messageWithId:(id)arg1 threadId:(id)arg2;
- (void)_readQuickRepliesFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (id)quickReplies;
- (void)removeAllQuickReplies;
- (void)removeQuickReply:(id)arg1;
- (void)saveQuickReply:(id)arg1;
- (void)_storeQuickRepliesToMemory:(id)arg1;
- (void)loadQuickRepliesFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setMostRecentlyUsedRecipients:(id)arg1;
- (void)_readMostRecentlyUsedRecipientsFromDisk;
- (id)mostRecentlyUsedRecipients;
- (void)saveMostRecentlyUsedRecipients:(id)arg1;
- (void)removeThreads:(id)arg1;
- (void)removeAllThreads;
- (void)removeThreadWithId:(id)arg1;
- (id)threadWithUsers:(id)arg1 mustBeCanonicalOrLocal:(_Bool)arg2;
- (id)threadWithId:(id)arg1;
- (id)serverSortedThreadsWithOptions:(id)arg1;
- (void)persistSequenceId:(id)arg1;
- (void)persistThreads:(id)arg1 sequenceId:(id)arg2;
- (void)persistThreadWithId:(id)arg1;
- (void)storeThread:(id)arg1;
- (void)_storeAndPersistThreads:(id)arg1 inboxMetadata:(id)arg2;
- (void)_storeThreadsAndAnnounce:(id)arg1;
- (void)storeThreads:(id)arg1;
- (id)_sanitizeAndStoreThreadsFetchedFromDisk:(id)arg1;
- (void)_readThreadsFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setPendingRequestsAndAnnounce:(id)arg1;
- (void)savePendingRequests:(id)arg1;
@property(readonly, copy, nonatomic) IGDirectInboxPendingRequests *pendingRequests;
- (void)_readPendingRequestsFromDisk;
- (void)_setInboxMetadata:(id)arg1;
- (void)_readInboxMetadataFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (id)inboxMetadata;
- (void)_fetchInboxThreadsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveFetchedThreads:(id)arg1 shouldRemoveLocalThreads:(_Bool)arg2 inboxMetadata:(id)arg3;
- (void)saveInboxWithMetadata:(id)arg1 threads:(id)arg2 canRemoveLocalThreads:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetInboxMetadata;
- (void)executeAfterCacheIsWarmedUp:(CDUnknownBlockType)arg1;
- (void)_finalizeWarmupByAnnouncingChangedThreads;
- (void)warmupCache;
- (_Bool)cacheWarmupFinished;
- (void)removeCacheListener:(id)arg1;
- (void)addCacheListener:(id)arg1;
- (id)initWithUserPK:(id)arg1 memoryCache:(id)arg2 sqliteCache:(id)arg3 warmupExecutor:(id)arg4 cacheConsolidator:(id)arg5 perfLogger:(id)arg6 experimentSetProvider:(id)arg7;
- (id)forceReadInboxMetadataSynchronouslyFromDisk_DO_NOT_USE_EXCEPT_IN_STARTUP_PATH;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

