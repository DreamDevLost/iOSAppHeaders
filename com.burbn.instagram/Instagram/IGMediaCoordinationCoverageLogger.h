//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, UIApplication;

@interface IGMediaCoordinationCoverageLogger : NSObject
{
    NSMutableDictionary *_moduleToTaskInfoMap;
    UIApplication *_application;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_sendMediaCoordinationCoverageAnalyticsAndReset:(id)arg1;
- (void)_endBackgroundTask;
- (void)_startBackgroundTask;
- (void)sendAnalyticsForUserSessionAndReset:(id)arg1;
- (void)scheduledMediaCoordinationOperation:(id)arg1 module:(id)arg2 item:(id)arg3;
- (id)initWithApplication:(id)arg1;

@end

