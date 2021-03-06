//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCountryCodeViewControllerDelegate.h"

@class IGLabel, IGRetroRegistrationPhoneNumberField, NSString, UIActivityIndicatorView, UIButton;

@interface IGChangePhoneNumberUpdatedViewController : IGViewController <IGCountryCodeViewControllerDelegate>
{
    UIButton *_nextButton;
    IGRetroRegistrationPhoneNumberField *_phoneNumberField;
    NSString *_phoneNumber;
    IGLabel *_smsConsentLabel;
    NSString *_countryNumber;
    unsigned long long _selectedContactPreference;
    UIActivityIndicatorView *_loadingIndicator;
    id <IGChangePhoneNumberUpdatedViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGChangePhoneNumberUpdatedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2;
- (void)_countryCodeButtonTapped;
- (void)_nextButtonTapped;
- (void)updateNextButtonWithIsLoading:(_Bool)arg1;
- (id)_createPhoneNumberField;
- (id)_createNextButton;
- (void)_layoutSMSConsentLabel:(double)arg1 width:(double)arg2;
- (id)_createSMSConsentLabel;
- (void)_parsePhoneNumber;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPhoneNumber:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

