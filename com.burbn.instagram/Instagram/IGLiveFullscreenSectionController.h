//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "FBFacecastFrameIdProvider.h"
#import "IGAREffectTrayViewControllerDataSource.h"
#import "IGAREffectTrayViewControllerPresentationDelegate.h"
#import "IGDirectShareSheetControllerDelegate.h"
#import "IGDirectVerticalShareSheetWarningMessageDataSource.h"
#import "IGFNFVideoPlayerLiveDelegate.h"
#import "IGKeyboardObserverFrameChangeDelegate.h"
#import "IGListDisplayDelegate.h"
#import "IGListScrollDelegate.h"
#import "IGLiveFeedbackControllerDelegate.h"
#import "IGLiveInteractivityHelperDelegate.h"
#import "IGLiveInteractivityServiceDelegate.h"
#import "IGLiveRealtimeSubmitQuestionViewControllerDelegate.h"
#import "IGLiveViewerActionSheetControllerDelegate.h"
#import "IGLiveViewerViewDelegate.h"
#import "IGLiveWithAutoAcceptCountdownViewControllerDelegate.h"
#import "IGLiveWithGuestBroadcastViewControllerDelegate.h"
#import "IGLiveWithGuestEndViewControllerDelegate.h"
#import "IGLiveWithPrivacyConfirmationViewControllerDelegate.h"
#import "IGStoryCameraPermissionViewControllerDelegate.h"
#import "IGStoryFullscreenControllerType.h"
#import "IGStoryFullscreenSectionLoggingContextStoryDataSource.h"
#import "IGStoryPlayerMediaViewDelegate.h"
#import "IGVideoPlaybackLoggingExtrasProvider.h"

@class FBFacecastE2ELogger, FBTimer, IGAREffectTrayViewController, IGCallRemoteMessageHandler, IGKeyboardObserver, IGLiveAutoAcceptCountdownViewController, IGLiveBroadcast, IGLiveBroadcastConfig, IGLiveBroadcastInfoQueryService, IGLiveBroadcastInviteLoggingContext, IGLiveBroadcastLoggingContext, IGLiveCommentModel, IGLiveCommentViewUpdater, IGLiveFeedbackController, IGLiveFlaggedCommentLedger, IGLiveHalfSheetTransition, IGLiveInteractivityService, IGLiveInteractivityTimestampHelper, IGLiveNotificationStore, IGLivePlaybackLoggingContext, IGLiveRealtimeSubmitQuestionViewController, IGLiveViewerActionSheetController, IGLiveViewerListViewController, IGLiveWaveService, IGLiveWithGuestBroadcastViewController, IGLiveWithGuestEndViewController, IGLiveWithPrivacyConfirmationViewController, IGMediaManager, IGRealtimeStatusQuerier, IGStoryCameraPermissionViewController, IGStoryViewerConfiguration, IGStoryViewerLoggingContext, IGStoryViewerViewModel, IGUser, IGUserSession, NSError, NSString, UIColor;

