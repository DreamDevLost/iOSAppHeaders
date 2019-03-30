//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGConfirmPhoneManagerDelegate.h"
#import "IGCoreTextLinkHandler.h"

@class IGConfirmPhoneManager, IGCoreTextView, IGStringStyle, NSString, UIView;

@interface IGSMSConfirmationController : NSObject <IGCoreTextLinkHandler, IGConfirmPhoneManagerDelegate>
{
    id <IGSMSConfirmationControllerDelegate> _delegate;
    NSString *_phoneNumber;
    long long _smsResendDelay;
    IGConfirmPhoneManager *_confirmPhoneManager;
    UIView *_coreTextViewContainer;
    IGCoreTextView *_resendCodeCoreTextView;
    IGCoreTextView *_changePhoneNumberCoreTextView;
    IGStringStyle *_stringStyle;
    double _coreTextViewWidth;
    double _coreTextViewHeight;
}

@property(nonatomic) double coreTextViewHeight; // @synthesize coreTextViewHeight=_coreTextViewHeight;
@property(nonatomic) double coreTextViewWidth; // @synthesize coreTextViewWidth=_coreTextViewWidth;
@property(retain, nonatomic) IGStringStyle *stringStyle; // @synthesize stringStyle=_stringStyle;
@property(retain, nonatomic) IGCoreTextView *changePhoneNumberCoreTextView; // @synthesize changePhoneNumberCoreTextView=_changePhoneNumberCoreTextView;
@property(retain, nonatomic) IGCoreTextView *resendCodeCoreTextView; // @synthesize resendCodeCoreTextView=_resendCodeCoreTextView;
@property(retain, nonatomic) UIView *coreTextViewContainer; // @synthesize coreTextViewContainer=_coreTextViewContainer;
@property(retain, nonatomic) IGConfirmPhoneManager *confirmPhoneManager; // @synthesize confirmPhoneManager=_confirmPhoneManager;
@property(readonly, nonatomic) long long smsResendDelay; // @synthesize smsResendDelay=_smsResendDelay;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) __weak id <IGSMSConfirmationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)confirmPhoneManager:(id)arg1 didFireWithSecondsLeft:(long long)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)_getResendFooterWithFontSize:(double)arg1;
- (id)_getRobocallStyledStringForSecondsRemaining:(long long)arg1 withFontSize:(double)arg2;
- (void)_updateRobocallFooterWithSecondsLeft:(long long)arg1;
- (void)_setupIGCoreTextViewsWithFontSize:(double)arg1;
- (void)_setupIGCoreTextViewsWithMaximumFontSize:(double)arg1;
- (void)continueTimer;
- (void)invalidateTimer;
- (void)sizeCoreTextViewContainerToFit;
- (void)configureWithSize:(struct CGSize)arg1;
- (id)initWithPhoneNumber:(id)arg1 confirmPhoneSettings:(id)arg2 stringStyle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

