//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMusicStickerPlaybackController;

@protocol IGMusicStickerPlaybackControllerDelegate <NSObject>
- (void)musicStickerPlaybackController:(IGMusicStickerPlaybackController *)arg1 didUpdateStallState:(_Bool)arg2;
- (void)musicStickerPlaybackController:(IGMusicStickerPlaybackController *)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)musicStickerPlaybackController:(IGMusicStickerPlaybackController *)arg1 didLoadMusicTotalDuration:(CDStruct_1b6d18a9)arg2;
- (void)musicStickerPlaybackControllerDidUpdateMuteState:(IGMusicStickerPlaybackController *)arg1;
- (void)musicStickerPlaybackControllerDidPause:(IGMusicStickerPlaybackController *)arg1;
- (void)musicStickerPlaybackControllerDidPlay:(IGMusicStickerPlaybackController *)arg1;
- (void)musicStickerPlaybackControllerIsReadyToPlay:(IGMusicStickerPlaybackController *)arg1;
@end
