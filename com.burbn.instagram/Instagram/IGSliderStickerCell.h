//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGEmojiSlider, UIView;

@interface IGSliderStickerCell : UICollectionViewCell
{
    UIView *_containerView;
    IGEmojiSlider *_slider;
    _Bool _isAnimating;
}

- (void).cxx_destruct;
- (void)_animateSliderBounceWithStart:(double)arg1 finishValue:(double)arg2;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
