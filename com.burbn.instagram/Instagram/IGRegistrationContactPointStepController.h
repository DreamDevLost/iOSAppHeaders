//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRegistrationStepControllerProtocol.h"
#import "IGRetroRegistrationContactPointViewControllerDelegate.h"

@class IGRegistrationFlowContext, NSString;

@interface IGRegistrationContactPointStepController : NSObject <IGRetroRegistrationContactPointViewControllerDelegate, IGRegistrationStepControllerProtocol>
{
    IGRegistrationFlowContext *_context;
    long long _flowType;
    id <IGRegistrationCoordinatorProtocol> coordinator;
}

+ (_Bool)isValidForContext:(id)arg1;
@property(nonatomic) __weak id <IGRegistrationCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (void).cxx_destruct;
- (void)contactPointVCDidTapVettedPhoneLoginButton:(id)arg1;
- (void)contactPointVCDidTapNextButton:(id)arg1;
- (void)contactPointVCDidTapEmailDomain:(id)arg1 domain:(id)arg2;
- (void)contactPointVCDidTapContinueCreateAccountButton:(id)arg1 isFBConnected:(_Bool)arg2;
- (void)contactPointVCDidTapAutoLoginButton:(id)arg1 isFBConnected:(_Bool)arg2;
- (void)contactPointVCDidPrefillContactPoint:(id)arg1 contactPointType:(long long)arg2;
- (void)contactPointVCDidLoadView:(id)arg1;
- (void)contactPointVCDidFocusTextField:(id)arg1 contactPointType:(long long)arg2;
- (void)contactPointVCDidFailToAdvance:(id)arg1 reason:(id)arg2;
- (void)contactPointVCDidFailEmailValidation:(id)arg1;
- (void)contactPointViewControllerDidSelectContactPointType:(long long)arg1;
- (void)contactViewControllerWantsToDismiss:(id)arg1;
- (void)contactPointViewControllerDelegateSMSSentWithPhoneNumber:(id)arg1 isPhoneNumberTaken:(_Bool)arg2 smsConsent:(_Bool)arg3 smsVerificationCode:(id)arg4 contactPointViewController:(id)arg5 isGDPRRequired:(_Bool)arg6 tosVersion:(id)arg7;
- (void)contactPointViewController:(id)arg1 proceedWithValidatedEmail:(id)arg2 usernameSuggestions:(id)arg3 isGDPRRequired:(_Bool)arg4 tosVersion:(id)arg5;
- (void)contactPointViewControllerDidTapLoginButton:(id)arg1;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

