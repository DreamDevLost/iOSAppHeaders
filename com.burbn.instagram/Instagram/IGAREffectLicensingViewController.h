//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "IGAREffectLicensingTableViewCellDelegate.h"

@class FBInspirationEffectAttributionModel, IGUserSession;

@interface IGAREffectLicensingViewController : UITableViewController <IGAREffectLicensingTableViewCellDelegate>
{
    FBInspirationEffectAttributionModel *_effectAttributionModel;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)licensingTableViewCell:(id)arg1 didSelectURL:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithUserSession:(id)arg1;
- (void)configureWithAttributionModel:(id)arg1;

@end