@interface IGLiveFullscreenSectionController : IGListSectionController <FBFacecastFrameIdProvider, IGAREffectTrayViewControllerPresentationDelegate, IGKeyboardObserverFrameChangeDelegate, IGListDisplayDelegate, IGListScrollDelegate, IGLiveFeedbackControllerDelegate, IGLiveRealtimeSubmitQuestionViewControllerDelegate, IGLiveViewerActionSheetControllerDelegate, IGLiveViewerViewDelegate, IGLiveWithGuestBroadcastViewControllerDelegate, IGLiveWithGuestEndViewControllerDelegate, IGLiveWithPrivacyConfirmationViewControllerDelegate, IGStoryCameraPermissionViewControllerDelegate, IGStoryFullscreenSectionLoggingContextStoryDataSource, IGStoryPlayerMediaViewDelegate, IGDirectShareSheetControllerDelegate, IGDirectVerticalShareSheetWarningMessageDataSource, IGLiveWithAutoAcceptCountdownViewControllerDelegate, IGVideoPlaybackLoggingExtrasProvider, IGLiveInteractivityServiceDelegate, IGFNFVideoPlayerLiveDelegate, IGLiveInteractivityHelperDelegate, IGAREffectTrayViewControllerDataSource, IGStoryFullscreenControllerType>
{
    IGLiveBroadcastConfig *_liveBroadcastConfig;
    id <IGDirectReplyToAuthorViewControllerPresenting> _directReplyToAuthorPresenter;
    IGRealtimeStatusQuerier *_realtimeStatusQuerier;
    long long _storyImpressionRefactorConfig;
    _Bool _isLiveARDisabled;
    _Bool _isAcceptingQuestions;
    _Bool _requestToJoinEnabled;
    IGLiveBroadcast *_currentBroadcast;
    IGLiveBroadcastInfoQueryService *_broadcastInfoQueryService;
    IGLiveFeedbackController *_feedbackController;
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    IGKeyboardObserver *_keyboardObserver;
    IGStoryViewerConfiguration *_configuration;
    IGStoryViewerLoggingContext *_storyLoggingContext;
    FBFacecastE2ELogger *_e2eLogger;
    IGLivePlaybackLoggingContext *_sectionLoggingContext;
    long long _entryPoint;
    _Bool _hasStartedPlaying;
    IGLiveFlaggedCommentLedger *_flaggedCommentLedger;
    IGLiveNotificationStore *_notificationStore;
    IGMediaManager *_mediaManager;
    _Bool _needsStartPulling;
    IGUser *_currentUser;
    _Bool _isStopped;
    _Bool _isBuffering;
    _Bool _isStoppedForPolicyViolation;
    NSString *_policyViolationReason;
    IGLiveViewerActionSheetController *_actionSheetController;
    IGLiveCommentViewUpdater *_commentViewUpdater;
    id <IGDirectShareSheetControlling> _viewerInviteController;
    IGLiveBroadcastInviteLoggingContext *_viewerInviteLoggingContext;
    IGCallRemoteMessageHandler *_remoteCallMessageHandler;
    UIColor *_cellBackgroundColor;
    _Bool _shouldShowLiveTitle;
    long long _currentBroadcastStatus;
    _Bool _newRetryMode;
    long long _retryCounter;
    FBTimer *_retryTimer;
    NSError *_currentLoadingError;
    IGLiveWithGuestBroadcastViewController *_liveWithGuestBroadcastViewController;
    IGLiveWithPrivacyConfirmationViewController *_privacyConfirmationViewController;
    IGLiveViewerListViewController *_viewerListViewController;
    IGStoryCameraPermissionViewController *_cameraPermissionViewController;
    IGLiveWithGuestEndViewController *_liveWithGuestEndViewController;
    long long _liveWithState;
    FBTimer *_liveWithInviteDismissTimer;
    IGLiveBroadcastLoggingContext *_liveWithGuestLoggingContext;
    long long _liveWithLoggingState;
    IGUser *_cobroadcaster;
    IGAREffectTrayViewController *_arEffectTrayViewController;
    _Bool _isShowingAREffectTray;
    _Bool _isAnimatingAREffectTray;
    double _arEffectStaticHintDisplayDurationInSeconds;
    IGLiveCommentModel *_requestToJoinPrompt;
    _Bool _pendingRequestToJoin;
    IGLiveAutoAcceptCountdownViewController *_autoAcceptCountdownViewController;
    IGLiveHalfSheetTransition *_countdownViewControllerTransition;
    IGLiveCommentModel *_selfJoinComment;
    IGLiveWaveService *_waveService;
    IGLiveInteractivityService *_interactivityService;
    IGLiveInteractivityTimestampHelper *_timestampHelper;
    IGLiveRealtimeSubmitQuestionViewController *_submitQuestionViewController;
    _Bool _audioEnabled;
    _Bool _isFocusedController;
    _Bool _wasCurrentUserCobroadcaster;
    IGStoryViewerViewModel *_viewModel;
    id <IGStoryFullscreenControllerTypeDelegate> _delegate;
    id <IGStoryBrowsableFullscreenSectionControllerDelegate> _browsingDelegate;
    long long _errorType;
}

