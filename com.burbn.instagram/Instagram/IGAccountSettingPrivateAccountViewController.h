//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGAccountPrivacyChangeListener.h"
#import "IGCoreTextLinkHandler.h"
#import "IGSwitchViewProviderDelegate.h"

@class IGGroupedTableViewFooterView, IGTableLayoutSpec, IGUserSession, NSString;

@interface IGAccountSettingPrivateAccountViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGAccountPrivacyChangeListener, IGSwitchViewProviderDelegate>
{
    IGUserSession *_userSession;
    IGGroupedTableViewFooterView *_footerView;
    IGTableLayoutSpec *_layoutSpec;
}

- (void).cxx_destruct;
- (id)_privateAccountCellViewModel;
- (void)didAcknowledgePrivacyToggleWarning;
- (void)userSession:(id)arg1 didChangeToPrivacyStatus:(long long)arg2;
- (id)analyticsModule;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersTabBarHidden;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
