//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface IGThreadSafeMutableSet : NSObject
{
    NSObject<OS_dispatch_queue> *_internalConcurrentQueue;
    NSMutableSet *_set;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)init;

@end

