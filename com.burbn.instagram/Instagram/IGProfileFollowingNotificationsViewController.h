//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

@class FBKVOController, IGUser, IGUserSession, NSArray;

@interface IGProfileFollowingNotificationsViewController : IGGroupedTableViewController
{
    IGUser *_user;
    IGUserSession *_userSession;
    NSArray *_rowValues;
    _Bool _liveNotificationsEnabled;
    FBKVOController *_kvoController;
}

- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (_Bool)prefersStatusBarHidden;
- (id)analyticsModule;
- (void)_logProfileAction:(id)arg1;
- (void)_setStoryNotificationsOn:(_Bool)arg1;
- (void)_setFeedPostNotificationsOn:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)titleForFooterInSection:(long long)arg1;
- (void)_configureCell:(id)arg1 withTitle:(id)arg2 switchOn:(_Bool)arg3 switchBlock:(CDUnknownBlockType)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateSwitchForMediaType:(long long)arg1 isOn:(_Bool)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;

@end
