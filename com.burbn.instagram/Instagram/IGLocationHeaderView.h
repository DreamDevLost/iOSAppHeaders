//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKMapViewDelegate.h"

@class IGNearbyBusinessCircularSidesButton, MKMapView, NSString;

@interface IGLocationHeaderView : UIView <MKMapViewDelegate>
{
    IGNearbyBusinessCircularSidesButton *_exploreMapButton;
    _Bool _showExploreMapButton;
    id <IGLocationHeaderViewDelegate> _delegate;
    MKMapView *_mapView;
}

@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) _Bool showExploreMapButton; // @synthesize showExploreMapButton=_showExploreMapButton;
@property(nonatomic) __weak id <IGLocationHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setupExploreMapButton;
- (void)_exploreMapButtonTapped;
- (void)_mapViewDidReceiveTap:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithLocation:(id)arg1 showCurrentLocation:(_Bool)arg2;
- (id)initWithSuperviewWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
