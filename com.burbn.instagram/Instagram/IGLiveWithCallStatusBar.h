//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTapButton, UILabel;

@interface IGLiveWithCallStatusBar : UIView
{
    UILabel *_textLabel;
    IGTapButton *_button;
}

@property(readonly, nonatomic) IGTapButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setStatus:(long long)arg1 withUsername:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

