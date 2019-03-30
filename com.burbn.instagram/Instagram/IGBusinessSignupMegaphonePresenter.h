//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBusinessFlowPresenterDelegate.h"
#import "IGGenericMegaphoneViewV2Delegate.h"
#import "IGMegaphonePresenterProtocol.h"
#import "IGQPMegaphonePresenterProtocol.h"
#import "IGQPMegaphoneViewDelegate.h"

@class IGBusinessConversionMegaphoneLogger, IGBusinessFlowBusinessConversion, IGBusinessFlowBusinessConvertAndSignUp, IGGenericMegaphone, IGQPMegaphone, IGUserSession, NSString, UIView;

@interface IGBusinessSignupMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGBusinessFlowPresenterDelegate, IGQPMegaphoneViewDelegate, IGMegaphonePresenterProtocol, IGQPMegaphonePresenterProtocol>
{
    id <IGQPViewPresenterDelegate> _delegate;
    IGUserSession *_userSession;
    IGGenericMegaphone *_legacyMegaphone;
    IGQPMegaphone *_megaphone;
    id <IGMegaphonePresenterDelegate> _legacyDelegate;
    IGBusinessConversionMegaphoneLogger *_logger;
    NSString *_module;
    IGBusinessFlowBusinessConversion *_businessConversionFlow;
    IGBusinessFlowBusinessConvertAndSignUp *_convertSignUpFlow;
}

+ (_Bool)canPresentMegaphone:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) IGBusinessFlowBusinessConvertAndSignUp *convertSignUpFlow; // @synthesize convertSignUpFlow=_convertSignUpFlow;
@property(retain, nonatomic) IGBusinessFlowBusinessConversion *businessConversionFlow; // @synthesize businessConversionFlow=_businessConversionFlow;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) IGBusinessConversionMegaphoneLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <IGMegaphonePresenterDelegate> legacyDelegate; // @synthesize legacyDelegate=_legacyDelegate;
@property(readonly, nonatomic) IGQPMegaphone *megaphone; // @synthesize megaphone=_megaphone;
@property(readonly, nonatomic) IGGenericMegaphone *legacyMegaphone; // @synthesize legacyMegaphone=_legacyMegaphone;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGQPViewPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)businessFlowMegaphonePresenter;
- (id)businessFlowMegaphonePresenterDelegate;
- (id)businessFlowPresentingViewController;
- (id)_getValueFromComponent:(id)arg1 key:(id)arg2;
- (id)_getBusinessSignUpPrefillInfo;
- (void)_handleMegaphoneButtonTapped:(id)arg1;
- (void)_handleMegaphoneViewDismissed;
- (void)qpMegaphoneViewDidTapCountryButton:(id)arg1;
- (void)qpMegaphoneViewNeedsResize:(id)arg1;
- (void)qpMegaphoneView:(id)arg1 didTapButton:(id)arg2 extraQPInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)qpMegaphoneViewDidDismiss:(id)arg1;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)logMegaphoneSeen;
@property(readonly, nonatomic) UIView *viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 delegate:(id)arg2 logger:(id)arg3 userSession:(id)arg4 module:(id)arg5;
- (id)initWithLegacyMegaphone:(id)arg1 legacyDelegate:(id)arg2 logger:(id)arg3 userSession:(id)arg4 module:(id)arg5;
- (id)initWithMegaphone:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

