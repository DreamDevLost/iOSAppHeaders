//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGCameraViewControllerDelegate.h"
#import "IGDirectWalkieTalkieAnimatorDelegate.h"
#import "IGFlippableCameraViewDelegate.h"
#import "IGStoryCameraPreviewViewControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGCameraViewController, IGDirectPublishedThread, IGDirectStackedProfileImageView, IGDirectThreadService, IGDirectWalkieTalkiePostCapturePresentationManager, IGDirectWalkieTalkieSendButton, IGDirectWalkieTalkieSendingController, IGDirectWalkieTalkieViewControllerConfig, IGFlippableCameraView, IGFlippableChevronView, IGQuickCamCaptureButton, IGQuickCamInputCameraVideoAsset, IGStoryCameraDirectCenterHeaderView, IGStoryCameraDirectHeaderView, IGUserSession, NSString, UIImage, UIImageView, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UIView;

@interface IGDirectWalkieTalkieViewController : UIViewController <IGAnalyticsModule, IGCameraViewControllerDelegate, IGFlippableCameraViewDelegate, IGStoryCameraPreviewViewControllerDelegate, UIViewControllerTransitioningDelegate, IGDirectWalkieTalkieAnimatorDelegate>
{
    IGDirectWalkieTalkieViewControllerConfig *_config;
    unsigned long long _state;
    IGCameraViewController *_cameraViewController;
    IGFlippableCameraView *_flippableCameraView;
    IGFlippableChevronView *_chevronFlipView;
    IGDirectWalkieTalkiePostCapturePresentationManager *_presentationManager;
    IGUserSession *_userSession;
    UIImage *_firstFrameImage;
    UIImageView *_stillFrameImageView;
    IGQuickCamCaptureButton *_captureButton;
    IGDirectThreadService *_threadService;
    IGDirectPublishedThread *_thread;
    IGStoryCameraDirectCenterHeaderView *_sendingHeaderView;
    UILongPressGestureRecognizer *_longPressGesture;
    struct CGPoint _lastUpdatedPointInView;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    unsigned long long _assetTarget;
    IGDirectWalkieTalkieSendingController *_sendingController;
    IGQuickCamInputCameraVideoAsset *_lastInputAsset;
    UIView *_backgroundBlurView;
    _Bool _postCaptureDidSend;
    long long _leftZoneCameraPosition;
    long long _rightZoneCameraPosition;
    NSString *_loggingSessionID;
    double _cameraRequestedTimestamp;
    IGDirectStackedProfileImageView *_avatarView;
    IGDirectWalkieTalkieSendButton *_sendButton;
    IGStoryCameraDirectHeaderView *_headerView;
}

@property(readonly, nonatomic) IGStoryCameraDirectHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) IGDirectWalkieTalkieSendButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) IGDirectStackedProfileImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)cameraViewControllerDidUpdateLightingCapability:(id)arg1;
- (void)cameraViewController:(id)arg1 startAudioSessionDidError:(id)arg2;
- (void)cameraViewControllerDidStartCameraSwitch:(id)arg1;
- (void)cameraViewController:(id)arg1 willSwitchFromCameraPosition:(long long)arg2;
- (void)cameraViewController:(id)arg1 didStartCaptureSessionWithCameraPosition:(long long)arg2 cameraOrientation:(long long)arg3;
- (void)cameraViewController:(id)arg1 didFinishWithBoomerangManager:(id)arg2;
- (void)cameraViewController:(id)arg1 didChangeLightingMode:(long long)arg2;
- (void)cameraViewController:(id)arg1 didChangeCameraState:(long long)arg2;
- (void)cameraViewController:(id)arg1 didReceiveFirstFrameAfterSwitchingCamerasWithCameraPosition:(long long)arg2 cameraOrientation:(long long)arg3;
- (struct UIEdgeInsets)cameraViewControllerSafeAreaInsets:(id)arg1;
- (void)cameraViewControllerDidStopRecording:(id)arg1;
- (void)cameraViewControllerDidStartRecording:(id)arg1;
- (void)cameraViewControllerDidReceiveFirstFrame:(id)arg1;
- (void)cameraViewControllerWillStopRecording:(id)arg1;
- (void)cameraViewController:(id)arg1 captureDidBecomeAvailable:(_Bool)arg2;
- (void)cameraViewController:(id)arg1 didSwitchToCameraPosition:(long long)arg2 withUserInput:(unsigned long long)arg3;
- (void)cameraViewController:(id)arg1 didFinishWithInputAsset:(id)arg2;
- (void)cameraViewController:(id)arg1 didUpdateRecordProgress:(double)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (double)walkieTalkieAnimatorDestinationCornerRadius;
- (struct CGRect)walkieTalkieAnimatorDestinationRect;
- (void)flippableCameraViewSwitchCameras;
- (void)cameraPreviewViewController:(id)arg1 didRequestStoryShareWithStoryModel:(id)arg2 asset:(id)arg3;
- (void)cameraPreviewViewController:(id)arg1 didRequestRecipientsWithStoryModel:(id)arg2 canOneTapSendToStoryTargets:(_Bool)arg3 asset:(id)arg4 selectedViewMode:(id)arg5;
- (void)cameraPreviewViewController:(id)arg1 didGenerateNewAsset:(id)arg2;
- (void)cameraPreviewViewControllerDidTapCancel:(id)arg1;
- (_Bool)cameraPreviewViewControllerCanShareAssetToStory:(id)arg1;
- (void)cameraPreviewViewController:(id)arg1 didSelectSendToDirectRecipients:(id)arg2 viewMode:(id)arg3 storyModel:(id)arg4 asset:(id)arg5;
- (void)_presentPreviewViewControllerWithInputAsset:(id)arg1;
- (void)_logCompletionWithExitPoint:(long long)arg1;
- (void)_dismiss;
- (_Bool)_hitMaxRecordingTime;
- (_Bool)_hasBegunRecording;
- (void)_animateCaptureElementsIntoView;
- (void)_sendAndDismiss:(id)arg1;
- (_Bool)_canFlipTo:(long long)arg1;
- (void)_flipToCameraPositionIfNecessary:(long long)arg1;
- (void)_handleGestureEnded:(id)arg1;
- (void)_handleGestureChanged:(id)arg1;
- (void)_longPressed:(id)arg1;
- (void)_updateState:(unsigned long long)arg1;
- (void)_layoutMovingUI;
- (void)_layoutChevronFlipView;
- (void)viewDidLayoutSubviews;
- (void)_setupSendingHeaderView;
- (void)_setupSendingController;
- (void)_setupPresentationManager;
- (void)_setupFeedbackGenerator;
- (void)_setupChevronFlipView;
- (void)_setupHeaderView;
- (void)_setupSendButton;
- (void)_setupCaptureButton;
- (void)_setupStillFrameImageView;
- (void)_setupFlippableCameraView;
- (void)_setupCameraViewController;
- (void)_setupCameraPosition;
- (void)_setupBackgroundBlurView;
- (void)_setupView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfig:(id)arg1 userSession:(id)arg2 threadService:(id)arg3 longPressGesture:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

