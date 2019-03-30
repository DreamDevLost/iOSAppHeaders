//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGImageProgressViewDelegate.h"
#import "IGZoomControllerLoadingDelegate.h"

@class IGGradientView, IGImageProgressView, IGZoomController, NSArray, NSString;

@interface IGShoppingPDPProductImageCell : UICollectionViewCell <IGImageProgressViewDelegate, IGZoomControllerLoadingDelegate>
{
    IGImageProgressView *_productImage;
    struct CGSize _imageSize;
    IGGradientView *_gradientView;
    NSArray *_cachedGradientColors;
    IGZoomController *_zoomController;
    id <IGShoppingPDPProductImageCellDelegate> _imageCellDelegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
}

@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGShoppingPDPProductImageCellDelegate> imageCellDelegate; // @synthesize imageCellDelegate=_imageCellDelegate;
- (void).cxx_destruct;
- (void)_computeGradientColorsForImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isMediaViewLoaded;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didLoadPreviewImage:(id)arg2 progressiveJPEGScanNumber:(id)arg3;
- (void)prepareForReuse;
- (void)configureWithImage:(id)arg1 width:(double)arg2 cachedGradientColors:(id)arg3 analyticsModule:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

