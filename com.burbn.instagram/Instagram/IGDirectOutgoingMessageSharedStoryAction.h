//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGDirectOutgoingStoryInteraction, IGEmojiModel;

@interface IGDirectOutgoingMessageSharedStoryAction : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGDirectOutgoingStoryInteraction *_interactionReply_interaction;
    IGEmojiModel *_quickReaction_emoji;
}

+ (id)share;
+ (id)reply;
+ (id)quickReactionWithEmoji:(id)arg1;
+ (id)interactionReplyWithInteraction:(id)arg1;
- (void).cxx_destruct;
- (void)matchShare:(CDUnknownBlockType)arg1 reply:(CDUnknownBlockType)arg2 interactionReply:(CDUnknownBlockType)arg3 quickReaction:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanShare:(CDUnknownBlockType)arg1 reply:(CDUnknownBlockType)arg2 interactionReply:(CDUnknownBlockType)arg3 quickReaction:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

