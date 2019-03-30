//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "IGLiveBroadcastInteractionButtonsContainerViewDelegate.h"
#import "IGLiveCommentPromptViewControllerDelegate.h"
#import "IGLiveCommentTextFieldContainerViewDelegate.h"
#import "IGLiveCommentsContainerViewControllerDelegate.h"
#import "IGLiveGuestInteractionButtonsContainerViewDelegate.h"
#import "IGLiveQuestionOverlayViewDelegate.h"
#import "IGLiveViewerInteractionButtonsContainerViewDelegate.h"

@class IGKeyboardObserver, IGLiveBroadcastConfig, IGLiveBroadcastInteractionButtonsContainerView, IGLiveCommentPromptViewController, IGLiveCommentTextFieldContainerView, IGLiveCommentsContainerView, IGLiveCommentsContainerViewController, IGLiveGuestInteractionButtonsContainerView, IGLiveQuestionOverlayViewController, IGLiveViewerInteractionButtonsContainerView, IGTapButton, NSString;

@interface IGLiveInteractionFooterView : UIView <IGLiveCommentsContainerViewControllerDelegate, IGLiveViewerInteractionButtonsContainerViewDelegate, IGLiveBroadcastInteractionButtonsContainerViewDelegate, IGLiveGuestInteractionButtonsContainerViewDelegate, IGLiveCommentTextFieldContainerViewDelegate, IGLiveCommentPromptViewControllerDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGLiveQuestionOverlayViewDelegate>
{
    IGLiveCommentPromptViewController *_commentPromptViewController;
    IGLiveCommentsContainerViewController *_commentsContainerViewController;
    _Bool _hasPostedFirstComment;
    IGLiveQuestionOverlayViewController *_questionOverlayViewController;
    _Bool _showingQuestionOverlay;
    _Bool _keyboardUp;
    id <IGLiveInteractionFooterViewDelegate> _delegate;
    long long _footerViewMode;
    IGLiveViewerInteractionButtonsContainerView *_viewerButtonsContainer;
    IGLiveBroadcastInteractionButtonsContainerView *_broadcastButtonsContainer;
    IGLiveGuestInteractionButtonsContainerView *_guestButtonsContainer;
    IGLiveCommentTextFieldContainerView *_commentTextFieldContainer;
    IGLiveCommentsContainerView *_commentsView;
    IGKeyboardObserver *_keyboardObserver;
    IGLiveBroadcastConfig *_liveBroadcastConfig;
}

