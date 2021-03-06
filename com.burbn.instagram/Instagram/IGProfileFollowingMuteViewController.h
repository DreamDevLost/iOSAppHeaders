//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGUser, IGUserSession, NSArray, NSString;

@interface IGProfileFollowingMuteViewController : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate>
{
    IGUser *_user;
    IGUserSession *_userSession;
    NSArray *_rowValues;
}

- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (_Bool)prefersStatusBarHidden;
- (id)analyticsModule;
- (void)_logProfileAction:(id)arg1;
- (void)_setStoriesMuted:(_Bool)arg1;
- (void)_setFeedPostsMuted:(_Bool)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)titleForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

