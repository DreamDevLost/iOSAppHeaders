//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGShoppingCheckoutVariantValue, NSString;

@interface IGShoppingThumbnailVariantPickerSectionController : IGListSectionController
{
    IGShoppingCheckoutVariantValue *_model;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)initWithAnalyticsModule:(id)arg1;

@end

