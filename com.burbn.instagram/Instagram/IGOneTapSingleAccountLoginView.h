//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRemoteImageView, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel;

@interface IGOneTapSingleAccountLoginView : UIView
{
    UIImageView *_logoView;
    UIView *_profilePictureBackgroundView;
    UILabel *_usernameLabel;
    UIActivityIndicatorView *_buttonLoadingIndicator;
    UIImage *_loginButtonImage;
    IGRemoteImageView *_profilePictureView;
    UIButton *_loginButton;
    UIButton *_tappableLoginArea;
    UIButton *_loginWithAnotherAccountButton;
}

@property(retain, nonatomic) UIButton *loginWithAnotherAccountButton; // @synthesize loginWithAnotherAccountButton=_loginWithAnotherAccountButton;
@property(retain, nonatomic) UIButton *tappableLoginArea; // @synthesize tappableLoginArea=_tappableLoginArea;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) IGRemoteImageView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
- (void).cxx_destruct;
- (void)setIsLoading:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithOneTapLoginUser:(id)arg1 loginButtonImage:(id)arg2 loginButtonTitle:(id)arg3 module:(id)arg4;

@end

