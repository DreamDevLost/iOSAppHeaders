//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PHAssetCollection, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, UIActivityIndicatorView, UITableView, UIView;

@interface IGSelectAlbumController : UIViewController <UITableViewDataSource, UITableViewDelegate, PHPhotoLibraryChangeObserver>
{
    _Bool _needsSetPhotoLibraryOptions;
    id <IGSelectAlbumDelegate> _delegate;
    unsigned long long _assetFilterType;
    double _tableViewViewHeight;
    double _maximumContentWidth;
    UITableView *_tableView;
    UIActivityIndicatorView *_activityIndicator;
    NSObject<OS_dispatch_queue> *_queue;
    PHAssetCollection *_userLibrary;
    PHFetchResult *_smartAlbums;
    PHFetchResult *_albums;
    NSMutableDictionary *_keyImageFetchResults;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_options;
    UIView *_topSeparatorLine;
    struct CGSize _thumbnailSize;
    struct CGRect _previousPreheatRect;
}

+ (id)allAlbumTitle;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(nonatomic) _Bool needsSetPhotoLibraryOptions; // @synthesize needsSetPhotoLibraryOptions=_needsSetPhotoLibraryOptions;
@property(retain, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain) NSMutableDictionary *keyImageFetchResults; // @synthesize keyImageFetchResults=_keyImageFetchResults;
@property(retain, nonatomic) PHFetchResult *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) PHFetchResult *smartAlbums; // @synthesize smartAlbums=_smartAlbums;
@property(retain, nonatomic) PHAssetCollection *userLibrary; // @synthesize userLibrary=_userLibrary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) double tableViewViewHeight; // @synthesize tableViewViewHeight=_tableViewViewHeight;
@property(nonatomic) unsigned long long assetFilterType; // @synthesize assetFilterType=_assetFilterType;
@property(nonatomic) __weak id <IGSelectAlbumDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_collectionFetchResultAtIndexPath:(id)arg1;
- (id)_collectionAtIndexPath:(id)arg1;
- (void)viewDidOpen;
- (void)scrollToTop;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_assetsAtIndexPaths:(id)arg1;
- (void)_computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)_updateCachedAssets;
- (void)_resetCachedAssets;
- (void)scrollViewDidScroll:(id)arg1;
- (id)_indexPathsFromIndexes:(id)arg1 section:(long long)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_setPhotosLibraryOptions;
- (id)_fetchOptions;
- (id)_keyImageFetchResultForAssetCollection:(id)arg1;
- (void)_enumerateCollections:(CDUnknownBlockType)arg1;
- (id)_filterSmartAlbums:(id)arg1;
- (void)loadData;
- (void)viewDidLoad;
- (id)initWithMaximumContentWidth:(double)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

