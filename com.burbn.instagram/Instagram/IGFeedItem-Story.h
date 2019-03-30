//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItem.h"

#import "IGStoryItemType.h"

@class NSString;

@interface IGFeedItem (Story) <IGStoryItemType>
- (_Bool)isInternal;
- (id)arEffectStoryLink;
- (id)felixLinkMediaId;
- (id)storyLinkUrl;
- (_Bool)isBrandedContent;
- (_Bool)isSponsored;
- (_Bool)isNewUploadInfra;
- (id)pendingUploadId;
- (id)feedItem;
- (double)totalDuration;
- (_Bool)shouldLoop;
- (id)mediaID;
- (id)tapModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

