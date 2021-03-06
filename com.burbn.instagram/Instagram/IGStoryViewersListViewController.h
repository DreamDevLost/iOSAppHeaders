//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAddHighlightsSheetDelegate.h"
#import "IGLabelSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGMegaphoneSectionControllerDelegate.h"
#import "IGPollStickerSummarySectionControllerDelegate.h"
#import "IGQuestionAnswerStickerReponsesSectionControllerDelegate.h"
#import "IGRightsManagerFlagInfoSectionControllerDelegate.h"
#import "IGSearchBarDelegate.h"
#import "IGStoryHighlightsCreationControllerDelegate.h"
#import "IGStoryOverviewUploadStatusViewDelegate.h"
#import "IGStorySuperHackyPostCaptureEditingViewControllerDelegate.h"
#import "IGStoryViewerPresentationControllerDelegate.h"
#import "IGStoryViewerSectionControllerViewerDelegate.h"
#import "IGStoryViewersExpiredUpsellViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGGenericMegaphone, IGListAdapter, IGPollStickerModel, IGQuestionAnswerStickerModel, IGQuizStickerConsumptionModel, IGSearchBarWithCancel, IGSliderStickerModel, IGStoryFullscreenSectionLoggingContext, IGStoryOverviewUploadStatusView, IGStoryViewerPresentationController, IGStoryViewersDataSource, IGUserSession, NSArray, NSString, UICollectionView, UILabel, UIView;

@interface IGStoryViewersListViewController : UIViewController <IGStoryOverviewUploadStatusViewDelegate, IGListAdapterDataSource, IGMegaphoneSectionControllerDelegate, IGStoryViewerSectionControllerViewerDelegate, UIScrollViewDelegate, IGLabelSectionControllerDelegate, IGPollStickerSummarySectionControllerDelegate, IGRightsManagerFlagInfoSectionControllerDelegate, IGStoryViewerPresentationControllerDelegate, IGStorySuperHackyPostCaptureEditingViewControllerDelegate, IGQuestionAnswerStickerReponsesSectionControllerDelegate, IGStoryViewersExpiredUpsellViewDelegate, IGAddHighlightsSheetDelegate, IGStoryHighlightsCreationControllerDelegate, IGSearchBarDelegate>
{
    IGStoryViewerPresentationController *_storyPresentationController;
    IGStoryViewersDataSource *_storyViewersDataSource;
    id <UIViewControllerTransitioningDelegate> _pollStickerShareTransitionDelegate;
    NSArray *_votersModels;
    IGPollStickerModel *_pollStickerModel;
    IGSliderStickerModel *_sliderStickerModel;
    IGQuestionAnswerStickerModel *_questionAnswerStickerModel;
    IGQuizStickerConsumptionModel *_quizStickerModel;
    NSString *_reelId;
    NSString *_reelTitle;
    long long _viewerViewModelType;
    UILabel *_expiredViewersListLabel;
    _Bool _viewerListSearchEnabled;
    long long _viewState;
    IGSearchBarWithCancel *_searchBar;
    NSString *_searchText;
    NSArray *_searchResults;
    _Bool _isCurrentPageInPageViewController;
    _Bool _showUploadStatus;
    _Bool _hasLoadedOnce;
    _Bool _lastFetchFailed;
    _Bool _isLoading;
    _Bool _moreAvailable;
    _Bool _displayMultiAuthorStoriesMegaphone;
    UIView *_emptyStateView;
    IGStoryOverviewUploadStatusView *_uploadStatusView;
    id <IGStoryItemType> _item;
    unsigned long long _uploadStatus;
    double _uploadProgress;
    id <IGStoryViewersListViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
    NSString *_maxID;
    IGStoryFullscreenSectionLoggingContext *_loggingContext;
    IGGenericMegaphone *_multiAuthorStoriesMegaphone;
}

