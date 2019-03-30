//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGConfirmPhoneSettings : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    _Bool _robocallEnabled;
    long long _smsResendDelay;
    long long _numSMSResendsBeforeRobocall;
    long long _robocallDelay;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) long long robocallDelay; // @synthesize robocallDelay=_robocallDelay;
@property(readonly, nonatomic) _Bool robocallEnabled; // @synthesize robocallEnabled=_robocallEnabled;
@property(readonly, nonatomic) long long numSMSResendsBeforeRobocall; // @synthesize numSMSResendsBeforeRobocall=_numSMSResendsBeforeRobocall;
@property(readonly, nonatomic) long long smsResendDelay; // @synthesize smsResendDelay=_smsResendDelay;
- (id)toJsonDictionary;
- (id)initWithSmsResendDelay:(long long)arg1 numSMSResendsBeforeRobocall:(long long)arg2 robocallEnabled:(_Bool)arg3 robocallDelay:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
