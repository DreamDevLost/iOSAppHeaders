//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDirectCacheArchiver : NSObject
{
}

+ (void)_unarchiveFileInBackgroundUsingFileSuffix:(id)arg1 userPk:(id)arg2 cacheConsolidator:(id)arg3 expectedClass:(Class)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_archiveObjectInBackground:(id)arg1 fileSuffix:(id)arg2 cacheConsolidator:(id)arg3 userPk:(id)arg4;
+ (void)removeArchivedFilesForUserPK:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)storeMostRecentlyUsedRecipients:(id)arg1 cacheConsolidator:(id)arg2 forUserPk:(id)arg3;
+ (void)readMostRecentlyUsedRecipientsForUserPk:(id)arg1 cacheConsolidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)storePendingRequests:(id)arg1 cacheConsolidator:(id)arg2 forUserPk:(id)arg3;
+ (void)readPendingRequestsForUserPk:(id)arg1 cacheConsolidator:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

