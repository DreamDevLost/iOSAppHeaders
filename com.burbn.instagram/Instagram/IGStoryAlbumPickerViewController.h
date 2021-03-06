//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGGestureHandler.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGGalleryDataSource, NSString, UIButton, UICollectionView, UILabel, UIView;

@interface IGStoryAlbumPickerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGGestureHandler, IGAnalyticsModule>
{
    UIView *_contentWrapperView;
    UICollectionView *_collectionView;
    IGGalleryDataSource *_galleryDataSource;
    UIView *_navigationBar;
    UIButton *_dismissButton;
    UILabel *_currentAlbumTitleLabel;
    UIView *_titleSeparator;
    id <IGStoryAlbumPickerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryAlbumPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_didTapNavigationBar:(id)arg1;
- (void)_dismissAlbumPicker:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

