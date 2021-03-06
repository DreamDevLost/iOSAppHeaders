//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBTimer, IGVideoCallMessageBubbleViewModel, UIButton, UILabel;

@interface IGVideoCallFooterView : UIView
{
    UIButton *_messageButton;
    FBTimer *_alertLabelDisplayTimer;
    UIButton *_chevron;
    UILabel *_swipeUpLabel;
    IGVideoCallMessageBubbleViewModel *_messageBubbleViewModel;
    _Bool _isAnimatingMessageBubble;
    _Bool _isAnimatingMessageBubbleOut;
    id <IGVideoCallFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGVideoCallFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_chevronDidTap:(id)arg1;
- (void)_messageButtonDidTap:(id)arg1;
- (void)_pinAlertLabelBottomToChevronImageView;
- (void)_layoutChevron;
- (void)_layoutSwipeUpNUX;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_animateNUXLabelVisible:(_Bool)arg1;
- (void)_resetAlertLabel;
- (void)_displayTemporaryMessage:(id)arg1;
- (void)hideInviteNUX;
- (void)showInviteNUX;
- (void)showInviteChevron;
- (void)displayMessageBubble:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

