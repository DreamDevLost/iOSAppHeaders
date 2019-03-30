//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDraftBrowserViewControllerDelegate.h"
#import "IGFeedCreationFlowControllerType.h"
#import "IGFeedGalleryMultiSelectListener.h"
#import "IGFeedGallerySelectionControllerDelegate.h"
#import "IGFeedGalleryViewControllerDelegate.h"
#import "IGNavigationControllerDelegate.h"

@class IGCaptureFlowViewModel, IGCreationNavigationController, IGFeedGallerySelectionController, IGFeedGalleryViewController, IGStoryGallerySelectionTray, IGUserSession, NSString;

@interface IGFeedCreationFlowViewController : IGViewController <IGDraftBrowserViewControllerDelegate, IGFeedGallerySelectionControllerDelegate, IGFeedGalleryMultiSelectListener, IGFeedGalleryViewControllerDelegate, IGNavigationControllerDelegate, IGFeedCreationFlowControllerType>
{
    IGUserSession *_userSession;
    IGCaptureFlowViewModel *_captureFlowViewModel;
    IGFeedGallerySelectionController *_selectionController;
    IGCreationNavigationController *_navigationController;
    IGFeedGalleryViewController *_galleryViewController;
    IGStoryGallerySelectionTray *_selectionTray;
    _Bool _isShowingSelectionTray;
    id <IGFeedCreationFlowDelegate> _delegate;
    double _verticalOffset;
}

@property(nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(nonatomic) __weak id <IGFeedCreationFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadNavigationItem:(id)arg1 animated:(_Bool)arg2;
- (void)reloadNavigationItem:(id)arg1;
- (void)popToRootViewControllerAndResetAssetsWithNewDraft:(id)arg1;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)feedGallerySelectionControllerDidChangeSelectedAssets:(id)arg1;
- (void)feedGallerySelectionController:(id)arg1 didToggleMultiSelectEnabled:(_Bool)arg2;
- (void)feedGallerySelectionController:(id)arg1 didDeselectSidecarAssetAtIndex:(long long)arg2;
- (void)feedGallerySelectionController:(id)arg1 didSelectSidecarAssetWithThumbnail:(id)arg2;
- (void)feedGallerySelectionController:(id)arg1 didSelectSingleMediaAsset:(id)arg2 withThumbnail:(id)arg3;
- (void)feedGallerySelectionController:(id)arg1 didFinishWithComposition:(id)arg2;
- (void)_createAndPushDraftViewControllers:(CDUnknownBlockType)arg1;
- (void)draftsBrowserViewController:(id)arg1 didDeleteDrafts:(id)arg2;
- (void)draftsBrowserViewControllerWantsDismiss:(id)arg1;
- (void)draftsBrowserViewController:(id)arg1 didSelectCompositionDraft:(id)arg2;
- (void)draftsBrowserViewController:(id)arg1 didSelectMediaDraft:(id)arg2;
- (void)feedGalleryViewControllerDidTapDrafts:(id)arg1;
- (void)feedGalleryViewControllerDidToggleAlbumPicker:(id)arg1;
- (void)feedGalleryViewControllerDidTapCancel:(id)arg1;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_selectionTrayNextTapped;
- (void)_updateTopViewControllerInset;
- (_Bool)_shouldShowSelectionTray;
- (void)_updateSelectionTrayVisibilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)analyticsModule;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 captureFlowViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
