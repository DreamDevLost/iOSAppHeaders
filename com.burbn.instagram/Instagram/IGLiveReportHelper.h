//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGLiveReportHelper : NSObject
{
}

+ (id)sharedHelper;
- (id)_readValueForKey:(id)arg1;
- (void)_writeValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSString *lastSeenBroadcastId;
@property(copy, nonatomic) NSString *lastBroadcastType;
@property(nonatomic) double lastBroadcastTime;
@property(copy, nonatomic) NSString *lastBroadcastId;

@end
