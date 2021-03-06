//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGCommentModel, IGDirectPublishedMessageSharedLiveVideoAction, IGDirectPublishedMessageSharedStoryAction, IGFeedItem, IGLocation, IGProductItem, IGUser, NSArray, NSNumber, NSString;

@interface IGDirectPublishedMessageSharedAttachment : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGLocation *_location_location;
    NSArray *_location_previewMediaForLocation;
    IGUser *_profile_user;
    NSArray *_profile_previewMediaForProfile;
    NSString *_hashtag_hashtag;
    NSNumber *_hashtag_serverMediaCount;
    NSArray *_hashtag_previewMediaForHashtag;
    IGFeedItem *_post_feedItem;
    unsigned long long _post_shareType;
    unsigned long long _post_shareSource;
    IGCommentModel *_post_previewComment;
    IGFeedItem *_felix_felixFeedItem;
    long long _liveVideo_textType;
    long long _liveVideo_playbackOffset;
    IGDirectPublishedMessageSharedLiveVideoAction *_liveVideo_liveVideoAction;
    IGDirectPublishedMessageSharedStoryAction *_story_action;
    IGProductItem *_product;
}

+ (id)storyWithAction:(id)arg1;
+ (id)profileWithUser:(id)arg1 previewMediaForProfile:(id)arg2;
+ (id)product:(id)arg1;
+ (id)postWithFeedItem:(id)arg1 shareType:(unsigned long long)arg2 shareSource:(unsigned long long)arg3 previewComment:(id)arg4;
+ (id)locationWithLocation:(id)arg1 previewMediaForLocation:(id)arg2;
+ (id)liveVideoWithTextType:(long long)arg1 playbackOffset:(long long)arg2 liveVideoAction:(id)arg3;
+ (id)hashtagWithHashtag:(id)arg1 serverMediaCount:(id)arg2 previewMediaForHashtag:(id)arg3;
+ (id)felixWithFelixFeedItem:(id)arg1;
- (void).cxx_destruct;
- (void)matchLocation:(CDUnknownBlockType)arg1 profile:(CDUnknownBlockType)arg2 hashtag:(CDUnknownBlockType)arg3 post:(CDUnknownBlockType)arg4 felix:(CDUnknownBlockType)arg5 liveVideo:(CDUnknownBlockType)arg6 story:(CDUnknownBlockType)arg7 product:(CDUnknownBlockType)arg8;
- (_Bool)matchBooleanLocation:(CDUnknownBlockType)arg1 profile:(CDUnknownBlockType)arg2 hashtag:(CDUnknownBlockType)arg3 post:(CDUnknownBlockType)arg4 felix:(CDUnknownBlockType)arg5 liveVideo:(CDUnknownBlockType)arg6 story:(CDUnknownBlockType)arg7 product:(CDUnknownBlockType)arg8;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

