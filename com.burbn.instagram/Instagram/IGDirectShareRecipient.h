//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface IGDirectShareRecipient : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_users;
    unsigned long long _recipientType;
    NSString *_threadID;
    NSString *_threadName;
    NSString *_userComparisonKey;
}

+ (id)_userComparisonKeyForUsers:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)recipientWithThreadId:(id)arg1;
+ (id)recipientWithThread:(id)arg1;
+ (id)recipientWithUsers:(id)arg1;
@property(copy, nonatomic) NSString *userComparisonKey; // @synthesize userComparisonKey=_userComparisonKey;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(nonatomic) unsigned long long recipientType; // @synthesize recipientType=_recipientType;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)threadIdBasedOnUsers;
- (_Bool)isSingleBlockedUser;
- (_Bool)hasSameUsersAsRecipient:(id)arg1;
- (_Bool)isUserBackedThreadWithNoThreadId;
- (_Bool)hasValidThreadId;
- (_Bool)isBusinessThread;
- (_Bool)isGroupThread;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

