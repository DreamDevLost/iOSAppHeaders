//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRegistrationPhoneConfirmationContentView, IGRetroRegistrationBackgroundView, IGWelcomeViewBackgroundView;

@interface IGRetroRegistrationPhoneConfirmationView : UIView
{
    IGRetroRegistrationBackgroundView *_backgroundView;
    IGRegistrationPhoneConfirmationContentView *_redesignedConfirmationContentView;
    id <IGRetroRegistrationConfirmationViewDelegate><IGCoreTextLinkHandler><IGCoreTextLinkHandler> _confirmationViewDelegate;
    IGWelcomeViewBackgroundView *_redesignedBackgroundView;
}

@property(retain, nonatomic) IGWelcomeViewBackgroundView *redesignedBackgroundView; // @synthesize redesignedBackgroundView=_redesignedBackgroundView;
@property(nonatomic) __weak id <IGRetroRegistrationConfirmationViewDelegate><IGCoreTextLinkHandler><IGCoreTextLinkHandler> confirmationViewDelegate; // @synthesize confirmationViewDelegate=_confirmationViewDelegate;
@property(retain, nonatomic) IGRegistrationPhoneConfirmationContentView *redesignedConfirmationContentView; // @synthesize redesignedConfirmationContentView=_redesignedConfirmationContentView;
@property(retain, nonatomic) IGRetroRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)hideInlineErrorMessage;
- (void)showInlineErrorMessage:(id)arg1;
- (void)keyboardWillHide;
- (void)keyboardWillShowEndFrame:(struct CGRect)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)setNextButtonEnabled:(_Bool)arg1;
- (void)_didTapNextButton;
- (void)_didTapBackButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2 phoneNumber:(id)arg3 titleText:(id)arg4 subTitleStyledText:(id)arg5;

@end

