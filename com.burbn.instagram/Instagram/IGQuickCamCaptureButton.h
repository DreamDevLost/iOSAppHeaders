//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "NSCopying.h"

@class IGCameraCaptureButtonConfig, IGCameraZoomController, IGContinuousCaptureProgressRing, IGProgressRingView, IGQuickCamInnerCircleCollectionView, IGStoryCameraFormatModel, NSArray, UILongPressGestureRecognizer, UIView;

@interface IGQuickCamCaptureButton : UIButton <NSCopying>
{
    long long _buttonStyle;
    _Bool _allowsExpanding;
    id <IGQuickCamCaptureButtonDelegate> _delegate;
    long long _buttonState;
    IGStoryCameraFormatModel *_cameraMode;
    double _videoRecordProgress;
    double _captureInnerCircleSize;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    IGCameraZoomController *_cameraZoomController;
    UIView *_background;
    UIView *_backgroundEffectContainer;
    UIView *_confirmOverlay;
    double _longPressInitialY;
    IGQuickCamInnerCircleCollectionView *_innerCircle;
    NSArray *_cameraModes;
    double _captureButtonSize;
    double _captureButtonVideoSize;
    double _captureInnerCircleShrinkSize;
    IGProgressRingView *_ringView;
    IGContinuousCaptureProgressRing *_continuousCaptureProgressRingView;
    UIView *_outlineView;
    IGCameraCaptureButtonConfig *_config;
    struct UIEdgeInsets _captureHitInsets;
}

+ (void)setRecordingBackgroundImage:(id)arg1;
+ (id)recordingBackgroundImage;
+ (id)defaultRecordingBackgroundImage;
@property(retain, nonatomic) IGCameraCaptureButtonConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UIView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) IGContinuousCaptureProgressRing *continuousCaptureProgressRingView; // @synthesize continuousCaptureProgressRingView=_continuousCaptureProgressRingView;
@property(retain, nonatomic) IGProgressRingView *ringView; // @synthesize ringView=_ringView;
@property(nonatomic) double captureInnerCircleShrinkSize; // @synthesize captureInnerCircleShrinkSize=_captureInnerCircleShrinkSize;
@property(nonatomic) double captureButtonVideoSize; // @synthesize captureButtonVideoSize=_captureButtonVideoSize;
@property(nonatomic) double captureButtonSize; // @synthesize captureButtonSize=_captureButtonSize;
@property(readonly, copy, nonatomic) NSArray *cameraModes; // @synthesize cameraModes=_cameraModes;
@property(readonly, nonatomic) IGQuickCamInnerCircleCollectionView *innerCircle; // @synthesize innerCircle=_innerCircle;
@property(nonatomic) double longPressInitialY; // @synthesize longPressInitialY=_longPressInitialY;
@property(retain, nonatomic) UIView *confirmOverlay; // @synthesize confirmOverlay=_confirmOverlay;
@property(retain, nonatomic) UIView *backgroundEffectContainer; // @synthesize backgroundEffectContainer=_backgroundEffectContainer;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) IGCameraZoomController *cameraZoomController; // @synthesize cameraZoomController=_cameraZoomController;
@property(nonatomic) _Bool allowsExpanding; // @synthesize allowsExpanding=_allowsExpanding;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets captureHitInsets; // @synthesize captureHitInsets=_captureHitInsets;
@property(nonatomic) double captureInnerCircleSize; // @synthesize captureInnerCircleSize=_captureInnerCircleSize;
@property(nonatomic) double videoRecordProgress; // @synthesize videoRecordProgress=_videoRecordProgress;
@property(retain, nonatomic) IGStoryCameraFormatModel *cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
@property(nonatomic) __weak id <IGQuickCamCaptureButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)insertSwitcherMode:(id)arg1 afterMode:(id)arg2;
- (void)simulateRelease;
- (void)simulateTouch;
- (void)updateForRecordingState:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_handleReleaseRecognized:(id)arg1;
- (void)_handleTouchRecognized:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_animateButton:(CDUnknownBlockType)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_beginExpanding;
- (void)_removeAllAnimations;
- (void)_setBackgroundAndRingViewTransform:(struct CGAffineTransform)arg1;
- (void)_updateBackgroundAndOutlineVisibility;
- (void)_setTouchDownAppearanceForState:(long long)arg1;
- (void)_setDefaultAppearance;
- (void)_setExpandedStateAppearance;
- (void)_setConfirmStateAppearance;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithConfig:(id)arg1 availableModes:(id)arg2 initialMode:(id)arg3 buttonStyle:(long long)arg4;

@end

