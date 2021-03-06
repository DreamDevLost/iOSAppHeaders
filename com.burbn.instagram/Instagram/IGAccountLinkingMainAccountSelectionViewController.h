//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAccountLinkingMainAccountSelectionSectionDelegate.h"
#import "IGListAdapterDataSource.h"

@class IGBottomButtonsView, IGCoreTextView, IGListAdapter, IGListCollectionView, IGUser, IGUserSession, NSString, UIButton, UILabel;

@interface IGAccountLinkingMainAccountSelectionViewController : IGViewController <IGListAdapterDataSource, IGAccountLinkingMainAccountSelectionSectionDelegate>
{
    UIButton *_backButton;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    IGListCollectionView *_accountListView;
    IGCoreTextView *_footerTextView;
    IGBottomButtonsView *_nextButton;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    IGUser *_mainAccoutSelected;
}

- (void).cxx_destruct;
- (void)_pushToNextScreen;
- (void)_nextButtonTapped;
- (void)_backButtonTapped;
- (void)_configureFooterTextView;
- (void)_configureNextButton;
- (void)_configureMainAccoutListView;
- (void)_configureBodyLabel;
- (void)_configureTitleLabel;
- (void)_createBackButton;
- (double)_accoutListViewWidth;
- (id)currentSelectedMainAccount;
- (void)accountLinkingMainAccountSelectionSectionController:(id)arg1 didSelectMainAccount:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)analyticsModule;
- (_Bool)prefersTabBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

