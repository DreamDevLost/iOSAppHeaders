//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGShoppingCheckoutProductGroup;

@interface IGShoppingPDPVariantSelectorSectionDataModel : FBValueObject <NSCopying, NSCoding>
{
    IGShoppingCheckoutProductGroup *_productGroup;
}

@property(readonly, copy, nonatomic) IGShoppingCheckoutProductGroup *productGroup; // @synthesize productGroup=_productGroup;
- (void).cxx_destruct;
- (id)initWithProductGroup:(id)arg1;

@end
