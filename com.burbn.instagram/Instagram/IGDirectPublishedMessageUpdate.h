//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectPublishedMessage, IGDirectPublishedMessageMutationUpdate, NSString;

@interface IGDirectPublishedMessageUpdate : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGDirectPublishedMessage *_insertMessage;
    NSString *_removeMessage_messageId;
    IGDirectPublishedMessage *_replaceMessage;
    IGDirectPublishedMessageMutationUpdate *_mutateMessage_mutationUpdate;
}

+ (id)replaceMessage:(id)arg1;
+ (id)removeMessageWithMessageId:(id)arg1;
+ (id)mutateMessageWithMutationUpdate:(id)arg1;
+ (id)insertMessage:(id)arg1;
- (void).cxx_destruct;
- (void)matchInsertMessage:(CDUnknownBlockType)arg1 removeMessage:(CDUnknownBlockType)arg2 replaceMessage:(CDUnknownBlockType)arg3 mutateMessage:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanInsertMessage:(CDUnknownBlockType)arg1 removeMessage:(CDUnknownBlockType)arg2 replaceMessage:(CDUnknownBlockType)arg3 mutateMessage:(CDUnknownBlockType)arg4;

@end

