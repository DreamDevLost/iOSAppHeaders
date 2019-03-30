//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCountdownTimerDelegate.h"

@class IGConfirmPhoneSettings, IGCountdownTimer, NSTimer;

@interface IGConfirmPhoneManager : NSObject <IGCountdownTimerDelegate>
{
    _Bool _resendSMSDelayPassed;
    IGConfirmPhoneSettings *_confirmPhoneSettings;
    id <IGConfirmPhoneManagerDelegate> _delegate;
    NSTimer *_resendSMSTimer;
    IGCountdownTimer *_robocallTimer;
    long long _numSMSResends;
}

@property(nonatomic) _Bool resendSMSDelayPassed; // @synthesize resendSMSDelayPassed=_resendSMSDelayPassed;
@property(nonatomic) long long numSMSResends; // @synthesize numSMSResends=_numSMSResends;
@property(retain, nonatomic) IGCountdownTimer *robocallTimer; // @synthesize robocallTimer=_robocallTimer;
@property(retain, nonatomic) NSTimer *resendSMSTimer; // @synthesize resendSMSTimer=_resendSMSTimer;
@property(nonatomic) __weak id <IGConfirmPhoneManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGConfirmPhoneSettings *confirmPhoneSettings; // @synthesize confirmPhoneSettings=_confirmPhoneSettings;
- (void).cxx_destruct;
- (void)timer:(id)arg1 didFireWithSecondsLeft:(long long)arg2;
- (void)_resendTimerFired:(id)arg1;
- (void)_resetResendTimer;
- (void)_invalidateResendTimer;
- (_Bool)canResendSMS;
- (void)updateManagerAfterResendingCode;
- (void)continueActiveTimer;
- (void)invalidateActiveTimer;
- (id)initWithConfirmPhoneSettings:(id)arg1;

@end
