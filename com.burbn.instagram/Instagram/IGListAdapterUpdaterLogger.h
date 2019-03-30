//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterUpdaterDelegate.h"
#import "IGWatchdogStallDetectionListener.h"

@class IGListIndexSetResult, NSArray, NSLock, NSString;

@interface IGListAdapterUpdaterLogger : NSObject <IGWatchdogStallDetectionListener, IGListAdapterUpdaterDelegate>
{
    NSString *_moduleName;
    NSArray *_previousSectionCounts;
    NSArray *_updatingFromObjects;
    NSArray *_updatingToObjects;
    IGListIndexSetResult *_updatingListIndexSetResults;
    NSLock *_batchUpdatingLock;
    long long _updateCount;
    _Bool _stallInfoLogged;
    _Bool _didStall;
}

- (void).cxx_destruct;
- (void)listAdapterUpdater:(id)arg1 collectionView:(id)arg2 willCrashWithException:(id)arg3 fromObjects:(id)arg4 toObjects:(id)arg5 diffResult:(id)arg6 updates:(id)arg7;
- (void)listAdapterUpdater:(id)arg1 willMoveFromIndexPath:(id)arg2 toIndexPath:(id)arg3 collectionView:(id)arg4;
- (void)listAdapterUpdater:(id)arg1 didReloadDataWithCollectionView:(id)arg2;
- (void)listAdapterUpdater:(id)arg1 willReloadDataWithCollectionView:(id)arg2;
- (void)listAdapterUpdater:(id)arg1 willReloadSections:(id)arg2 collectionView:(id)arg3;
- (void)listAdapterUpdater:(id)arg1 willReloadIndexPaths:(id)arg2 collectionView:(id)arg3;
- (void)listAdapterUpdater:(id)arg1 willDeleteIndexPaths:(id)arg2 collectionView:(id)arg3;
- (void)listAdapterUpdater:(id)arg1 willInsertIndexPaths:(id)arg2 collectionView:(id)arg3;
- (void)listAdapterUpdater:(id)arg1 didPerformBatchUpdates:(id)arg2 collectionView:(id)arg3;
- (void)listAdapterUpdater:(id)arg1 willPerformBatchUpdatesWithCollectionView:(id)arg2 fromObjects:(id)arg3 toObjects:(id)arg4 listIndexSetResult:(id)arg5;
- (void)watchdogWillLogStallInfo:(_Bool)arg1;
- (void)dealloc;
- (id)initWithModuleName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

