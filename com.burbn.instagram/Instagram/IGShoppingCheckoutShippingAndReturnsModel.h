//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGShoppingCheckoutShippingAndReturnsModel : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    _Bool _showPurchaseProtection;
    NSArray *_sections;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool showPurchaseProtection; // @synthesize showPurchaseProtection=_showPurchaseProtection;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)initWithSections:(id)arg1 showPurchaseProtection:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

