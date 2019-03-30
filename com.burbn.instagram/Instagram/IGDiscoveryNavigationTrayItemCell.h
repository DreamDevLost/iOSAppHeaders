//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CAShapeLayer, UIImageView, UILabel;

@interface IGDiscoveryNavigationTrayItemCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UIImageView *_dropdownIndicatorView;
    CAShapeLayer *_backgroundLayer;
}

+ (double)preferredWithForItem:(id)arg1 allowTrayIcon:(_Bool)arg2;
- (void).cxx_destruct;
- (void)_updateSelectionState;
- (void)_updateHighlightStateAnimated:(_Bool)arg1;
- (void)configureWithItem:(id)arg1 allowTrayIcon:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

