//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGImageProgressViewDelegate.h"

@class IGCanvasProductViewModel, IGImageProgressView, NSString, UILabel, UITapGestureRecognizer;

@interface IGCanvasProductCell : UICollectionViewCell <IGImageProgressViewDelegate>
{
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _productImagePadding;
    struct UIEdgeInsets _productInfoPadding;
    struct UIEdgeInsets _productPricePadding;
    IGCanvasProductViewModel *_model;
    IGImageProgressView *_productImageView;
    UILabel *_productInfoLabel;
    UILabel *_productPriceLabel;
    id <IGCanvasProductCellDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(readonly, nonatomic) IGCanvasProductViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_didTapProduct:(id)arg1;
- (double)_availableWidth;
- (void)_appendAdditionalLinesIfNeeded:(id)arg1;
- (void)_configureProductPriceLabel:(id)arg1;
- (void)_configureProductInfoLabel:(id)arg1;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didLoadPreviewImage:(id)arg2 progressiveJPEGScanNumber:(id)arg3;
- (void)configureProductCell:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

