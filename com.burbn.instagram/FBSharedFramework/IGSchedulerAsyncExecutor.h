//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSchedulerExecutor.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface IGSchedulerAsyncExecutor : NSObject <IGSchedulerExecutor>
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)countOfObjectsInQueue;
- (void)executeInCountedQueue:(CDUnknownBlockType)arg1;
- (void)executeUncounted:(CDUnknownBlockType)arg1;
- (id)initWithQueueNamed:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

