//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewCell.h"

@class IGUser, UIColor, UILabel;

@interface IGAddPartnerCell : IGGroupedTableViewCell
{
    UILabel *_partnerNameLabel;
    IGUser *_sponsorPartner;
    UIColor *_selectedTextColor;
}

@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) IGUser *sponsorPartner; // @synthesize sponsorPartner=_sponsorPartner;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
