//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGGradientView, IGProfilePictureImageView, UILabel;

@interface IGTVReshareOverlayView : UIView
{
    IGGradientView *_topGradient;
    IGGradientView *_bottomGradient;
    UILabel *_durationLabel;
    IGProfilePictureImageView *_profileImageView;
    UILabel *_titleLabel;
    UILabel *_usernameLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithDuration:(double)arg1 title:(id)arg2 user:(id)arg3;

@end

