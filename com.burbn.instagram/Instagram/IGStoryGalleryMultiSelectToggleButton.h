//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBouncyButton.h"

@class CAShapeLayer, UIColor, UIImageView, UILabel;

@interface IGStoryGalleryMultiSelectToggleButton : IGBouncyButton
{
    UIColor *_unselectedBackdropColor;
    UIColor *_selectedBackdropColor;
    CAShapeLayer *_backdropLayer;
    UIImageView *_iconImageView;
    UILabel *_selectMultipleLabel;
    _Bool _selectMultipleLabelVisible;
}

- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) _Bool selectMultipleLabelVisible;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

