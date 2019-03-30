//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectAvatarViewSpec;

@interface IGDirectAvatarState : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGDirectAvatarViewSpec *_empty_noRingsAvatarViewSpec;
    IGDirectAvatarViewSpec *_base_seenMessagesAvatarViewSpec;
    IGDirectAvatarViewSpec *_base_seenMessagesAvatarViewSpecWithDot;
    IGDirectAvatarViewSpec *_base_seenMessagesAvatarViewSpecWithExtraSmallDot;
    IGDirectAvatarViewSpec *_base_unseenMessagesAvatarViewSpec;
    IGDirectAvatarViewSpec *_stories_noStoriesViewSpec;
    IGDirectAvatarViewSpec *_stories_noStoriesViewSpecWithDot;
    IGDirectAvatarViewSpec *_stories_noStoriesViewSpecWithExtraSmallDot;
    IGDirectAvatarViewSpec *_stories_seenStoriesAvatarViewSpec;
    IGDirectAvatarViewSpec *_stories_seenStoriesAvatarWithDotViewSpec;
    IGDirectAvatarViewSpec *_stories_seenStoriesAvatarWithExtraSmallDotViewSpec;
    IGDirectAvatarViewSpec *_stories_unseenStoriesAvatarViewSpec;
    IGDirectAvatarViewSpec *_stories_unseenStoriesCloseFriendsAvatarViewSpec;
    _Bool _stories_showSeenStoryRings;
    _Bool _stories_canShowPresenceOnSeenStoryRings;
}

+ (id)storiesWithNoStoriesViewSpec:(id)arg1 noStoriesViewSpecWithDot:(id)arg2 noStoriesViewSpecWithExtraSmallDot:(id)arg3 seenStoriesAvatarViewSpec:(id)arg4 seenStoriesAvatarWithDotViewSpec:(id)arg5 seenStoriesAvatarWithExtraSmallDotViewSpec:(id)arg6 unseenStoriesAvatarViewSpec:(id)arg7 unseenStoriesCloseFriendsAvatarViewSpec:(id)arg8 showSeenStoryRings:(_Bool)arg9 canShowPresenceOnSeenStoryRings:(_Bool)arg10;
+ (id)emptyWithNoRingsAvatarViewSpec:(id)arg1;
+ (id)baseWithSeenMessagesAvatarViewSpec:(id)arg1 seenMessagesAvatarViewSpecWithDot:(id)arg2 seenMessagesAvatarViewSpecWithExtraSmallDot:(id)arg3 unseenMessagesAvatarViewSpec:(id)arg4;
+ (id)stateForStoryRingsEnabled:(_Bool)arg1 showSeenStoryRings:(_Bool)arg2 showPresenceOnSeenStoryRings:(_Bool)arg3;
+ (id)storiesWithSeenStoryRingsEnabled:(_Bool)arg1 showPresenceOnSeenStoryRings:(_Bool)arg2;
+ (id)base;
+ (id)empty;
- (void).cxx_destruct;
- (void)matchEmpty:(CDUnknownBlockType)arg1 base:(CDUnknownBlockType)arg2 stories:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanEmpty:(CDUnknownBlockType)arg1 base:(CDUnknownBlockType)arg2 stories:(CDUnknownBlockType)arg3;
- (_Bool)isStoryState;

@end

