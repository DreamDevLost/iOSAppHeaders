//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGRemoteImageViewDelegate.h"

@class IGCircularProgressView, IGImageSpecifier, IGRemoteImageView, NSData, NSString, UIButton, UIImage;

@interface IGImageProgressView : UIView <IGRemoteImageViewDelegate>
{
    UIButton *_failureView;
    double _loadingStartTime;
    _Bool _progressViewEnabled;
    IGImageSpecifier *_imageSpecifier;
    IGRemoteImageView *_photoImageView;
    unsigned long long _loadStatus;
    IGCircularProgressView *_progressView;
    id <IGImageProgressViewDelegate> _delegate;
    unsigned long long _style;
    unsigned long long _progressSize;
    struct CGPoint _progressViewPositionOverride;
}

@property(nonatomic) struct CGPoint progressViewPositionOverride; // @synthesize progressViewPositionOverride=_progressViewPositionOverride;
@property(nonatomic) unsigned long long progressSize; // @synthesize progressSize=_progressSize;
@property(nonatomic) _Bool progressViewEnabled; // @synthesize progressViewEnabled=_progressViewEnabled;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <IGImageProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) unsigned long long loadStatus; // @synthesize loadStatus=_loadStatus;
@property(readonly, nonatomic) IGRemoteImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
- (void).cxx_destruct;
- (void)remoteImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)remoteImageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)remoteImageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)remoteImageView:(id)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(id)arg2;
- (void)_retryMediaFetch;
- (void)_makeFailureViewIfNeeded;
- (void)_updateProgressFailureView;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *preloadedImage;
@property(retain, nonatomic) NSData *previewImageData;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 shouldUseProgressiveJPEG:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
