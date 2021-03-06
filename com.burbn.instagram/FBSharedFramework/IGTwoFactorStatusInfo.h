//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGTwoFactorStatusInfo : NSObject
{
    _Bool _isPhoneNumberConfirmed;
    _Bool _isTwoFactorSMSEnabled;
    _Bool _isTwoFactorAuthAppEnabled;
    NSString *_phoneNumber;
    NSArray *_backupCodes;
}

@property(nonatomic) _Bool isTwoFactorAuthAppEnabled; // @synthesize isTwoFactorAuthAppEnabled=_isTwoFactorAuthAppEnabled;
@property(nonatomic) _Bool isTwoFactorSMSEnabled; // @synthesize isTwoFactorSMSEnabled=_isTwoFactorSMSEnabled;
@property(nonatomic) _Bool isPhoneNumberConfirmed; // @synthesize isPhoneNumberConfirmed=_isPhoneNumberConfirmed;
@property(retain, nonatomic) NSArray *backupCodes; // @synthesize backupCodes=_backupCodes;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)arg1 backupCodes:(id)arg2 isPhoneNumberConfirmed:(_Bool)arg3 isTwoFactorSMSEnabled:(_Bool)arg4 isTwoFactorAuthAppEnabled:(_Bool)arg5;

@end

