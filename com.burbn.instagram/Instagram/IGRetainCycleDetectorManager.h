//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBRetainCycleDetector, FBTimer, IGCache, NSObject<OS_dispatch_queue>, NSSet;

@interface IGRetainCycleDetectorManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    FBRetainCycleDetector *_detector;
    FBTimer *_timer;
    IGCache *_retainCycleCache;
    NSSet *_baseClasses;
}

+ (void)startRetainCycleDetectionWithSampleRate:(double)arg1;
@property(retain, nonatomic) NSSet *baseClasses; // @synthesize baseClasses=_baseClasses;
@property(retain, nonatomic) IGCache *retainCycleCache; // @synthesize retainCycleCache=_retainCycleCache;
@property(retain, nonatomic) FBTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) FBRetainCycleDetector *detector; // @synthesize detector=_detector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)_classesToTrack;
- (void)_checkForRetainCycleIteration;
- (void)startRetainCycleDetection;
- (id)_initPrivate;

@end

