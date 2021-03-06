//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDiskCache, IGMemoryCache, NSObject<OS_dispatch_queue>;

@interface IGCache : NSObject
{
    IGMemoryCache *_memCache;
    IGDiskCache *_diskCache;
    NSObject<OS_dispatch_queue> *_ioQueue;
    double _lastTrimTime;
    id <NSKeyedUnarchiverDelegate> _unarchiverDelegate;
    unsigned long long _diskCapacity;
    unsigned long long _maxObjectCount;
}

@property(readonly, nonatomic) unsigned long long maxObjectCount; // @synthesize maxObjectCount=_maxObjectCount;
@property(readonly, nonatomic) unsigned long long diskCapacity; // @synthesize diskCapacity=_diskCapacity;
- (void).cxx_destruct;
- (id)_io_queue_objectForKey:(id)arg1;
- (unsigned long long)memoryObjectCount;
- (void)removeAllObjectsWithDeletionBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)objectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)containsKey:(id)arg1;
- (id)initWithRootPath:(id)arg1 name:(id)arg2 diskCapacity:(unsigned long long)arg3 maxObjectCount:(unsigned long long)arg4 maxInMemoryCount:(unsigned long long)arg5 maxInMemoryCost:(unsigned long long)arg6 unarchiverDelegate:(id)arg7;

@end

