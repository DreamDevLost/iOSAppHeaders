//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAddHighlightsSheetDelegate.h"
#import "IGAddPartnerInStoryWebLinksCreationViewControllerDelegate.h"
#import "IGBrandedContentUpsellHelperDelegate.h"
#import "IGCountdownStickerCreationViewControllerDelegate.h"
#import "IGDirectThreadInfoPresenterDelegate.h"
#import "IGDirectVisualMessageViewModeNuxDelegate.h"
#import "IGFundraiserStickerCreationViewControllerDelegate.h"
#import "IGHashtagStickerCreationViewControllerDelegate.h"
#import "IGMentionStickerCreationViewControllerDelegate.h"
#import "IGMusicStickerPostCaptureControllerDataSource.h"
#import "IGMusicStickerPostCaptureControllerDelegate.h"
#import "IGNotificationHandler.h"
#import "IGPasteAlertControllerDelegate.h"
#import "IGPollStickerCreationViewControllerDelegate.h"
#import "IGPostCaptureARControllerDelegate.h"
#import "IGPostCaptureARControllerPresenter.h"
#import "IGProductStickerCreationViewControllerDataSource.h"
#import "IGProductStickerCreationViewControllerDelegate.h"
#import "IGQuestionAnswerStickerViewControllerDataSource.h"
#import "IGQuestionAnswerStickerViewControllerDelegate.h"
#import "IGQuizStickerCreationViewControllerDelegate.h"
#import "IGSliderStickerCreationViewControllerDataSource.h"
#import "IGSliderStickerCreationViewControllerDelegate.h"
#import "IGSoundStateListenerDelegate.h"
#import "IGStoryAssetManagerDelegate.h"
#import "IGStoryCreationDrawingViewControllerDataSource.h"
#import "IGStoryCreationDrawingViewControllerDelegate.h"
#import "IGStoryLinkCreationViewControllerDelegate.h"
#import "IGStoryMediaReplyOverlayControllerDelegate.h"
#import "IGStoryMusicBrowserViewControllerDelegate.h"
#import "IGStoryPostCaptureEditingViewControllerProtocol.h"
#import "IGStoryPreviewFooterViewDelegate.h"
#import "IGStoryPreviewOverlayContainerViewDelegate.h"
#import "IGStoryPreviewOverlayGestureControllerAlignmentDelegate.h"
#import "IGStoryPreviewOverlayGestureControllerDelegate.h"
#import "IGStoryPreviewOverlayGestureControllerPanDelegate.h"
#import "IGStoryPreviewPlaybackControllerDelegate.h"
#import "IGStoryShareToFbOptionsControllerDelegate.h"
#import "IGStoryStickerAddingRulesDataSource.h"
#import "IGStoryStickerControllerDataSource.h"
#import "IGStoryStickerPinningControlsViewDelegate.h"
#import "IGStoryStickerTrayViewControllerDelegate.h"
#import "IGStoryStickerTrayViewControllerStickerSelectionDelegate.h"
#import "IGStorySwipableFilterViewDelegate.h"
#import "IGStoryTextEntryViewControllerDataSource.h"
#import "IGStoryTextEntryViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGAREffectButton, IGARLinkStoryGalleryProcessor, IGBrandedContentUpsellHelper, IGDirectThreadService, IGDirectVisualMessageViewModeNuxView, IGDrawCanvasView, IGFavoritesAlertController, IGForceTouchGestureRecognizer, IGGradientView, IGMusicStickerPostCaptureController, IGNametagLoggingContext, IGPassthroughView, IGPasteAlertController, IGPollStickerVoteView, IGPostCaptureARController, IGRegionTrackingController, IGRichTextFormat, IGSoundStateListener, IGStackView, IGStickerCaptureManager, IGStoryAssetManager, IGStoryCameraLoadingOverlayView, IGStoryCreationConfiguration, IGStoryCreationHighlightConfig, IGStoryCreationModel, IGStoryFullscreenWordOverlayView, IGStoryGalleryARAttributionManager, IGStoryGradientRingView, IGStoryLandscapeNuxPresenter, IGStoryLinkCreationViewController, IGStoryMediaGestureController, IGStoryMediaReplyOverlayController, IGStoryOverlayTapModel, IGStoryPostCaptureHeaderView, IGStoryPreviewDeleteOptionView, IGStoryPreviewOverlayContainerView, IGStoryPreviewOverlayGestureController, IGStorySaveMediaRequest, IGStoryShareToFbOptionsController, IGStoryStickerController, IGStoryStickerDataSource, IGStoryStickerPinningControlsView, IGStoryStickerTrayStateModel, IGStorySwipableFilterLabelView, IGStorySwipableFilterView, IGStoryViewerOverlayPreviewView, IGUserSession, IGVerticalEdgeReflectingView, NSArray, NSString, UIImage, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, UIView<IGStoryPreviewFooterViewType>, UIViewController, UIViewController<IGStoryCreationDrawingViewControllerType>, UIViewController<IGStoryStickerEditingViewControllerProtocol>;

