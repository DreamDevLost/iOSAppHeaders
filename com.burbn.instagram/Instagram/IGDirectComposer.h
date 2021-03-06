//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGDirectComposerProtocol.h"
#import "IGDirectKeyboardTextViewMediaPasteDelegate.h"
#import "IGKeyboardInputManagerListener.h"
#import "UITextViewDelegate.h"

@class FBKVOController, IGDirectComposerAnalyticsLogger, IGDirectComposerAttachmentViewSpec, IGDirectComposerConfig, IGDirectComposerLayoutSpec, IGDirectComposerMode, IGDirectComposerTextListenerAnnouncer, IGDirectComposerTextViewHeightCache, IGDirectKeyboardTextView, IGGradientView, IGTapButton, NSDate, NSString, UIFont, UILabel;

@interface IGDirectComposer : UIView <IGDirectKeyboardTextViewMediaPasteDelegate, UITextViewDelegate, IGDirectComposerProtocol, IGKeyboardInputManagerListener>
{
    CDUnknownBlockType _layoutSpecProvider;
    IGDirectComposerLayoutSpec *_currentModeLayoutSpec;
    IGDirectComposerConfig *_config;
    IGDirectComposerTextViewHeightCache *_textViewHeightCache;
    UIFont *_textFont;
    IGDirectKeyboardTextView *_textView;
    UIView *_ovalContainer;
    UILabel *_placeholderLabel;
    UIView *_topAttachmentView;
    UIView *_composerBackgroundView;
    UIView *_lightBlurBackgroundView;
    double _topAttachmentViewContentOffsetY;
    IGDirectComposerAttachmentViewSpec *_topAttachmentViewSpec;
    _Bool _shouldHideTopAttachmentView;
    UIView *_topButtonGroupBackgroundView;
    IGGradientView *_gradientView;
    IGTapButton *_cameraButton;
    IGTapButton *_textModeCameraButton;
    IGTapButton *_galleryButton;
    IGTapButton *_likeButton;
    IGTapButton *_sendButton;
    IGTapButton *_moreButton;
    IGTapButton *_animatedMediaButton;
    IGTapButton *_quickReplyButton;
    IGTapButton *_highlightedQuickReplyButton;
    IGTapButton *_closeButton;
    IGTapButton *_voiceMessageButton;
    IGTapButton *_plusButton;
    IGTapButton *_stickerButton;
    NSDate *_lastSendButtonInteractionDate;
    _Bool _shouldAnimateButtonsOnLayout;
    double _keyboardPercentPresented;
    FBKVOController *_kvoController;
    _Bool _isScrollingAssociatedScrollViewToTop;
    IGDirectComposerTextListenerAnnouncer *_textUpdateAnnouncer;
    IGDirectComposerAnalyticsLogger *_analyticsLogger;
    _Bool _shouldIgnoreKeyboardInput;
    id <IGDirectComposerButtonDelegate> _buttonDelegate;
    id <IGDirectComposerSizingDelegate> _sizingDelegate;
    id <IGDirectComposerMediaPasteDelegate> _mediaPasteDelegate;
    id <IGDirectComposerQuickReplyDelegate> _quickReplyDelegate;
    id <IGDirectEmojiReactionsBarDelegate> _emojiReactionsBarDelegate;
    IGDirectComposerMode *_mode;
}