@property(retain, nonatomic) IGGenericMegaphone *multiAuthorStoriesMegaphone; // @synthesize multiAuthorStoriesMegaphone=_multiAuthorStoriesMegaphone;
@property(nonatomic) _Bool displayMultiAuthorStoriesMegaphone; // @synthesize displayMultiAuthorStoriesMegaphone=_displayMultiAuthorStoriesMegaphone;
@property(readonly, nonatomic) IGStoryFullscreenSectionLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(retain, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool lastFetchFailed; // @synthesize lastFetchFailed=_lastFetchFailed;
@property(nonatomic) _Bool hasLoadedOnce; // @synthesize hasLoadedOnce=_hasLoadedOnce;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) _Bool showUploadStatus; // @synthesize showUploadStatus=_showUploadStatus;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGStoryViewersListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) unsigned long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(readonly, nonatomic) id <IGStoryItemType> item; // @synthesize item=_item;
@property(nonatomic) _Bool isCurrentPageInPageViewController; // @synthesize isCurrentPageInPageViewController=_isCurrentPageInPageViewController;
- (void).cxx_destruct;
- (void)_searchCancelTapped;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_setViewState:(long long)arg1;
- (void)_setInteractiveTapModelsFromTapModels:(id)arg1 withAdapter:(id)arg2;
- (id)_votedViewersWithVotersModel:(id)arg1;
- (void)_navigateToProfile:(id)arg1;
- (void)highlightsCreationControllerDidEditSuggestedHighlight:(id)arg1 addedItems:(id)arg2 removedItems:(id)arg3 title:(id)arg4 coverModel:(id)arg5;
- (void)highlightsCreationControllerDidFinish:(id)arg1 mode:(long long)arg2 reel:(id)arg3;
- (void)highlightsCreationControllerDidTapCancel:(id)arg1;
- (void)addHighlightsSheetDidDismiss:(id)arg1;
- (void)addHighlightsSheetDidCancel:(id)arg1;
- (void)addHighlightsSheet:(id)arg1 wantsNewReelWithTitle:(id)arg2 cropRect:(struct CGRect)arg3 creationToken:(id)arg4;
- (void)addHighlightsSheet:(id)arg1 didUpdateReelWithPK:(id)arg2 added:(_Bool)arg3 title:(id)arg4 coverURL:(id)arg5;
- (void)storyViewersExpiredUpsellView:(id)arg1 didTapActionButtonWithType:(long long)arg2;
- (void)storyViewerPresentationControllerDidPresentViewer:(id)arg1;
- (void)superHackyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 directRecipients:(id)arg3 exitPoint:(long long)arg4;
- (void)superHackyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)rightsManagerFlagInfoSectionControllerDidSelectLearnMoreButton:(id)arg1;
- (void)rightsManagerFlagInfoSectionControllerDidSelectDeleteButton:(id)arg1;
- (void)rightsManagerFlagInfoSectionControllerDidSelectSeeAllCountriesButton:(id)arg1;
- (void)pollStickerSummarySectionController:(id)arg1 didTapVoteOption:(long long)arg2;
- (void)pollStickerSummarySectionController:(id)arg1 didTapShareButton:(id)arg2;
- (void)_showQuestionAnswers;
- (void)questionAnswerStickerResponsesSectionControllerDidRemoveAllResponses:(id)arg1;
- (void)questionAnswerStickerResponsesSectionControllerDidTapSeeAllEndCardCell:(id)arg1;
- (void)didSelectLabelSectionController:(id)arg1;
- (void)didDismissMegaphoneSectionController:(id)arg1;
- (void)megaphoneSectionController:(id)arg1 didSelectButton:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 presentStoryForReel:(id)arg2 feedItem:(id)arg3 fromView:(id)arg4 profilePictureView:(id)arg5;
- (void)storyViewerSectionController:(id)arg1 didHideViewerSource:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapViewerSource:(id)arg2;
- (void)uploadStatusViewDidTapRetry:(id)arg1;
- (void)_updateExpiredViewersListLabel;
- (_Bool)_canTryLoading;
- (id)_getUsersFromViewerSources:(id)arg1;
- (id)_fetchAPIPath;
- (void)_tryFetchUsers;
- (void)_fetchIfNeededForTargetOffset:(struct CGPoint)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) IGStoryOverviewUploadStatusView *uploadStatusView; // @synthesize uploadStatusView=_uploadStatusView;
@property(readonly, nonatomic) UIView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 item:(id)arg3 showUploadStatus:(_Bool)arg4 loggingContext:(id)arg5 reelId:(id)arg6 reelTitle:(id)arg7 viewerViewModelType:(long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

