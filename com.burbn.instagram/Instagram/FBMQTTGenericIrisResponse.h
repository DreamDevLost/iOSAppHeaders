//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class FBMQTTGenericIrisQueueDetails, NSData, NSString;

@interface FBMQTTGenericIrisResponse : TBaseStruct <TBase, NSCoding>
{
    FBMQTTGenericIrisQueueDetails *__thrift_genericIrisQueueDetails;
    int __thrift_responseType;
    NSData *__thrift_paylaod;
    _Bool __thrift_genericIrisQueueDetails_set;
    _Bool __thrift_responseType_set;
    _Bool __thrift_paylaod_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPaylaod;
- (_Bool)paylaodIsSet;
@property(retain, nonatomic) NSData *paylaod;
- (void)unsetResponseType;
- (_Bool)responseTypeIsSet;
@property(nonatomic) int responseType;
- (void)unsetGenericIrisQueueDetails;
- (_Bool)genericIrisQueueDetailsIsSet;
@property(retain, nonatomic) FBMQTTGenericIrisQueueDetails *genericIrisQueueDetails;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGenericIrisQueueDetails:(id)arg1 responseType:(int)arg2 paylaod:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
