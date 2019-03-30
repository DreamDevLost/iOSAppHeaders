//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, IGGradientView, NSArray, UILabel;

@interface IGQuizStickerOptionIndexAccessoryView : UIView
{
    CAShapeLayer *_placeholderCircleLayer;
    UILabel *_placeholderIndexLabel;
    IGGradientView *_normalGradientView;
    UIView *_normalGradientMaskView;
    CAShapeLayer *_normalGradientMaskCircle;
    UILabel *_normalGradientMaskLabel;
    IGGradientView *_filledGradientView;
    CAShapeLayer *_filledGradientMaskCircle;
    UILabel *_filledGradientLabel;
    long long _index;
    NSArray *_colorSchemeColors;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *colorSchemeColors; // @synthesize colorSchemeColors=_colorSchemeColors;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

@end
