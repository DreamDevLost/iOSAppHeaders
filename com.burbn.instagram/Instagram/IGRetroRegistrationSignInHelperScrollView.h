//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class IGFacebookButton, IGLabel, IGNUXLayoutSpec, IGRetroRegistrationFacebookButtonSeperator, IGRetroRegistrationNextButton, IGRetroRegistrationPhoneNumberField, IGRetroRegistrationSignInHelperToggleView, IGRetroRegistrationTextField, IGTextField, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface IGRetroRegistrationSignInHelperScrollView : UIScrollView
{
    _Bool _useCodeRecover;
    _Bool _omniboxEnabled;
    _Bool _topBackButtonEnabled;
    IGNUXLayoutSpec *_layoutSpec;
    UIActivityIndicatorView *_spinner;
    _Bool _isTabEnabled;
    IGRetroRegistrationSignInHelperToggleView *_toggleView;
    IGRetroRegistrationTextField *_emailField;
    IGRetroRegistrationPhoneNumberField *_phoneNumberField;
    IGRetroRegistrationNextButton *_sendButton;
    IGTextField *_inputView;
    UIButton *_loginHelperButton;
    IGFacebookButton *_facebookButton;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    IGRetroRegistrationFacebookButtonSeperator *_facebookButtonSeparator;
    IGLabel *_inlineErrorLabel;
}

@property(retain, nonatomic) IGLabel *inlineErrorLabel; // @synthesize inlineErrorLabel=_inlineErrorLabel;
@property(retain, nonatomic) IGRetroRegistrationFacebookButtonSeperator *facebookButtonSeparator; // @synthesize facebookButtonSeparator=_facebookButtonSeparator;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) _Bool isTabEnabled; // @synthesize isTabEnabled=_isTabEnabled;
@property(retain, nonatomic) IGFacebookButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(retain, nonatomic) UIButton *loginHelperButton; // @synthesize loginHelperButton=_loginHelperButton;
@property(retain, nonatomic) IGTextField *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) IGRetroRegistrationNextButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) IGRetroRegistrationPhoneNumberField *phoneNumberField; // @synthesize phoneNumberField=_phoneNumberField;
@property(retain, nonatomic) IGRetroRegistrationTextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) IGRetroRegistrationSignInHelperToggleView *toggleView; // @synthesize toggleView=_toggleView;
- (void).cxx_destruct;
- (void)startSpinner:(_Bool)arg1;
- (void)updateErrorWithMessage:(id)arg1;
- (void)updatePhoneNumber:(id)arg1 email:(id)arg2 inputMode:(long long)arg3;
- (id)_createLoginHelperButton;
- (id)_createSendButton;
- (id)_createPhoneNumberField;
- (id)_createInlineErrorLabel;
- (id)_createEmailField;
- (id)_createToggleView;
- (id)_createDescriptionLabel;
- (id)_createTitleLabel;
- (id)_createIconView;
- (void)_switchToEmailView;
- (void)_switchToPhoneNumberView;
- (void)setInputMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 useCodeRecover:(_Bool)arg2 layoutSpec:(id)arg3 omniboxEnabled:(_Bool)arg4 topBackButtonEnabled:(_Bool)arg5;

@end
