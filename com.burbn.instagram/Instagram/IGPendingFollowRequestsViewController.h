//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class IGFollowListViewController, IGUserSession, UIViewController;

@interface IGPendingFollowRequestsViewController : IGViewController
{
    IGFollowListViewController *_followListViewController;
    UIViewController *_parentViewController;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_removeFromNavigationStack;
- (void)_removeUserFromList:(id)arg1;
- (void)_onFriendStatusChanged:(id)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 forcedUserId:(id)arg2 parentViewController:(id)arg3;

@end

