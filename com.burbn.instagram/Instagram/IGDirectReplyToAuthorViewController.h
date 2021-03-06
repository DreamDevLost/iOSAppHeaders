//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectComposerButtonDelegate.h"
#import "IGDirectComposerSizingDelegate.h"
#import "IGDirectMessageModalHeaderViewDelegate.h"
#import "IGKeyboardObserverFrameChangeDelegate.h"
#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "IGNotificationHandler.h"

@class IGDirectMessageModalShareContent, IGDirectReplyToAuthorComposerViewController, IGDirectThreadService, IGUser, IGUserSession, NSString, UIView, UIView<IGDirectComposerProtocol>;

@interface IGDirectReplyToAuthorViewController : IGViewController <IGDirectComposerButtonDelegate, IGDirectComposerSizingDelegate, IGDirectMessageModalHeaderViewDelegate, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverFrameChangeDelegate, IGNotificationHandler>
{
    IGUserSession *_userSession;
    IGDirectThreadService *_threadService;
    IGDirectMessageModalShareContent *_shareContent;
    NSString *_analyticsModule;
    _Bool _showRoundedTopCorners;
    long long _source;
    IGUser *_replyToUser;
    IGDirectReplyToAuthorComposerViewController *_composerViewController;
    UIView<IGDirectComposerProtocol> *_inputView;
    UIView *_dimmingView;
    UIView *_headerView;
    _Bool _keyboardVisible;
    double _keyboardHeight;
    id <IGDirectReplyToAuthorViewControllerCameraDelegate> _cameraDelegate;
    id <IGDirectReplyToAuthorViewControllerDismissDelegate> _dismissDelegate;
    id <IGDirectReplyToAuthorViewControllerGalleryDelegate> _galleryDelegate;
}

@property(nonatomic) __weak id <IGDirectReplyToAuthorViewControllerGalleryDelegate> galleryDelegate; // @synthesize galleryDelegate=_galleryDelegate;
@property(nonatomic) __weak id <IGDirectReplyToAuthorViewControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) __weak id <IGDirectReplyToAuthorViewControllerCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
- (void).cxx_destruct;
- (unsigned long long)notificationPresentationPermissionsForNotificationSource:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)_didTapDismissView;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_dismissKeyboard;
- (void)_showKeyboard;
- (id)_headerView;
- (void)_setupHeaderView;
- (void)_setupInputViewManager;
- (void)_setupDismissView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)arg1 needsImmediateLayout:(_Bool)arg2;
- (id)_directShareRecipientForThread:(id)arg1;
- (id)_outgoingThreadIdentifierForThread:(id)arg1;
- (void)_sendMessageThreadPairs:(id)arg1;
- (void)_createThreadWithSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startCameraPresentationForThread:(id)arg1 cameraButton:(id)arg2;
- (void)messageModalHeaderViewDidTapTitle:(id)arg1;
- (void)inputView:(id)arg1 didTapStickerButton:(id)arg2;
- (void)inputView:(id)arg1 voiceMessageLongPressGestureRecognizerDidUpdate:(id)arg2;
- (void)inputView:(id)arg1 didTapVoiceMessageButton:(id)arg2;
- (void)inputView:(id)arg1 didTapAnimatedMediaButton:(id)arg2;
- (void)_startCameraTextPresentationForThread:(id)arg1 textCameraButton:(id)arg2 overlayedText:(id)arg3;
- (void)inputView:(id)arg1 didTapOverlayedTextCameraButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapQuickReplyButton:(id)arg2 isHighlighted:(_Bool)arg3 text:(id)arg4;
- (void)inputView:(id)arg1 didTapMoreButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSendButtonWithText:(id)arg2;
- (void)inputView:(id)arg1 didTapGalleryButton:(id)arg2;
- (void)inputView:(id)arg1 didTapCameraButton:(id)arg2;
- (void)inputView:(id)arg1 didTapLikeButton:(id)arg2;
- (void)inputView:(id)arg1 didLongPressCameraButtonWithGesture:(id)arg2;
- (id)analyticsModule;
- (void)dismiss;
- (id)initWithUserSession:(id)arg1 threadService:(id)arg2 replyToUser:(id)arg3 shareContent:(id)arg4 showRoundedTopCorners:(_Bool)arg5 source:(long long)arg6 module:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

