//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCoWatchContentSelectionCoordinatorDelegate.h"
#import "IGCoWatchRealtimeServiceDelegate.h"
#import "IGMinimizableContextAnimationCustomizer.h"
#import "IGMinimizableContextDelegate.h"
#import "IGPartialModalSheetListener.h"
#import "IGVideoCallCaptureControlsViewDelegate.h"
#import "IGVideoCallEndOverlayViewControllerDelegate.h"
#import "IGVideoCallFooterViewControllerDelegate.h"
#import "IGVideoCallHeaderViewDelegate.h"
#import "IGVideoCallParticipantsStateServiceListener.h"
#import "IGVideoCallRingOverlayViewControllerDelegate.h"
#import "IGVideoCallSessionListener.h"
#import "IGVideoCallViewDelegate.h"

@class IGCoWatchContentSelectionCoordinator, IGCoWatchPlaybackController, IGCoWatchRealtimeService, IGMinimizableContext, IGPartialModalSheetViewController, IGUserSession, IGVideoCallAddUsersViewController, IGVideoCallCaptureCoordinator, IGVideoCallConfiguration, IGVideoCallEndOverlayViewController, IGVideoCallFooterViewController, IGVideoCallHeaderViewController, IGVideoCallParticipantsContainerDataSource, IGVideoCallParticipantsContainerViewController, IGVideoCallRingOverlayViewController, IGVideoCallScreenBrightnessController, IGVideoCallSession, IGVideoCallVideoStreamsViewController, IGVideoCallView, NSString, UIView<IGVideoCallCaptureControlsViewProtocol>;

@interface IGVideoCallViewController : IGViewController <IGPartialModalSheetListener, IGVideoCallEndOverlayViewControllerDelegate, IGVideoCallFooterViewControllerDelegate, IGVideoCallHeaderViewDelegate, IGVideoCallParticipantsStateServiceListener, IGVideoCallRingOverlayViewControllerDelegate, IGVideoCallSessionListener, IGVideoCallViewDelegate, IGVideoCallCaptureControlsViewDelegate, IGCoWatchRealtimeServiceDelegate, IGCoWatchContentSelectionCoordinatorDelegate, IGMinimizableContextAnimationCustomizer, IGMinimizableContextDelegate>
{
    IGVideoCallSession *_videoCallSession;
    IGVideoCallCaptureCoordinator *_captureCoordinator;
    IGVideoCallView *_videoCallView;
    IGUserSession *_userSession;
    IGVideoCallConfiguration *_config;
    IGVideoCallFooterViewController *_footerViewController;
    IGVideoCallHeaderViewController *_headerViewController;
    IGVideoCallVideoStreamsViewController *_videoStreamsViewController;
    IGPartialModalSheetViewController *_addUsersContainerViewController;
    IGVideoCallParticipantsContainerViewController *_participantsAvatarViewController;
    IGVideoCallParticipantsContainerDataSource *_participantsAvatarDataSource;
    UIView<IGVideoCallCaptureControlsViewProtocol> *_captureControlsView;
    IGVideoCallRingOverlayViewController *_ringOverlayViewController;
    IGVideoCallEndOverlayViewController *_endOverlayViewController;
    _Bool _ringTimedOut;
    IGMinimizableContext *_minimizableContext;
    _Bool _audioButtonSelected;
    _Bool _videoButtonSelected;
    IGVideoCallScreenBrightnessController *_screenBrightnessController;
    struct CGRect _groupVideoViewShrunkenFrame;
    struct CGRect _groupVideoViewFullFrame;
    IGVideoCallAddUsersViewController *_addUsersViewController;
    IGCoWatchRealtimeService *_coWatchRealtimeService;
    IGCoWatchPlaybackController *_coWatchPlaybackController;
    IGCoWatchContentSelectionCoordinator *_coWatchContentSelectionCoordinator;
}

