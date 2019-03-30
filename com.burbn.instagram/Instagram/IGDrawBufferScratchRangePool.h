//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContext, NSMutableArray;

@interface IGDrawBufferScratchRangePool : NSObject
{
    NSMutableArray *_pool;
    IGContext *_context;
    unsigned long long _bufferSize;
}

+ (id)poolForContext:(id)arg1;
- (void).cxx_destruct;
- (void)doneWithRange:(id)arg1;
- (id)borrow;
@property(readonly, nonatomic) unsigned long long count;
- (void)clearPool;
- (id)initWithContext:(id)arg1;

@end
