//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UILabel;

@interface IGHScrollHeaderCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
}

+ (double)heightForWidth:(double)arg1 titleText:(id)arg2 subtitleText:(id)arg3 actionButtonConfig:(id)arg4;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 actionButtonConfig:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

