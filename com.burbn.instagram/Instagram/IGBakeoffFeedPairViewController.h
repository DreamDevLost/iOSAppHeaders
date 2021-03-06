//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAnalyticsModule.h"
#import "IGFeedItemDirectResponseLoggingProviderDelegate.h"
#import "IGFeedItemVideoLoggingProviderDelegate.h"
#import "IGFeedItemWithCarouselLoggingProviderDelegate.h"
#import "IGFeedSectionControllerActionDelegate.h"
#import "IGListAdapterDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGActionableConfirmationToastController, IGCollectionViewVisibility, IGFeedHeartAnimator, IGFeedItem, IGFeedVideoCellManager, IGListAdapter, IGListAdapterScrollingContext, IGListSectionController<IGFeedSectionControllerType>, IGMainFeedConfiguration, IGUserSession, NSString, UICollectionView;

@interface IGBakeoffFeedPairViewController : IGViewController <IGFeedItemDirectResponseLoggingProviderDelegate, IGFeedItemWithCarouselLoggingProviderDelegate, IGFeedSectionControllerActionDelegate, IGFeedItemVideoLoggingProviderDelegate, IGListAdapterDataSource, UICollectionViewDelegate, IGAnalyticsModule>
{
    IGUserSession *_userSession;
    NSString *_sessionId;
    IGFeedItem *_feedItem;
    double _tabHeight;
    IGListAdapter *_listAdapter;
    IGListAdapterScrollingContext *_scrollingContext;
    UICollectionView *_collectionView;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    IGMainFeedConfiguration *_feedConfiguration;
    IGFeedHeartAnimator *_heartAnimator;
    IGActionableConfirmationToastController *_toastController;
    IGFeedVideoCellManager *_videoCellManager;
    IGListSectionController<IGFeedSectionControllerType> *_feedSectionController;
    long long _sectionIndex;
    IGCollectionViewVisibility *_collectionViewVisibility;
    id <IGBakeoffFeedPairViewControllerDelegate> _delegate;
}

@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <IGBakeoffFeedPairViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (id)extraVideoLoggingDictionaryForFeedItem:(id)arg1;
- (id)followControllerContextStringForFeedItem:(id)arg1;
- (id)extraDictionaryForFeedItem:(id)arg1;
- (id)extraDictionaryForFeedItem:(id)arg1 carouselItemIndex:(long long)arg2;
- (id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2;
- (void)feedSectionController:(id)arg1 showRelatedPostsForFeedItem:(id)arg2;
- (void)feedSectionControllerDidTapDismissButton:(id)arg1;
- (void)feedSectionController:(id)arg1 didLikeFeedItem:(id)arg2 mediaView:(id)arg3;
- (void)feedSectionControllerDidDismissFeedItem:(id)arg1;
- (_Bool)feedSectionControllerShouldExpandFeedItemOnMoreTapped:(id)arg1;
- (_Bool)feedSectionController:(id)arg1 shouldNavigateToCommentsWithEntryPoint:(long long)arg2;
- (void)feedSectionController:(id)arg1 didUnfollowHashtag:(id)arg2;
- (void)feedSectionControllerDidTapOverflowButton:(id)arg1;
- (void)feedSectionController:(id)arg1 changedMuteStatusForUser:(id)arg2 changedPostsMuteStatus:(_Bool)arg3 changedStoryMuteStatus:(_Bool)arg4;
- (void)feedSectionController:(id)arg1 didUnfollowUser:(id)arg2;
- (void)feedSectionControllerDidSwipePageCell:(id)arg1 toIndex:(long long)arg2;
- (void)feedSectionControllerDidTapCommentEntryPoint:(id)arg1 replyText:(id)arg2;
- (void)feedSectionControllerDidTapCustomizableButton:(id)arg1;
- (_Bool)isInteractingWithMediaCell:(struct CGPoint)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_setupCollectionViewAndAdapter;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 feedItem:(id)arg2 tabHeight:(double)arg3 sectionIndex:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

