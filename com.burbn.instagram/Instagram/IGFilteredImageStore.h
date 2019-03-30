//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGFilteredImageStore : NSObject
{
}

+ (id)_filteredImageForImage:(id)arg1 filterClass:(Class)arg2;
+ (id)_diskStore;
+ (id)_cache;
+ (id)_queue;
+ (id)_keyForImageNamed:(id)arg1 filterClass:(Class)arg2;
+ (_Bool)containsImageForImageName:(id)arg1 filterClass:(Class)arg2;
+ (id)cachedImageForImageName:(id)arg1 filterClass:(Class)arg2;
+ (void)imageForImageName:(id)arg1 filterClass:(Class)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)clearCache;
+ (void)clearStore;

@end

