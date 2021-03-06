//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGCoreTextLinkHandler.h"
#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "IGRetroRegistrationConfirmationViewDelegate.h"
#import "IGTextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBTimer, IGAuthenticator, IGKeyboardObserver, IGNUXLayoutSpec, IGRetroRegistrationPhoneConfirmationView, NSString;

@interface IGRetroRegistrationPhoneConfirmationViewController : UIViewController <IGAnalyticsModule, IGCoreTextLinkHandler, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGRetroRegistrationConfirmationViewDelegate, IGTextFieldDelegate, UIGestureRecognizerDelegate>
{
    IGKeyboardObserver *_keyboardObserver;
    IGNUXLayoutSpec *_layoutSpec;
    IGAuthenticator *_authenticator;
    FBTimer *_resendSMSTimer;
    FBTimer *_autoSubmitSMSTimer;
    id <IGRetroRegistrationPhoneConfirmationViewControllerDelegate> _delegate;
    IGRetroRegistrationPhoneConfirmationView *_confirmationView;
    id <IGAPIClient> _networker;
    NSString *_phoneNumber;
}

@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(retain, nonatomic) IGRetroRegistrationPhoneConfirmationView *confirmationView; // @synthesize confirmationView=_confirmationView;
@property(nonatomic) __weak id <IGRetroRegistrationPhoneConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)confirmationViewDidTapFooterBackButton;
- (void)confirmationViewDidTapNextButtonWithCode:(id)arg1 shouldConvert:(_Bool)arg2;
- (void)_logNextButtonBlocked:(id)arg1;
- (void)_invalidateTimer:(id)arg1;
- (void)_initiateAutoSubmitTimer;
- (void)_initiateResendTimer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)_handleCodeResend;
- (id)_subTitleStyledText;
- (id)_titleText;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidTapBackspaceKey:(id)arg1 previousText:(id)arg2;
- (void)textFieldDidChange:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)analyticsModule;
- (void)_loginVettedPhoneUserWithUserID:(id)arg1 token:(id)arg2;
- (void)_handleValidSMSCodeWithResponse:(id)arg1 confirmationCode:(id)arg2;
- (id)_convertedConfirmationCode:(id)arg1;
- (void)_verifyCode:(id)arg1 shouldConvert:(_Bool)arg2;
- (void)_resendCode;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_keyboardWillHide;
- (void)_backToPhoneNumberButtonTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 layoutSpec:(id)arg2 authenticator:(id)arg3 networker:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

