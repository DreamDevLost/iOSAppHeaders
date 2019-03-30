//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTimer, NSObject<OS_dispatch_queue>;

@interface IGRetryHelper : NSObject
{
    _Bool _didCallTerminationBlock;
    long long _retryCount;
    double _retryDelay;
    CDUnknownBlockType _retryBlock;
    CDUnknownBlockType _terminationBlock;
    NSObject<OS_dispatch_queue> *_retryQueue;
    NSObject<OS_dispatch_queue> *_internalStateQueue;
    FBTimer *_timer;
}

@property(retain, nonatomic) FBTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool didCallTerminationBlock; // @synthesize didCallTerminationBlock=_didCallTerminationBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue; // @synthesize internalStateQueue=_internalStateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *retryQueue; // @synthesize retryQueue=_retryQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType terminationBlock; // @synthesize terminationBlock=_terminationBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(readonly, nonatomic) double retryDelay; // @synthesize retryDelay=_retryDelay;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void).cxx_destruct;
- (void)_handleTimer;
- (void)cancel;
- (void)retry;
- (id)initWithRetryCount:(long long)arg1 retryDelay:(double)arg2 retryBlock:(CDUnknownBlockType)arg3 terminationBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)dealloc;

@end
