//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface IGQueuedRequestOperation : NSObject
{
    NSDate *_timeEnqueued;
    id <IGResourceOperation> _operation;
}

- (void).cxx_destruct;
- (id)timeEnqueued;
- (id)operation;
- (id)initWithOperation:(id)arg1;

@end

