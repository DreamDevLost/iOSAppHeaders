//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGGradientView, IGNametagViewConfiguration, IGUser, UIImageView, UILabel;

@interface IGNametagView : UIView
{
    IGGradientView *_gradientView;
    UIView *_contentView;
    UIImageView *_glyphView;
    UILabel *_usernameLabel;
    IGUser *_user;
    _Bool _animatedCorner;
    UIView *_topLeftCorner;
    UIView *_topRightCorner;
    UIView *_bottomLeftCorner;
    UIView *_bottomRightCorner;
    IGNametagViewConfiguration *_configuration;
    UIImageView *_cornerView;
}

@property(readonly, nonatomic) UIImageView *cornerView; // @synthesize cornerView=_cornerView;
@property(retain, nonatomic) IGGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) IGNametagViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (struct CGRect)_usernameLabelFrame;
- (void)_createContentView;
- (void)_createGradientBackground;
- (id)snapShotNametage;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (id)initWithConfiguration:(id)arg1 user:(id)arg2 animatedCorner:(_Bool)arg3;

@end

