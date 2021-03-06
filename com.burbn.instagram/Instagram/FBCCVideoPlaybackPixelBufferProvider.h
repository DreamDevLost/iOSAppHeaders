//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCCPlaybackPixelBufferProviding.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, FBCCVideoPlaybackConfiguration, NSString;

@interface FBCCVideoPlaybackPixelBufferProvider : NSObject <FBCCPlaybackPixelBufferProviding>
{
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_videoOutput;
    id _timeObserver;
    _Bool _seeking;
    CDStruct_1b6d18a9 _lastSeekTime;
    _Bool _isPaused;
    id <FBCCPlaybackControllerDelegate> _delegate;
    AVAsset *_asset;
    FBCCVideoPlaybackConfiguration *_configuration;
}

@property(readonly, nonatomic) FBCCVideoPlaybackConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <FBCCPlaybackControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isReversed;
- (void)_didPlayToEnd:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(readonly, nonatomic) double progress;
- (void)seekToPosition:(double)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)playInReverse;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)playFromStart;
- (void)play;
@property(nonatomic, getter=isMuted) _Bool muted;
- (struct __CVBuffer *)copyPixelBufferForTime:(CDStruct_1b6d18a9)arg1 timeForDisplay:(CDStruct_1b6d18a9 *)arg2;
- (_Bool)hasNewPixelBufferForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)providerTimeForHostTime:(double)arg1;
@property(readonly, nonatomic) struct OpaqueCMTimebase *timebase;
- (void)dealloc;
- (id)initWithAVAsset:(id)arg1 customAudioMix:(id)arg2 configuration:(id)arg3;
- (id)initWithAVAsset:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

