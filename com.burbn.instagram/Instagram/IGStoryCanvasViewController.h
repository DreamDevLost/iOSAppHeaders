//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGCountdownStickerCreationViewControllerDelegate.h"
#import "IGDialViewDataSource.h"
#import "IGDialViewDelegate.h"
#import "IGDialViewSelectionDelegate.h"
#import "IGGestureHandler.h"
#import "IGHashtagStickerCreationViewControllerDelegate.h"
#import "IGMentionStickerCreationViewControllerDelegate.h"
#import "IGMusicStickerEditViewControllerDelegate.h"
#import "IGPollStickerCreationViewControllerDelegate.h"
#import "IGProductStickerCreationViewControllerDataSource.h"
#import "IGProductStickerCreationViewControllerDelegate.h"
#import "IGQuestionAnswerStickerViewControllerDataSource.h"
#import "IGQuestionAnswerStickerViewControllerDelegate.h"
#import "IGSliderStickerCreationViewControllerDataSource.h"
#import "IGSliderStickerCreationViewControllerDelegate.h"
#import "IGStoryCameraOverlayViewControllerDialAppearanceDelegate.h"
#import "IGStoryDrawerDismissDelegate.h"
#import "IGStoryExtendedGalleryViewControllerDelegate.h"
#import "IGStoryPostCaptureEditingViewControllerDelegate.h"
#import "IGStoryStickerTrayViewControllerDelegate.h"
#import "IGStoryStickerTrayViewControllerStickerSelectionDelegate.h"
#import "IGStoryTextEntryViewControllerDataSource.h"
#import "IGStoryTextEntryViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGCanvasControlsOverlayView, IGCanvasStickerDialMode, IGDirectionalPanGestureRecognizer, IGGradientView, IGStoryExtendedGalleryViewController, IGStoryMusicTrackClip, IGStoryRichTextEntryTextView, IGStoryStickerDataSource, IGStoryStickerTrayStateModel, IGStoryStickerTrayViewController, IGStoryTextEntryViewController, IGUserSession, NSArray, NSString, UIImage, UITapGestureRecognizer, UIView;

@interface IGStoryCanvasViewController : UIViewController <IGCountdownStickerCreationViewControllerDelegate, IGHashtagStickerCreationViewControllerDelegate, IGMentionStickerCreationViewControllerDelegate, IGMusicStickerEditViewControllerDelegate, IGPollStickerCreationViewControllerDelegate, IGProductStickerCreationViewControllerDelegate, IGProductStickerCreationViewControllerDataSource, IGSliderStickerCreationViewControllerDelegate, IGSliderStickerCreationViewControllerDataSource, IGStoryDrawerDismissDelegate, IGStoryExtendedGalleryViewControllerDelegate, IGStoryPostCaptureEditingViewControllerDelegate, IGStoryStickerTrayViewControllerDelegate, IGStoryStickerTrayViewControllerStickerSelectionDelegate, IGStoryTextEntryViewControllerDelegate, IGStoryTextEntryViewControllerDataSource, IGQuestionAnswerStickerViewControllerDataSource, IGQuestionAnswerStickerViewControllerDelegate, UIGestureRecognizerDelegate, IGGestureHandler, IGDialViewDataSource, IGDialViewDelegate, IGDialViewSelectionDelegate, IGStoryCameraOverlayViewControllerDialAppearanceDelegate>
{
    IGUserSession *_userSession;
    NSString *_loggingSessionID;
    double _cameraRequestedTimestamp;
    NSString *_module;
    id <IGStoryCanvasViewControllerDelegate> _delegate;
    IGGradientView *_gradientView;
    IGCanvasControlsOverlayView *_controlsOverlayView;
    UIImage *_gradientSnapshotForEyedropperColorPicker;
    UIView *_contentView;
    _Bool _createModeActive;
    long long _selectedDialElementIndex;
    UIViewController *_activeEditingViewController;
    IGStoryTextEntryViewController *_textEditingViewController;
    IGStoryRichTextEntryTextView *_textView;
    _Bool _isEditingStickerView;
    UITapGestureRecognizer *_defaultBackgroundTapGesture;
    _Bool _toolbarControlsViewHidden;
    UIView *_activeStickerView;
    IGStoryStickerDataSource *_stickerDataSource;
    IGStoryStickerTrayStateModel *_lastStickerTrayStateModel;
    IGStoryStickerTrayViewController *_stickerTrayViewController;
    IGStoryExtendedGalleryViewController *_galleryViewController;
    IGDirectionalPanGestureRecognizer *_galleryVerticalPanGesture;
    IGStoryMusicTrackClip *_musicClip;
    NSArray *_dialElements;
    IGCanvasStickerDialMode *_typeMode;
    _Bool _userHasInteractedWithDial;
    long long _displayedSuggestionIndex;
    _Bool _postCaptureActive;
    double _contentCornerRadius;
    struct CGRect _contentRegion;
    struct UIEdgeInsets _contentOverlayInsets;
}

