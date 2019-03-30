//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGFeaturedUserInfo, IGFollowController, IGProfilePictureImageView, IGStoryGradientRingView, IGTapButton, IGTextButton, IGUser, IGUserSession, NSString, UILabel;

@interface IGNewFollowerProfileCell : UICollectionViewCell
{
    IGUser *_user;
    IGFeaturedUserInfo *_userInfo;
    NSString *_module;
    unsigned long long _followedUserAction;
    IGProfilePictureImageView *_profilePicView;
    IGStoryGradientRingView *_profilePicRingView;
    UILabel *_usernameLabel;
    UILabel *_fullNameLabel;
    UILabel *_socialContextLabel;
    IGFollowController *_followController;
    IGTapButton *_viewProfileButton;
    IGUserSession *_userSession;
    IGFollowController *_iconFollowController;
    IGTextButton *_directMessageButton;
    id <IGNewFollowerProfileCellDelegate> _delegate;
}

+ (double)cellHeight:(id)arg1 followedUserAction:(unsigned long long)arg2;
@property(nonatomic) __weak id <IGNewFollowerProfileCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_createDirectMessageButton;
- (void)_createIconFollowController;
- (void)_createProfileGradientView;
- (void)_createFollowController;
- (void)_createViewProfileButton;
- (void)_createNameLabels;
- (void)_createProfilePicView;
- (void)_didTapDirectMessageButton:(id)arg1;
- (void)_didTapViewProfileButton:(id)arg1;
- (void)_setupSubviews;
- (_Bool)_shouldShowMessageButton;
- (void)layoutSubviews;
- (void)configWithFetureUserInfo:(id)arg1 followedUserAction:(unsigned long long)arg2 userSession:(id)arg3 module:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

