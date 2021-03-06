//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDiskCache, IGLegacySparseDiskCache, NSCache;

@interface IGSparseDiskCache : NSObject
{
    IGLegacySparseDiskCache *_legacyCache;
    long long _itemCapacity;
    long long _maxItemCount;
    double _evictionLimitCoefficient;
    long long _evictionStartOffset;
    NSCache *_metadataCache;
    IGDiskCache *_diskCache;
    _Bool _useDiskDataLengthQuery;
    _Bool _useFastCachedDataCheck;
}

- (void).cxx_destruct;
- (void)_removeOffsetMetadataForKey:(id)arg1;
- (void)_setMetadata:(id)arg1 forKey:(id)arg2 writeThrough:(_Bool)arg3;
- (id)_getMetadataForKey:(id)arg1;
- (void)_refreshMetataForKey:(id)arg1 offset:(long long)arg2;
- (long long)_dataLengthForKey:(id)arg1 offset:(long long)arg2;
- (void)removeAllDataWithDeletionBlock:(CDUnknownBlockType)arg1;
- (void)removeAllDataForKey:(id)arg1;
- (id)dataForKey:(id)arg1 offset:(long long)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2 offset:(long long)arg3;
- (_Bool)containsDataForKey:(id)arg1 offset:(long long)arg2;
- (id)outputStreamForKey:(id)arg1 offset:(long long)arg2;
- (id)inputStreamForKey:(id)arg1 offset:(long long)arg2;
- (id)allRangesForKey:(id)arg1;
- (id)initWithRootPath:(id)arg1 name:(id)arg2 useNewDiskCache:(_Bool)arg3 useDiskDataLengthQuery:(_Bool)arg4 useFastCachedDataCheck:(_Bool)arg5 useFastCachedLegacyDataCheck:(_Bool)arg6 diskCapacity:(unsigned long long)arg7 itemCapacity:(long long)arg8 maxItemCount:(long long)arg9 evictionLimitCoefficient:(double)arg10 evictionStartOffset:(long long)arg11 maxFileCount:(unsigned long long)arg12;

@end

