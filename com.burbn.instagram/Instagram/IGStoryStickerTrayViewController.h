//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCountdownStickerListViewControllerDelegate.h"
#import "IGSearchBarDelegate.h"
#import "IGStickerGalleryViewControllerDelegate.h"
#import "IGStoryFundraiserNonprofitListViewControllerDelegate.h"
#import "IGStoryGIFStickerViewControllerDelegate.h"
#import "IGStoryMusicBrowserViewControllerDelegate.h"
#import "IGStoryStickerDataSourceDelegate.h"
#import "IGStoryStickerSearchDataSourceDelegate.h"
#import "IGStoryStickerTrayContainerViewDelegate.h"
#import "IGStoryStickerViewControllerNavigationDelegate.h"
#import "IGStoryStickerViewControllerScrollDelegate.h"
#import "IGStoryStickerViewControllerSelectionDelegate.h"
#import "IGTaggingSearchViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CLLocation, IGDirectionalPanGestureRecognizer, IGStickerGalleryViewController, IGStoryGIFStickerViewController, IGStoryMediaCompositionState, IGStoryStickerDataSource, IGStoryStickerSearchDataSource, IGStoryStickerTrayContainerView, IGStoryStickerTrayStateModel, IGStoryStickerViewController, IGUserSession, NSString, UITapGestureRecognizer;

@interface IGStoryStickerTrayViewController : IGViewController <UIGestureRecognizerDelegate, IGStoryStickerViewControllerNavigationDelegate, IGStoryStickerTrayContainerViewDelegate, IGStoryStickerViewControllerScrollDelegate, IGStoryStickerDataSourceDelegate, IGStoryGIFStickerViewControllerDelegate, IGSearchBarDelegate, IGStoryStickerSearchDataSourceDelegate, IGStickerGalleryViewControllerDelegate, IGTaggingSearchViewControllerDelegate, IGStoryMusicBrowserViewControllerDelegate, IGCountdownStickerListViewControllerDelegate, IGStoryFundraiserNonprofitListViewControllerDelegate, IGStoryStickerViewControllerSelectionDelegate>
{
    IGStoryStickerTrayContainerView *_trayContainerView;
    IGStoryStickerViewController *_defaultStickerVC;
    IGStoryGIFStickerViewController *_gifVC;
    IGStickerGalleryViewController *_galleryVC;
    IGStoryStickerViewController *_searchStickerVC;
    IGStoryStickerDataSource *_dataSource;
    IGUserSession *_userSession;
    id <IGListDiffable> _lastSeenSticker;
    IGDirectionalPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    double _initialY;
    IGStoryStickerTrayStateModel *_initialTrayStateModel;
    IGStoryStickerSearchDataSource *_searchDataSource;
    CLLocation *_mediaEXIFLocation;
    id <IGStoryStickerTrayViewControllerDelegate> _delegate;
    id <IGStoryStickerTrayViewControllerStickerSelectionDelegate> _stickerSelectionDelegate;
    id <IGStoryStickerAddingRulesDataSource> _stickerAddingRulesDataSource;
    IGStoryMediaCompositionState *_composition;
    unsigned long long _trayContentState;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long trayContentState; // @synthesize trayContentState=_trayContentState;
@property(retain, nonatomic) IGStoryMediaCompositionState *composition; // @synthesize composition=_composition;
@property(nonatomic) __weak id <IGStoryStickerAddingRulesDataSource> stickerAddingRulesDataSource; // @synthesize stickerAddingRulesDataSource=_stickerAddingRulesDataSource;
@property(nonatomic) __weak id <IGStoryStickerTrayViewControllerStickerSelectionDelegate> stickerSelectionDelegate; // @synthesize stickerSelectionDelegate=_stickerSelectionDelegate;
@property(nonatomic) __weak id <IGStoryStickerTrayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stickerViewController:(id)arg1 didSelectMusicTrack:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectQuizStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectQuestionAnswerStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSliderStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectMentionStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPollStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectHashtagStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectInternalStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGalleryVideoSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGalleryImageSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectCameraStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectLocationStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectMemoriesSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectDateSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectTimeStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectAnimatedSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectStaticSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectEmoji:(id)arg2;
- (void)stickerViewControllerDidSelectLike:(id)arg1;
- (void)taggingSearchViewControllerDidSelectUser:(id)arg1;
- (void)taggingSearchViewControllerDidSelectFBUser:(id)arg1 IGUserResultShown:(id)arg2 searchingString:(id)arg3;
- (void)taggingSearchViewControllerDidCancel;
- (void)taggingSearchViewControllerDidSelectProductItem:(id)arg1;
- (id)_currentStickerVC;
- (void)_fetchStaticStickersWithLocationPermissionIfPossible;
- (void)_updateBottomInsetForStickerVC:(id)arg1;
- (void)_setUpGestures;
- (double)_initialPaddingForContainerView;
- (id)_stickerViewControllerWithItems:(id)arg1 tabType:(long long)arg2;
- (void)_showGalleryStickerViewController;
- (void)_showGIFStickerViewControllerWithSearchQuery:(id)arg1;
- (void)_scrollToLastSeenSticker;
- (void)_fadeOutFullScreenViewController:(id)arg1;
- (void)_fadeInFullScreenViewController:(id)arg1 forTrayContentState:(unsigned long long)arg2;
- (void)stickerSearchDataSource:(id)arg1 didLoadItems:(id)arg2 forText:(id)arg3;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)_searchCancelTapped:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)storyStickerDataSource:(id)arg1 didUpdateTimeSticker:(id)arg2;
- (void)storyStickerDataSource:(id)arg1 didLoadItems:(id)arg2 versionID:(id)arg3 stickerSets:(id)arg4;
- (void)musicBrowserViewController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)musicBrowserViewControllerDidCancel:(id)arg1;
- (void)stickerViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)stickerTrayContainerView:(id)arg1 didChangePageControl:(id)arg2;
- (void)stickerTrayContainerView:(id)arg1 didTapChevronButton:(id)arg2;
- (void)stickerGalleryViewController:(id)arg1 didSelectGalleryVideo:(id)arg2;
- (void)stickerGalleryViewController:(id)arg1 didSelectGalleryImage:(id)arg2;
- (void)stickerGalleryViewControllerDidTapCancel:(id)arg1;
- (void)storyGIFStickerViewController:(id)arg1 didSelectAnimatedSticker:(id)arg2;
- (void)storyGIFStickerViewControllerDidCancel:(id)arg1;
- (void)fundraiserNonprofitListViewController:(id)arg1 didSelectNonprofit:(id)arg2;
- (void)fundraiserNonprofitListViewControllerDidTapCancel:(id)arg1;
- (void)stickerViewController:(id)arg1 didSelectFundraiserStickerTrayModel:(id)arg2;
- (void)countdownStickerListViewController:(id)arg1 didReshareCountdownSticker:(id)arg2;
- (void)countdownStickerListViewControllerDidTapCancel:(id)arg1;
- (void)countdownStickerListViewControllerDidTapCreateNewList:(id)arg1;
- (void)_presentCountdownStickerRestrictionHUD;
- (void)stickerViewController:(id)arg1 didSelectCountdownStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectCountdownHomeWithStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectMusicStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectProductStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGalleryStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGIFSearchStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 wantsDismissAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_onLocationPermissionDenied;
- (void)_onLocationPermissionAuthorized;
- (void)_handleTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (double)trayContainerViewOriginYWithState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 stickerDataSource:(id)arg2 initialTrayStateModel:(id)arg3 mediaEXIFLocation:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

