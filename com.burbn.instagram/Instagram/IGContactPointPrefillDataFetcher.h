//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContactPointPrefillLocalDataStore, IGFacebookInfoFetcher, IGPhoneNumber, NSOrderedSet, NSString;

@interface IGContactPointPrefillDataFetcher : NSObject
{
    id <IGAPIClient> _networker;
    IGFacebookInfoFetcher *_facebookInfoFetcher;
    IGContactPointPrefillLocalDataStore *_contactPointLocalDataStore;
    NSOrderedSet *_currentUsersSortedByAccessTime;
    IGPhoneNumber *_phoneNumber;
    NSString *_email;
}

@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) IGPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)_currentUserPksSortedByAccessTime;
- (void)_fetchContactPointUsingSmartPrefill;
- (void)_fetchContactPoint;
- (void)fetchFullName;
- (void)fetchContactPoints;
- (id)initWithNetworker:(id)arg1 currentUsersSortedByAccessTime:(id)arg2;

@end

