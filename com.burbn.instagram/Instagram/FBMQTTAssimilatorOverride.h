//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class FBMQTTPhpTierOverrideHostPort, NSString;

@interface FBMQTTAssimilatorOverride : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_tierType;
    FBMQTTPhpTierOverrideHostPort *__thrift_host;
    _Bool __thrift_tierType_set;
    _Bool __thrift_host_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetHost;
- (_Bool)hostIsSet;
@property(retain, nonatomic) FBMQTTPhpTierOverrideHostPort *host;
- (void)unsetTierType;
- (_Bool)tierTypeIsSet;
@property(retain, nonatomic) NSString *tierType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTierType:(id)arg1 host:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
