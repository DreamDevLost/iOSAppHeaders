//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "IGShareSheetHeaderViewDelegate.h"
#import "IGStoryTrayDataSourceListener.h"
#import "IGSwipeDismissManagerDelegate.h"
#import "IGViewControllerSlideable.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGFeedItem, IGHighlightsAddSheetCreateView, IGHighlightsStoryTrayDataSource, IGKeyboardObserver, IGShareSheetButton, IGShareSheetHeaderView, IGSwipeDismissManager, IGUserSession, NSArray, NSSet, NSString, UICollectionView, UIImage, UIView;

@interface IGAddHighlightsSheet : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIViewControllerTransitioningDelegate, IGViewControllerSlideable, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGShareSheetHeaderViewDelegate, IGStoryTrayDataSourceListener, IGSwipeDismissManagerDelegate, IGAnalyticsModule>
{
    IGHighlightsStoryTrayDataSource *_reelSource;
    IGFeedItem *_feedItem;
    IGUserSession *_userSession;
    NSArray *_viewModels;
    UICollectionView *_collectionView;
    IGHighlightsAddSheetCreateView *_createView;
    UIView *_loadingView;
    UIView *_overlayView;
    UIView *_containerView;
    IGShareSheetHeaderView *_headerView;
    IGShareSheetButton *_bottomButton;
    UIView *_topLine;
    UIView *_bottomLine;
    IGSwipeDismissManager *_swipeManager;
    UIViewController *_sourceController;
    struct CGRect _keyboardFrame;
    IGKeyboardObserver *_keyboardObserver;
    long long _stateDontSetIvarDirectlyGoThroughSetter;
    UIImage *_coverPhoto;
    long long _sheetType;
    NSSet *_selectedReelIDs;
    NSString *_creationToken;
    id <IGAddHighlightsSheetDelegate> _delegate;
}

@property(nonatomic) __weak id <IGAddHighlightsSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)swipeDismissManager:(id)arg1 didDismissViewController:(id)arg2;
- (void)swipeDismissManager:(id)arg1 willDismissViewController:(id)arg2;
- (void)storyTrayDataSource:(id)arg1 updateFailedWithRefreshType:(long long)arg2 error:(id)arg3;
- (void)storyTrayDataSource:(id)arg1 didUpdateReel:(id)arg2 positionChanged:(_Bool)arg3;
- (void)storyTrayDataSource:(id)arg1 didUpdateWithRefreshType:(long long)arg2;
- (void)shareSheetHeaderView:(id)arg1 didChangeQueryString:(id)arg2;
- (void)shareSheetHeaderViewDidTapSearchButton:(id)arg1;
- (void)shareSheetHeaderViewDidTapClearButton:(id)arg1;
- (void)shareSheetHeaderViewDidTapRightButton:(id)arg1;
- (void)shareSheetHeaderViewDidTapBackButton:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_removeHighlightFromReel:(id)arg1;
- (void)_addHighlightToReel:(id)arg1;
- (void)_tryAddHighlightToReel:(id)arg1 trayCell:(id)arg2;
- (void)_createHighlightReelWithTitle:(id)arg1;
- (void)_switchToLoadingFlow;
- (void)_switchToDefaultFlow;
- (void)_switchToCreateFlow;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)_reelIsSelected:(id)arg1;
- (void)_generateViewModels;
- (id)_bottomButton;
- (id)_bottomLine;
- (id)_createView;
- (id)_collectionView;
- (id)_topLine;
- (id)_headerView;
- (void)_overlayTapped;
- (void)_bottomButtonTapped;
@property(readonly, nonatomic) UIView *overlayView;
@property(readonly, nonatomic) UIView *contentContainerView;
- (void)_layoutContainerView;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)_updateForCurrentState;
- (void)_setState:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithFeedItem:(id)arg1 coverPhoto:(id)arg2 selectedReelIDs:(id)arg3 sheetType:(long long)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

