//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFullWidthEntityRecommendationSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGNetworkSourceDelegate.h"
#import "IGTabBarListener.h"

@class IGFollowAttributionModel, IGKeywordSearchLogger, IGKeywordSearchModel, IGKeywordSearchResponse, IGListAdapter, IGNetworkSource, IGUserSession, NSDate, NSString, UICollectionView;

@interface IGKeywordSearchViewController : IGViewController <IGFullWidthEntityRecommendationSectionControllerDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGNetworkSourceDelegate, IGTabBarListener>
{
    IGUserSession *_userSession;
    IGKeywordSearchModel *_keywordSearchModel;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGNetworkSource *_networkSource;
    IGKeywordSearchResponse *_networkResponse;
    IGFollowAttributionModel *_attributionModel;
    IGKeywordSearchLogger *_logger;
    NSDate *_fetchStartTime;
    NSString *_searchSessionID;
    NSString *_query;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)tabBarChangedTab:(id)arg1;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2;
- (void)fullWidthEntityRecommendationSectionController:(id)arg1 didNavigateToEntityPageForViewModel:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_presentReportConfirmationModal;
- (void)_presentReportOptionsMenu;
- (void)_presentReportMenu;
- (void)_fetchUserFollowStatus;
- (void)_reloadData;
- (void)_setUpCollectionViewAndListAdapter;
- (void)_setUpNavigationBar;
- (void)_onApplicationWillResignActiveNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithUserSession:(id)arg1 keywordSearchModel:(id)arg2 attributionModel:(id)arg3 searchSessionID:(id)arg4 searchInitializationID:(id)arg5 query:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
