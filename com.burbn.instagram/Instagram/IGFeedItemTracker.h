//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGFeedItemTracker : NSObject
{
    _Bool _trackWithNoLatency;
    CDUnknownBlockType _extraFieldBlock;
    NSString *_eventPrefix;
    unsigned long long _feedItemTrackerType;
}

@property(readonly, nonatomic) unsigned long long feedItemTrackerType; // @synthesize feedItemTrackerType=_feedItemTrackerType;
@property(readonly, copy, nonatomic) NSString *eventPrefix; // @synthesize eventPrefix=_eventPrefix;
@property(readonly, nonatomic) _Bool trackWithNoLatency; // @synthesize trackWithNoLatency=_trackWithNoLatency;
@property(readonly, nonatomic) CDUnknownBlockType extraFieldBlock; // @synthesize extraFieldBlock=_extraFieldBlock;
- (void).cxx_destruct;
- (id)eventNameWithSuffix:(id)arg1;
- (id)analyticsEventWithEvent:(id)arg1 experimental:(_Bool)arg2 module:(id)arg3 forFeedItem:(id)arg4 withExtraDictionary:(id)arg5 navState:(id)arg6;
- (void)_logEvent:(id)arg1 experimental:(_Bool)arg2 module:(id)arg3 forFeedItem:(id)arg4 withExtraDictionary:(id)arg5 navState:(id)arg6 noLatency:(_Bool)arg7;
- (void)logEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 withExtraDictionary:(id)arg4 navState:(id)arg5;
- (void)logEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 withExtraDictionary:(id)arg4 noLatency:(_Bool)arg5;
- (void)logEvent:(id)arg1 experimental:(_Bool)arg2 module:(id)arg3 forFeedItem:(id)arg4 withExtraDictionary:(id)arg5 noLatency:(_Bool)arg6;
- (void)logEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 withExtraDictionary:(id)arg4;
- (void)logEvent:(id)arg1 forFeedItem:(id)arg2 withExtraDictionary:(id)arg3;
- (id)initWithEventPrefix:(id)arg1 trackingWithNoLatency:(_Bool)arg2 extraFieldBlock:(CDUnknownBlockType)arg3 feedItemTrackerType:(unsigned long long)arg4;

@end

