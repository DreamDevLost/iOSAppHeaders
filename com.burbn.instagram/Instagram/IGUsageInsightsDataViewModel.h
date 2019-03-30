//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray, NSString;

@interface IGUsageInsightsDataViewModel : NSObject <IGListDiffable>
{
    NSArray *_secondsSpentPerDay;
    long long _avgSecondsSpent;
    NSArray *_datapoints;
    NSString *_module;
}

@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) long long avgSecondsSpent; // @synthesize avgSecondsSpent=_avgSecondsSpent;
@property(readonly, nonatomic) NSArray *datapoints; // @synthesize datapoints=_datapoints;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (long long)_generateAvgNumSecondsSpent;
- (id)_generateDayChartData;
- (id)averageTimeSpentString;
- (id)abbreviatedAverageTimeSpentString;
- (id)initWithSecondsSpentPerDay:(id)arg1 module:(id)arg2;

@end
