//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCaptureControllerDelegate.h"
#import "IGMediaCropperViewControllerDelegate.h"
#import "IGMediaLibraryViewControllerCameraDelegate.h"
#import "IGMediaLibraryViewControllerDelegate.h"
#import "IGMediaLibraryViewControllerOffsetDelegate.h"
#import "IGMediaLibraryViewControllerSelectAlbumDelegate.h"
#import "IGMedialibraryViewControllerSetAssetDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGCaptureFlowViewModel, IGCaptureViewController, IGDraftPreview, IGEditorViewController, IGLabel, IGLibraryAccessPromptView, IGMediaCropperViewController, IGMediaLibraryViewController, IGMediaMetadata, IGMediaTabBar, IGNuxButton, IGShareListManager, IGTapButton, IGTooltipView, IGUserSession, IGVideoComposition, IGVideoInfo, NSArray, NSDictionary, NSMutableDictionary, NSString, UIImage, UIScrollView, UIView;

@interface IGMediaCaptureViewController : IGViewController <UIScrollViewDelegate, IGCaptureControllerDelegate, IGMediaLibraryViewControllerDelegate, IGMediaLibraryViewControllerOffsetDelegate, IGMediaLibraryViewControllerSelectAlbumDelegate, IGMedialibraryViewControllerSetAssetDelegate, IGMediaLibraryViewControllerCameraDelegate, IGMediaCropperViewControllerDelegate>
{
    IGMediaCropperViewController *_mediaCropperViewController;
    _Bool _useFullscreenGridAndStaticNavBar;
    _Bool _isBackgrounded;
    _Bool _layoutButtonVisible;
    _Bool _mediaTabBarHidden;
    _Bool _shouldShowMultiSelectNUX;
    _Bool _shouldShowBoomerangNUX;
    _Bool _showedMultiSelectInfoNUX;
    id <IGMediaCaptureViewControllerDelegate> _delegate;
    id <IGMediaCaptureViewControllerNavigationDelegate> _navigationDelegate;
    IGMediaMetadata *_mediaMetadata;
    IGDraftPreview *_draftToSelect;
    IGUserSession *_userSession;
    IGCaptureFlowViewModel *_captureFlowViewModel;
    IGShareListManager *_shareListManager;
    long long _state;
    long long _mode;
    IGMediaTabBar *_mediaTabBar;
    UIScrollView *_scrollView;
    NSArray *_disabledScrollViews;
    UIView *_cameraContainerView;
    IGCaptureViewController *_captureViewController;
    IGCaptureViewController *_presentedCaptureViewController;
    IGVideoInfo *_videoInfo;
    IGVideoComposition *_currentlyFilmingVideoComposition;
    UIView *_libraryContainerView;
    IGMediaLibraryViewController *_libraryViewController;
    IGTooltipView *_NUXView;
    IGTapButton *_layoutButton;
    IGNuxButton *_boomerangButton;
    IGLabel *_unsupportedVideoLabel;
    unsigned long long _contentEditingInputRequestID;
    NSMutableDictionary *_pendingVideoRequests;
    NSDictionary *_metadata;
    id _fullResolutionSource;
    CDUnknownBlockType _fullResolutionCompletionBlock;
    CDUnknownBlockType _multiClipCompletionBlock;
    id _selectedAsset;
    UIImage *_originalImage;
    NSMutableDictionary *_selectedVideos;
    double _maxVideoDuration;
    IGNuxButton *_multiSelectToggleButton;
    IGEditorViewController *_currentEditor;
    IGLibraryAccessPromptView *_accessDeniedView;
    NSMutableDictionary *_analyticsExtras;
    struct CGSize _previewImageSize;
}

