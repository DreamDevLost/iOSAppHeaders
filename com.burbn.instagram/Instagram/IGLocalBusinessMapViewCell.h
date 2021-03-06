//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGNearbyBusinessFocusUserLocationViewDelegate.h"
#import "MKMapViewDelegate.h"

@class IGFeedPillView, IGLocalBusinessMapView, IGNearbyBusinessFocusUserLocationView, NSString;

@interface IGLocalBusinessMapViewCell : UICollectionViewCell <IGNearbyBusinessFocusUserLocationViewDelegate, MKMapViewDelegate>
{
    IGLocalBusinessMapView *_mapView;
    IGFeedPillView *_pillView;
    IGNearbyBusinessFocusUserLocationView *_userLocationView;
    _Bool _isShowing;
    id <IGLocalBusinessMapViewDelegate> _mapViewDelegate;
}

@property(nonatomic) __weak id <IGLocalBusinessMapViewDelegate> mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)didTapFocusUserLocationView:(id)arg1;
- (void)_refreshButtonTapped:(id)arg1;
- (void)_showNux:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setUpUserLocationView;
- (void)_setUpPillView;
- (void)_resetPillViewFrame;
- (void)_setUpMapViewIfNecessaryWithMapRegion:(CDStruct_b7cb895d)arg1;
- (void)moveMapToRegion:(CDStruct_b7cb895d)arg1;
- (void)showRefreshButton:(_Bool)arg1;
- (void)configureWithMapViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

