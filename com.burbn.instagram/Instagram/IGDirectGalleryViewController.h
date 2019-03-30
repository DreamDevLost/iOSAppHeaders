//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectAlbumViewControllerDelegate.h"
#import "IGDirectGalleryMediaSectionControllerSelectDelegate.h"
#import "IGDirectScrollingTabChildViewControllerProtocol.h"
#import "IGListAdapterDataSource.h"
#import "IGPartialModalSheetListener.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGCameraAndGalleryAccessPromptView, IGChevronTitleButton, IGDirectAlbumViewController, IGDirectBottomActionButton, IGDirectMediaPickerLogger, IGEmptyFeedView, IGListAdapter, NSMutableDictionary, NSString, PHCachingImageManager, PHImageRequestOptions, UICollectionView;

@interface IGDirectGalleryViewController : IGViewController <IGListAdapterDataSource, IGDirectGalleryMediaSectionControllerSelectDelegate, UICollectionViewDelegateFlowLayout, IGPartialModalSheetListener, IGDirectAlbumViewControllerDelegate, IGDirectScrollingTabChildViewControllerProtocol>
{
    NSMutableDictionary *_selectedMediaDictionary;
    IGEmptyFeedView *_emptyView;
    IGDirectBottomActionButton *_sendButton;
    _Bool _showSendButton;
    _Bool _useCustomContentInsets;
    struct UIEdgeInsets _customContentInsets;
    _Bool _isCheckmarkRedesignEnabled;
    _Bool _isAlbumRedesignEnabled;
    id <IGDirectGalleryViewControllerDelegate> _delegate;
    IGDirectMediaPickerLogger *_analyticsLogger;
    id <IGDirectGalleryDataSourceProtocol> _dataSource;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGChevronTitleButton *_albumTitleButton;
    IGCameraAndGalleryAccessPromptView *_libraryAccessDeniedView;
    double _topBarHeight;
    unsigned long long _minimumInteritemSpacing;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    IGDirectAlbumViewController *_albumViewController;
    struct UIEdgeInsets _sectionInsets;
}

@property(readonly, nonatomic) IGDirectAlbumViewController *albumViewController; // @synthesize albumViewController=_albumViewController;
@property(readonly, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(readonly, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(readonly, nonatomic) unsigned long long minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(readonly, nonatomic) double topBarHeight; // @synthesize topBarHeight=_topBarHeight;
@property(readonly, nonatomic) IGCameraAndGalleryAccessPromptView *libraryAccessDeniedView; // @synthesize libraryAccessDeniedView=_libraryAccessDeniedView;
@property(readonly, nonatomic) IGChevronTitleButton *albumTitleButton; // @synthesize albumTitleButton=_albumTitleButton;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <IGDirectGalleryDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) IGDirectMediaPickerLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak id <IGDirectGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (void)_backButtonTapped:(id)arg1;
- (void)_chevronTitleButtonTapped:(id)arg1;
- (void)_didTapSendButton:(id)arg1;
- (id)analyticsModule;
- (void)_updateAlbumButtonTitle;
- (void)_updateAlbumButtonOpeness:(_Bool)arg1;
- (void)_updateEmptyView;
- (void)_reloadAlbum;
- (void)_showVideoPastLimitAlert;
- (void)updateSendButton;
- (void)_updateOnUserSelectionForMultipleMediaModeWithPHAsset:(id)arg1 image:(id)arg2;
- (void)partialModalSheetDidChangeState:(unsigned long long)arg1;
- (void)partialModalSheetDidDismiss;
- (void)partialModalSheetDidUpdateOffset:(double)arg1 presentationProgress:(double)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateContentInsets:(struct UIEdgeInsets)arg1;
- (void)albumViewController:(id)arg1 didSwitchAlbum:(_Bool)arg2;
- (void)galleryMediaSectionControllerDidSelectDisabledMedia:(id)arg1;
- (void)galleryMediaSectionController:(id)arg1 didSelectMediaWithPHAsset:(id)arg2 phAssetIndex:(long long)arg3 image:(id)arg4;
- (_Bool)shouldShowMediaAsSelectedWithAssetIdentifier:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_layoutAlbumViewController;
- (void)_layoutSendButton;
- (void)viewDidLayoutSubviews;
- (void)_initializeEmptyViewIfNeeded;
- (void)_setupLibraryAccessDeniedView;
- (void)_setupAlbumController;
- (void)_setupAlbumTitleButton;
- (void)_setupCollectionViewAndListAdapter;
- (void)_setupWithoutPhotoLibraryAccessPermission;
- (void)_updateOnFinishFetchingDefaultCollection;
- (void)_setupWithPhotoLibraryAccessPermission;
- (void)_setupSendButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithShowSendButton:(_Bool)arg1 checkmarkRedesignEnabled:(_Bool)arg2 albumRedesignEnabled:(_Bool)arg3 analyticsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
