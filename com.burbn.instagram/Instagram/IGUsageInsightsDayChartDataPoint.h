//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber;

@interface IGUsageInsightsDayChartDataPoint : NSObject
{
    NSDate *_date;
    NSNumber *_timeSpent;
}

@property(readonly, nonatomic) NSNumber *timeSpent; // @synthesize timeSpent=_timeSpent;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)dayString;
- (id)initWithDate:(id)arg1 timeSpent:(id)arg2;

@end

