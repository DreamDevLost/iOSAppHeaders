//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedItemPreviewProviding.h"
#import "IGFeedNetworkSourceDelegate.h"
#import "IGFeedPreviewingType.h"
#import "IGFeedScrollViewListener.h"
#import "IGFeedStatusViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate.h"
#import "IGProfileTabViewController.h"
#import "IGRefreshControlContentInsetDataSource.h"

@class FBKVOController, IGCTAPresenterContext, IGFeedItemToggleComponents, IGFeedNetworkSource, IGFeedPreviewingHandler, IGFeedStarterKit, IGUser, IGUserSession, NSDictionary, NSString;

@interface IGProfileFeedViewController : IGViewController <IGFeedNetworkSourceDelegate, IGFeedPreviewingType, IGFeedScrollViewListener, IGFeedStatusViewDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGRefreshControlContentInsetDataSource, IGFeedItemPreviewProviding, IGListAdapterDataSource, IGProfileTabViewController>
{
    long long _displayState;
    IGFeedItemToggleComponents *_feedItemToggleComponents;
    IGFeedNetworkSource *_feedNetworkSource;
    NSDictionary *_requestParameters;
    IGFeedPreviewingHandler *_previewingHandler;
    IGFeedStarterKit *_feedStarterKit;
    IGUserSession *_userSession;
    IGUser *_user;
    id <IGProfileFeedViewControllerDelegate> _delegate;
    IGCTAPresenterContext *_ctaPresenterContext;
    CDUnknownBlockType _emptyStateTapBlock;
    FBKVOController *_kvoController;
    NSString *_analyticsModule;
}

@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(retain, nonatomic) IGCTAPresenterContext *ctaPresenterContext; // @synthesize ctaPresenterContext=_ctaPresenterContext;
@property(retain, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGFeedStarterKit *feedStarterKit; // @synthesize feedStarterKit=_feedStarterKit;
- (void).cxx_destruct;
- (id)_spinnerLabelViewModel;
- (_Bool)_wasPrivateFeedErrorEncountered;
- (void)_pullToRefreshControlValueChanged:(id)arg1;
- (void)_loadNextPage;
- (void)_reload;
- (id)_requestConfigForFetchAction:(long long)arg1;
- (void)_tryGenerateFeedItemToggleComponents;
- (void)setRefreshControlBackgroundColor:(id)arg1;
- (void)updateContentInsets;
- (void)didSelectFeedItem:(id)arg1;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (double)idleTopContentInsetForRefreshControl:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (_Bool)canDynamicPageBeDismissedVertically;
- (void)prepareForReuse;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (void)willResignSelectedPageInDynamicPageViewController;
- (void)didBecomeSelectedPageInDynamicPageViewController;
- (id)objectForPreviewAtPoint:(struct CGPoint)arg1;
- (id)cellForPreviewAtPoint:(struct CGPoint)arg1;
- (id)_indexPathForPoint:(struct CGPoint)arg1;
- (id)collectionView;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)disableNavigationEvent;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 feedNetworkSource:(id)arg3 requestParameters:(id)arg4 displayState:(long long)arg5 analyticsModule:(id)arg6 delegate:(id)arg7 ctaPresenterContext:(id)arg8 emptyStateTapBlock:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
