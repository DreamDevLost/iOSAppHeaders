//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGKeyboardObserverShowDelegate.h"
#import "IGTwoFactorCompleteViewControllerDelegate.h"
#import "IGTwoFactorConfirmationCodeViewDelegate.h"
#import "IGTwoFactorEnterPhoneNumberViewControllerDelegate.h"

@class IGConfirmPhoneManager, IGTwoFactorConfirmationCodeView, IGTwoFactorSetupFlowContext, IGTwoFactorSetupLogger, IGUserSession, NSString, UIActivityIndicatorView;

@interface IGTwoFactorConfirmationCodeViewController : IGViewController <IGKeyboardObserverShowDelegate, IGTwoFactorConfirmationCodeViewDelegate, IGTwoFactorCompleteViewControllerDelegate, IGTwoFactorEnterPhoneNumberViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorSetupFlowContext *_setupFlowContext;
    IGTwoFactorSetupLogger *_setupLogger;
    IGTwoFactorConfirmationCodeView *_confirmationCodeView;
    UIActivityIndicatorView *_loadingIndicatorView;
    id <IGTwoFactorConfirmationCodeViewControllerDelegate> _delegate;
    IGConfirmPhoneManager *_confirmPhoneManager;
}

@property(retain, nonatomic) IGConfirmPhoneManager *confirmPhoneManager; // @synthesize confirmPhoneManager=_confirmPhoneManager;
@property(nonatomic) __weak id <IGTwoFactorConfirmationCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (id)_headerViewContextText;
- (void)_sendConfirmationCode;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)twoFactorEnterPhoneNumberViewController:(id)arg1 didCompletePhoneNumber:(id)arg2 withConfirmPhoneSettings:(id)arg3;
- (void)twoFactorCompleteViewControllerDidFinishSetupFlow:(id)arg1;
- (void)twoFactorConfirmationCodeView:(id)arg1 didTapOnContentLinkWithURL:(id)arg2;
- (void)twoFactorConfirmationCodeView:(id)arg1 didTapOnButtonFooterLinkWithURL:(id)arg2;
- (void)twoFactorConfirmationCodeViewDidTapOnSubmitButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersTabBarHidden;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 setupFlowContext:(id)arg2 setupLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

