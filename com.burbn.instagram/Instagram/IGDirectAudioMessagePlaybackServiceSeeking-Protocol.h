//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGDirectAudio, IGDirectMessageMetadata;

@protocol IGDirectAudioMessagePlaybackServiceSeeking
- (void)finishAudioMessageSeekWithMetadata:(IGDirectMessageMetadata *)arg1 audio:(IGDirectAudio *)arg2 progress:(double)arg3;
- (void)updateAudioMessageSeekWithMetadata:(IGDirectMessageMetadata *)arg1 progress:(double)arg2;
- (void)beginAudioMessageSeekWithMetadata:(IGDirectMessageMetadata *)arg1 progress:(double)arg2;
@end
