//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectPublishedMessageContentMutation, IGDirectPublishedThread, IGDirectThreadMetadataUpdate, NSDictionary, NSString;

@interface IGDirectRealtimeIrisDeltaContent : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_addItem_messageId;
    NSDictionary *_addItem_messageDictionary;
    NSString *_removeItem_messageId;
    NSString *_replaceItem_messageId;
    NSDictionary *_replaceItem_messageDictionary;
    NSString *_mutateItem_messageId;
    IGDirectPublishedMessageContentMutation *_mutateItem_messageContentMutation;
    IGDirectThreadMetadataUpdate *_mutateThreadMetadata;
    NSString *_markSeen_userId;
    NSString *_markSeen_messageId;
    IGDirectPublishedThread *_mergeThreadInfo_thread;
    NSString *_removeThread_threadId;
}

+ (id)replaceItemWithMessageId:(id)arg1 messageDictionary:(id)arg2;
+ (id)removeThreadWithThreadId:(id)arg1;
+ (id)removeItemWithMessageId:(id)arg1;
+ (id)mutateThreadMetadata:(id)arg1;
+ (id)mutateItemWithMessageId:(id)arg1 messageContentMutation:(id)arg2;
+ (id)mergeThreadInfoWithThread:(id)arg1;
+ (id)markSeenWithUserId:(id)arg1 messageId:(id)arg2;
+ (id)empty;
+ (id)addItemWithMessageId:(id)arg1 messageDictionary:(id)arg2;
- (void).cxx_destruct;
- (_Bool)matchBooleanAddItem:(CDUnknownBlockType)arg1 removeItem:(CDUnknownBlockType)arg2 replaceItem:(CDUnknownBlockType)arg3 mutateItem:(CDUnknownBlockType)arg4 mutateThreadMetadata:(CDUnknownBlockType)arg5 markSeen:(CDUnknownBlockType)arg6 mergeThreadInfo:(CDUnknownBlockType)arg7 removeThread:(CDUnknownBlockType)arg8 empty:(CDUnknownBlockType)arg9;
- (void)matchAddItem:(CDUnknownBlockType)arg1 removeItem:(CDUnknownBlockType)arg2 replaceItem:(CDUnknownBlockType)arg3 mutateItem:(CDUnknownBlockType)arg4 mutateThreadMetadata:(CDUnknownBlockType)arg5 markSeen:(CDUnknownBlockType)arg6 mergeThreadInfo:(CDUnknownBlockType)arg7 removeThread:(CDUnknownBlockType)arg8 empty:(CDUnknownBlockType)arg9;

@end
