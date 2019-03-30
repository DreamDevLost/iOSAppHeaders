//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class NSSet, NSString;

@interface IGDirectThreadMetadataUpdate : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_renameThread_customName;
    unsigned long long _mute_type;
    _Bool _mute_isMuted;
    _Bool _flag_isFlagged;
    _Bool _manualReadState_isRead;
    NSString *_markSeenThreadWatermark_messageId;
    NSString *_markSeenThreadWatermark_userPk;
    NSString *_replaceVideoCallId_videoCallId;
    NSSet *_addUsers;
    NSSet *_removeUsers_userPks;
    NSSet *_addAdmins_userPks;
    NSSet *_removeAdmins_userPks;
}

+ (id)replaceVideoCallIdWithVideoCallId:(id)arg1;
+ (id)renameThreadWithCustomName:(id)arg1;
+ (id)removeUsersWithUserPks:(id)arg1;
+ (id)removeAdminsWithUserPks:(id)arg1;
+ (id)muteWithType:(unsigned long long)arg1 isMuted:(_Bool)arg2;
+ (id)markSeenThreadWatermarkWithMessageId:(id)arg1 userPk:(id)arg2;
+ (id)manualReadStateWithIsRead:(_Bool)arg1;
+ (id)flagWithIsFlagged:(_Bool)arg1;
+ (id)addUsers:(id)arg1;
+ (id)addAdminsWithUserPks:(id)arg1;
- (void).cxx_destruct;
- (void)matchRenameThread:(CDUnknownBlockType)arg1 mute:(CDUnknownBlockType)arg2 flag:(CDUnknownBlockType)arg3 manualReadState:(CDUnknownBlockType)arg4 markSeenThreadWatermark:(CDUnknownBlockType)arg5 replaceVideoCallId:(CDUnknownBlockType)arg6 addUsers:(CDUnknownBlockType)arg7 removeUsers:(CDUnknownBlockType)arg8 addAdmins:(CDUnknownBlockType)arg9 removeAdmins:(CDUnknownBlockType)arg10;
- (_Bool)matchBooleanRenameThread:(CDUnknownBlockType)arg1 mute:(CDUnknownBlockType)arg2 flag:(CDUnknownBlockType)arg3 manualReadState:(CDUnknownBlockType)arg4 markSeenThreadWatermark:(CDUnknownBlockType)arg5 replaceVideoCallId:(CDUnknownBlockType)arg6 addUsers:(CDUnknownBlockType)arg7 removeUsers:(CDUnknownBlockType)arg8 addAdmins:(CDUnknownBlockType)arg9 removeAdmins:(CDUnknownBlockType)arg10;

@end

