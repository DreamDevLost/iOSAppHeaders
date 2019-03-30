//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGGradientView, NSString, UIImageView, UILabel;

@interface IGGradientTextStickerView : UIView
{
    UILabel *_label;
    UIImageView *_iconImageView;
    IGGradientView *_iconGradientMaskView;
    IGGradientView *_textGradientView;
    UIView *_contentView;
    double _iconTextPadding;
    long long _style;
    double _iconBuiltInPadding;
}

@property(nonatomic) double iconBuiltInPadding; // @synthesize iconBuiltInPadding=_iconBuiltInPadding;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_configureWithStyle:(long long)arg1;
- (void)setGradientColors:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithIconImageName:(id)arg1 vibrantGradientColors:(id)arg2 fontSize:(double)arg3;

@end

