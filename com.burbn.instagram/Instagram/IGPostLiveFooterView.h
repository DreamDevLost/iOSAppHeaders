//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGDirectComposerButtonDelegate.h"
#import "IGDirectComposerTextListener.h"
#import "IGLiveCommentsContainerViewControllerDelegate.h"
#import "IGLiveQuestionOverlayViewDelegate.h"
#import "IGPostLiveFailureBannerViewDelegate.h"
#import "IGStoryFullscreenFooterPivotViewDelegate.h"

@class IGDirectThreadInputView, IGLiveCommentsContainerViewController, IGLiveQuestionOverlayViewController, IGLiveViewerCountView, IGPostLiveFailureBannerView, IGStoryFullscreenFooterPivotView, IGTapButton, NSString, UIButton;

@interface IGPostLiveFooterView : UIView <IGDirectComposerButtonDelegate, IGDirectComposerTextListener, IGStoryFullscreenFooterPivotViewDelegate, IGPostLiveFailureBannerViewDelegate, IGLiveCommentsContainerViewControllerDelegate, IGLiveQuestionOverlayViewDelegate>
{
    UIButton *_moreButton;
    IGTapButton *_shareButton;
    IGStoryFullscreenFooterPivotView *_pivotView;
    IGPostLiveFailureBannerView *_shareFailureBannerView;
    IGTapButton *_storiesBrowsingButton;
    UIView *_heartParentView;
    IGLiveCommentsContainerViewController *_commentsContainerViewController;
    IGDirectThreadInputView *_pillComposerView;
    IGLiveViewerCountView *_viewerCountView;
    _Bool _showViewerCount;
    IGLiveQuestionOverlayViewController *_questionOverlayViewController;
    _Bool _showingQuestionOverlay;
    id <IGPostLiveFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGPostLiveFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)_heartFrameWithSize:(double)arg1;
- (_Bool)_needBottomButtonsPadding;
- (void)_animateLayoutChange;
- (void)inputView:(id)arg1 didTapStickerButton:(id)arg2;
- (void)inputView:(id)arg1 didTapQuickReplyButton:(id)arg2 isHighlighted:(_Bool)arg3 text:(id)arg4;
- (void)inputView:(id)arg1 voiceMessageLongPressGestureRecognizerDidUpdate:(id)arg2;
- (void)inputView:(id)arg1 didTapVoiceMessageButton:(id)arg2;
- (void)inputView:(id)arg1 didTapAnimatedMediaButton:(id)arg2;
- (void)inputView:(id)arg1 didTapCameraButton:(id)arg2;
- (void)inputView:(id)arg1 didTapMoreButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSendButtonWithText:(id)arg2;
- (void)inputView:(id)arg1 didTapOverlayedTextCameraButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapGalleryButton:(id)arg2;
- (void)inputView:(id)arg1 didTapLikeButton:(id)arg2;
- (void)inputView:(id)arg1 didLongPressCameraButtonWithGesture:(id)arg2;
- (void)composerDidEndEditing:(id)arg1;
- (void)composerDidBeginEditing:(id)arg1;
- (void)composerDidTapOnTextArea:(id)arg1;
- (void)composerDidReachMaxTextLength:(id)arg1;
- (void)composer:(id)arg1 didChangeToText:(id)arg2 mode:(id)arg3;
- (void)errorButtonTappedInFailureBannerView:(id)arg1;
- (void)removeQuestionButtonTapped:(id)arg1;
- (void)questionOverlayTapped:(id)arg1;
- (void)commentsContainerViewControllerDidBeginScrolling:(id)arg1;
- (void)commentsContainerViewController:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3 cell:(id)arg4;
- (void)commentsContainerViewController:(id)arg1 didReceiveUnpinTapOnComment:(id)arg2;
- (void)commentsContainerViewControllerHeightDidChange:(id)arg1;
- (void)pivotView:(id)arg1 didTapPivotWithType:(long long)arg2;
- (void)_shareTapped;
- (void)_viewerCountTapped;
- (void)_moreButtonTapped;
- (void)_storiesBrowsingButtonTapped;
- (void)updateQuestionWithQuestion:(id)arg1 questionPk:(id)arg2 submittedByUser:(id)arg3 isActivate:(_Bool)arg4;
- (void)hideQuestionOverlay:(_Bool)arg1 forKeyboardFrameChangeWithCurve:(long long)arg2 duration:(double)arg3;
- (_Bool)isComposingMessage;
- (void)beginComposingMessage;
- (void)clearOutHeartAnimations;
- (_Bool)isGestureOnCommentContainer:(id)arg1;
- (void)configureFailureBannerState:(long long)arg1;
- (void)displayAvatarLikeProfileImage:(id)arg1 likeCount:(long long)arg2;
- (void)displayNumLikes:(long long)arg1 likeAnimationType:(unsigned long long)arg2;
- (void)removeComments:(id)arg1;
- (_Bool)unpinCommentIfNeeded;
- (void)pinComment:(id)arg1 module:(id)arg2;
- (void)addComments:(id)arg1 forceScrollToBottom:(_Bool)arg2 module:(id)arg3;
- (void)updateWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (double)_bottomSafeAreaOffset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

