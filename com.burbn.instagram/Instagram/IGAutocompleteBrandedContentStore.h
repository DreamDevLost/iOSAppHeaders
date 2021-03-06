//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionEndingObject.h"

@class IGObjectCacheConsolidator, IGUser, NSArray, NSMutableOrderedSet, NSString;

@interface IGAutocompleteBrandedContentStore : NSObject <IGUserSessionEndingObject>
{
    NSMutableOrderedSet *_users;
    IGUser *_currentUser;
    IGObjectCacheConsolidator *_cacheConsolidator;
}

- (void).cxx_destruct;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)clearHistoryExceptSelectedSponsors:(id)arg1;
- (void)clearHistory;
- (void)_archive;
@property(readonly, nonatomic) NSArray *recentSponsorPartners;
@property(readonly, nonatomic) NSArray *allSponsorPartners;
- (_Bool)_addUserToRecent:(id)arg1;
- (id)initWithCurrentUser:(id)arg1 objectCacheConsolidator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

