//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, FBShimmeringView, IGDirectShareSheetOneTapButtonViewModel, UIImpactFeedbackGenerator, UILabel, UITapGestureRecognizer;

@interface IGDirectShareSheetOneTapButton : UIView
{
    id <IGDirectShareSheetOneTapDelegate> _delegate;
    IGDirectShareSheetOneTapButtonViewModel *_viewModel;
    UIView *_borderView;
    UIView *_rotatingHighlightView;
    CAGradientLayer *_rotatingHighlightGradientLayer;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UILabel *_borderlessTitleLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    FBShimmeringView *_shimmeringView;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

@property(readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)_startUndoShimmer;
- (void)_updateState:(id)arg1 animated:(_Bool)arg2;
- (void)_didTapButton:(id)arg1;
- (void)_performButtonAction;
- (void)_layoutWithViewModel:(id)arg1;
- (void)_setupFeedbackGenerator;
- (void)_setupGestureRecognizer;
- (void)_setupView;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

