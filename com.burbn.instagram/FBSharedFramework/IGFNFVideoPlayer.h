//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFPlayerStateUpdateListener.h"
#import "IGVideoPlaybackDataProvider.h"

@class CALayer<FNFPlayerDisplayEngine><FNFAVPlayerLayer>, FBKVOController, FNFPlayer, IGFNFVideoView, IGUserSession, IGVideoPerformanceLogger, IGVideoPlaybackAbrDecisionHistoryViewController, IGVideoPlaybackAnalyticsEventHistoryViewController, IGVideoPlaybackQPLLogger, IGVideoPlaybackSimpleLogger, IGVideoPlaybackStateManager, IGVideoPlaybackStateTransitionHistoryViewController, IGVideoPlayerDisplayedFrameGenerator, IGVideoProfilerDashEventListener, NSString;

@interface IGFNFVideoPlayer : NSObject <IGVideoPlaybackDataProvider, FNFPlayerStateUpdateListener>
{
    IGVideoPlaybackSimpleLogger *_simpleLogger;
    NSString *_initialRepresentationId;
    NSString *_mediaId;
    IGUserSession *_userSession;
    IGFNFVideoView *_videoView;
    IGVideoPlaybackAbrDecisionHistoryViewController *_abrDecisionHistoryViewController;
    IGVideoPlaybackStateTransitionHistoryViewController *_stateTransitionHistoryViewController;
    IGVideoPlaybackAnalyticsEventHistoryViewController *_analyticsEventHistoryViewController;
    FNFPlayer *_player;
    CALayer<FNFPlayerDisplayEngine><FNFAVPlayerLayer> *_playerLayer;
    struct NSObject *_asset;
    id _playerPlaybackObserver;
    FBKVOController *_kvoController;
    IGVideoPlayerDisplayedFrameGenerator *_displayedFrameGenerator;
    _Bool _playedFirstFrame;
    _Bool _readyToPlay;
    long long _lastNotifiedLoopCount;
    IGVideoPlaybackStateManager *_stateManager;
    IGVideoPlaybackQPLLogger *_qplLogger;
    IGVideoPerformanceLogger *_performanceLogger;
    IGVideoProfilerDashEventListener *_videoProfiler;
    _Bool _seeking;
    _Bool _playerHasPaused;
    _Bool _playerHasPausedFromSeek;
    _Bool _playerHasStalled;
    long long _playbackState;
    long long _playbackReason;
    long long _lastStopReason;
    long long _streamingFormat;
    _Bool _previousAudioEnabledState;
    _Bool _deferVideoShouldStart;
    _Bool _playerStateIsPlaying;
    _Bool _hasPendingContentReset;
    struct CGSize _currentVideoSize;
    _Bool _isLoopingAsset;
    double _duration;
    _Bool _isLive;
    _Bool _audioOnlyPlayback;
    _Bool _isPIP;
    _Bool _audioEnabled;
    id <IGFNFVideoPlayerDelegate> _delegate;
    id <IGFNFVideoPlayerLiveDelegate> _liveDelegate;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) __weak id <IGFNFVideoPlayerLiveDelegate> liveDelegate; // @synthesize liveDelegate=_liveDelegate;
@property(nonatomic) __weak id <IGFNFVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
- (void).cxx_destruct;
- (id)_loggingParams:(id)arg1 extras:(id)arg2;
- (void)_notifyFailedToPrepareForPlaybackIfPlayerFailed:(long long)arg1;
- (void)_setupPlaybackNotificationsForAsset:(struct NSObject *)arg1;
- (_Bool)_shouldResetPlayerContents;
- (void)_resetPlayerContentsIfAppropriate;
- (void)playerStateUpdated:(unsigned long long)arg1 playerState:(struct FNFPlayerState)arg2;
- (void)_representationChangedFromPreviousRepresentationId:(id)arg1;
- (void)_audioSessionInterruption:(id)arg1;
- (void)_onTimeRangesUpdated:(id)arg1;
- (void)_logAudioStateWithExtras:(id)arg1;
- (id)_videoStartedPlayingLoggingParamsWithReason:(long long)arg1;
- (void)_videoPlayerDidChangePlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)_playerItemDidGenerateWarning:(id)arg1;
- (void)_playerItemDidFail:(id)arg1;
- (void)_playerItemDidStall:(id)arg1;
- (void)_playerItemDidPlayToEnd:(id)arg1;
- (void)_applicationDidBecomeActive;
- (void)didEnterPIP:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *currentRepresentationId;
- (long long)currentState;
@property(readonly, nonatomic) double currentFrameTime;
@property(readonly, nonatomic) double currentTime;
- (void)setVolume:(double)arg1;
- (void)setGravity:(long long)arg1;
- (void)setAudioEnabled:(_Bool)arg1 reason:(long long)arg2;
- (_Bool)_isLiveAsset;
- (_Bool)isPlaying;
@property(readonly, nonatomic) _Bool hasPausedRequest;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) long long loopCount;
@property(readonly, nonatomic) double duration;
- (_Bool)hasAsset;
@property(readonly, nonatomic) struct CGSize currentVideoSize;
@property(readonly, nonatomic) _Bool assetHasAudio;
- (void)_updateDebugOverlay;
- (id)assetDebugDetails;
- (id)debugDetails;
- (void)setPreventSleep:(_Bool)arg1;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (void)currentFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)_transitionToVideoExited;
- (void)_resetPlaybackStates;
- (void)prepareForReuseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_pauseTransitionFromStopReason:(long long)arg1 error:(id)arg2;
- (void)_pauseWithReason:(long long)arg1;
- (void)reset;
- (void)stopWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (long long)_playRquestedState;
- (void)_transitionToVideoShouldStartIfNeeded;
- (void)playWithReason:(long long)arg1;
- (void)seekToTime:(double)arg1 preciseTime:(_Bool)arg2;
- (void)seekToTime:(double)arg1 preciseTime:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_loadAssetCompleted:(struct NSObject *)arg1 videoSize:(struct CGSize)arg2 duration:(double)arg3 playerItemStatus:(long long)arg4 assetLoadingError:(id)arg5;
- (void)loadAsset:(struct NSObject *)arg1 isLive:(_Bool)arg2 initialRepresentationId:(id)arg3 loggingConfig:(id)arg4 enableLogging:(_Bool)arg5 mediaId:(id)arg6 deferVideoShouldStart:(_Bool)arg7 streamingFormat:(long long)arg8 performanceLogger:(id)arg9 videoProfiler:(id)arg10 audioOnlyPlayback:(_Bool)arg11;
- (void)loadAudioUrl:(id)arg1 config:(id)arg2;
- (void)prepareVideo:(id)arg1 config:(id)arg2;
- (void)loadVideo:(id)arg1 config:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithUserSession:(id)arg1;
- (void)dealloc;
- (_Bool)isPIP;
- (struct CGSize)viewSize;
- (long long)playbackReason;
- (double)videoLengthInSeconds;
- (double)currentPositionInSeconds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

