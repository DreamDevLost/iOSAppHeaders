//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableDictionary, NSString;

@interface FBMQTTGroupCreationMessagingSendRequest : TBaseStruct <TBase, NSCoding>
{
    struct NSMutableDictionary *__thrift_broadcastRecipients;
    NSString *__thrift_folder;
    _Bool __thrift_isBroadcast;
    NSString *__thrift_message;
    long long __thrift_offlineThreadingId;
    NSString *__thrift_tags;
    long long __thrift_tid;
    NSString *__thrift_to;
    _Bool __thrift_useExistingGroup;
    _Bool __thrift_viewed;
    long long __thrift_associatedObjectId;
    NSString *__thrift_storyId;
    struct NSMutableDictionary *__thrift_extra;
    _Bool __thrift_broadcastRecipients_set;
    _Bool __thrift_folder_set;
    _Bool __thrift_isBroadcast_set;
    _Bool __thrift_message_set;
    _Bool __thrift_offlineThreadingId_set;
    _Bool __thrift_tags_set;
    _Bool __thrift_tid_set;
    _Bool __thrift_to_set;
    _Bool __thrift_useExistingGroup_set;
    _Bool __thrift_viewed_set;
    _Bool __thrift_associatedObjectId_set;
    _Bool __thrift_storyId_set;
    _Bool __thrift_extra_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetExtra;
- (_Bool)extraIsSet;
@property(retain, nonatomic) NSMutableDictionary *extra;
- (void)unsetStoryId;
- (_Bool)storyIdIsSet;
@property(retain, nonatomic) NSString *storyId;
- (void)unsetAssociatedObjectId;
- (_Bool)associatedObjectIdIsSet;
@property(nonatomic) long long associatedObjectId;
- (void)unsetViewed;
- (_Bool)viewedIsSet;
@property(nonatomic) _Bool viewed;
- (void)unsetUseExistingGroup;
- (_Bool)useExistingGroupIsSet;
@property(nonatomic) _Bool useExistingGroup;
- (void)unsetTo;
- (_Bool)toIsSet;
@property(retain, nonatomic) NSString *to;
- (void)unsetTid;
- (_Bool)tidIsSet;
@property(nonatomic) long long tid;
- (void)unsetTags;
- (_Bool)tagsIsSet;
@property(retain, nonatomic) NSString *tags;
- (void)unsetOfflineThreadingId;
- (_Bool)offlineThreadingIdIsSet;
@property(nonatomic) long long offlineThreadingId;
- (void)unsetMessage;
- (_Bool)messageIsSet;
@property(retain, nonatomic) NSString *message;
- (void)unsetIsBroadcast;
- (_Bool)isBroadcastIsSet;
@property(nonatomic) _Bool isBroadcast;
- (void)unsetFolder;
- (_Bool)folderIsSet;
@property(retain, nonatomic) NSString *folder;
- (void)unsetBroadcastRecipients;
- (_Bool)broadcastRecipientsIsSet;
@property(retain, nonatomic) NSMutableDictionary *broadcastRecipients;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBroadcastRecipients:(struct NSMutableDictionary *)arg1 folder:(id)arg2 isBroadcast:(_Bool)arg3 message:(id)arg4 offlineThreadingId:(long long)arg5 tags:(id)arg6 tid:(long long)arg7 to:(id)arg8 useExistingGroup:(_Bool)arg9 viewed:(_Bool)arg10 associatedObjectId:(long long)arg11 storyId:(id)arg12 extra:(struct NSMutableDictionary *)arg13;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

