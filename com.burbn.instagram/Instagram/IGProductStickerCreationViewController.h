//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGProductStickerTokenSectionControllerDelegate.h"
#import "IGStoryColorPaletteDelegate.h"
#import "IGStoryEyedropperPresentationViewDataSource.h"
#import "IGStoryEyedropperPresentationViewDelegate.h"
#import "IGStoryStickerEditingViewControllerProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class IGListAdapter, IGProductStickerView, IGStickerBundleView, IGStoryColorPickingControls, IGStoryEyedropperPresentationView, IGTapButton, NSArray, NSString, UICollectionView, UIGestureRecognizer, UILabel, UIView;

@interface IGProductStickerCreationViewController : UIViewController <IGListAdapterDataSource, IGProductStickerTokenSectionControllerDelegate, IGStoryColorPaletteDelegate, IGStoryEyedropperPresentationViewDataSource, IGStoryEyedropperPresentationViewDelegate, UIGestureRecognizerDelegate, IGStoryStickerEditingViewControllerProtocol>
{
    UIView *_dimmingView;
    IGTapButton *_doneButton;
    IGTapButton *_saveButton;
    UILabel *_editNameLabel;
    UIView *_clippingContainerView;
    IGProductStickerView *_productStickerView;
    IGStickerBundleView *_stickerBundleView;
    UIGestureRecognizer *_productStickerTapRecognizer;
    IGStoryColorPickingControls *_textColorPickingControls;
    IGStoryEyedropperPresentationView *_eyedropperPresentationView;
    unsigned long long _colorPickingState;
    _Bool _enableTokenizedDeletion;
    NSArray *_tokenModels;
    _Bool _shouldLayoutTokens;
    UICollectionView *_tokenCollectionView;
    IGListAdapter *_listAdapter;
    _Bool _controlsVisible;
    _Bool _productStickerDimmed;
    _Bool _isEditingName;
    id <IGProductStickerCreationViewControllerDelegate> _delegate;
    id <IGProductStickerCreationViewControllerDataSource> _dataSource;
    double _contentRegionCornerRadius;
    struct CGRect _contentRegion;
}

@property(nonatomic) _Bool isEditingName; // @synthesize isEditingName=_isEditingName;
@property(nonatomic) _Bool productStickerDimmed; // @synthesize productStickerDimmed=_productStickerDimmed;
@property(nonatomic) double contentRegionCornerRadius; // @synthesize contentRegionCornerRadius=_contentRegionCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
@property(nonatomic) __weak id <IGProductStickerCreationViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGProductStickerCreationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tokenSectionControllerDidChangeSelection:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_productStickerTapped;
- (id)eyedropperPresentationView:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)eyedropperPresentationView:(id)arg1 didSelectColor:(id)arg2;
- (void)eyedropperPresentationView:(id)arg1 didMoveEyedropperToPointInWindowCoordinates:(struct CGPoint)arg2;
- (void)eyedropperPresentationViewDidDismissEyedropper:(id)arg1;
- (void)eyedropperPresentationViewDidPresentEyedropper:(id)arg1;
- (void)_setControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setColorPickingState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_didTapEyedropperToggleButton:(id)arg1;
- (void)colorPalette:(id)arg1 didLongPressOnColor:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)colorPalette:(id)arg1 didSelectColor:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDiscardStickerOnDismissal;
@property(readonly, nonatomic) double editableStickerScaleWhileEditing;
@property(readonly, nonatomic) _Bool editableStickerViewIsNewlyCreated;
@property(readonly, nonatomic) struct CGPoint editableStickerViewPositionInWindowCoordinatesWhileEditing;
@property(readonly, nonatomic) UIView *editableStickerView;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (void)_showInvalidTextAlert;
- (_Bool)_isStickerTextValid;
- (void)_saveEdits;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)_initializeTokenModels;
- (id)initWithUserSession:(id)arg1 productStickerBundleView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

