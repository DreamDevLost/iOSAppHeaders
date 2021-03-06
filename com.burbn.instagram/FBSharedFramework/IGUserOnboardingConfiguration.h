//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGUserOnboardingConfiguration : NSObject
{
    long long _type;
    NSString *_name;
    NSString *_accountDescription;
    long long _verticalID;
    NSArray *_valueProps;
}

+ (id)onboardingConfigurationForAccountType:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *valueProps; // @synthesize valueProps=_valueProps;
@property(readonly, nonatomic) long long verticalID; // @synthesize verticalID=_verticalID;
@property(readonly, copy, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 name:(id)arg2 description:(id)arg3 verticalID:(long long)arg4 valueProps:(id)arg5;

@end

