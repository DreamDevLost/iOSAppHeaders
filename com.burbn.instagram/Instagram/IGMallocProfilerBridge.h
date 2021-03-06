//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMallocProfileMemoryUsageDataSource.h"

@class IGMallocProfiler, NSObject<OS_dispatch_queue>, NSString;

@interface IGMallocProfilerBridge : NSObject <IGMallocProfileMemoryUsageDataSource>
{
    IGMallocProfiler *_profiler;
    long long _numLogs;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    _Bool _trackerRunning;
    _Bool _listenForTrackerEnabledDebugChanges;
    _Bool _trackerWillRun;
}

+ (id)sharedBridge;
@property _Bool trackerWillRun; // @synthesize trackerWillRun=_trackerWillRun;
@property(nonatomic) _Bool listenForTrackerEnabledDebugChanges; // @synthesize listenForTrackerEnabledDebugChanges=_listenForTrackerEnabledDebugChanges;
- (void).cxx_destruct;
- (void)_handleCompletionWithParams:(id)arg1 uncompressedData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)currentMemoryData;
- (void)removeSerializedTraces;
- (_Bool)hasSerializedMemoryTraces;
- (void)logLastActiveProfile:(id)arg1 extra:(id)arg2 topViewControllerName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)lastActiveProfile;
- (void)logLastSerializedProfile:(id)arg1 extra:(id)arg2 topViewControllerName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)runMemoryAllocationTrackerIfEligible;
- (void)disable;
- (id)_initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

