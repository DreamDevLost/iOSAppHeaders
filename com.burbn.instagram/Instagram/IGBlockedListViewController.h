//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewController.h"

#import "IGBlockedListNetworkDataSourceDelegate.h"

@class IGBlockedListNetworkDataSource, IGTableLayoutSpec, IGUserSession;

@interface IGBlockedListViewController : IGPlainTableViewController <IGBlockedListNetworkDataSourceDelegate>
{
    IGTableLayoutSpec *_layoutSpec;
    IGBlockedListNetworkDataSource *_networkDataSource;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGBlockedListNetworkDataSource *networkDataSource; // @synthesize networkDataSource=_networkDataSource;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_loadMoreUsers;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;
- (void)dealloc;

@end

