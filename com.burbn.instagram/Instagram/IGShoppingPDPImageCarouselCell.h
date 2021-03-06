//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIScrollViewDelegate.h"

@class IGFeedItemPageIndicator, IGGradientView, IGShoppingNoProductImageView, NSString, UICollectionView;

@interface IGShoppingPDPImageCarouselCell : UICollectionViewCell <UIScrollViewDelegate>
{
    IGFeedItemPageIndicator *_pageIndicator;
    IGGradientView *_pagingGradientView;
    IGShoppingNoProductImageView *_noProductImageView;
    _Bool _isProductImageMissing;
    UICollectionView *_imagesCollectionView;
    id <IGShoppingPDPImageCarouselCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingPDPImageCarouselCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *imagesCollectionView; // @synthesize imagesCollectionView=_imagesCollectionView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)prepareForReuse;
- (void)_showPagingViews:(_Bool)arg1;
- (void)configureWithNumberOfImages:(long long)arg1 currentImageIndex:(long long)arg2 isFullyLoaded:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

