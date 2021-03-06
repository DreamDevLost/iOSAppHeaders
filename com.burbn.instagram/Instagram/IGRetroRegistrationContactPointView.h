//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGRetroRegistrationContactPointScrollViewDelegate.h"

@class IGRetroRegistrationContactPointScrollView, IGWelcomeViewBackgroundView, NSString, UIButton;

@interface IGRetroRegistrationContactPointView : UIView <IGRetroRegistrationContactPointScrollViewDelegate>
{
    IGRetroRegistrationContactPointScrollView *_contactPointScrollView;
    IGWelcomeViewBackgroundView *_redesignedBackgroundView;
    id <IGRetroRegistrationContactPointViewDelegate> _delegate;
    UIButton *_dismissButton;
}

@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak id <IGRetroRegistrationContactPointViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGWelcomeViewBackgroundView *redesignedBackgroundView; // @synthesize redesignedBackgroundView=_redesignedBackgroundView;
@property(readonly, nonatomic) IGRetroRegistrationContactPointScrollView *contactPointScrollView; // @synthesize contactPointScrollView=_contactPointScrollView;
- (void).cxx_destruct;
- (void)enableTabSwitcher:(_Bool)arg1;
- (void)hideInlineErrorMessage;
- (void)showInlineErrorMessage:(id)arg1 textFieldType:(long long)arg2;
- (void)contactPointScrollViewDidPrefillWithContactPointType:(long long)arg1;
- (void)_didTapDismissButton;
- (void)_didTapFooterLoginButton;
- (void)contactPointScrollView:(id)arg1 didSelectContactPointType:(long long)arg2 wasFirstResponder:(_Bool)arg3;
- (id)_createDismissButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_createRedesignedBackgroundView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 prefillPhoneNumber:(id)arg2 prefillEmail:(id)arg3 layoutSpec:(id)arg4 isSwitchingAccount:(_Bool)arg5 isRedesignEnabled:(_Bool)arg6 showSMSConsentAboveFooter:(_Bool)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

