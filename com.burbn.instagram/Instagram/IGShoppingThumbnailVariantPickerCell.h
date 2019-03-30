//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CAShapeLayer, IGRemoteImageView, UILabel, UIView;

@interface IGShoppingThumbnailVariantPickerCell : UICollectionViewCell
{
    UIView *_containerView;
    IGRemoteImageView *_thumbnail;
    CAShapeLayer *_soldOutStrikethroughLayer;
    UILabel *_label;
    UIView *_soldOutLabelSeparator;
    UILabel *_soldOutLabel;
    UIView *_selectedBorder;
}

+ (double)preferredHeightWithWidth:(double)arg1 isInStock:(_Bool)arg2;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)configureWithThumbnail:(id)arg1 title:(id)arg2 isInStock:(_Bool)arg3 analyticsModule:(id)arg4;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

