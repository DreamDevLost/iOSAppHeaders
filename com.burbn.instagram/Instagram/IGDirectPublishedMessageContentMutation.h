//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectVisualMessageActionSummary, NSString;

@interface IGDirectPublishedMessageContentMutation : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_markMessageContentSeen_userPk;
    NSString *_like_userPk;
    NSString *_unlike_userPk;
    IGDirectVisualMessageActionSummary *_visualMessageActionSummary;
}

+ (id)visualMessageActionSummary:(id)arg1;
+ (id)unlikeWithUserPk:(id)arg1;
+ (id)markMessageContentSeenWithUserPk:(id)arg1;
+ (id)likeWithUserPk:(id)arg1;
- (void).cxx_destruct;
- (void)matchMarkMessageContentSeen:(CDUnknownBlockType)arg1 like:(CDUnknownBlockType)arg2 unlike:(CDUnknownBlockType)arg3 visualMessageActionSummary:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanMarkMessageContentSeen:(CDUnknownBlockType)arg1 like:(CDUnknownBlockType)arg2 unlike:(CDUnknownBlockType)arg3 visualMessageActionSummary:(CDUnknownBlockType)arg4;

@end

