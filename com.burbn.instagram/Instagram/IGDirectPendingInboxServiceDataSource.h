//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectCacheListener.h"

@class NSDate, NSMutableDictionary, NSNumber, NSOrderedSet, NSString;

@interface IGDirectPendingInboxServiceDataSource : NSObject <IGDirectCacheListener>
{
    NSMutableDictionary *_pagingInfos;
    long long _sortType;
}

@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
- (void).cxx_destruct;
- (void)directCacheDidUpdateThreads:(id)arg1;
- (void)directCacheDidUpdateThread:(id)arg1 withAppliedUpdates:(id)arg2;
- (void)directCacheDidUpdatePendingRequests:(id)arg1;
- (void)directCacheDidRemoveThreadsWithIds:(id)arg1;
- (void)_removeThreadsWithIds:(id)arg1;
- (void)updatePagingInfoWithCursor:(id)arg1 threadIds:(id)arg2 timeSinceLastFetch:(id)arg3 shouldReplaceExistingThreadIds:(_Bool)arg4 numberOfDaysFetched:(id)arg5;
- (id)_pagingInfoForCurrentSortType;
- (void)_setupPagingInfos;
@property(readonly, copy, nonatomic) NSNumber *numberOfDaysFetched;
@property(readonly, copy, nonatomic) NSDate *timePendingInboxLastFetched;
@property(readonly, copy, nonatomic) NSOrderedSet *threadIds;
@property(readonly, copy, nonatomic) NSString *pagingCursor;
- (id)initWithCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
