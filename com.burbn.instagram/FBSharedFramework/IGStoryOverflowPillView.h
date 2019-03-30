//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UIVisualEffectView;

@interface IGStoryOverflowPillView : UIView
{
    UIView *_blurDarkeningView;
    UILabel *_overflowLabel;
    double _leftInset;
    double _cornerRadius;
    long long _overflowCount;
    UIVisualEffectView *_overflowBlurView;
}

@property(readonly, nonatomic) UIVisualEffectView *overflowBlurView; // @synthesize overflowBlurView=_overflowBlurView;
@property(nonatomic) long long overflowCount; // @synthesize overflowCount=_overflowCount;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCornerRadius:(double)arg1 leftInset:(double)arg2;

@end
