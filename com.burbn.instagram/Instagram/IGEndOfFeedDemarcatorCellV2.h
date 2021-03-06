//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGEndOfFeedDemarcatorCellType.h"

@class IGAnimatedCheckmarkView, UILabel;

@interface IGEndOfFeedDemarcatorCellV2 : UICollectionViewCell <IGEndOfFeedDemarcatorCellType>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGAnimatedCheckmarkView *_checkmarkView;
}

+ (double)minimumVisiblePercentageForAnimationForWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3 direction:(long long)arg4;
+ (double)minimumVisiblePercentageForImpressionForWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3;
+ (double)heightForWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void).cxx_destruct;
- (void)animateCell;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 willAnimate:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

