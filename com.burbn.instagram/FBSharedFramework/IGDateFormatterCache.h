//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IGDateFormatterCache : NSObject
{
    NSMutableDictionary *_cache;
}

+ (id)dateFormatterForTimeWithLocale:(id)arg1;
+ (id)dateFormatterForFullDateWithLocale:(id)arg1;
+ (id)dateFormatterForMonthAndDayWithLocale:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)dateFormatterWithLocale:(id)arg1 key:(id)arg2 creationBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

