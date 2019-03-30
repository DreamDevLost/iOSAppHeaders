//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface FBMQTTDeliveryReceiptResponse : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_batchId;
    _Bool __thrift_isSuccess;
    _Bool __thrift_isRetryable;
    NSString *__thrift_errorMessage;
    _Bool __thrift_batchId_set;
    _Bool __thrift_isSuccess_set;
    _Bool __thrift_isRetryable_set;
    _Bool __thrift_errorMessage_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetErrorMessage;
- (_Bool)errorMessageIsSet;
@property(retain, nonatomic) NSString *errorMessage;
- (void)unsetIsRetryable;
- (_Bool)isRetryableIsSet;
@property(nonatomic) _Bool isRetryable;
- (void)unsetIsSuccess;
- (_Bool)isSuccessIsSet;
@property(nonatomic) _Bool isSuccess;
- (void)unsetBatchId;
- (_Bool)batchIdIsSet;
@property(nonatomic) long long batchId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBatchId:(long long)arg1 isSuccess:(_Bool)arg2 isRetryable:(_Bool)arg3 errorMessage:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

