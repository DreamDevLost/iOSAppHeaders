//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, UITapGestureRecognizer;

@interface IGCanvasSwipeUpView : UIView
{
    UIImageView *_ctaButtonImageView;
    UILabel *_titleLabel;
    _Bool _animatingToPostState;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <IGCanvasSwipeUpViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (double)_appropriateLabelHeight;
- (void)_didTapSwipeUpView;
- (void)setPostAnimationState;
- (void)setPreAnimationState;
- (void)layoutSubviews;
- (void)configureViewModel:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

