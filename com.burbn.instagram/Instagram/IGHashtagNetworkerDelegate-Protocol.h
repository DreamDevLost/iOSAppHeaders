//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDiscoveryEYMFModel, IGHashtagInfoResponse, IGHashtagMainFeedDataModel, IGHashtagNetworker, IGHashtagNetworkerRequestConfig, IGReel, NSError;

@protocol IGHashtagNetworkerDelegate <NSObject>
- (void)hashtagNetworker:(IGHashtagNetworker *)arg1 didFailDataRequest:(NSError *)arg2 networkRequestType:(long long)arg3 config:(IGHashtagNetworkerRequestConfig *)arg4;
- (void)hashtagNetworker:(IGHashtagNetworker *)arg1 didCompleteHeaderEYMFRequestRequest:(IGDiscoveryEYMFModel *)arg2;
- (void)hashtagNetworker:(IGHashtagNetworker *)arg1 didCompleteReelRequest:(IGReel *)arg2 config:(IGHashtagNetworkerRequestConfig *)arg3;
- (void)hashtagNetworker:(IGHashtagNetworker *)arg1 didCompleteMainFeedRequest:(IGHashtagMainFeedDataModel *)arg2 config:(IGHashtagNetworkerRequestConfig *)arg3;
- (void)hashtagNetworker:(IGHashtagNetworker *)arg1 didCompleteInfoRequest:(IGHashtagInfoResponse *)arg2 config:(IGHashtagNetworkerRequestConfig *)arg3;
- (void)hashtagNetworker:(IGHashtagNetworker *)arg1 didStartLoadingWithConfig:(IGHashtagNetworkerRequestConfig *)arg2 networkRequestType:(long long)arg3;
@end

