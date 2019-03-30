//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGDirectVisualMessageViewerPresentationContext.h"
#import "IGDirectVisualMessageViewerPresentationManagerContextDelegate.h"

@class IGDirectAvatarView, IGDirectThreadVisualHeaderViewConfig, IGUsernameTitleView, UIImageView;

@interface IGDirectThreadVisualHeaderView : UIView <IGDirectVisualMessageViewerPresentationManagerContextDelegate, IGDirectVisualMessageViewerPresentationContext>
{
    id <IGDirectThreadTappableHeaderViewDelegate> _delegate;
    IGDirectAvatarView *_avatarView;
    IGUsernameTitleView *_threadNameTitleView;
    IGDirectThreadVisualHeaderViewConfig *_config;
    UIImageView *_chevronImageView;
    double _avatarWidth;
    double _topPadding;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *profileImageViewForVisualMessageViewerPresentation;
@property(readonly, nonatomic) UIView *contentViewForVisualMessageViewerPresentation;
- (void)visualMessageViewerPresentationManager:(id)arg1 didUpdateWithPreloadContextIdentifier:(id)arg2;
- (id)visualMessageViewerPresentationContextForIdentifier:(id)arg1;
- (struct CGSize)_titleLabelSizeFromAvailableSpaceInSize:(struct CGSize)arg1;
- (double)_chevronWidth;
- (void)_didTapTitle;
- (void)_didTapAvatar;
- (void)spinAvatarView;
- (void)configureWithConfig:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setupChevronImageView;
- (void)_setupThreadNameTitleView;
- (void)_setupAvatarView;
- (id)avatarView;
- (id)initWithBackgroundColor:(id)arg1 avatarWidth:(double)arg2 topPadding:(double)arg3 frame:(struct CGRect)arg4 delegate:(id)arg5;

@end

