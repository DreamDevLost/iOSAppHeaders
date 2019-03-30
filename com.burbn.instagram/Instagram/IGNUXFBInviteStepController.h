//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGInviteFBFriendsViewControllerDelegate.h"
#import "IGNUXStepControllerProtocol.h"

@class IGNUXFlowContext, NSString, UIViewController;

@interface IGNUXFBInviteStepController : NSObject <IGInviteFBFriendsViewControllerDelegate, IGNUXStepControllerProtocol>
{
    IGNUXFlowContext *_context;
    UIViewController *_viewController;
    id <IGNUXFlowCoordinatorProtocol> coordinator;
}

+ (_Bool)isValidForContext:(id)arg1;
@property(nonatomic) __weak id <IGNUXFlowCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (void).cxx_destruct;
- (void)inviteFBFriendsViewControllerDidFinish:(id)arg1;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
