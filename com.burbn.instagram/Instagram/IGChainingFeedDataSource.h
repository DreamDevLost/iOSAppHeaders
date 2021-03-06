//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGChainingNetworkSource, IGFeedItemChain, IGUserSession;

@interface IGChainingFeedDataSource : NSObject
{
    IGChainingNetworkSource *_networkSource;
    IGUserSession *_userSession;
    _Bool _isLoading;
    id <IGChainingFeedDataSourceDelegate> _delegate;
    IGFeedItemChain *_feedItemChain;
}

@property(readonly, nonatomic) IGFeedItemChain *feedItemChain; // @synthesize feedItemChain=_feedItemChain;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <IGChainingFeedDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateModuleGraphWithNewPosts:(id)arg1 offset:(long long)arg2;
- (void)_handleLoadFailedWithErrorMessage:(id)arg1;
- (void)_handleLoadCompletedWithResponse:(id)arg1;
- (void)removeFeedItem:(id)arg1;
@property(nonatomic) _Bool hasScrolledOnce;
- (id)allChainItems;
- (void)loadMorePostsWithInfo:(id)arg1 surface:(long long)arg2 trigger:(long long)arg3;
@property(readonly, nonatomic) _Bool hasMoreAvailable;
- (id)initWithUserSession:(id)arg1 chain:(id)arg2 networkSource:(id)arg3;

@end