@interface IGStoryCameraPreviewViewController : IGViewController <IGAddPartnerInStoryWebLinksCreationViewControllerDelegate, IGCountdownStickerCreationViewControllerDelegate, IGDirectThreadInfoPresenterDelegate, IGDirectVisualMessageViewModeNuxDelegate, IGFundraiserStickerCreationViewControllerDelegate, IGHashtagStickerCreationViewControllerDelegate, IGMentionStickerCreationViewControllerDelegate, IGPasteAlertControllerDelegate, IGPollStickerCreationViewControllerDelegate, IGProductStickerCreationViewControllerDataSource, IGProductStickerCreationViewControllerDelegate, IGSoundStateListenerDelegate, IGSliderStickerCreationViewControllerDelegate, IGSliderStickerCreationViewControllerDataSource, IGStoryAssetManagerDelegate, IGStoryCreationDrawingViewControllerDelegate, IGStoryCreationDrawingViewControllerDataSource, IGStoryPreviewFooterViewDelegate, IGStoryPreviewOverlayGestureControllerAlignmentDelegate, IGStoryPreviewOverlayGestureControllerDelegate, IGStoryPreviewOverlayGestureControllerPanDelegate, IGStoryMediaReplyOverlayControllerDelegate, IGStoryStickerAddingRulesDataSource, IGStoryStickerPinningControlsViewDelegate, IGStoryStickerTrayViewControllerDelegate, IGStorySwipableFilterViewDelegate, IGStoryTextEntryViewControllerDelegate, IGStoryTextEntryViewControllerDataSource, IGStoryLinkCreationViewControllerDelegate, IGStoryStickerControllerDataSource, IGStoryPreviewPlaybackControllerDelegate, UIGestureRecognizerDelegate, IGAddHighlightsSheetDelegate, IGBrandedContentUpsellHelperDelegate, IGStoryPreviewOverlayContainerViewDelegate, IGQuestionAnswerStickerViewControllerDelegate, IGQuestionAnswerStickerViewControllerDataSource, IGQuizStickerCreationViewControllerDelegate, IGStoryShareToFbOptionsControllerDelegate, IGMusicStickerPostCaptureControllerDataSource, IGMusicStickerPostCaptureControllerDelegate, IGStoryStickerTrayViewControllerStickerSelectionDelegate, IGStoryMusicBrowserViewControllerDelegate, IGStoryPostCaptureEditingViewControllerProtocol, IGNotificationHandler, IGPostCaptureARControllerPresenter, IGPostCaptureARControllerDelegate>
{
    _Bool _isInitialViewWillAppear;
    IGBrandedContentUpsellHelper *_brandedContentUpsellHelper;
    IGStoryCreationHighlightConfig *_creationHighlightConfig;
    NSArray *_initialTapModels;
    UIImage *_previewImage;
    IGStackView *_rightControlsView;
    IGPostCaptureARController *_postCaptureController;
    NSString *_burnedInAREffectID;
    _Bool _enableFreeformMediaTransform;
    IGStoryLandscapeNuxPresenter *_landscapeNuxPresenter;
    IGStoryMediaGestureController *_mediaGestureController;
    struct IGCompositionFilterTransform _previousMediaTransform;
    IGNametagLoggingContext *_nametagLoggingContext;
    UIViewController<IGStoryStickerEditingViewControllerProtocol> *_presentedStickerEditingViewController;
    _Bool _hashtagStickerShowTapForMoreLabelAfterEditing;
    IGRichTextFormat *_defaultTextFormat;
    IGStoryShareToFbOptionsController *_shareToFbOptionsController;
    _Bool _hasAnimatedLandscapeNUX;
    long long _controlsPosition;
    IGMusicStickerPostCaptureController *_musicPostCaptureController;
    IGStickerCaptureManager *_stickerCaptureManager;
    id <IGAlertHUDHandling> _alertHandler;
    IGStoryGalleryARAttributionManager *_galleryAttributionManager;
    _Bool _hasShownAutoAddedPollSticker;
    unsigned long long _entryPoint;
    _Bool _iglMetalEnabled;
    _Bool _mentionsEnabled;
    _Bool _hashtagTextEnabled;
    _Bool _canZoomScreenForBoomerangToggle;
    _Bool _stickerPinningModeActive;
    _Bool _pinningReverseInProgress;
    _Bool _isPresentingStickerTray;
    _Bool _isPresentingOverlay;
    _Bool _isPositioningSticker;
    _Bool _viewerHeaderPreviewVisible;
    _Bool _viewerFooterPreviewVisible;
    _Bool _shareToFacebookWithShortcut;
    id <IGStoryCameraPreviewViewControllerDelegate> _delegate;
    id <IGStoryCameraDirectShareRecipientSource> _recipientSource;
    id <IGStoryCameraPreviewViewControllerInteractionObserver> _interactionObserver;
    IGStoryPostCaptureHeaderView *_headerView;
    UIView<IGStoryPreviewFooterViewType> *_footerView;
    IGStoryAssetManager *_assetManager;
    UIView *_mediaCompositionView;
    UIImage *_mediaCompositionViewSnapshot;
    IGStoryCreationConfiguration *_configuration;
    IGDirectThreadService *_threadService;
    IGUserSession *_userSession;
    IGDirectVisualMessageViewModeNuxView *_viewModeNuxView;
    UIView *_containerView;
    IGPassthroughView *_safeAreaContainerView;
    UIImageView *_previewImageView;
    UIView *_contentView;
    IGVerticalEdgeReflectingView *_edgeReflectingView;
    IGStoryCreationModel *_storyModel;
    IGStorySaveMediaRequest *_saveRequest;
    IGGradientView *_topGradient;
    IGGradientView *_bottomGradient;
    IGStoryMediaReplyOverlayController *_referenceMediaReplyOverlayController;
    IGStoryMediaReplyOverlayController *_mediaReplyOverlayController;
    IGStoryPreviewOverlayContainerView *_overlayContainerView;
    IGStoryPreviewDeleteOptionView *_deleteOptionView;
    UITapGestureRecognizer *_captionBackgroundTapRecognizer;
    IGStoryPreviewOverlayGestureController *_gestureController;
    IGDrawCanvasView *_drawCanvasView;
    UIViewController<IGStoryCreationDrawingViewControllerType> *_drawingViewController;
    IGStorySwipableFilterView *_swipableFilterView;
    IGStorySwipableFilterLabelView *_swipableFilterLabelView;
    IGSoundStateListener *_soundStateListener;
    id <IGStoryPreviewPlaybackControlling> _playbackController;
    IGStoryLinkCreationViewController *_webLinksCreationViewController;
    IGStoryGradientRingView *_loadingView;
    IGStoryFullscreenWordOverlayView *_fullscreenWordOverlayView;
    IGStoryCameraLoadingOverlayView *_loadingOverlayView;
    IGForceTouchGestureRecognizer *_togglePlaybackGesture;
    IGForceTouchGestureRecognizer *_toggleBoomerangGesture;
    IGStoryStickerDataSource *_stickerDataSource;
    IGStoryStickerController *_stickerController;
    IGStoryStickerTrayStateModel *_lastTrayStateModel;
    IGRegionTrackingController *_regionTrackingController;
    IGStoryStickerPinningControlsView *_stickerPinningControlsView;
    UISwipeGestureRecognizer *_stickerTraySwipeUpGesture;
    IGFavoritesAlertController *_favoritesAlertController;
    IGPasteAlertController *_pasteAlertController;
    IGPollStickerVoteView *_sharedPollStickerView;
    IGStoryOverlayTapModel *_sharedPollStickerTapModel;
    IGStoryViewerOverlayPreviewView *_viewerOverlayPreviewView;
    IGARLinkStoryGalleryProcessor *_ARLinkStoryGalleryProcessor;
    UIView *_arGesturesView;
}

