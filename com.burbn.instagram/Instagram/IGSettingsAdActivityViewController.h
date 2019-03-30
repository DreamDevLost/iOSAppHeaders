//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAdActivityNetworkSourceDelegate.h"
#import "IGFeedItemDirectResponseLoggingProviderDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGInfoViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGSettingsAdActivityStoryTraySectionControllerDelegate.h"

@class IGAdActivityFeedItemConfiguration, IGAdActivityModel, IGAdActivityNetworkSource, IGDefaultFeedConfiguration, IGFeedScrollViewAnnouncer, IGInfoView, IGListAdapter, IGRefreshControl, IGSettingsAdActivityStoryTraySectionController, IGSpinnerLabelViewModel, IGUserSession, NSString, UICollectionView;

@interface IGSettingsAdActivityViewController : IGViewController <IGFeedItemDirectResponseLoggingProviderDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGInfoViewDelegate, IGAdActivityNetworkSourceDelegate, IGSettingsAdActivityStoryTraySectionControllerDelegate>
{
    IGInfoView *_infoView;
    IGUserSession *_userSession;
    IGAdActivityNetworkSource *_networkSource;
    IGRefreshControl *_refreshControl;
    IGSpinnerLabelViewModel *_spinner;
    IGAdActivityModel *_model;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGSettingsAdActivityStoryTraySectionController *_storyTraySectionController;
    IGAdActivityFeedItemConfiguration *_itemConfiguration;
    IGDefaultFeedConfiguration *_feedConfiguration;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    _Bool hasQueuedUpdate;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2;
- (_Bool)storyTraySectionControllerHasMoreStoryAdsToFetch:(id)arg1;
- (void)storyTraySectionControllerScrollViewWillScrollNearRight:(id)arg1;
- (void)_refresh;
- (void)_setupRefreshControl;
- (void)_setupFeedSectionControllerComponentsWithCollectionView:(id)arg1;
- (void)_setupCollectionViewAndAdapter;
- (void)_fetchMoreFeedAds;
- (void)_updateModelWithFeedItems:(id)arg1 reelItems:(id)arg2;
- (void)_showInfoView;
- (void)_setupInfoView;
- (void)infoViewWasTapped:(id)arg1;
- (void)networkSourceDidFailFetchAdsRequest:(id)arg1 requestType:(unsigned long long)arg2;
- (void)networkSource:(id)arg1 didFetchFeedItems:(id)arg2 reelItems:(id)arg3 requestType:(unsigned long long)arg4;
- (void)networkSource:(id)arg1 model:(id)arg2;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

