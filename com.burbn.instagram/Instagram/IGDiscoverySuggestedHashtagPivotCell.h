//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFeedPreviewableCell.h"
#import "IGRemoteImageViewDelegate.h"

@class CALayer, IGGradientView, IGRemoteImageView, NSString, UIImageView, UILabel;

@interface IGDiscoverySuggestedHashtagPivotCell : UICollectionViewCell <IGRemoteImageViewDelegate, IGFeedPreviewableCell>
{
    UILabel *_hashtagLabel;
    UIImageView *_glyphView;
    UIImageView *_chevron;
    IGGradientView *_gradientView;
    IGRemoteImageView *_remoteImageView;
    CALayer *_highlightOverlay;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (void)_updateCellForImageLoaded:(_Bool)arg1;
- (id)image;
- (void)remoteImageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)remoteImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)remoteImageView:(id)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(id)arg2;
- (void)remoteImageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)configureWithSuggestedHashtagPivotModel:(id)arg1 module:(id)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