@property(retain, nonatomic) UIView *arGesturesView; // @synthesize arGesturesView=_arGesturesView;
@property(nonatomic) _Bool shareToFacebookWithShortcut; // @synthesize shareToFacebookWithShortcut=_shareToFacebookWithShortcut;
@property(readonly, nonatomic) IGARLinkStoryGalleryProcessor *ARLinkStoryGalleryProcessor; // @synthesize ARLinkStoryGalleryProcessor=_ARLinkStoryGalleryProcessor;
@property(nonatomic) _Bool viewerFooterPreviewVisible; // @synthesize viewerFooterPreviewVisible=_viewerFooterPreviewVisible;
@property(nonatomic) _Bool viewerHeaderPreviewVisible; // @synthesize viewerHeaderPreviewVisible=_viewerHeaderPreviewVisible;
@property(retain, nonatomic) IGStoryViewerOverlayPreviewView *viewerOverlayPreviewView; // @synthesize viewerOverlayPreviewView=_viewerOverlayPreviewView;
@property(nonatomic) _Bool isPositioningSticker; // @synthesize isPositioningSticker=_isPositioningSticker;
@property(nonatomic) _Bool isPresentingOverlay; // @synthesize isPresentingOverlay=_isPresentingOverlay;
@property(nonatomic) _Bool isPresentingStickerTray; // @synthesize isPresentingStickerTray=_isPresentingStickerTray;
@property(readonly, nonatomic) IGStoryOverlayTapModel *sharedPollStickerTapModel; // @synthesize sharedPollStickerTapModel=_sharedPollStickerTapModel;
@property(readonly, nonatomic) IGPollStickerVoteView *sharedPollStickerView; // @synthesize sharedPollStickerView=_sharedPollStickerView;
@property(readonly, nonatomic) IGPasteAlertController *pasteAlertController; // @synthesize pasteAlertController=_pasteAlertController;
@property(readonly, nonatomic) IGFavoritesAlertController *favoritesAlertController; // @synthesize favoritesAlertController=_favoritesAlertController;
@property(retain, nonatomic) UISwipeGestureRecognizer *stickerTraySwipeUpGesture; // @synthesize stickerTraySwipeUpGesture=_stickerTraySwipeUpGesture;
@property(nonatomic) _Bool pinningReverseInProgress; // @synthesize pinningReverseInProgress=_pinningReverseInProgress;
@property(nonatomic) _Bool stickerPinningModeActive; // @synthesize stickerPinningModeActive=_stickerPinningModeActive;
@property(retain, nonatomic) IGStoryStickerPinningControlsView *stickerPinningControlsView; // @synthesize stickerPinningControlsView=_stickerPinningControlsView;
@property(retain, nonatomic) IGRegionTrackingController *regionTrackingController; // @synthesize regionTrackingController=_regionTrackingController;
@property(readonly, nonatomic) IGStoryStickerTrayStateModel *lastTrayStateModel; // @synthesize lastTrayStateModel=_lastTrayStateModel;
@property(readonly, nonatomic) IGStoryStickerController *stickerController; // @synthesize stickerController=_stickerController;
@property(readonly, nonatomic) IGStoryStickerDataSource *stickerDataSource; // @synthesize stickerDataSource=_stickerDataSource;
@property(nonatomic) _Bool canZoomScreenForBoomerangToggle; // @synthesize canZoomScreenForBoomerangToggle=_canZoomScreenForBoomerangToggle;
@property(retain, nonatomic) IGForceTouchGestureRecognizer *toggleBoomerangGesture; // @synthesize toggleBoomerangGesture=_toggleBoomerangGesture;
@property(retain, nonatomic) IGForceTouchGestureRecognizer *togglePlaybackGesture; // @synthesize togglePlaybackGesture=_togglePlaybackGesture;
@property(retain, nonatomic) IGStoryCameraLoadingOverlayView *loadingOverlayView; // @synthesize loadingOverlayView=_loadingOverlayView;
@property(retain, nonatomic) IGStoryFullscreenWordOverlayView *fullscreenWordOverlayView; // @synthesize fullscreenWordOverlayView=_fullscreenWordOverlayView;
@property(retain, nonatomic) IGStoryGradientRingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) IGStoryLinkCreationViewController *webLinksCreationViewController; // @synthesize webLinksCreationViewController=_webLinksCreationViewController;
@property(retain, nonatomic) id <IGStoryPreviewPlaybackControlling> playbackController; // @synthesize playbackController=_playbackController;
@property(retain, nonatomic) IGSoundStateListener *soundStateListener; // @synthesize soundStateListener=_soundStateListener;
@property(retain, nonatomic) IGStorySwipableFilterLabelView *swipableFilterLabelView; // @synthesize swipableFilterLabelView=_swipableFilterLabelView;
@property(retain, nonatomic) IGStorySwipableFilterView *swipableFilterView; // @synthesize swipableFilterView=_swipableFilterView;
@property(retain, nonatomic) UIViewController<IGStoryCreationDrawingViewControllerType> *drawingViewController; // @synthesize drawingViewController=_drawingViewController;
@property(retain, nonatomic) IGDrawCanvasView *drawCanvasView; // @synthesize drawCanvasView=_drawCanvasView;
@property(readonly, nonatomic) _Bool hashtagTextEnabled; // @synthesize hashtagTextEnabled=_hashtagTextEnabled;
@property(readonly, nonatomic) _Bool mentionsEnabled; // @synthesize mentionsEnabled=_mentionsEnabled;
@property(readonly, nonatomic) IGStoryPreviewOverlayGestureController *gestureController; // @synthesize gestureController=_gestureController;
@property(readonly, nonatomic) UITapGestureRecognizer *captionBackgroundTapRecognizer; // @synthesize captionBackgroundTapRecognizer=_captionBackgroundTapRecognizer;
@property(readonly, nonatomic) IGStoryPreviewDeleteOptionView *deleteOptionView; // @synthesize deleteOptionView=_deleteOptionView;
@property(readonly, nonatomic) IGStoryPreviewOverlayContainerView *overlayContainerView; // @synthesize overlayContainerView=_overlayContainerView;
@property(retain, nonatomic) IGStoryMediaReplyOverlayController *mediaReplyOverlayController; // @synthesize mediaReplyOverlayController=_mediaReplyOverlayController;
@property(retain, nonatomic) IGStoryMediaReplyOverlayController *referenceMediaReplyOverlayController; // @synthesize referenceMediaReplyOverlayController=_referenceMediaReplyOverlayController;
@property(retain, nonatomic) IGGradientView *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(retain, nonatomic) IGGradientView *topGradient; // @synthesize topGradient=_topGradient;
@property(retain, nonatomic) IGStorySaveMediaRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
@property(retain, nonatomic) IGStoryCreationModel *storyModel; // @synthesize storyModel=_storyModel;
@property(retain, nonatomic) IGVerticalEdgeReflectingView *edgeReflectingView; // @synthesize edgeReflectingView=_edgeReflectingView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) IGPassthroughView *safeAreaContainerView; // @synthesize safeAreaContainerView=_safeAreaContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) IGDirectVisualMessageViewModeNuxView *viewModeNuxView; // @synthesize viewModeNuxView=_viewModeNuxView;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGDirectThreadService *threadService; // @synthesize threadService=_threadService;
@property(readonly, nonatomic) IGStoryCreationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIImage *mediaCompositionViewSnapshot; // @synthesize mediaCompositionViewSnapshot=_mediaCompositionViewSnapshot;
@property(retain, nonatomic) UIView *mediaCompositionView; // @synthesize mediaCompositionView=_mediaCompositionView;
@property(readonly, nonatomic) IGStoryAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly, nonatomic) UIView<IGStoryPreviewFooterViewType> *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) IGStoryPostCaptureHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <IGStoryCameraPreviewViewControllerInteractionObserver> interactionObserver; // @synthesize interactionObserver=_interactionObserver;
@property(nonatomic) __weak id <IGStoryCameraDirectShareRecipientSource> recipientSource; // @synthesize recipientSource=_recipientSource;
@property(nonatomic) __weak id <IGStoryCameraPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showShareToSchoolStoryTooltip;
- (void)_showHighlightsLongPressNUX;
- (void)_setControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_discardCompositionViewSnapshot;
- (void)_prepareCompositionViewSnapshot;
- (id)directFooterAvatarView;
@property(readonly, nonatomic) struct CGRect mediaCompositionRegion;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_dismissViewModeNux;
- (void)directVisualMessageViewDidDismissNux:(id)arg1;
- (void)fundraiserStickerCreationViewController:(id)arg1 didFinishEditingFundraiserStickerView:(id)arg2;
- (void)fundraiserStickerCreationViewController:(id)arg1 willFinishEditingFundraiserStickerView:(id)arg2;
- (void)countdownStickerViewController:(id)arg1 didFinishEditingCountdownStickerView:(id)arg2;
- (void)countdownStickerViewController:(id)arg1 willFinishEditingCountdownStickerView:(id)arg2;
- (void)quizStickerCreationViewController:(id)arg1 didFinishEditingQuizStickerView:(id)arg2;
- (id)questionAnswerStickerViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)questionAnswerStickerViewController:(id)arg1 questionAnswerView:(id)arg2 sendResponse:(id)arg3;
- (void)questionAnswerStickerViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)questionAnswerStickerViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)questionAnswerStickerViewController:(id)arg1 didFinishEditingQuestionAnswerView:(id)arg2;
- (void)questionAnswerStickerViewController:(id)arg1 willFinishEditingQuestionAnswerView:(id)arg2;
- (id)sliderStickerCreationViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)sliderStickerCreationViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)sliderStickerCreationViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)sliderStickerCreationViewController:(id)arg1 didFinishEditingSliderStickerView:(id)arg2;
- (void)sliderStickerCreationViewController:(id)arg1 willFinishEditingSliderStickerView:(id)arg2;
- (void)mentionStickerViewController:(id)arg1 didFinishEditingMentionStickerView:(id)arg2;
- (void)mentionStickerViewController:(id)arg1 willFinishEditingMentionStickerView:(id)arg2;
- (id)productStickerCreationViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)productStickerCreationViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)productStickerCreationViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)productStickerCreationViewController:(id)arg1 didFinishEditingProductStickerBundleView:(id)arg2;
- (void)productStickerCreationViewController:(id)arg1 willFinishEditingProductStickerBundleView:(id)arg2;
- (void)pollStickerCreationViewController:(id)arg1 didFinishEditingPollStickerView:(id)arg2;
- (void)pollStickerCreationViewController:(id)arg1 willEndEditingPollStickerView:(id)arg2;
- (void)pollStickerCreationViewController:(id)arg1 didBeginEditingPollStickerView:(id)arg2;
- (void)hashtagStickerCreationViewController:(id)arg1 didFinishEditingHashtagSticker:(id)arg2;
- (void)hashtagStickerCreationViewController:(id)arg1 willFinishEditingHashtagSticker:(id)arg2;
- (void)_didSelectHashtagSticker;
- (void)addPartnerWebLinksDidRemoveSelectedSponsorPartner:(id)arg1;
- (void)addPartnerWebLinksDidAddSelectedSponsorPartner:(id)arg1;
- (void)storyPlaybackControllerDidPlayToEnd:(id)arg1;
- (void)storyPlaybackControllerDidFinishRewind:(id)arg1;
- (void)storyPlaybackControllerDidStartToPlay:(id)arg1;
- (void)_presentStickerView:(id)arg1 inViewController:(id)arg2;
- (void)_presentFundraiserViewControllerWithFundraiserSticker:(id)arg1 wasStickerNewlyCreated:(_Bool)arg2;
- (void)_presentCountdownViewControllerWithCountdownSticker:(id)arg1;
- (void)_presentQuizStickerCreationViewControllerWithQuizSticker:(id)arg1;
- (void)_presentQuestionAnswerStickerCreationView:(id)arg1 stickerNewlyCreated:(_Bool)arg2;
- (void)_presentSliderStickerCreationViewControllerWithSliderSticker:(id)arg1;
- (void)_presentPollStickerCreationViewControllerWithPollSticker:(id)arg1 tapPoint:(struct CGPoint)arg2;
- (_Bool)showClipRangeToggle;
- (CDStruct_e83c9415)defaultClipRange;
- (void)musicStickerPostCaptureController:(id)arg1 didDeleteMusicStickerBundleView:(id)arg2;
- (void)musicStickerPostCaptureController:(id)arg1 didAddMusicStickerBundleView:(id)arg2;
- (void)musicStickerPostCaptureControllerDidFinishEditingMusic:(id)arg1;
- (void)musicStickerPostCaptureControllerDidBeginEditingMusic:(id)arg1;
- (void)_showStickerPinningNuxForStickerIfNeeded:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectProductStickerModel:(id)arg2;
- (void)stickerTrayViewController:(id)arg1 willSelectProductStickerModel:(id)arg2;
- (void)stickerTrayViewController:(id)arg1 didSelectCameraStickerModel:(id)arg2;
- (void)stickerTrayViewController:(id)arg1 didSelectCountdownStickerModel:(id)arg2;
- (void)stickerTrayViewControllerDidSelectCountdownSticker:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectFundraiserStickerNonprofit:(id)arg2;
- (void)stickerTrayViewController:(id)arg1 didSelectMusicTrack:(id)arg2;
- (void)stickerTrayViewControllerDidSelectQuizSticker:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectQuestionAnswerStickerModel:(id)arg2;
- (void)stickerTrayViewControllerDidSelectSliderSticker:(id)arg1;
- (void)stickerTrayViewControllerDidSelectMentionSticker:(id)arg1;
- (void)stickerTrayViewControllerDidSelectPollSticker:(id)arg1;
- (void)stickerTrayViewControllerDidSelectHashtagSticker:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectSticker:(id)arg2;
- (void)_convertPhotoToVideoIfNeededWithVideoDuration:(double)arg1;
- (_Bool)addPartnerDisabled;
- (unsigned long long)productStickerDisabledReason;
- (unsigned long long)musicStickerDisabledReason;
- (_Bool)hasCountdownSticker;
- (_Bool)supportStickerPinning;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)storyAssetManagerDidFinishUpdatingOutputAsset:(id)arg1 withSuccess:(_Bool)arg2;
- (void)storyAssetManagerDidBeginUpdatingOutputAsset:(id)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (id)analyticsModule;
- (void)_handleAddLinkButtonTapped:(id)arg1 businessTransactionInStoriesEnabled:(_Bool)arg2;
- (void)_addLinkButtonTapped;
- (void)_presentStickerViewController;
- (void)_sendToDirectRecipients;
- (void)_presentAudiencePickerAndAllowStoryTargets:(_Bool)arg1;
- (_Bool)_present24HourNuxIfNeeded;
- (void)_attemptToShareAssetAndAllowStoryTargetSharing:(_Bool)arg1;
- (void)_sendToDirectButtonTapped;
- (void)finalizeOutputAssetForShare:(_Bool)arg1 updateStoryModel:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_storyButtonTapped;
- (void)_cancelShare;
- (void)_downloadButtonTapped;
- (void)_applyFilterToAssetWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_containsInternalMask;
- (_Bool)_containsMask;
- (id)_internalFeatures;
- (_Bool)_canShareToFacebookIfAuthenticated;
- (id)_attributionEffectIDForLibraryAsset:(id)arg1;
- (void)_finalizeStoryModel;
- (id)_finalTapModels;
- (void)_finalizeCreationEditsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_assetWasFinalized;
- (id)_mentionedUsers;
- (void)_finalizeOverlayContainerViewForShare:(_Bool)arg1;
- (void)_updateFullscreenWordOverlayViewWithMode:(long long)arg1;
- (struct CGRect)_containerFrameForViewBounds;
- (void)_showOutputLoadingIndicatorWithDelay;
- (void)_setAudioMuted:(_Bool)arg1;
- (_Bool)_isBoomerangVideo;
- (_Bool)_isReverseVideo;
- (id)currentViewModeModel;
- (struct CGRect)_contentRegion;
- (id)textEntryViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)textEntryViewController:(id)arg1 didChangeInputAccessoryMode:(long long)arg2;
- (void)textEntryViewController:(id)arg1 didChangeTextView:(id)arg2;
- (void)textEntryViewController:(id)arg1 didBeginEditingTextView:(id)arg2;
- (void)textEntryViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)textEntryViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)textEntryViewController:(id)arg1 didFinishEditingTextView:(id)arg2 didTapSend:(_Bool)arg3;
- (void)textEntryViewController:(id)arg1 willFinishEditingTextView:(id)arg2 didTapSend:(_Bool)arg3;
- (void)textEntryViewController:(id)arg1 didChangeToRichTextFormat:(id)arg2;
- (void)storySwipableFilterViewDidSwipeToFilter:(id)arg1;
- (void)storySwipableFilterViewWillSwipeToFilter:(id)arg1;
- (void)_saveMediaRequestDidFailSaving;
- (void)_saveMediaRequestDidSaveToAssetLocalIdentifier:(id)arg1 isPhoto:(_Bool)arg2;
- (void)storyPreviewOverlayContainerView:(id)arg1 didAddOverlay:(id)arg2;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)arg1 entryPoint:(unsigned long long)arg2;
- (void)brandedContentUpsellHelperDidTapAddTagButtonWithSignals:(id)arg1;
- (void)_showBrandedContentUpsellNux;
- (void)_showBrandedContentUpsellAlertWithEntryPoint:(unsigned long long)arg1;
- (_Bool)_shouldShowBrandedContentUpsellAlert;
- (id)_captions;
- (id)_textViews;
- (void)_captionBackgroundTapped:(id)arg1;
- (void)_setOverlayDrawingMode:(_Bool)arg1;
- (void)addHighlightsSheet:(id)arg1 didUpdateReelWithPK:(id)arg2 added:(_Bool)arg3 title:(id)arg4 coverURL:(id)arg5;
- (void)addHighlightsSheet:(id)arg1 wantsNewReelWithTitle:(id)arg2 cropRect:(struct CGRect)arg3 creationToken:(id)arg4;
- (void)addHighlightsSheetDidDismiss:(id)arg1;
- (void)addHighlightsSheetDidCancel:(id)arg1;
- (id)drawingViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)drawingViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)drawingViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)drawingViewControllerDidDismiss:(id)arg1;
- (void)drawingViewControllerDidBeginEditing:(id)arg1;
- (void)storyLinkCreationViewControllerDidCloseForm:(id)arg1 hasChanges:(_Bool)arg2;
- (void)storyLinkCreationViewController:(id)arg1 didSelectStoryLink:(id)arg2;
- (void)_updatePreviewForMediaReplyOverlayStyle:(long long)arg1 animationDuration:(double)arg2;
- (id)storyMediaReplyOverlayControllerNuxHostingView;
- (void)storyMediaReplyOverlayController:(id)arg1 didUpdateToOverlayStyle:(long long)arg2;
- (void)storyMediaReplyOverlayController:(id)arg1 willUpdateToOverlayStyle:(long long)arg2 animationDuration:(double)arg3;
- (void)overlayGestureController:(id)arg1 didUpdateAlignmentGuideState:(unsigned long long)arg2;
- (void)_didSwipeUp:(id)arg1;
- (void)overlayGestureController:(id)arg1 didEndPanView:(id)arg2;
- (void)overlayGestureController:(id)arg1 didStartPanView:(id)arg2;
- (void)_stopRegionTrackingOnViewIfNeeded:(id)arg1;
- (void)_updateStoryLinksButtonState;
- (void)_enableGestures;
- (void)_exitStickerPinningAndBeginTracking:(_Bool)arg1;
- (void)_enterStickerPinningModeWithView:(id)arg1;
- (void)overlayGestureController:(id)arg1 didDeleteView:(id)arg2;
- (void)overlayGestureController:(id)arg1 didForceTouchView:(id)arg2;
- (void)overlayGestureController:(id)arg1 didTapView:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)overlayGestureController:(id)arg1 didUpdateTransformForView:(id)arg2;
- (void)shareToFbControllerDidDismissActionSheet;
- (void)shareToFbControllerDidUpdateWithShare:(_Bool)arg1 automaticPreferencesUpdated:(_Bool)arg2;
- (void)previewFooterViewDidTapShareToFbOptionsButton:(id)arg1;
- (void)previewFooterViewDidLongPressAddToStory:(id)arg1;
- (void)previewFooterViewDidChangeViewMode:(id)arg1;
- (void)previewFooterViewDidTapSendToMoreUsers:(id)arg1;
- (void)previewFooterViewDidTapSend:(id)arg1;
- (void)previewFooterViewDidTapDownload:(id)arg1;
- (void)previewFooterViewDidTapAddToStory:(id)arg1;
- (void)previewFooterViewDidLongPressFavoritesOnly:(id)arg1;
- (void)previewFooterViewDidTapAddToFavoritesOnly:(id)arg1;
- (void)didTapDismissButton;
- (void)musicBrowserViewController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)musicBrowserViewControllerDidCancel:(id)arg1;
- (void)_presentStoryLinkViewController;
- (void)_didTapMusicButton:(id)arg1;
- (void)_didTapAREffectButton:(id)arg1;
- (void)_didTapSaveButton:(id)arg1;
- (void)_didTapAddLinkButton:(id)arg1;
- (void)_didTapAddStickerButton:(id)arg1;
- (void)_didTapAudioToggleButton:(id)arg1;
- (void)_didTapAddDrawingButton:(id)arg1;
- (void)_didTapAddTextButton:(id)arg1;
- (void)_didTapCancelButton:(id)arg1;
- (void)storyStickerPinningControlsView:(id)arg1 didUpdateProgress:(double)arg2;
- (void)storyStickerPinningControlsViewDidTapDone:(id)arg1;
- (void)storyStickerPinningControlsViewDidTapCancel:(id)arg1;
- (void)didDismissStickerTrayViewController:(id)arg1 trayStateModel:(id)arg2;
- (void)postcaptureARControllerDidUpdateARAvailability:(id)arg1;
@property(readonly, nonatomic) IGAREffectButton *arEffectButton;
@property(readonly, nonatomic) UIViewController *viewControllerForAREffectTray;
- (void)_updatePostcaptureEffectsOnStoryModel;
- (_Bool)isPostCaptureMediaReverseFormat:(id)arg1;
- (void)postCaptureControllerWillUnapplyAREffect:(id)arg1;
- (void)postCaptureControllerDidApplyAREffect:(id)arg1;
- (void)postCaptureControllerWillApplyAREffect:(id)arg1;
- (void)_beginEditingTextView:(id)arg1 withTextFormat:(id)arg2;
- (void)_tryBeginEditingText;
- (void)_setCompositionFilterMetadataOfFilterView:(id)arg1;
- (id)_generateGradientBackgroundImage;
- (void)_showSwipableFilterView:(id)arg1 fadeIn:(_Bool)arg2;
- (void)_setVideo:(id)arg1 fadeIn:(_Bool)arg2;
- (void)_didToggleBoomerang:(id)arg1;
- (void)_didTogglePlayback:(id)arg1;
- (void)_setPhoto:(id)arg1 fadeIn:(_Bool)arg2;
- (void)_updateHeaderViewSpec;
- (void)_updateForCurrentAssetWithFadeTransition:(_Bool)arg1;
- (void)_runFaceDetectionOnOutputAsset;
- (void)_setPreviewImage:(id)arg1;
- (_Bool)_shouldShowAREffectButton;
- (_Bool)_canUsePostCaptureAREffectFeature;
- (_Bool)_canStackPostcaptureAROnEffectID:(id)arg1;
- (_Bool)_shouldUseNewCCRenderStack;
- (_Bool)_shouldShowStoryLink;
- (_Bool)_shouldShowSaveButtonInHeader;
- (_Bool)_shouldShowToggleAudioButton;
- (unsigned long long)notificationPresentationPermissionsForNotificationSource:(unsigned long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_setUpDrawingViewControllerIfNeededAndActive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_igApplicationDidBecomeActive;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersTabBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)pasteAlertControllerShouldPasteImage:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)paste:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAssetManager:(id)arg1 configuration:(id)arg2 entryPoint:(unsigned long long)arg3 userSession:(id)arg4 storyModel:(id)arg5 referenceMediaReplyOverlayController:(id)arg6 ARLinkStoryGalleryProcessor:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

