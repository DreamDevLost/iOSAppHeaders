//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGCoreTextLinkHandler.h"
#import "IGCountryCodeViewControllerDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "IGRegEmailDomianControllerDelegate.h"
#import "IGRetroRegistrationContactPointViewDelegate.h"
#import "IGTextFieldDelegate.h"

@class IGAuthenticator, IGBiometryAuthenticator, IGContactPointPrefillDataFetcher, IGContactPointPrefillLocalDataStore, IGFacebookAuthHelper, IGFacebookInfoFetcher, IGKeyboardObserver, IGNUXLayoutSpec, IGRegEmailDomainController, IGRegEmailDomainHScrollView, IGRetroRegistrationContactPointView, IGRetroRegistrationLoginAutoCompleteUser, NSArray, NSDictionary, NSString, UITapGestureRecognizer;

@interface IGRetroRegistrationContactPointViewController : UIViewController <IGAnalyticsModule, IGRetroRegistrationContactPointViewDelegate, IGCoreTextLinkHandler, IGTextFieldDelegate, IGCountryCodeViewControllerDelegate, IGKeyboardObserverShowDelegate, IGRegEmailDomianControllerDelegate>
{
    IGNUXLayoutSpec *_layoutSpec;
    _Bool _isSwitchingUsers;
    NSDictionary *_oneTapNonceToUserMap;
    NSString *_emailCheckErrorMessage;
    _Bool _isSubmittingLogin;
    _Bool _isFetchingAutoCompleteUserInfo;
    _Bool _isPhoneNumberPrefilled;
    _Bool _isEmailPrefilled;
    IGRetroRegistrationLoginAutoCompleteUser *_fbAutoCompleteUser;
    IGFacebookInfoFetcher *_fbInfoFetcher;
    IGFacebookAuthHelper *_fbAuthHelper;
    IGRegEmailDomainController *_emailDomainController;
    IGRegEmailDomainHScrollView *_emailDomainView;
    NSArray *_commonEmailDomains;
    IGAuthenticator *_authenticator;
    IGContactPointPrefillLocalDataStore *_contactPointLocalDataStore;
    _Bool _isRedesignEnabled;
    _Bool _showSMSConsentAboveFooter;
    IGBiometryAuthenticator *_biometryAuthenticator;
    _Bool _hasSwitchedToEmailTab;
    id <IGRetroRegistrationContactPointViewControllerDelegate> _delegate;
    IGRetroRegistrationContactPointView *_contactPointView;
    UITapGestureRecognizer *_tapGesture;
    long long _contactPointType;
    NSString *_contactPoint;
    id <IGAPIClient> _networker;
    IGContactPointPrefillDataFetcher *_contactPointPrefillDataFetcher;
    IGKeyboardObserver *_keyboardObserver;
}

@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(readonly, nonatomic) IGContactPointPrefillDataFetcher *contactPointPrefillDataFetcher; // @synthesize contactPointPrefillDataFetcher=_contactPointPrefillDataFetcher;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(nonatomic) _Bool hasSwitchedToEmailTab; // @synthesize hasSwitchedToEmailTab=_hasSwitchedToEmailTab;
@property(copy, nonatomic) NSString *contactPoint; // @synthesize contactPoint=_contactPoint;
@property(nonatomic) long long contactPointType; // @synthesize contactPointType=_contactPointType;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) IGRetroRegistrationContactPointView *contactPointView; // @synthesize contactPointView=_contactPointView;
@property(nonatomic) __weak id <IGRetroRegistrationContactPointViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didScrollEmailDomainView;
- (void)didSelectEmailDomain:(id)arg1;
- (id)_emailDomainController;
- (void)_fetchEmailDomains;
- (void)_showSuggestedContactDialogWithContactPoint:(id)arg1 contactPointType:(long long)arg2;
- (void)_showLoginUpsellWithContactPointType:(long long)arg1 oneTapAccount:(id)arg2 fbUser:(id)arg3;
- (void)_fetchAutoCompleteFBUserWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_getOneTapNonceToUserMapWithCompletion:(CDUnknownBlockType)arg1;
- (void)_continueCreateAccountFromContactPointType:(long long)arg1 isFBConnected:(_Bool)arg2;
- (void)_logInOneTapAccount:(id)arg1;
- (void)_autoLoginWithUserPK:(id)arg1 isFBConnected:(_Bool)arg2;
- (void)_updatePrefillFlags;
- (void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)contactPointViewDidPrefillWithContactPointType:(long long)arg1;
- (void)contactPointViewDidTapDismissButton;
- (void)contactPointViewDidTapFooterLoginButton;
- (void)contactPointView:(id)arg1 didSelectContactPointType:(long long)arg2 wasFirstResponder:(_Bool)arg3;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)_handleTakenEmailWithResponse:(id)arg1 email:(id)arg2;
- (void)_sendValidateEmailRequestWithEmail:(id)arg1 oneTapNonces:(id)arg2;
- (void)_validateEmail:(id)arg1;
- (_Bool)_validateEmailField:(id)arg1;
- (void)_sendCheckPhoneNumberRequestWithPhoneNumber:(id)arg1 oneTapNonces:(id)arg2;
- (void)_validatePhoneNumberForOneTapUser:(id)arg1;
- (void)_validatePhoneNumberForFBUser:(id)arg1;
- (void)_validatePhoneNumber:(id)arg1;
- (void)_loginVettedPhoneUserWithUserID:(id)arg1 token:(id)arg2;
- (void)_logNextButtonBlocked:(id)arg1;
- (void)_handleValidSendSMSCodeWithResponse:(id)arg1 phoneNumber:(id)arg2;
- (void)_sendSMSCodeToPhoneNumber:(id)arg1;
- (void)_registerWithPhone;
- (void)_registerWithEmail;
- (void)_logNextButtonTapped;
- (void)_nextButtonTapped;
- (void)_didTapSignInButton;
- (void)_countryCodeButtonTapped;
- (void)_backgroundViewTapped;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNetworker:(id)arg1 authenticator:(id)arg2 fbAuthHelper:(id)arg3 contactPointPrefillDataFetcher:(id)arg4 fbInfoFetcher:(id)arg5 isSwitchingUsers:(_Bool)arg6 layoutSpec:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
