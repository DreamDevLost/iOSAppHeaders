//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGProductItem, NSString;

@interface IGShoppingPDPCheckoutButtonViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_identifier;
    IGProductItem *_productItem;
    NSString *_soldOutText;
    NSString *_defaultText;
    NSString *_checkoutReceiverId;
    NSString *_checkoutSessionId;
}

@property(readonly, copy, nonatomic) NSString *checkoutSessionId; // @synthesize checkoutSessionId=_checkoutSessionId;
@property(readonly, copy, nonatomic) NSString *checkoutReceiverId; // @synthesize checkoutReceiverId=_checkoutReceiverId;
@property(readonly, copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(readonly, copy, nonatomic) NSString *soldOutText; // @synthesize soldOutText=_soldOutText;
@property(readonly, copy, nonatomic) IGProductItem *productItem; // @synthesize productItem=_productItem;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1 productItem:(id)arg2 soldOutText:(id)arg3 defaultText:(id)arg4 checkoutReceiverId:(id)arg5 checkoutSessionId:(id)arg6;

@end

