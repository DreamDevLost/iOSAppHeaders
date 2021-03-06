//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

@class IGBiometrySettingsManager, IGBiometryUserStore, IGTableLayoutSpec, IGUserSession;

@interface IGAccountSSOLoginViewController : IGGroupedTableViewController
{
    IGUserSession *_userSession;
    IGTableLayoutSpec *_layoutSpec;
    IGBiometrySettingsManager *_biometrySettingsManager;
    IGBiometryUserStore *_biometryStore;
}

- (void).cxx_destruct;
- (void)_logEventWithName:(id)arg1;
- (long long)_selectedSSORow;
- (_Bool)_cellIsSelectedForRow:(long long)arg1;
- (id)_cellDescriptionForRow:(long long)arg1;
- (id)_cellTitleForRow:(long long)arg1;
- (void)_enableSSOLogin;
- (void)_disableSSOLogin;
- (void)_disableBiometrics;
- (void)_enableBiometrics;
- (void)_handleDisablingBiometrics;
- (void)_handleDisablingOneTap;
- (id)analyticsModule;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 biometricsManager:(id)arg2;

@end

