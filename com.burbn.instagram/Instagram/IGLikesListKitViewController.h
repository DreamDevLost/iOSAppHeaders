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
#import "IGFeedToggleSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"

@class IGFeedItemToggleComponents, IGFeedNetworkSource, IGFeedPreviewingHandler, IGFeedStarterKit, IGFeedToggleSectionController, IGUserSession, NSMutableArray, NSString;

@interface IGLikesListKitViewController : IGViewController <IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGFeedScrollViewListener, IGFeedToggleSectionControllerDelegate, IGFeedItemPreviewProviding, IGFeedPreviewingType>
{
    IGFeedStarterKit *_feed;
    IGFeedNetworkSource *_networkDataSource;
    IGFeedToggleSectionController *_toggleItemController;
    IGFeedPreviewingHandler *_previewingHandler;
    IGFeedItemToggleComponents *_feedItemToggleComponents;
    NSMutableArray *_unliked;
    NSMutableArray *_reliked;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)feedToggleSectionController:(id)arg1 didSelectButtonType:(long long)arg2;
- (void)_loadNextPage;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)objectForPreviewAtPoint:(struct CGPoint)arg1;
- (id)cellForPreviewAtPoint:(struct CGPoint)arg1;
- (id)_indexPathForPoint:(struct CGPoint)arg1;
- (id)adapter;
- (id)collectionView;
- (id)analyticsModule;
- (void)feedNetworkSource:(id)arg1 didUpdatePost:(id)arg2 withChange:(long long)arg3;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

