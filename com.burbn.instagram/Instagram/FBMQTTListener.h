//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBMQTTListener : NSObject
{
    NSString *_pattern;
    unsigned long long _backgroundPolicy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _jsonMessageBlock;
    CDUnknownBlockType _encodedMessageBlock;
}

@property(copy, nonatomic) CDUnknownBlockType encodedMessageBlock; // @synthesize encodedMessageBlock=_encodedMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType jsonMessageBlock; // @synthesize jsonMessageBlock=_jsonMessageBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) unsigned long long backgroundPolicy; // @synthesize backgroundPolicy=_backgroundPolicy;
@property(readonly, copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTopic:(id)arg1 backgroundPolicy:(unsigned long long)arg2 callbackQueue:(id)arg3 jsonMessageBlock:(CDUnknownBlockType)arg4 encodedMessageBlock:(CDUnknownBlockType)arg5;
- (id)initWithTopic:(id)arg1 backgroundPolicy:(unsigned long long)arg2 callbackQueue:(id)arg3 encodedMessageBlock:(CDUnknownBlockType)arg4;
- (id)initWithTopic:(id)arg1 backgroundPolicy:(unsigned long long)arg2 callbackQueue:(id)arg3 jsonMessageBlock:(CDUnknownBlockType)arg4;
- (id)initWithPattern:(id)arg1 backgroundPolicy:(unsigned long long)arg2 callbackQueue:(id)arg3;

@end

