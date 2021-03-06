//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGMemoryProfileMemoryUsageData, IGMemoryProfilerTimeSpentConfig, NSArray;

@interface IGMemoryProfile : NSObject <NSCoding>
{
    NSArray *_navigationStack;
    IGMemoryProfilerTimeSpentConfig *_timeSpentConfig;
    IGMemoryProfileMemoryUsageData *_memoryUsageData;
}

- (void).cxx_destruct;
- (id)metadata;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)totalDirtyBytes;
- (id)initWithNavigationStack:(id)arg1 timeSpentConfig:(id)arg2 memoryUsageData:(id)arg3;
- (id)initWithNavigationStack:(id)arg1 timeSpentConfig:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

