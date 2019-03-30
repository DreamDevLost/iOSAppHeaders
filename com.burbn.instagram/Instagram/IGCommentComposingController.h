//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAutocompleteControllerDelegate.h"
#import "IGCommentEmojiSelectionViewControllerDelegate.h"
#import "IGCommentQuickReplyControllerDelegate.h"
#import "IGCommentRealtimeManagerRealtimeTypingDelegate.h"
#import "IGCommentReplyingToBannerDelegate.h"
#import "IGCommentTextRedesignViewDelegate.h"
#import "IGDirectShareSheetControllerDelegate.h"
#import "IGGatingDelegate.h"
#import "IGGrowingTextViewDelegate.h"

@class FBTimer, IGAnalyticsNavigationState, IGAutocompleteController, IGCommentAudienceControlReminderView, IGCommentEmojiSelectionViewController, IGCommentModel, IGCommentQuickReplyController, IGCommentReplyingToBanner, IGCommentThreadManager, IGFeedItem, IGRealtimeTypingIndicatorView, IGUserSession, IGViewController, NSString, UIView, UIView<IGCommentTextViewProtocol>;

@interface IGCommentComposingController : NSObject <IGAutocompleteControllerDelegate, IGCommentEmojiSelectionViewControllerDelegate, IGCommentQuickReplyControllerDelegate, IGCommentReplyingToBannerDelegate, IGCommentTextRedesignViewDelegate, IGGrowingTextViewDelegate, IGDirectShareSheetControllerDelegate, IGGatingDelegate, IGCommentRealtimeManagerRealtimeTypingDelegate>
{
    IGCommentThreadManager *_commentThreadManager;
    IGCommentReplyingToBanner *_replyingToBannerView;
    long long _replyType;
    IGAnalyticsNavigationState *_navigationState;
    IGCommentAudienceControlReminderView *_audienceControlReminderView;
    _Bool _hasShownAudienceControlReminder;
    id <IGDirectShareSheetControlling> _reshareController;
    IGRealtimeTypingIndicatorView *_realtimeTypingIndicatorView;
    long long _realtimeTypingIndicatorState;
    FBTimer *_realtimeTypingIndicatorFadeOutAnimationTimer;
    _Bool _isAnimatingEmojiSelectionView;
    id <IGDirectReplyToAuthorViewControllerPresenting> _directReplyToAuthorPresenter;
    _Bool _disableEmojiPicker;
    _Bool _useInnerReplyingToBanner;
    IGCommentEmojiSelectionViewController *_inlineEmojiSelectionViewController;
    _Bool _supportSponsoredTracking;
    _Bool _quickRepliesEnabled;
    IGCommentQuickReplyController *_quickReplyController;
    id <IGCommentComposingControllerDelegate> _delegate;
    UIView<IGCommentTextViewProtocol> *_commentTextView;
    IGCommentModel *_replyToComment;
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    IGAutocompleteController *_autocompleteController;
    IGViewController *_presentingViewController;
    UIView *_containerView;
    NSString *_analyticsModule;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
}

