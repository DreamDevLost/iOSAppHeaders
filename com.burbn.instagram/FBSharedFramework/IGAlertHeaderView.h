//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGProfilePictureImageView, IGUser, NSString, UILabel;

@interface IGAlertHeaderView : UIView
{
    IGProfilePictureImageView *_profilePic;
    UILabel *_titleLabel;
    IGUser *_user;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)alertTitle;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 profilePicURL:(id)arg3 module:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 user:(id)arg2 module:(id)arg3;

@end

