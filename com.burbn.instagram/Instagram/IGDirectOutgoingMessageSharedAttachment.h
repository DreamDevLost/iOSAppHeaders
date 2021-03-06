//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGCommentModel, IGDirectOutgoingMessageSharedStoryAction, IGFeedItem, IGLocation, IGProductItem, IGUser, NSString;

@interface IGDirectOutgoingMessageSharedAttachment : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGLocation *_location;
    IGUser *_profile_user;
    NSString *_hashtag;
    IGFeedItem *_post_feedItem;
    unsigned long long _post_shareType;
    unsigned long long _post_shareSource;
    IGCommentModel *_post_previewComment;
    id <IGExpiringMediaPosting> _story_story;
    NSString *_story_reelId;
    IGDirectOutgoingMessageSharedStoryAction *_story_action;
    IGProductItem *_product;
}

+ (id)storyWithStory:(id)arg1 reelId:(id)arg2 action:(id)arg3;
+ (id)profileWithUser:(id)arg1;
+ (id)product:(id)arg1;
+ (id)postWithFeedItem:(id)arg1 shareType:(unsigned long long)arg2 shareSource:(unsigned long long)arg3 previewComment:(id)arg4;
+ (id)location:(id)arg1;
+ (id)hashtag:(id)arg1;
- (void).cxx_destruct;
- (void)matchLocation:(CDUnknownBlockType)arg1 profile:(CDUnknownBlockType)arg2 hashtag:(CDUnknownBlockType)arg3 post:(CDUnknownBlockType)arg4 story:(CDUnknownBlockType)arg5 product:(CDUnknownBlockType)arg6;
- (_Bool)matchBooleanLocation:(CDUnknownBlockType)arg1 profile:(CDUnknownBlockType)arg2 hashtag:(CDUnknownBlockType)arg3 post:(CDUnknownBlockType)arg4 story:(CDUnknownBlockType)arg5 product:(CDUnknownBlockType)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

