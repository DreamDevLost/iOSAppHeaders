//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGSettingsSearch.h"
#import "IGUsertagEditViewControllerDelegate.h"
#import "IGUsertagHidePhotosDelegate.h"

@class IGSettingsPrivacySecurityModel, IGUserSession, NSString;

@interface IGSettingsPrivacySecurityViewController : IGGroupedTableViewController <IGUsertagHidePhotosDelegate, IGUsertagEditViewControllerDelegate, IGSettingsSearch>
{
    IGUserSession *_userSession;
    IGSettingsPrivacySecurityModel *_privacySecurityModel;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)editViewControllerDidCancel:(id)arg1;
- (void)editViewControllerDidHidePhotos:(id)arg1;
- (void)presentHidePhotosModal;
- (void)_sendChangePasswordRequest;
- (id)_contentPresentingViewController;
- (void)_pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)performActionForSecurityRowType:(long long)arg1;
- (void)performActionForPrivacyRowType:(long long)arg1;
- (void)performActionForSearchText:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)_tableView:(id)arg1 didSelectSecurityRow:(long long)arg2;
- (void)_tableView:(id)arg1 didSelectPrivacyRow:(long long)arg2;
- (void)_configureSecurityCell:(id)arg1 forRow:(long long)arg2;
- (void)_configurePrivacyCell:(id)arg1 forRow:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_prepareAppearance;
- (void)_didTapBackButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

