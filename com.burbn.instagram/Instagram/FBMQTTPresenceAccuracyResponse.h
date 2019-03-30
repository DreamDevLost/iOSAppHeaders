//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface FBMQTTPresenceAccuracyResponse : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_caller;
    _Bool __thrift_isAppForeground;
    long long __thrift_appBackgroundTimeSec;
    struct NSMutableArray *__thrift_activeUsers;
    struct NSMutableArray *__thrift_inferredActiveUsers;
    _Bool __thrift_caller_set;
    _Bool __thrift_isAppForeground_set;
    _Bool __thrift_appBackgroundTimeSec_set;
    _Bool __thrift_activeUsers_set;
    _Bool __thrift_inferredActiveUsers_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetInferredActiveUsers;
- (_Bool)inferredActiveUsersIsSet;
@property(retain, nonatomic) NSMutableArray *inferredActiveUsers;
- (void)unsetActiveUsers;
- (_Bool)activeUsersIsSet;
@property(retain, nonatomic) NSMutableArray *activeUsers;
- (void)unsetAppBackgroundTimeSec;
- (_Bool)appBackgroundTimeSecIsSet;
@property(nonatomic) long long appBackgroundTimeSec;
- (void)unsetIsAppForeground;
- (_Bool)isAppForegroundIsSet;
@property(nonatomic) _Bool isAppForeground;
- (void)unsetCaller;
- (_Bool)callerIsSet;
@property(retain, nonatomic) NSString *caller;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCaller:(id)arg1 isAppForeground:(_Bool)arg2 appBackgroundTimeSec:(long long)arg3 activeUsers:(struct NSMutableArray *)arg4 inferredActiveUsers:(struct NSMutableArray *)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
