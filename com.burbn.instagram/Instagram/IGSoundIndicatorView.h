//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAShapeLayer, IGSoundIndicatorConfiguration, UIColor;

@interface IGSoundIndicatorView : UIView
{
    IGSoundIndicatorConfiguration *_config;
    CAShapeLayer *_speakerShapeLayer;
    CALayer *_soundwaveWrapperLayer;
    CAShapeLayer *_smallSoundwaveLayer;
    CAShapeLayer *_bigSoundwaveLayer;
    CAShapeLayer *_crossLayer;
    _Bool _shadowEnabled;
    long long _state;
    UIColor *_filledColor;
    UIColor *_unfilledColor;
}

@property(nonatomic) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(retain, nonatomic) UIColor *unfilledColor; // @synthesize unfilledColor=_unfilledColor;
@property(retain, nonatomic) UIColor *filledColor; // @synthesize filledColor=_filledColor;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_removeSoundStateAnimations;
- (void)_updateSoundwavesForSoundLevelWithState:(long long)arg1 animated:(_Bool)arg2;
- (void)_performScaleFadeOutAnimationForLayer:(id)arg1;
- (void)_updateForSoundOffAnimated:(_Bool)arg1;
- (void)_updateForSoundOnAnimated:(_Bool)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

