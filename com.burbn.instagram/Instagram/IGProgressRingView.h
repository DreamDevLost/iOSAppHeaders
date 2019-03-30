//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAShapeLayer;

@interface IGProgressRingView : UIView
{
    CAShapeLayer *_progress;
    CALayer *_gradientLayer;
    double _ringWidth;
}

- (void).cxx_destruct;
- (void)updateStrokeEnd:(double)arg1 animated:(_Bool)arg2;
- (void)setGradientHidden:(_Bool)arg1;
- (void)_animateGradientRotation;
- (void)layoutSubviews;
- (id)initWithRingWidth:(double)arg1 frame:(struct CGRect)arg2 gradientLayerConfig:(id)arg3;

@end
