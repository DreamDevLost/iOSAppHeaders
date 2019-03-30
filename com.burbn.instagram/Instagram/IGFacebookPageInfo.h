//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IGFacebookPageAddress, IGFacebookPageCity, IGFacebookPageLocation, IGFacebookPagePhoneNumber, NSArray, NSString, NSURL;

@interface IGFacebookPageInfo : NSObject <NSCopying>
{
    _Bool _isCallToActionEnabled;
    NSString *_pageID;
    NSString *_pageName;
    NSString *_publicEmail;
    IGFacebookPagePhoneNumber *_phoneNumber;
    unsigned long long _contactPreference;
    NSString *_categoryName;
    NSString *_categoryID;
    NSURL *_profilePictureURL;
    IGFacebookPageAddress *_address;
    IGFacebookPageCity *_city;
    IGFacebookPageLocation *_location;
    NSArray *_connectedInstagramAccountIDs;
    NSString *_accessToken;
    NSString *_igUserId;
    NSString *_igUsername;
}

+ (id)pageInfoWithAddressRemoved:(id)arg1;
+ (id)pageInfoWithContactEligibleForBusinessProfile:(id)arg1;
+ (id)extractPageIDsFromPages:(id)arg1 notInPages:(id)arg2;
+ (id)_stringValueFromArrayForKey:(id)arg1 inDict:(id)arg2;
@property(nonatomic) _Bool isCallToActionEnabled; // @synthesize isCallToActionEnabled=_isCallToActionEnabled;
@property(copy, nonatomic) NSString *igUsername; // @synthesize igUsername=_igUsername;
@property(copy, nonatomic) NSString *igUserId; // @synthesize igUserId=_igUserId;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSArray *connectedInstagramAccountIDs; // @synthesize connectedInstagramAccountIDs=_connectedInstagramAccountIDs;
@property(retain, nonatomic) IGFacebookPageLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) IGFacebookPageCity *city; // @synthesize city=_city;
@property(retain, nonatomic) IGFacebookPageAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) unsigned long long contactPreference; // @synthesize contactPreference=_contactPreference;
@property(copy, nonatomic) IGFacebookPagePhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *publicEmail; // @synthesize publicEmail=_publicEmail;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (void).cxx_destruct;
- (void)_discardInvalidAddressAndPhoneNumberInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasPhoneNumber;
- (id)combinedPhoneNumber;
- (_Bool)hasAtLeastOneContactInfo;
- (id)combinedAddressString;
- (_Bool)_stringHasValue:(id)arg1;
- (id)initWithQuickConversionSetting:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

