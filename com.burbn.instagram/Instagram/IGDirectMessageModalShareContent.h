//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGFeedItem, NSString;

@interface IGDirectMessageModalShareContent : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGFeedItem *_post;
    IGFeedItem *_storyViewer_storyItem;
    NSString *_storyViewer_reelId;
    NSString *_storyViewer_viewerId;
}

+ (id)textOnly;
+ (id)storyViewerWithStoryItem:(id)arg1 reelId:(id)arg2 viewerId:(id)arg3;
+ (id)post:(id)arg1;
- (void).cxx_destruct;
- (void)matchPost:(CDUnknownBlockType)arg1 storyViewer:(CDUnknownBlockType)arg2 textOnly:(CDUnknownBlockType)arg3;

@end

