//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface FBMQTTForegroundState : TBaseStruct <TBase, NSCoding>
{
    _Bool __thrift_inForegroundApp;
    _Bool __thrift_inForegroundDevice;
    int __thrift_keepAliveTimeout;
    struct NSMutableArray *__thrift_subscribeTopics;
    struct NSMutableArray *__thrift_subscribeGenericTopics;
    struct NSMutableArray *__thrift_unsubscribeTopics;
    struct NSMutableArray *__thrift_unsubscribeGenericTopics;
    long long __thrift_requestId;
    _Bool __thrift_inForegroundApp_set;
    _Bool __thrift_inForegroundDevice_set;
    _Bool __thrift_keepAliveTimeout_set;
    _Bool __thrift_subscribeTopics_set;
    _Bool __thrift_subscribeGenericTopics_set;
    _Bool __thrift_unsubscribeTopics_set;
    _Bool __thrift_unsubscribeGenericTopics_set;
    _Bool __thrift_requestId_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetRequestId;
- (_Bool)requestIdIsSet;
@property(nonatomic) long long requestId;
- (void)unsetUnsubscribeGenericTopics;
- (_Bool)unsubscribeGenericTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *unsubscribeGenericTopics;
- (void)unsetUnsubscribeTopics;
- (_Bool)unsubscribeTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *unsubscribeTopics;
- (void)unsetSubscribeGenericTopics;
- (_Bool)subscribeGenericTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeGenericTopics;
- (void)unsetSubscribeTopics;
- (_Bool)subscribeTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeTopics;
- (void)unsetKeepAliveTimeout;
- (_Bool)keepAliveTimeoutIsSet;
@property(nonatomic) int keepAliveTimeout;
- (void)unsetInForegroundDevice;
- (_Bool)inForegroundDeviceIsSet;
@property(nonatomic) _Bool inForegroundDevice;
- (void)unsetInForegroundApp;
- (_Bool)inForegroundAppIsSet;
@property(nonatomic) _Bool inForegroundApp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInForegroundApp:(_Bool)arg1 inForegroundDevice:(_Bool)arg2 keepAliveTimeout:(int)arg3 subscribeTopics:(struct NSMutableArray *)arg4 subscribeGenericTopics:(struct NSMutableArray *)arg5 unsubscribeTopics:(struct NSMutableArray *)arg6 unsubscribeGenericTopics:(struct NSMutableArray *)arg7 requestId:(long long)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

