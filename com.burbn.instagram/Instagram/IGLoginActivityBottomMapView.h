//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGLoginActivityMapViewDelegate.h"

@class IGLoginActivityMapView, UILabel;

@interface IGLoginActivityBottomMapView : UIView <IGLoginActivityMapViewDelegate>
{
    UILabel *_titleLabel;
    IGLoginActivityMapView *_mapView;
    id <IGLoginActivityBottomMapViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLoginActivityBottomMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (void)loginActivityMapViewDidTapOnChangeButton:(id)arg1;
- (void)loginActivityMapViewDidTapOnDisavowButton:(id)arg1;
- (void)loginActivityMapViewDidTapOnAvowButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

