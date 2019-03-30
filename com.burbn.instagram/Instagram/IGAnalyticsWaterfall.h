//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAnalyticsUploadWaterfall.h"

@class NSString;

@interface IGAnalyticsWaterfall : NSObject <IGAnalyticsUploadWaterfall>
{
    NSString *_currentSessionID;
    NSString *_entryPoint;
    NSString *_experimentGroupName;
    double _startTimestamp;
    long long _numberOfStepsBackward;
    long long _numberOfStepsForward;
    unsigned long long _funnelInstanceID;
}

@property(readonly, nonatomic) unsigned long long funnelInstanceID; // @synthesize funnelInstanceID=_funnelInstanceID;
@property(nonatomic) long long numberOfStepsForward; // @synthesize numberOfStepsForward=_numberOfStepsForward;
@property(nonatomic) long long numberOfStepsBackward; // @synthesize numberOfStepsBackward=_numberOfStepsBackward;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(copy, nonatomic) NSString *experimentGroupName; // @synthesize experimentGroupName=_experimentGroupName;
@property(copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(copy, nonatomic) NSString *currentSessionID; // @synthesize currentSessionID=_currentSessionID;
- (void).cxx_destruct;
- (id)logUploadEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logStepWithName:(id)arg1 stepDirection:(long long)arg2;
- (id)_eventName;
- (id)logEvent:(id)arg1;
- (id)logStepBackwardWithName:(id)arg1;
- (id)logStepForwardWithName:(id)arg1;
- (double)_secondsSinceStart;
- (void)_startWaterfallFunnel;
- (id)entryPointStringFromEntryPointType:(long long)arg1;
- (id)initWithEntryPoint:(long long)arg1 experimentGroupName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
