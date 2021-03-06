//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAppStateListener.h"
#import "IGPerformanceComponentDelegate.h"

@class IGPerformanceComponent, NSMutableDictionary;

@interface IGPerformanceComposableLogger : NSObject <IGPerformanceComponentDelegate, IGAppStateListener>
{
    id <IGPerformanceLoggable> _logger;
    NSMutableDictionary *_attachedComponents;
    NSMutableDictionary *_activeComponents;
    IGPerformanceComponent *_designatedStartComponent;
    id <IGAppStateAnnounceable> _appStateAnnouncer;
    struct recursive_mutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAnnotationKey:(id)arg1 number:(id)arg2;
- (void)addAnnotationKey:(id)arg1 annotationBool:(_Bool)arg2;
- (void)addAnnotationKey:(id)arg1 annotationValue:(id)arg2;
@property(nonatomic) __weak id <IGPerformanceLoggerDelegate> delegate;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (_Bool)_validateComponent:(id)arg1;
- (_Bool)_shouldSkipStartWithComponent:(id)arg1;
- (void)_addEndInfoWithActiveComponent:(id)arg1;
- (void)_addStartInfoWithActiveComponent:(id)arg1;
- (_Bool)_shouldEndLogger;
- (void)_clearAllActiveComponents;
- (void)_endComponent:(id)arg1;
- (void)_startComponent:(id)arg1;
- (void)performanceComponent:(id)arg1 failWithReason:(id)arg2;
- (void)performanceComponent:(id)arg1 failWithError:(id)arg2;
- (void)performanceComponentDidCancel:(id)arg1;
- (void)performanceComponentDidSucceed:(id)arg1;
- (void)performanceComponentDidStart:(id)arg1;
- (void)attachComponent:(id)arg1;
- (id)initWithLogger:(id)arg1 appStateAnnouncer:(id)arg2 designatedStartComponent:(id)arg3;
- (id)initWithMarkerID:(int)arg1 designatedStartComponent:(id)arg2;
- (id)initWithMarkerID:(int)arg1;

@end

