//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface IGLocationInfoPageModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _showLocationPageSurvey;
    NSDictionary *_linkedBusinessDict;
    NSString *_name;
    NSString *_phone;
    NSString *_website;
    NSString *_category;
    long long _priceRange;
    NSString *_address;
    NSString *_city;
    long long _region;
    NSString *_zipcode;
    NSString *_locationID;
    NSDictionary *_hours;
}

@property(readonly, nonatomic) _Bool showLocationPageSurvey; // @synthesize showLocationPageSurvey=_showLocationPageSurvey;
@property(readonly, copy, nonatomic) NSDictionary *hours; // @synthesize hours=_hours;
@property(readonly, copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(readonly, copy, nonatomic) NSString *zipcode; // @synthesize zipcode=_zipcode;
@property(readonly, nonatomic) long long region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) long long priceRange; // @synthesize priceRange=_priceRange;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *website; // @synthesize website=_website;
@property(readonly, copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSDictionary *linkedBusinessDict; // @synthesize linkedBusinessDict=_linkedBusinessDict;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithLinkedBusinessDict:(id)arg1 name:(id)arg2 phone:(id)arg3 website:(id)arg4 category:(id)arg5 priceRange:(long long)arg6 address:(id)arg7 city:(id)arg8 region:(long long)arg9 zipcode:(id)arg10 locationID:(id)arg11 hours:(id)arg12 showLocationPageSurvey:(_Bool)arg13;

@end

