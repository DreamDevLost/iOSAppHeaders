//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGDirectComposerButtonDelegate.h"
#import "IGDirectComposerTextListener.h"

@class IGStoryFooterComposerViewController, IGTapButton, NSString, UIView<IGDirectComposerProtocol>;

@interface IGStoryFullscreenDefaultFooterView : UIView <IGDirectComposerButtonDelegate, IGDirectComposerTextListener>
{
    IGTapButton *_audioToggleButton;
    IGTapButton *_moreOptionsButton;
    IGStoryFooterComposerViewController *_composerViewController;
    UIView<IGDirectComposerProtocol> *_pillComposerView;
    _Bool _isAudioEnabled;
    id <IGStoryFullscreenDefaultFooterViewDelegate> _delegate;
    IGTapButton *_reshareButton;
    IGTapButton *_trayButton;
}

@property(nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(readonly, nonatomic) IGTapButton *trayButton; // @synthesize trayButton=_trayButton;
@property(readonly, nonatomic) IGTapButton *reshareButton; // @synthesize reshareButton=_reshareButton;
@property(nonatomic) __weak id <IGStoryFullscreenDefaultFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
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
- (void)_trayTapped;
- (void)_reshareTapped;
- (void)_moreOptionsTapped;
- (void)_didToggleAudioButton:(id)arg1;
- (_Bool)isComposingMessage;
- (void)beginComposingMessage;
- (void)configureWithViewModel:(id)arg1 userSession:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_composerWidthForButtonAreaWidth:(double)arg1;
- (struct CGRect)_buttonContentsFrameWithinContainerFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
