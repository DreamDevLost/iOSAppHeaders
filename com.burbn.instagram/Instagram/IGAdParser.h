//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGraphQLParsing.h"

@class NSDateFormatter, NSNumberFormatter, NSString;

@interface IGAdParser : NSObject <IGGraphQLParsing>
{
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
}

@property(readonly, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (id)_paymentInfoFromPaypalDictionary:(id)arg1 error:(id *)arg2;
- (id)_paymentInfoFromCreditCardDictionary:(id)arg1 error:(id *)arg2;
- (id)_paymentInfoFromAdDictionary:(id)arg1 error:(id *)arg2;
- (id)adFromDictionary:(id)arg1 error:(id *)arg2;
- (id)parseGraphQLResponseWithResult:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