@property(retain, nonatomic) NSMutableDictionary *analyticsExtras; // @synthesize analyticsExtras=_analyticsExtras;
@property(nonatomic) _Bool showedMultiSelectInfoNUX; // @synthesize showedMultiSelectInfoNUX=_showedMultiSelectInfoNUX;
@property(nonatomic) _Bool shouldShowBoomerangNUX; // @synthesize shouldShowBoomerangNUX=_shouldShowBoomerangNUX;
@property(nonatomic) _Bool shouldShowMultiSelectNUX; // @synthesize shouldShowMultiSelectNUX=_shouldShowMultiSelectNUX;
@property(nonatomic) _Bool mediaTabBarHidden; // @synthesize mediaTabBarHidden=_mediaTabBarHidden;
@property(retain, nonatomic) IGLibraryAccessPromptView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(nonatomic) __weak IGEditorViewController *currentEditor; // @synthesize currentEditor=_currentEditor;
@property(retain, nonatomic) IGNuxButton *multiSelectToggleButton; // @synthesize multiSelectToggleButton=_multiSelectToggleButton;
@property(nonatomic) double maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(retain, nonatomic) NSMutableDictionary *selectedVideos; // @synthesize selectedVideos=_selectedVideos;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) id selectedAsset; // @synthesize selectedAsset=_selectedAsset;
@property(copy, nonatomic) CDUnknownBlockType multiClipCompletionBlock; // @synthesize multiClipCompletionBlock=_multiClipCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType fullResolutionCompletionBlock; // @synthesize fullResolutionCompletionBlock=_fullResolutionCompletionBlock;
@property(retain, nonatomic) id fullResolutionSource; // @synthesize fullResolutionSource=_fullResolutionSource;
@property(nonatomic) struct CGSize previewImageSize; // @synthesize previewImageSize=_previewImageSize;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSMutableDictionary *pendingVideoRequests; // @synthesize pendingVideoRequests=_pendingVideoRequests;
@property(nonatomic) unsigned long long contentEditingInputRequestID; // @synthesize contentEditingInputRequestID=_contentEditingInputRequestID;
@property(retain, nonatomic) IGLabel *unsupportedVideoLabel; // @synthesize unsupportedVideoLabel=_unsupportedVideoLabel;
@property(retain, nonatomic) IGNuxButton *boomerangButton; // @synthesize boomerangButton=_boomerangButton;
@property(retain, nonatomic) IGTapButton *layoutButton; // @synthesize layoutButton=_layoutButton;
@property(nonatomic) _Bool layoutButtonVisible; // @synthesize layoutButtonVisible=_layoutButtonVisible;
@property(retain, nonatomic) IGTooltipView *NUXView; // @synthesize NUXView=_NUXView;
@property(retain, nonatomic) IGMediaLibraryViewController *libraryViewController; // @synthesize libraryViewController=_libraryViewController;
@property(retain, nonatomic) UIView *libraryContainerView; // @synthesize libraryContainerView=_libraryContainerView;
@property(retain, nonatomic) IGVideoComposition *currentlyFilmingVideoComposition; // @synthesize currentlyFilmingVideoComposition=_currentlyFilmingVideoComposition;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) IGCaptureViewController *presentedCaptureViewController; // @synthesize presentedCaptureViewController=_presentedCaptureViewController;
@property(retain, nonatomic) IGCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
@property(retain, nonatomic) UIView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(retain, nonatomic) NSArray *disabledScrollViews; // @synthesize disabledScrollViews=_disabledScrollViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) IGMediaTabBar *mediaTabBar; // @synthesize mediaTabBar=_mediaTabBar;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isBackgrounded; // @synthesize isBackgrounded=_isBackgrounded;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
@property(readonly, nonatomic) IGCaptureFlowViewModel *captureFlowViewModel; // @synthesize captureFlowViewModel=_captureFlowViewModel;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGDraftPreview *draftToSelect; // @synthesize draftToSelect=_draftToSelect;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(nonatomic) __weak id <IGMediaCaptureViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <IGMediaCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureControllerDidCancelCapture:(id)arg1;
- (void)captureController:(id)arg1 didConfirmVideoComposition:(id)arg2 mediaMetadata:(id)arg3;
- (void)captureController:(id)arg1 didUpdateVideoComposition:(id)arg2;
- (void)captureControllerDidEndFilmingClip:(id)arg1;
- (void)captureControllerWillBeginFilmingClip:(id)arg1;
- (void)captureController:(id)arg1 didTakePhotoWithBuffer:(id)arg2 mediaMetadata:(id)arg3 deviceOrientation:(long long)arg4;
- (void)captureController:(id)arg1 willTakePhotoWithPreviewBuffer:(id)arg2 mediaMetadata:(id)arg3;
- (void)captureController:(id)arg1 didChangeToCameraMode:(long long)arg2;
- (void)_dismissCaptureViewControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_presentCaptureViewController;
- (void)_logBackwardsStep;
- (void)_logForwardStepWithNextStep:(id)arg1;
- (id)analyticsExtrasForNextStep;
- (void)_initializeAnalyticsExtras;
- (id)analyticsModule;
- (void)_hideNUXDismissedByUser:(_Bool)arg1;
- (void)_showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2 analyticsTag:(id)arg3;
- (void)_showMultiSelectInformationNUX;
- (void)_playVideoPlayer;
- (void)_pauseVideoPlayer;
- (void)_stopVideoPlayer;
- (void)_proceedWithVideoComposition:(id)arg1;
- (void)_proceedWithPhoto:(id)arg1 cropRect:(struct CGRect)arg2 mediaMetadata:(id)arg3 fromOrigin:(long long)arg4;
- (void)_onCancelButtonTapped;
- (void)_showBoomerangAppInstallAlertViewPopover;
- (void)_boomerangButtonTapped;
- (_Bool)_boomerangButtonEnabled;
- (id)_selectedAssetIdentifier;
- (void)_showLayoutAppInstallAlertViewPopover;
- (void)_layoutButtonTapped;
- (_Bool)_layoutButtonEnabled;
- (_Bool)_selectedAssetIsCarouselDraft;
- (void)mediaCropperViewController:(id)arg1 didFinishWithMediaMetadata:(id)arg2;
- (void)mediaCropperViewControllerDidCancel:(id)arg1;
- (void)mediaLibraryViewControllerDidShowSelectAlbumVC:(_Bool)arg1;
- (void)mediaLibraryViewControllerDidLoadDrafts:(long long)arg1;
- (void)mediaLibraryViewControllerDidTapManageButton;
- (void)mediaLibraryViewControllerDidTapAspectRatio;
- (void)mediaLibraryViewControllerDidLongPressCellAtIndexPath:(id)arg1;
- (void)mediaLibraryViewControllerDidUpdateBarButtons;
- (void)mediaLibraryViewControllerDidSetAsset:(id)arg1;
- (void)mediaLibraryViewControllerUpdatedVerticalOffset:(double)arg1;
- (void)mediaLibraryViewControllerWantsToOpenFeedCamera:(id)arg1;
- (void)_setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_showMultiSelectToggleButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showLayoutButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_highlightMultiSelectToggleButton:(_Bool)arg1;
- (void)_shrinkMultiSelectToggleButton;
- (void)_toggleMultiSelectOn:(_Bool)arg1;
- (void)_toggleMultiSelect:(id)arg1;
- (void)mediaLibraryViewControllerDidCancel:(id)arg1;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithCompositionDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithMediaDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didProduceComposition:(id)arg2;
- (void)_setNavigationBarButtons;
- (void)_setState:(long long)arg1 animated:(_Bool)arg2;
- (void)_layoutMediaTabBar;
- (void)_tabBarButtonTapped;
- (void)_insertMediaTabBar;
- (_Bool)_showsMediaTabBar;
- (_Bool)_allowTabScrolling;
- (_Bool)_modeAllowsState:(long long)arg1;
- (void)_presentEditorWithBuffer:(id)arg1 isPreviewBuffer:(_Bool)arg2 deviceOrientation:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_enableDisabledScrollViews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)_defaultNavigationBarVerticalOffset;
- (void)_setVerticalOffset;
- (void)_showLibraryAccessDeniedDialog;
- (void)_setUpAppLinkButtonsInView:(id)arg1;
- (void)_initializeEntryPointNUXShouldShowStates;
- (void)_showMultiSelectNUX;
- (void)_setUpCameraTabIfNecessary;
- (void)_setUpLibraryTabIfNecessary;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)_assertModeIsValid;
- (id)initWithMode:(long long)arg1 captureFlowViewModel:(id)arg2 userSession:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

