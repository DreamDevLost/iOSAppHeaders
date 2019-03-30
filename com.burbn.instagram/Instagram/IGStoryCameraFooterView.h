//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPassthroughView.h"

#import "IGGestureHandler.h"
#import "IGStoryCameraModeSwitcherViewDelegate.h"

@class IGAREffectButton, IGQuickCamCaptureButton, IGStoryCameraFormatModel, IGStoryCameraGalleryButton, IGStoryCameraLightingButton, IGStoryCameraModeSwitcherView, IGStoryMusicProgressButton, IGTapButton, NSArray, NSString, UIButton, UIView;

@interface IGStoryCameraFooterView : IGPassthroughView <IGStoryCameraModeSwitcherViewDelegate, IGGestureHandler>
{
    _Bool _iPhoneXFullscreenCameraEnabled;
    _Bool _liveQAButtonEnabled;
    _Bool _hidesCameraControls;
    _Bool _topAlignModeSwitcher;
    long long _musicModeState;
    UIButton *_liveButton;
    UIButton *_liveQAButton;
    IGStoryCameraModeSwitcherView *_cameraModeSwitcherView;
    UIView *_cameraButtonsWrapperView;
    IGStoryCameraLightingButton *_lightingButton;
    IGQuickCamCaptureButton *_captureButton;
    IGTapButton *_leftSwitchCameraButton;
    IGTapButton *_rightSwitchCameraButton;
    IGAREffectButton *_arEffectButton;
    IGStoryCameraGalleryButton *_galleryButton;
    IGStoryMusicProgressButton *_musicProgressButton;
    IGTapButton *_musicSearchButton;
    id <IGStoryCameraFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryCameraFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGTapButton *musicSearchButton; // @synthesize musicSearchButton=_musicSearchButton;
@property(readonly, nonatomic) IGStoryMusicProgressButton *musicProgressButton; // @synthesize musicProgressButton=_musicProgressButton;
@property(readonly, nonatomic) IGStoryCameraGalleryButton *galleryButton; // @synthesize galleryButton=_galleryButton;
@property(readonly, nonatomic) IGAREffectButton *arEffectButton; // @synthesize arEffectButton=_arEffectButton;
@property(readonly, nonatomic) IGTapButton *rightSwitchCameraButton; // @synthesize rightSwitchCameraButton=_rightSwitchCameraButton;
@property(readonly, nonatomic) IGTapButton *leftSwitchCameraButton; // @synthesize leftSwitchCameraButton=_leftSwitchCameraButton;
@property(readonly, nonatomic) IGQuickCamCaptureButton *captureButton; // @synthesize captureButton=_captureButton;
@property(readonly, nonatomic) IGStoryCameraLightingButton *lightingButton; // @synthesize lightingButton=_lightingButton;
@property(readonly, nonatomic) UIView *cameraButtonsWrapperView; // @synthesize cameraButtonsWrapperView=_cameraButtonsWrapperView;
@property(readonly, nonatomic) IGStoryCameraModeSwitcherView *cameraModeSwitcherView; // @synthesize cameraModeSwitcherView=_cameraModeSwitcherView;
@property(readonly, nonatomic) UIButton *liveQAButton; // @synthesize liveQAButton=_liveQAButton;
@property(readonly, nonatomic) UIButton *liveButton; // @synthesize liveButton=_liveButton;
@property(nonatomic) long long musicModeState; // @synthesize musicModeState=_musicModeState;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)cameraModeSwitcherViewDidEndScrollOnMode:(id)arg1;
- (void)cameraModeSwitcherView:(id)arg1 didSwitchFromMode:(id)arg2 toMode:(id)arg3;
- (_Bool)cameraModeSwitcherView:(id)arg1 shouldBeginDraggingFromMode:(id)arg2;
- (id)_centerButton;
- (_Bool)_shouldShowCenterButton;
- (void)_configureAccessibilityOrder;
- (void)_toggleControls;
- (void)_setupDefaultControlConfiguration;
- (void)updateControlsIfNeeded;
- (void)switchToCameraMode:(id)arg1;
- (void)updateForGalleryPermissionChange;
- (void)setAREffectButtonSelected:(_Bool)arg1;
- (void)setModeSwitcherEnabled:(_Bool)arg1;
- (void)setFooterViewEnabled:(_Bool)arg1;
- (void)flipSwitchCameraButton;
- (void)showCameraModeSwitcher:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLiveQAButtonSelected:(_Bool)arg1;
@property(readonly, nonatomic) IGStoryCameraFormatModel *currentMode;
@property(readonly, nonatomic) NSArray *modes;
- (double)minimumHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_didTapMusicSearchButton;
- (void)_didTapMusicProgressButton;
- (void)_didTapGalleryButton;
- (void)_didTapAREffectButton;
- (void)_didTapLiveQAButton;
- (void)_didTapLiveButton;
- (void)_didTapLightingButton;
- (void)_didTapSwitchCameraButton;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1 availableModes:(id)arg2 initialMode:(id)arg3 iPhoneXFullscreenCameraEnabled:(_Bool)arg4 captureButtonDelegate:(id)arg5 topAlignModeSwitcher:(_Bool)arg6 hidesCameraControls:(_Bool)arg7 useContinuousCaptureRing:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

