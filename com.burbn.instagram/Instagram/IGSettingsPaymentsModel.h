//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface IGSettingsPaymentsModel : NSObject
{
    NSArray *_rowTypes;
    NSArray *_rowTitles;
    NSDictionary *_stringToRowTypeDictionary;
}

- (void).cxx_destruct;
- (long long)rowTypeForTitleString:(id)arg1;
- (id)paymentsRowTitleArray;
- (long long)paymentsRowTypeForRow:(long long)arg1;
- (long long)rowCount;
- (id)initWithShouldShowDeliveryInfoRow:(_Bool)arg1;

@end

