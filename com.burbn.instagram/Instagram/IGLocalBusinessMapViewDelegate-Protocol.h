//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLocalBusinessMapViewCell, MKMapView;

@protocol IGLocalBusinessMapViewDelegate <NSObject>
- (void)localBusinessMapView:(MKMapView *)arg1 didChangeToRegion:(CDStruct_b7cb895d)arg2 animated:(_Bool)arg3;
- (void)localBusinessMapViewCellDidTapUserLocation:(IGLocalBusinessMapViewCell *)arg1;
- (void)localBusinessMapViewCellDidTapRefresh:(IGLocalBusinessMapViewCell *)arg1;
@end
