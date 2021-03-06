//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol FBReliabilityStatisticsCounterStorage <NSObject>
- (void)clear;
- (NSArray *)allCounters;
- (int)valueOfCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2;
- (void)overwriteStorageWithCounters:(NSArray *)arg1;
- (void)setCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 count:(int)arg3;
- (void)bumpCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 delta:(int)arg3;
@end

