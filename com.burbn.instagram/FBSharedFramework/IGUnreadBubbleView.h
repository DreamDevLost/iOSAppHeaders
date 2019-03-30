//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, IGPassthroughLabel, IGUnreadBubbleViewConfig;

@interface IGUnreadBubbleView : UIView
{
    IGUnreadBubbleViewConfig *_config;
    long long _unreadCount;
    IGPassthroughLabel *_label;
    double _labelOffsetX;
    CAGradientLayer *_gradient;
}

- (void).cxx_destruct;
- (void)setTitleLabelAlpha:(double)arg1;
- (void)setUnreadCount:(long long)arg1;
- (void)configureWithConfig:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)arg1;

@end

