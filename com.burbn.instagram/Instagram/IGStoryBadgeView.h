//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, CAShapeLayer, UIImageView;

@interface IGStoryBadgeView : UIView
{
    UIImageView *_iconImageView;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_borderLayer;
}

@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)updateBorderWidth:(double)arg1;
- (void)layoutGradientLayerWithRingViewFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithImage:(id)arg1 gradientLayerWithRingSpec:(id)arg2;
- (void)configureWithImageNamed:(id)arg1 gradientLayerWithRingSpec:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 borderColor:(id)arg2 borderWidth:(double)arg3;

@end

