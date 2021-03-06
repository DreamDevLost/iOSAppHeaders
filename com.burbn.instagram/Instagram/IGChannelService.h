//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNetworkSourceDelegate.h"
#import "IGVideoFeedService.h"

@class IGChannelFeedDataCache, IGNetworkSource, IGUserSession, NSString;

@interface IGChannelService : NSObject <IGNetworkSourceDelegate, IGVideoFeedService>
{
    NSString *_channelType;
    NSString *_fetchPath;
    IGNetworkSource *_networkSource;
    IGUserSession *_userSession;
    IGChannelFeedDataCache *_feedDataCache;
    id <IGVideoFeedServiceDelegate> _delegate;
    NSString *_channelId;
}

@property(readonly, copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(nonatomic) __weak id <IGVideoFeedServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cacheChannelFeedData:(id)arg1;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2;
- (id)feedType;
- (id)feedSourceId;
- (void)updateWithLastSeenFeedItem:(id)arg1;
- (void)removeFeedItem:(id)arg1;
- (id)allFeedItems;
- (void)cancelRequest;
- (void)fetchMore;
- (void)fetch;
- (_Bool)isLoading;
- (_Bool)hasMoreAvailable;
- (id)initWithChannelId:(id)arg1 channelType:(id)arg2 feedDataCache:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

