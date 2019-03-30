//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGDataUsageSession : NSObject
{
    _Bool _isOnWifi;
    unsigned long long _requestType;
    unsigned long long _behavior;
    NSString *_module;
    unsigned long long _bytesSent;
    unsigned long long _bytesReceived;
    long long _totalRequestsInBatch;
}

@property(readonly, nonatomic) long long totalRequestsInBatch; // @synthesize totalRequestsInBatch=_totalRequestsInBatch;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(readonly, nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)description;
- (void)addBytesReceived:(unsigned long long)arg1 bytesSent:(unsigned long long)arg2;
- (id)initWithRequestType:(unsigned long long)arg1 behavior:(unsigned long long)arg2 isOnWifi:(_Bool)arg3 module:(id)arg4;

@end

