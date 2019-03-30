//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGActionSheetDelegate.h"
#import "IGPostShareListener.h"

@class IGPostUploadStatusInfo, IGUploadModel, IGUploadStatusMultiAccountPostViewModel, IGUserSession, NSDate, NSString, UIButton, UIImage, UIImageView, UILabel, UIProgressView;

@interface IGUploadCellContentView : UIView <IGPostShareListener, IGActionSheetDelegate>
{
    _Bool _hasRenderedImage;
    IGUploadModel *_activePost;
    NSString *_postingAccountUserName;
    IGUploadStatusMultiAccountPostViewModel *_multiAccountUploadViewModel;
    IGPostUploadStatusInfo *_postUploadStatusInfo;
    id <IGUploadCellContentViewDelegate> _delegate;
    IGUserSession *_userSession;
    NSDate *_uploadStart;
    UIButton *_retryButton;
    UIButton *_removeButton;
    UILabel *_statusLabel;
    UIImageView *_imageView;
    UIImageView *_imageOverlayView;
    UIImageView *_arrowView;
    UIProgressView *_progressView;
    UIImage *_previewImage;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *imageOverlayView; // @synthesize imageOverlayView=_imageOverlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) NSDate *uploadStart; // @synthesize uploadStart=_uploadStart;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGUploadCellContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGPostUploadStatusInfo *postUploadStatusInfo; // @synthesize postUploadStatusInfo=_postUploadStatusInfo;
@property(retain, nonatomic) IGUploadStatusMultiAccountPostViewModel *multiAccountUploadViewModel; // @synthesize multiAccountUploadViewModel=_multiAccountUploadViewModel;
@property(retain, nonatomic) NSString *postingAccountUserName; // @synthesize postingAccountUserName=_postingAccountUserName;
@property(retain, nonatomic) IGUploadModel *activePost; // @synthesize activePost=_activePost;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)postShare:(id)arg1 didRenderVideoAtUrl:(id)arg2;
- (void)postShare:(id)arg1 didUpdateProgress:(double)arg2;
- (void)postShare:(id)arg1 didUpdateStatus:(long long)arg2 serverResponse:(id)arg3;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)_updateProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_onMediaUploadCompleted:(id)arg1;
- (void)_updateContentWithMultiAccountUploadViewModel:(id)arg1;
- (void)_updateContentWithPost:(id)arg1;
- (void)_removeUpload:(id)arg1;
- (void)_retryUpload:(id)arg1;
- (void)_removeKeyValueObservationFromActivePosts;
- (void)_removeKeyValueObservationFromActivePost;
- (void)_addKeyValueObservationToActivePosts;
- (void)_addKeyValueObservationToActivePost;
- (void)_removeListenerForPostUploadStatusInfo:(id)arg1;
- (void)_updateContentWithPostUploadStatusInfo:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 inViewMode:(long long)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

