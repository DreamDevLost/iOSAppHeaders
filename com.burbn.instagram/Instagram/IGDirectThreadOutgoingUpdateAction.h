//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class NSSet, NSString;

@interface IGDirectThreadOutgoingUpdateAction : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    unsigned long long _mute_targetType;
    _Bool _mute_mute;
    _Bool _flag;
    _Bool _read;
    NSString *_rename_customThreadName;
    NSSet *_addUsers_userPks;
    NSSet *_addUsersToVideoCall_userPKs;
    NSString *_addUsersToVideoCall_videoCallId;
    NSSet *_removeUsers_removedUserPks;
    NSSet *_addAdmins_addedAdminPks;
    NSSet *_removeAdmins_removedAdminPks;
}

+ (id)renameWithCustomThreadName:(id)arg1;
+ (id)removeUsersWithRemovedUserPks:(id)arg1;
+ (id)removeAdminsWithRemovedAdminPks:(id)arg1;
+ (id)read:(_Bool)arg1;
+ (id)muteWithTargetType:(unsigned long long)arg1 mute:(_Bool)arg2;
+ (id)leave;
+ (id)flag:(_Bool)arg1;
+ (id)delete;
+ (id)addUsersWithUserPks:(id)arg1;
+ (id)addUsersToVideoCallWithUserPKs:(id)arg1 videoCallId:(id)arg2;
+ (id)addAdminsWithAddedAdminPks:(id)arg1;
+ (id)acceptValuedRequest;
- (void).cxx_destruct;
- (void)matchMute:(CDUnknownBlockType)arg1 flag:(CDUnknownBlockType)arg2 read:(CDUnknownBlockType)arg3 rename:(CDUnknownBlockType)arg4 leave:(CDUnknownBlockType)arg5 delete:(CDUnknownBlockType)arg6 addUsers:(CDUnknownBlockType)arg7 acceptValuedRequest:(CDUnknownBlockType)arg8 addUsersToVideoCall:(CDUnknownBlockType)arg9 removeUsers:(CDUnknownBlockType)arg10 addAdmins:(CDUnknownBlockType)arg11 removeAdmins:(CDUnknownBlockType)arg12;
- (_Bool)matchBooleanMute:(CDUnknownBlockType)arg1 flag:(CDUnknownBlockType)arg2 read:(CDUnknownBlockType)arg3 rename:(CDUnknownBlockType)arg4 leave:(CDUnknownBlockType)arg5 delete:(CDUnknownBlockType)arg6 addUsers:(CDUnknownBlockType)arg7 acceptValuedRequest:(CDUnknownBlockType)arg8 addUsersToVideoCall:(CDUnknownBlockType)arg9 removeUsers:(CDUnknownBlockType)arg10 addAdmins:(CDUnknownBlockType)arg11 removeAdmins:(CDUnknownBlockType)arg12;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

