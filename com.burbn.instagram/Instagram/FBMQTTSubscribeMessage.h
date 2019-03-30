//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface FBMQTTSubscribeMessage : TBaseStruct <TBase, NSCoding>
{
    struct NSMutableArray *__thrift_subscribeTopics;
    struct NSMutableArray *__thrift_subscribeGenericTopics;
    _Bool __thrift_subscribeTopics_set;
    _Bool __thrift_subscribeGenericTopics_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSubscribeGenericTopics;
- (_Bool)subscribeGenericTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeGenericTopics;
- (void)unsetSubscribeTopics;
- (_Bool)subscribeTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeTopics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscribeTopics:(struct NSMutableArray *)arg1 subscribeGenericTopics:(struct NSMutableArray *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

