//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGRemoteImageViewDelegate.h"

@class IGImageProgressView, IGRemoteImageView, NSString, UILabel;

@interface IGValuePropositionCell : UICollectionViewCell <IGRemoteImageViewDelegate>
{
    IGImageProgressView *_imageProgressView;
    IGRemoteImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IGRemoteImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) IGImageProgressView *imageProgressView; // @synthesize imageProgressView=_imageProgressView;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)remoteImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)remoteImageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)remoteImageView:(id)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(id)arg2;
- (void)remoteImageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)_setupSubtitleLabel;
- (void)_setupTitleLabel;
- (void)_setupImageProgressView;
- (void)_setupImageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

