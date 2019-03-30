//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectCacheWarmupExecutor.h"

@class IGConditionalExecutor, IGDirectCachePerfLogger, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGDirectCacheDiskWarmupExecutor : NSObject <IGDirectCacheWarmupExecutor>
{
    _Bool _warmupFinished;
    IGConditionalExecutor *_warmupFinishedExecutor;
    IGDirectCachePerfLogger *_cachePerfLogger;
    NSMutableArray *_warmupSteps;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_finalizeWarmupWithCompletion:(CDUnknownBlockType)arg1;
- (void)warmupCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)addCacheWarmupStep:(id)arg1;
- (void)executeAfterCacheIsWarmedUp:(CDUnknownBlockType)arg1;
- (_Bool)isCacheWarmupFinished;
- (id)initWithCachePerfLogger:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
