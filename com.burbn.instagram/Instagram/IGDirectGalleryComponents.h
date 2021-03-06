//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectGalleryPreviewViewControllerDelegate.h"
#import "IGDirectGalleryViewControllerDelegate.h"
#import "IGDirectMediaPickerViewControllerDelegate.h"
#import "IGDirectSheetPresenterViewControllerDelegate.h"

@class IGDirectMediaPickerLogger, IGDirectMediaPickerViewController, IGPartialModalSheetViewController, IGUserSession, NSString, PHImageRequestOptions, PHVideoRequestOptions;

@interface IGDirectGalleryComponents : NSObject <IGDirectGalleryPreviewViewControllerDelegate, IGDirectGalleryViewControllerDelegate, IGDirectMediaPickerViewControllerDelegate, IGDirectSheetPresenterViewControllerDelegate>
{
    PHImageRequestOptions *_imageRequestOptions;
    struct CGSize _imageRequestTargetSize;
    PHVideoRequestOptions *_videoRequestOptions;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    IGDirectMediaPickerViewController *_mediaPickerViewController;
    _Bool _threadIsDisabled;
    id <IGDirectGalleryComponentsDelegate> _delegate;
    id <IGDirectGalleryComponentsDataSource> _dataSource;
    IGUserSession *_userSession;
    IGDirectMediaPickerLogger *_analyticsLogger;
}

@property(readonly, nonatomic) IGDirectMediaPickerLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) _Bool threadIsDisabled; // @synthesize threadIsDisabled=_threadIsDisabled;
@property(nonatomic) __weak id <IGDirectGalleryComponentsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGDirectGalleryComponentsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleDidTapSendWithFeedItems:(id)arg1;
- (void)_handleDidTapSendWithPreviewMedia:(id)arg1;
- (void)_performSendBlockIfThreadNotDisabled:(CDUnknownBlockType)arg1;
- (void)_uploadPhotoWithImage:(id)arg1 sendTarget:(id)arg2;
- (void)_uploadVideoWithImage:(id)arg1 asset:(id)arg2 sendTarget:(id)arg3;
- (void)_renderAndSendPhotoAsset:(id)arg1 sendTarget:(id)arg2;
- (void)_renderAndSendVideoAsset:(id)arg1 previewImage:(id)arg2 sendTarget:(id)arg3;
- (_Bool)isFullscreen;
- (void)mediaPickerViewController:(id)arg1 didTapSendWithFeedItems:(id)arg2;
- (void)mediaPickerViewController:(id)arg1 didTapSendWithPreviewMedia:(id)arg2;
- (void)galleryViewController:(id)arg1 didUpdateAlbumViewOpen:(_Bool)arg2 selection:(id)arg3;
- (void)galleryViewController:(id)arg1 didUpdateSelection:(id)arg2;
- (void)galleryViewController:(id)arg1 didTapSendWithPreviewMedia:(id)arg2;
- (void)galleryPreviewController:(id)arg1 didTapSendWithImage:(id)arg2;
- (void)galleryPreviewController:(id)arg1 didTapSendWithVideoAsset:(id)arg2 coverImage:(id)arg3;
- (void)directSheetPresenterViewControllerDidDismiss:(id)arg1;
- (void)presentPreviewControllerWithImage:(id)arg1 fromViewController:(id)arg2;
- (void)presentGalleryViewControllerFromViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

