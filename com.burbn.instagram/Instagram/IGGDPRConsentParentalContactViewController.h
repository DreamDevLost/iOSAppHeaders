//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGGDPRConsentParentalContactViewDelegate.h"
#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"

@class IGGDPRConsentContext, IGGDPRConsentDataSource, IGGDPRConsentLayoutSpec, IGGDPRConsentLoadingOverlayView, IGGDPRConsentLogger, IGGDPRConsentNavigationPresenter, IGGDPRConsentParentalContactView, IGKeyboardObserver, IGUserSession, NSString;

@interface IGGDPRConsentParentalContactViewController : IGViewController <IGGDPRConsentParentalContactViewDelegate, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate>
{
    IGUserSession *_userSession;
    IGGDPRConsentDataSource *_consentDataSource;
    IGGDPRConsentContext *_consentContext;
    IGGDPRConsentParentalContactView *_parentalContactView;
    IGGDPRConsentLoadingOverlayView *_loadingOverlayView;
    IGGDPRConsentLogger *_logger;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    id <IGAPIClient> _networker;
    IGGDPRConsentNavigationPresenter *_presenter;
    IGKeyboardObserver *_keyboardObserver;
}

- (void).cxx_destruct;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (id)analyticsModule;
- (void)GDPRConsentParentalContactViewDidTapSubmitButton;
- (void)onCancelModal;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_configureParentalContactView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_configureWithConsentContext;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 consentDataSource:(id)arg2 consentContext:(id)arg3 networker:(id)arg4 navigationPresenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

