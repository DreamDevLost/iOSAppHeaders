//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItemLogger.h"

@class IGFeedItemChain, IGUserSession, NSString;

@interface IGChainingFeedItemLogger : IGFeedItemLogger
{
    NSString *_chainingSessionID;
    IGUserSession *_userSession;
    id <IGChainingLoggingProvider> _loggingProvider;
    double _sessionStartTime;
    _Bool _isSessionAlive;
    IGFeedItemChain *_feedItemChain;
}

@property(retain, nonatomic) IGFeedItemChain *feedItemChain; // @synthesize feedItemChain=_feedItemChain;
- (void).cxx_destruct;
- (void)logChainEnd;
- (void)logDidTapSeeMore;
- (void)logSessionDidEndWithFeedItem:(id)arg1;
- (void)logSessionDidStartWithFeedItem:(id)arg1;
- (id)extraInfoForNetworkSource;
- (long long)_indexOfFeedItemInChain:(id)arg1;
- (id)_dictionaryForChainingInfoForFeedItem:(id)arg1;
- (id)additionalLoggingExtrasForFeedItem:(id)arg1;
- (void)clearData;
- (id)initWithListAdapter:(id)arg1 sessionTracker:(id)arg2 chainingSessionID:(id)arg3 userSession:(id)arg4 loggingProvider:(id)arg5;

@end

