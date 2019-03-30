//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

@class IGShoppingPermissionsNetworker, IGUser, IGUserSession, NSNumber;

@interface IGShoppingBusinessSettingsViewController : IGGroupedTableViewController
{
    IGUser *_user;
    IGUserSession *_userSession;
    NSNumber *_shoppingPartnersCount;
    IGShoppingPermissionsNetworker *_permissionsNetworker;
}

- (void).cxx_destruct;
- (void)_logSettingRowTapped:(long long)arg1;
- (void)_logSettingsOpened;
- (void)_updateShoppingPartnersCount:(id)arg1;
- (void)_requestShoppingPartnersCount;
- (void)_presentShoppingPartners;
- (void)_presentProductCatalogs;
- (id)analyticsModule;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

@end
