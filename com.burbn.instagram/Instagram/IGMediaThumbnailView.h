//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGRemoteImageViewDelegate.h"

@class IGImageSpecifier, IGRemoteImageView, NSString, UIColor, UIImage, UIImageView;

@interface IGMediaThumbnailView : UIView <IGRemoteImageViewDelegate>
{
    UIImageView *_glyphView;
    id <IGMediaThumbnailViewDelegate> _delegate;
    UIImage *_glyphImage;
    double _glyphScale;
    IGRemoteImageView *_imageView;
    IGImageSpecifier *_imageSpecifier;
    UIColor *_predominantMediaColor;
    struct UIEdgeInsets _glyphInsets;
}

@property(retain, nonatomic) UIColor *predominantMediaColor; // @synthesize predominantMediaColor=_predominantMediaColor;
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
@property(readonly, nonatomic) IGRemoteImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double glyphScale; // @synthesize glyphScale=_glyphScale;
@property(nonatomic) struct UIEdgeInsets glyphInsets; // @synthesize glyphInsets=_glyphInsets;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(nonatomic) __weak id <IGMediaThumbnailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)remoteImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)remoteImageView:(id)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(id)arg2;
- (void)remoteImageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)remoteImageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)cancelImageLoad;
- (void)layoutSubviews;
- (id)initWithBackgroundDecode:(_Bool)arg1;
- (id)init;
@property(nonatomic) unsigned long long glyph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

