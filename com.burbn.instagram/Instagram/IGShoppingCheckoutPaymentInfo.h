//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGShoppingCheckoutPaymentInfoExtraData, NSString;

@interface IGShoppingCheckoutPaymentInfo : NSObject
{
    NSString *_paymentItemType;
    NSString *_igReceiverId;
    NSString *_igReferrerFbId;
    NSString *_orderId;
    NSString *_action;
    IGShoppingCheckoutPaymentInfoExtraData *_extraData;
}

@property(copy, nonatomic) IGShoppingCheckoutPaymentInfoExtraData *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *igReferrerFbId; // @synthesize igReferrerFbId=_igReferrerFbId;
@property(copy, nonatomic) NSString *igReceiverId; // @synthesize igReceiverId=_igReceiverId;
@property(copy, nonatomic) NSString *paymentItemType; // @synthesize paymentItemType=_paymentItemType;
- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPaymentItemType:(id)arg1 igReceiverId:(id)arg2 igReferrerFbId:(id)arg3 orderId:(id)arg4 action:(id)arg5 products:(id)arg6;

@end