@property(nonatomic) __weak id <IGStoryCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool postCaptureActive; // @synthesize postCaptureActive=_postCaptureActive;
@property(nonatomic) struct UIEdgeInsets contentOverlayInsets; // @synthesize contentOverlayInsets=_contentOverlayInsets;
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dialView:(id)arg1 didConfirmItemAtIndex:(long long)arg2;
- (void)dialView:(id)arg1 didScrollToItemAtIndex:(long long)arg2;
- (void)dialView:(id)arg1 didSelectItemAtIndex:(long long)arg2 usingData:(id)arg3;
- (void)_didSelectDialIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dialViewDidTapTitle:(id)arg1;
- (_Bool)dialView:(id)arg1 shouldDisplayBadgeOnItemAtIndex:(long long)arg2;
- (_Bool)dialView:(id)arg1 shouldAllowMoreInfoAccessForItemAtIndex:(long long)arg2;
- (id)dialView:(id)arg1 imageForItemAtIndex:(long long)arg2;
- (id)dialView:(id)arg1 imageURLForItemAtIndex:(long long)arg2;
- (id)dialView:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (long long)dialViewNumberOfItems:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 dialDidDisappear:(id)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 dialWillDisappear:(id)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 dialDidAppear:(id)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 dialWillAppear:(id)arg2;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)storyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3;
- (void)musicStickerEditViewControllerDidCancel:(id)arg1;
- (void)musicStickerEditViewController:(id)arg1 didFinishEditingMusicTrackClip:(id)arg2 musicPlaybackController:(id)arg3;
- (void)musicStickerEditViewControllerDidBeginEditingMusicTrack:(id)arg1;
- (id)productStickerCreationViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)productStickerCreationViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)productStickerCreationViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)productStickerCreationViewController:(id)arg1 didFinishEditingProductStickerBundleView:(id)arg2;
- (void)productStickerCreationViewController:(id)arg1 willFinishEditingProductStickerBundleView:(id)arg2;
- (id)sliderStickerCreationViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)countdownStickerViewController:(id)arg1 didFinishEditingCountdownStickerView:(id)arg2;
- (void)countdownStickerViewController:(id)arg1 willFinishEditingCountdownStickerView:(id)arg2;
- (id)questionAnswerStickerViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)questionAnswerStickerViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)questionAnswerStickerViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)questionAnswerStickerViewController:(id)arg1 questionAnswerView:(id)arg2 sendResponse:(id)arg3;
- (void)questionAnswerStickerViewController:(id)arg1 didFinishEditingQuestionAnswerView:(id)arg2;
- (void)questionAnswerStickerViewController:(id)arg1 willFinishEditingQuestionAnswerView:(id)arg2;
- (void)sliderStickerCreationViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)sliderStickerCreationViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)sliderStickerCreationViewController:(id)arg1 didFinishEditingSliderStickerView:(id)arg2;
- (void)sliderStickerCreationViewController:(id)arg1 willFinishEditingSliderStickerView:(id)arg2;
- (void)pollStickerCreationViewController:(id)arg1 didBeginEditingPollStickerView:(id)arg2;
- (void)pollStickerCreationViewController:(id)arg1 didFinishEditingPollStickerView:(id)arg2;
- (void)pollStickerCreationViewController:(id)arg1 willEndEditingPollStickerView:(id)arg2;
- (void)mentionStickerViewController:(id)arg1 didFinishEditingMentionStickerView:(id)arg2;
- (void)mentionStickerViewController:(id)arg1 willFinishEditingMentionStickerView:(id)arg2;
- (void)hashtagStickerCreationViewController:(id)arg1 didFinishEditingHashtagSticker:(id)arg2;
- (void)hashtagStickerCreationViewController:(id)arg1 willFinishEditingHashtagSticker:(id)arg2;
- (void)stickerTrayViewController:(id)arg1 didSelectCountdownStickerModel:(id)arg2;
- (void)stickerTrayViewControllerDidSelectCountdownSticker:(id)arg1;
- (void)_editCountdownStickerView:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectFundraiserStickerNonprofit:(id)arg2;
- (void)stickerTrayViewControllerDidSelectQuizSticker:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectMusicTrack:(id)arg2;
- (void)stickerTrayViewController:(id)arg1 didSelectProductStickerModel:(id)arg2;
- (void)stickerTrayViewController:(id)arg1 willSelectProductStickerModel:(id)arg2;
- (void)stickerTrayViewController:(id)arg1 didSelectQuestionAnswerStickerModel:(id)arg2;
- (void)_editQuestionAnswerStickerView:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectCameraStickerModel:(id)arg2;
- (void)stickerTrayViewControllerDidSelectSliderSticker:(id)arg1;
- (void)stickerTrayViewControllerDidSelectPollSticker:(id)arg1;
- (void)_editPollStickerView:(id)arg1 entryTapPoint:(struct CGPoint)arg2;
- (void)stickerTrayViewControllerDidSelectMentionSticker:(id)arg1;
- (void)stickerTrayViewControllerDidSelectHashtagSticker:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectSticker:(id)arg2;
- (void)didDismissStickerTrayViewController:(id)arg1 trayStateModel:(id)arg2;
- (void)_didTapAddStickerButton;
- (void)storyDrawerDidDismiss:(id)arg1;
- (void)storyDrawerWillDismiss:(id)arg1 withDismissStyle:(unsigned long long)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)extendedGalleryViewController:(id)arg1 didSelectAssets:(id)arg2;
- (void)_didPanVertically:(id)arg1;
- (void)_galleryButtonTapped;
- (void)_presentGalleryWithGestureRecognizer:(id)arg1;
- (id)_colorForEyedropperAtPoint:(struct CGPoint)arg1;
- (void)_finishedSelectingColorFromScreen;
- (void)_beganSelectingColorFromScreen;
- (id)textEntryViewController:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)textEntryViewControllerFinishedSelectingColorFromScreen:(id)arg1;
- (void)textEntryViewControllerBeganSelectingColorFromScreen:(id)arg1;
- (void)textEntryViewController:(id)arg1 didChangeInputAccessoryMode:(long long)arg2;
- (void)textEntryViewController:(id)arg1 didChangeTextView:(id)arg2;
- (void)textEntryViewController:(id)arg1 didBeginEditingTextView:(id)arg2;
- (void)textEntryViewController:(id)arg1 didFinishEditingTextView:(id)arg2 didTapSend:(_Bool)arg3;
- (void)textEntryViewController:(id)arg1 willFinishEditingTextView:(id)arg2 didTapSend:(_Bool)arg3;
- (void)textEntryViewController:(id)arg1 didChangeToRichTextFormat:(id)arg2;
- (id)_defaultRichTextFormat;
- (void)_setShowsKeyboard:(_Bool)arg1;
- (void)_beginEditingTextView;
- (void)_showTextEditingControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateToolsWithKeyboardShowing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateToolsWithKeyboardShowing:(_Bool)arg1;
- (void)_setToolbarControlsViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_displayStickerSuggestionAtIndex:(long long)arg1;
- (void)_diceButtonTapped;
- (void)_settingsDoneButtonTapped;
- (void)_settingsButtonTapped;
- (void)_backButtonTapped;
- (void)_didTapNextButton;
- (unsigned long long)_selectedDialElementSuggestionsCount;
- (void)_updateDialAppearanceForCreateMode:(_Bool)arg1;
- (void)_updateDiceAppearance:(_Bool)arg1;
- (void)_createModeButtonTapped;
- (void)_addTextButtonTapped;
- (void)_gradientButtonChanged;
- (void)_didTapBackground:(id)arg1;
- (void)_presentStickerInContentView:(id)arg1 animated:(_Bool)arg2;
- (void)_transitionToActiveStickerEditingViewController:(id)arg1;
- (void)_didFinishEditingSticker:(id)arg1 shouldProceedToPostCapture:(_Bool)arg2 mediaAsset:(id)arg3 assetMetadata:(id)arg4;
- (void)_didFinishEditingSticker:(id)arg1 shouldProceedToPostCapture:(_Bool)arg2;
- (void)_willFinishEditingSticker:(_Bool)arg1;
- (_Bool)_shouldProceedToPostCaptureWithSticker:(id)arg1;
- (void)_finishAddingSticker:(id)arg1 mediaAsset:(id)arg2 assetMetadata:(id)arg3;
- (void)_finishAddingSticker:(id)arg1;
- (void)_transitionToPostCaptureWithStickerView:(id)arg1 mediaAsset:(id)arg2 assetMetadata:(id)arg3;
- (void)viewSafeAreaInsetsDidChange;
- (void)_updateContentOverlayInsets;
- (void)_prepareComposition:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 loggingSessionID:(id)arg2 cameraRequestedTimestamp:(double)arg3 module:(id)arg4 createModeEnabled:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
