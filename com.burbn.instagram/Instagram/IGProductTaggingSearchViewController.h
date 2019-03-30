//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedScrollViewListener.h"
#import "IGListAdapterDataSource.h"
#import "IGNavSearchBarDelegate.h"
#import "IGTaggingSearchControllerType.h"
#import "IGTaggingSearchDataSourceDelegate.h"
#import "IGTaggingSearchResultSectionControllerDelegate.h"

@class IGFeedScrollViewAnnouncer, IGListAdapter, IGNavSearchBar, IGProductTaggingViewConfiguration, IGShoppingProductSearchDataSource, IGUserSession, NSString, UICollectionView;

@interface IGProductTaggingSearchViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGNavSearchBarDelegate, IGTaggingSearchDataSourceDelegate, IGTaggingSearchResultSectionControllerDelegate, IGTaggingSearchControllerType>
{
    IGUserSession *_userSession;
    IGProductTaggingViewConfiguration *_taggingConfig;
    NSString *_priorModule;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    UICollectionView *_collectionView;
    IGNavSearchBar *_searchBar;
    IGShoppingProductSearchDataSource *_brandProductDataSource;
    IGShoppingProductSearchDataSource *_catalogProductDataSource;
    id <IGTaggingSearchDataSource> _searchDataSource;
    _Bool _hasError;
    unsigned long long _taggingState;
    id <IGTaggingSearchViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTaggingSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateDataSourceIfNeeded;
- (id)analyticsModule;
- (void)_startReviewForProductItem:(id)arg1;
- (void)taggingSearchResultSectionControllerDidSelectObject:(id)arg1;
- (void)searchBarReturnKeyTapped:(id)arg1;
- (void)searchBarButtonTapped:(id)arg1;
- (void)searchBarCancelButtonTapped:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)taggingSearchDataSourceDidFailLoading;
- (void)taggingSearchDataSourceDidUpdateResults;
- (void)taggingSearchDataSourceDidStartLoading;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)prefersTabBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 taggingConfig:(id)arg2 taggingState:(unsigned long long)arg3 priorModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

