//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGDayHeaderItem : NSObject
{
    int _dayOfWeek;
    NSString *_dayOfWeekLabel;
}

@property(readonly, nonatomic) NSString *dayOfWeekLabel; // @synthesize dayOfWeekLabel=_dayOfWeekLabel;
@property(readonly, nonatomic) int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
- (void).cxx_destruct;
- (id)initWithDayOfWeek:(int)arg1 label:(id)arg2;

@end

