//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL;

@interface IGAccountRecoveryTriageContext : FBValueObject <NSCopying, NSCoding>
{
    NSString *_username;
    NSURL *_profileImageURL;
    NSString *_obfuscatedPhoneNumber;
    NSString *_obfuscatedEmail;
}

@property(readonly, copy, nonatomic) NSString *obfuscatedEmail; // @synthesize obfuscatedEmail=_obfuscatedEmail;
@property(readonly, copy, nonatomic) NSString *obfuscatedPhoneNumber; // @synthesize obfuscatedPhoneNumber=_obfuscatedPhoneNumber;
@property(readonly, copy, nonatomic) NSURL *profileImageURL; // @synthesize profileImageURL=_profileImageURL;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)initWithUsername:(id)arg1 profileImageURL:(id)arg2 obfuscatedPhoneNumber:(id)arg3 obfuscatedEmail:(id)arg4;

@end

