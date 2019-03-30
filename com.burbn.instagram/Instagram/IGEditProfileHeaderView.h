//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGProfilePictureImageViewDelegate.h"

@class IGProfilePictureHelper, IGProfilePictureImageView, IGUser, NSString, UIControl;

@interface IGEditProfileHeaderView : UIView <IGProfilePictureImageViewDelegate>
{
    UIView *_bottomLineView;
    UIView *_topLineView;
    NSString *_module;
    IGProfilePictureImageView *_profilePic;
    IGProfilePictureHelper *_profilePictureHelper;
    IGUser *_user;
    UIControl *_editButton;
}

@property(retain, nonatomic) UIControl *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGProfilePictureHelper *profilePictureHelper; // @synthesize profilePictureHelper=_profilePictureHelper;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
- (void).cxx_destruct;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)_onEditButtonTapped;
- (void)setDelegate:(id)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_configureLines;
- (void)_configureEditButton;
- (void)_configureProfilePicture;
- (id)initWithFrame:(struct CGRect)arg1 user:(id)arg2 module:(id)arg3;

@end

