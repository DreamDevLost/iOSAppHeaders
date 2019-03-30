//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAudioMix, AVPlayer, FBTimer, NSMutableDictionary;

@interface IGStoryMusicAudioPlayer : NSObject
{
    AVPlayer *_avPlayer;
    FBTimer *_stallTimer;
    NSMutableDictionary *_assetPlayabilityObservers;
    NSMutableDictionary *_effectivePlaybackRateObservers;
    _Bool _isPlaying;
    _Bool _isStalled;
    id <IGStoryMusicAudioPlayerDelegate> _delegate;
    AVAsset *_asset;
    double _currentPlaybackTime;
    double _effectivePlaybackRate;
    long long _playabilityStatus;
}

@property(readonly, nonatomic) long long playabilityStatus; // @synthesize playabilityStatus=_playabilityStatus;
@property(readonly, nonatomic) double effectivePlaybackRate; // @synthesize effectivePlaybackRate=_effectivePlaybackRate;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <IGStoryMusicAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeDidDetermineAssetPlayabilityObserver:(id)arg1;
- (id)addDidDetermineAssetPlayabilityObserver:(CDUnknownBlockType)arg1;
- (void)_stopStallTimer;
- (void)_startStallTimer;
@property(nonatomic) double volume;
@property(nonatomic) _Bool muted;
- (void)_effectivePlaybackRateDidChange:(id)arg1;
- (void)removeEffectivePlaybackRateChangeObserver:(id)arg1;
- (id)addEffectivePlaybackRateChangeObserver:(CDUnknownBlockType)arg1;
- (void)_didPlayToEnd;
- (void)_didUpdateToPlaybackTime:(double)arg1;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackRate;
@property(nonatomic) _Bool isPaused;
- (void)pause;
- (void)play;
@property(retain, nonatomic) AVAudioMix *audioMix;
@property(readonly, nonatomic) double audioAssetDuration;
- (void)dealloc;
- (id)init;

@end
