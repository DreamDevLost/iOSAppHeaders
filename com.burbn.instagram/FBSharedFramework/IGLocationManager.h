//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSDate, NSString, NSTimer;

@interface IGLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CLLocation *_lastGoodLocation;
    CLLocation *_lastLocation;
    NSTimer *_locationTimer;
    NSDate *_appOpenDate;
    _Bool _isLocating;
}

+ (id)getDistanceStringFromPoint:(id)arg1;
+ (int)authorizationStatus;
+ (_Bool)isLocationUseAuthorized;
+ (id)sharedLocationManager;
@property(readonly, nonatomic) _Bool isLocating; // @synthesize isLocating=_isLocating;
- (void).cxx_destruct;
- (void)_timeoutLocationUpdate;
- (void)_logLocationAuthorizationAllowed:(_Bool)arg1;
- (void)_logLocationAccessed:(_Bool)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)requestAuthorization;
- (void)stopUpdatingLocation;
- (_Bool)isRecentLocation:(id)arg1;
- (_Bool)isCachedLocation:(id)arg1;
- (void)startUpdatingLocationWithTimeout:(double)arg1;
- (void)startUpdatingLocation;
- (id)recentLocation;
@property(readonly, nonatomic) CLLocation *currentLocation;
- (id)cachedLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

