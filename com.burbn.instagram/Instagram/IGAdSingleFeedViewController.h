//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedNetworkSourceDelegate.h"
#import "IGFeedPreviewingType.h"
#import "IGFeedStatusViewDelegate.h"
#import "IGListAdapterCompletionListener.h"
#import "IGListAdapterDataSource.h"
#import "IGTombstoneManagerDelegate.h"

@class IGAdsManagerLogger, IGFeedItem, IGFeedNetworkSource, IGFeedPreviewingHandler, IGFeedStarterKit, IGProfilePictureHelper, IGSingleFeedTitleHelper, IGTombstoneManager, IGUserSession, NSString;

@interface IGAdSingleFeedViewController : IGViewController <IGListAdapterDataSource, IGFeedStatusViewDelegate, IGFeedNetworkSourceDelegate, IGFeedPreviewingType, IGTombstoneManagerDelegate, IGListAdapterCompletionListener>
{
    IGSingleFeedTitleHelper *_singleFeedTitleHelper;
    IGFeedNetworkSource *_feedNetworkSource;
    id <IGFeedConfigurationType> _feedConfiguration;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    IGFeedStarterKit *_feed;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    IGUserSession *_userSession;
    IGFeedPreviewingHandler *_previewingHandler;
    IGProfilePictureHelper *_profilePictureHelper;
    IGTombstoneManager *_tombstoneManager;
    IGAdsManagerLogger *_adsManagerLogger;
    IGFeedItem *_feedItem;
}

@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGAdsManagerLogger *adsManagerLogger; // @synthesize adsManagerLogger=_adsManagerLogger;
@property(readonly, nonatomic) IGTombstoneManager *tombstoneManager; // @synthesize tombstoneManager=_tombstoneManager;
@property(readonly, nonatomic) IGProfilePictureHelper *profilePictureHelper; // @synthesize profilePictureHelper=_profilePictureHelper;
@property(readonly, nonatomic) IGFeedPreviewingHandler *previewingHandler; // @synthesize previewingHandler=_previewingHandler;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <IGFeedSectionControllerComponentsType> feedSectionControllerComponents; // @synthesize feedSectionControllerComponents=_feedSectionControllerComponents;
@property(readonly, nonatomic) IGFeedStarterKit *feed; // @synthesize feed=_feed;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(readonly, nonatomic) id <IGFeedConfigurationType> feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property(readonly, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
- (void).cxx_destruct;
- (id)analyticsModule;
- (id)collectionView;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (void)listAdapter:(id)arg1 didCompleteReloadAndRefreshHidden:(_Bool)arg2;
- (void)listAdapter:(id)arg1 didCompleteUpdateAnimated:(_Bool)arg2 refreshHidden:(_Bool)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)tombstoneManager:(id)arg1 didTapShowButtonForTombstoneView:(id)arg2;
- (void)_updateFeedState;
- (void)_addTombstoneViewForFeedItem:(id)arg1;
- (void)_updateTombstoneView;
- (void)_onFeedItemHidden:(id)arg1;
- (id)_refreshButton;
- (void)_updateNavigationBarButtonItem;
- (id)_displayTitle;
- (void)_updateTitle;
- (void)_refresh;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFeedNetworkSource:(id)arg1 feedConfiguration:(id)arg2 itemConfiguration:(id)arg3 userSession:(id)arg4 adsManagerLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

