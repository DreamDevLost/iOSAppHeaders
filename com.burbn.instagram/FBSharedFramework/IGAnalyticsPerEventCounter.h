//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAnalyticsProcessingQueue, NSMutableDictionary;

@interface IGAnalyticsPerEventCounter : NSObject
{
    NSMutableDictionary *_sequenceNumberGenerators;
    NSMutableDictionary *_eventCounters;
    NSMutableDictionary *_sessionIds;
    IGAnalyticsProcessingQueue *_analyticsQueue;
    _Bool _synchronizeAfterArchive;
}

- (void).cxx_destruct;
- (void)_archiveData;
- (id)_sequenceNumberGeneratorForKey:(id)arg1;
- (void)_appendCounterDataToEvent:(id)arg1 withChannel:(int)arg2 andKey:(id)arg3;
- (void)_incrementCounterForEvent:(id)arg1 withKey:(id)arg2;
- (void)countAndUpdateEvent:(id)arg1 channel:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadEventCounterData;
- (id)initWithAnalyticsQueue:(id)arg1 synchronizeAfterArchive:(_Bool)arg2;

@end

