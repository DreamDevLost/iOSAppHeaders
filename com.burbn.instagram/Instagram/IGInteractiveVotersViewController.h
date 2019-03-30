//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGQuestionAnswerReshareResponseControllerDelegate.h"
#import "IGQuestionStickerResponseBrowserViewControllerDelegate.h"
#import "IGStoryViewerSectionControllerViewerDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGInteractiveStickersModel, IGInteractiveVotersModel, IGListAdapter, IGStoryViewerPresentationController, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGInteractiveVotersViewController : IGViewController <IGListAdapterDataSource, IGStoryViewerSectionControllerViewerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, IGQuestionAnswerReshareResponseControllerDelegate, IGQuestionStickerResponseBrowserViewControllerDelegate>
{
    IGStoryViewerPresentationController *_storyPresentationController;
    IGUserSession *_userSession;
    id <IGStoryItemType> _storyItem;
    NSString *_reedId;
    IGInteractiveStickersModel *_interactiveSticker;
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
    struct UIEdgeInsets _deltaInsets;
    IGInteractiveVotersModel *_votersModel;
    NSArray *_voters;
    _Bool _isLoading;
    _Bool _hasLoadedOnce;
    long long _voteIndex;
}

- (void).cxx_destruct;
- (void)_didDeleteResponse:(id)arg1;
- (void)questionStickerResponseBrowser:(id)arg1 didDeleteResponse:(id)arg2;
- (void)questionStickerResponseBrowserDidTapSeeAllButton:(id)arg1;
- (void)questionStickerResponseBrowser:(id)arg1 didScrollToResponseAtIndex:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)questionAnswerReshareResponseControllerDidDeleteResponse:(id)arg1;
- (void)_updateContentInsets;
- (void)_fetchIfNeededForTargetOffset:(struct CGPoint)arg1;
- (void)_onVotersFetchFailure;
- (void)_onVotersFetchSuccessWithResponse:(id)arg1;
- (void)_fetchVoters;
- (id)_questionAnswerResponders;
- (id)_votedViewers;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)storyViewerSectionController:(id)arg1 presentStoryForReel:(id)arg2 feedItem:(id)arg3 fromView:(id)arg4 profilePictureView:(id)arg5;
- (void)storyViewerSectionController:(id)arg1 didHideViewerSource:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapViewerSource:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 storyItem:(id)arg2 reelId:(id)arg3 interactiveSticker:(id)arg4 voteIndex:(long long)arg5 voteTitle:(id)arg6 deltaInsets:(struct UIEdgeInsets)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

