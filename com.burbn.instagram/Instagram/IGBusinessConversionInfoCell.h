//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGNUXIntroViewCell.h"
#import "IGRemoteImageViewDelegate.h"

@class IGRemoteImageView, NSString, UILabel;

@interface IGBusinessConversionInfoCell : UICollectionViewCell <IGRemoteImageViewDelegate, IGNUXIntroViewCell>
{
    _Bool _isCircularMaskEnabled;
    IGRemoteImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IGRemoteImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isCircularMaskEnabled; // @synthesize isCircularMaskEnabled=_isCircularMaskEnabled;
- (void).cxx_destruct;
- (void)remoteImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)remoteImageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)remoteImageView:(id)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(id)arg2;
- (void)remoteImageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)setTitleFontSize:(double)arg1;
- (void)layoutSubviews;
- (double)heightForCellWithWidth:(double)arg1;
- (struct CGSize)_subtitleLabelSizeForWidth:(double)arg1;
- (struct CGSize)_titleLabelSizeForWidth:(double)arg1;
- (double)_maxTextWidthForWidth:(double)arg1;
- (void)prepareForReuse;
- (void)_setupSubtitleLabel;
- (void)_setupTitleLabel;
- (void)_setupImageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
