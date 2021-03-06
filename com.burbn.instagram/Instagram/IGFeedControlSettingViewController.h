//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGSwitchViewProviderDelegate.h"

@class IGTableLayoutSpec, IGUserSession;

@interface IGFeedControlSettingViewController : IGGroupedTableViewController <IGSwitchViewProviderDelegate>
{
    IGUserSession *_userSession;
    _Bool _showReshareToStoriesSettings;
    IGTableLayoutSpec *_layoutSpec;
    _Bool _feedPostReshareDisabled;
    long long _selectedRow;
}

@property(nonatomic) _Bool feedPostReshareDisabled; // @synthesize feedPostReshareDisabled=_feedPostReshareDisabled;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
- (void).cxx_destruct;
- (void)_setFeedPostReshareDisabled:(_Bool)arg1;
- (double)_heightForFeedReshareCell;
- (id)_feedReshareCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_feedReshareCellViewModel;
- (void)_postSelectedRow:(long long)arg1;
- (void)_fetchSelectedRow;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)analyticsModule;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 showReshareToStoriesSettings:(_Bool)arg2;

@end