@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) __weak IGViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) IGAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGCommentModel *replyToComment; // @synthesize replyToComment=_replyToComment;
@property(readonly, nonatomic) UIView<IGCommentTextViewProtocol> *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(nonatomic) __weak id <IGCommentComposingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateCommentTextViewWithQuickReply:(id)arg1;
- (id)_quickReplyShortcutFromText:(id)arg1;
- (_Bool)_containsQuickReplyShortcutFromText:(id)arg1;
- (void)_updateQuickRepliesStateFromText:(id)arg1;
- (void)_showDirectReplyToAuthorSheetWithShouldDismissCommentTextView:(_Bool)arg1;
- (double)_defaultComposerHeight;
- (void)_setTextRedesignViewHighlightedQuickReplyButtonHidden:(_Bool)arg1;
- (void)_setTextRedesignViewSendButtonHidden:(_Bool)arg1;
- (void)setupDirectButtonOnNavigationBarAfterFetchingCommentThread:(id)arg1;
- (void)showQuickReplyTooltipIfNecessary;
- (void)hideAudienceControlReminder;
- (void)showAudienceControlReminderIfNecessary;
- (double)_minYOfCommentTextViewAndReplyingToBannerView;
- (void)_updatePlaceholderText;
- (void)_resetReplyToComment;
- (void)_hideReplyingToBannerView;
- (void)_showReplyingToBannerViewWithComment:(id)arg1;
- (void)_composingFinished;
- (void)_onModeSwitchButtonTapped:(id)arg1;
- (void)_onSendButtonTapped:(id)arg1;
- (void)_updateText:(id)arg1;
- (void)didMarkValidViewingAge:(_Bool)arg1 forFeedItem:(id)arg2;
- (void)shouldRevealMediaForSensitiveFeedItem:(id)arg1;
- (void)directVerticalShareSheetControllerDidTapSMSShareWithHostingViewController:(id)arg1 shareLocation:(id)arg2;
- (void)directVerticalShareSheetControllerDidTapWhatsappShareWithHostingViewController:(id)arg1 shareLocation:(id)arg2;
- (void)directVerticalShareSheetControllerDidTapGeneralShareWithHostingViewController:(id)arg1 shareLocation:(id)arg2;
- (void)directVerticalShareSheetControllerDidTapCopyLinkWithHostingViewController:(id)arg1 shareLocation:(id)arg2;
- (void)directVerticalShareSheetControllerDidTapReplyToAuthorWithFeedItem:(id)arg1 sourceViewController:(id)arg2;
- (void)directVerticalShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5;
- (void)directVerticalShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directVerticalShareSheetControllerDidDismissReshareSheet:(id)arg1;
- (void)_logTypingIndicatorSeen;
- (void)_hideTypingIndicator;
- (void)commentRealtimeManagerDidNeedShowAndHideTypingIndicator:(id)arg1;
- (id)_currentParentComment;
- (id)_loggingCommonForComposerExtension;
- (void)commentTextRedesignViewDidTapQuickReplyButton:(id)arg1 isHighlighted:(_Bool)arg2;
- (void)commentTextRedesignView:(id)arg1 didDismissInnerReplyingToBanner:(id)arg2;
- (void)commentTextRedesignView:(id)arg1 didNeedDismissInnerReplyingToBanner:(id)arg2;
- (void)commentTextRedesignView:(id)arg1 didLongPressProfilePicture:(id)arg2;
- (void)commentTextRedesignView:(id)arg1 didTapProfilePicture:(id)arg2;
- (void)didDismissCommentReplyingToBanner:(id)arg1;
- (void)growingTextView:(id)arg1 didChangeHeight:(double)arg2;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(double)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)commentQuickReplyControllerDidSelectQuickReply:(id)arg1;
- (void)_logEmojiSelectionWithEmoji:(id)arg1 didLongPress:(_Bool)arg2 didAutoPost:(_Bool)arg3 selectedIndex:(unsigned long long)arg4 isSuggestion:(_Bool)arg5;
- (void)emojiSelectionViewController:(id)arg1 didSelectEmoji:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteController:(id)arg1 didReloadCollectionView:(id)arg2;
- (void)autocompleteControllerDidAutocomplete:(id)arg1;
- (void)autocompleteController:(id)arg1 willHideCollectionView:(id)arg2;
- (void)autocompleteController:(id)arg1 willShowCollectionView:(id)arg2 type:(long long)arg3;
- (void)autocompleteController:(id)arg1 atIndex:(long long)arg2 isUserSearch:(_Bool)arg3 allResults:(id)arg4 indexInNullState:(unsigned long long)arg5;
- (unsigned long long)_commentTextRedesignViewStyle;
- (_Bool)_shouldShowInlineEmojiSelectionView;
- (_Bool)_doNotSupportComposerExtension;
- (void)saveCommentAsQuickReply:(id)arg1;
- (void)updateAutocompleteForCommentThread:(id)arg1;
- (void)updateWithReplyToComment:(id)arg1;
- (void)setupTextBeforeCommentComposingBeginWithPrefillText:(id)arg1;
- (id)viewsToMoveWithKeyboard;
- (id)autoCompleteCollectionView;
- (void)_setupCommentTextViewWithSupportDirect:(_Bool)arg1 containerView:(id)arg2;
- (id)initWithUserSession:(id)arg1 feedItem:(id)arg2 commentThreadManager:(id)arg3 loggingDelegate:(id)arg4 presentingViewController:(id)arg5 analyticsModule:(id)arg6 replyType:(long long)arg7 navigationState:(id)arg8 disableEmojiPicker:(_Bool)arg9 useInnerReplyingToBanner:(_Bool)arg10 userPresenceProvider:(id)arg11 supportSponsoredTracking:(_Bool)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

