//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGFindFriendsHelperDelegate.h"
#import "IGSwitchViewProviderDelegate.h"

@class IGContactsFriendsHelper, IGSwitchViewModel, IGTableLayoutSpec, IGUserSession, NSString;

@interface IGContactsImportSettingsViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGFindFriendsHelperDelegate, IGSwitchViewProviderDelegate>
{
    id <IGAPIClient> _networker;
    IGContactsFriendsHelper *_contactsHelper;
    IGUserSession *_userSession;
    IGTableLayoutSpec *_layoutSpec;
    IGSwitchViewModel *_viewModelForContactImportCell;
}

- (void).cxx_destruct;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (id)analyticsModule;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)prefersTabBarHidden;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
