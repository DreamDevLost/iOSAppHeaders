//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRegistrationCoordinatorProtocol.h"

@class IGNUXFlowCoordinator, IGRegistrationFlowContext, IGRegistrationStepProvider, UINavigationController;

@interface IGRegistrationFlowCoordinator : NSObject <IGRegistrationCoordinatorProtocol>
{
    IGRegistrationStepProvider *_stepProvider;
    IGNUXFlowCoordinator *_flowCoordinator;
    id <IGRegistrationFlowCoordinatorDelegate> _delegate;
    IGRegistrationFlowContext *_context;
    UINavigationController *_navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) IGRegistrationFlowContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <IGRegistrationFlowCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processNextStep;
- (void)stepController:(id)arg1 didRequestLoginWithUsername:(id)arg2 password:(id)arg3;
- (void)stepControllerDidGetBlockedByWeakPassword:(id)arg1;
- (void)stepController:(id)arg1 didTriggerMovingBackToVC:(id)arg2;
- (void)stepControllerDidGetBlockedByGDPR:(id)arg1;
- (void)stepController:(id)arg1 didCompleteRegistrationWithUserSession:(id)arg2;
- (void)stepControllerDidGoBack:(id)arg1;
- (void)stepControllerDidSwitchToSignInFlow:(id)arg1;
- (void)stepControllerDidCompleteStep:(id)arg1;
- (void)startFlow;
- (id)initWithContext:(id)arg1 navigationController:(id)arg2 stepProvider:(id)arg3;

@end
