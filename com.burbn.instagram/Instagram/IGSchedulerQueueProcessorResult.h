//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSchedulerQueue.h"

@class NSArray, NSMapTable;

@interface IGSchedulerQueueProcessorResult : NSObject <IGSchedulerQueue>
{
    NSArray *_operationsProcessed;
    NSArray *_queue;
    NSMapTable *_moduleToQueueMap;
    double _processorTime;
}

- (void).cxx_destruct;
- (id)queue;
- (double)totalTimeToProcess;
- (id)initWithOperationsProcessed:(id)arg1 queue:(id)arg2 moduleToQueueMap:(id)arg3 overTimeInterval:(double)arg4;

@end
