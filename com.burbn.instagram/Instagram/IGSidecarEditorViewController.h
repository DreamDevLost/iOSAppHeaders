//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFilterCollectionControllerDelegate.h"
#import "IGFilterControlViewDelegate.h"
#import "IGMediaLibraryViewControllerDelegate.h"
#import "IGPhotoEditorDelegate.h"
#import "IGSidecarMediaCollectionControllerDelegate.h"
#import "IGSidecarMediaCollectionControllerDeleteZoneDataSource.h"
#import "IGVideoEditorDelegate.h"

@class IGCaptureFlowViewModel, IGComposition, IGFilterCollectionController, IGFilterControlView, IGRearrangeOverlayView, IGShareListManager, IGSidecarCollectionController, IGSidecarEditorTopButtonsView, IGTooltipView, IGUserSession, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionView, UIImageView, UILabel, UIView;

@interface IGSidecarEditorViewController : IGViewController <IGFilterCollectionControllerDelegate, IGFilterControlViewDelegate, IGMediaLibraryViewControllerDelegate, IGPhotoEditorDelegate, IGSidecarMediaCollectionControllerDelegate, IGSidecarMediaCollectionControllerDeleteZoneDataSource, IGVideoEditorDelegate>
{
    _Bool _editorCropEnabled;
    IGSidecarEditorTopButtonsView *_topButtonsView;
    _Bool _hasReorderedAssets;
    _Bool _didReorderTray;
    id <IGSidecarEditorDelegate> _delegate;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_doneButton;
    IGCaptureFlowViewModel *_captureFlowViewModel;
    IGUserSession *_userSession;
    IGShareListManager *_shareListManager;
    IGComposition *_composition;
    UICollectionView *_filterCollectionView;
    IGFilterCollectionController *_filterTrayController;
    IGFilterControlView *_filterControlView;
    NSMutableDictionary *_adjustedFilterStrengthValues;
    NSString *_filterThumbnailsAssetID;
    IGRearrangeOverlayView *_rearrangeFilterOverlayView;
    UIView *_filterContainerView;
    IGSidecarCollectionController *_mediaCollectionController;
    Class _filterClass;
    long long _editingIndex;
    UIImageView *_deleteImageView;
    IGTooltipView *_NUXView;
    UIView *_audioMuteOverlayView;
    UILabel *_audioMutedLabel;
    UILabel *_audioOnLabel;
    NSMutableDictionary *_analyticsExtra;
}

