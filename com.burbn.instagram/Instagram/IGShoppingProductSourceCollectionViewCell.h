//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGRadioButton, UIActivityIndicatorView, UIImageView, UILabel;

@interface IGShoppingProductSourceCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_sourceLabel;
    UILabel *_productCountLabel;
    IGRadioButton *_radioButton;
    UIActivityIndicatorView *_loadingIndicator;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1 productSourceType:(unsigned long long)arg2 isSelected:(_Bool)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
