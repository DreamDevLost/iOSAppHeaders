//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGSimpleButton;

@interface IGPhotoIndicatorView : UIView
{
    UIView *_glyphView;
    IGSimpleButton *_videoGlyph;
    IGSimpleButton *_carouselGlyph;
    long long _indicatorStyle;
}

@property(readonly, nonatomic) long long indicatorStyle; // @synthesize indicatorStyle=_indicatorStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 indicatorStyle:(long long)arg2;

@end

