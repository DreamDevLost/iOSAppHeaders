//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface IGShoppingProductInfoView : UIView
{
    UILabel *_productNameLabel;
    UILabel *_priceLabel;
}

+ (double)preferredHeightForWidth:(double)arg1 productName:(id)arg2 productNameFont:(id)arg3 productNameNumberOfLines:(long long)arg4 currentPrice:(id)arg5 priceFont:(id)arg6;
- (void).cxx_destruct;
- (void)reset;
- (void)configureWithProductName:(id)arg1 productNameNumberOfLines:(long long)arg2 productNameFont:(id)arg3 currentPrice:(id)arg4 fullPrice:(id)arg5 priceFont:(id)arg6;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

