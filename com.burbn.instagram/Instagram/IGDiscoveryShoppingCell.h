//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGDiscoveryDestinationCellOverlayView, IGDiscoveryScalingTransitionImageView, IGDiscoveryShoppingViewModel, NSString;

@interface IGDiscoveryShoppingCell : UICollectionViewCell
{
    IGDiscoveryScalingTransitionImageView *_imageView;
    IGDiscoveryDestinationCellOverlayView *_overlayView;
    IGDiscoveryShoppingViewModel *_shoppingModel;
    NSString *_module;
}

- (void).cxx_destruct;
- (void)configureWithShoppingViewModel:(id)arg1 module:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