- (void).cxx_destruct;
- (void)contentSelectionCoordinator:(id)arg1 didSelectMedia:(id)arg2;
- (void)coWatchRealtimeService:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)partialModalSheetDidChangeState:(unsigned long long)arg1;
- (void)partialModalSheetDidUpdateOffset:(double)arg1 presentationProgress:(double)arg2;
- (void)partialModalSheetDidDismiss;
- (void)_dismissDirectInviteSheet;
- (void)_presentDirectInviteSheetWithGestureRecognizer:(id)arg1;
- (id)analyticsModule;
- (id)childViewControllerForStatusBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)videoCallViewDidSwipeDown:(id)arg1;
- (void)videoCallViewDidBeginPanUp:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)videoCallViewDidDoubleTap:(id)arg1;
- (void)participantsStateServiceDidReceiveState:(long long)arg1 participantPk:(id)arg2 otherParticipantPks:(id)arg3 participantUsername:(id)arg4 otherParticipantUsernames:(id)arg5;
- (void)participantsStateServiceDidReceiveState:(long long)arg1 participantPk:(id)arg2 otherParticipantPks:(id)arg3;
- (void)_resetCallStates;
- (void)_startObservingStates;
- (void)_updateChromeVisibility;
- (void)_toggleAudio:(_Bool)arg1;
- (void)_toggleVideoCaptureSessionEnabled:(_Bool)arg1;
- (void)_updateParticipantsAvatarViewVisibility;
- (void)_showBlurredAvatarIfNecessary;
- (void)_showEndCallOverlayControllerIsUserInitiated:(_Bool)arg1;
- (void)configureRingOverlayWithMode:(long long)arg1;
- (void)_leaveCallNotUserInitiated:(long long)arg1;
- (void)_leaveCallWithReason:(long long)arg1;
- (void)_showEndScreenIfNecessary;
- (void)videoCallSession:(id)arg1 didUpdateThread:(id)arg2;
- (void)videoCallSession:(id)arg1 participant:(id)arg2 didUpdateVideoState:(long long)arg3 videoView:(id)arg4 audioEnabled:(_Bool)arg5;
- (void)videoCallSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)videoCallSession:(id)arg1 participantDidJoin:(id)arg2 isFirstJoin:(_Bool)arg3 videoView:(id)arg4 videoState:(long long)arg5 audioEnabled:(_Bool)arg6 isExistingParticipant:(_Bool)arg7;
- (void)endOverlayViewControllerShouldDismiss:(id)arg1;
- (void)ringOverlayViewControllerDidTapCallAgainButton:(id)arg1;
- (void)ringOverlayViewControllerDidTapCancelButton:(id)arg1;
- (void)ringOverlayViewControllerDidTimeout:(id)arg1;
- (void)ringOverlayViewControllerDidShowEndScreen:(id)arg1 withMessageLabel:(long long)arg2;
- (void)ringOverlayViewControllerDidShowRingScreen:(id)arg1;
- (void)videoCallHeaderViewDidTapHangUpButton:(id)arg1;
- (void)videoCallHeaderViewDidTapSwitchCameraButton:(id)arg1;
- (void)videoCallHeaderViewDidTapMinimizeButton:(id)arg1;
- (void)videoCallFooterViewControllerDidTapChevron:(id)arg1;
- (void)videoCallFooterViewController:(id)arg1 didTapMessageBubble:(id)arg2;
- (void)videoCallFooterViewControllerDidTapHangUpButton:(id)arg1;
- (void)videoCallCaptureControlsViewViewDidTapAudioButton:(id)arg1 selected:(_Bool)arg2;
- (void)videoCallCaptureControlsViewDidTapVideoButton:(id)arg1 selected:(_Bool)arg2;
- (void)customizeAnimationCancelledProperties;
- (void)customizeAnimationEndProperties;
- (void)customizeAnimationStartProperties;
- (id)minimizableContextSharedObject;
- (void)minimizableContextDidMinimizeWithSharedObject:(id)arg1;
- (void)minimizableContextDidMaximizeWithSharedObject:(id)arg1;
- (void)minimizableContextWillMinimizeWithSharedObject:(id)arg1;
- (void)minimizableContextWillMaximizeWithSharedObject:(id)arg1;
- (_Bool)minimizableContextCanMaximize;
- (_Bool)minimizableContextCanMinimize;
- (void)minimizableContextDidBegin:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 videoCallSession:(id)arg2 captureCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

