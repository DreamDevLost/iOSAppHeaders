//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGFindFriendsHelperDelegate.h"
#import "IGSettingsSearch.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"

@class IGContactsFriendsHelper, IGSettingsFollowAndInviteModel, IGUserSession, NSString;

@interface IGSettingsFollowAndInviteViewController : IGGroupedTableViewController <IGFindFriendsHelperDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, IGSettingsSearch>
{
    IGUserSession *_userSession;
    IGSettingsFollowAndInviteModel *_followAndInviteModel;
    IGContactsFriendsHelper *_contactsHelper;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_logTapEventForServiceType:(long long)arg1;
- (void)_pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)_navigateToFriendCenterWithDefaultTab:(long long)arg1;
- (void)_performActionForFollowAndInviteRowType:(long long)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)_configureRow:(id)arg1 labelText:(id)arg2 accessibilityText:(id)arg3 image:(id)arg4 accessoryType:(long long)arg5 actionable:(_Bool)arg6;
- (void)_configureFollowAndInviteCell:(id)arg1 forRow:(long long)arg2;
- (void)performActionForSearchText:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_didTapBackButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

