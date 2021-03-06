//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDraftBrowserViewControllerDelegate.h"
#import "IGGridViewControllerDelegate.h"
#import "IGGridViewControllerScrollDelegate.h"
#import "IGMediaCropViewDelegate.h"
#import "IGSelectAlbumDelegate.h"

@class IGCaptureFlowViewModel, IGChevronTitleButton, IGComposition, IGDraftPreview, IGLibraryAccessPromptView, IGMediaCropViewController, IGSelectAlbumController, IGTooltipView, IGUserSession, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, UIBarButtonItem, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController<IGGridViewControllerProtocol>;

@interface IGMediaLibraryViewController : IGViewController <IGDraftBrowserViewControllerDelegate, IGGridViewControllerDelegate, IGGridViewControllerScrollDelegate, IGMediaCropViewDelegate, IGSelectAlbumDelegate>
{
    double _minimumVideoDuration;
    _Bool _useFullscreenGridAndStaticNavBar;
    _Bool _isHidden;
    _Bool _nonSquareEnabled;
    _Bool _usesCircularCrop;
    _Bool _draftsEnabled;
    _Bool _manageDraftsEnabled;
    _Bool _gridViewIsLoaded;
    _Bool _isPushingCropView;
    id <IGMediaLibraryViewControllerDelegate> _delegate;
    id <IGMediaLibraryViewControllerOffsetDelegate> _offsetDelegate;
    id <IGMediaLibraryViewControllerSelectAlbumDelegate> _selectAlbumDelegate;
    id <IGMedialibraryViewControllerSetAssetDelegate> _setAssetDelegate;
    id <IGMediaLibraryViewControllerCameraDelegate> _cameraDelegate;
    NSMutableOrderedSet *_orderedAssetIdentifiers;
    double _verticalOffset;
    IGMediaCropViewController *_mediaCropViewController;
    double _gridViewControllerBottomInset;
    long long _minimumNumberOfAssets;
    IGDraftPreview *_draftToSelect;
    NSString *_analyticsModule;
    IGComposition *_composition;
    IGUserSession *_userSession;
    unsigned long long _assetFilterType;
    IGCaptureFlowViewModel *_captureFlowViewModel;
    UIViewController<IGGridViewControllerProtocol> *_gridViewController;
    id _selectedAsset;
    NSMutableDictionary *_loadedAssetsMetadata;
    NSMutableDictionary *_pendingAssetRequests;
    NSDictionary *_metadata;
    id _fullResolutionSource;
    UIView *_selectedAssetsCountBar;
    UILabel *_selectedAssetsCountLabel;
    double _currentAspectRatio;
    CDUnknownBlockType _allAssetsLoadedCompletionBlock;
    CDUnknownBlockType _multiClipCompletionBlock;
    IGChevronTitleButton *_chevronTitleButton;
    IGSelectAlbumController *_selectAlbumVC;
    double _startCropMaxY;
    double _startCropPanTouchInsetY;
    double _cropOffsetY;
    UITapGestureRecognizer *_cropTap;
    UIPanGestureRecognizer *_cropPanExpand;
    IGTooltipView *_NUXView;
    UIBarButtonItem *_nextButtonItem;
    UIBarButtonItem *_loadingNextButtonItem;
    IGLibraryAccessPromptView *_accessDeniedView;
    long long _draftsTotalCount;
    long long _draftsLoadedCount;
    struct IGAssetSelectionMechanic _assetSelectionMechanic;
}

