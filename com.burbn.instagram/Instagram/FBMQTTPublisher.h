//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMQTTEncodedMessage, FBMQTTJSONMessage, NSObject<OS_dispatch_queue>;

@interface FBMQTTPublisher : NSObject
{
    _Bool _forceReconnectIfDisconnected;
    _Bool _forceReconnectIfTimeout;
    _Bool _keepRetryUntilTimeout;
    FBMQTTJSONMessage *_jsonMessage;
    FBMQTTEncodedMessage *_encodedMessage;
    double _timeout;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _timeoutBlock;
    double _waitIntervalForConnected;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool keepRetryUntilTimeout; // @synthesize keepRetryUntilTimeout=_keepRetryUntilTimeout;
@property(nonatomic) _Bool forceReconnectIfTimeout; // @synthesize forceReconnectIfTimeout=_forceReconnectIfTimeout;
@property(nonatomic) double waitIntervalForConnected; // @synthesize waitIntervalForConnected=_waitIntervalForConnected;
@property(nonatomic) _Bool forceReconnectIfDisconnected; // @synthesize forceReconnectIfDisconnected=_forceReconnectIfDisconnected;
@property(copy, nonatomic) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) FBMQTTEncodedMessage *encodedMessage; // @synthesize encodedMessage=_encodedMessage;
@property(retain, nonatomic) FBMQTTJSONMessage *jsonMessage; // @synthesize jsonMessage=_jsonMessage;
- (void).cxx_destruct;
- (void)_setUpInitialStates;
- (void)dealloc;
- (id)description;
- (id)initWithJSONMessage:(id)arg1 callbackQueue:(id)arg2;
- (id)initWithEncodedMessage:(id)arg1 callbackQueue:(id)arg2;

@end

