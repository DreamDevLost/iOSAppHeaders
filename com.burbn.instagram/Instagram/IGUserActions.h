//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGRequestToken, IGUser, IGUserActionsListenerAnnouncer, IGUserUpdatedListenerAnnouncer, NSString;

@interface IGUserActions : NSObject <IGUserSessionObject>
{
    IGUserUpdatedListenerAnnouncer *_userUpdatedAnnouncer;
    long long _previousLiveSubscriptionStatus;
    IGRequestToken *_liveSubscriptionRequest;
    IGUser *_currentUser;
    id <IGAPIClient> _networker;
    id <IGExperimentSetProviding> _experimentProvider;
    IGUserActionsListenerAnnouncer *_announcer;
}

+ (_Bool)_errorIsNetworkError:(id)arg1;
+ (id)_ongoingFriendshipRequestTokenForUser:(id)arg1;
+ (void)_setOngoingFriendshipRequestToken:(id)arg1 forUser:(id)arg2;
+ (void)_onFriendStatusesFailed:(id)arg1 fromRequest:(id)arg2;
+ (void)_onFriendStatusesReceived:(id)arg1 fromRequest:(id)arg2;
+ (void)_onFriendStatusFailedForUser:(id)arg1 error:(id)arg2 fromRequest:(id)arg3;
+ (void)_onFriendStatusReceivedForUser:(id)arg1 response:(id)arg2 fromRequest:(id)arg3;
@property(readonly, nonatomic) IGUserActionsListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(readonly, nonatomic) id <IGExperimentSetProviding> experimentProvider; // @synthesize experimentProvider=_experimentProvider;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)_getBlockingActionsWithTitle:(id)arg1 targetUser:(id)arg2 blockingSuccessHandler:(CDUnknownBlockType)arg3;
- (void)_updateCountsForUserAsCurrentUserDidNotApproveFollowRequest:(id)arg1;
- (void)_updateCountsForUserAsCurrentUserDidApproveFollowRequest:(id)arg1;
- (void)_updateCountsForUserAsCurrentUserDidRemoveFollower:(id)arg1;
- (void)_updateCountsForUserAsCurrentUserDidStopFollowing:(id)arg1;
- (void)_updateCountsForUserAsCurrentUserDidGainFollower:(id)arg1;
- (void)_updateCountsForUserAsCurrentUserDidStartFollowing:(id)arg1;
- (id)_actionVerbForLiveSubscriptionStatus:(long long)arg1;
- (id)_actionVerbForAction:(long long)arg1;
- (void)forceSwitchToPrivateWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)changeCustomCommentFilteringKeywords:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)changeProfanityFilterSetting:(_Bool)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)changePrivacySetting:(_Bool)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)changeDirectThreadPresencePreference:(_Bool)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)changeDirectPresencePreference:(_Bool)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)fetchDirectPresencePreferenceWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)reportHackedAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportUser:(id)arg1 reason:(long long)arg2 reportSource:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)flagForSpam:(_Bool)arg1 user:(id)arg2 reportSource:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)reportSpamForUser:(id)arg1 reportSource:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)reportInappropriateUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateReelReshareSetting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateReelBlockStatusForUser:(id)arg1 blockStatus:(_Bool)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateFavoritesWithAddedUserPKs:(id)arg1 removedUserPKs:(id)arg2 source:(long long)arg3 analyticsModule:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateReelBlockStatusesWithBlockedReelUserPKs:(id)arg1 unblockedReelUserPKs:(id)arg2 source:(long long)arg3 entryPoint:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)changeFeedPostReshareDisabledSetting:(_Bool)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)updateReelAutoArchive:(_Bool)arg1 checkPendingArchivedMedia:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateReelMessagePreference:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchReelSettingsWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)fetchSimilarAccountsForUser:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)updateLiveSubscriptionStatus:(long long)arg1 forUser:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateLiveSubscriptionStatus:(long long)arg1 forUser:(id)arg2;
- (void)toggleStoryNotificationsStatusForUser:(id)arg1 isTurnOnNotification:(_Bool)arg2 showSuccessAlert:(_Bool)arg3;
- (void)_performPostNotificationChangeForUser:(id)arg1 on:(_Bool)arg2 showSuccessAlert:(_Bool)arg3;
- (void)togglePostNotificationsStatusForUser:(id)arg1 showSuccessAlert:(_Bool)arg2;
- (void)updatePostNotificationStatusForUser:(id)arg1 notificationsOn:(_Bool)arg2 showSuccessAlert:(_Bool)arg3;
- (void)changeMuteStatusForUser:(id)arg1 mute:(_Bool)arg2 changePostsStatus:(_Bool)arg3 changeStoryStatus:(_Bool)arg4 mediaID:(id)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (void)toggleBlockStatusForUser:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)toggleBlockStatusForTargetUser:(id)arg1 viewer:(id)arg2 blockingSuccessHandler:(CDUnknownBlockType)arg3;
- (long long)toggleFollowStatusForUser:(id)arg1 attribution:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchFollowStatusForUser:(id)arg1;
- (void)fetchFollowStatusInBulk:(id)arg1 includeReelStatus:(_Bool)arg2;
- (void)fetchFollowStatusInBulk:(id)arg1;
- (void)markOverAgeStatus:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2;
- (void)markUnderAgeStatus:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2;
- (void)_showAlertForUser:(id)arg1 ageGateResponse:(id)arg2 forAction:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_showRateLimitAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_logNetworkError:(id)arg1 responseMessage:(id)arg2;
- (void)_updateStateForFailedAction:(long long)arg1 onUser:(id)arg2 error:(id)arg3;
- (void)_updateStateForOptimisticAction:(long long)arg1 onUser:(id)arg2;
- (void)_handleFollowRetryForUser:(id)arg1 action:(long long)arg2 attribution:(id)arg3;
- (id)_buildChangeRelationshipRequestForAction:(long long)arg1 userPK:(id)arg2 attribution:(id)arg3 extraParams:(id)arg4;
- (void)_successHandlerForChangeFriendshipStatusForUser:(id)arg1 action:(long long)arg2 response:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeFriendshipStatusForUser:(id)arg1 withAction:(long long)arg2 attribution:(id)arg3 extraParams:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)changeFriendshipStatusForUser:(id)arg1 withAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeFriendshipStatusForUser:(id)arg1 withAction:(long long)arg2;
- (void)makeManyFriendRequests:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchAdditionalUserDataForUser:(id)arg1 previousAnalyticsModule:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (id)initWithCurrentUser:(id)arg1 networker:(id)arg2 userUpdatedAnnouncer:(id)arg3 experimentProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
