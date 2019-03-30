//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUser, IGUserSession, NSArray, NSString;

@interface IGAdActivityNetworkSource : NSObject
{
    IGUserSession *_userSession;
    id <IGAPIClient> _networker;
    NSString *_lastFeedItemHashID;
    NSString *_lastReelHashID;
    NSString *_lastTimeFeedTimestamp;
    NSString *_lastTimeReelTimestamp;
    NSArray *_feedResponse;
    NSArray *_reelResponse;
    _Bool _shouldFetchFeedAds;
    _Bool _shouldFetchStoryAds;
    NSString *_requestPath;
    IGUser *_targetUser;
    _Bool _hasMoreFeedItems;
    _Bool _hasMoreReels;
    _Bool _hasLoadedOnce;
    unsigned long long _status;
    id <IGAdActivityNetworkSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <IGAdActivityNetworkSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasLoadedOnce; // @synthesize hasLoadedOnce=_hasLoadedOnce;
@property(readonly, nonatomic) _Bool hasMoreReels; // @synthesize hasMoreReels=_hasMoreReels;
@property(readonly, nonatomic) _Bool hasMoreFeedItems; // @synthesize hasMoreFeedItems=_hasMoreFeedItems;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)_requestDictWithType:(unsigned long long)arg1;
- (void)_resetProperties;
- (id)_buildAPIRequestWithPath:(id)arg1 dict:(id)arg2;
- (void)_fetchStoryAdsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchFeedAdsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishRequestWithType:(unsigned long long)arg1;
- (void)beginRequestWithType:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 path:(id)arg2 delegate:(id)arg3;

@end
