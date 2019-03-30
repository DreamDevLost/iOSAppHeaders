//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGRecoverCodeVerificationContext : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_contextForUsername_username;
    NSString *_contextForUsername_obfuscatedPhoneNumber;
    _Bool _contextForUsername_tryToRecoverForMultipleUsers;
    NSString *_contextForPhoneNumber_phoneNumber;
    _Bool _contextForPhoneNumber_tryToRecoverForMultipleUsers;
    NSString *_contextForEmail_email;
    _Bool _contextForEmail_tryToRecoverForMultipleUsers;
}

+ (id)contextForUsernameWithUsername:(id)arg1 obfuscatedPhoneNumber:(id)arg2 tryToRecoverForMultipleUsers:(_Bool)arg3;
+ (id)contextForPhoneNumberWithPhoneNumber:(id)arg1 tryToRecoverForMultipleUsers:(_Bool)arg2;
+ (id)contextForEmailWithEmail:(id)arg1 tryToRecoverForMultipleUsers:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchContextForUsername:(CDUnknownBlockType)arg1 contextForPhoneNumber:(CDUnknownBlockType)arg2 contextForEmail:(CDUnknownBlockType)arg3;

@end
