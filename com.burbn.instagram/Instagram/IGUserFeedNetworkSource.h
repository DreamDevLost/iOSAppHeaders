//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedNetworkSource.h"

@class IGUser;

@interface IGUserFeedNetworkSource : IGFeedNetworkSource
{
    IGUser *_user;
    _Bool _isCurrentUser;
}

@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)_updateModuleGraphWithNewPosts:(id)arg1 offset:(long long)arg2 isGrid:(_Bool)arg3;
- (void)handleAuthorizationError:(id)arg1;
- (id)_fetchPathForUser:(id)arg1;
- (CDUnknownBlockType)cacheHandlerWithConfig:(id)arg1;
- (_Bool)fetchDataWithConfig:(id)arg1;
- (void)updateModelsWithParsedPosts:(id)arg1 nextMaxID:(id)arg2 config:(id)arg3 clearOut:(_Bool)arg4 response:(id)arg5;
- (id)initWithUser:(id)arg1 posts:(id)arg2 userSession:(id)arg3;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;

@end

