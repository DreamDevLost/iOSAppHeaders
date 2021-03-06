//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFavoritesHomeHeaderViewDelegate.h"
#import "IGFavoritesListSectionControllerSelectionDelegate.h"
#import "IGFullscreenIntroductionViewControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGPageViewControllerDataSource.h"
#import "IGPageViewControllerDelegate.h"
#import "IGSearchBarDelegate.h"
#import "IGUserListNetworkDataSourceDelegate.h"
#import "IGUserListSectionControllerSelectionDelegate.h"

@class IGBasicListViewController, IGFavoritesHomeHeaderView, IGFavoritesManagementLoggingContext, IGFavoritesMembersEmptyStateView, IGFullscreenIntroductionViewController, IGFullscreenSearchTransitionController, IGFullscreenSearchViewController, IGNavigationBar, IGPageViewController, IGUserListLocalDataSource, IGUserListNetworkDataSource, IGUserSession, NSArray, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface IGFavoritesHomeViewController : IGViewController <IGSearchBarDelegate, IGListAdapterDataSource, IGPageViewControllerDataSource, IGPageViewControllerDelegate, IGUserListNetworkDataSourceDelegate, IGUserListSectionControllerSelectionDelegate, IGListAdapterDelegate, IGFullscreenIntroductionViewControllerDelegate, IGFavoritesHomeHeaderViewDelegate, IGFavoritesListSectionControllerSelectionDelegate>
{
    IGNavigationBar *_transparentNavigationBar;
    IGFavoritesHomeHeaderView *_headerView;
    IGPageViewController *_pageViewController;
    NSMutableOrderedSet *_selectedUsers;
    NSOrderedSet *_savedSelectedUsers;
    IGBasicListViewController *_suggestionsListViewController;
    IGBasicListViewController *_membersListViewController;
    NSArray *_listViewControllers;
    IGFavoritesMembersEmptyStateView *_membersEmptyStateView;
    IGUserSession *_userSession;
    IGUserListNetworkDataSource *_favoritesDataSource;
    IGUserListNetworkDataSource *_searchDataSource;
    IGUserListLocalDataSource *_localSearchDataSource;
    NSArray *_localSuggestions;
    NSString *_localSuggestionsRankToken;
    NSArray *_displayedSuggestedUsers;
    NSArray *_displayedMemberUsers;
    NSArray *_displayedSearchUsers;
    IGFullscreenSearchViewController *_searchViewController;
    IGFullscreenSearchTransitionController *_searchTransitionController;
    IGFavoritesManagementLoggingContext *_loggingContext;
    NSString *_searchStringForDisplayedResults;
    long long _initialTab;
    long long _entryPoint;
    IGFullscreenIntroductionViewController *_introViewController;
    id <IGAlertHUDHandling> _alertHandler;
    id <IGFavoritesHomeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFavoritesHomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateSearchBarBottomBorderAlpha;
- (id)analyticsModule;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_logSelection:(_Bool)arg1 forSectionController:(id)arg2;
- (void)_logWaterfallWithExitPoint:(long long)arg1;
- (void)_finishedSavingChangesWithExitPoint:(long long)arg1;
- (void)_handleSaveResponseWithSuccess:(_Bool)arg1 error:(id)arg2 exitPoint:(long long)arg3;
- (void)_saveChangesWithExitPoint:(long long)arg1;
- (void)_doneTapped;
- (void)_dismissSearchAndSwitchToMembers:(_Bool)arg1;
- (void)_searchCancelTapped;
- (void)_showSurveyIfNecessary;
- (void)_cancelTapped;
- (void)favoritesHomeHeaderViewDidTapInfoLabel:(id)arg1;
- (void)fullscreenIntroductionDidTapDone:(id)arg1;
- (void)_presentFullscreenIntroductionAnimated:(_Bool)arg1;
- (id)_introViewController;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)pageViewController:(id)arg1 didChangeCurrentViewControllerToController:(id)arg2 atIndex:(long long)arg3;
- (void)pageViewControllerDidFinishScrolling:(id)arg1;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (void)_updateDisplayedSearchUsers;
- (void)_updateDisplayedMemberUsersAnimated:(_Bool)arg1;
- (void)_updateDisplayedSuggestedUsersAnimated:(_Bool)arg1;
- (void)_reloadOffscreenLists;
- (void)_updateForSelectionChange;
- (void)userListSectionControllerDidDeselectUser:(id)arg1;
- (void)userListSectionControllerDidSelectUser:(id)arg1;
- (void)userListSectionController:(id)arg1 shouldSelectUserWithCompletion:(CDUnknownBlockType)arg2;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_updateHeaderWithSelectedViewController:(id)arg1;
- (void)_selectListViewController:(id)arg1;
- (void)_suggestionsButtonTapped:(id)arg1;
- (void)_membersButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_fetchFavoritesAndSuggestions;
- (void)viewDidLoad;
- (void)_updateMembersWithServerUsers:(id)arg1;
- (id)_networkDataSourceWithFetchPath:(id)arg1;
- (id)initWithUserSession:(id)arg1 prefetchedFavorites:(id)arg2 entryPoint:(long long)arg3 initialTab:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

