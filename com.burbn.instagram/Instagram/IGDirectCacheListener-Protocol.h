//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectInboxPendingRequests, IGDirectPublishedThread, NSArray, NSOrderedSet, NSSet;

@protocol IGDirectCacheListener <NSObject>
- (void)directCacheDidUpdateThread:(IGDirectPublishedThread *)arg1 withAppliedUpdates:(NSArray *)arg2;
- (void)directCacheDidUpdatePendingRequests:(IGDirectInboxPendingRequests *)arg1;
- (void)directCacheDidRemoveThreadsWithIds:(NSSet *)arg1;
- (void)directCacheDidUpdateThreads:(NSOrderedSet *)arg1;
@end