+ (_Bool)_shouldStopPlaybackWithStatus:(long long)arg1;
@property(nonatomic) _Bool wasCurrentUserCobroadcaster; // @synthesize wasCurrentUserCobroadcaster=_wasCurrentUserCobroadcaster;
@property(nonatomic) _Bool isFocusedController; // @synthesize isFocusedController=_isFocusedController;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) __weak id <IGStoryBrowsableFullscreenSectionControllerDelegate> browsingDelegate; // @synthesize browsingDelegate=_browsingDelegate;
@property(nonatomic) __weak id <IGStoryFullscreenControllerTypeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGStoryViewerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
- (void).cxx_destruct;
- (double)_bottomSafeAreaOffset;
- (void)_reloadLiveBroadcastConfig;
- (id)_videoStartReasonString;
- (id)extrasForEventType:(unsigned long long)arg1;
- (void)timestampHelper:(id)arg1 didReceiveHistoricalEvent:(id)arg2 atApproximateTimestamp:(double)arg3;
- (void)timestampHelper:(id)arg1 removeCurrentEventAtTimestamp:(double)arg2;
- (void)timestampHelper:(id)arg1 didReceiveEvent:(id)arg2 atTimestamp:(double)arg3;
- (void)videoPlayer:(id)arg1 didUpdateToElapsedTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didSeekToElapsedTime:(double)arg2;
- (void)interactivityServiceQuestionSubmissionStatusDidChange:(_Bool)arg1 submittedQuestionCount:(long long)arg2;
- (void)interactivityService:(id)arg1 didReceiveQuestionEvent:(id)arg2;
- (void)autoAcceptCountdownViewControllerDismissed:(_Bool)arg1;
- (void)_arEffectTrayViewControllerDidHideView:(id)arg1;
- (void)arEffectTrayViewControllerDidShowView:(id)arg1;
- (void)directVerticalShareSheetControllerDidTapSMSShareWithHostingViewController:(id)arg1 shareLocation:(id)arg2;
- (void)directVerticalShareSheetControllerDidTapWhatsappShareWithHostingViewController:(id)arg1 shareLocation:(id)arg2;
- (void)directVerticalShareSheetControllerDidTapGeneralShareWithHostingViewController:(id)arg1 shareLocation:(id)arg2;
- (void)directVerticalShareSheetControllerDidTapCopyLinkWithHostingViewController:(id)arg1 shareLocation:(id)arg2;
- (void)directVerticalShareSheetControllerDidTapReplyToAuthorWithFeedItem:(id)arg1 sourceViewController:(id)arg2;
- (void)directVerticalShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directVerticalShareSheetControllerDidDismissReshareSheet:(id)arg1;
- (void)directVerticalShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5;
- (id)directVerticalShareSheetWarningMessage;
- (void)liveWithGuestBroadcastViewControllerDidUpdateAREffects:(id)arg1;
- (void)liveWithGuestBroadcastViewController:(id)arg1 didUpdateAREffectTouchSupportedStatus:(_Bool)arg2;
- (void)liveWithGuestBroadcastViewController:(id)arg1 showAREffectInstructions:(id)arg2 forDuration:(double)arg3;
- (void)liveWithGuestBroadcastViewControllerDidHideAREffectInstructions:(id)arg1;
- (void)liveWithGuestBroadcastViewControllerDidApplyAREffect:(id)arg1;
- (void)liveWithGuestBroadcastViewController:(id)arg1 arEffectIsAvailable:(_Bool)arg2;
- (void)liveWithGuestBroadcastViewControllerIsReadyToProcessNewAREffect:(id)arg1;
- (void)liveWithGuestBroadcastViewControllerDidTurnOffAREffect:(id)arg1;
- (void)liveWithGuestBroadcastViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)liveWithGuestBroadcastViewControllerDidDismissFromCall:(id)arg1 reason:(long long)arg2;
- (void)liveWithGuestBroadcastViewControllerDidReceiveInvitation:(id)arg1;
- (void)liveWithGuestBroadcastViewControllerDidJoinBroadcast:(id)arg1;
- (long long)arEffectTrayViewControllerSurface:(id)arg1;
- (void)rejectButtonTappedInPrivacyConfirmationViewController:(id)arg1;
- (void)acceptButtonTappedInPrivacyConfirmationViewController:(id)arg1;
- (void)permissionViewControllerWillOpenSettings:(id)arg1;
- (void)permissionViewControllerDidTapEnableAudio:(id)arg1;
- (void)permissionViewControllerDidTapEnableVideo:(id)arg1;
- (void)permissionViewControllerDidAuthorizeAudio:(id)arg1;
- (void)permissionViewControllerDidAuthorizeVideo:(id)arg1;
- (void)permissionViewControllerDidCancel:(id)arg1;
- (void)permissionViewControllerDidAuthorizeAudioAndVideo:(id)arg1;
- (void)_dismissPermissionOverlay;
- (void)_presentMissingPermissionOverlay;
- (void)liveWithGuestEndViewControllerDidPressDoneButton:(id)arg1;
- (void)_dismissEndViewControllerIfCurrentlyShowing;
- (void)_joinBroadcast;
- (void)_switchFromGuestToViewerWithReason:(long long)arg1 error:(id)arg2;
- (void)_dismissPendingUserInputUIElements;
- (void)_endGuestSessionWithReason:(long long)arg1 error:(id)arg2;
- (void)_beginGuestSessionWithBroadcastId:(id)arg1;
- (void)actionSheetController:(id)arg1 didTapDeleteComment:(id)arg2 broadcast:(id)arg3;
- (void)actionSheetControllerDidCancel:(id)arg1;
- (void)actionSheetControllerDidTapStorySettings:(id)arg1;
- (void)actionSheetControllerDidTapInviteToWatch:(id)arg1;
- (void)actionSheetController:(id)arg1 didSelectViewBroadcasterProfile:(id)arg2;
- (void)actionSheetControllerDidDeletePostLiveBroadcast:(id)arg1;
- (void)actionSheetController:(id)arg1 didSFPLTBroadcast:(id)arg2;
- (void)actionSheetController:(id)arg1 didReportBroadcast:(id)arg2 isSpam:(_Bool)arg3;
- (void)actionSheetController:(id)arg1 didReportComment:(id)arg2 inBroadcast:(id)arg3 isSpam:(_Bool)arg4;
- (void)actionSheetController:(id)arg1 didTapReportBroadcast:(id)arg2;
- (void)realtimeSubmitQuestionViewController:(id)arg1 didDismissWithQuestion:(id)arg2;
- (void)willDismissRealtimeSubmitQuestionViewController:(id)arg1;
- (void)_onAppWillResignActive:(id)arg1;
- (void)_reloadMediaFromFailure;
- (void)_updateViewerOverlayViewWithInteractivityEvent:(id)arg1;
- (_Bool)_canBrowseStories;
- (void)_handleWaveMessage;
- (void)_submitQuestionToBroadcaster:(id)arg1;
- (void)_presentSubmitQuestionController;
- (void)_presentViewerInviteController;
- (void)_presentViewerList;
- (void)_hideAREffectTray;
- (void)_showAREffectTray;
- (void)_toggleAREffectTray;
- (void)_resetFeedbackController;
- (void)_handlePlaybackEndedWithViewerOverlayView:(id)arg1;
- (void)_updateVideoPauseForReason:(long long)arg1;
- (id)_systemCommentForSelfJoin;
- (void)_invalidateRetryTimer;
- (void)_updateWithBroadcastInfo:(id)arg1;
- (void)_closeLiveViewer;
- (_Bool)_hasActiveLiveWithSession;
- (void)_scheduleRetryTimer;
- (void)_cancelJoinRequestIfNeeded;
- (_Bool)_requestToJoinEnabled;
- (void)_markRequestToJoinCommentAsSent:(_Bool)arg1;
- (void)_showDefaultSentHUD;
- (void)_showRealtimeQuestionDidFailToSendAlert;
- (void)_showRealtimeQuestionSentHUD;
- (void)_showRequestSentHUD;
- (void)_sendJoinRequest:(CDUnknownBlockType)arg1;
- (void)_presentPrivacyConfimationViewController;
- (void)_didTapOnRequestToJoinComment;
- (void)_insertRequestToJoinComment;
- (void)_hideAREffectInstructions;
- (void)_showAREffectInstructions:(id)arg1 forDuration:(double)arg2;
- (void)_showAREffectInstructions:(id)arg1;
- (void)_updateAREffectInstructionState:(id)arg1;
- (id)story;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (CDStruct_1b6d18a9)getFrameId;
- (void)feedbackControllerDidFetchCommentMuteStatus:(_Bool)arg1;
- (void)feedbackControllerDidFailToUnmuteComments:(id)arg1;
- (void)feedbackControllerDidFailToMuteComments:(id)arg1;
- (void)feedbackController:(id)arg1 didFailToUnpinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didFailToPinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didFetchPinnedComment:(id)arg2;
- (void)feedbackController:(id)arg1 hasLikerProfileImageReadyToDisplay:(id)arg2 likeCount:(long long)arg3 fromSelf:(_Bool)arg4 overDuration:(double)arg5;
- (void)feedbackController:(id)arg1 hasNumLikesReadyToDisplay:(long long)arg2 fromSelf:(_Bool)arg3 overDuration:(double)arg4 likeAnimationType:(unsigned long long)arg5;
- (void)feedbackController:(id)arg1 didHaveBroadcastUpdate:(id)arg2;
- (void)feedbackController:(id)arg1 didReplaceCommentWithPk:(id)arg2 withComment:(id)arg3;
- (void)feedbackController:(id)arg1 didRemoveComment:(id)arg2;
- (void)feedbackController:(id)arg1 hasCommentsReadyToDisplay:(id)arg2 shouldLogImpression:(_Bool)arg3;
- (void)viewerViewDidRequestToHideTrays:(id)arg1;
- (void)viewerViewDidTapAREffectButton:(id)arg1;
- (void)viewerView:(id)arg1 didChangeZoomScaleWithDelta:(double)arg2;
- (void)viewerViewDidDoubleTap:(id)arg1;
- (void)viewerView:(id)arg1 didTapWithGestureRecognizer:(id)arg2;
- (void)viewerViewDidTapDismissGuestButton:(id)arg1;
- (void)cancelButtonTappedInViewerView:(id)arg1;
- (void)switchCameraButtonTappedInViewerView:(id)arg1;
- (void)seeCompassionWebResourceTappedInViewerView:(id)arg1;
- (void)liveWithInviteButtonTappedInViewerView:(id)arg1;
- (void)submitQuestionButtonTappedInViewerView:(id)arg1;
- (void)viewerInviteButtonTappedInViewerView:(id)arg1;
- (void)trayButtonTappedInViewerView:(id)arg1;
- (void)viewerView:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3 cell:(id)arg4;
- (void)viewerViewDidChangeCommentText:(id)arg1;
- (void)viewerView:(id)arg1 didEnterCommentText:(id)arg2 commentLoggingExtras:(id)arg3;
- (void)startLiveVideoButtonTappedInViewerView:(id)arg1;
- (void)moreButtonTappedInViewerView:(id)arg1;
- (void)likeButtonBeganLongPressInViewerView:(id)arg1;
- (void)likeButtonTappedInViewerView:(id)arg1;
- (void)_navigateToUserProfile:(id)arg1;
- (void)viewerCountButtonTappedInViewerView:(id)arg1;
- (void)broadcasterProfileTappedInViewerView:(id)arg1;
- (void)closeButtonTappedInViewerView:(id)arg1;
- (void)storyPlayerMediaView:(id)arg1 didGenerateVideoPlaybackWarningWithError:(id)arg2;
- (void)storyPlayerMediaViewDidFailToPlayback:(id)arg1 error:(id)arg2;
- (void)storyPlayerMediaViewDidFailToLoadImage:(id)arg1 error:(id)arg2 networkRequestSummary:(id)arg3;
- (void)storyPlayerMediaView:(id)arg1 willLoadURL:(id)arg2;
- (void)storyPlayerMediaViewDidLoadPreview:(id)arg1 progressiveJPEGScanNumber:(id)arg2;
- (void)storyPlayerMediaViewDidPlay:(id)arg1;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(id)arg1;
- (void)storyPlayerMediaViewDidPlayToEnd:(id)arg1;
- (void)storyPlayerMediaView:(id)arg1 didUpdateProgress:(double)arg2 player:(id)arg3 captionController:(id)arg4;
- (void)storyPlayerMediaViewDidLoad:(id)arg1 loadSource:(id)arg2 networkRequestSummary:(id)arg3;
- (void)_configureForBroadcastInterruptionIfNeeded;
- (void)_configureVideoView:(id)arg1 broadcast:(id)arg2 coverFrameEnabled:(_Bool)arg3;
- (void)_configureMediaViewForCell:(id)arg1;
- (void)_configureViewerOverlayViewForCell:(id)arg1;
- (id)_visibleMediaView;
- (id)_visibleViewerOverlayView;
- (id)_visibleCell;
- (id)sectionLoggingContext;
- (void)setFooterHidden:(_Bool)arg1;
- (void)seekToBeginning;
- (void)resetSeenState;
- (void)stopWithReason:(long long)arg1;
- (void)_pauseWithReason:(long long)arg1 stopPulling:(_Bool)arg2;
- (void)pauseWithReason:(long long)arg1;
- (void)_logVideoShouldStartIfNeeded;
- (void)tryResumePlayback;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)_willDisplayCell:(id)arg1 atIndex:(long long)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (id)currentStoryItem;
- (id)scrollDelegate;
- (id)displayDelegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 storyLoggingContext:(id)arg2 entryPoint:(long long)arg3 viewerConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

