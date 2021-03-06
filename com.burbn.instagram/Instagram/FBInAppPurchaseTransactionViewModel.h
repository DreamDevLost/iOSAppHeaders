//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface FBInAppPurchaseTransactionViewModel : FBValueObject <NSCopying>
{
    NSString *_externalProductID;
    NSString *_receiptData;
    NSString *_externalTransactionID;
    NSString *_payload;
    NSString *_currency;
    NSNumber *_amountInHundreds;
}

@property(readonly, copy, nonatomic) NSNumber *amountInHundreds; // @synthesize amountInHundreds=_amountInHundreds;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(readonly, copy, nonatomic) NSString *externalTransactionID; // @synthesize externalTransactionID=_externalTransactionID;
@property(readonly, copy, nonatomic) NSString *receiptData; // @synthesize receiptData=_receiptData;
@property(readonly, copy, nonatomic) NSString *externalProductID; // @synthesize externalProductID=_externalProductID;
- (void).cxx_destruct;
- (id)initWithExternalProductID:(id)arg1 receiptData:(id)arg2 externalTransactionID:(id)arg3 payload:(id)arg4 currency:(id)arg5 amountInHundreds:(id)arg6;

@end

