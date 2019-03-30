//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAssetPlayerViewDelegate.h"
#import "IGSoundStateListenerDelegate.h"

@class IGAssetPlayerView, IGDirectGalleryPreviewMedia, IGDirectMediaPickerLogger, IGRemoteImageView, IGSoundStateListener, NSString, UIActivityIndicatorView, UIButton;

@interface IGDirectGalleryPreviewViewController : IGViewController <IGSoundStateListenerDelegate, IGAssetPlayerViewDelegate>
{
    id <IGDirectGalleryPreviewViewControllerDelegate> _delegate;
    IGDirectGalleryPreviewMedia *_previewMedia;
    IGDirectMediaPickerLogger *_analyticsLogger;
    IGRemoteImageView *_imageView;
    UIButton *_sendButton;
    IGAssetPlayerView *_playerView;
    IGSoundStateListener *_soundStateListener;
    UIActivityIndicatorView *_progressIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) IGSoundStateListener *soundStateListener; // @synthesize soundStateListener=_soundStateListener;
@property(retain, nonatomic) IGAssetPlayerView *playerView; // @synthesize playerView=_playerView;
@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) IGRemoteImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) IGDirectMediaPickerLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) IGDirectGalleryPreviewMedia *previewMedia; // @synthesize previewMedia=_previewMedia;
@property(nonatomic) __weak id <IGDirectGalleryPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (_Bool)_canAlwaysSendMediaAsset;
- (void)_stopProgressIndicator;
- (void)_startProgressIndicator;
- (struct UIEdgeInsets)preferredContentInsets;
- (struct CGSize)_contentSize;
- (void)_didBecomeActive:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (void)assetPlayerView:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)assetPlayerViewPlayStateDidChange:(id)arg1;
- (void)assetPlayerViewAssetLoaded:(id)arg1;
- (void)_sendButtonTapped:(id)arg1;
- (void)_setupProgressIndicator;
- (void)_setupForVideoAsset:(id)arg1;
- (void)_setupForPhotoAsset:(id)arg1;
- (void)_setupImageViewWithImage:(id)arg1;
- (void)_updateSendButtonEnabled:(_Bool)arg1;
- (void)_setupSendButton;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPreviewMedia:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

