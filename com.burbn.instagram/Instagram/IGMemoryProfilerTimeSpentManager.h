//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGMemoryProfilerTimeSpentManager : NSObject
{
    double _appStartTime;
    double _accumulatedTimeInBackground;
    double _lastBackgroundingTimestamp;
    double _applicationMemoryWarningTimestamp;
    _Bool _isAppActive;
    _Bool _finishedStartup;
}

+ (id)sharedInstance;
- (void)_didReceiveMemoryWarning;
- (void)_willResignActive;
- (void)_didBecomeActive;
- (double)_backgroundTimeSinceInitWithCurrentTime:(double)arg1;
- (double)_timeSinceLastMemoryWarningWithCurrentTime:(double)arg1;
- (double)_activeTimeSinceInitWithCurrentTime:(double)arg1;
- (double)_timeSinceInitWithCurrentTime:(double)arg1;
- (double)backgroundTimeSinceInit;
- (double)timeSinceLastMemoryWarning;
- (double)activeTimeSinceInit;
- (double)timeSinceInit;
- (id)timeSpentConfig;
- (id)_initPrivate;

@end

