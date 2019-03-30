//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGShareServiceConfigureManagerDelegate.h"

@class IGShareServiceConfigureManager, IGTableLayoutSpec, IGUserSession, NSArray, NSString;

@interface IGConfigureSharingViewController : IGGroupedTableViewController <IGShareServiceConfigureManagerDelegate>
{
    NSArray *_services;
    IGShareServiceConfigureManager *_configureManager;
    IGUserSession *_userSession;
    IGTableLayoutSpec *_tableInterface;
}

- (id)tableInterface;
- (void).cxx_destruct;
- (void)_startSpinnerOnCellWithIndexPath:(id)arg1;
- (id)analyticsModule;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_shareServiceAtRow:(long long)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (void)reloadData;
- (id)viewControllerForShareConfiguration;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
