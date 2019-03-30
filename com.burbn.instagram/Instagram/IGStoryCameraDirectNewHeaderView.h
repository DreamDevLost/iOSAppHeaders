//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGStoryCameraHeaderViewType.h"

@class IGAREffectAttributionPillView, IGPassthroughView, IGStackView, IGTapButton, UIControl;

@interface IGStoryCameraDirectNewHeaderView : UIView <IGStoryCameraHeaderViewType>
{
    IGTapButton *_closeButton;
    IGStackView *_topControlsView;
    IGPassthroughView *_controlsView;
    long long _controlsPosition;
    IGAREffectAttributionPillView *_arEffectAttributionView;
    UIControl *_muteButton;
    id <IGStoryCameraHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryCameraHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIControl *muteButton; // @synthesize muteButton=_muteButton;
@property(readonly, nonatomic) IGAREffectAttributionPillView *arEffectAttributionView; // @synthesize arEffectAttributionView=_arEffectAttributionView;
- (void).cxx_destruct;
- (void)_muteButtonTapped;
- (void)_closeButtonTapped;
- (void)addTopControl:(id)arg1;
- (void)setMuteButtonState:(_Bool)arg1;
- (void)setMuteButtonHidden:(_Bool)arg1;
- (void)hideCloseView:(_Bool)arg1;
- (void)hideAllViewsExceptClose:(_Bool)arg1;
- (void)hideAllViewsExceptTopControls:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (id)initWithControlsPosition:(long long)arg1;

@end

