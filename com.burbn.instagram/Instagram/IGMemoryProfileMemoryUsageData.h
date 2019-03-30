//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGMemoryProfileMemoryUsageDataDirtyBytes, IGMemoryProfileMemoryUsageDataEvictableBytes;

@interface IGMemoryProfileMemoryUsageData : NSObject <NSCoding>
{
    unsigned long long _freeMemoryBytes;
    unsigned long long _totalMemoryBytes;
    unsigned long long _residentMemoryBytes;
    unsigned long long _virtualMemoryBytes;
    IGMemoryProfileMemoryUsageDataDirtyBytes *_dirtyMemoryBytes;
    IGMemoryProfileMemoryUsageDataEvictableBytes *_evicatableMemoryBytes;
}

- (void).cxx_destruct;
- (id)metadata;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)totalDirtyBytes;
- (id)initWithFreeMemoryBytes:(unsigned long long)arg1 totalMemoryBytes:(unsigned long long)arg2 residentMemoryBytes:(unsigned long long)arg3 virtualMemoryBytes:(unsigned long long)arg4 dirtyMemoryBytes:(id)arg5 evictableMemoryBytes:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

