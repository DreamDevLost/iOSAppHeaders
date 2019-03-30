//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IGTimeSpentWriteIntervalStrategy <NSObject>
- (void)stopActiveBackgroundTracking;
- (void)startActiveBackgroundTracking;
- (void)stopTrackingWithStartTime:(double)arg1 startSystemUptime:(double)arg2;
- (void)startTrackingWithStartTime:(double)arg1;
@end

