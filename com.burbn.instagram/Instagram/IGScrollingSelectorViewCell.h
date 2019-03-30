//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGImageRequest, IGRadialLoadingIndicatorView, UIImage, UIImageView, UIView;

@interface IGScrollingSelectorViewCell : UICollectionViewCell
{
    unsigned long long _style;
    IGRadialLoadingIndicatorView *_loadingView;
    IGImageRequest *_thumbnailImageRequest;
    UIImageView *_thumbnailImageView;
    unsigned long long _thumbnailImageTintStyle;
    UIImage *_defaultStyleImage;
    UIImage *_defaultStyleGradientImage;
    UIView *_defaultStyleBackgroundView;
    UIView *_defaultStyleOuterBorderView;
    UIImage *_outlineStyleThumbnailImage;
    UIView *_outlineStyleBorderView;
    unsigned long long _appearance;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long appearance; // @synthesize appearance=_appearance;
- (void).cxx_destruct;
- (void)_cancelThumbnailRequest;
- (void)_beginThumbnailRequest:(id)arg1;
- (void)setThumbnailImageViewContentMode:(long long)arg1;
- (void)setThumbnailImage:(id)arg1 tintStyle:(unsigned long long)arg2;
- (void)setThumbnailImageURL:(id)arg1 module:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
