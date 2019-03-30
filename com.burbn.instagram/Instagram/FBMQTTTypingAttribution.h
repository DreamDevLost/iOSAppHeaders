//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface FBMQTTTypingAttribution : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_inThreadAppId;
    long long __thrift_pageId;
    NSString *__thrift_extensionType;
    NSString *__thrift_genericAttributionType;
    _Bool __thrift_inThreadAppId_set;
    _Bool __thrift_pageId_set;
    _Bool __thrift_extensionType_set;
    _Bool __thrift_genericAttributionType_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetGenericAttributionType;
- (_Bool)genericAttributionTypeIsSet;
@property(retain, nonatomic) NSString *genericAttributionType;
- (void)unsetExtensionType;
- (_Bool)extensionTypeIsSet;
@property(retain, nonatomic) NSString *extensionType;
- (void)unsetPageId;
- (_Bool)pageIdIsSet;
@property(nonatomic) long long pageId;
- (void)unsetInThreadAppId;
- (_Bool)inThreadAppIdIsSet;
@property(nonatomic) long long inThreadAppId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInThreadAppId:(long long)arg1 pageId:(long long)arg2 extensionType:(id)arg3 genericAttributionType:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

