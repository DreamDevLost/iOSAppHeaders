//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGCameraDraftChangeListenerAnnouncer, IGDraftBeingStored, IGDraftEnumerator, IGObjectCacheConsolidator, NSLock, NSString;

@interface IGCameraDraftManager : NSObject <IGUserSessionObject>
{
    NSString *_userPK;
    IGDraftBeingStored *_draftBeingStored;
    IGDraftEnumerator *_draftEnumerator;
    NSLock *_draftEnumeratorLock;
    IGObjectCacheConsolidator *_cacheConsolidator;
    IGCameraDraftChangeListenerAnnouncer *_announcer;
}

+ (id)_fetchDraftReasonStringForReason:(long long)arg1;
+ (void)_logEventWithName:(id)arg1 extras:(id)arg2;
- (void).cxx_destruct;
- (long long)estimatedTotalCount;
- (void)migrateOldDraftsIfNecessaryWithUserSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_migrateOldDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeInvalidDraftsAsync;
- (_Bool)_validateVideoData:(id)arg1;
- (_Bool)_validateCompositionDraft:(id)arg1 expectPersisted:(_Bool)arg2;
- (_Bool)_validateMediaDraft:(id)arg1 expectPersisted:(_Bool)arg2;
- (_Bool)_validateDraft:(id)arg1 expectPersisted:(_Bool)arg2;
- (id)_storedInvalidDraftEnumerator;
- (id)_storedDraftEnumerator;
- (id)_draftEnumeratorHelperValid:(_Bool)arg1;
- (void)_removeCompositionDraft:(id)arg1 enumeratorRemovalBlock:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_removeMediaDraft:(id)arg1 enumeratorRemovalBlock:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearDraftsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_directoryForPreviewWithIdentifier:(id)arg1;
- (id)_directoryForDraftIdentifier:(id)arg1;
- (id)_directoryForDraft:(id)arg1;
- (void)_removeVideoData:(id)arg1 error:(id)arg2 success:(_Bool)arg3 debugLog:(id)arg4;
- (void)_removeObject:(id)arg1 enumeratorRemovalBlock:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_storeDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_fetchDraftWithIdentifier:(id)arg1;
- (void)_encodingFinished;
- (void)_clipExportFinished;
- (void)addListener:(id)arg1;
- (void)removeCompositionDraft:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeMediaDraft:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchFullCompositionDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeCompositionDraft:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)storeMediaDraft:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchFullMediaDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDraftsCount:(long long)arg1 reason:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchAllDraftPreviewsWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserPK:(id)arg1 cacheConsolidator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
