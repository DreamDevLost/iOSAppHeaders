//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDiskAnalyzerLegacy : NSObject
{
}

+ (void)_getFileSystemTotalSizes:(id *)arg1 freeSizes:(id *)arg2;
+ (void)_calculateFileSizes:(id *)arg1 counts:(id *)arg2;
+ (id)_filepaths;
+ (void)logDiskUsage;
+ (void)startBackgroundLogDiskUsageTaskIfNeeded;

@end

