//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGImageImageCaching.h"

@class IGLRUCache, NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface IGDecodedImageCache : NSObject <IGImageImageCaching>
{
    IGLRUCache *_cache;
    NSMapTable *_weakTrackingMapTable;
    NSObject<OS_dispatch_queue> *_mapTableAccessQueue;
}

+ (id)sharedDecodedImageCache;
+ (long long)defaultCostLimit;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapTableAccessQueue; // @synthesize mapTableAccessQueue=_mapTableAccessQueue;
@property(readonly, nonatomic) NSMapTable *weakTrackingMapTable; // @synthesize weakTrackingMapTable=_weakTrackingMapTable;
@property(readonly, nonatomic) IGLRUCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllImages;
- (void)removeImageForCacheKey:(id)arg1;
- (_Bool)containsImageForCacheKey:(id)arg1;
- (void)saveImage:(id)arg1 forCacheKey:(id)arg2;
- (id)imageForCacheKey:(id)arg1;
- (void)setTotalCostLimit:(long long)arg1;
- (id)init;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (_Bool)containsImageForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

