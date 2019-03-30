//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface IGEditMetadataIndicatorView : UIControl
{
    UIImageView *_indicatorImageView;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
- (void).cxx_destruct;
- (void)_didTapIndicatorView;
- (void)setIndicatorImage:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setUpLabel;
- (void)_setUpIndicatorImageView;
- (id)init;

@end

