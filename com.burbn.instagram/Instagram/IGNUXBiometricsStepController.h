//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNUXBiometricsViewControllerDelegate.h"
#import "IGNUXStepControllerProtocol.h"

@class IGBiometryOptInController, IGNUXFlowContext, NSString, UIViewController;

@interface IGNUXBiometricsStepController : NSObject <IGNUXStepControllerProtocol, IGNUXBiometricsViewControllerDelegate>
{
    IGNUXFlowContext *_context;
    UIViewController *_viewController;
    IGBiometryOptInController *_optInController;
    id <IGNUXFlowCoordinatorProtocol> coordinator;
}

+ (_Bool)isValidForContext:(id)arg1;
@property(nonatomic) __weak id <IGNUXFlowCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (void).cxx_destruct;
- (void)biometricsViewControllerDidTapNextButton:(id)arg1;
- (void)biometricsViewControllerDidTapSkipButton:(id)arg1;
- (void)biometricsViewControllerDidLoad:(id)arg1;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

