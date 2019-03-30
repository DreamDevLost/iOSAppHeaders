//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGGalleryDataSourceDelegate.h"
#import "IGGestureHandler.h"
#import "IGStoryAlbumPickerViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGGalleryDataSource, IGStoryExtendedGalleryPermissionsView, IGStoryExtendedGalleryTitleView, IGStoryGalleryMultiSelectToggleButton, IGStoryGallerySelectionTray, IGStoryGalleryWorldEffectButton, IGUserSession, NSMutableOrderedSet, NSString, UICollectionView, UILabel;

@interface IGStoryExtendedGalleryViewController : UIViewController <IGStoryAlbumPickerViewControllerDelegate, IGGalleryDataSourceDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, IGGestureHandler, IGAnalyticsModule>
{
    UICollectionView *_collectionView;
    IGStoryExtendedGalleryTitleView *_titleView;
    UILabel *_noContentPlaceholderLabel;
    IGGalleryDataSource *_galleryDataSource;
    IGStoryExtendedGalleryPermissionsView *_galleryPermissionsView;
    IGStoryGalleryWorldEffectButton *_worldEffectButton;
    NSString *_recentMediaTitleText;
    NSString *_olderMediaTitleText;
    IGStoryGalleryMultiSelectToggleButton *_multiSelectToggleButton;
    IGStoryGallerySelectionTray *_selectionTray;
    NSMutableOrderedSet *_selectedAssetMetadata;
    _Bool _didSelectSingleAsset;
    _Bool _worldEffectEnabled;
    IGUserSession *_userSession;
    _Bool _multiSelectAllowed;
    _Bool _multiSelectEnabled;
    _Bool _selectionTrayVisible;
    id <IGStoryExtendedGalleryViewControllerDelegate> _delegate;
    double _cellAspectRatio;
    double _presentationProgress;
    long long _galleryState;
    double _selectionTrayVisibilityPercentage;
}

@property(nonatomic) double selectionTrayVisibilityPercentage; // @synthesize selectionTrayVisibilityPercentage=_selectionTrayVisibilityPercentage;
@property(nonatomic) _Bool selectionTrayVisible; // @synthesize selectionTrayVisible=_selectionTrayVisible;
@property(nonatomic) _Bool multiSelectEnabled; // @synthesize multiSelectEnabled=_multiSelectEnabled;
@property(nonatomic) long long galleryState; // @synthesize galleryState=_galleryState;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
@property(readonly, nonatomic) _Bool multiSelectAllowed; // @synthesize multiSelectAllowed=_multiSelectAllowed;
@property(readonly, nonatomic) double cellAspectRatio; // @synthesize cellAspectRatio=_cellAspectRatio;
@property(nonatomic) __weak id <IGStoryExtendedGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)albumPickerViewController:(id)arg1 didSelectAlbum:(id)arg2;
- (void)_didTapTitleView:(id)arg1;
- (_Bool)hasUserSelectedAssets;
@property(readonly, nonatomic) struct CGRect contentRegion;
@property(copy, nonatomic) NSString *requestCameraGalleryAccessPermissionsText;
@property(copy, nonatomic) NSString *noContentPlaceholderText;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)_setSelectionTrayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (id)analyticsModule;
- (void)_updateAppearanceAnimated:(_Bool)arg1;
- (void)_setGalleryState:(long long)arg1 animated:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)galleryDataSourceDidChange:(id)arg1;
- (void)_didTapAllowPhotosAccessButton:(id)arg1;
- (void)_didTapMultiSelectTrayNextButton:(id)arg1;
- (void)_setMultiSelectEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didTapMultiSelectToggleButton;
@property(readonly, nonatomic, getter=isWorldEffectSelected) _Bool worldEffectSelected;
- (void)_presentWorldEffectNUX;
- (void)_didTapWorldEffectButton;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)initWithOldestAllowedMediaDate:(id)arg1 cellAspectRatio:(double)arg2 worldEffectEnabled:(_Bool)arg3 multiSelectAllowed:(_Bool)arg4 userSession:(id)arg5;
- (id)initWithOldestAllowedMediaDate:(id)arg1 cellAspectRatio:(double)arg2 worldEffectEnabled:(_Bool)arg3 multiSelectAllowed:(_Bool)arg4 preferredMediaTypes:(id)arg5 userSession:(id)arg6;
- (id)cellForItemAtIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
