//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTabPageViewController.h"

#import "IGNavSearchBarDelegate.h"
#import "IGSearchChildViewControllerTypeDelegate.h"
#import "IGTabPageViewControllerDelegate.h"

@class IGNavSearchBar, IGSearchAnalyticsLogger, IGSearchSession, IGUserSession, IGViewController<IGSearchChildViewControllerType>, NSString, UINavigationBar, UIView;

@interface IGSearchHashtagFiltersViewController : IGTabPageViewController <IGNavSearchBarDelegate, IGSearchChildViewControllerTypeDelegate, IGTabPageViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGViewController<IGSearchChildViewControllerType> *_placesSearchViewController;
    UIView *_navigationContainerView;
    UIView *_navigationLineView;
    UINavigationBar *_navigationBar;
    IGNavSearchBar *_searchBar;
    NSString *_prepopulatedText;
    NSString *_analyticsModule;
    id <IGSearchHashtagFiltersViewControllerDelegate> _searchDelegate;
    NSString *_querySessionId;
    IGSearchAnalyticsLogger *_searchAnalyticsLogger;
    IGSearchSession *_searchSession;
}

@property(readonly, nonatomic) IGSearchSession *searchSession; // @synthesize searchSession=_searchSession;
@property(readonly, nonatomic) IGSearchAnalyticsLogger *searchAnalyticsLogger; // @synthesize searchAnalyticsLogger=_searchAnalyticsLogger;
@property(readonly, copy, nonatomic) NSString *querySessionId; // @synthesize querySessionId=_querySessionId;
@property(nonatomic) __weak id <IGSearchHashtagFiltersViewControllerDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_resetNavElementStyleDefaults;
- (void)_updateSearchbarPlaceholderForController:(id)arg1;
@property(readonly, copy, nonatomic) NSString *searchText;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarReturnKeyTapped:(id)arg1;
- (void)searchBarWillEndEditing:(id)arg1;
- (void)searchBarWillBeginEditing:(id)arg1;
- (void)searchBarCancelButtonTapped:(id)arg1;
- (void)pageViewController:(id)arg1 didPageToViewController:(id)arg2;
- (void)_searchDidEnd;
- (void)_searchDidStart;
- (void)searchChildViewControllerDidFailToLoadNullStateResults:(id)arg1 error:(id)arg2;
- (void)searchChildViewControllerDidLoadNullStateResults:(id)arg1;
- (void)searchChildViewControllerWillLoadNullStateResults:(id)arg1;
- (void)searchChildViewControllerDidTapOnSearchResult:(id)arg1;
- (_Bool)isReadyForImpressionLogging;
- (id)currentSearchText;
- (void)childViewControllerWillPushView:(id)arg1;
- (void)childViewController:(id)arg1 pushedTimeDidChange:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_initializeChildViewControllers;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 prepopulatedText:(id)arg3;

// Remaining properties
@property(retain, nonatomic) IGViewController<IGSearchChildViewControllerType> *currentViewController; // @dynamic currentViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
