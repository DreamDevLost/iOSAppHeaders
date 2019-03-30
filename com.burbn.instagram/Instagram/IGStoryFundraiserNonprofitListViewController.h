//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGSearchBarDelegate.h"
#import "IGStoryFundraiserNonprofitNullstateListViewControllerDelegate.h"
#import "IGStoryFundraiserNonprofitSearchListViewControllerDelegate.h"

@class IGSearchBarWithCancel, IGStoryFundraiserNonprofitNullstateListViewController, IGStoryFundraiserNonprofitSearchListViewController, IGUserSession, NSString;

@interface IGStoryFundraiserNonprofitListViewController : UIViewController <IGSearchBarDelegate, IGStoryFundraiserNonprofitNullstateListViewControllerDelegate, IGStoryFundraiserNonprofitSearchListViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGSearchBarWithCancel *_searchBarWithCancel;
    UIViewController *_contentViewController;
    IGStoryFundraiserNonprofitNullstateListViewController *_nullstateViewController;
    IGStoryFundraiserNonprofitSearchListViewController *_searchViewController;
    id <IGStoryFundraiserNonprofitListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryFundraiserNonprofitListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setContentViewController:(id)arg1;
- (void)_didTapCancelButton;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)fundraiserNonprofitSearchListViewController:(id)arg1 didSelectNonprofit:(id)arg2;
- (void)fundraiserNonprofitNullstateListViewController:(id)arg1 didSelectNonprofit:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
