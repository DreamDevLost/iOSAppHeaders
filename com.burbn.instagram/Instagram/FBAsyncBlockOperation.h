//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface FBAsyncBlockOperation : NSOperation
{
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _executing
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _finished
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _cancelled
    CDUnknownBlockType _operation;
}

- (void).cxx_destruct;
- (void)cancel;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (void)completeOperation;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
