//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGShoppingCheckoutProductItemVariant : NSObject
{
    NSString *_variantId;
    NSString *_variantName;
    NSString *_variantValue;
}

+ (id)productItemVariantWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *variantValue; // @synthesize variantValue=_variantValue;
@property(readonly, copy, nonatomic) NSString *variantName; // @synthesize variantName=_variantName;
@property(readonly, copy, nonatomic) NSString *variantId; // @synthesize variantId=_variantId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithVariantId:(id)arg1 variantName:(id)arg2 variantValue:(id)arg3;

@end

