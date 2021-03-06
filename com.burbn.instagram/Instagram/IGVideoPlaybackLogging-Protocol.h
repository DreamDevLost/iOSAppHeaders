//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFNFVideoPlayer, NSDictionary, NSString;

@protocol IGVideoPlaybackLogging <NSObject>
@property long long originalPlaybackReason;
- (void)logVideoCoverPhotoDidFailFetchingWithTime:(double)arg1 extra:(NSDictionary *)arg2;
- (void)logVideoCoverPhotoDidFinishFetchingWithTime:(double)arg1 extra:(NSDictionary *)arg2;
- (void)logVideoCoverPhotoDidStartFetchingWithTime:(double)arg1 extra:(NSDictionary *)arg2;
- (void)logVideoViewForPlayer:(IGFNFVideoPlayer *)arg1 lastPlaybackTime:(double)arg2 loopCount:(long long)arg3 eventName:(NSString *)arg4;
- (void)logVideoDisplayed;
- (void)logVideoTapForPlayer:(IGFNFVideoPlayer *)arg1;
- (void)logVideoCompleteForPlayer:(IGFNFVideoPlayer *)arg1;
@end

