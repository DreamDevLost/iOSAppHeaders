//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGGestureHandler.h"
#import "IGKeyboardObserverFrameChangeDelegate.h"
#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "IGStoryStickerEditingViewControllerProtocol.h"
#import "IGStoryTextEntryControlsDataSource.h"
#import "IGStoryTextEntryControlsDelegate.h"
#import "IGStoryTextEntryTextViewDelegate.h"

@class IGKeyboardObserver, IGStoryPreviewOverlayContainerView, IGStoryRichTextEntryTextView, IGStoryTextEntryControlsOverlayView, IGStoryTextEntryViewControllerConfiguration, IGUserSession, NSArray, NSMutableSet, NSString, UISelectionFeedbackGenerator, UITapGestureRecognizer, UIView;

@interface IGStoryTextEntryViewController : UIViewController <IGKeyboardObserverFrameChangeDelegate, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGStoryTextEntryControlsDelegate, IGStoryTextEntryControlsDataSource, IGStoryTextEntryTextViewDelegate, IGGestureHandler, IGStoryStickerEditingViewControllerProtocol>
{
    long long _inputAccessoryMode;
    IGKeyboardObserver *_keyboardObserver;
    NSString *_module;
    IGStoryRichTextEntryTextView *_activeTextView;
    _Bool _isNewlyCreatedTextView;
    struct CGRect _contentRegion;
    struct IGOverlayViewLocationInfo _initialTextViewLocation;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
    _Bool _textAlignV2Enabled;
    NSMutableSet *_alreadyMentionedUsers;
    _Bool _dismissing;
    _Bool _resigningForSendKeyTap;
    _Bool _selectingColorFromScreen;
    _Bool _textDimmed;
    unsigned long long _maxMentionCount;
    unsigned long long _maxHashtagCount;
    double _contentRegionCornerRadius;
    UIView *_textViewContainer;
    IGStoryTextEntryControlsOverlayView *_controlsOverlayView;
    id <IGStoryTextEntryViewControllerDelegate> _delegate;
    id <IGStoryTextEntryViewControllerDataSource> _dataSource;
    id <IGStoryPreviewOverlayGestureControllerDelegate> _gestureDelegate;
    IGStoryPreviewOverlayContainerView *_injectedMediaOverlayView;
    IGUserSession *_userSession;
    IGStoryTextEntryViewControllerConfiguration *_configuration;
    UIView *_dimmingView;
    long long _initialTextAlignment;
    double _initialPointSize;
    UISelectionFeedbackGenerator *_feedbackGenerator;
}

