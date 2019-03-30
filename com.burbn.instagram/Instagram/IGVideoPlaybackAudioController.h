//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFNFVideoPlayer, IGVideoPlaybackItem;

@interface IGVideoPlaybackAudioController : NSObject
{
    IGFNFVideoPlayer *_videoPlayer;
    IGVideoPlaybackItem *_playbackItem;
    _Bool _playbackEnabled;
    id <IGVideoPlaybackAudioControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGVideoPlaybackAudioControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleDidUnplugHeadphonesNotification:(id)arg1;
- (void)_handleMuteSwitchStateChangedNotification:(id)arg1;
- (void)_handleDidPressVolumeButtonNotification:(id)arg1;
- (void)_stopObservingNotifications;
- (void)_startObservingNotifications;
- (void)updateVideoPlaybackEnabled:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property(readonly, nonatomic) _Bool videoHasSound;
- (void)updateAudioEnabled:(_Bool)arg1 reason:(long long)arg2;
- (void)configureWithVideoPlayer:(id)arg1 playbackItem:(id)arg2;

@end

