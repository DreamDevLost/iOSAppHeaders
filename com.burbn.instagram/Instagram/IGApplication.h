//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBaseApplication.h"

@interface IGApplication : IGBaseApplication
{
    long long _touchState;
}

- (void)_handleTouch;
- (void)_backgroundTaskExpired:(unsigned long long)arg1;
- (unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(id)arg2;
- (unsigned long long)beginBackgroundTaskWithExpirationHandler:(id)arg1;
- (void)_processTouchEvent:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)init;

@end

