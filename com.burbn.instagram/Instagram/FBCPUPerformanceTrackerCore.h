//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBCPUPerformanceTrackerCore : NSObject
{
    struct mutex _mutex;
    CDUnknownBlockType _callstacksBlock;
    CDUnknownBlockType _completionBlock;
    unsigned int _captureInterval;
    long long _timestampOfActivationNanoseconds;
    unsigned long long _threadSamplingPolicy;
    unsigned int _portToSample;
    _Bool _isBacktraceCaptureSetup;
}

+ (id)shared;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setupBacktraceCapture;
- (void)_trackerLoop:(id)arg1;
- (void)stopSampling;
- (_Bool)startSamplingThread:(unsigned long long)arg1 withRate:(unsigned int)arg2 singleMachPort:(unsigned int)arg3 callstacksBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
