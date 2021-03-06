//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGDirectAvatarView, IGDirectLeftAlignedTitleViewModel, IGTapButton, UIButton, UIImageView, UILabel;

@interface IGDirectLeftAlignedTitleView : UIView
{
    UIButton *_titleButton;
    UILabel *_subtitleLabel;
    IGTapButton *_backButton;
    IGDirectAvatarView *_avatarView;
    UIImageView *_verifiedBadge;
    double _titleWidth;
    IGDirectLeftAlignedTitleViewModel *_titleViewModel;
    id <IGDirectLeftAlignedTitleViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectLeftAlignedTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGDirectLeftAlignedTitleViewModel *titleViewModel; // @synthesize titleViewModel=_titleViewModel;
- (void).cxx_destruct;
- (void)_updateText;
- (void)_didTapTitle:(id)arg1;
- (void)_didTapAvatar;
- (void)_setupVerifiedBadge;
- (void)_didTapBackButton;
- (void)_setupBackButton;
- (void)_setupAvatar;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

