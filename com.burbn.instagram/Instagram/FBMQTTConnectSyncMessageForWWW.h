//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSData, NSString;

@interface FBMQTTConnectSyncMessageForWWW : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_collectionName;
    NSData *__thrift_connectSyncConfigs;
    _Bool __thrift_collectionName_set;
    _Bool __thrift_connectSyncConfigs_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetConnectSyncConfigs;
- (_Bool)connectSyncConfigsIsSet;
@property(retain, nonatomic) NSData *connectSyncConfigs;
- (void)unsetCollectionName;
- (_Bool)collectionNameIsSet;
@property(retain, nonatomic) NSString *collectionName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionName:(id)arg1 connectSyncConfigs:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
