//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGInstacrashLogger;

@interface IGInstacrashDetector : NSObject
{
    double _crashInterval;
    long long _maxCrashCount;
    long long _currentCrashCount;
    _Bool _isInstacrashing;
    _Bool _instacrashDetectionLogged;
    IGInstacrashLogger *_instacrashLogger;
    id <IGInstacrashDetectorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)clearCrashFlags;
- (_Bool)didDetectAndLogInstacrashLoop;
- (id)initWithExceptionHandler:(id)arg1 crashCount:(long long)arg2 crashInterval:(double)arg3 logger:(id)arg4 delegate:(id)arg5;

@end

