//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGGradientView, IGPassthroughView, UIButton;

@interface IGDirectBottomActionButton : UIView
{
    _Bool _useRoundBottomActionButton;
    IGPassthroughView *_containerView;
    UIButton *_button;
    double _buttonHeight;
    IGGradientView *_gradientView;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 actionTarget:(id)arg3 action:(SEL)arg4;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 actionTarget:(id)arg3 action:(SEL)arg4 buttonHeight:(double)arg5 shouldDisplayHighlight:(_Bool)arg6;

@end

