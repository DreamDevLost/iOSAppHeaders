//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class NSString;

@interface IGDirectPublishedMessageSharedStoryOrPlaceholder : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    id <IGExpiringMediaPosting> _story_story;
    NSString *_story_reelId;
    NSString *_story_reelTypeString;
    NSString *_placeholder_title;
    NSString *_placeholder_message;
}

+ (id)storyWithStory:(id)arg1 reelId:(id)arg2 reelTypeString:(id)arg3;
+ (id)placeholderWithTitle:(id)arg1 message:(id)arg2;
- (void).cxx_destruct;
- (void)matchStory:(CDUnknownBlockType)arg1 placeholder:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanStory:(CDUnknownBlockType)arg1 placeholder:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

