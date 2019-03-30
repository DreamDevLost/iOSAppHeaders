//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGConfirmPhoneSettings, IGUserSession, NSString;

@interface IGConfirmedContactIntentTarget : FBGeneratedIntentTarget
{
    _Bool _smsConsent;
    long long _confirmationType;
    IGConfirmPhoneSettings *_confirmPhoneSettings;
    NSString *_phoneNumber;
    id <IGConfirmPhoneNumberViewControllerDelegate> _confirmPhoneNumberDelegate;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <IGConfirmPhoneNumberViewControllerDelegate> confirmPhoneNumberDelegate; // @synthesize confirmPhoneNumberDelegate=_confirmPhoneNumberDelegate;
@property(readonly, nonatomic) _Bool smsConsent; // @synthesize smsConsent=_smsConsent;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) IGConfirmPhoneSettings *confirmPhoneSettings; // @synthesize confirmPhoneSettings=_confirmPhoneSettings;
@property(readonly, nonatomic) long long confirmationType; // @synthesize confirmationType=_confirmationType;
- (void).cxx_destruct;
- (id)initWithConfirmationType:(long long)arg1 confirmPhoneSettings:(id)arg2 phoneNumber:(id)arg3 smsConsent:(_Bool)arg4 confirmPhoneNumberDelegate:(id)arg5 userSession:(id)arg6;

@end

