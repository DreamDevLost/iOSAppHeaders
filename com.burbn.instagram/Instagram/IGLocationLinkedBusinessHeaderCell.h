//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGBusinessProfileStripe, UILabel;

@interface IGLocationLinkedBusinessHeaderCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGBusinessProfileStripe *_headerView;
}

- (void).cxx_destruct;
- (void)setBusinessStripeDelegate:(id)arg1;
- (void)configureWithLinkedBusinessHeader:(id)arg1 ctaButtonText:(id)arg2 module:(id)arg3;
- (void)layoutSubviews;

@end

