//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"
#import "IGUserUpdatedListener.h"

@class IGBadgeInfoListenerAnnouncer, IGUser, NSDictionary, NSString;

@interface IGBadgeHelper : NSObject <IGUserUpdatedListener, IGUserSessionObject>
{
    NSDictionary *_multipleAccountsNotificationBadgeDict;
    NSDictionary *_multipleAccountsFamilyBridgesBadgeDict;
    IGBadgeInfoListenerAnnouncer *_badgeInfoAnnouncer;
    id <IGAPIClient> _networker;
    IGUser *_user;
    id <IGMultipleAccountTracking> _multipleAccountTracker;
}

- (void).cxx_destruct;
- (void)_broadcastUpdatedNeedsAttentionValue:(_Bool)arg1;
- (long long)_currentBadgeCountForAttention;
- (_Bool)_shouldNeedAttention;
- (long long)currentBadgeCountForBadgeType:(unsigned long long)arg1;
- (_Bool)shouldNeedAttentionForBadgeType:(unsigned long long)arg1;
- (void)_updateNeedsAttention;
- (void)_fetchFamilyNavigationBadges;
- (void)_fetchNotificationBadges;
- (void)_fetchBadgesDict;
- (void)excludeFamilyNavigationBadgeCountForUserId:(id)arg1;
- (id)familyNavigationBadgeDataModelForUserId:(id)arg1;
- (long long)notificationBadgeCountForUserId:(id)arg1 badgeType:(unsigned long long)arg2;
- (void)fetchAllBadges;
- (void)userWasUpdated:(id)arg1;
- (id)initWithNetworker:(id)arg1 user:(id)arg2 badgeInfoAnnouncer:(id)arg3 userUpdatedAnnouncer:(id)arg4 multipleAccountTracker:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

