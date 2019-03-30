//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedVideoCellManager, IGVideo, IGVideoPlaybackConfiguration, IGVideoPlaybackItem, NSError;

@protocol IGFeedVideoCellManagerDelegate <NSObject>
- (IGVideoPlaybackConfiguration *)videoCellManager:(IGFeedVideoCellManager *)arg1 playbackConfigurationForVideo:(IGVideo *)arg2;
- (void)videoCellManager:(IGFeedVideoCellManager *)arg1 didToggleAudioForPlayingItem:(IGVideoPlaybackItem *)arg2;
- (void)videoCellManager:(IGFeedVideoCellManager *)arg1 didUpdatePlaybackProgressForItem:(IGVideoPlaybackItem *)arg2 progress:(double)arg3 duration:(double)arg4;
- (void)videoCellManager:(IGFeedVideoCellManager *)arg1 didLoopItem:(IGVideoPlaybackItem *)arg2;
- (void)videoCellManager:(IGFeedVideoCellManager *)arg1 didFailPlayingItem:(IGVideoPlaybackItem *)arg2 error:(NSError *)arg3;
- (void)videoCellManager:(IGFeedVideoCellManager *)arg1 didPauseItem:(IGVideoPlaybackItem *)arg2;
- (void)videoCellManager:(IGFeedVideoCellManager *)arg1 didBeginPlayingItem:(IGVideoPlaybackItem *)arg2;
@end

