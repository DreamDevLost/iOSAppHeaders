//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, FBTimer, IGCLLocationUpdateListenerAnnouncer, IGUserSession, NSString;

@interface IGForegroundLocationTracker : NSObject <CLLocationManagerDelegate>
{
    IGCLLocationUpdateListenerAnnouncer *_locationAnnouncer;
    IGUserSession *_session;
    FBTimer *_timer;
    CLLocationManager *_locationManager;
    id <NSObject> _didEnterBackgroundObserver;
}

- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_stopUpdatingLocation;
- (void)_onTimer;
- (void)stopTracking;
- (void)startTracking;
- (id)initWithUserSession:(id)arg1 locationAnnouncer:(id)arg2 locationCollectionInterval:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

