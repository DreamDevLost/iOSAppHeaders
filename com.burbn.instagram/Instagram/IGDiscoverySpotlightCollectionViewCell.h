//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class CAGradientLayer, IGCarouselImageView, IGDiscoverySpotlightModel, IGUserSession, NSString, UIImageView, UILabel, UIView;

@interface IGDiscoverySpotlightCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    IGCarouselImageView *_carouselImageView;
    CAGradientLayer *_gradientLayer;
    UIView *_contentOverlayView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGDiscoverySpotlightModel *_model;
    UIImageView *_glyphImageView;
    IGUserSession *_userSession;
    id <IGDiscoverySpotlightCollectionCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDiscoverySpotlightCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapOnCell;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithUserSession:(id)arg1 model:(id)arg2 analyticsModule:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

