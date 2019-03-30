//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGProfilePictureImageView, IGTapButton, UIButton, UIImageView, UILabel;

@interface IGTVVideoCreatorView : UIView
{
    UIImageView *_verifiedBadgeImageView;
    UILabel *_detailLabel;
    IGTapButton *_usernameButton;
    IGProfilePictureImageView *_profileImageView;
}

@property(readonly, nonatomic) IGProfilePictureImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
- (void).cxx_destruct;
- (struct CGSize)_usernameButtonIntrinsicContentSize;
- (void)prepareForReuse;
- (void)configureWithUsernameText:(id)arg1 detailText:(id)arg2 isVerified:(_Bool)arg3 canTapUser:(_Bool)arg4;
@property(readonly, nonatomic) UIButton *usernameButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

