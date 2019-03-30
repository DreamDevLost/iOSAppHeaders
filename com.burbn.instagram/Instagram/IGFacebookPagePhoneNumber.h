//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IGFacebookPagePhoneNumber : NSObject <NSCopying>
{
    NSString *_countryCode;
    NSString *_countryNumber;
    NSString *_nationalNumber;
}

+ (id)countryCodeFromCountryNumber:(id)arg1;
@property(copy, nonatomic) NSString *nationalNumber; // @synthesize nationalNumber=_nationalNumber;
@property(copy, nonatomic) NSString *countryNumber; // @synthesize countryNumber=_countryNumber;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *displayedFormatedNumber;
@property(readonly, copy, nonatomic) NSString *formatedNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFullPhoneNumber:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

