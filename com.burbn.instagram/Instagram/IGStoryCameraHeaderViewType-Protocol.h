//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGAREffectAttributionPillView, UIControl, UIView;

@protocol IGStoryCameraHeaderViewType
@property(retain, nonatomic) UIControl *muteButton;
@property(readonly, nonatomic) IGAREffectAttributionPillView *arEffectAttributionView;
@property(nonatomic) __weak id <IGStoryCameraHeaderViewDelegate> delegate;
- (void)setMuteButtonState:(_Bool)arg1;
- (void)setMuteButtonHidden:(_Bool)arg1;
- (void)addTopControl:(UIView *)arg1;
- (void)hideCloseView:(_Bool)arg1;
- (void)hideAllViewsExceptClose:(_Bool)arg1;
- (void)hideAllViewsExceptTopControls:(_Bool)arg1;
@end

