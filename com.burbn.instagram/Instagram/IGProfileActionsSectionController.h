//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGProfileAvatarStatsViewDelegate.h"
#import "IGProfileHeaderAvatarViewProvider.h"
#import "IGUserUpdatedListener.h"

@class IG4BLogger, IGFollowAttributionModel, IGProfileActionsModel, IGProfileAvatarActionsController, IGUserSession, NSString;

@interface IGProfileActionsSectionController : IGListSectionController <IGProfileAvatarStatsViewDelegate, IGUserUpdatedListener, IGProfileHeaderAvatarViewProvider>
{
    IGUserSession *_userSession;
    NSString *_module;
    IGProfileActionsModel *_model;
    _Bool _isCurrentUser;
    _Bool _chainingSelected;
    _Bool _chainingLoading;
    IGProfileAvatarActionsController *_avatarActionsController;
    id <IGProfileLayoutMetrics> _layoutMetrics;
    IGFollowAttributionModel *_attribution;
    NSString *_trackingToken;
    IG4BLogger *_ig4bLogger;
    id <IGFollowControllerLoggingProvider> _loggingProvider;
    id <IGProfileActionsSectionControllerDelegate> _delegate;
    id <IGBusinessConversionDelegate> _businessConversionsDelegate;
    id <IGEditProfilePhotoPickerConfirmationDelegate> _profilePhotoPickerDelegate;
}

@property(nonatomic) __weak id <IGEditProfilePhotoPickerConfirmationDelegate> profilePhotoPickerDelegate; // @synthesize profilePhotoPickerDelegate=_profilePhotoPickerDelegate;
@property(nonatomic) __weak id <IGBusinessConversionDelegate> businessConversionsDelegate; // @synthesize businessConversionsDelegate=_businessConversionsDelegate;
@property(nonatomic) __weak id <IGProfileActionsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)profileViewDidTapViewEffects:(id)arg1;
- (void)profileViewDidTapDirectMessage:(id)arg1;
- (void)profileViewDidTapAvatar:(id)arg1;
- (void)profileViewDidTapFollowing:(id)arg1;
- (void)profileViewDidTapFollowers:(id)arg1;
- (void)profileViewDidTapPromote:(id)arg1;
- (void)profileViewDidTapMedia:(id)arg1;
- (void)profileViewDidLongPressAvatar:(id)arg1;
- (void)profileViewDidTapEditProfile:(id)arg1;
- (void)profileViewDidTapFollow:(id)arg1 action:(long long)arg2;
- (void)profileView:(id)arg1 didCompleteFollowAction:(long long)arg2;
- (void)profileViewDidTapChaining:(id)arg1 didSelect:(_Bool)arg2;
- (void)_reconfigureCellNotification:(id)arg1;
- (void)userWasUpdated:(id)arg1;
- (void)_logProfileAction:(id)arg1 clickPoint:(id)arg2 followersCount:(id)arg3 followingCount:(id)arg4;
- (void)_logProfileAction:(id)arg1 clickPoint:(id)arg2;
- (id)_navigationController;
- (void)_logFollowAction:(long long)arg1;
- (_Bool)_shouldShowViewEffectsButton;
- (_Bool)_shouldShowPromoteButton;
- (void)_configureAvatarView:(id)arg1;
- (id)stackedBroadcastProfileView;
- (id)broadcastProfileView;
- (id)storyProfileView;
- (_Bool)isMainProfileSurface;
- (id)profileAvatarStatsView;
- (void)setChainingLoading:(_Bool)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 actionsControllerDelegate:(id)arg3 layoutMetrics:(id)arg4 attribution:(id)arg5 trackingToken:(id)arg6 ig4bLogger:(id)arg7 loggingProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
