//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface IGAnalyticsEvent : NSObject
{
    NSString *_name;
    NSString *_module;
    NSMutableDictionary *_extra;
    _Bool _logPreviousSessionID;
    double _time;
    unsigned long long _samplingRate;
    long long _tags;
}

+ (id)eventWithName:(id)arg1 module:(id)arg2 navState:(id)arg3;
+ (id)eventWithName:(id)arg1 module:(id)arg2;
@property(nonatomic) long long tags; // @synthesize tags=_tags;
@property(nonatomic) unsigned long long samplingRate; // @synthesize samplingRate=_samplingRate;
@property(nonatomic) _Bool logPreviousSessionID; // @synthesize logPreviousSessionID=_logPreviousSessionID;
@property(nonatomic) double time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)description;
- (id)extra;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)_objectForKey:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)addTag:(int)arg1;
- (id)module;
- (id)name;
- (id)_initWithName:(id)arg1 module:(id)arg2 navState:(id)arg3;
- (void)log;
- (void)logImmediately;

@end
