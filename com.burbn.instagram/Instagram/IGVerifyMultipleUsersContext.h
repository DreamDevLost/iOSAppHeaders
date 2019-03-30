//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGVerifyMultipleUsersContext : FBValueObject <NSCopying, NSCoding>
{
    NSString *_nonce;
    NSArray *_users;
}

@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
- (void).cxx_destruct;
- (id)initWithNonce:(id)arg1 users:(id)arg2;

@end