+ (id)hashtagRegionsFromTextView:(id)arg1 containerView:(id)arg2 compositionSize:(struct CGSize)arg3;
+ (id)hashtagTapModelsFromTextView:(id)arg1 overlayView:(id)arg2 isTextViewPinned:(_Bool)arg3;
+ (id)_hashtagTapModelsFromTextView:(id)arg1 storyRegionsEnabled:(_Bool)arg2 compositionSize:(struct CGSize)arg3 overlayView:(id)arg4 isTextViewPinned:(_Bool)arg5;
+ (id)usersMentionedInTextView:(id)arg1;
+ (id)storyMentionsFromTextView:(id)arg1 overlayView:(id)arg2 isTextViewPinned:(_Bool)arg3;
+ (id)storyMentionRegionsFromTextView:(id)arg1 containerView:(id)arg2 compositionSize:(struct CGSize)arg3;
+ (id)_storyMentionsFromTextView:(id)arg1 storyRegionsEnabled:(_Bool)arg2 compositionSize:(struct CGSize)arg3 overlayView:(id)arg4 isTextViewPinned:(_Bool)arg5;
+ (long long)hashtagsCountInTextView:(id)arg1;
+ (long long)storyMentionsCountInTextView:(id)arg1;
+ (id)_newTextViewWithTextColor:(id)arg1 fontSize:(double)arg2 configurePlaceholder:(_Bool)arg3 canShowSendKey:(_Bool)arg4 textFormat:(id)arg5 enableHighlightRTLLanguageText:(_Bool)arg6;
+ (id)newTextViewWithTextFormat:(id)arg1 fontSize:(double)arg2 configurePlaceholder:(_Bool)arg3 enableHighlightRTLLanguageText:(_Bool)arg4;
+ (void)setShowUnderlineForTextView:(id)arg1 show:(_Bool)arg2;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) _Bool textDimmed; // @synthesize textDimmed=_textDimmed;
@property(nonatomic) _Bool selectingColorFromScreen; // @synthesize selectingColorFromScreen=_selectingColorFromScreen;
@property(nonatomic, getter=isResigningForSendKeyTap) _Bool resigningForSendKeyTap; // @synthesize resigningForSendKeyTap=_resigningForSendKeyTap;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) double initialPointSize; // @synthesize initialPointSize=_initialPointSize;
@property(nonatomic) long long initialTextAlignment; // @synthesize initialTextAlignment=_initialTextAlignment;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) IGStoryTextEntryViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGStoryPreviewOverlayContainerView *injectedMediaOverlayView; // @synthesize injectedMediaOverlayView=_injectedMediaOverlayView;
@property(nonatomic) __weak id <IGStoryPreviewOverlayGestureControllerDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(nonatomic) __weak id <IGStoryTextEntryViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGStoryTextEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGStoryTextEntryControlsOverlayView *controlsOverlayView; // @synthesize controlsOverlayView=_controlsOverlayView;
@property(readonly, nonatomic) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(nonatomic) double contentRegionCornerRadius; // @synthesize contentRegionCornerRadius=_contentRegionCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
@property(nonatomic) unsigned long long maxHashtagCount; // @synthesize maxHashtagCount=_maxHashtagCount;
@property(nonatomic) unsigned long long maxMentionCount; // @synthesize maxMentionCount=_maxMentionCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldDiscardStickerOnDismissal;
@property(readonly, nonatomic) _Bool editableStickerViewIsNewlyCreated;
@property(readonly, nonatomic) double editableStickerScaleWhileEditing;
@property(readonly, nonatomic) struct CGPoint editableStickerViewPositionInWindowCoordinatesWhileEditing;
@property(readonly, nonatomic) UIView *editableStickerView;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (_Bool)canRespondToGesture:(id)arg1;
@property(nonatomic) long long spellCheckingType;
- (id)textEntryControls:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)_setTextDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)positionTextViewForEditing;
- (void)positionTextViewAtInitialLocation;
- (void)textEntryControls:(id)arg1 didMoveEyedropperToPointInWindowCoordinates:(struct CGPoint)arg2;
- (void)textEntryControlsFinishedSelectingColorFromScreen:(id)arg1;
- (void)textEntryControlsBeganSelectingColorFromScreen:(id)arg1;
- (void)textEntryControls:(id)arg1 didUpdateSuggestedHashtags:(id)arg2;
- (void)textEntryControls:(id)arg1 didSelectHashtag:(id)arg2;
- (void)textEntryControls:(id)arg1 didSelectUser:(id)arg2;
- (void)_updateFontSliderWithSize:(double)arg1;
- (void)textEntryControls:(id)arg1 didSelectFontSize:(double)arg2;
- (void)textEntryControls:(id)arg1 didSelectColor:(id)arg2;
- (void)_handleRightSwipeGesture:(id)arg1;
- (void)_handleLeftSwipeGesture:(id)arg1;
- (long long)_currentTextBackgroundStyle;
- (id)_activeLayoutManager;
- (void)_updateTextShadow;
- (void)_updateTypingAttributesWithColor:(id)arg1;
- (void)_updateTextAndBackgroundColorForStyle:(long long)arg1;
- (void)_updateEmphasizedTextColorEdits:(_Bool)arg1;
- (void)_textBackgroundButtonDidUpdate;
- (void)_textEmphasisToggleButtonDidUpdate;
- (void)_formatToggleButtonDidUpdate;
- (void)_textAlignmentButtonDidUpdate;
- (void)_doneButtonTapped;
- (void)_setInputAccessoryMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateInputAccessoryModeForTextView:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldShowColorPickerForTextView:(id)arg1;
- (void)_updateLinkedHashtagsForTextView:(id)arg1;
- (void)_updateLinkedMentionsForTextView:(id)arg1;
- (void)_finishWithSendKeyTapped:(_Bool)arg1;
- (void)prepareForRender;
- (void)textEntryTextViewDidEndEditing:(id)arg1;
- (_Bool)textEntryTextViewShouldEndEditing:(id)arg1;
- (void)textEntryTextViewDidChangeSelection:(id)arg1;
- (void)textEntryTextViewDidChange:(id)arg1;
- (void)textEntryTextViewDidBeginEditing:(id)arg1;
- (void)_scaleTextViewForEditing:(id)arg1;
- (_Bool)textEntryTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_removeAlreadyMentionedUser:(id)arg1;
- (void)_addAlreadyMentionedUser:(id)arg1;
- (struct CGRect)_textViewMaxRect;
- (struct CGRect)_boundsForTextView:(id)arg1 shouldConstrainHeight:(_Bool)arg2;
- (void)_updateTextViewLayoutForEdits:(id)arg1;
- (void)showKeyboard;
- (void)hideKeyboard;
- (_Bool)isEditingText;
- (_Bool)textViewIsEmpty;
- (void)enableTextViewPanning:(_Bool)arg1;
- (void)redrawTextViewShadowWithTextColor:(id)arg1;
- (void)invalidateTextView;
- (void)setActiveTextView:(id)arg1;
- (void)initiallyLayoutTextView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)initWithTextView:(id)arg1 textFormat:(id)arg2 userSession:(id)arg3 configuration:(id)arg4 module:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
