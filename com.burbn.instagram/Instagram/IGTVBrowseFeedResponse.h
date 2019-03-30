//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLoadMoreResponseType.h"

@class IGFeedItem, IGTVBadgingResponse, NSArray, NSString;

@interface IGTVBrowseFeedResponse : NSObject <IGLoadMoreResponseType>
{
    NSString *_maxId;
    _Bool _hasCreatedChannel;
    IGFeedItem *_heroFeedItem;
    NSArray *_browseFeedItems;
    IGTVBadgingResponse *_badgingResponse;
}

@property(readonly, nonatomic) _Bool hasCreatedChannel; // @synthesize hasCreatedChannel=_hasCreatedChannel;
@property(readonly, nonatomic) IGTVBadgingResponse *badgingResponse; // @synthesize badgingResponse=_badgingResponse;
@property(readonly, copy, nonatomic) NSArray *browseFeedItems; // @synthesize browseFeedItems=_browseFeedItems;
@property(readonly, nonatomic) IGFeedItem *heroFeedItem; // @synthesize heroFeedItem=_heroFeedItem;
- (void).cxx_destruct;
- (id)maxId;
- (id)initWithHeroFeedItem:(id)arg1 browseFeedItems:(id)arg2 badgingResponse:(id)arg3 hasCreatedChannel:(_Bool)arg4 maxId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

