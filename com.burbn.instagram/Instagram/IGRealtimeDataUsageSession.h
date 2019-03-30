//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGRealtimeDataUsageSession : NSObject
{
    _Bool _isOnWifi;
    NSString *_topic;
    unsigned long long _bytesSent;
    unsigned long long _bytesReceived;
}

@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;
- (void).cxx_destruct;
- (id)description;
- (void)addBytesReceived:(unsigned long long)arg1 bytesSent:(unsigned long long)arg2;
- (id)initWithTopic:(id)arg1 isOnWifi:(_Bool)arg2;

@end

