//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGNearbyBusinessMapViewController, IGRemoteImageView, IGUser;

@protocol IGNearbyBusinessMapViewDelegate <NSObject>
- (void)mapViewController:(IGNearbyBusinessMapViewController *)arg1 didChangeRegionWithCenterLocation:(struct CLLocationCoordinate2D)arg2 radius:(double)arg3;
- (void)mapViewController:(IGNearbyBusinessMapViewController *)arg1 didTapBusiness:(IGUser *)arg2 byProfileImageView:(IGRemoteImageView *)arg3;
- (void)mapViewController:(IGNearbyBusinessMapViewController *)arg1 didSelectBusiness:(IGUser *)arg2;
@end

