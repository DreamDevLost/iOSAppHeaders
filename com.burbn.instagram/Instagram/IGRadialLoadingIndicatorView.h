//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAAnimationGroup, CAGradientLayer, CAReplicatorLayer, CAShapeLayer;

@interface IGRadialLoadingIndicatorView : UIView
{
    CAShapeLayer *_circleLayer;
    CAGradientLayer *_gradientLayer;
    CAAnimationGroup *_loadingAnimation;
    CAReplicatorLayer *_replicatorLayer;
    double _circleRadius;
    long long _circleCount;
}

+ (id)_loadingAnimation:(long long)arg1;
+ (id)newInstagramGradientLoadingRadialIndicatorView;
+ (id)newDefaultLoadingRadialIndicatorView;
@property(nonatomic) long long circleCount; // @synthesize circleCount=_circleCount;
@property(nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

