//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGBouncyButton, IGStoryGradientRingView, UILabel;

@interface IGStoryStickerPinningLoadingIndicatorView : UIView
{
    IGBouncyButton *_bouncyWrapperView;
    IGStoryGradientRingView *_ringView;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)_updateRingAnimationState;
- (void)didMoveToWindow;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