@property(readonly, nonatomic) IGLiveBroadcastConfig *liveBroadcastConfig; // @synthesize liveBroadcastConfig=_liveBroadcastConfig;
@property(nonatomic) _Bool keyboardUp; // @synthesize keyboardUp=_keyboardUp;
@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(readonly, nonatomic) IGLiveCommentsContainerView *commentsView; // @synthesize commentsView=_commentsView;
@property(readonly, nonatomic) IGLiveCommentTextFieldContainerView *commentTextFieldContainer; // @synthesize commentTextFieldContainer=_commentTextFieldContainer;
@property(readonly, nonatomic) IGLiveGuestInteractionButtonsContainerView *guestButtonsContainer; // @synthesize guestButtonsContainer=_guestButtonsContainer;
@property(readonly, nonatomic) IGLiveBroadcastInteractionButtonsContainerView *broadcastButtonsContainer; // @synthesize broadcastButtonsContainer=_broadcastButtonsContainer;
@property(readonly, nonatomic) IGLiveViewerInteractionButtonsContainerView *viewerButtonsContainer; // @synthesize viewerButtonsContainer=_viewerButtonsContainer;
@property(nonatomic) long long footerViewMode; // @synthesize footerViewMode=_footerViewMode;
@property(nonatomic) __weak id <IGLiveInteractionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isTextContainerBelowCameraPreview;
- (_Bool)_isBroadcastMode;
- (id)_buttonsContainerForCurrentMode;
- (double)_additionalHeightPaddingForiPhoneX;
- (void)_updateTextFieldContainerWidth;
- (struct CGRect)_heartFrameWithSize:(double)arg1;
- (void)removeQuestionButtonTapped:(id)arg1;
- (void)questionOverlayTapped:(id)arg1;
- (void)commentPromptViewController:(id)arg1 didSelectCommentPromptComment:(id)arg2 withPlainTextName:(id)arg3 atIndex:(long long)arg4;
- (void)commentsContainerViewControllerDidBeginScrolling:(id)arg1;
- (void)commentsContainerViewController:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3 cell:(id)arg4;
- (void)commentsContainerViewController:(id)arg1 didReceiveUnpinTapOnComment:(id)arg2;
- (void)commentsContainerViewControllerHeightDidChange:(id)arg1;
- (void)commentTextFieldContainerViewDidChangeText:(id)arg1;
- (void)commentTextFieldContainerView:(id)arg1 didPostCommentText:(id)arg2;
- (void)commentTextFieldContainerViewDidTapMoreButton:(id)arg1;
- (void)commentTextFieldContainerView:(id)arg1 didChangeEditing:(_Bool)arg2;
- (void)commentTextFieldContainerViewDidAnimateButtonVisibility:(id)arg1;
- (void)commentTextFieldContainerViewDidUpdateButtonVisibility:(id)arg1;
- (void)guestInteractionButtonsContainerViewDidTapViewerInviteButton:(id)arg1;
- (void)guestInteractionButtonsContainerViewDidTapAREffectButton:(id)arg1;
- (void)guestInteractionButtonsContainerViewDidTapSwitchCameraButton:(id)arg1;
- (void)guestInteractionButtonsContainerViewDidTapCancelButton:(id)arg1;
- (void)broadcastInteractionButtonsContainerViewDidTapGalleryButton:(id)arg1;
- (void)broadcastInteractionButtonsContainerViewDidTapLiveQuestionButton:(id)arg1;
- (void)broadcastInteractionButtonsContainerViewDidTapAREffectButton:(id)arg1;
- (void)broadcastInteractionButtonsContainerViewDidTapLiveResourceButton:(id)arg1;
- (void)broadcastInteractionButtonsContainerViewDidTapViewerInviteButton:(id)arg1;
- (void)broadcastInteractionButtonsContainerViewDidTapLiveWithInviteButton:(id)arg1;
- (void)broadcastInteractionButtonsContainerViewDidTapSwitchCamerasButton:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)viewerInteractionButtonsContainerViewDidTapSubmitQuestionButton:(id)arg1;
- (void)viewerInteractionButtonsContainerViewDidTapInviteButton:(id)arg1;
- (void)viewerInteractionButtonsContainerViewDidTapTrayButton:(id)arg1;
- (void)viewerInteractionButtonsContainerViewDidLongPressLikeButton:(id)arg1;
- (void)viewerInteractionButtonsContainerViewDidTapLikeButton:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) IGTapButton *submitQuestionButton;
@property(readonly, nonatomic) IGTapButton *galleryButton;
@property(readonly, nonatomic) IGTapButton *liveResourceButton;
@property(readonly, nonatomic) IGTapButton *liveWithInviteButton;
- (void)setGalleryButtonSelected:(_Bool)arg1;
- (void)setAREffectButtonSelected:(_Bool)arg1;
- (void)setSubmitQuestionButtonSelected:(_Bool)arg1;
- (void)updateQuestionOverlayWithQuestion:(id)arg1 questionPk:(id)arg2 submittedByUser:(id)arg3 isActivate:(_Bool)arg4;
- (void)showLiveResourceButtonAnimated:(_Bool)arg1;
- (void)configureLiveResourceButtonWithIconName:(id)arg1;
- (void)_updateCommentsViewVisibility;
@property(nonatomic) _Bool commentsDisabled; // @dynamic commentsDisabled;
@property(nonatomic) long long commentsContainerDisplayMode; // @dynamic commentsContainerDisplayMode;
- (void)toggleCommentsHeightMinimized:(_Bool)arg1;
- (_Bool)canExpandCommentsContainer;
- (_Bool)isGestureOnCommentContainer:(id)arg1;
- (void)prepareForReuse;
- (void)updateQuestionButtonBadgeCount:(long long)arg1;
- (void)updateLiveWithInviteBadgeCount:(long long)arg1;
- (void)showLiveWithInviteButton:(_Bool)arg1;
- (void)showCommentTextField;
- (_Bool)isEditingComment;
- (void)setEnabledIncreasedCommentHeight:(_Bool)arg1;
- (id)visibleCellForComment:(id)arg1;
- (_Bool)isCommentVisible:(id)arg1;
- (void)removeAllCommentsFromUserPk:(id)arg1;
- (void)removeCommentWithPk:(id)arg1;
- (id)currentPinnedComment;
- (void)unpinComment;
- (void)pinComment:(id)arg1 module:(id)arg2;
- (void)displayLikerProfileImage:(id)arg1 likeCount:(long long)arg2 fromSelf:(_Bool)arg3 overDuration:(double)arg4;
- (void)displayNumLikes:(long long)arg1 fromSelf:(_Bool)arg2 overDuration:(double)arg3 likeAnimationType:(unsigned long long)arg4;
- (void)updateCommentPk:(id)arg1 withComment:(id)arg2;
- (void)addComments:(id)arg1 forceScrollToBottom:(_Bool)arg2 module:(id)arg3;
- (void)updateAccessibilityForCameraPosition:(long long)arg1;
- (void)configureWithLiveBroadcastConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 footerViewMode:(long long)arg2 liveBroadcastConfig:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

