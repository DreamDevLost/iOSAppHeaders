//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGMultiAuthorReelOwner, IGSharedStoriesReelOwner, IGUser;

@interface IGReelOwner : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUser *_userReelOwner_user;
    IGMultiAuthorReelOwner *_multiAuthorReelOwner_multiAuthorReelOwner;
    IGSharedStoriesReelOwner *_sharedStoriesReelOwner_sharedStoriesReelOwner;
}

+ (id)userReelOwnerWithUser:(id)arg1;
+ (id)sharedStoriesReelOwnerWithSharedStoriesReelOwner:(id)arg1;
+ (id)multiAuthorReelOwnerWithMultiAuthorReelOwner:(id)arg1;
- (void).cxx_destruct;
- (void)matchUserReelOwner:(CDUnknownBlockType)arg1 multiAuthorReelOwner:(CDUnknownBlockType)arg2 sharedStoriesReelOwner:(CDUnknownBlockType)arg3;
- (id)reelOwnerType;

@end

