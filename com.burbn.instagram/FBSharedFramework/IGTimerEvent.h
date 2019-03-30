//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IGTimerEvent : NSObject
{
    id <IGAnalyticsLoggerProtocol> _logger;
    NSMutableDictionary *_pendingEvents;
}

@property(retain, nonatomic) NSMutableDictionary *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
- (void).cxx_destruct;
- (id)_processEvent:(id)arg1;
- (id)_keyForTimer:(id)arg1 uuid:(id)arg2;
- (id)_createEventObjectForTimer:(id)arg1 uuid:(id)arg2;
- (void)reset;
- (void)save;
- (void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3;
- (void)startTimer:(id)arg1 uuid:(id)arg2;
- (id)initWithLogger:(id)arg1;

@end

