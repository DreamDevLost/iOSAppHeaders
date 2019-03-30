//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGSwitchViewProviderDelegate.h"

@class IGListItemView, IGTableLayoutSpec, IGUserSession;

@interface IGDataUsageSettingsViewController : IGGroupedTableViewController <IGSwitchViewProviderDelegate>
{
    _Bool _initialVideoPreloadSetting;
    IGTableLayoutSpec *_layoutSpec;
    IGListItemView *_sizingView;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersTabBarHidden;
- (id)initWithUserSession:(id)arg1;

@end
