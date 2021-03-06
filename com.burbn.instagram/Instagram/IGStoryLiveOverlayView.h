//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPassthroughView.h"

#import "IGCameraZoomControllerDelegate.h"
#import "IGLiveQuestionOverlayViewDelegate.h"

@class CAGradientLayer, IGCameraZoomController, IGLivePresenceOverlayViewModel, IGLiveQuestionOverlayViewController, IGStoryLiveInternalModeSwitch, IGTooltipView, NSString, UILabel, UIView;

@interface IGStoryLiveOverlayView : IGPassthroughView <IGCameraZoomControllerDelegate, IGLiveQuestionOverlayViewDelegate>
{
    UILabel *_liveNUXTitleLabel;
    UILabel *_liveNUXDetailLabel;
    double _contentBottomPadding;
    UIView *_backgroundGradientView;
    CAGradientLayer *_gradientLayer;
    struct CGRect _captureButtonFrame;
    UIView *_presenceView;
    IGLivePresenceOverlayViewModel *_presenceViewModel;
    IGLiveQuestionOverlayViewController *_questionOverlayViewController;
    _Bool _showingQuestionOverlay;
    IGTooltipView *_questionNUXTooltip;
    id <IGStoryLiveOverlayViewDelegate> _delegate;
    IGCameraZoomController *_zoomController;
    IGStoryLiveInternalModeSwitch *_internalModeSwitch;
}

@property(readonly, nonatomic) IGStoryLiveInternalModeSwitch *internalModeSwitch; // @synthesize internalModeSwitch=_internalModeSwitch;
@property(readonly, nonatomic) IGCameraZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(nonatomic) __weak id <IGStoryLiveOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeQuestionButtonTapped:(id)arg1;
- (void)questionOverlayTapped:(id)arg1;
- (void)captureButtonDidZoomScale:(double)arg1;
- (void)zoomController:(id)arg1 didChangeZoomScaleBy:(double)arg2;
- (void)notifyCaptureButtonFrame:(struct CGRect)arg1;
- (void)showPresenceOverlayWithViewModel:(id)arg1;
- (void)showLiveQuestionNuxTooltipAtPosition:(struct CGPoint)arg1 direction:(long long)arg2;
- (_Bool)_shouldShowLiveQuestionNUX;
- (void)_recordLiveQuestionNUXseen;
- (void)showLiveNuxLabelIfNeeded:(_Bool)arg1;
- (_Bool)hasSeenLiveNUX;
- (void)recordLiveNUXseen;
- (void)updateQuestionWithQuestionText:(id)arg1 questionPk:(id)arg2 submittedByUser:(id)arg3 isActivate:(_Bool)arg4;
- (void)_configureBackgroundDim;
- (void)_liveOverlayDoubleTap:(id)arg1;
- (void)_liveOverlayTap:(id)arg1;
- (_Bool)isInternalSwitchOn;
- (void)updateContentBottomPadding:(double)arg1;
- (void)resetToDefaultConfigurations;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

