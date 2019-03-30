//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGSettingsSearch.h"

@class IGSettingsInternalModel, IGUserSession;

@interface IGSettingsInternalViewController : IGGroupedTableViewController <IGSettingsSearch>
{
    IGUserSession *_userSession;
    IGSettingsInternalModel *_internalModel;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_configureInternalCell:(id)arg1 forRow:(long long)arg2;
- (void)performActionForInternalRowType:(long long)arg1;
- (void)performActionForSearchText:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_prepareAppearance;
- (void)_didTapBackButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 model:(id)arg2;

@end
