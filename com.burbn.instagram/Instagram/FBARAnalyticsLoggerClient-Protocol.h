//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol FBARAnalyticsLoggerClient <NSObject>
- (void)logRawEventWithName:(NSString *)arg1 timestamp:(double)arg2 extras:(NSDictionary *)arg3;
- (void)logARWaterfallEventWithExtras:(NSDictionary *)arg1 timestamp:(double)arg2;
@end

