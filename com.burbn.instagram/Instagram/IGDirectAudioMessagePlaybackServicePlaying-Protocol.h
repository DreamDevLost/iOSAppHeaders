//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGDirectAudio, IGDirectMessageMetadata, NSString;

@protocol IGDirectAudioMessagePlaybackServicePlaying
- (void)markPlaybackSessionEndedWithThreadId:(NSString *)arg1;
- (void)markPlaybackSessionStarted;
- (void)pauseCurrentlyPlayingMessage;
- (void)playAudioMessageWithMetadata:(IGDirectMessageMetadata *)arg1 audio:(IGDirectAudio *)arg2;
@end

