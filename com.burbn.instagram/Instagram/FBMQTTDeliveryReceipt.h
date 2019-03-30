//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface FBMQTTDeliveryReceipt : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_messageSenderFbid;
    long long __thrift_watermarkTimestamp;
    long long __thrift_threadFbid;
    struct NSMutableArray *__thrift_messageIds;
    long long __thrift_messageRecipientFbid;
    _Bool __thrift_isGroupThread;
    struct NSMutableArray *__thrift_adPageMessageTypes;
    _Bool __thrift_messageSenderFbid_set;
    _Bool __thrift_watermarkTimestamp_set;
    _Bool __thrift_threadFbid_set;
    _Bool __thrift_messageIds_set;
    _Bool __thrift_messageRecipientFbid_set;
    _Bool __thrift_isGroupThread_set;
    _Bool __thrift_adPageMessageTypes_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetAdPageMessageTypes;
- (_Bool)adPageMessageTypesIsSet;
@property(retain, nonatomic) NSMutableArray *adPageMessageTypes;
- (void)unsetIsGroupThread;
- (_Bool)isGroupThreadIsSet;
@property(nonatomic) _Bool isGroupThread;
- (void)unsetMessageRecipientFbid;
- (_Bool)messageRecipientFbidIsSet;
@property(nonatomic) long long messageRecipientFbid;
- (void)unsetMessageIds;
- (_Bool)messageIdsIsSet;
@property(retain, nonatomic) NSMutableArray *messageIds;
- (void)unsetThreadFbid;
- (_Bool)threadFbidIsSet;
@property(nonatomic) long long threadFbid;
- (void)unsetWatermarkTimestamp;
- (_Bool)watermarkTimestampIsSet;
@property(nonatomic) long long watermarkTimestamp;
- (void)unsetMessageSenderFbid;
- (_Bool)messageSenderFbidIsSet;
@property(nonatomic) long long messageSenderFbid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageSenderFbid:(long long)arg1 watermarkTimestamp:(long long)arg2 threadFbid:(long long)arg3 messageIds:(struct NSMutableArray *)arg4 messageRecipientFbid:(long long)arg5 isGroupThread:(_Bool)arg6 adPageMessageTypes:(struct NSMutableArray *)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