+ (_Bool)_assetIsCarouselDraft:(id)arg1;
@property(nonatomic) long long draftsLoadedCount; // @synthesize draftsLoadedCount=_draftsLoadedCount;
@property(nonatomic) long long draftsTotalCount; // @synthesize draftsTotalCount=_draftsTotalCount;
@property(retain, nonatomic) IGLibraryAccessPromptView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(retain, nonatomic) UIBarButtonItem *loadingNextButtonItem; // @synthesize loadingNextButtonItem=_loadingNextButtonItem;
@property(retain, nonatomic) UIBarButtonItem *nextButtonItem; // @synthesize nextButtonItem=_nextButtonItem;
@property(retain, nonatomic) IGTooltipView *NUXView; // @synthesize NUXView=_NUXView;
@property(retain, nonatomic) UIPanGestureRecognizer *cropPanExpand; // @synthesize cropPanExpand=_cropPanExpand;
@property(retain, nonatomic) UITapGestureRecognizer *cropTap; // @synthesize cropTap=_cropTap;
@property(nonatomic) double cropOffsetY; // @synthesize cropOffsetY=_cropOffsetY;
@property(nonatomic) double startCropPanTouchInsetY; // @synthesize startCropPanTouchInsetY=_startCropPanTouchInsetY;
@property(nonatomic) double startCropMaxY; // @synthesize startCropMaxY=_startCropMaxY;
@property(nonatomic) _Bool isPushingCropView; // @synthesize isPushingCropView=_isPushingCropView;
@property(retain, nonatomic) IGSelectAlbumController *selectAlbumVC; // @synthesize selectAlbumVC=_selectAlbumVC;
@property(retain, nonatomic) IGChevronTitleButton *chevronTitleButton; // @synthesize chevronTitleButton=_chevronTitleButton;
@property(copy, nonatomic) CDUnknownBlockType multiClipCompletionBlock; // @synthesize multiClipCompletionBlock=_multiClipCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType allAssetsLoadedCompletionBlock; // @synthesize allAssetsLoadedCompletionBlock=_allAssetsLoadedCompletionBlock;
@property(nonatomic) double currentAspectRatio; // @synthesize currentAspectRatio=_currentAspectRatio;
@property(retain, nonatomic) UILabel *selectedAssetsCountLabel; // @synthesize selectedAssetsCountLabel=_selectedAssetsCountLabel;
@property(retain, nonatomic) UIView *selectedAssetsCountBar; // @synthesize selectedAssetsCountBar=_selectedAssetsCountBar;
@property(retain, nonatomic) id fullResolutionSource; // @synthesize fullResolutionSource=_fullResolutionSource;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSMutableDictionary *pendingAssetRequests; // @synthesize pendingAssetRequests=_pendingAssetRequests;
@property(retain, nonatomic) NSMutableDictionary *loadedAssetsMetadata; // @synthesize loadedAssetsMetadata=_loadedAssetsMetadata;
@property(retain, nonatomic) id selectedAsset; // @synthesize selectedAsset=_selectedAsset;
@property(nonatomic) _Bool gridViewIsLoaded; // @synthesize gridViewIsLoaded=_gridViewIsLoaded;
@property(retain, nonatomic) UIViewController<IGGridViewControllerProtocol> *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(retain, nonatomic) IGCaptureFlowViewModel *captureFlowViewModel; // @synthesize captureFlowViewModel=_captureFlowViewModel;
@property(nonatomic) _Bool manageDraftsEnabled; // @synthesize manageDraftsEnabled=_manageDraftsEnabled;
@property(nonatomic) _Bool draftsEnabled; // @synthesize draftsEnabled=_draftsEnabled;
@property(nonatomic) _Bool usesCircularCrop; // @synthesize usesCircularCrop=_usesCircularCrop;
@property(nonatomic) _Bool nonSquareEnabled; // @synthesize nonSquareEnabled=_nonSquareEnabled;
@property(nonatomic) unsigned long long assetFilterType; // @synthesize assetFilterType=_assetFilterType;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGComposition *composition; // @synthesize composition=_composition;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(retain, nonatomic) IGDraftPreview *draftToSelect; // @synthesize draftToSelect=_draftToSelect;
@property(nonatomic) long long minimumNumberOfAssets; // @synthesize minimumNumberOfAssets=_minimumNumberOfAssets;
@property(nonatomic) double gridViewControllerBottomInset; // @synthesize gridViewControllerBottomInset=_gridViewControllerBottomInset;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) struct IGAssetSelectionMechanic assetSelectionMechanic; // @synthesize assetSelectionMechanic=_assetSelectionMechanic;
@property(retain, nonatomic) IGMediaCropViewController *mediaCropViewController; // @synthesize mediaCropViewController=_mediaCropViewController;
@property(readonly, nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(retain, nonatomic) NSMutableOrderedSet *orderedAssetIdentifiers; // @synthesize orderedAssetIdentifiers=_orderedAssetIdentifiers;
@property(nonatomic) __weak id <IGMediaLibraryViewControllerCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(nonatomic) __weak id <IGMedialibraryViewControllerSetAssetDelegate> setAssetDelegate; // @synthesize setAssetDelegate=_setAssetDelegate;
@property(nonatomic) __weak id <IGMediaLibraryViewControllerSelectAlbumDelegate> selectAlbumDelegate; // @synthesize selectAlbumDelegate=_selectAlbumDelegate;
@property(nonatomic) __weak id <IGMediaLibraryViewControllerOffsetDelegate> offsetDelegate; // @synthesize offsetDelegate=_offsetDelegate;
@property(nonatomic) __weak id <IGMediaLibraryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showSelectAlbumController:(_Bool)arg1;
- (void)_onAlbumTitleTapped;
- (void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2;
- (void)_proceedIfPossible;
- (_Bool)_allAssetsLoaded;
- (_Bool)_allowsMultiSelection;
- (void)_clearPendingAssetRequests;
- (void)_addDraftPreview:(id)arg1 withIdentifier:(id)arg2;
- (void)_addLoadedMetadata:(id)arg1 withIdentifier:(id)arg2;
- (void)_addAssetIdentifier:(id)arg1;
- (void)toggleMultiSelectOn:(_Bool)arg1;
- (void)_showLibraryAccessDeniedDialog;
- (void)draftsBrowserViewController:(id)arg1 didDeleteDrafts:(id)arg2;
- (void)draftsBrowserViewControllerWantsDismiss:(id)arg1;
- (void)draftsBrowserViewController:(id)arg1 didSelectCompositionDraft:(id)arg2;
- (void)draftsBrowserViewController:(id)arg1 didSelectMediaDraft:(id)arg2;
- (void)_presentDraftsController;
- (void)_showNUXOnNextButtonWithTitle:(id)arg1;
- (void)_showMinDurationVideoNUX;
- (void)_showMinDurationAssetNUX;
- (void)_showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2 analyticsTag:(id)arg3;
- (void)_hideNUX:(_Bool)arg1;
- (void)_updateSelectedAssetsCountLabelWithCount:(long long)arg1;
- (void)_showCouldNotLoadAlert:(long long)arg1;
- (void)_updateVideoPlayerWithVideoClip:(id)arg1;
- (void)_updateSelectedAssetsCountBar;
- (void)playVideoPlayerIfNecessary;
- (_Bool)_allVideosValidLength;
- (_Bool)_currentVideoDurationValid;
- (void)_loadVideoForAsset:(id)arg1 playerViewLoaded:(_Bool)arg2;
- (void)_loadVideoPreviewForAsset:(id)arg1 playerViewLoaded:(_Bool)arg2;
- (void)_loadVideoForDraftPreview:(id)arg1 playerViewLoaded:(_Bool)arg2;
- (void)_loadImageForAsset:(id)arg1;
- (void)_loadImageForDraftPreview:(id)arg1;
- (id)_loadThumbnailPreviewImageForAsset:(id)arg1;
- (void)_loadedVideoClip:(id)arg1 fromAsset:(id)arg2 existingCropRect:(struct CGRect)arg3;
- (void)_loadedImage:(id)arg1 fullResolutionSource:(id)arg2 asset:(id)arg3 metadata:(id)arg4;
- (void)_showUnspecifiedErrorForType:(long long)arg1;
- (void)_setCarouselDraftCropAsset:(id)arg1;
- (void)_setCropAsset:(id)arg1;
- (void)_selectFirstAsset;
- (void)_updateSelectedAsset;
- (_Bool)_assetIsSelected:(id)arg1;
- (id)_selectedAssetObject;
- (id)_loadedObjectForAsset:(id)arg1;
- (id)_loadedDraftPreviewForAsset:(id)arg1;
- (id)_selectedAssetMediaMetadata;
- (id)_loadedMediaMetadataForAsset:(id)arg1;
- (void)mediaCropView:(id)arg1 updatedAssetCropRect:(struct CGRect)arg2 cropMode:(long long)arg3;
- (void)mediaCropViewToggledAspectRatio:(id)arg1;
- (void)_updateCropState:(long long)arg1;
- (id)_cropOffsetYAnimationExpanding:(_Bool)arg1;
- (void)_expandCropWithVelocity:(double)arg1 expanding:(_Bool)arg2;
- (void)_minimizeCropNonAnimated;
- (void)_minimizeCropWithVelocity:(double)arg1;
- (void)_cropViewDraggingEndedWithVelocity:(double)arg1;
- (void)_prepareMediaMetadataForSingleMediaFlow:(id)arg1;
- (void)_moveToNextScreenWithAssets:(id)arg1 composition:(id)arg2;
- (_Bool)_areOrderedAssetsValid:(id)arg1;
- (void)_onNextButtonTapped;
- (void)_onCancelButtonTapped;
- (void)_updateAlbumTitle;
- (void)addBlockedGestureRecognizerForCropView:(id)arg1;
- (void)_setVerticalOffset;
- (void)_updateCropOffsetY:(double)arg1 expanding:(_Bool)arg2;
- (void)_tapExpandCrop:(id)arg1;
- (void)_panCrop:(id)arg1;
- (void)gridViewControllerWillBeginDragging:(id)arg1;
- (void)gridViewControllerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)gridViewControllerDidScroll:(id)arg1;
- (void)gridViewControllerDidTapCameraCell:(id)arg1;
- (void)gridViewController:(id)arg1 didLongPressAsset:(id)arg2 atIndexPath:(id)arg3;
- (void)gridViewController:(id)arg1 didClickDisabledAsset:(id)arg2;
- (void)gridViewController:(id)arg1 firstAssetDidChange:(id)arg2;
- (void)gridViewControllerDidTapSecondaryButton:(id)arg1;
- (void)gridViewControllerDraftsDidLoad:(id)arg1 draftCount:(long long)arg2 draftsDisplayedCount:(long long)arg3;
- (_Bool)gridViewController:(id)arg1 isAssetLoaded:(id)arg2;
- (void)gridViewController:(id)arg1 didDeselectAsset:(id)arg2 atIndexPath:(id)arg3;
- (void)gridViewControllerLibraryDidLoad:(id)arg1;
- (void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2;
- (void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1;
- (void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2;
- (void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (CDStruct_b7523c42)_primaryLayoutForExpandedState:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)useDoneButton;
- (void)_setNavigationBarButtons;
- (void)viewDidLoad;
- (id)initWithComposition:(id)arg1 userSession:(id)arg2 captureFlowViewModel:(id)arg3 assetSelectionMechanic:(struct IGAssetSelectionMechanic)arg4 assetFilterType:(unsigned long long)arg5 nonSquareEnabled:(_Bool)arg6 usesCircularCrop:(_Bool)arg7 draftsEnabled:(_Bool)arg8 manageDraftsEnabled:(_Bool)arg9 useFullscreenGridAndStaticNavBar:(_Bool)arg10 analyticsModule:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

