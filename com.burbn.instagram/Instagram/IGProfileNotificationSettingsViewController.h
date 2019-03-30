//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGSwitchViewProviderDelegate.h"

@class IGUser, IGUserSession, NSArray, NSString;

@interface IGProfileNotificationSettingsViewController : IGGroupedTableViewController <IGSwitchViewProviderDelegate>
{
    IGUser *_user;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    _Bool _isFeedPostsSubscriptionEnabled;
    _Bool _isStoriesSubscriptionEnabled;
    _Bool _qeLiveSubscriptionIsEnabled;
    long long _selectedLiveSubscriptionStatus;
    NSArray *_sectionValues;
    _Bool _configureAsFullscreenModal;
}

- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (_Bool)prefersStatusBarHidden;
- (void)_logSettingsChangeWithAction:(id)arg1;
- (void)_logLiveSubscriptionChange:(long long)arg1;
- (void)_logFeedPostsSubscriptionToggle:(_Bool)arg1;
- (void)_logStoriesSubscriptionToggle:(_Bool)arg1;
- (id)_feedPostsSwitchModel;
- (id)_storiesSwitchModel;
- (void)_doneButtonTapped:(id)arg1;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)_liveSubscriptionStatusForRow:(long long)arg1;
- (_Bool)_isSwitchOnForFeedAndStoriesSettingsRow:(long long)arg1;
- (id)_viewModelForFeedAndStoriesSettingsRow:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)analyticsModule;
- (void)viewDidLoad;
- (void)_prepareViews;
- (id)initWithUser:(id)arg1 userSession:(id)arg2 configureAsFullscreenModal:(_Bool)arg3;

@end

