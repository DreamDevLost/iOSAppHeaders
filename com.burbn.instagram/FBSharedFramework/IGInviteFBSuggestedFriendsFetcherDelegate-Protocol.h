//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSNumber;

@protocol IGInviteFBSuggestedFriendsFetcherDelegate <NSObject>
- (void)fetchWithoutFacebookLoggedIn;
- (void)fetchDidFailWithError:(NSError *)arg1 entryPoint:(unsigned long long)arg2;
- (void)fetchDidSuccessWithFriends:(NSArray *)arg1 friendsCount:(NSNumber *)arg2 hasMoreFriends:(_Bool)arg3 entryPoint:(unsigned long long)arg4;
@end