@property(nonatomic) _Bool didReorderTray; // @synthesize didReorderTray=_didReorderTray;
@property(retain, nonatomic) NSMutableDictionary *analyticsExtra; // @synthesize analyticsExtra=_analyticsExtra;
@property(retain, nonatomic) UILabel *audioOnLabel; // @synthesize audioOnLabel=_audioOnLabel;
@property(retain, nonatomic) UILabel *audioMutedLabel; // @synthesize audioMutedLabel=_audioMutedLabel;
@property(retain, nonatomic) UIView *audioMuteOverlayView; // @synthesize audioMuteOverlayView=_audioMuteOverlayView;
@property(retain, nonatomic) IGTooltipView *NUXView; // @synthesize NUXView=_NUXView;
@property(retain, nonatomic) UIImageView *deleteImageView; // @synthesize deleteImageView=_deleteImageView;
@property(nonatomic) _Bool hasReorderedAssets; // @synthesize hasReorderedAssets=_hasReorderedAssets;
@property(nonatomic) long long editingIndex; // @synthesize editingIndex=_editingIndex;
@property(retain, nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
@property(retain, nonatomic) IGSidecarCollectionController *mediaCollectionController; // @synthesize mediaCollectionController=_mediaCollectionController;
@property(retain, nonatomic) UIView *filterContainerView; // @synthesize filterContainerView=_filterContainerView;
@property(retain, nonatomic) IGRearrangeOverlayView *rearrangeFilterOverlayView; // @synthesize rearrangeFilterOverlayView=_rearrangeFilterOverlayView;
@property(retain, nonatomic) NSString *filterThumbnailsAssetID; // @synthesize filterThumbnailsAssetID=_filterThumbnailsAssetID;
@property(retain, nonatomic) NSMutableDictionary *adjustedFilterStrengthValues; // @synthesize adjustedFilterStrengthValues=_adjustedFilterStrengthValues;
@property(retain, nonatomic) IGFilterControlView *filterControlView; // @synthesize filterControlView=_filterControlView;
@property(retain, nonatomic) IGFilterCollectionController *filterTrayController; // @synthesize filterTrayController=_filterTrayController;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) IGComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGCaptureFlowViewModel *captureFlowViewModel; // @synthesize captureFlowViewModel=_captureFlowViewModel;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <IGSidecarEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logBackwardsEvent;
- (void)_logForwardEvent;
- (void)_incrementAnalyticsCountForKey:(id)arg1;
- (void)_initializeExtras;
- (void)_cancelUploadIfNecessary;
- (void)_updateComposition;
- (void)_cancel;
- (void)_saveAsDraftAndDiscard;
- (void)_done;
- (void)_buildNavBar;
- (void)_showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2 analyticsTag:(id)arg3;
- (void)_showGroupFilterNUX;
- (void)_toggleAspectRatio;
- (void)_updateTopButtons;
- (_Bool)_isAllVideoAudioMuted;
- (void)_muteAllVideos:(_Bool)arg1;
- (void)_toggleAudioMute:(id)arg1;
- (void)_clearGroupFilter;
- (_Bool)_clearGroupFilterIfNecessaryWithMediaMetadata:(id)arg1;
- (void)videoEditor:(id)arg1 didProduceVideoWithMetadata:(id)arg2 shareListManager:(id)arg3;
- (void)videoEditor:(id)arg1 didProduceDraftPreview:(id)arg2;
- (void)videoEditorDidCancel:(id)arg1;
- (void)photoEditor:(id)arg1 didProducePhotoWithMediaMetadata:(id)arg2 shareListManager:(id)arg3;
- (void)photoEditor:(id)arg1 didProduceDraft:(id)arg2 preview:(id)arg3;
- (void)photoEditorDidCancel:(id)arg1;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithCompositionDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithMediaDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didProduceComposition:(id)arg2;
- (void)mediaLibraryViewControllerDidCancel:(id)arg1;
- (void)filterControlView:(id)arg1 didChangetintIntensity:(double)arg2 tintType:(unsigned long long)arg3;
- (void)filterControlView:(id)arg1 didChangeTintColor:(unsigned long long)arg2 withTintType:(unsigned long long)arg3;
- (void)filterControlViewDidTapRotate:(id)arg1;
- (void)filterControlViewNeedUpdateValue;
- (void)filterControlViewDidEndDragging:(id)arg1;
- (void)filterControlViewDidStartDragging:(id)arg1;
- (void)filterControlView:(id)arg1 didChangeBorderSelection:(_Bool)arg2;
- (void)filterControlView:(id)arg1 didChangeValue:(double)arg2;
- (void)filterControlViewDidPressDone:(id)arg1;
- (void)filterControlViewDidPressCancel:(id)arg1;
- (void)_onToolDone:(id)arg1;
- (void)_onToolCancel:(id)arg1;
- (void)_dismissFilterControlView:(id)arg1;
- (void)_presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 leftBarButtonItem:(id)arg4 rightBarButtonItem:(id)arg5 andCompletion:(CDUnknownBlockType)arg6;
- (void)_presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (double)_getAdjustedFilterStrengthForFilter:(Class)arg1;
- (void)filterControllerDidFinishReordering:(id)arg1;
- (void)filterControllerDidStartReordering:(id)arg1;
- (void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2;
- (void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(_Bool)arg3 willScroll:(_Bool)arg4;
- (void)filterControllerDidSelectAddMoreFilters:(id)arg1;
- (void)_generateFilterThumbnailsForMediaMetadata:(id)arg1;
- (void)_buildFilterPicker;
- (_Bool)sidecarCollectionController:(id)arg1 viewOverlapsDeleteZone:(id)arg2;
- (void)sidecarCollectionController:(id)arg1 draggedIntoDeleteZone:(_Bool)arg2;
- (void)sidecarCollectionControllerDidDeleteItem:(id)arg1;
- (void)sidecarCollectionControllerDidLongPress:(id)arg1;
- (void)sidecarCollectionControllerWillFinishReorderingAssets:(id)arg1 orderChanged:(_Bool)arg2 canDelete:(_Bool)arg3;
- (void)sidecarCollectionControllerDidBeginReorderingAssets:(id)arg1 canDelete:(_Bool)arg2;
- (void)sidecarCollectionControllerWillBeginReorderingAssets:(id)arg1 canDelete:(_Bool)arg2;
- (void)sidecarCollectionController:(id)arg1 didReorderAssetsWithFirstAsset:(id)arg2;
- (void)sidecarCollectionController:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)sidecarCollectionControllerDidTapAddCell:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)analyticsModule;
- (id)initWithComposition:(id)arg1 shareListManager:(id)arg2 captureFlowViewModel:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
