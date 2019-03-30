//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGGestureHandler.h"
#import "IGNavigationControllerDelegate.h"
#import "IGSearchBarDelegate.h"
#import "IGStoryMusicGenreListViewControllerDelegate.h"
#import "IGStoryMusicMoodListViewControllerDelegate.h"
#import "IGStoryMusicSearchResultsViewControllerDelegate.h"
#import "IGStoryMusicSongListViewControllerDelegate.h"
#import "IGStoryMusicTrendingViewControllerDelegate.h"

@class FBShimmeringView, IGAsyncTask, IGNavigationController, IGSearchBarWithCancel, IGStoryMusicBrowserCatalog, IGStoryMusicBrowserTabController, IGStoryMusicGenreListViewController, IGStoryMusicMoodListViewController, IGStoryMusicSearchResultsViewController, IGStoryMusicSongListViewController, IGStoryMusicTrendingViewController, IGUserSession, IGWrapperViewController, NSMutableOrderedSet, NSOrderedSet, NSString, UIVisualEffectView;

@interface IGStoryMusicBrowserViewController : UIViewController <IGSearchBarDelegate, IGNavigationControllerDelegate, IGStoryMusicSongListViewControllerDelegate, IGStoryMusicTrendingViewControllerDelegate, IGStoryMusicMoodListViewControllerDelegate, IGStoryMusicGenreListViewControllerDelegate, IGStoryMusicSearchResultsViewControllerDelegate, IGGestureHandler, IGAnalyticsModule>
{
    IGUserSession *_userSession;
    IGAsyncTask *_catalogRequest;
    IGStoryMusicBrowserCatalog *_catalog;
    UIVisualEffectView *_backdropView;
    FBShimmeringView *_shimmeringSearchBarWrapperView;
    IGSearchBarWithCancel *_searchBarWithCancel;
    IGStoryMusicSearchResultsViewController *_searchResultsViewController;
    IGStoryMusicSongListViewController *_searchResultsSongListViewController;
    IGWrapperViewController *_loadingScreenViewController;
    IGNavigationController *_navigationController;
    IGStoryMusicBrowserTabController *_tabController;
    IGStoryMusicSongListViewController *_trendingViewController;
    IGStoryMusicTrendingViewController *_trendingViewControllerV2;
    IGStoryMusicMoodListViewController *_moodsViewController;
    IGStoryMusicGenreListViewController *_genresViewController;
    NSMutableOrderedSet *_selectedTracks;
    _Bool _cancelButtonHidden;
    _Bool _loadingCatalog;
    _Bool _searchResultsVisible;
    id <IGStoryMusicBrowserViewControllerDelegate> _delegate;
    id <IGStoryMusicBrowserViewControllerSearchDelegate> _searchDelegate;
    long long _backgroundStyle;
    double _bottomInset;
    unsigned long long _selectionStyle;
    unsigned long long _uploadStep;
    NSString *_category;
    NSString *_subcategory;
    NSString *_productName;
    UIViewController *_contentViewController;
}

@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) _Bool searchResultsVisible; // @synthesize searchResultsVisible=_searchResultsVisible;
@property(nonatomic) _Bool loadingCatalog; // @synthesize loadingCatalog=_loadingCatalog;
@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *subcategory; // @synthesize subcategory=_subcategory;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long uploadStep; // @synthesize uploadStep=_uploadStep;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) _Bool cancelButtonHidden; // @synthesize cancelButtonHidden=_cancelButtonHidden;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) __weak id <IGStoryMusicBrowserViewControllerSearchDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(nonatomic) __weak id <IGStoryMusicBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)resignSearchFieldAsFirstResponder;
- (void)makeSearchFieldFirstResponder;
- (void)deselectTrack:(id)arg1;
- (void)selectTrack:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *selectedTracks;
@property(nonatomic) _Bool searchResultsAlpha;
- (void)_setContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setLoadingCatalog:(_Bool)arg1 animated:(_Bool)arg2;
- (void)musicSearchResultsViewController:(id)arg1 didUpdateSearchResults:(id)arg2 searchQuery:(id)arg3;
- (void)musicSearchResultsViewController:(id)arg1 didSelectSuggestedSearchQuery:(id)arg2;
- (void)musicSearchResultsViewController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)musicSearchResultsViewController:(id)arg1 didUpdateLoadingState:(_Bool)arg2;
- (void)setSearchResultsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)genreListViewController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)musicMoodListViewController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)musicTrendingViewController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)songListViewController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)_didTapCancelButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCatalogRequest:(id)arg1 userSession:(id)arg2 productName:(id)arg3;
- (id)initWithUserSession:(id)arg1 productName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