@property(readonly, nonatomic) IGTapButton *galleryButton; // @synthesize galleryButton=_galleryButton;
@property(readonly, nonatomic) IGDirectComposerMode *mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool shouldIgnoreKeyboardInput; // @synthesize shouldIgnoreKeyboardInput=_shouldIgnoreKeyboardInput;
@property(readonly, nonatomic) IGTapButton *highlightedQuickReplyButton; // @synthesize highlightedQuickReplyButton=_highlightedQuickReplyButton;
@property(readonly, nonatomic) IGTapButton *plusButton; // @synthesize plusButton=_plusButton;
@property(readonly, nonatomic) IGTapButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) __weak id <IGDirectEmojiReactionsBarDelegate> emojiReactionsBarDelegate; // @synthesize emojiReactionsBarDelegate=_emojiReactionsBarDelegate;
@property(nonatomic) __weak id <IGDirectComposerQuickReplyDelegate> quickReplyDelegate; // @synthesize quickReplyDelegate=_quickReplyDelegate;
@property(nonatomic) __weak id <IGDirectComposerMediaPasteDelegate> mediaPasteDelegate; // @synthesize mediaPasteDelegate=_mediaPasteDelegate;
@property(nonatomic) __weak id <IGDirectComposerSizingDelegate> sizingDelegate; // @synthesize sizingDelegate=_sizingDelegate;
@property(nonatomic) __weak id <IGDirectComposerButtonDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (void).cxx_destruct;
- (void)_updateText:(id)arg1 mode:(id)arg2;
- (void)removeTextListener:(id)arg1;
- (void)addTextListener:(id)arg1;
- (void)setTopAttachmentViewHidden:(_Bool)arg1 animatedWithDuration:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4;
- (struct CGRect)composerContentFrame;
- (id)text;
- (void)updateText:(id)arg1 mode:(id)arg2;
- (void)updateText:(id)arg1;
- (void)resetToDefaultMode;
- (void)didScrollToTopWithAssociatedScrollViewContent:(id)arg1;
- (void)willScrollToTopWithAssociatedScrollViewContent:(id)arg1;
- (void)dissociateWithScrollViewContent:(id)arg1;
- (void)associateWithScrollViewContent:(id)arg1;
- (unsigned long long)textViewSelectedRangeLocation;
- (void)keyboardInputManagerWillScrollToBottom:(_Bool)arg1;
- (void)keyboardInputManagerDidUpdateKeyboardPercentPresented:(double)arg1;
- (_Bool)_shouldUpdateLayoutOnKeyboardPresentationUpdates;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (void)keyboardTextView:(id)arg1 didPasteImage:(id)arg2;
- (void)_didLongPressAnimatedMediaButton:(id)arg1;
- (void)_didLongPressCameraButton:(id)arg1;
- (void)_didLongPressVoiceMessage:(id)arg1;
- (void)_didTapOpenTrayButton:(id)arg1;
- (void)_didTapPlusButton:(id)arg1;
- (void)_didTapVoiceMessage:(id)arg1;
- (void)_didTapClose:(id)arg1;
- (void)_didTapHighlightedQuickReply:(id)arg1;
- (void)_didTapQuickReply:(id)arg1;
- (void)_didTapTextModeCamera:(id)arg1;
- (void)_didTapLike:(id)arg1;
- (void)_didTapSend:(id)arg1;
- (void)_didTapCamera:(id)arg1;
- (void)_didTapGallery:(id)arg1;
- (void)_didTapMore:(id)arg1;
- (void)_didTapAnimatedMedia:(id)arg1;
- (void)_didTapOval:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (id)_trimmedText;
- (_Bool)_containsNonSpaceText;
- (void)_layoutViewAnimated:(_Bool)arg1 animationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 duration:(double)arg4 damping:(double)arg5 velocity:(double)arg6;
- (void)_layoutViewWithAnimationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_textViewHeightNeedsUpdate;
- (void)_updateOvalBackgroundColorOverride;
- (void)_updateBackgroundConfigOverride;
- (void)_updateBackgroundColorWithBackgroundConfig:(id)arg1;
- (void)_updateTextViewScrollEnabled;
- (void)_updatePlaceholderTruncation;
- (void)_updatePlaceholderLabel;
- (void)_updatePlaceholderVisibility;
- (void)_updateHighlightedQuickReplyButtonWithUserInput:(_Bool)arg1;
- (void)_updateOnTextChangeEventWithNoChanges;
- (void)_updateOnTextChangeWithDestinationMode:(id)arg1 userInput:(_Bool)arg2;
- (id)_destinationModeBasedOnText;
- (id)_destinationModeOnTextChange:(id)arg1;
- (void)_updateButton:(id)arg1 action:(long long)arg2;
- (id)_buttonForAction:(long long)arg1;
- (_Bool)_buttonEnabledForAction:(long long)arg1;
- (void)_setupButtonIfNeededWithViewModel:(id)arg1 buttonGroupConfigButtonPadding:(struct UIEdgeInsets)arg2 superview:(id)arg3;
- (void)_setupButtonsForCurrentModeIfNeeded;
- (void)_setUpGradientView;
- (void)_setupPlaceholderLabel;
- (void)_setupTextView;
- (void)_setupOvalContainer;
- (void)_setupTopButtonGroupBackgroundViewIfNeeded;
- (void)_setupComposerBackgroundView;
- (double)_heightForText:(id)arg1 textViewWidth:(double)arg2;
- (double)_textViewOneLineHeightForWidth:(double)arg1;
- (double)_textViewMaxHeightTextViewWidth:(double)arg1;
- (double)_textViewAdjustedHeightForTextViewWidth:(double)arg1;
- (double)_textViewFitsHeightForTextViewWidth:(double)arg1;
- (double)_textViewToOvalVerticalPaddingForWidth:(double)arg1;
- (double)_ovalRadius;
- (double)_ovalOriginY;
- (void)_showAllButtonsInCurrentMode;
- (void)_hideButtons:(id)arg1 updateViewBlock:(CDUnknownBlockType)arg2;
- (void)_hideButtonsInMode:(id)arg1 excludingFromMode:(id)arg2;
- (double)_composerBackgroundViewContentHeight;
- (double)_originYForButtonWithinOval:(id)arg1;
- (void)_computePositionsForRightAlignedButtonGroup:(id)arg1 superviewWidth:(double)arg2 rightInset:(double)arg3 updateViewBlock:(CDUnknownBlockType)arg4 originXPositionBlock:(CDUnknownBlockType)arg5;
- (void)_computePositionsForLeftAlignedButtonGroup:(id)arg1 leftInset:(double)arg2 updateViewBlock:(CDUnknownBlockType)arg3 endingXPositionBlock:(CDUnknownBlockType)arg4;
- (void)_computePositionsForLeftAlignedButtonGroup:(id)arg1 leftInset:(double)arg2 rightAlignedButtonGroup:(id)arg3 rightInset:(double)arg4 viewWidth:(double)arg5 updateViewBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_layoutGradientView;
- (void)_layoutPlaceholderLabel;
- (void)_layoutTextViewWithOriginX:(double)arg1 endX:(double)arg2;
- (void)_layoutOvalContainerWithOriginX:(double)arg1 endX:(double)arg2;
- (void)_layoutTopButtonGroup;
- (void)_layoutComposerBackgroundView;
- (void)_layoutAttachmentView;
- (void)_layoutTextViewDependentViewsWithViewWidth:(double)arg1;
- (void)layoutSubviews;
- (void)_updateTopAttachmentViewDuringModeUpdateLayout:(id)arg1;
- (void)_updateViewAfterModeUpdateLayoutWithNeedUpdateTopAttachmentView:(_Bool)arg1 oldTopAttachmentView:(id)arg2;
- (void)_updateViewDuringModeUpdateLayoutWithPrevMode:(id)arg1 needUpdateTopAttachmentView:(_Bool)arg2 oldTopAttachmentView:(id)arg3;
- (void)_updateViewBeforeModeUpdateLayoutWithPrevMode:(id)arg1 needUpdateTopAttachmentView:(_Bool)arg2 oldTopAttachmentView:(id)arg3 newTopAttachmentView:(id)arg4 newAttachmentViewSpec:(id)arg5;
- (void)_updateMode:(id)arg1;
- (double)_normalizedTopAttachmentViewOriginY;
- (void)_contentOffsetDidChangeForAssociatedScrollView:(id)arg1;
- (double)_topButtonGroupHeight;
- (double)_topAttachmentViewDynamicHeight;
- (double)_ovalHeightForTextViewWidth:(double)arg1;
- (double)_textViewWidthForViewWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (id)initWithLayoutSpecProvider:(CDUnknownBlockType)arg1 config:(id)arg2 text:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

