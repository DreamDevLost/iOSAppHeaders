//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMusicStickerEditViewController, IGMusicStickerPlaybackController, IGStoryMusicTrackClip;

@protocol IGMusicStickerEditViewControllerDelegate <NSObject>
- (void)musicStickerEditViewControllerDidCancel:(IGMusicStickerEditViewController *)arg1;
- (void)musicStickerEditViewController:(IGMusicStickerEditViewController *)arg1 didFinishEditingMusicTrackClip:(IGStoryMusicTrackClip *)arg2 musicPlaybackController:(IGMusicStickerPlaybackController *)arg3;
- (void)musicStickerEditViewControllerDidBeginEditingMusicTrack:(IGMusicStickerEditViewController *)arg1;
@end
