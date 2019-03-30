//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGProfileImage, IGProfilePictureImageView, IGTextButton, NSNumber, NSString, UILabel;

@interface IGSwitchUsersUserCellV2 : UITableViewCell
{
    IGProfilePictureImageView *_profileImageView;
    UILabel *_usernameLabel;
    _Bool _isLoggedInUser;
    IGTextButton *_followersButton;
    IGTextButton *_closeFriendsButton;
    NSNumber *_followersCount;
    NSNumber *_closeFriendsCount;
}

+ (double)height;
@property(retain, nonatomic) NSNumber *closeFriendsCount; // @synthesize closeFriendsCount=_closeFriendsCount;
@property(retain, nonatomic) NSNumber *followersCount; // @synthesize followersCount=_followersCount;
@property(nonatomic) _Bool isLoggedInUser; // @synthesize isLoggedInUser=_isLoggedInUser;
@property(readonly, nonatomic) IGTextButton *closeFriendsButton; // @synthesize closeFriendsButton=_closeFriendsButton;
@property(readonly, nonatomic) IGTextButton *followersButton; // @synthesize followersButton=_followersButton;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *usernameText;
@property(retain, nonatomic) IGProfileImage *profileImage;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
