//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGGradientView, UIImageView, UILabel;

@interface IGFeedGalleryCardCell : UICollectionViewCell
{
    IGGradientView *_legibilityGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
}

@property(readonly, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(readonly, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
